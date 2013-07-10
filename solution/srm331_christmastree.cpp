/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7261
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

class ChristmasTree {
public:
    long decorationWays(int N, int red, int green, int blue);
};

long ChristmasTree::decorationWays(int N, int red, int green, int blue) {
    long ret;
    return ret;
}


int test0() {
    int N = 1;
    int red = 1;
    int green = 2;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    int red = 0;
    int green = 0;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 2;
    int red = 1;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 2;
    int red = 2;
    int green = 1;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    int red = 3;
    int green = 0;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    int red = 0;
    int green = 3;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 2;
    int red = 0;
    int green = 0;
    int blue = 3;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    int red = 3;
    int green = 3;
    int blue = 3;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 2;
    int red = 7;
    int green = 1;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    int red = 7;
    int green = 1;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 3;
    int red = 7;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3;
    int red = 7;
    int green = 4;
    int blue = 3;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 211;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 3;
    int red = 7;
    int green = 7;
    int blue = 7;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 243;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 3;
    int red = 2;
    int green = 2;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 3;
    int red = 2;
    int green = 2;
    int blue = 2;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 4;
    int red = 0;
    int green = 10;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 4;
    int red = 1;
    int green = 10;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 4;
    int red = 1;
    int green = 8;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 4;
    int red = 5;
    int green = 8;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 69;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 4;
    int red = 5;
    int green = 8;
    int blue = 5;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 4170;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 4;
    int red = 10;
    int green = 10;
    int blue = 10;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 5103;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 4;
    int red = 5;
    int green = 0;
    int blue = 5;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 4;
    int red = 5;
    int green = 1;
    int blue = 3;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 5;
    int red = 7;
    int green = 4;
    int blue = 4;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 258;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 5;
    int red = 15;
    int green = 0;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 5;
    int red = 14;
    int green = 1;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 5;
    int red = 14;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 5;
    int red = 4;
    int green = 10;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 141;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 5;
    int red = 4;
    int green = 10;
    int blue = 10;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 7010;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 6;
    int red = 20;
    int green = 20;
    int blue = 20;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 2342274;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 6;
    int red = 20;
    int green = 0;
    int blue = 20;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 5630;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 7;
    int red = 24;
    int green = 3;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 153;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 7;
    int red = 20;
    int green = 3;
    int blue = 5;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 12667;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 8;
    int red = 1;
    int green = 15;
    int blue = 20;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 197121;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 8;
    int red = 13;
    int green = 15;
    int blue = 20;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 519710536;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 9;
    int red = 13;
    int green = 15;
    int blue = 20;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 145192863537;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 9;
    int red = 23;
    int green = 0;
    int blue = 22;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 87463;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 9;
    int red = 23;
    int green = 1;
    int blue = 22;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 795052;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 9;
    int red = 1;
    int green = 43;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 9;
    int red = 50;
    int green = 50;
    int blue = 50;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 2518971350049;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 10;
    int red = 50;
    int green = 50;
    int blue = 50;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1911899254684272;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 10;
    int red = 50;
    int green = 5;
    int blue = 0;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 661;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 10;
    int red = 2;
    int green = 3;
    int blue = 50;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 627;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 10;
    int red = 3;
    int green = 3;
    int blue = 49;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 3906;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 10;
    int red = 0;
    int green = 0;
    int blue = 50;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 10;
    int red = 25;
    int green = 15;
    int blue = 15;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 6125137522902;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 3;
    int red = 4;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 1;
    int red = 12;
    int green = 12;
    int blue = 12;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 10;
    int red = 50;
    int green = 50;
    int blue = 50;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 1911899254684272;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 6;
    int red = 50;
    int green = 50;
    int blue = 50;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 2342277;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 10;
    int red = 1;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 9;
    int red = 49;
    int green = 49;
    int blue = 49;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 2518971350049;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 2;
    int red = 1;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 1;
    int red = 1;
    int green = 1;
    int blue = 1;
    ChristmasTree* pObj = new ChristmasTree();
    clock_t start = clock();
    long result = pObj->decorationWays(N, red, green, blue);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22662922&rd=10011&pm=7261
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <sstream>
 
using namespace std;
 
pair<int, int> P[] = { make_pair(0,1), make_pair(1,2), make_pair(0,2) };
 
typedef long long li;
 
inline li newton(int n, int k) {
    li res = 1;
 
    for ( int i = 1; i <= k; i++ ) {
        res = ( res * (n - i + 1) ) / i;
    }
 
    return res;
}
 
 
class ChristmasTree { 
    private: 
        long long rek( int N, int red, int green, int blue, int fin ) {
            if ( blue < 0 or red < 0 or green < 0 )
                return 0;
            
            if ( N == fin ) 
                return 1;
 
            long long res = 0;
            
            if ( N % 3 == 0 ) {
                    res += rek( N+1, red - N/3, green - N/3, blue - N/3, fin ) * newton(N, N/3) * newton(N - N/3, (N-N/3)/2);
            }
            if ( N % 2 == 0 ) {
                res += rek( N+1, red - N/2, green - N/2, blue, fin ) * newton( N, N/2 );
                res += rek( N+1, red - N/2, green, blue - N/2, fin ) * newton( N, N/2 );
                res += rek( N+1, red, green - N/2, blue - N/2, fin ) * newton( N, N/2 );
            }
            
            res += rek( N+1, red - N, green, blue, fin );
            res += rek( N+1, red, green - N, blue, fin );
            res += rek( N+1, red, green, blue - N, fin );
 
            return res;
        }
    public: 
        long long decorationWays(int N, int red, int green, int blue) { 
            return rek( 1, red, green, blue, N + 1);
            
        } 
 
        
        
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/