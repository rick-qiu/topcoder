/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10589
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

class AgeEncoding {
public:
    double getRadix(int age, string candlesLine);
};

double AgeEncoding::getRadix(int age, string candlesLine) {
    double ret;
    return ret;
}


int test0() {
    int age = 1;
    string candlesLine = "0000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int age = 10;
    string candlesLine = "00010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int age = 21;
    string candlesLine = "10101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int age = 6;
    string candlesLine = "10100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.414213562373095;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int age = 21;
    string candlesLine = "10111111110111101111111100111111110111111111111100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9685012944510603;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int age = 16;
    string candlesLine = "1";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int age = 100;
    string candlesLine = "00000000000000000000000000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int age = 2;
    string candlesLine = "00000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int age = 67;
    string candlesLine = "000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int age = 45;
    string candlesLine = "0000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int age = 12;
    string candlesLine = "000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int age = 1;
    string candlesLine = "0";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int age = 89;
    string candlesLine = "0000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int age = 30;
    string candlesLine = "00000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int age = 92;
    string candlesLine = "00000000000000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int age = 1;
    string candlesLine = "11";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int age = 1;
    string candlesLine = "00000101010111100101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int age = 1;
    string candlesLine = "1000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int age = 1;
    string candlesLine = "00000000000000000000000011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int age = 1;
    string candlesLine = "11111111111111111111111111111111111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int age = 2;
    string candlesLine = "11111111111111111111111111111111111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000004;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int age = 9;
    string candlesLine = "11010100000110110011010011110000001010001100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9644794251470961;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int age = 5;
    string candlesLine = "0010111100011100100011100111110010100100000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9309717675171341;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int age = 16;
    string candlesLine = "101100101001010001000100001100010100101010011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9944695714404173;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int age = 18;
    string candlesLine = "1111111111111111111111001110111110101011010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9693534692411785;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int age = 8;
    string candlesLine = "11011011000101100100001110110011011110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9311630570557434;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int age = 9;
    string candlesLine = "10110100100000000000001111000010111101001100100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9627071967682421;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int age = 22;
    string candlesLine = "1111110110111001110001111110000011011111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9895933446048641;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int age = 23;
    string candlesLine = "0010111110011000110000110001001110111111011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9977234441488432;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int age = 2;
    string candlesLine = "1110111101100011000001111100001011010111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5006397696081122;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int age = 2;
    string candlesLine = "1110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8105357137661366;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int age = 13;
    string candlesLine = "000100101100100001010000100010011000101011110101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9784654171063285;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int age = 12;
    string candlesLine = "10101000100110100100001111101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9872784768442795;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int age = 5;
    string candlesLine = "00101100000011010000111100101100011111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8290109440147917;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int age = 10;
    string candlesLine = "011100111001110010111110101110100100011011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9477260512129781;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int age = 2;
    string candlesLine = "10000000000000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int age = 50;
    string candlesLine = "11111111111111111111111111111111111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int age = 36;
    string candlesLine = "11011110111011101111011001110101011100001111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int age = 10;
    string candlesLine = "00111111000111100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int age = 3;
    string candlesLine = "10000000000000100000000000000010000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int age = 18;
    string candlesLine = "111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int age = 4;
    string candlesLine = "10101010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int age = 47;
    string candlesLine = "00011111111111111111111111111111111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int age = 25;
    string candlesLine = "01010101010101010101010101010101010101010101010101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int age = 6;
    string candlesLine = "00001000000000000011000000010000001000000000010000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int age = 100;
    string candlesLine = "10";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int age = 51;
    string candlesLine = "01000011101101111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2236414744554485;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int age = 60;
    string candlesLine = "100100001000011000000011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1509288756564846;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int age = 54;
    string candlesLine = "001111101110001111111100000101000010011011001000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.028016867065817;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int age = 23;
    string candlesLine = "00100111001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3571025593119632;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int age = 29;
    string candlesLine = "010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int age = 100;
    string candlesLine = "111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 9.462429422585636;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int age = 34;
    string candlesLine = "1110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.846080416586016;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int age = 43;
    string candlesLine = "000001100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 3.1997844694936415;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int age = 28;
    string candlesLine = "0110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 4.815072906367325;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int age = 46;
    string candlesLine = "00101001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.05177896477014;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int age = 86;
    string candlesLine = "0111001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.196489503489521;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int age = 97;
    string candlesLine = "100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 9.848857801796104;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int age = 32;
    string candlesLine = "01100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8740406307399775;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int age = 94;
    string candlesLine = "00000011100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.823192803157676;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int age = 42;
    string candlesLine = "0101010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int age = 40;
    string candlesLine = "00001111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int age = 100;
    string candlesLine = "11";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 99.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int age = 31;
    string candlesLine = "000111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int age = 82;
    string candlesLine = "10001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int age = 1;
    string candlesLine = "1";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int age = 1;
    string candlesLine = "001000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int age = 1;
    string candlesLine = "0100101000100001100110000110000010011011000001100";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7156223647008804;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int age = 1;
    string candlesLine = "1001011101111110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5021889649688411;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int age = 1;
    string candlesLine = "01";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int age = 12;
    string candlesLine = "000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int age = 99;
    string candlesLine = "0001010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 4.55401544737385;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int age = 1;
    string candlesLine = "1000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int age = 1;
    string candlesLine = "00001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int age = 1;
    string candlesLine = "111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int age = 1;
    string candlesLine = "10000000000000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int age = 1;
    string candlesLine = "001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int age = 40;
    string candlesLine = "0001010101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7320508075688772;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int age = 1;
    string candlesLine = "001001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int age = 1;
    string candlesLine = "000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int age = 1;
    string candlesLine = "10001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int age = 1;
    string candlesLine = "00000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int age = 79;
    string candlesLine = "10011110000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.158750849464906;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int age = 1;
    string candlesLine = "0001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int age = 1;
    string candlesLine = "000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int age = 17;
    string candlesLine = "000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int age = 1;
    string candlesLine = "0101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int age = 1;
    string candlesLine = "101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int age = 22;
    string candlesLine = "000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int age = 1;
    string candlesLine = "01000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int age = 12;
    string candlesLine = "1001000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4422495703074083;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int age = 1;
    string candlesLine = "1000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int age = 100;
    string candlesLine = "00000000000000000000000000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int age = 1;
    string candlesLine = "10000000000000000000000000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int age = 1;
    string candlesLine = "00000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int age = 1;
    string candlesLine = "0000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int age = 1;
    string candlesLine = "000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int age = 100;
    string candlesLine = "00";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int age = 2;
    string candlesLine = "0000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int age = 1;
    string candlesLine = "10000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int age = 1;
    string candlesLine = "00000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int age = 1;
    string candlesLine = "1000000000000000000000000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int age = 2;
    string candlesLine = "0000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int age = 76;
    string candlesLine = "0000000000000101010000010101000000000010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1303025599812826;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int age = 1;
    string candlesLine = "1111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int age = 12;
    string candlesLine = "0";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int age = 2;
    string candlesLine = "00000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int age = 1;
    string candlesLine = "00";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int age = 1;
    string candlesLine = "1111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int age = 1;
    string candlesLine = "10111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int age = 13;
    string candlesLine = "0000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int age = 1;
    string candlesLine = "00000000000000000000000000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int age = 1;
    string candlesLine = "1110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5436890126920764;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int age = 1;
    string candlesLine = "0000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int age = 1;
    string candlesLine = "000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int age = 2;
    string candlesLine = "0000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int age = 10;
    string candlesLine = "00000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int age = 1;
    string candlesLine = "00000000011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int age = 15;
    string candlesLine = "0000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int age = 1;
    string candlesLine = "000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -2.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int age = 1;
    string candlesLine = "1000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int age = 1;
    string candlesLine = "000010000000000000000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int age = 1;
    string candlesLine = "01001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int age = 1;
    string candlesLine = "00101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int age = 100;
    string candlesLine = "10010111100011111111111000011111111100001111111000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.039931700589173;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int age = 97;
    string candlesLine = "10111111110111101111111100111111101111111111111001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0307240644576114;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int age = 99;
    string candlesLine = "1011111111011110111111110011111111011111111111110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0324432710335931;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int age = 1;
    string candlesLine = "110";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6180339887498949;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int age = 99;
    string candlesLine = "0000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int age = 37;
    string candlesLine = "11111111111111111111111111111111111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9870777697927564;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int age = 10;
    string candlesLine = "0";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int age = 1;
    string candlesLine = "101101101";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int age = 11;
    string candlesLine = "000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int age = 12;
    string candlesLine = "00000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int age = 4;
    string candlesLine = "00";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int age = 2;
    string candlesLine = "000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int age = 1;
    string candlesLine = "11111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int age = 10;
    string candlesLine = "000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int age = 1;
    string candlesLine = "1110111101111111100111111110111111111111101101011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int age = 1;
    string candlesLine = "00100010";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7548776662466927;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int age = 1;
    string candlesLine = "10000000000000000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int age = 1;
    string candlesLine = "011";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int age = 42;
    string candlesLine = "00000000000000000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int age = 1;
    string candlesLine = "10";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int age = 5;
    string candlesLine = "00000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int age = 26;
    string candlesLine = "111111111111111111111111111111111111111111111111";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9708225675355608;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int age = 12;
    string candlesLine = "000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int age = 100;
    string candlesLine = "0";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int age = 20;
    string candlesLine = "0";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int age = 1;
    string candlesLine = "10000001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int age = 5;
    string candlesLine = "10000000000000000000000000000000000000000000000000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0333910454328783;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int age = 1;
    string candlesLine = "1001";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int age = 2;
    string candlesLine = "00";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int age = 10;
    string candlesLine = "0000";
    AgeEncoding* pObj = new AgeEncoding();
    clock_t start = clock();
    double result = pObj->getRadix(age, candlesLine);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663117&rd=14147&pm=10589
********************************************************************************
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;
 
const int ITER = 1000;
 
struct AgeEncoding
{
    double getRadix (int age, string candles)
    {
        while (candles.length () > 0 && candles [0] == '0')
            candles = candles.substr (1);
 
        if (candles.length () == 0)
            return -1;
 
        if (candles.length () == 1)
            return age == 1 ? -2 : -1;
 
        if (age == 1 && candles.length () > 1 && candles [candles.length () - 1] == '1')
            return -1;
 
        double lo = 0, hi = 1000;
 
        for (int it = 0; it < ITER; it++)
        {
            double mid = (lo + hi) / 2, p = 1, sum = 0;
 
            for (int i = (int) candles.length () - 1; i >= 0; i--)
            {
                if (candles [i] == '1')
                    sum += p;
 
                p *= mid;
            }
 
            if (sum < age)
                lo = mid;
            else
                hi = mid;
        }
 
        return lo;
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/