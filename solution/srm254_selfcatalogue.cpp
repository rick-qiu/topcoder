/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2246
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

class SelfCatalogue {
public:
    vector<int> construct(vector<int> counts);
};

vector<int> SelfCatalogue::construct(vector<int> counts) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> counts = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 2, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> counts = {100, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> counts = {1, 7, 3, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 3, 2, 1, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> counts = {1, 11, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11, 0, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> counts = {-1, 11, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> counts = {2, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> counts = {-1, -1, 2, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> counts = {-1, -1, 3, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> counts = {-1, -1, 4, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> counts = {-1, -1, -1, 3, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 3, 0, 0, 0, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> counts = {-1, -1, -1, 4, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> counts = {-1, -1, -1, -1, 4, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> counts = {0, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> counts = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 2, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> counts = {-1, 0, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> counts = {-1, 2, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> counts = {-1, 3, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 3, 0, 0, 0, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> counts = {-1, 4, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 3, 2, 2, 0, 0, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> counts = {-1, 5, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 3, 2, 0, 2, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> counts = {-1, 6, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 2, 1, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> counts = {-1, 7, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 3, 2, 1, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> counts = {-1, 11, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> counts = {-1, -1, 0, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> counts = {-1, -1, 1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 3, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> counts = {-1, -1, 2, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> counts = {-1, -1, 3, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> counts = {-1, -1, -1, 0, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> counts = {-1, -1, -1, 1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> counts = {-1, -1, -1, 2, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> counts = {-1, -1, -1, 3, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 0, 3, 0, 0, 0, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> counts = {-1, -1, -1, -1, 0, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> counts = {-1, -1, -1, -1, 1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 1, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> counts = {-1, -1, -1, -1, 2, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 3, 2, 2, 0, 0, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> counts = {-1, -1, -1, -1, -1, 0, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> counts = {-1, -1, -1, -1, -1, 1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 1, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> counts = {-1, -1, -1, -1, -1, 2, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 3, 2, 0, 2, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> counts = {-1, -1, -1, -1, -1, 5, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, 0, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, 1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, 2, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 2, 1, 1, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, 0, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, 1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 1, 0, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, 2, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 3, 2, 1, 1, 1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, -1, 0, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, -1, 1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, -1, -1, 0};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, -1, -1, 1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 2, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> counts = {0, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> counts = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> counts = {1, 11, 0, 1, 1, 1, 1, 1, 1, 1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11, 0, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> counts = {0, -1, -1, 1, -1, -1, -1, -1, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> counts = {-1, -1, -1, -1, -1, -1, -1, 2, -1, -1};
    SelfCatalogue* pObj = new SelfCatalogue();
    clock_t start = clock();
    vector<int> result = pObj->construct(counts);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 7, 3, 2, 1, 1, 1, 2, 1, 1};
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=8006&pm=2246
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
 
 
using namespace std;
 
int maxi=22;
 
class SelfCatalogue
{
public:
int a[10];
int d[10];
int remain;
int can;
int low[100];
int high[100];
 
void search(int x)
{
  int i,b;
  int d1[10];
  if (x==10)
  {
    memset(d1,0,sizeof(d1));
    for (i=0;i<10;i++)
      if (d[i]!=0)
      {
        d1[i]++;
        d1[low[d[i]]]++;
        if (high[d[i]]!=0) d1[high[d[i]]]++;
      }
    b=1;
    for (i=0;i<10;i++)
      if (d1[i]!=d[i])
      {
        b=0;break;
      }
    if (b==1) can=1;
    return;
  }
  if (a[x]!=-1)
  {
    d[x]=a[x];
    search(x+1);
    if (can==1) return;
  }
  else
  {
    for (i=0;i<=remain;i++)
    {
      d[x]=i;
      remain-=i;
      search(x+1);
      if (can==1) return;
      remain+=i;
    }
  }
}
 
vector <int> construct(vector <int> counts)
{
  int i;
  vector<int> ans;
  for (i=0;i<100;i++)
  {
    low[i]=i%10;
    high[i]=i/10;
  }
  remain=maxi;
  for (i=0;i<10;i++)
  {
    a[i]=counts[i];
    if (a[i]!=-1) remain-=a[i];
  }
  can=0;
  search(0);
  ans.clear();
  if (can==1)
  {
    for (i=0;i<10;i++)
      ans.push_back(d[i]);
  }
  return ans;
}
};

********************************************************************************
*******************************************************************************/