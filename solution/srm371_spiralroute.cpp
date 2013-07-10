/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8262
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

class SpiralRoute {
public:
    vector<int> thronePosition(int width, int length);
};

vector<int> SpiralRoute::thronePosition(int width, int length) {
    vector<int> ret;
    return ret;
}


int test0() {
    int width = 6;
    int length = 4;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 6;
    int length = 5;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 1;
    int length = 11;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 12;
    int length = 50;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 50;
    int length = 50;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 25};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 1;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 1;
    int length = 2;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 1;
    int length = 3;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 1;
    int length = 4;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 4;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 3;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 2;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 1;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 2;
    int length = 2;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 3;
    int length = 3;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 4;
    int length = 4;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 5;
    int length = 5;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 48;
    int length = 48;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 24};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 49;
    int length = 49;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 24};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 50;
    int length = 50;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 25};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 40;
    int length = 35;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 17};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 40;
    int length = 36;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 18};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 40;
    int length = 38;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 19};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 40;
    int length = 41;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 40;
    int length = 42;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 40;
    int length = 43;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 40;
    int length = 44;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 45;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 45;
    int length = 10;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 45;
    int length = 43;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 21};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 45;
    int length = 44;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 22};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 45;
    int length = 46;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 23};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 45;
    int length = 47;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 24};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 45;
    int length = 50;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 27};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 35;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 22};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 36;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 18};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 38;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 19};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 41;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 42;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 43;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 44;
    int length = 40;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 20};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 1;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 44};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 10;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 43;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 23};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 44;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 22};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 46;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 22};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 47;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 22};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 50;
    int length = 45;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 22};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 2;
    int length = 10;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 10;
    int length = 2;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 2;
    int length = 11;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int width = 11;
    int length = 2;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int width = 5000;
    int length = 5000;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2499, 2500};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 5000;
    int length = 4999;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2500, 2499};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int width = 4999;
    int length = 5000;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2499, 2500};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int width = 4998;
    int length = 5000;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2498, 2499};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int width = 5000;
    int length = 4998;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2498, 2499};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 4999;
    int length = 4997;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2500, 2498};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int width = 4999;
    int length = 4999;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2499, 2499};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 4997;
    int length = 4999;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2498, 2500};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int width = 1;
    int length = 5000;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4999};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int width = 5000;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4999, 0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 5000;
    int length = 2;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int width = 2;
    int length = 5000;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 4096;
    int length = 2048;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1023, 1024};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int width = 4095;
    int length = 2047;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3071, 1023};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int width = 2003;
    int length = 4999;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1001, 3997};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int width = 4954;
    int length = 4999;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2476, 2477};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int width = 3;
    int length = 99;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 97};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int width = 4999;
    int length = 4899;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2549, 2449};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int width = 1353;
    int length = 4629;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {676, 3952};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int width = 2;
    int length = 3;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int width = 3;
    int length = 5;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int width = 4901;
    int length = 2283;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3759, 1141};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int width = 3;
    int length = 2;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int width = 3;
    int length = 5000;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4998};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int width = 2;
    int length = 20;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int width = 2;
    int length = 5;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int width = 15;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int width = 359;
    int length = 4888;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {179, 4708};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int width = 10;
    int length = 1;
    SpiralRoute* pObj = new SpiralRoute();
    clock_t start = clock();
    vector<int> result = pObj->thronePosition(width, length);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21468741&rd=10787&pm=8262
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
 
using namespace std;
 
typedef long double dbl;
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
 
#define fi first
#define mp make_pair
#define pb push_back
#define se second
 
#define cl SpiralRoute
 
class SpiralRoute
{
  public:
    vector <int> thronePosition( int width, int length )
    {
      int x = 0, y = 0;
      while (true)
      {
        vi ans(2);
        if (length != 1)
          length--, y++;
        else
        {
          ans[0] = x + width - 1, ans[1] = y;
          return ans;
        }
        if (width != 1)
          width--;
        else
        {
          ans[0] = x, ans[1] = y + length - 1;
          return ans;
        }
        if (length != 1)
          length--;
        else
        {
          ans[0] = x, ans[1] = y;
          return ans;
        }
        if (width != 1)
          width--, x++;
        else
        {
          ans[0] = x, ans[1] = y;
          return ans;
        }
      }
      return vi(0);
    }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/