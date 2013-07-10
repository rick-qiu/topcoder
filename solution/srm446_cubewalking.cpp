/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10515
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

class CubeWalking {
public:
    string finalPosition(string movement);
};

string CubeWalking::finalPosition(string movement) {
    string ret;
    return ret;
}


int test0() {
    string movement = "LLRR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string movement = "WWWWWWWWWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string movement = "WLWRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string movement = "WWLLWRWLWLLRWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string movement = "LLRRWLRLRLLLLWWLRWRLLRRRRRRL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string movement = "WWLLLRWRRWLRRRRLRWRLLWRWLLRL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string movement = "WLRRWRLRWWWWLR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string movement = "WLRLWL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string movement = "LRLRWRWWLRRRLRRLWLWLWLWRWLWRLRLRWRWWLR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string movement = "RLLWRRRRRRRWRWWWWLWLLRRRRLRRR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string movement = "LWRRWWLRRWLWWRWRRWRWLWRWRLL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string movement = "WRLLRWRLRWWLRLRLWL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string movement = "WLRWRRLRLRRWRWRRRLLRLWWLWLWWWLLWRRR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string movement = "LLR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string movement = "WLRRLWWR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string movement = "RRLLLWWLRLLWRLWLWWRLWRLWLRLWRRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string movement = "RRLRRRLWLWLRWRLWLWWRWRWRWWLWLLWLWRRL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string movement = "RLWWRLRWWRLRLWRLWLLWLWRRWRLRLRLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string movement = "LLWRRRRRLWRRWRRLWLLLRLWWRWRLWLRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string movement = "LWLLRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string movement = "LRLRLWWWWWLWRWRWWLWLLRLWWLLLRLRLRRWWWRWRRWLWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string movement = "LWWWLLWLRRWRRLWWRLWLRRRLLRLWRLWRL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string movement = "WLLRWRLRLWWWWRRRRWLRLWWLWRRR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string movement = "RRLLWRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string movement = "WRLRLWLWRLWRRLWLLLWWWWWWLLWLRWWRLLWRLRWWRRRLWLWLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string movement = "WRRWLWLLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string movement = "LRLLRWRWWRRLWRLRLLLLWWWWLRLRLLRLRRRWR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string movement = "WLRRRLRRRRRWWWWWRLRRRRWLLRLWRRWWLLLRLR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string movement = "LRLLRWWRRLLLLWL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string movement = "LWLWRLRLRRWLLRRLLWLWRRLLWRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string movement = "WRWRWWLL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string movement = "W";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string movement = "WRWLLRLRRRLRWRRWLLWWWLRRRLWRWRLWLLWLWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string movement = "R";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string movement = "LWRWRRWWLWRWLRLWLWRWLRLL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string movement = "RR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string movement = "RWRRWWRLRRWLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string movement = "WLLWRWLRLRWRWLWWWWLWRRLLWWLWWWRWLWRRWWLLRWRLRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string movement = "LRWLWRLRLLWLRRLRRWRRWWRLLWWRRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string movement = "LLLWRRWWWRWLLLLRLWWLWLRWRLLWLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string movement = "LWRWLLRRWRWWWWWLWRRWLWRWLLRLLRLRLRLWWRRRWL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string movement = "WRRLLLRLRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string movement = "R";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string movement = "WWLRLRRLWRWRWWRRRRWLWWLRLLLLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string movement = "WRLLRWLRWWWLLRRRLLRLLLRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string movement = "RWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string movement = "RWWWWRRWWRRWLRLRRWWRL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string movement = "WWRRLLRRLWLLWRWWLRLLWLWWWLLWLLWLWLL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string movement = "RRWWWLLWRWRLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string movement = "LWLWWWRWRWRRWRWLLRLLRLRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string movement = "RWLRRLLWRLWLL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string movement = "LRLLLLRLWRRLRWWRWLRRLRRLRLRLRLL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string movement = "RWWRWLLRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string movement = "WRRRWRLRWLWWRLLRRWRLRLWLWRRLRRWLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string movement = "WLWWLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string movement = "WWWWLLLWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string movement = "WWLLLLLLLRWLWLLRWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string movement = "WW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string movement = "LLLLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string movement = "RRRRRRRRRRWWWWLRRRRRLLWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string movement = "LWWWWWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string movement = "L";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string movement = "WRWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string movement = "WRLWRLWRLWRLWRLWRL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string movement = "WWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string movement = "WLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string movement = "WLLLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string movement = "LWLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string movement = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWLRRRRWWLWLWLWLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string movement = "LLWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string movement = "RWRWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string movement = "WLWWRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string movement = "LWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string movement = "LLWWWWWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string movement = "WWWWRRLLR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string movement = "WRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string movement = "WLLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string movement = "WWWWLLLRRRWWWWWLLRRRWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string movement = "LLWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string movement = "WRWWRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string movement = "RRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string movement = "RWRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "RED";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string movement = "LLLLWRWRWLRWRWLRWRWLRWLWWLWWLRWWWLWWWWLWLWLLRWWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string movement = "LLLLLLLWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string movement = "LLRRRRRRLLLLLLRRLRLRLRLRLRLRLWWWWWLWLWLWRLWWWRRLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string movement = "LWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string movement = "LLRRWWWLRLRLRWWWRRRLLWRLWR";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string movement = "LLWLWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string movement = "WRRRRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string movement = "WRWRWLW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string movement = "WWRWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string movement = "LW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string movement = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "BLUE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string movement = "WWWWWW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string movement = "RWRRWL";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string movement = "WRWWWRW";
    CubeWalking* pObj = new CubeWalking();
    clock_t start = clock();
    string result = pObj->finalPosition(movement);
    clock_t end = clock();
    delete pObj;
    string expected = "GREEN";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707682&rd=13900&pm=10515
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <complex>
using namespace std;
int di[]={-1,0,1,0};
int dj[]={0,1,0,-1};
string s[3][3]={{"RED","BLUE","RED"},{"BLUE","GREEN","BLUE"},{"RED","BLUE","RED"}};
class CubeWalking {
public:
  string finalPosition(string m) {
        int i=1,j=1,k=0;
        for(int x=0;x<m.size();x++)
            if(m[x]=='L')
                k=(k+3)%4;
            else if(m[x]=='R')
                k=(k+1)%4;
            else{
                i=(i+di[k]+3)%3;
                j=(j+dj[k]+3)%3;
            }
        return s[i][j];
  }
};

********************************************************************************
*******************************************************************************/