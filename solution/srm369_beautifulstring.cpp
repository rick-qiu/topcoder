/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8193
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

class BeautifulString {
public:
    int maximumLength(int countA, int countB, int maxA, int maxB);
};

int BeautifulString::maximumLength(int countA, int countB, int maxA, int maxB) {
    int ret;
    return ret;
}


int test0() {
    int countA = 0;
    int countB = 0;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int countA = 10;
    int countB = 10;
    int maxA = 0;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 3;
    int countB = 5;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int countA = 677578;
    int countB = 502524;
    int maxA = 989951;
    int maxB = 504698;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1180102;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int countA = 0;
    int countB = 0;
    int maxA = 0;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 0;
    int maxA = 0;
    int maxB = 141786;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 0;
    int maxA = 74408;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 0;
    int maxA = 119881;
    int maxB = 462276;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 157738;
    int maxA = 0;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 145421;
    int maxA = 0;
    int maxB = 18972;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 18972;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int countA = 0;
    int countB = 5661;
    int maxA = 0;
    int maxB = 5661;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5661;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int countA = 0;
    int countB = 161852;
    int maxA = 0;
    int maxB = 190827;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 161852;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int countA = 0;
    int countB = 383819;
    int maxA = 593664;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 455228;
    int maxA = 19112;
    int maxB = 69172;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 69172;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int countA = 0;
    int countB = 3;
    int maxA = 4;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 0;
    int countB = 67627;
    int maxA = 343582;
    int maxB = 260263;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 67627;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int countA = 34662;
    int countB = 0;
    int maxA = 0;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 232145;
    int countB = 0;
    int maxA = 0;
    int maxB = 629896;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int countA = 74102;
    int countB = 0;
    int maxA = 43093;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 43093;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int countA = 13251;
    int countB = 0;
    int maxA = 727742;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 13251;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int countA = 14422;
    int countB = 0;
    int maxA = 14422;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 14422;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int countA = 600836;
    int countB = 0;
    int maxA = 28824;
    int maxB = 463349;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 28824;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int countA = 50263;
    int countB = 0;
    int maxA = 235862;
    int maxB = 180505;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 50263;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int countA = 10700;
    int countB = 0;
    int maxA = 10700;
    int maxB = 2311;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10700;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int countA = 285341;
    int countB = 462664;
    int maxA = 0;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int countA = 20405;
    int countB = 283720;
    int maxA = 0;
    int maxB = 185820;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 185820;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int countA = 129797;
    int countB = 356059;
    int maxA = 0;
    int maxB = 373027;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 356059;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int countA = 4;
    int countB = 141464;
    int maxA = 0;
    int maxB = 24905;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 24905;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int countA = 2;
    int countB = 2;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 2;
    int countB = 3;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int countA = 82211;
    int countB = 107358;
    int maxA = 8387;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8387;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int countA = 202873;
    int countB = 27000;
    int maxA = 205337;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 202873;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int countA = 24104;
    int countB = 1051;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int countA = 5;
    int countB = 9;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int countA = 2;
    int countB = 1;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int countA = 72741;
    int countB = 61024;
    int maxA = 66403;
    int maxB = 40152;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 133765;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int countA = 387085;
    int countB = 185394;
    int maxA = 4184;
    int maxB = 336687;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 572479;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int countA = 6666;
    int countB = 433973;
    int maxA = 104861;
    int maxB = 132944;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 440639;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int countA = 90067;
    int countB = 149593;
    int maxA = 178512;
    int maxB = 338128;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 239660;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int countA = 5;
    int countB = 1;
    int maxA = 7;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int countA = 4855;
    int countB = 2677;
    int maxA = 4855;
    int maxB = 1150;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7532;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int countA = 105;
    int countB = 2713;
    int maxA = 916;
    int maxB = 19;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2119;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int countA = 386;
    int countB = 283;
    int maxA = 386;
    int maxB = 416;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 669;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int countA = 50696;
    int countB = 671;
    int maxA = 9;
    int maxB = 102292;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6719;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int countA = 1;
    int countB = 1;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int countA = 735;
    int countB = 734;
    int maxA = 1;
    int maxB = 398;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1469;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int countA = 32;
    int countB = 31;
    int maxA = 31;
    int maxB = 31;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int countA = 63995;
    int countB = 45670;
    int maxA = 1;
    int maxB = 11904;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 91341;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int countA = 1;
    int countB = 2;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int countA = 42;
    int countB = 1;
    int maxA = 21;
    int maxB = 33;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int countA = 3;
    int countB = 1;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 7;
    int countB = 61;
    int maxA = 7;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int countA = 313;
    int countB = 407;
    int maxA = 97;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 627;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int countA = 2;
    int countB = 1;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int countA = 1;
    int countB = 2;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int countA = 4;
    int countB = 5;
    int maxA = 3;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 1000000;
    int maxB = 1000000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int countA = 1;
    int countB = 9;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int countA = 4;
    int countB = 49;
    int maxA = 52;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int countA = 475;
    int countB = 963;
    int maxA = 552;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1427;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int countA = 2028;
    int countB = 6654;
    int maxA = 8225;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6086;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int countA = 1;
    int countB = 99507;
    int maxA = 89823;
    int maxB = 11070;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 22141;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int countA = 7395;
    int countB = 452531;
    int maxA = 591053;
    int maxB = 44;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 332819;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int countA = 7;
    int countB = 1;
    int maxA = 1;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int countA = 74;
    int countB = 4;
    int maxA = 1;
    int maxB = 35;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int countA = 802;
    int countB = 13;
    int maxA = 38;
    int maxB = 451;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 545;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int countA = 6831;
    int countB = 357;
    int maxA = 12;
    int maxB = 5115;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4653;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int countA = 56683;
    int countB = 282;
    int maxA = 26;
    int maxB = 90370;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7640;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int countA = 888375;
    int countB = 84239;
    int maxA = 1;
    int maxB = 129170;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 168479;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int countA = 10;
    int countB = 6;
    int maxA = 8;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int countA = 40;
    int countB = 95;
    int maxA = 21;
    int maxB = 89;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int countA = 123;
    int countB = 151;
    int maxA = 549;
    int maxB = 775;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int countA = 8841;
    int countB = 9139;
    int maxA = 8112;
    int maxB = 2027;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 17980;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int countA = 52876;
    int countB = 19924;
    int maxA = 34100;
    int maxB = 99697;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 72800;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int countA = 28181;
    int countB = 579983;
    int maxA = 518744;
    int maxB = 741055;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 608164;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int countA = 200;
    int countB = 10;
    int maxA = 10;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int countA = 15;
    int countB = 5;
    int maxA = 5;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int countA = 1111;
    int countB = 2111;
    int maxA = 2222;
    int maxB = 9;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3222;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int countA = 7;
    int countB = 6;
    int maxA = 1;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int countA = 14;
    int countB = 5;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int countA = 7;
    int countB = 10;
    int maxA = 1;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int countA = 6;
    int countB = 3;
    int maxA = 2;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int countA = 3;
    int countB = 6;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int countA = 100;
    int countB = 50;
    int maxA = 0;
    int maxB = 300;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int countA = 524288;
    int countB = 1000;
    int maxA = 1024;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int countA = 1;
    int countB = 0;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int countA = 12;
    int countB = 4;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int countA = 10;
    int countB = 5;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int countA = 7;
    int countB = 2;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int countA = 3;
    int countB = 7;
    int maxA = 5;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int countA = 200;
    int countB = 700;
    int maxA = 500;
    int maxB = 250;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int countA = 0;
    int countB = 10;
    int maxA = 4;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int countA = 13;
    int countB = 3;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 500000;
    int maxB = 20000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int countA = 0;
    int countB = 1;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int countA = 10;
    int countB = 10;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int countA = 32;
    int countB = 12;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int countA = 999999;
    int countB = 99;
    int maxA = 1234;
    int maxB = 12;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 123499;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int countA = 13;
    int countB = 13;
    int maxA = 3;
    int maxB = 14;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int countA = 1;
    int countB = 1;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 4;
    int countB = 40;
    int maxA = 7;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int countA = 5;
    int countB = 0;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int countA = 0;
    int countB = 10;
    int maxA = 10;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int countA = 0;
    int countB = 0;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int countA = 5;
    int countB = 3;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int countA = 4;
    int countB = 4;
    int maxA = 3;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int countA = 0;
    int countB = 1;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 1000;
    int countB = 10000;
    int maxA = 10;
    int maxB = 9;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10009;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int countA = 300;
    int countB = 100;
    int maxA = 300;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int countA = 1;
    int countB = 1;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int countA = 19;
    int countB = 21;
    int maxA = 9;
    int maxB = 20;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int countA = 120000;
    int countB = 100000;
    int maxA = 20000;
    int maxB = 10000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 220000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int countA = 1;
    int countB = 2;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
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
    int countA = 1000000;
    int countB = 999999;
    int maxA = 1000000;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int countA = 15;
    int countB = 17;
    int maxA = 2;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int countA = 0;
    int countB = 10;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int countA = 12;
    int countB = 12;
    int maxA = 10;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int countA = 5;
    int countB = 6;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int countA = 10;
    int countB = 10;
    int maxA = 2;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int countA = 9;
    int countB = 10;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int countA = 999999;
    int countB = 249987;
    int maxA = 7;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1249986;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 1000000;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int countA = 10;
    int countB = 1;
    int maxA = 3;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int countA = 1000;
    int countB = 50;
    int maxA = 1000;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int countA = 4;
    int countB = 6;
    int maxA = 4;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int countA = 9;
    int countB = 2;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int countA = 37;
    int countB = 15;
    int maxA = 4;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int countA = 5;
    int countB = 3;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int countA = 10001;
    int countB = 10;
    int maxA = 100;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int countA = 5;
    int countB = 100;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int countA = 5;
    int countB = 5;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int countA = 1;
    int countB = 5;
    int maxA = 0;
    int maxB = 9;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int countA = 0;
    int countB = 10;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int countA = 0;
    int countB = 10;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int countA = 65536;
    int countB = 10;
    int maxA = 65536;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 65546;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int countA = 0;
    int countB = 0;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int countA = 10;
    int countB = 0;
    int maxA = 10;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int countA = 10;
    int countB = 10;
    int maxA = 10;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int countA = 1;
    int countB = 7;
    int maxA = 7;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int countA = 1;
    int countB = 1;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int countA = 0;
    int countB = 1;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int countA = 30;
    int countB = 1;
    int maxA = 10;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int countA = 1;
    int countB = 2;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int countA = 7;
    int countB = 3;
    int maxA = 3;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int countA = 10;
    int countB = 1;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int countA = 2;
    int countB = 3;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int countA = 2;
    int countB = 0;
    int maxA = 4;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int countA = 0;
    int countB = 2;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int countA = 10;
    int countB = 0;
    int maxA = 8;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int countA = 1;
    int countB = 10;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int countA = 3;
    int countB = 4;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int countA = 6;
    int countB = 100;
    int maxA = 1;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int countA = 2;
    int countB = 1;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 3;
    int maxB = 7;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int countA = 0;
    int countB = 10;
    int maxA = 0;
    int maxB = 20;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int countA = 2;
    int countB = 6;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int countA = 65536;
    int countB = 65536;
    int maxA = 65536;
    int maxB = 65536;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 131072;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int countA = 5;
    int countB = 5;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int countA = 10;
    int countB = 10;
    int maxA = 0;
    int maxB = 12;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int countA = 5;
    int countB = 3;
    int maxA = 5;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int countA = 10;
    int countB = 0;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int countA = 10;
    int countB = 10;
    int maxA = 2;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int countA = 10;
    int countB = 0;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int countA = 5;
    int countB = 4;
    int maxA = 4;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int countA = 10;
    int countB = 9;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int countA = 20;
    int countB = 5;
    int maxA = 1;
    int maxB = 30;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int countA = 1;
    int countB = 100;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int countA = 100;
    int countB = 20;
    int maxA = 15;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int countA = 44;
    int countB = 3;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int countA = 15;
    int countB = 4;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int countA = 0;
    int countB = 10;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int countA = 9;
    int countB = 10000;
    int maxA = 9;
    int maxB = 1000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10009;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int countA = 1;
    int countB = 10;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int countA = 5;
    int countB = 3;
    int maxA = 2;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int countA = 10;
    int countB = 10;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int countA = 0;
    int countB = 10;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int countA = 3;
    int countB = 16;
    int maxA = 2;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int countA = 5;
    int countB = 8;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int countA = 0;
    int countB = 5;
    int maxA = 0;
    int maxB = 6;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int countA = 37;
    int countB = 701;
    int maxA = 8;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int countA = 100000;
    int countB = 100000;
    int maxA = 4443;
    int maxB = 9997;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int countA = 3;
    int countB = 20;
    int maxA = 3;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int countA = 0;
    int countB = 5;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int countA = 1000000;
    int countB = 100000;
    int maxA = 1000000;
    int maxB = 800;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1100000;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int countA = 987654;
    int countB = 1000;
    int maxA = 100;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 101100;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int countA = 63;
    int countB = 45;
    int maxA = 39;
    int maxB = 9;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int countA = 10;
    int countB = 9;
    int maxA = 0;
    int maxB = 20;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int countA = 645;
    int countB = 6476;
    int maxA = 7;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3875;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int countA = 0;
    int countB = 0;
    int maxA = 0;
    int maxB = 1000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int countA = 3;
    int countB = 4;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int countA = 5;
    int countB = 3;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int countA = 1;
    int countB = 9;
    int maxA = 1;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int countA = 2;
    int countB = 0;
    int maxA = 0;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int countA = 1000000;
    int countB = 1005;
    int maxA = 2;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3017;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int countA = 100;
    int countB = 5;
    int maxA = 10;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int countA = 7;
    int countB = 3;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 10000;
    int maxB = 10000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 1000000;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int countA = 901010;
    int countB = 902130;
    int maxA = 632131;
    int maxB = 123;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1803140;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int countA = 10;
    int countB = 10;
    int maxA = 0;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int countA = 9475;
    int countB = 2145;
    int maxA = 0;
    int maxB = 15;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int countA = 10;
    int countB = 10000;
    int maxA = 2;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int countA = 13;
    int countB = 5;
    int maxA = 3;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int countA = 24;
    int countB = 4;
    int maxA = 5;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int countA = 10;
    int countB = 4;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int countA = 1;
    int countB = 5;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int countA = 10;
    int countB = 10;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int countA = 100;
    int countB = 100;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int countA = 20;
    int countB = 20;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int countA = 0;
    int countB = 3;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int countA = 10;
    int countB = 10;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int countA = 677578;
    int countB = 502524;
    int maxA = 5;
    int maxB = 404698;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1180102;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int countA = 10;
    int countB = 10;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int countA = 1;
    int countB = 2;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int countA = 5;
    int countB = 10;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int countA = 1;
    int countB = 10000;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int countA = 7;
    int countB = 3;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int countA = 3;
    int countB = 5;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int countA = 1;
    int countB = 0;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int countA = 0;
    int countB = 1000;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int countA = 1;
    int countB = 100;
    int maxA = 1;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int countA = 4;
    int countB = 2;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int countA = 5;
    int countB = 3;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int countA = 9;
    int countB = 10;
    int maxA = 0;
    int maxB = 15;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int countA = 15;
    int countB = 3;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int countA = 5;
    int countB = 4;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int countA = 10;
    int countB = 1;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int countA = 100;
    int countB = 9;
    int maxA = 10;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int countA = 20;
    int countB = 5;
    int maxA = 5;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int countA = 3;
    int countB = 7;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int countA = 1000;
    int countB = 1000;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int countA = 900;
    int countB = 800000;
    int maxA = 6;
    int maxB = 800;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 721700;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int countA = 0;
    int countB = 10;
    int maxA = 10;
    int maxB = 1000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int countA = 10;
    int countB = 2;
    int maxA = 3;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int countA = 5;
    int countB = 7;
    int maxA = 3;
    int maxB = 6;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int countA = 100;
    int countB = 100;
    int maxA = 0;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int countA = 4;
    int countB = 2;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int countA = 10;
    int countB = 1000;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int countA = 5;
    int countB = 2;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int countA = 100;
    int countB = 8;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int countA = 53;
    int countB = 10;
    int maxA = 5;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int countA = 999876;
    int countB = 232;
    int maxA = 1;
    int maxB = 999567;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int countA = 10;
    int countB = 10;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int countA = 10;
    int countB = 20;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int countA = 4;
    int countB = 4;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int countA = 11;
    int countB = 3;
    int maxA = 2;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int countA = 10001;
    int countB = 5;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int countA = 2000;
    int countB = 1000;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int countA = 9;
    int countB = 10;
    int maxA = 1;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int countA = 18;
    int countB = 9;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    int countA = 3;
    int countB = 3;
    int maxA = 0;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    int countA = 20;
    int countB = 10;
    int maxA = 3;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    int countA = 999999;
    int countB = 1000000;
    int maxA = 1;
    int maxB = 999999;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    int countA = 3;
    int countB = 3;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    int countA = 1000;
    int countB = 500;
    int maxA = 3;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1500;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    int countA = 1000;
    int countB = 1000;
    int maxA = 57;
    int maxB = 57;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    int countA = 1000;
    int countB = 5;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    int countA = 15;
    int countB = 2;
    int maxA = 3;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    int countA = 1234;
    int countB = 5;
    int maxA = 0;
    int maxB = 7;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    int countA = 3;
    int countB = 5;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    int countA = 25;
    int countB = 15;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    int countA = 100;
    int countB = 1000;
    int maxA = 0;
    int maxB = 10000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    int countA = 1000;
    int countB = 1000;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    int countA = 3;
    int countB = 15;
    int maxA = 10;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    int countA = 999999;
    int countB = 2000;
    int maxA = 1000;
    int maxB = 12;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1001999;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    int countA = 10000;
    int countB = 1000;
    int maxA = 1000;
    int maxB = 1000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11000;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    int countA = 5;
    int countB = 10;
    int maxA = 4;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    int countA = 50;
    int countB = 10;
    int maxA = 10;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    int countA = 5;
    int countB = 0;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    int countA = 5;
    int countB = 4;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    int countA = 6;
    int countB = 6;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    int countA = 4;
    int countB = 12;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    int countA = 5;
    int countB = 6;
    int maxA = 5;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    int countA = 7;
    int countB = 7;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    int countA = 600;
    int countB = 1000;
    int maxA = 57;
    int maxB = 57;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1600;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    int countA = 5;
    int countB = 5;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    int countA = 1000000;
    int countB = 999999;
    int maxA = 5001;
    int maxB = 2008;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1999999;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    int countA = 11;
    int countB = 10;
    int maxA = 10;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    int countA = 75;
    int countB = 55;
    int maxA = 0;
    int maxB = 31;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    int countA = 5;
    int countB = 1;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    int countA = 99;
    int countB = 102;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    int countA = 600000;
    int countB = 600000;
    int maxA = 500000;
    int maxB = 500000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1200000;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    int countA = 4;
    int countB = 9;
    int maxA = 4;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    int countA = 3;
    int countB = 500;
    int maxA = 100;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    int countA = 5;
    int countB = 1;
    int maxA = 0;
    int maxB = 4;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    int countA = 5;
    int countB = 5;
    int maxA = 5;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    int countA = 100;
    int countB = 10;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    int countA = 40000;
    int countB = 100000;
    int maxA = 30000;
    int maxB = 90000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 140000;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    int countA = 20;
    int countB = 5;
    int maxA = 4;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    int countA = 100;
    int countB = 100;
    int maxA = 0;
    int maxB = 50;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    int countA = 10;
    int countB = 10;
    int maxA = 12;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    int countA = 100;
    int countB = 1000;
    int maxA = 4;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    int countA = 478927;
    int countB = 801804;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1280731;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    int countA = 3;
    int countB = 1;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    int countA = 1;
    int countB = 4;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    int countA = 100;
    int countB = 4;
    int maxA = 25;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    int countA = 1;
    int countB = 1;
    int maxA = 0;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    int countA = 6;
    int countB = 3;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    int countA = 1;
    int countB = 1;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    int countA = 6;
    int countB = 4;
    int maxA = 5;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    int countA = 1000000;
    int countB = 100;
    int maxA = 100;
    int maxB = 100;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10200;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    int countA = 100;
    int countB = 30;
    int maxA = 0;
    int maxB = 50;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    int countA = 3;
    int countB = 8;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    int countA = 10;
    int countB = 10;
    int maxA = 8;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    int countA = 4;
    int countB = 1;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    int countA = 0;
    int countB = 100000;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    int countA = 10000;
    int countB = 2000;
    int maxA = 3000;
    int maxB = 2000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 12000;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    int countA = 100;
    int countB = 50;
    int maxA = 2;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    int countA = 3;
    int countB = 5;
    int maxA = 0;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test309() {
    int countA = 1;
    int countB = 100;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 309: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 309: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test310() {
    int countA = 100;
    int countB = 9;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 310: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 310: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test311() {
    int countA = 1001;
    int countB = 1001;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2002;
    if(result == expected) {
        cout << "Test Case 311: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 311: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test312() {
    int countA = 9;
    int countB = 2;
    int maxA = 3;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 312: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 312: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test313() {
    int countA = 1000000;
    int countB = 999;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1999;
    if(result == expected) {
        cout << "Test Case 313: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 313: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test314() {
    int countA = 10;
    int countB = 10;
    int maxA = 10;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 314: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 314: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test315() {
    int countA = 5;
    int countB = 17;
    int maxA = 1;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 315: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 315: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test316() {
    int countA = 20;
    int countB = 5;
    int maxA = 0;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 316: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 316: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test317() {
    int countA = 10;
    int countB = 6;
    int maxA = 2;
    int maxB = 6;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 317: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 317: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test318() {
    int countA = 1000000;
    int countB = 500000;
    int maxA = 333333;
    int maxB = 500000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1500000;
    if(result == expected) {
        cout << "Test Case 318: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 318: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test319() {
    int countA = 5;
    int countB = 1;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 319: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 319: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test320() {
    int countA = 0;
    int countB = 6;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 320: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 320: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test321() {
    int countA = 1000;
    int countB = 11;
    int maxA = 5;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 321: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 321: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test322() {
    int countA = 10;
    int countB = 20;
    int maxA = 0;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 322: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 322: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test323() {
    int countA = 5;
    int countB = 0;
    int maxA = 4;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 323: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 323: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test324() {
    int countA = 10;
    int countB = 2;
    int maxA = 3;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 324: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 324: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test325() {
    int countA = 5;
    int countB = 2;
    int maxA = 1;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 325: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 325: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test326() {
    int countA = 1000;
    int countB = 100;
    int maxA = 5;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 326: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 326: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test327() {
    int countA = 100;
    int countB = 10;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 327: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 327: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test328() {
    int countA = 3;
    int countB = 1;
    int maxA = 2;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 328: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 328: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test329() {
    int countA = 1000;
    int countB = 2000;
    int maxA = 6;
    int maxB = 8;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3000;
    if(result == expected) {
        cout << "Test Case 329: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 329: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test330() {
    int countA = 1000000;
    int countB = 77777;
    int maxA = 1;
    int maxB = 13;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 155555;
    if(result == expected) {
        cout << "Test Case 330: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 330: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test331() {
    int countA = 677578;
    int countB = 999999;
    int maxA = 25;
    int maxB = 99999;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1677577;
    if(result == expected) {
        cout << "Test Case 331: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 331: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test332() {
    int countA = 3;
    int countB = 5;
    int maxA = 7;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 332: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 332: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test333() {
    int countA = 46340;
    int countB = 1000000;
    int maxA = 1000000;
    int maxB = 46341;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1046340;
    if(result == expected) {
        cout << "Test Case 333: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 333: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test334() {
    int countA = 15;
    int countB = 4;
    int maxA = 5;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 334: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 334: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test335() {
    int countA = 2;
    int countB = 4;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 335: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 335: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test336() {
    int countA = 100;
    int countB = 10;
    int maxA = 5;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 336: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 336: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test337() {
    int countA = 100;
    int countB = 49;
    int maxA = 2;
    int maxB = 1000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 337: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 337: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test338() {
    int countA = 5;
    int countB = 7;
    int maxA = 5;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 338: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 338: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test339() {
    int countA = 3;
    int countB = 3;
    int maxA = 1;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 339: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 339: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test340() {
    int countA = 3;
    int countB = 8;
    int maxA = 4;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 340: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 340: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test341() {
    int countA = 1000000;
    int countB = 1000000;
    int maxA = 1000000;
    int maxB = 50000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000;
    if(result == expected) {
        cout << "Test Case 341: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 341: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test342() {
    int countA = 30;
    int countB = 3;
    int maxA = 7;
    int maxB = 7;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 342: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 342: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test343() {
    int countA = 16;
    int countB = 16;
    int maxA = 0;
    int maxB = 5;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 343: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 343: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test344() {
    int countA = 9;
    int countB = 2;
    int maxA = 3;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 344: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 344: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test345() {
    int countA = 3;
    int countB = 5;
    int maxA = 10;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 345: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 345: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test346() {
    int countA = 20;
    int countB = 20;
    int maxA = 5;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 346: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 346: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test347() {
    int countA = 1000;
    int countB = 10;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 347: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 347: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test348() {
    int countA = 3;
    int countB = 2;
    int maxA = 1;
    int maxB = 0;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 348: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 348: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test349() {
    int countA = 262144;
    int countB = 65536;
    int maxA = 65536;
    int maxB = 1;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 327680;
    if(result == expected) {
        cout << "Test Case 349: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 349: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test350() {
    int countA = 1001;
    int countB = 1001;
    int maxA = 1;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 2002;
    if(result == expected) {
        cout << "Test Case 350: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 350: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test351() {
    int countA = 0;
    int countB = 100;
    int maxA = 0;
    int maxB = 1000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 351: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 351: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test352() {
    int countA = 1000;
    int countB = 3;
    int maxA = 10;
    int maxB = 10;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 352: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 352: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test353() {
    int countA = 5;
    int countB = 12;
    int maxA = 3;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 353: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 353: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test354() {
    int countA = 999999;
    int countB = 559845;
    int maxA = 70;
    int maxB = 1000000;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1559844;
    if(result == expected) {
        cout << "Test Case 354: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 354: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test355() {
    int countA = 7;
    int countB = 10;
    int maxA = 4;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 355: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 355: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test356() {
    int countA = 2;
    int countB = 6;
    int maxA = 2;
    int maxB = 3;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 356: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 356: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test357() {
    int countA = 3;
    int countB = 3;
    int maxA = 2;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 357: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 357: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test358() {
    int countA = 1;
    int countB = 41;
    int maxA = 18;
    int maxB = 23;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 358: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 358: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test359() {
    int countA = 1000000;
    int countB = 40000;
    int maxA = 49;
    int maxB = 2;
    BeautifulString* pObj = new BeautifulString();
    clock_t start = clock();
    int result = pObj->maximumLength(countA, countB, maxA, maxB);
    clock_t end = clock();
    delete pObj;
    int expected = 1040000;
    if(result == expected) {
        cout << "Test Case 359: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 359: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    test309() == 0 ? ++passed : ++failed;
    test310() == 0 ? ++passed : ++failed;
    test311() == 0 ? ++passed : ++failed;
    test312() == 0 ? ++passed : ++failed;
    test313() == 0 ? ++passed : ++failed;
    test314() == 0 ? ++passed : ++failed;
    test315() == 0 ? ++passed : ++failed;
    test316() == 0 ? ++passed : ++failed;
    test317() == 0 ? ++passed : ++failed;
    test318() == 0 ? ++passed : ++failed;
    test319() == 0 ? ++passed : ++failed;
    test320() == 0 ? ++passed : ++failed;
    test321() == 0 ? ++passed : ++failed;
    test322() == 0 ? ++passed : ++failed;
    test323() == 0 ? ++passed : ++failed;
    test324() == 0 ? ++passed : ++failed;
    test325() == 0 ? ++passed : ++failed;
    test326() == 0 ? ++passed : ++failed;
    test327() == 0 ? ++passed : ++failed;
    test328() == 0 ? ++passed : ++failed;
    test329() == 0 ? ++passed : ++failed;
    test330() == 0 ? ++passed : ++failed;
    test331() == 0 ? ++passed : ++failed;
    test332() == 0 ? ++passed : ++failed;
    test333() == 0 ? ++passed : ++failed;
    test334() == 0 ? ++passed : ++failed;
    test335() == 0 ? ++passed : ++failed;
    test336() == 0 ? ++passed : ++failed;
    test337() == 0 ? ++passed : ++failed;
    test338() == 0 ? ++passed : ++failed;
    test339() == 0 ? ++passed : ++failed;
    test340() == 0 ? ++passed : ++failed;
    test341() == 0 ? ++passed : ++failed;
    test342() == 0 ? ++passed : ++failed;
    test343() == 0 ? ++passed : ++failed;
    test344() == 0 ? ++passed : ++failed;
    test345() == 0 ? ++passed : ++failed;
    test346() == 0 ? ++passed : ++failed;
    test347() == 0 ? ++passed : ++failed;
    test348() == 0 ? ++passed : ++failed;
    test349() == 0 ? ++passed : ++failed;
    test350() == 0 ? ++passed : ++failed;
    test351() == 0 ? ++passed : ++failed;
    test352() == 0 ? ++passed : ++failed;
    test353() == 0 ? ++passed : ++failed;
    test354() == 0 ? ++passed : ++failed;
    test355() == 0 ? ++passed : ++failed;
    test356() == 0 ? ++passed : ++failed;
    test357() == 0 ? ++passed : ++failed;
    test358() == 0 ? ++passed : ++failed;
    test359() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20758665&rd=10785&pm=8193
********************************************************************************
template<class T> T MIN(T x, T y) {return x<y?x:y;} 
 
class BeautifulString{ 
 
 
public: 
  int maximumLength(int countA, int countB, int maxA, int maxB){ 
    if( countA==0 || maxA==0) 
      return MIN(maxB, countB); 
    if( countB==0 || maxB==0) 
      return MIN(maxA, countA); 
     
    double res1, res2; 
    if( countA < countB ){ 
      res1 = (double)(countA+1)*maxB + countA; 
      res2 = countA + countB; 
      return MIN(res1, res2); 
    } 
    else{ 
      res1 = (double)(countB+1)*maxA + countB; 
      res2 = countA + countB; 
      return MIN(res1, res2); 
    } 
     
  } 
 
};

********************************************************************************
*******************************************************************************/