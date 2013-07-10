/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11264
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

class CubeBuilding {
public:
    int getCount(int R, int G, int B, int N);
};

int CubeBuilding::getCount(int R, int G, int B, int N) {
    int ret;
    return ret;
}


int test0() {
    int R = 1;
    int G = 0;
    int B = 1;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int R = 1;
    int G = 1;
    int B = 2;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 2;
    int G = 2;
    int B = 1;
    int N = 3;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int R = 0;
    int G = 0;
    int B = 10;
    int N = 12;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 372185933;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int R = 1;
    int G = 1;
    int B = 1;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 13;
    int G = 25;
    int B = 13;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 2;
    int G = 3;
    int B = 9;
    int N = 16;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 999984100;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int R = 2;
    int G = 10;
    int B = 12;
    int N = 24;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 999976703;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int R = 13;
    int G = 21;
    int B = 22;
    int N = 25;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 999680373;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int R = 0;
    int G = 1;
    int B = 0;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int R = 9;
    int G = 0;
    int B = 0;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int R = 0;
    int G = 25;
    int B = 0;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int R = 0;
    int G = 20;
    int B = 1;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 16;
    int G = 25;
    int B = 0;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 13;
    int G = 14;
    int B = 24;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 22;
    int G = 2;
    int B = 7;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 1;
    int G = 0;
    int B = 0;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int R = 0;
    int G = 9;
    int B = 0;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int R = 0;
    int G = 0;
    int B = 25;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3276;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int R = 1;
    int G = 4;
    int B = 0;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int R = 12;
    int G = 0;
    int B = 9;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 560;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int R = 25;
    int G = 0;
    int B = 16;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 706860;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int R = 18;
    int G = 17;
    int B = 21;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int R = 2;
    int G = 5;
    int B = 7;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int R = 25;
    int G = 13;
    int B = 17;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
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
    int R = 5;
    int G = 0;
    int B = 0;
    int N = 19;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 521291459;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int R = 0;
    int G = 0;
    int B = 10;
    int N = 17;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 102948717;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int R = 0;
    int G = 0;
    int B = 15;
    int N = 21;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 746365076;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int R = 0;
    int G = 0;
    int B = 20;
    int N = 11;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 696363056;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int R = 25;
    int G = 0;
    int B = 0;
    int N = 24;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 850463507;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int R = 0;
    int G = 3;
    int B = 5;
    int N = 3;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 9099;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int R = 6;
    int G = 0;
    int B = 10;
    int N = 22;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 308903699;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int R = 0;
    int G = 9;
    int B = 15;
    int N = 15;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 149017039;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int R = 12;
    int G = 20;
    int B = 0;
    int N = 9;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 180941864;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int R = 25;
    int G = 0;
    int B = 15;
    int N = 8;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 758225097;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int R = 0;
    int G = 12;
    int B = 9;
    int N = 8;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 64096855;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int R = 25;
    int G = 17;
    int B = 0;
    int N = 11;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 856239698;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int R = 14;
    int G = 11;
    int B = 0;
    int N = 6;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 129433612;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int R = 3;
    int G = 2;
    int B = 5;
    int N = 21;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 214993782;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int R = 6;
    int G = 10;
    int B = 4;
    int N = 5;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 795816365;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int R = 9;
    int G = 6;
    int B = 15;
    int N = 19;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 676249657;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int R = 8;
    int G = 12;
    int B = 20;
    int N = 7;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 262615665;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int R = 25;
    int G = 10;
    int B = 15;
    int N = 10;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 523792017;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int R = 2;
    int G = 20;
    int B = 8;
    int N = 16;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 265733132;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int R = 18;
    int G = 1;
    int B = 4;
    int N = 3;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 19127103;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int R = 21;
    int G = 24;
    int B = 6;
    int N = 10;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 569373363;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 3;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 647180287;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 4;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 741812390;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 5;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 422215836;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 5;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 422215836;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 9;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 66404265;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 13;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 453982504;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 17;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 891378691;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 21;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 437812739;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 22;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 178906838;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 23;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 247873098;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 24;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 902932478;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int R = 25;
    int G = 25;
    int B = 25;
    int N = 25;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 175777317;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int R = 25;
    int G = 25;
    int B = 24;
    int N = 1;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int R = 25;
    int G = 25;
    int B = 24;
    int N = 2;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int R = 25;
    int G = 25;
    int B = 24;
    int N = 3;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 242167453;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int R = 25;
    int G = 25;
    int B = 24;
    int N = 4;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 663706246;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int R = 25;
    int G = 25;
    int B = 24;
    int N = 5;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 803520573;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 5;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 803520573;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int R = 24;
    int G = 25;
    int B = 25;
    int N = 9;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 998396720;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 13;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 629339951;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 17;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 949985298;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 21;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 164357043;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 22;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 11545649;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 23;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 73533041;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int R = 25;
    int G = 24;
    int B = 25;
    int N = 24;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 548915463;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int R = 25;
    int G = 25;
    int B = 24;
    int N = 25;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 170126300;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int R = 24;
    int G = 23;
    int B = 22;
    int N = 25;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 995570555;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int R = 25;
    int G = 24;
    int B = 23;
    int N = 25;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 721888904;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int R = 10;
    int G = 13;
    int B = 25;
    int N = 24;
    CubeBuilding* pObj = new CubeBuilding();
    clock_t start = clock();
    int result = pObj->getCount(R, G, B, N);
    clock_t end = clock();
    delete pObj;
    int expected = 47011342;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692969&rd=14436&pm=11264
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <deque> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++) 
 
typedef long long ll; 
#define MOD 1000000007ll 
 
#define M 77 
 
ll C[100][100]; 
ll dp[30][100][100]; // pos, max, sum 
ll dp2[30][100][100]; // pos, maxsum, sum 
 
class CubeBuilding{ 
  public: 
   
  ll func(int S, int front, int R, int G){ 
    if(R < front) return 0; 
    R -= front; S -= front; 
    return C[S][R] * C[S-R][G] % MOD; 
  } 
 
  int getCount(int R, int G, int B, int N){ 
    int i,j,k,l,m; 
     
    REP(i,100) REP(j,i+1){ 
      if(j == 0 || j == i) C[i][j] = 1; 
      else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD; 
    } 
     
    dp[0][0][0] = 1; 
    REP(i,N) REP(j,M+1) REP(k,M+1) if(dp[i][j][k] > 0) REP(l,M+1) if(k+l <= M){ 
      dp[i+1][max(j,l)][k+l] = (dp[i+1][max(j,l)][k+l] + dp[i][j][k]) % MOD; 
    } 
     
    dp2[0][0][0] = 1; 
    REP(i,N) REP(j,M+1) REP(k,M+1) if(dp2[i][j][k] > 0) REP(l,M-j+1) REP(m,M-k+1) if(dp[N][l][m] > 0){ 
      dp2[i+1][j+l][k+m] = (dp2[i+1][j+l][k+m] + dp2[i][j][k] * dp[N][l][m]) % MOD; 
    } 
     
    int S = R+G+B; 
    ll ans = 0; 
    REP(i,S+1) if(dp2[N][i][S] > 0){ 
      ll tmp = (func(S,i,R,G) + func(S,i,G,B) + func(S,i,B,R)) % MOD; 
      ans = (ans + tmp * dp2[N][i][S]) % MOD; 
    } 
     
    return (int)ans; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/