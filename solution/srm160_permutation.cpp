/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1135
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

class Permutation {
public:
    string best(int n);
};

string Permutation::best(int n) {
    string ret;
    return ret;
}


int test0() {
    int n = 6;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBEFD";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 7;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGD";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 29;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEAGHIJKLFNOPQRSTMVWXYZabcU";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 1;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 8;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGHD";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 3;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 4;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 5;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BADEC";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 9;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 10;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BADECGHIJF";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 11;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBEFDHIJKG";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 12;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGDIJKLH";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 13;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHEJKLMI";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 14;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGDIJKLMNH";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 15;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGHDJKLMNOI";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 16;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIEKLMNOPJ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 17;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BADECGHIJFLMNOPQK";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 18;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBEFDHIJKGMNOPQRL";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 19;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGDIJKLHNOPQRSM";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 20;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHEJKLMIOPQRSTN";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 21;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDECGHIFKLMNJPQRSTUO";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 22;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCEFDHIJGLMNOKQRSTUVP";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 23;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGHDJKLMNOIQRSTUVWP";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 24;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHIEKLMNOPJRSTUVWXQ";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 25;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIEKLMNOPJRSTUVWXYQ";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 26;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDEBGHIJFLMNOPQKSTUVWXYZR";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 27;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIEKLMNOPJRSTUVWXYZaQ";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 28;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BADECGHIJFLMNOPQKSTUVWXYZabR";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 30;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGDIJKLHNOPQRSMUVWXYZabcdT";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 31;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHEJKLMIOPQRSTNVWXYZabcdeU";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 32;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGDIJKLHNOPQRSMUVWXYZabcdefT";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 33;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHEJKLMIOPQRSTNVWXYZabcdefgU";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 34;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGHDJKLMNOIQRSTUVWPYZabcdefghX";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 35;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHIEKLMNOPJRSTUVWXQZabcdefghiY";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 36;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIEKLMNOPJRSTUVWXYQabcdefghijZ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 37;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDEBGHIJFLMNOPQKSTUVWXYZRbcdefghijka";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 38;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIEKLMNOPJRSTUVWXYQabcdefghijklZ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 39;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDEBGHIJFLMNOPQKSTUVWXYZRbcdefghijklma";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 40;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEAGHIJKLFNOPQRSTMVWXYZabcUefghijklmnd";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 41;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BADECGHIJFLMNOPQKSTUVWXYZabRdefghijklmnoc";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 42;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEAGHIJKLFNOPQRSTMVWXYZabcUefghijklmnopd";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 43;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGDIJKLHNOPQRSMUVWXYZabcdTfghijklmnopqe";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 44;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHEJKLMIOPQRSTNVWXYZabcdeUghijklmnopqrf";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 45;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDECGHIFKLMNJPQRSTUOWXYZabcdefVhijklmnopqrsg";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 46;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCEFDHIJGLMNOKQRSTUVPXYZabcdefgWijklmnopqrsth";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 47;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCAEFGHDJKLMNOIQRSTUVWPYZabcdefghXjklmnopqrstui";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 48;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDBFGHIEKLMNOPJRSTUVWXQZabcdefghiYklmnopqrstuvj";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 49;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAFGHIEKLMNOPJRSTUVWXYQabcdefghijZlmnopqrstuvwk";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 50;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDEBGHIJFLMNOPQKSTUVWXYZRbcdefghijkamnopqrstuvwxl";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 51;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDEFCHIJKGMNOPQRLTUVWXYZaScdefghijklbnopqrstuvwxym";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 52;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCEFGDIJKLHNOPQRSMUVWXYZabTdefghijklmcopqrstuvwxyzn";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 52;
    Permutation* pObj = new Permutation();
    clock_t start = clock();
    string result = pObj->best(n);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCEFGDIJKLHNOPQRSMUVWXYZabTdefghijklmcopqrstuvwxyzn";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=302501&rd=4605&pm=1135
********************************************************************************
#include <string>
using namespace std;
class Permutation{
public:
string best(int count)
{
  int r[]={0,1,2,3,4,6,6,12,15,20,30,30,60,60,84,105,140,210,210,420,420,420,420,840,840,1260,1260,1540,2310,2520,4620,4620,5460,5460,9240,9240,13860,13860,16380,16380,27720,30030,32760,60060,60060,60060,60060,120120,120120,180180,180180,180180,180180};
  int cur,sum;
  int num[60],nc=0,cnum;
  int i,j;
  string ret;
  char s[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",tc;
  cur=r[count];
  for (i=2;i<=60;i++)
    if (cur%i==0)
    {
      cnum=1;
      while(cur%i==0)
      {
        cnum*=i;
        cur/=i;
      }
      num[++nc]=cnum;
    }
  for (sum=0,i=1;i<=nc;i++) sum+=num[i];
  for (i=1;i<=count-sum;i++) num[++nc]=1;
  for (i=1;i<=nc;i++)
    for (j=i+1;j<=nc;j++)
      if (num[j]<num[i])
      {cnum=num[j];num[j]=num[i];num[i]=cnum;}
  s[count]=0;
  for (cur=0,i=1;i<=nc;i++)
  {
    tc=s[cur];
    for (j=cur+1;j<cur+num[i];j++) s[j-1]=s[j];
    s[cur+num[i]-1]=tc;
    cur+=num[i];
  }
  ret="";ret+=s;
  return ret;
}
};

********************************************************************************
*******************************************************************************/