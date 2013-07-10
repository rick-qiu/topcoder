/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11279
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

class SlimeXSlimeRancher2 {
public:
    int train(vector<int> attributes);
};

int SlimeXSlimeRancher2::train(vector<int> attributes) {
    int ret;
    return ret;
}


int test0() {
    vector<int> attributes = {1, 2, 3};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> attributes = {5, 5};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {900, 500, 100};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> attributes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 48902;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> attributes = {1, 1, 1, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> attributes = {999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> attributes = {999, 998};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {1, 2};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> attributes = {999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> attributes = {1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> attributes = {999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> attributes = {1, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {999, 999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {1, 999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1996;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> attributes = {999, 1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> attributes = {999, 998, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> attributes = {1, 2, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> attributes = {1, 999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1996;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> attributes = {1, 999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> attributes = {1, 500, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1497;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> attributes = {999, 500, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1497;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> attributes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> attributes = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> attributes = {1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24950;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> attributes = {999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24950;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> attributes = {999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> attributes = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> attributes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 999, 1, 1, 1, 1, 1, 1, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 48902;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> attributes = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 1, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> attributes = {1, 21, 41, 62, 82, 102, 123, 143, 163, 184, 204, 225, 245, 265, 286, 306, 326, 347, 367, 387, 408, 428, 449, 469, 489, 510, 530, 550, 571, 591, 612, 632, 652, 673, 693, 713, 734, 754, 774, 795, 815, 836, 856, 876, 897, 917, 937, 958, 978, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24974;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> attributes = {999, 978, 958, 937, 917, 897, 876, 856, 836, 815, 795, 774, 754, 734, 713, 693, 673, 652, 632, 612, 591, 571, 550, 530, 510, 489, 469, 449, 428, 408, 387, 367, 347, 326, 306, 286, 265, 245, 225, 204, 184, 163, 143, 123, 102, 82, 62, 41, 21, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24974;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> attributes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> attributes = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> attributes = {1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24950;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> attributes = {999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999, 1, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 23952;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> attributes = {999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999, 998, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> attributes = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> attributes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 999, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 47904;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> attributes = {999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 1, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> attributes = {1, 21, 42, 63, 84, 104, 125, 146, 167, 188, 208, 229, 250, 271, 292, 312, 333, 354, 375, 396, 416, 437, 458, 479, 500, 520, 541, 562, 583, 603, 624, 645, 666, 687, 707, 728, 749, 770, 791, 811, 832, 853, 874, 895, 915, 936, 957, 978, 999};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24474;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> attributes = {999, 978, 957, 936, 915, 895, 874, 853, 832, 811, 791, 770, 749, 728, 707, 687, 666, 645, 624, 603, 583, 562, 541, 520, 500, 479, 458, 437, 416, 396, 375, 354, 333, 312, 292, 271, 250, 229, 208, 188, 167, 146, 125, 104, 84, 63, 42, 21, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24474;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> attributes = {110, 830, 308, 631, 555, 234};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 2312;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> attributes = {371, 248, 180, 869, 774, 80, 442, 562, 611, 337};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 4216;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> attributes = {733, 897, 381, 405, 469, 282, 921, 341, 659, 385, 818, 186, 941, 535, 600, 263, 470, 470, 591, 66, 856, 187, 99, 787, 745, 385, 28, 147, 404, 526, 546, 159, 240, 573, 562, 241, 121, 121, 845, 332, 305, 383, 548, 495, 805, 944, 585, 245, 394};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 23235;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> attributes = {289, 287, 502, 140, 65, 760, 618, 644, 319, 656};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3320;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> attributes = {324, 836, 538, 114, 632, 356, 522, 113, 223, 13, 556, 896, 92, 581, 1, 327, 182, 440, 244, 934, 187, 962, 224, 450, 191, 796, 642, 650, 950, 694, 866, 597, 585, 745, 569};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 16638;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> attributes = {789, 895, 593, 315, 261, 145, 634, 560, 679, 226, 809, 870, 674, 47, 467, 378, 701, 865, 397, 186};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 7409;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> attributes = {257, 539, 576, 378, 673, 732, 242, 303, 621, 819, 542, 567, 648, 213, 613, 126, 33, 66, 733, 192, 782, 920, 537, 614, 452, 945, 107, 859, 227};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 13089;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> attributes = {7, 974, 604, 706, 685, 141, 841, 865, 236, 481, 342, 730, 137, 930, 680, 946, 67, 193, 781, 428, 918, 770, 890, 197, 751, 436, 736, 712, 289, 184, 414, 178, 586, 849, 533, 837, 481, 772};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 15705;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> attributes = {984, 564, 883, 810, 397, 485, 140, 967, 678, 171, 691, 545, 894, 660, 867, 853, 264, 833, 965, 118, 614, 94, 95, 613, 616, 88, 266, 144, 27, 261, 256, 463, 529, 781, 528, 637, 689, 489, 610, 483};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 18308;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> attributes = {896, 532, 221, 928, 798, 7, 929, 730, 923, 846, 661, 565, 121, 324, 206, 433, 427, 30, 502, 339, 684, 655, 713, 360, 425, 527, 371, 702, 848, 133, 569, 58, 81, 278, 532, 28, 297, 7, 508, 812, 875, 364, 862};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 18840;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> attributes = {976, 704};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 272;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> attributes = {831, 933, 11};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1024;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> attributes = {388, 546, 7, 503, 930};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 2276;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> attributes = {935, 869, 11, 595, 162, 688, 671, 877};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 2672;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> attributes = {273, 78, 142, 910, 124, 295, 596, 455, 431, 609, 957, 62};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 6552;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> attributes = {290, 324, 36, 139, 751, 7, 126, 852, 961, 897, 891, 962, 417, 274, 763, 753, 696};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 7215;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> attributes = {570, 942, 479, 372, 558, 354, 337, 350, 320, 537, 438, 733, 974, 780, 585, 343, 208, 824, 242, 521, 435, 826, 163, 318, 327};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 11814;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> attributes = {55, 774, 608, 585, 873, 919, 643, 595, 981, 664, 470, 425, 769, 204, 401, 464, 186, 85, 479, 471, 131, 867, 569, 59, 882, 682, 464, 291, 382, 382, 2, 116, 318, 160, 526, 480};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 18354;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> attributes = {403, 369, 303, 818, 819, 700, 826, 394, 123, 948, 690, 789, 831, 484, 980, 734, 95, 70, 356, 780, 105, 353, 123, 693, 176, 790, 594, 574, 331, 533, 243, 892, 763, 247, 182, 80, 84, 613, 427, 588, 273, 418, 90, 475, 253, 703, 321, 843, 789, 171};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24761;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> attributes = {2, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> attributes = {998, 998};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> attributes = {93, 43};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> attributes = {917, 962};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> attributes = {935, 948};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> attributes = {234, 521};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> attributes = {526, 874};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 348;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> attributes = {2, 1, 1, 2, 1, 2, 1, 1, 1, 2};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> attributes = {999, 999, 998, 999, 998, 998, 998, 998, 998, 998};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> attributes = {78, 83, 27, 1, 10, 14, 51, 6, 15, 25};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 520;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> attributes = {970, 905, 982, 949, 938, 934, 990, 993, 946, 949};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> attributes = {901, 7, 70, 37, 983, 941, 32, 916, 25, 967};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 4951;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> attributes = {383, 276, 952, 729, 368, 582, 558, 301, 708, 659};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 4004;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> attributes = {810, 697, 748, 252, 377, 629, 887, 970, 337, 264};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3729;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> attributes = {2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> attributes = {998, 999, 999, 998, 999, 998, 998, 999, 998, 999, 998, 999, 998, 999, 999, 998, 998, 998, 998, 998, 999, 998, 998, 998, 999, 998, 999, 999, 998, 998, 999, 998, 999, 998, 999, 998, 998, 999, 998, 998, 999, 998, 998, 998, 998, 999, 999, 999, 998, 998};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> attributes = {77, 82, 40, 81, 100, 26, 28, 45, 95, 98, 33, 43, 60, 93, 88, 27, 77, 85, 14, 63, 71, 95, 69, 68, 80, 40, 23, 32, 86, 24, 21, 13, 90, 78, 89, 94, 48, 97, 54, 100, 21, 42, 13, 7, 87, 11, 25, 89, 11, 3};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 2164;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> attributes = {959, 944, 900, 908, 906, 901, 947, 932, 986, 985, 905, 950, 933, 975, 899, 925, 953, 972, 964, 899, 976, 967, 980, 974, 961, 973, 960, 966, 901, 928, 994, 964, 927, 980, 966, 953, 918, 956, 997, 985, 928, 968, 991, 902, 909, 982, 981, 974, 993, 982};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 2271;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> attributes = {920, 909, 901, 900, 11, 932, 948, 34, 92, 50, 27, 918, 63, 41, 44, 51, 73, 33, 985, 947, 951, 975, 969, 34, 939, 27, 75, 915, 44, 928, 38, 907, 40, 984, 12, 73, 903, 952, 944, 954, 79, 983, 17, 71, 84, 962, 15, 992, 905, 956};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 23993;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> attributes = {433, 854, 266, 176, 41, 118, 745, 746, 483, 148, 377, 826, 10, 637, 976, 739, 898, 553, 885, 665, 922, 776, 536, 409, 355, 290, 345, 323, 323, 931, 299, 466, 416, 655, 808, 274, 463, 762, 750, 740, 606, 859, 987, 63, 880, 927, 528, 974, 16, 679};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 21412;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> attributes = {550, 931, 337, 528, 639, 216, 828, 467, 991, 580, 329, 667, 737, 813, 984, 614, 483, 935, 475, 121, 96, 484, 470, 257, 484, 167, 799, 371, 288, 441, 23, 68, 680, 925, 719, 737, 59, 139, 734, 650, 815, 996, 562, 902, 910, 295, 272, 597, 912, 131};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 22592;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> attributes = {999, 998};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
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
    vector<int> attributes = {299, 777, 888, 777, 555, 444, 65, 56, 6, 6, 5, 3, 23, 23, 2, 3, 3, 4, 4, 4, 4};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 14697;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> attributes = {900, 100, 100, 500, 100, 50};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3650;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> attributes = {9, 6, 8, 7, 3};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> attributes = {3, 1, 2};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> attributes = {2, 4, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> attributes = {1, 3, 7};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> attributes = {900, 500, 100};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> attributes = {8, 1, 1};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> attributes = {1, 6, 7};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> attributes = {1, 5, 5, 5, 5, 6};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> attributes = {1, 1, 2, 2, 5, 7};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> attributes = {10, 8, 9, 7};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> attributes = {3, 2, 4};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> attributes = {8, 3, 5};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> attributes = {1, 3, 2};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> attributes = {10, 20, 35};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> attributes = {1, 5, 5};
    SlimeXSlimeRancher2* pObj = new SlimeXSlimeRancher2();
    clock_t start = clock();
    int result = pObj->train(attributes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22891711&rd=14435&pm=11279
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
 
using namespace std;
 
 
class SlimeXSlimeRancher2 {
public:
  int train(vector <int> attributes) {
 
      sort(attributes.begin(),attributes.end());
      int siz  = attributes.size();
      int max = attributes[siz - 1];
      vector<int>::iterator it;
      int result = 0;
      for( it = attributes.begin(); it!= attributes.end(); it++)
      {
          result += max - (*it);
      }
 
 
    return result;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/