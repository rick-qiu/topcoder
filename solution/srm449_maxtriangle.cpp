/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10548
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

class MaxTriangle {
public:
    double calculateArea(int A, int B);
};

double MaxTriangle::calculateArea(int A, int B) {
    double ret;
    return ret;
}


int test0() {
    int A = 1;
    int B = 1;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 3;
    int B = 7;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 41;
    int B = 85;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 29.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 194;
    int B = 881;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 202.5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 1000000000;
    int B = 1000000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0E8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 2000000000;
    int B = 2000000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 2000000000;
    int B = 1;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 22240.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 1999967841;
    int B = 1999878400;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.9996156E8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 850;
    int B = 925;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 442.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 925;
    int B = 725;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 408.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 325;
    int B = 725;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 242.5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 850;
    int B = 650;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 371.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 845;
    int B = 625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 362.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 31525;
    int B = 65000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 22633.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 53300;
    int B = 34225;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 21355.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 93425;
    int B = 95485;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 47222.5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 81925;
    int B = 90625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 43079.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 91250;
    int B = 75205;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 41417.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 32045;
    int B = 21025;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 12977.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 68125;
    int B = 90610;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 39283.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 93425;
    int B = 18125;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 20575.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 53650;
    int B = 38425;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 22692.5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 99025;
    int B = 15725;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 19705.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 86125;
    int B = 68125;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 38250.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 16900;
    int B = 75725;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 17875.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 91225;
    int B = 10625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 15566.5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 84500;
    int B = 70850;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 38675.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 45305;
    int B = 65000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 27133.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 89050;
    int B = 75205;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 40917.5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 79300;
    int B = 92500;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 42820.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 31525;
    int B = 22100;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 13196.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 94250;
    int B = 28900;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 26095.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 65000;
    int B = 56425;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 30275.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 1988995850;
    int B = 1987587738;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.92895591E8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 1997433828;
    int B = 1984338325;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.88315917E8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 1994939060;
    int B = 1985077097;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.94537511E8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 1999185781;
    int B = 1995219252;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.54664047E8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 1990368553;
    int B = 1998422397;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.559109355E8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 1999999170;
    int B = 1999999170;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999585E8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 1999999170;
    int B = 1999999625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999996825E8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 1215306625;
    int B = 1215306625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.076533125E8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 1215309770;
    int B = 1215306625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.076540895E8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 1215300970;
    int B = 1215302800;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.07648058E8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 1215301825;
    int B = 1215306625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0765193E8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 1999999656;
    int B = 1215307490;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 7.79517726E8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 1215309770;
    int B = 8450;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1602193.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 1215304456;
    int B = 4802;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1199422.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 1568;
    int B = 1999999880;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 880824.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 1215304200;
    int B = 9516;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 1215303505;
    int B = 1215306625;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.076519475E8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 1215304658;
    int B = 8125;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1570277.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 1215303505;
    int B = 7225;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1481473.5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 7225;
    int B = 1215303505;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1481473.5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 8125;
    int B = 1215304025;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1567525.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 1215303197;
    int B = 1215302800;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0754498E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 1;
    int B = 2;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 3;
    int B = 4;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 4;
    int B = 4;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 6;
    int B = 6;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 1;
    int B = 2000000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 22240.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 987654321;
    int B = 123456789;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 999999999;
    int B = 1;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 1999999997;
    int B = 1;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 22349.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 1999967841;
    int B = 1948604449;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.870595515E8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 831910120;
    int B = 1271435329;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 5.13408051E8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 2;
    int B = 2;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 1999967841;
    int B = 1999967841;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999839205E8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 199999;
    int B = 2000000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 8;
    int B = 4;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 999939200;
    int B = 999939200;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999696E8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 2;
    int B = 1;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 169;
    int B = 180;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 87.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 9945;
    int B = 9425;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4836.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 2;
    int B = 1000000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 22240.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 100000000;
    int B = 500000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.11759488E8;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 100000000;
    int B = 1441557;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6003000.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 1;
    int B = 13;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 61;
    int B = 442;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 79.5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 1172488941;
    int B = 1172401781;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 5.8622268E8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 1951000578;
    int B = 1951000578;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.75500289E8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 8;
    int B = 8;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 2000000000;
    int B = 1999967842;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.9459736E8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 112805732;
    int B = 1120048829;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.77564679E8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 1;
    int B = 32;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 1825030001;
    int B = 1600000001;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 8.120919755E8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 1;
    int B = 9441;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 48.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 169;
    int B = 144;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 78.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 1;
    int B = 72;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 1999569325;
    int B = 1999569325;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 9.997846625E8;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 1349232625;
    int B = 73652228;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.57615655E8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 5;
    int B = 25;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 800000000;
    int B = 400000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 2.822272E8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 1999999940;
    int B = 1277997957;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 7.98469914E8;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 25;
    int B = 31;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
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
    int A = 2;
    int B = 2000000000;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 31600.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 1;
    int B = 1172488941;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 17089.5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 101203012;
    int B = 186538500;
    MaxTriangle* pObj = new MaxTriangle();
    clock_t start = clock();
    double result = pObj->calculateArea(A, B);
    clock_t end = clock();
    delete pObj;
    double expected = 6.8636946E7;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=13903&pm=10548
********************************************************************************
#include <algorithm>  
#include <string>  
#include <set>  
#include <map>  
#include <vector>  
#include <queue>   
#include <iostream>  
#include <iterator>  
#include <math.h>  
#include <cstdio>  
#include <cstdlib>  
#include <sstream>  
 
#pragma comment(linker, "/STACK:60777216")  
 
using namespace std;  
 
typedef pair<int,int> pii;  
typedef long long ll;  
typedef vector<int> vi;  
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())  
#define SORT(c) sort((c).begin(),(c).end())  
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)   
#define REP(i,n) FOR(i,0,n)   
#define CL(a,b) memset(a,b,sizeof(a))  
#define pb push_back  
 
const int inf = 1011111111;  
 
 
vector<pii> solve(int A){ 
    vector<pii> v; 
    for(ll i=0;i*i<=A;i++){ 
         int j=A-i*i; 
         int k=sqrt(j+0.)+0.1; 
         if(k*k==j){ 
             v.pb(pii(i,k)); 
             v.pb(pii(-i,k)); 
             v.pb(pii(i,-k)); 
             v.pb(pii(-i,-k)); 
         } 
     } 
    return v; 
} 
 
class MaxTriangle { 
public: 
 double calculateArea(int A, int B) { 
     vector<pii> v1=solve(A),v2=solve(B); 
      
 double res=-1; 
    REP(i,v1.size()) REP(j,v2.size()){ 
        double sq=v1[i].first*double(v2[j].second)-double(v1[i].second)*v2[j].first; 
        if(sq<0) sq=-sq; 
        sq/=2; 
        if(sq>1e-10) res=max(res,sq); 
    } 
    return res; 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/