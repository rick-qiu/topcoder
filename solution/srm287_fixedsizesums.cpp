/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6015
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

class FixedSizeSums {
public:
    string kthElement(int sum, int count, int index);
};

string FixedSizeSums::kthElement(int sum, int count, int index) {
    string ret;
    return ret;
}


int test0() {
    int sum = 8;
    int count = 3;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "8=4+3+1";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int sum = 13;
    int count = 1;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "13=13";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int sum = 13;
    int count = 13;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "13=1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int sum = 7;
    int count = 10;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int sum = 17;
    int count = 2;
    int index = 4;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "17=12+5";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int sum = 140;
    int count = 17;
    int index = 87654321;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "140=40+31+15+15+9+7+4+4+2+2+2+2+2+2+1+1+1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int sum = 150;
    int count = 23;
    int index = 1901740433;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=7+7+7+7+7+7+7+7+7+7+7+7+6+6+6+6+6+6+6+6+6+6+6";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int sum = 150;
    int count = 23;
    int index = 1903000047;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int sum = 150;
    int count = 22;
    int index = 1901740430;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int sum = 150;
    int count = 24;
    int index = 1765432109;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=17+17+16+14+12+12+11+9+9+7+7+2+2+2+2+2+2+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int sum = 148;
    int count = 40;
    int index = 470000000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int sum = 1;
    int count = 1;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "1=1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int sum = 1;
    int count = 1;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int sum = 1;
    int count = 1;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int sum = 1;
    int count = 1;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int sum = 1;
    int count = 2;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int sum = 1;
    int count = 2;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int sum = 1;
    int count = 2;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int sum = 1;
    int count = 2;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int sum = 1;
    int count = 3;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int sum = 1;
    int count = 3;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int sum = 1;
    int count = 3;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int sum = 1;
    int count = 3;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int sum = 1;
    int count = 4;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int sum = 1;
    int count = 4;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int sum = 1;
    int count = 4;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int sum = 1;
    int count = 4;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int sum = 2;
    int count = 1;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "2=2";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int sum = 2;
    int count = 1;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int sum = 2;
    int count = 1;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int sum = 2;
    int count = 1;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int sum = 2;
    int count = 2;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "2=1+1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int sum = 2;
    int count = 2;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int sum = 2;
    int count = 2;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int sum = 2;
    int count = 2;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int sum = 2;
    int count = 3;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int sum = 2;
    int count = 3;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int sum = 2;
    int count = 3;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int sum = 2;
    int count = 3;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int sum = 2;
    int count = 4;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int sum = 2;
    int count = 4;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int sum = 2;
    int count = 4;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int sum = 2;
    int count = 4;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int sum = 3;
    int count = 1;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "3=3";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int sum = 3;
    int count = 1;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int sum = 3;
    int count = 1;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int sum = 3;
    int count = 1;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int sum = 3;
    int count = 2;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "3=2+1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int sum = 3;
    int count = 2;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int sum = 3;
    int count = 2;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int sum = 3;
    int count = 2;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int sum = 3;
    int count = 3;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "3=1+1+1";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int sum = 3;
    int count = 3;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int sum = 3;
    int count = 3;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int sum = 3;
    int count = 3;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int sum = 3;
    int count = 4;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int sum = 3;
    int count = 4;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int sum = 3;
    int count = 4;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int sum = 3;
    int count = 4;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int sum = 4;
    int count = 1;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "4=4";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int sum = 4;
    int count = 1;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int sum = 4;
    int count = 1;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int sum = 4;
    int count = 1;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int sum = 4;
    int count = 2;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "4=3+1";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int sum = 4;
    int count = 2;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "4=2+2";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int sum = 4;
    int count = 2;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int sum = 4;
    int count = 2;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int sum = 4;
    int count = 3;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "4=2+1+1";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int sum = 4;
    int count = 3;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int sum = 4;
    int count = 3;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int sum = 4;
    int count = 3;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int sum = 4;
    int count = 4;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "4=1+1+1+1";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int sum = 4;
    int count = 4;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int sum = 4;
    int count = 4;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int sum = 4;
    int count = 4;
    int index = 3;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int sum = 147;
    int count = 1;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "147=147";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int sum = 147;
    int count = 1;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int sum = 147;
    int count = 1;
    int index = 2000000000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int sum = 143;
    int count = 143;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "143=1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int sum = 143;
    int count = 143;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int sum = 143;
    int count = 142;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "143=2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int sum = 143;
    int count = 142;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int sum = 143;
    int count = 141;
    int index = 0;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "143=3+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int sum = 143;
    int count = 141;
    int index = 1;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "143=2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int sum = 143;
    int count = 141;
    int index = 2;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int sum = 73;
    int count = 16;
    int index = 123456;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "73=20+7+6+6+6+5+5+4+3+3+3+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int sum = 150;
    int count = 23;
    int index = 12;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=123+6+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int sum = 150;
    int count = 23;
    int index = 123;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=118+5+3+2+2+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int sum = 150;
    int count = 12;
    int index = 1234;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=121+10+10+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int sum = 150;
    int count = 23;
    int index = 12345;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=101+13+5+5+5+2+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int sum = 150;
    int count = 24;
    int index = 123456;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=89+17+9+4+2+2+2+2+2+2+2+2+2+2+2+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int sum = 150;
    int count = 23;
    int index = 1234567;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=77+28+9+8+6+4+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int sum = 50;
    int count = 150;
    int index = 987654321;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int sum = 150;
    int count = 150;
    int index = 987654321;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int sum = 150;
    int count = 23;
    int index = 87654321;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=48+27+13+13+7+4+4+4+4+3+3+3+3+3+2+2+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int sum = 150;
    int count = 25;
    int index = 234567890;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=39+23+12+10+6+5+5+4+4+4+4+4+4+4+4+4+3+3+2+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int sum = 113;
    int count = 17;
    int index = 643523;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "113=49+24+5+4+4+4+4+4+3+3+3+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int sum = 113;
    int count = 65;
    int index = 3253265;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int sum = 147;
    int count = 2;
    int index = 35;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "147=111+36";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int sum = 140;
    int count = 17;
    int index = 87654321;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "140=40+31+15+15+9+7+4+4+2+2+2+2+2+2+1+1+1";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int sum = 150;
    int count = 25;
    int index = 2000000000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int sum = 150;
    int count = 20;
    int index = 1003;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=114+9+4+3+3+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int sum = 147;
    int count = 37;
    int index = 123456789;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "147=30+20+15+15+11+6+6+4+4+4+3+2+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int sum = 141;
    int count = 13;
    int index = 87653321;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "141=37+21+17+16+15+10+7+5+4+4+2+2+1";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int sum = 150;
    int count = 77;
    int index = 1089;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=57+7+3+3+3+2+2+2+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int sum = 150;
    int count = 50;
    int index = 10000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=75+11+9+7+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int sum = 150;
    int count = 50;
    int index = 1000000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=52+14+10+8+5+4+3+2+2+2+2+2+2+2+2+2+2+2+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1+1";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int sum = 141;
    int count = 13;
    int index = 87653021;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "141=37+21+17+16+15+12+5+3+3+3+3+3+3";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int sum = 150;
    int count = 17;
    int index = 90000000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "150=50+27+14+13+5+5+5+5+5+5+4+2+2+2+2+2+2";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int sum = 150;
    int count = 150;
    int index = 2000000000;
    FixedSizeSums* pObj = new FixedSizeSums();
    clock_t start = clock();
    string result = pObj->kthElement(sum, count, index);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20287618&rd=9808&pm=6015
********************************************************************************
#include<string>
using namespace std;
 
  long f[151][151][151];
 
struct FixedSizeSums {
 
  void work1() {
    long i,j,k,sum,count,re;
    memset(f, 0, sizeof(f));
    for(i=0;i<=150;i++)f[0][0][i]=1;
    for(sum=1;sum<=150;sum++){
      for(count=1;count<=150;count++){
        for(re=1; re<=150; re++) {
          f[sum][count][re] += f[sum][count][re-1];
          if(sum-re>=0&&count-1>=0)f[sum][count][re] += f[sum-re][count-1][re];
        }
      }
    }
  }
  string kthElement(int sum, int count, int index) {
    work1();
    long i,j,k,fa=sum;
    char re[10000];
    memset(re, 0, sizeof(re));
    
    if(f[sum][count][sum]<=index) return "";
 
    sprintf(re+strlen(re),"%ld=", sum);
 
    for(; count>=1; count--){
      for(i=fa;i>=2;i--){
        k = f[sum][count][i] - f[sum][count][i-1];
        if(index-k<0)break;
        index-=k;
      }
      fa = i;
      sprintf(re+strlen(re),"%ld", fa);
      if(count>1) sprintf(re+strlen(re),"+");
      sum -= fa;
    }
    return re;
  }
};

********************************************************************************
*******************************************************************************/