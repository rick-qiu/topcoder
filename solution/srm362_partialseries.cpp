/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8048
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

class PartialSeries {
public:
    vector<int> getFirst(vector<int> series, vector<int> available);
};

vector<int> PartialSeries::getFirst(vector<int> series, vector<int> available) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> series = {-1, -1, -1, -1, -1};
    vector<int> available = {1, 2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> series = {1, 2, -1, 4, 5};
    vector<int> available = {10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 10, 4, 5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> series = {1, -1, 6, 2, 4, -1, 2, 7, -1, -1};
    vector<int> available = {1, 2, 4, 7, 8, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 6, 2, 4, 2, 2, 7, 7, 4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> available = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> series = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {1, 2, 1, 1, 1, 5, 1, 1, 1, 1, 1, 9, 1, 1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 5, 9, 10};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> series = {1, 2, 3, 4, 5};
    vector<int> available = {};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> series = {1, -1, 1, 1, -1, 1, 1, -1, -1, 1, -1, 1, 1, 1, 1, 1, 1, -1, 1, 1, 1, 1, 1, 1, -1, 1, 1, -1, 1, 1, -1, 1, 1, 1, -1, -1, -1, -1, -1, -1, 10};
    vector<int> available = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 3, 1, 1, 4, 1, 1, 4, 1, 1, 1, 5, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> series = {-1};
    vector<int> available = {10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> series = {8, -1, 6, 4, -1, -1, 6};
    vector<int> available = {2, 3, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 6, 6, 4, 2, 3, 6};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> series = {-1, 5, -1};
    vector<int> available = {1, 1, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 9};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> series = {4, -1, 4, 7, -1, 8};
    vector<int> available = {5, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 4, 7, 7, 8};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> series = {8, -1, 7, 4, -1, 8};
    vector<int> available = {5, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 7, 4, 5, 8};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> series = {4, -1, 4, 5, -1, 5};
    vector<int> available = {6, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 4, 5, 6, 5};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> series = {5, -1, 5, 4, -1, 4};
    vector<int> available = {6, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 5, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> series = {5, -1, 5, 4, -1, 4};
    vector<int> available = {4, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 5, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> series = {5, -1, 5, 4, -1, 4};
    vector<int> available = {2, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 5, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> series = {5, -1, 5, 4, -1, 4};
    vector<int> available = {5, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5, 4, 1, 4};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> series = {5, -1, 5};
    vector<int> available = {2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> series = {-1, 3, -1};
    vector<int> available = {3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 4};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> series = {2, -1, 8, 5, -1, -1, 8};
    vector<int> available = {8, 6, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 8, 8, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> series = {2, -1, 8, 5, -1, -1};
    vector<int> available = {8, 6, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 8, 8, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> series = {4, 5, -1, -1, -1, 5, 4};
    vector<int> available = {5, 5, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 5, 4, 5, 5, 4};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> series = {4, 5, -1, -1, -1, 6, 4};
    vector<int> available = {5, 4, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 5, 4, 6, 6, 4};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> series = {5, 5, -1, -1, -1, 4, 4};
    vector<int> available = {5, 4, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5, 4, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> series = {-1, 1, -1, -1};
    vector<int> available = {0, 5, 10, 2, 5, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> series = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
    vector<int> available = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> series = {-1, 3, 4, 4, 9, 10, 4, 4, 7, -1, -1, 6, 1, 5, -1, -1, 10, 3, 6, 5, 4, 2, 3, 3};
    vector<int> available = {8, 9, 2, 2, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 4, 9, 10, 4, 4, 7, 2, 2, 6, 1, 5, 8, 9, 10, 3, 6, 5, 4, 2, 3, 3};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> series = {10, 8, 0, 3, 6, 8, 8, 7, 7, -1, 6, 5, -1, 7, 6, 9, 4, 5, 3, 1, 3, 10, 8, 5, -1, 4, 2, -1, 6, -1, 5, 2, 8, 2, 6};
    vector<int> available = {0, 2, 1, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 8, 0, 3, 6, 8, 8, 7, 7, 0, 6, 5, 1, 7, 6, 9, 4, 5, 3, 1, 3, 10, 8, 5, 4, 4, 2, 2, 6, 5, 5, 2, 8, 2, 6};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> series = {10, -1, 5, 5, 7, 9, 10, 0, -1, 6, 10, 6, -1, 7};
    vector<int> available = {4, 9, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 5, 5, 7, 9, 10, 0, 0, 6, 10, 6, 4, 7};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> series = {1, 6, 9, 8, -1, -1, -1, 4, 7, -1, 3, -1, 0, 6, 8, 1, -1, 3, -1, 5, 4, 3, 7, -1, -1, -1, 3, 6, 8, -1, 6, 6, 2, 3, 10, 8, 2};
    vector<int> available = {4, 9, 1, 6, 7, 8, 0, 3, 8, 9, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 9, 8, 6, 0, 4, 4, 7, 7, 3, 0, 0, 6, 8, 1, 1, 3, 8, 5, 4, 3, 7, 9, 9, 3, 3, 6, 8, 8, 6, 6, 2, 3, 10, 8, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> series = {-1, -1, 6, -1, 1, 9, 6, 8, 9, 7, -1, 3, 0, 5, -1, 4, 8, 2, 10, 6, 0, 3, -1, 4, 6, 6, 9, -1, -1, 7, 3, 7, 0, 10, -1, 2, 3, 2, 6, 2, 4, 3, 9};
    vector<int> available = {6, 2, 8, 4, 5, 0, 9, 9, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 6, 6, 0, 1, 9, 6, 8, 9, 7, 6, 3, 0, 5, 5, 4, 8, 2, 10, 6, 0, 3, 4, 4, 6, 6, 9, 9, 9, 7, 3, 7, 0, 10, 2, 2, 3, 2, 6, 2, 4, 3, 9};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {0, 7, 7, 10, 6, 6, 9, 4, 8, 7, 2, 2, 9, 9, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 2, 4, 6, 6, 7, 7, 7, 8, 9, 9, 9, 10};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> series = {-1, -1, -1, -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {5, 6, 5, 7, 5, 4, 9, 4, 6, 9, 7, 3, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 4, 5, 10, 5, 5, 6, 6, 7, 7, 9, 9, 9};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> series = {4, 1, -1, 9, -1, 8, 8, 5, 2, -1, 2, -1, 10, 9, 6, -1, -1, 8, -1, -1, 3, -1, 4, 0, -1, 2, -1};
    vector<int> available = {5, 1, 10, 5, 7, 10, 4, 2, 0, 1, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 1, 9, 10, 8, 8, 5, 2, 1, 2, 10, 10, 9, 6, 5, 5, 8, 2, 2, 3, 4, 4, 0, 0, 2, 7};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> series = {-1, 1, -1, -1, 6, 9, 8, 2, 6, 5, -1, -1, 10, -1, 4, 9, 4, 0, 2, 7, -1, 3, 3, 3, -1, -1, 9, 10, 10};
    vector<int> available = {6, 10, 4, 1, 2, 10, 1, 0, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 6, 9, 8, 2, 6, 5, 10, 10, 10, 4, 4, 9, 4, 0, 2, 7, 10, 3, 3, 3, 1, 1, 9, 10, 10};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> series = {4, -1, 6, -1, 10, -1, 6, 3, 0, 0, 8, 7, 0, -1, 1, -1, -1, 4, 9, -1, 5, 8, 8, 2, -1, 5, 7, 3, -1, 0, 5, 4, -1, -1, -1, -1, -1, -1};
    vector<int> available = {5, 10, 4, 10, 1, 3, 2, 5, 5, 7, 3, 9, 8, 1, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 6, 7, 10, 10, 6, 3, 0, 0, 8, 7, 0, 1, 1, 1, 3, 4, 9, 5, 5, 8, 8, 2, 2, 5, 7, 3, 3, 0, 5, 4, 4, 5, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> series = {7, -1, 2, -1, -1, 2, 9, -1, -1, -1, 5, 4, -1, 0, 2, 6, 10, -1, 0, -1, -1, 10, 2, -1, 9, 7, -1, 3, -1, -1, 10, 9, 2, 5, -1};
    vector<int> available = {8, 10, 2, 9, 2, 5, 5, 7, 6, 10, 1, 0, 6, 4, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2, 2, 4, 4, 2, 9, 9, 5, 5, 5, 4, 0, 0, 2, 6, 10, 1, 0, 6, 10, 10, 2, 2, 9, 7, 6, 3, 7, 10, 10, 9, 2, 5, 8};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> series = {4, -1, 2, 8, 10, 3, 4, 6, 2, 8, 6, 1, -1, 9, 8, 8};
    vector<int> available = {6, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 2, 8, 10, 3, 4, 6, 2, 8, 6, 1, 6, 9, 8, 8};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> series = {0, 6, -1, 3, 1, 8, 5, 5, 1, 9, -1, 10};
    vector<int> available = {3, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 3, 3, 1, 8, 5, 5, 1, 9, 2, 10};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> series = {2, -1, 5, 3, 3, 10, -1, 7, 4, 9, 7, 8, 5, -1, 2, 2, 7, 5, 6, 3, 1, -1, 6, -1, 7, 6, 1, 7, -1, 7, 8, 7, 6, 5, 10, 6, 4, 1, 1, -1, 0, 4, 6, 6};
    vector<int> available = {9, 1, 2, 8, 9, 2, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 5, 3, 3, 10, 8, 7, 4, 9, 7, 8, 5, 2, 2, 2, 7, 5, 6, 3, 1, 1, 6, 8, 7, 6, 1, 7, 9, 7, 8, 7, 6, 5, 10, 6, 4, 1, 1, 9, 0, 4, 6, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> series = {-1, 4, 9, -1, 4, 6, 5, 10, 5, -1, 0, 6, -1, 5, 4, 3, 4, -1, 4, -1, -1, 6, 5, 0, 5, -1, 10, 7, 10, -1, 4, -1, 6, -1, 9};
    vector<int> available = {8, 2, 4, 3, 4, 7, 6, 0, 2, 8, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 9, 2, 4, 6, 5, 10, 5, 0, 0, 6, 6, 5, 4, 3, 4, 4, 4, 8, 8, 6, 5, 0, 5, 5, 10, 7, 10, 3, 4, 4, 6, 7, 9};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> series = {6, 7, -1, -1, 6, 0, -1, 9, -1, 4, 0, 3, -1, -1, 8};
    vector<int> available = {6, 10, 6, 3, 2, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 10, 6, 6, 0, 2, 9, 9, 4, 0, 3, 3, 6, 8};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> series = {9, 2, 2, 0, 1, 6, 2, 10, 0, 7, 4, 6, -1, 5, 7, 7, 1, 6, 0, 0, 8, 3, -1, 10, 8, 6, 8, 8, 8, 0, -1, -1, 10};
    vector<int> available = {4, 5, 1, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 2, 2, 0, 1, 6, 2, 10, 0, 7, 4, 6, 5, 5, 7, 7, 1, 6, 0, 0, 8, 3, 1, 10, 8, 6, 8, 8, 8, 0, 1, 4, 10};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> series = {4, 2, 0, 0, -1, 6, -1, 9, -1, 9, 9, 10, 4, -1, 3, 9, -1, 6, 3, 8, 8, 7, -1, 4, 1, 3, 1, -1, 6, -1, 1, 3, -1, -1};
    vector<int> available = {0, 2, 7, 10, 5, 10, 0, 5, 10, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 0, 0, 0, 6, 7, 9, 10, 9, 9, 10, 4, 0, 3, 9, 8, 6, 3, 8, 8, 7, 5, 4, 1, 3, 1, 2, 6, 5, 1, 3, 10, 10};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> series = {8, 7, 5, 0, 7, -1, -1, 4, 6, 4, 5, 8, 8, 4, 10, 7, 9, 6, 8, 9, 1, 0, 7, 1, 6, 9, 10, 1, 6, 7, 7, 7, 9, 7, 9, 2, 7, 8, 8, 1, 6, 8, 3, 4, 0, 7, 4, 5, 0};
    vector<int> available = {3, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 5, 0, 7, 6, 3, 4, 6, 4, 5, 8, 8, 4, 10, 7, 9, 6, 8, 9, 1, 0, 7, 1, 6, 9, 10, 1, 6, 7, 7, 7, 9, 7, 9, 2, 7, 8, 8, 1, 6, 8, 3, 4, 0, 7, 4, 5, 0};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> series = {-1, 8, 10, 2, 10};
    vector<int> available = {2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 8, 10, 2, 10};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> series = {10, 6, 1, 0, 1, 8, 0, 10, 7, 0, 3, 10, 10, 0, 0, -1, 7, 1, 7, 8, -1, 4, 2, 5, 5, 2, 1, 4, 8, 4, 9, 2};
    vector<int> available = {1, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6, 1, 0, 1, 8, 0, 10, 7, 0, 3, 10, 10, 0, 0, 0, 7, 1, 7, 8, 1, 4, 2, 5, 5, 2, 1, 4, 8, 4, 9, 2};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {3, 4, 7, 3, 5, 8, 1, 3, 5, 3, 9, 10, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 3, 3, 3, 4, 5, 5, 7, 8, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {7, 1, 10, 9, 2, 10, 1, 9, 9, 4, 10, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 4, 7, 8, 9, 9, 9, 10, 10, 10};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> series = {3, 8, -1, -1, 8, 2, 10, 9, 5, 3, 3, 0, 10, -1, -1, 9, 9, 4, 4, 1, 9, 9, 7, 2, 4, 0, -1, 10, -1, 10, 3, 3, -1, 10, 8, 6, -1, 10, 4, 5, 4, -1};
    vector<int> available = {3, 9, 4, 4, 4, 1, 6, 2, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8, 1, 1, 8, 2, 10, 9, 5, 3, 3, 0, 10, 4, 4, 9, 9, 4, 4, 1, 9, 9, 7, 2, 4, 0, 2, 10, 3, 10, 3, 3, 9, 10, 8, 6, 6, 10, 4, 5, 4, 4};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> series = {-1, -1, 0};
    vector<int> available = {1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> series = {-1, 4, 3, 5, -1, 0, 10, -1, 9, 9, -1, -1, -1, 4, -1, 10, -1, -1, -1, 6, 4, 5, -1, -1, -1, 8, -1, 0, 10, -1, 2, 8, 10, 4, 10, 7};
    vector<int> available = {6, 5, 6, 9, 2, 2, 2, 1, 4, 8, 7, 3, 3, 5, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 3, 5, 5, 0, 10, 9, 9, 9, 2, 2, 2, 4, 5, 10, 3, 3, 6, 6, 4, 5, 6, 7, 8, 8, 1, 0, 10, 2, 2, 8, 10, 4, 10, 7};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {10, 0, 2, 0, 9, 1, 1, 1, 1, 7, 7, 9, 0, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 1, 1, 1, 1, 2, 7, 7, 9, 9, 10};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> series = {9, 6, 1, -1, 10, 2, 0, 0, 4, 0, 9, -1, 1, 5, 0, 7, 4, 10, 0, 2, -1, 6, 10, 2, 7, 0, 3, 6, -1, 5, 9, 7, 5, 1, 3, 6, 6, 8, -1, 6, 7, 4, 6, 6, 5, 9, 8, 7};
    vector<int> available = {3, 9, 3, 9, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 6, 1, 3, 10, 2, 0, 0, 4, 0, 9, 9, 1, 5, 0, 7, 4, 10, 0, 2, 3, 6, 10, 2, 7, 0, 3, 6, 7, 5, 9, 7, 5, 1, 3, 6, 6, 8, 9, 6, 7, 4, 6, 6, 5, 9, 8, 7};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {5, 3, 8, 5, 2, 1, 3, 7, 9, 6, 1, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 3, 3, 5, 5, 6, 7, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> series = {0, 7, -1, -1, -1, 10, -1, 4, 1, -1, -1, 3, -1, 10, -1, -1, -1, 2, -1, 8, 8, -1, -1};
    vector<int> available = {4, 9, 5, 8, 4, 3, 8, 4, 4, 8, 8, 0, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 8, 8, 8, 10, 4, 4, 1, 1, 3, 3, 4, 10, 4, 4, 0, 2, 5, 8, 8, 8, 9};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> series = {-1, -1, 5};
    vector<int> available = {6, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 5};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> series = {0, -1, -1};
    vector<int> available = {1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 10};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> series = {-1, -1, 5};
    vector<int> available = {3, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> series = {-1, -1, 5};
    vector<int> available = {1, 2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> series = {-1, -1, 5};
    vector<int> available = {6, 7, 8, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6, 5};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> series = {10, 6, 2, 9, 10, 8, -1, 3, 4, 1, 4, 8, 4, 3, 8, 9, -1, 6, 10, -1, -1, 10, 5, -1, 5, 2, 8, 8, -1, 7, 5, -1, 10, 0};
    vector<int> available = {7, 3, 5, 0, 1, 3, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6, 2, 9, 10, 8, 0, 3, 4, 1, 4, 8, 4, 3, 8, 9, 6, 6, 10, 3, 3, 10, 5, 5, 5, 2, 8, 8, 7, 7, 5, 1, 10, 0};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> series = {-1, -1, -1, -1, -1, 10, -1, 3, -1, 4, 2, -1, 2, -1, -1, 6, 2, 3, -1, -1, -1, 9, 5, 0, 4, 1, 6, 3, 6, 0, 5, -1};
    vector<int> available = {8, 7, 10, 10, 4, 8, 0, 4, 8, 4, 2, 5, 6, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 4, 5, 10, 6, 3, 4, 4, 2, 2, 2, 8, 8, 6, 2, 3, 7, 10, 10, 9, 5, 0, 4, 1, 6, 3, 6, 0, 5, 8};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {5, 7, 2, 3, 8, 5, 5, 7, 9, 7, 2, 5, 0, 6, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 3, 5, 5, 5, 5, 6, 7, 7, 7, 8, 9, 9};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> series = {8, 6, 7, 2, -1, -1, 1, 8, 3, -1, -1, 7, -1, 2, 1, 4, 4, 9, 7, 4, -1, 2, -1, 4, 1, 2, -1, -1, 2, -1, -1};
    vector<int> available = {4, 6, 7, 8, 4, 7, 1, 1, 2, 10, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 6, 7, 2, 1, 1, 1, 8, 3, 4, 6, 7, 7, 2, 1, 4, 4, 9, 7, 4, 2, 2, 4, 4, 1, 2, 7, 8, 2, 9, 10};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> series = {8, 4, -1};
    vector<int> available = {4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 4, 4};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> series = {9, -1, 6, 5, 1, -1, 8, -1, -1, -1, -1, 6, 6, 10, 2, 0, 0, 9, 6, -1, 5, -1, 3, 4, 6, 4, 5, 5, 10, 0, 6, 7, -1, -1, -1, 9, 8, 4, 4, 10, 7, 9};
    vector<int> available = {1, 5, 6, 1, 5, 9, 8, 8, 8, 9, 3};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 6, 6, 5, 1, 1, 8, 8, 8, 1, 5, 6, 6, 10, 2, 0, 0, 9, 6, 5, 5, 3, 3, 4, 6, 4, 5, 5, 10, 0, 6, 7, 8, 9, 9, 9, 8, 4, 4, 10, 7, 9};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> series = {5, -1, 3, 9, 5, -1, 8, 8, 10, 3, 10, -1, -1, 3, 8, -1, -1, -1, -1, 5, 8, 5, 8, -1, 8, 7, 6, 2, 1, -1, -1, 5, -1, -1, 0, -1};
    vector<int> available = {6, 4, 2, 0, 0, 7, 0, 9, 8, 0, 7, 7, 10, 3};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 3, 9, 5, 2, 8, 8, 10, 3, 10, 10, 3, 3, 8, 7, 6, 0, 0, 5, 8, 5, 8, 8, 8, 7, 6, 2, 1, 7, 7, 5, 4, 0, 0, 9};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> series = {-1, -1, -1, 1, -1, -1, 0, -1, -1, -1, -1, -1, 1, 1, -1};
    vector<int> available = {3, 0, 5, 4, 6, 7, 10, 4, 2, 3, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3, 1, 4, 4, 0, 0, 5, 6, 7, 7, 1, 1, 10};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> series = {-1, 9, 0, -1, 2, -1, -1, 10, 5, -1, -1, 8, 1, -1};
    vector<int> available = {8, 5, 3, 7, 3, 7, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 0, 3, 2, 3, 7, 10, 5, 5, 8, 8, 1, 7};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> series = {-1, 8, 6, 3, 3, 3, 2, 9, 5, -1, -1, -1, 4, 2, -1, 2, 7, 3, 5, 1, 10, 9, 7, -1, 9, 3, -1, 4, 8, 6, 9, 8, 9, -1, 7};
    vector<int> available = {8, 7, 5, 5, 5, 1, 8, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8, 6, 3, 3, 3, 2, 9, 5, 5, 5, 5, 4, 2, 1, 2, 7, 3, 5, 1, 10, 9, 7, 7, 9, 3, 6, 4, 8, 6, 9, 8, 9, 8, 7};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> series = {7, 3, -1, 3, -1, 10, 1, -1, -1, 1, 6, -1, -1, 6, 1, -1, 3, -1, -1, -1, 9, 0, 2, 3, 7, 8, -1, 1, 3, -1, 9, 0, 5, 8, 2, -1, 7, 0, 1, 4, 0, 5, 8, 4, 9, -1, 6, -1, 7, 1};
    vector<int> available = {1, 0, 10, 0, 7, 4, 6, 6, 8, 1, 4, 7, 1, 1, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 3, 0, 3, 10, 10, 1, 1, 1, 1, 6, 6, 6, 6, 1, 1, 3, 4, 4, 8, 9, 0, 2, 3, 7, 8, 1, 1, 3, 9, 9, 0, 5, 8, 2, 7, 7, 0, 1, 4, 0, 5, 8, 4, 9, 0, 6, 7, 7, 1};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> series = {6, 7, 6, 10, 1, -1, 8, 9, -1, -1, 8, 10, 0, 4, 7, 0, -1, -1, 10, 7, 9, 10, -1, 2, 6, -1, 6, 6, -1, -1, 6, -1, 4, 7, -1, 3, 4, 5, 8, 1, -1, 4, 6, 3, -1, 0, -1, -1, 9, 7};
    vector<int> available = {10, 3, 2, 1, 8, 9, 3, 6, 4, 0, 4, 10, 0, 3, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 6, 10, 1, 1, 8, 9, 3, 3, 8, 10, 0, 4, 7, 0, 0, 4, 10, 7, 9, 10, 2, 2, 6, 6, 6, 6, 10, 10, 6, 4, 4, 7, 3, 3, 4, 5, 8, 1, 1, 4, 6, 3, 0, 0, 8, 9, 9, 7};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> series = {-1, -1, -1, 3, 5, 10, 7, -1, -1, 3, 6, 5, 0, -1, 7, 6, 2, 8, 6, 8, 1, -1, 4, 5, 7, 0, -1, 2, 3, -1, 7, 2, -1, 6, 10, 6, 10, 4, 3, -1, -1, 9, 10, 2, -1, 7, -1, 6, -1, 10};
    vector<int> available = {10, 6, 0, 10, 5, 2, 2, 0, 8, 8, 6, 0, 7, 10, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 10, 3, 5, 10, 7, 6, 5, 3, 6, 5, 0, 0, 7, 6, 2, 8, 6, 8, 1, 0, 4, 5, 7, 0, 0, 2, 3, 7, 7, 2, 2, 6, 10, 6, 10, 4, 3, 8, 8, 9, 10, 2, 2, 7, 6, 6, 10, 10};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> series = {7, 2, -1, 6, -1, -1, 0, 5, 7, 0, 6, -1, 3, -1, -1, -1, 2, 4, 3, -1, -1, 3, 9, 7, 1, 5, -1, 4, 1, 3, 5, 1, 8, 1, 9, 1, 3, 10, -1, -1, -1, 10, -1, 9, 6, -1, 5, 10, 6, 10};
    vector<int> available = {1, 4, 1, 1, 6, 5, 10, 3, 3, 1, 1, 3, 9, 5, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2, 1, 6, 6, 4, 0, 5, 7, 0, 6, 9, 3, 3, 1, 1, 2, 4, 3, 1, 1, 3, 9, 7, 1, 5, 5, 4, 1, 3, 5, 1, 8, 1, 9, 1, 3, 10, 10, 3, 3, 10, 10, 9, 6, 5, 5, 10, 6, 10};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> series = {-1, -1, 5, -1, 2, -1, 1, 8, -1, 6, 1, 2, -1, -1, 7, -1, 10, 0, 2, -1, 2, 9, 3, 3, 5, 2, 5, 10, 10, 9, 5, -1, 4, 8, -1, 5, 10, 9, -1, 7, 2, 6, 5, 2, -1, 6, 1, 1, -1, -1};
    vector<int> available = {8, 9, 0, 4, 10, 5, 1, 7, 7, 3, 5, 8, 2, 3, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 5, 2, 1, 1, 8, 8, 6, 1, 2, 3, 3, 7, 10, 10, 0, 2, 2, 2, 9, 3, 3, 5, 2, 5, 10, 10, 9, 5, 4, 4, 8, 5, 5, 10, 9, 7, 7, 2, 6, 5, 2, 7, 6, 1, 1, 8, 9};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> series = {-1, 8, 3, 0, 9, 7, 9, 5, 5, 10, 6, 9, -1, 8, -1, 7, -1, 0, -1, 4, 3, -1, -1, -1, -1, -1, 7, 6, 10, 5, 3, 0, 6, 0, -1, 10, 3, 0, -1, 2, -1, 8, 3, 3, -1, 8, -1, 3, 3, 2};
    vector<int> available = {0, 0, 6, 10, 4, 7, 7, 5, 7, 3, 4, 3, 2, 6, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 8, 3, 0, 9, 7, 9, 5, 5, 10, 6, 9, 10, 8, 7, 7, 0, 0, 4, 4, 3, 3, 3, 4, 4, 7, 7, 6, 10, 5, 3, 0, 6, 0, 5, 10, 3, 0, 0, 2, 6, 8, 3, 3, 6, 8, 7, 3, 3, 2};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> series = {-1, 5, -1, 8, 7, 4, 5, 5, 6, 2, -1, 6, -1, 6, 0, -1, -1, -1, -1, 1, 2, 6, 6, -1, -1, 8, -1, -1, 10, 6, 8, 2, 5, 1, 1, -1, -1, 4, 0, 1, -1, 2, 10, 10, 5, 2, 8, 8, 10, 2};
    vector<int> available = {4, 7, 3, 4, 5, 8, 10, 9, 10, 3, 8, 6, 3, 2, 3};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 8, 8, 7, 4, 5, 5, 6, 2, 3, 6, 6, 6, 0, 3, 3, 4, 4, 1, 2, 6, 6, 7, 8, 8, 9, 10, 10, 6, 8, 2, 5, 1, 1, 5, 10, 4, 0, 1, 2, 2, 10, 10, 5, 2, 8, 8, 10, 2};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> series = {-1, 3, 2, -1, 1, 6, -1, 2, -1, 5, 0, -1, 5, -1, 7, 6, -1, 8, 7, -1, 4, 5, 6, 1, -1, 1, 1, 9, 10, 0, -1, 4, 0, 2, 6, -1, 6, -1, 9, -1, 2, -1, 6, 5, 4, 6, -1, 8, 5, 3};
    vector<int> available = {5, 7, 5, 2, 0, 6, 1, 8, 0, 5, 8, 9, 2, 4, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 2, 0, 1, 6, 2, 2, 5, 5, 0, 0, 5, 7, 7, 6, 8, 8, 7, 4, 4, 5, 6, 1, 1, 1, 1, 9, 10, 0, 5, 4, 0, 2, 6, 6, 6, 9, 9, 2, 2, 9, 6, 5, 4, 6, 8, 8, 5, 3};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> series = {7, 1, 7, 6, 10, -1, -1, 7, -1, 0, 3, -1, -1, 5, 7, 6, -1, 5, -1, 5, 2, 5, 0, 8, -1, 8, -1, -1, 1, 4, 4, -1, 0, 9, 9, 1, 2, 1, 6, 9, -1, -1, -1, -1, 6, 9, 5, 6, 1, 4};
    vector<int> available = {1, 1, 8, 2, 0, 8, 5, 7, 10, 4, 10, 3, 7, 6, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1, 7, 6, 10, 7, 7, 7, 0, 0, 3, 3, 4, 5, 7, 6, 1, 5, 5, 5, 2, 5, 0, 8, 8, 8, 8, 1, 1, 4, 4, 2, 0, 9, 9, 1, 2, 1, 6, 9, 10, 10, 8, 6, 6, 9, 5, 6, 1, 4};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> series = {8, -1, 9, 1, 9, 0, -1, 9, 5, 9, 9, -1, 5, 5, -1, 3, 8, 0, -1, 9, -1, 10, 9, -1, -1, -1, -1, -1, 9, 5, 5, 1, 3, -1, 6, -1, 1, 2, 5, 8, -1, 7, 6, 9, 5, -1, 2, 8, 8, 10};
    vector<int> available = {4, 2, 7, 3, 9, 3, 1, 0, 7, 3, 2, 2, 6, 1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 9, 9, 1, 9, 0, 0, 9, 5, 9, 9, 7, 5, 5, 3, 3, 8, 0, 1, 9, 10, 10, 9, 2, 2, 3, 3, 4, 9, 5, 5, 1, 3, 6, 6, 1, 1, 2, 5, 8, 7, 7, 6, 9, 5, 2, 2, 8, 8, 10};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> series = {-1, 3, 8, 10, -1, 8, 7, 6, 4, 1, 0, 2, 2, 1, 3, 0, 7, 6, -1, 1, -1, 9, 1, 0, 7, 0, 8, 5, 2, -1, 5, -1, 8, 6, 2, 8, 8, 9, 9, 5, -1, 2, 5};
    vector<int> available = {0, 4, 3, 7, 3, 4, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 8, 10, 3, 8, 7, 6, 4, 1, 0, 2, 2, 1, 3, 0, 7, 6, 3, 1, 4, 9, 1, 0, 7, 0, 8, 5, 2, 4, 5, 7, 8, 6, 2, 8, 8, 9, 9, 5, 4, 2, 5};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> series = {-1, -1, -1, 9, -1, -1, -1, 8, -1, 5, -1, 10, -1, -1, -1, -1};
    vector<int> available = {0, 5, 7, 1, 0, 5, 6, 8, 6, 0, 10, 6, 2, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 9, 5, 5, 6, 8, 8, 5, 5, 10, 10, 6, 2, 1};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> series = {3, 0, 2, 4, 3, 3, 7, 6, 4, 6, 8, 10, 9, 2, 6, 0, 6, 4, 9, 3, 9, 8, 3, 3, 1, 6, 9, 4, 0, 4, 8, 8, 9, 8, 1, 7, 5, 10, 6, 4, 10, 1, 6};
    vector<int> available = {3, 0, 5, 1, 0, 10, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 2, 4, 3, 3, 7, 6, 4, 6, 8, 10, 9, 2, 6, 0, 6, 4, 9, 3, 9, 8, 3, 3, 1, 6, 9, 4, 0, 4, 8, 8, 9, 8, 1, 7, 5, 10, 6, 4, 10, 1, 6};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> series = {10, 9, 6, -1, 7, 5, -1, -1, 8, 8, 2, 0, 9, 8, 0, 1, 8, -1, 7, -1, 4, 0, -1, -1, 8, 3, -1, 10, 2, 8, 8, 3, 1, 2, 5, 9};
    vector<int> available = {8, 2, 1, 1, 2, 2, 6, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 6, 1, 7, 5, 2, 2, 8, 8, 2, 0, 9, 8, 0, 1, 8, 8, 7, 6, 4, 0, 1, 2, 8, 3, 2, 10, 2, 8, 8, 3, 1, 2, 5, 9};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> series = {8, 4, 1, 2, 5, 2, 9, 6, 1, 9, 3, 1, 3, 8, -1, 0, 3, 8, 4, 5, 4, 0, 0, 7, -1, 8, 2, 0, 2, 9, 9, 5, 10, 9, 3};
    vector<int> available = {8, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 4, 1, 2, 5, 2, 9, 6, 1, 9, 3, 1, 3, 8, 8, 0, 3, 8, 4, 5, 4, 0, 0, 7, 8, 8, 2, 0, 2, 9, 9, 5, 10, 9, 3};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> series = {8, 7, 0, 1, 4, -1, 3, 7, 0, 5, 3, 7, 10, 6, 8, -1, 6, 8, 6, 0, -1, 0, 1, 1, 3, 6, 8, 4, 0, 4, 10, 4, 6, 6, 2, 2, 2, 6, 7, 8, -1, 10, -1, 3, 8};
    vector<int> available = {6, 8, 7, 8, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 0, 1, 4, 2, 3, 7, 0, 5, 3, 7, 10, 6, 8, 6, 6, 8, 6, 0, 7, 0, 1, 1, 3, 6, 8, 4, 0, 4, 10, 4, 6, 6, 2, 2, 2, 6, 7, 8, 8, 10, 8, 3, 8};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {7, 0, 1, 10, 7, 1, 7, 5, 3, 4, 2, 1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 1, 2, 3, 4, 5, 7, 7, 7, 10};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> series = {9, 7, 8, 10, 4, 3, 3, 1, 1, 10, 7, -1, 3, -1, -1, 4, 10, 1, -1, 5, 4, 7, 7, 5, 8, 9, 3, 10, 6, 2, 4, -1, 3, -1, 1, -1, -1, 9, 5, 3, 10, 8, 3, 6, -1, 4, 7, 10, 9};
    vector<int> available = {10, 10, 4, 2, 7, 7, 2, 2, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 7, 8, 10, 4, 3, 3, 1, 1, 10, 7, 7, 3, 2, 2, 4, 10, 1, 7, 5, 4, 7, 7, 5, 8, 9, 3, 10, 6, 2, 4, 4, 3, 2, 1, 10, 10, 9, 5, 3, 10, 8, 3, 6, 8, 4, 7, 10, 9};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> series = {1, 5, 7, 8, 9, 1, 0, 6, 5, 3, 8, 6};
    vector<int> available = {8, 3, 7, 8, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 7, 8, 9, 1, 0, 6, 5, 3, 8, 6};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> series = {2, 1, 5, 4, 0, 10, 6, 7, 7, -1, 6, 8, -1, 7, 0, 2, -1, 7, 7, 1};
    vector<int> available = {9, 10, 4, 2, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 5, 4, 0, 10, 6, 7, 7, 2, 6, 8, 8, 7, 0, 2, 4, 7, 7, 1};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> series = {4, 3, 5, -1, 10, -1, -1, 8, 1, 3, 5, 4, 6, 2, 5, 0, 6, 0, -1, -1, 8, 10, 9, -1, 7, 1, 9, 10, 1, 5, -1, 3, -1, 2, 3, -1, 0, -1, 9, -1, 1, 4, 10, 10, 8, -1, 4, -1, 8, -1};
    vector<int> available = {5, 6, 2, 4, 2, 5, 10, 6, 6, 9, 3, 5, 1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 5, 5, 10, 10, 10, 8, 1, 3, 5, 4, 6, 2, 5, 0, 6, 0, 2, 5, 8, 10, 9, 9, 7, 1, 9, 10, 1, 5, 5, 3, 2, 2, 3, 3, 0, 6, 9, 1, 1, 4, 10, 10, 8, 4, 4, 6, 8, 6};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> series = {7, 3, 1, -1, 6, 6, 5, 4, 0, -1, 0, -1, 2, -1, -1, 2, 3, -1, 7, 5, 9, 9, -1, 9, -1, 10, -1, -1, 9, -1, -1, 10, 10, -1, -1, 4, 2, 5, 4, 2, 4};
    vector<int> available = {10, 8, 5, 6, 1, 0, 2, 3, 7, 3, 6, 10, 8, 3};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 3, 1, 1, 6, 6, 5, 4, 0, 0, 0, 2, 2, 3, 3, 2, 3, 7, 7, 5, 9, 9, 3, 9, 10, 10, 6, 6, 9, 8, 8, 10, 10, 10, 5, 4, 2, 5, 4, 2, 4};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> series = {7, 10, 0, 8, 10, 10, 1, 3, 6, 7, 4, 2, 5, 3, 3, 9, 8, 6, 5, 4, 0, 5, 2, 10, 5, 7, 4, 2, 2, 2, 9, 7, 10};
    vector<int> available = {4, 2, 6, 4, 6, 3, 9, 0, 4, 8, 1, 0, 3, 7, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 10, 0, 8, 10, 10, 1, 3, 6, 7, 4, 2, 5, 3, 3, 9, 8, 6, 5, 4, 0, 5, 2, 10, 5, 7, 4, 2, 2, 2, 9, 7, 10};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> series = {3, -1, 3, -1, 9, -1, 1, -1, -1, 1, -1, -1, -1, -1};
    vector<int> available = {9, 5, 10, 5, 0, 6, 3, 1, 0, 3, 1, 8, 7, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3, 3, 9, 9, 1, 0, 0, 1, 1, 1, 4, 5};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> series = {8};
    vector<int> available = {3, 10, 2, 3, 6, 9, 3, 6, 6, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> series = {-1, -1, 7, 6, 4, 1, -1, -1, -1, 7, 6, -1, -1, -1, 8, -1, 8, -1, -1, -1, -1};
    vector<int> available = {0, 9, 8, 2, 7, 9, 2, 4, 6, 10, 4, 5, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 7, 6, 4, 1, 2, 9, 9, 7, 6, 2, 2, 5, 8, 8, 8, 4, 4, 6, 10};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> series = {-1, 6, 0, -1, 0, -1, 0, 4, 6, 6, 3, 1, -1, 3, 5, -1, 1, 2, 0, 6, -1, 0, 2, 3, 9, 4, 3, 5, 9, 4, 7, -1, 9, 7, 7, 2, 5, -1, -1, 4, -1, 10, 10};
    vector<int> available = {6, 6, 3, 7, 4, 9, 8, 1, 4, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6, 0, 3, 0, 4, 0, 4, 6, 6, 3, 1, 1, 3, 5, 7, 1, 2, 0, 6, 6, 0, 2, 3, 9, 4, 3, 5, 9, 4, 7, 8, 9, 7, 7, 2, 5, 9, 9, 4, 4, 10, 10};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> series = {4, 5, 10, 9, 0, 10, 3, 3, 1, 0, 10, 5, 7, 8, 2, 3, 9, 1, 3, 7, 8, 10, 9, 2, 10, 8, 2, 7, 1, 1, 10, 8, 6, 9, 5, 9, 8, -1, 9, 1, 5, 5, 2};
    vector<int> available = {7, 10, 8, 10, 5, 6, 0, 4, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 10, 9, 0, 10, 3, 3, 1, 0, 10, 5, 7, 8, 2, 3, 9, 1, 3, 7, 8, 10, 9, 2, 10, 8, 2, 7, 1, 1, 10, 8, 6, 9, 5, 9, 8, 8, 9, 1, 5, 5, 2};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> series = {-1, -1, -1, 2, 3, -1, 2, 1, -1, -1, -1, 4, 7, 1, 1, -1, 2, -1, -1, -1, -1, -1, 2, 4};
    vector<int> available = {5, 8, 7, 7, 0, 0, 3, 5, 2, 1, 8, 2, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 0, 2, 3, 3, 2, 1, 1, 7, 7, 4, 7, 1, 1, 2, 2, 5, 6, 8, 8, 2, 2, 4};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> series = {8, 0, 9, 1, -1, 6, 7, -1, 8, 9, 0, 10, 0, 7, -1, 9, 1, 10, 2, 5, 1, -1, -1, -1, -1, 6, 3, 7, 10, 8, 4, 4, 0, 1, -1, -1, 3, 6, 10};
    vector<int> available = {7, 4, 10, 2, 6, 5, 7, 5, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 0, 9, 1, 4, 6, 7, 7, 8, 9, 0, 10, 0, 7, 7, 9, 1, 10, 2, 5, 1, 5, 5, 6, 10, 6, 3, 7, 10, 8, 4, 4, 0, 1, 2, 2, 3, 6, 10};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> series = {5, 2, 7, 0, 5, 10, 8, 2, 0, 10, 7, 2, 6, 6, 4, 7, 5, 8, 9, 9, 1, 0, 5, 2, 8, 4, 3, 10, 4, 5, 1, 8};
    vector<int> available = {7, 9, 8, 9, 3, 10, 3, 0, 6, 3, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 7, 0, 5, 10, 8, 2, 0, 10, 7, 2, 6, 6, 4, 7, 5, 8, 9, 9, 1, 0, 5, 2, 8, 4, 3, 10, 4, 5, 1, 8};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> series = {1, 5, 4, 2, 6, -1, -1, 1, 8, 2, 5, 5, 0, 2, 2, 3, 0, 7, 8, 7, 2, 3, 5, 9, 3, 7, 6, 5, 1, 3, 5, 2, 0, 0, 9, -1, 2, 7, 3, -1, 1, 4, 5, 7, 3, 9};
    vector<int> available = {5, 5, 8, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 4, 2, 6, 5, 5, 1, 8, 2, 5, 5, 0, 2, 2, 3, 0, 7, 8, 7, 2, 3, 5, 9, 3, 7, 6, 5, 1, 3, 5, 2, 0, 0, 9, 7, 2, 7, 3, 8, 1, 4, 5, 7, 3, 9};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> series = {9, 6, 10, 6, 6, 1, 1, -1, 7, 1, -1, 9, -1, 4, 1, -1, 9, 10, 3, 4, 0, 10, -1, 9, -1, -1, 4, 5, 5, 8, -1, 3, -1, 6, 7, 8, 2, 3, 9, 4};
    vector<int> available = {0, 1, 5, 7, 7, 4, 2, 9, 6, 5, 0, 2, 5, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 6, 10, 6, 6, 1, 1, 7, 7, 1, 0, 9, 9, 4, 1, 1, 9, 10, 3, 4, 0, 10, 10, 9, 2, 2, 4, 5, 5, 8, 0, 3, 4, 6, 7, 8, 2, 3, 9, 4};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> series = {1, 10, 0, -1, 1, 1, 3, 5, 0, -1, 5, 2, -1, 9, 6, 5, -1, -1, 0, 1, -1, -1, 9, 6, 1, -1};
    vector<int> available = {3, 6, 9, 4, 4, 0, 1, 8, 8, 6, 7, 8, 10, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 0, 0, 1, 1, 3, 5, 0, 3, 5, 2, 6, 9, 6, 5, 4, 4, 0, 1, 6, 9, 9, 6, 1, 1};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> series = {-1, -1, -1, 9, 9, 3, -1, -1, 10, 7, 2, 9, -1, 9, -1, 1, 10, -1, 9, -1, -1, -1};
    vector<int> available = {1, 3, 7, 1, 4, 0, 4, 10, 10, 0, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 9, 9, 3, 3, 4, 10, 7, 2, 9, 10, 9, 1, 1, 10, 10, 9, 7, 6, 4};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> series = {6, -1, 7, 0, 3, 2, 2, 1, -1, 0, 1, -1, 6, 8, 4, 10, 7, 0, 1, 5, 3, 10, 9, 0};
    vector<int> available = {10, 3, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 7, 0, 3, 2, 2, 1, 10, 0, 1, 3, 6, 8, 4, 10, 7, 0, 1, 5, 3, 10, 9, 0};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> series = {-1, 7, 10, -1, 2, 4, 9, 3, -1, -1, 3, -1, -1, 5, -1, 1, -1, -1, 3, 4, 8, -1, 3, 2, 10, 3, -1, 8, 4, -1, 4, -1, -1, 4, 3, 0};
    vector<int> available = {6, 6, 7, 8, 9, 6, 7, 3, 4, 2, 2, 1, 10, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 10, 10, 2, 4, 9, 3, 2, 2, 3, 6, 6, 5, 1, 1, 2, 3, 3, 4, 8, 8, 3, 2, 10, 3, 9, 8, 4, 4, 4, 7, 7, 4, 3, 0};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> series = {10, 2, 2, 5, 8, 4, 6, 4, 6, 1, 6, 10, 3, 0, 7, 8, 1, 0, 6, 9, 1, 10, -1};
    vector<int> available = {4, 6, 2, 3, 0, 3, 7, 7, 8, 0, 2, 10, 1, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 2, 2, 5, 8, 4, 6, 4, 6, 1, 6, 10, 3, 0, 7, 8, 1, 0, 6, 9, 1, 10, 10};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> series = {10, 9, 5, 1, 3, 4, 4, 5, 2, 5, 3, 3, 1, 10, 5, 2, 1, 4, 7, 10, 10, 10, 8, 1, 3, 0, 3, 0, 1, 4, 9, 9, 7};
    vector<int> available = {10, 0, 4, 7, 2, 0, 8, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 5, 1, 3, 4, 4, 5, 2, 5, 3, 3, 1, 10, 5, 2, 1, 4, 7, 10, 10, 10, 8, 1, 3, 0, 3, 0, 1, 4, 9, 9, 7};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> series = {8, 5, 5, 1, 6, 3, 7, 7, 1, 0, 10, -1, -1, 1, -1, -1, 6, 8, 10, 6, 6, 4, 3, 6, 2, 5, 7, 6, 8, -1, 8, 7, 3, 8, 1, 5, 4, 3, -1, 2, 6, 7, -1, -1, 0, 9, 4, 5, 6};
    vector<int> available = {10, 9, 1, 5, 6, 1, 1, 5, 6, 0, 7, 8, 5, 6, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 5, 5, 1, 6, 3, 7, 7, 1, 0, 10, 10, 1, 1, 1, 1, 6, 8, 10, 6, 6, 4, 3, 6, 2, 5, 7, 6, 8, 8, 8, 7, 3, 8, 1, 5, 4, 3, 1, 2, 6, 7, 7, 0, 0, 9, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> series = {1, -1, 9, 2, 4, -1, 5, -1, -1, -1, 10, -1, 10, -1, -1, 9, 8, -1, 7, 0, -1, 3};
    vector<int> available = {9, 6, 0, 3, 8, 0, 5, 9, 2, 2, 7, 7, 1, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 9, 2, 4, 5, 5, 2, 2, 3, 10, 0, 10, 9, 9, 9, 8, 7, 7, 0, 0, 3};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> series = {-1, 1, 0};
    vector<int> available = {0, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1, 0};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> series = {8, -1, 0};
    vector<int> available = {1, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 1, 0};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> series = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    vector<int> available = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 9, 8, 7, 6, 2, 2, 3, 3, 4, 4, 5, 5, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> series = {1, 2, 3, 4, 5, -1, -1, -1, 9, 10, 1, 2, -1, -1, 5, 6, 7, 8, 9, -1, -1, 2, 3, 4, -1, 6, 7, -1, -1, 10, 1, -1, 3, 4, 5, 6, 7, -1, 9, 10, 1, -1, -1, -1, 5, 6, 7, 8, 9, 10};
    vector<int> available = {1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 8, 8, 9, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 5, 7, 8, 9, 10, 1, 2, 2, 3, 5, 6, 7, 8, 9, 9, 2, 2, 3, 4, 6, 6, 7, 8, 10, 10, 1, 1, 3, 4, 5, 6, 7, 8, 9, 10, 1, 3, 4, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> series = {0, 1, -1, 3, 4, 5, 1, -1, -1, -1, 0, 1, 2, 5, -1, 5, 5, 7, -1, 9, -1, -1, -1, -1, 4, 5, 6, 10, 8, 9, 0, 1, 2, -1, 4, 5, -1, 7, 8, 9, 0, 1, 2, 3, 4, 6, 6, 7, -1, -1};
    vector<int> available = {1, 1, 0, 2, 3, 4, 5, 6, 7, 8, 10, 9, 9, 1, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1, 3, 4, 5, 1, 1, 1, 0, 0, 1, 2, 5, 5, 5, 5, 7, 7, 9, 9, 2, 2, 3, 4, 5, 6, 10, 8, 9, 0, 1, 2, 4, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 6, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> series = {5, -1, -1, 2, 5, -1, 5, -1, -1, 5, 5, -1, 5, -1, 5, -1, 5, 5, 5, -1, -1, -1, 1, -1, 5, 5, -1, 5, -1, 5, -1, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9, 8, 7, 6, 5, 6, 7, 8, 9, 8};
    vector<int> available = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 2, 2, 5, 5, 5, 4, 4, 5, 5, 6, 5, 0, 5, 6, 5, 5, 5, 7, 8, 8, 1, 1, 5, 5, 7, 5, 5, 5, 9, 5, 5, 5, 5, 5, 5, 6, 7, 8, 9, 8, 7, 6, 5, 6, 7, 8, 9, 8};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> series = {3, 6, 1, 4, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 7, -1, -1, -1, 7, 7, 3, 7, 6, 4, 7, 5, 2, 3, 2, 7, 3, 8, 5, 6, 8, 4, 0, 5, 1, 4, 9, 8, 6, 3, 10, 1, 4};
    vector<int> available = {0, 3, 10, 9, 5, 5, 4, 8, 9, 1, 7, 4, 1, 2, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 1, 4, 4, 0, 1, 1, 2, 2, 3, 4, 4, 5, 5, 8, 10, 7, 7, 9, 9, 7, 7, 3, 7, 6, 4, 7, 5, 2, 3, 2, 7, 3, 8, 5, 6, 8, 4, 0, 5, 1, 4, 9, 8, 6, 3, 10, 1, 4};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> series = {-1, 2, 3, 4, 5, -1, -1, -1, 9, -1, 10, 9, 8, -1, 6, 5, -1, -1, 2, 1, 1, -1, 3, 4, 5, 6, -1, 8, -1, 10, -1, 9, 8, 7, 6, 5, 4, 3, 2, 1, -1, 2, 3, 4, 5, -1, 7, 8, -1, 10};
    vector<int> available = {10, 10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 5, 2, 2, 9, 10, 10, 9, 8, 6, 6, 5, 4, 3, 2, 1, 1, 1, 3, 4, 5, 6, 8, 8, 9, 10, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 2, 3, 4, 5, 7, 7, 8, 10, 10};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> series = {-1, -1, -1, -1, 5, -1, 2, 3, -1, 5, -1, 9, -1, 7, -1, 9, -1, -1, 8, -1, -1, -1, -1};
    vector<int> available = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 8, 7, 7, 1, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 5, 5, 2, 2, 3, 4, 5, 5, 9, 9, 7, 7, 9, 9, 8, 8, 8, 7, 7, 6};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> series = {9, -1, 9, -1, 9, 8, -1, 8, -1, 8, 7, -1, 7, -1, 7, 6, -1, 6, 5, -1, 5, 4, -1, 4, 3, -1, 3, 2, -1, 2, 1, -1, 1, 0, -1, 0};
    vector<int> available = {9, 9, 8, 8, 7, 7, 6, 5, 4, 3, 2, 1, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> series = {5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 7, -1, 8, 9, 5, 3, 7, -1, 7, 3, 2, 4, 7, -1, 7, 8, 7, 5, 6, 9, 8, -1, -1, -1, -1, -1, -1, 0, 0, 1, -1, -1, 2, 3, -1, -1, -1, 9, 5, -1};
    vector<int> available = {5, 5, 0, 1, 2, 3, 4, 6, 7, 8, 9, 7, 6, 4, 3};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 7, 8, 8, 9, 5, 3, 7, 7, 7, 3, 2, 4, 7, 7, 7, 8, 7, 5, 6, 9, 8, 3, 3, 4, 4, 5, 5, 0, 0, 1, 1, 2, 2, 3, 6, 6, 9, 9, 5, 0};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> series = {-1, -1, 1, -1, 5, 1, 7, -1, -1, -1, -1, -1, -1, 9, 7, 8, -1, 7, -1, 6, -1, -1, 9, 10, 4, -1, -1, 5, 4, 7, 5, 6, 7, 0, 5, 0, 5, 4, 5, 1, 3, 10, 6, 0, 0, 6, 7, 8, 7, 10};
    vector<int> available = {3, 5, 2, 10, 9, 10, 3, 10, 1, 1, 6, 8, 5, 5, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 5, 5, 1, 7, 10, 10, 10, 2, 2, 9, 9, 7, 8, 8, 7, 6, 6, 3, 3, 9, 10, 4, 5, 5, 5, 4, 7, 5, 6, 7, 0, 5, 0, 5, 4, 5, 1, 3, 10, 6, 0, 0, 6, 7, 8, 7, 10};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> series = {10, 10, 10, 10, 10, -1, -1, -1, 10, 10, -1, 10, 10, 10, -1, 10, 10, 10, -1, 10, 10, 10, 10, -1, 10, 10, 10, 10, 10, 10, -1, 10, 10, 10, 10, -1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, -1};
    vector<int> available = {5, 4, 3, 2, 1, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 10, 10, 10, 10, 1, 1, 2, 10, 10, 2, 10, 10, 10, 3, 10, 10, 10, 3, 10, 10, 10, 10, 4, 10, 10, 10, 10, 10, 10, 4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 5};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> series = {0, -1, 7, -1, 1, 7, 8, 6, 7, -1, 6, 3, 8, -1, 7, 4, 10, 6, -1, 8, 0, -1, -1, -1, 0, 3, 8, 3, 7, -1, 10, 4, -1, 5, 2, -1, -1, 9, 3, -1, 5, 6, -1, 0, 10, -1, 6, 7, 5, 3};
    vector<int> available = {4, 1, 5, 9, 7, 6, 6, 5, 6, 0, 2, 7, 0, 8, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 7, 1, 1, 7, 8, 6, 7, 7, 6, 3, 8, 8, 7, 4, 10, 6, 6, 8, 0, 0, 4, 0, 0, 3, 8, 3, 7, 8, 10, 4, 5, 5, 2, 2, 9, 9, 3, 5, 5, 6, 6, 0, 10, 6, 6, 7, 5, 3};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> series = {9, 9, 9, 9, -1, -1, 8, 8, 3, 4, 9, -1, -1, 1, 2, 3, -1, -1, 5, -1, 9, 9, -1, 9, 8, -1, 7, 6, -1, 5, 6, 7, -1, 9, -1, 9, -1, 8, 8, -1, 3};
    vector<int> available = {1, 1, 2, 2, 8, 1, 5, 6, 9, 9, 8, 8, 7, 7};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9, 9, 9, 1, 1, 8, 8, 3, 4, 9, 2, 1, 1, 2, 3, 7, 7, 5, 2, 9, 9, 9, 9, 8, 8, 7, 6, 5, 5, 6, 7, 8, 9, 9, 9, 8, 8, 8, 6, 3};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> series = {4, 5, 2, 1, 8, 1, -1, 5, 4, 3, 4, 4, -1, -1, -1, 8, 7, 5, 7, 2, 1, -1, -1, -1, -1, -1, 8, 7, 7, 3, 7, 6, 3, -1, -1, 7, 6, -1, -1, 9, 0, -1, 4, 3, 2, 1, 9, -1, 0};
    vector<int> available = {1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 2, 1, 8, 1, 1, 5, 4, 3, 4, 4, 2, 2, 3, 8, 7, 5, 7, 2, 1, 1, 4, 4, 5, 8, 8, 7, 7, 3, 7, 6, 3, 3, 7, 7, 6, 6, 9, 9, 0, 0, 4, 3, 2, 1, 9, 10, 0};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> series = {8, -1, 6, 4, -1, -1, 6};
    vector<int> available = {2, 3, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 6, 6, 4, 2, 3, 6};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> series = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 5, 0, 1, 1, 2, 2, 3, 3, 4, 4, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> series = {1, -1, 10, 4, 5, 10, 7, -1, 1, -1, 3, -1, -1, 6, 7, -1, 1, 2, 3, 1, 1, 10, 7, -1, 1, -1, -1, 4, 5, 6, 7, -1, 1, 2, 3, 4, 5, 9, 0, -1, 1, 2, -1, 4, 4, 4, 4, -1, -1, -1};
    vector<int> available = {1, 1, 2, 2, 10, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 10, 4, 5, 10, 7, 1, 1, 2, 3, 3, 4, 6, 7, 1, 1, 2, 3, 1, 1, 10, 7, 5, 1, 1, 2, 4, 5, 6, 7, 7, 1, 2, 3, 4, 5, 9, 0, 0, 1, 2, 2, 4, 4, 4, 4, 6, 8, 9};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> series = {-1, -1, 8, -1, -1, 9, 4, -1, 7, 1, 6, 10, 6, 7, 0, 3, 7, 2, 10, -1, 3, 7, -1, 6, 10, 4, 0, 7, 0, 8, 9, 1, 3, 0, 9, 8, -1, -1, 3, 7, 7, 5, 2, -1, 1, 3, 3, 3, 4, 0};
    vector<int> available = {0, 6, 3, 10, 6, 6, 7, 0, 7, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 8, 6, 6, 9, 4, 7, 7, 1, 6, 10, 6, 7, 0, 3, 7, 2, 10, 10, 3, 7, 6, 6, 10, 4, 0, 7, 0, 8, 9, 1, 3, 0, 9, 8, 7, 3, 3, 7, 7, 5, 2, 0, 1, 3, 3, 3, 4, 0};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> series = {10, -1, 10, 9, 5, -1, 2, 7, -1, 3, 10, -1, 10, 9, 5, -1, 2, 7, -1, 3, 10, -1, 10, 9, 5, -1, 2, 7, -1, 3, 10, -1, 10, 9, 5, -1, 2, 7, -1, 3, 10, -1, 10, 9, 5, -1, 2, 7, -1, 3};
    vector<int> available = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 9, 8, 7, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6, 10, 9, 5, 0, 2, 7, 3, 3, 10, 6, 10, 9, 5, 1, 2, 7, 7, 3, 10, 8, 10, 9, 5, 2, 2, 7, 7, 3, 10, 8, 10, 9, 5, 4, 2, 7, 9, 3, 10, 10, 10, 9, 5, 5, 2, 7, 9, 3};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> series = {10, 9, 8, 7, 6, 5, 6, 7, 4, 2, 1, -1, 2, -1, 3, -1, 4, -1, 5, -1, 6, -1, 7, -1, 8, -1, 9, -1, 10, -1, 9, -1, 8, -1, 7, -1, 6, -1, 5, -1, 5, 6, 7, 4, 2, 10, 9, 8, 7, 6};
    vector<int> available = {5, 8, 2, 8, 1, 0, 10, 7, 3, 7, 1, 8, 3, 8, 8};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 8, 7, 6, 5, 6, 7, 4, 2, 1, 1, 2, 2, 3, 3, 4, 8, 5, 0, 6, 7, 7, 8, 8, 8, 9, 1, 10, 10, 9, 8, 8, 8, 7, 7, 6, 3, 5, 5, 5, 6, 7, 4, 2, 10, 9, 8, 7, 6};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> series = {2, -1, -1, 3, 7, 5, -1, -1, -1, 8, -1, -1, 3, 6, 7, -1, -1, 8};
    vector<int> available = {2, 7, 1, 3, 6, 7, 1, 2, 1, 7, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 3, 7, 5, 2, 2, 4, 8, 6, 3, 3, 6, 7, 7, 7, 8};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> series = {-1, 2, -1, -1, 3, 1, 3, 5, 4, 2, 8, 0, 9, -1, 6, 3, 7, 0, -1, -1, -1, -1, 4, 7, 4, 5, 2, -1, -1, -1, 1, 3, 4, 5, 5, 7, 3, -1, 2, -1, 4, 6, 3, -1, 10, 8, 9, 3, -1, 10};
    vector<int> available = {0, 2, 9, 1, 2, 3, 4, 5, 6, 3, 2, 1, 5, 0, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 3, 3, 1, 3, 5, 4, 2, 8, 0, 9, 9, 6, 3, 7, 0, 0, 5, 5, 4, 4, 7, 4, 5, 2, 2, 1, 1, 1, 3, 4, 5, 5, 7, 3, 2, 2, 3, 4, 6, 3, 10, 10, 8, 9, 3, 6, 10};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> series = {-1, -1, 6, -1, 4, -1, 8, -1, 6, -1, 0, -1, -1, -1, -1, 3, -1, -1, -1, -1, 0, -1};
    vector<int> available = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 3, 4, 5, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 6, 6, 4, 4, 7, 8, 8, 6, 6, 0, 0, 1, 2, 3, 3, 3, 4, 5, 5, 0, 10};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> series = {4, -1, 3, 2, -1, 1, 10, -1, -1, 8, 0, -1, 6, 5, 7, 9, -1, -1, 4, 3, 2, -1, 1, 10, -1, -1, 8, 0, -1, 6, -1, 5, -1, 7, 9, 4, 3, 2, 1, 10, 8, 0, -1, 6, -1, 5, 7, 9, 0, 0};
    vector<int> available = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 3, 2, 1, 1, 10, 10, 8, 8, 0, 0, 6, 5, 7, 9, 10, 10, 4, 3, 2, 2, 1, 10, 10, 9, 8, 0, 4, 6, 6, 5, 7, 7, 9, 4, 3, 2, 1, 10, 8, 0, 10, 6, 5, 5, 7, 9, 0, 0};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> series = {5, 0, 3, -1, 4, 0, 8, -1, 1, -1, -1, -1, 2, -1, 8, -1, 7, 2, 5, 7, -1, -1, 8, -1, 7, 4, 4, 6, 7, 8, 2, -1, 1, -1, 1, -1, 3, -1, 2, 7, 3, 6, 3, 1, 4, 6, 3, 6, 4, 6};
    vector<int> available = {1, 7, 3, 4, 5, 6, 7, 5, 9, 0, 1, 3, 4, 5, 6};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 3, 4, 4, 0, 8, 0, 1, 4, 5, 5, 2, 5, 8, 7, 7, 2, 5, 7, 6, 6, 8, 7, 7, 4, 4, 6, 7, 8, 2, 1, 1, 1, 1, 3, 3, 3, 2, 7, 3, 6, 3, 1, 4, 6, 3, 6, 4, 6};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> series = {10, -1, 10, -1, 9, -1, 8, -1, 7, -1, 6, -1, 5, -1, 4, -1, 3, -1, 3, -1, 2, -1, 2, -1, 1, -1, 1, -1, 0, -1, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> available = {0, 0, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8, 9, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 10, 10, 9, 9, 8, 8, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> series = {1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1, 1, -1};
    vector<int> available = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> series = {-1, -1};
    vector<int> available = {2, 1};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> series = {1, -1, 1, 2, -1, 2, 3, -1, 3, 4, -1, 4, 5, -1, 5, 6, -1, 6, 7, -1, 7, 8, -1, 8, 9, -1, 9, 10, -1, 10, 0, -1, 0, 1, -1, 1, 2, -1, 2, 3, -1, 3, 4, -1, 4};
    vector<int> available = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 1, 2, 3, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> series = {-1, 10, 10, -1, 10, 9, -1, -1, 9, 9, 8, 8, -1, 8, -1, 7, 7, 7, 7, 6, -1, 6, 6, 5, 5, -1, 5, 5, 4, 4, 4, 4, -1, 3, -1, 3, 2, 2, -1, 2, 1, 1, 1, -1, -1, -1, 0, -1, 0, 0};
    vector<int> available = {10, 10, 9, 9, 8, 8, 6, 5, 3, 3, 2, 1, 1, 0, 0};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 10, 10, 10, 10, 9, 1, 1, 9, 9, 8, 8, 8, 8, 8, 7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 9, 9, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> series = {-1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 2, 1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 10, 1, 9, 8, -1, -1, -1, -1, -1, -1, -1, -1};
    vector<int> available = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 2, 3, 3, 1, 1, 2, 3, 2, 1, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 10, 1, 9, 8, 4, 4, 5, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> series = {1, -1, -1, -1, -1, 2, 3, -1, 9, -1, 4, 5, 6, -1, -1, 0};
    vector<int> available = {1, 1, 9, 8, 7, 5, 9, 9, 9, 9, 9, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 9, 1, 1, 2, 3, 5, 9, 9, 4, 5, 6, 9, 9, 0};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> series = {1, -1, -1, -1, -1, -1, 4, -1, -1, -1, -1, -1, 9, -1, -1, -1, -1, -1};
    vector<int> available = {1, 1, 2, 2, 3, 4, 4, 5, 6, 7, 7, 9, 8, 10, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2, 2, 3, 4, 4, 4, 5, 6, 7, 9, 9, 10, 10, 8, 7};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> series = {4, -1, 5, 10, 0, 9, -1, 6, 0, 6, 2, -1, 4, -1, 4, 1, -1, 4, 2, -1, -1, 3, 2, 3, 6, 0, 10, 7, 7, -1, 0, -1, -1, 6, 9, -1, -1, 9, 7, -1, -1, 7, 8, 6, -1, 1, 8, 4, 5, 8};
    vector<int> available = {1, 7, 2, 1, 0, 7, 9, 2, 4, 1, 4, 0, 8, 4, 9};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4, 5, 10, 0, 9, 7, 6, 0, 6, 2, 2, 4, 4, 4, 1, 4, 4, 2, 2, 8, 3, 2, 3, 6, 0, 10, 7, 7, 7, 0, 0, 0, 6, 9, 9, 9, 9, 7, 1, 1, 7, 8, 6, 1, 1, 8, 4, 5, 8};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> series = {-1, 7, 3, 7, 9, -1, 2, 7, -1, 7, 8, -1, -1, 10, -1, 6, 7, -1, 8, -1, 5, 6, 7, 2, -1, 1, 9, -1, -1, 10, 10, -1, 2, 4, -1, 9, 7, 5, 4, 7, 5, -1, 6, 7, 0, -1, 5, 0, 5, 4};
    vector<int> available = {5, 10, 3, 10, 6, 10, 10, 6, 9, 8, 10, 10, 3, 5, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 7, 3, 7, 9, 3, 2, 7, 3, 7, 8, 10, 10, 10, 6, 6, 7, 8, 8, 5, 5, 6, 7, 2, 6, 1, 9, 10, 10, 10, 10, 10, 2, 4, 9, 9, 7, 5, 4, 7, 5, 5, 6, 7, 0, 10, 5, 0, 5, 4};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> series = {10, -1, 9, -1, 8, -1, 7, -1, 6, -1, 5, -1, 4, -1, 3, -1, 2, -1, 1, -1, 9, -1, 8, -1, 7, -1, 6, -1, 5, -1, 4};
    vector<int> available = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 10, 9, 0, 8, 8, 7, 1, 6, 6, 5, 4, 4, 3, 3, 2, 2, 1, 1, 2, 9, 9, 8, 3, 7, 7, 6, 5, 5, 4, 4};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> series = {8, -1, 9, 9, -1, 1, 7, -1, 5, 5, -1, 10, 1, -1, 0, 7, -1, 7, 5, -1, 8, 6, -1, 7, 3, -1, 7, 9, -1, 2, 7, -1, 7, 8, -1, 10, 6, -1, 7, 8, -1, 5, 6, -1, 7};
    vector<int> available = {3, 2, 1, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 0, 9, 9, 1, 1, 7, 1, 5, 5, 2, 10, 1, 0, 0, 7, 9, 7, 5, 5, 8, 6, 3, 7, 3, 3, 7, 9, 2, 2, 7, 7, 7, 8, 10, 10, 6, 4, 7, 8, 8, 5, 6, 6, 7};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> series = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -1, -1, -1, -1, -1, 0, 0, 0, 0, -1, -1, -1, -1, -1, 9, 9, 8, 10, 10, -1, -1, -1, -1, -1};
    vector<int> available = {10, 6, 6, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 0, 1, 2, 2, 0, 0, 0, 0, 1, 3, 3, 4, 4, 9, 9, 8, 10, 10, 5, 5, 6, 6, 10};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> series = {-1, 9, -1, 5, 2, -1, -1, -1, -1, 1, 2, 4, 5, -1, 3, 7, 8, -1, -1, 7, 10, 4, 4, -1, -1, 6, 7, -1, -1, -1, 10, 9, 8, -1, 10};
    vector<int> available = {0, 2, 1, 3, 5, 4, 6, 8, 7, 9, 10, 1, 3, 1, 2};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 9, 5, 2, 2, 1, 1, 1, 1, 2, 4, 5, 5, 3, 7, 8, 3, 3, 7, 10, 4, 4, 4, 6, 6, 7, 7, 2, 10, 10, 9, 8, 8, 10};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> series = {1, 2, 3, 4, 1, 2, 3, 4, 5, 4, 3, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 3, 2, 1, 2, 3, 4, 5, 6, 5, 4, 3, 5, 6, 7, 8, 9, 5, 4, 6};
    vector<int> available = {1, 1, 2, 2, 3, 3, 4, 4, 8, 5, 6, 6, 7, 7, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 1, 2, 3, 4, 5, 4, 3, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 1, 1, 1, 2, 3, 4, 3, 2, 1, 2, 3, 4, 5, 6, 5, 4, 3, 5, 6, 7, 8, 9, 5, 4, 6};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> series = {-1, 3, -1, 3, -1, 3, -1, 3, -1};
    vector<int> available = {1, 2, 3, 4, 5};
    PartialSeries* pObj = new PartialSeries();
    clock_t start = clock();
    vector<int> result = pObj->getFirst(series, available);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 3, 3, 4, 3, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7421158&rd=10775&pm=8048
********************************************************************************
#include <sstream> 
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <map> 
#include <set> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
typedef long long ll; 
typedef pair<int,int> pii; 
typedef pair<double,double> pdd; 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef map<string,int> msi; 
 
int best[1<<15][12][12]; 
vi ser, avail; 
 
bool Extr(int a, int b, int c) { 
  return a != 11 && (a < b && c < b || a > b && c > b); 
} 
 
int Best(int M, int a, int b, int i) { 
  if (i == ser.size()) return 0; 
  if (ser[i] != -1) return Best(M, b, ser[i], i+1) + Extr(a, b, ser[i]); 
  int &r = best[M][a][b]; 
  if (r == -1) { 
    r = 1<<28; 
    for (int j = 0; j < avail.size(); ++j)  
      if (M & (1<<j)) 
  r <?= Best(M & ~(1<<j), b, avail[j], i+1) + Extr(a, b, avail[j]); 
  } 
  return r; 
} 
 
struct PartialSeries { 
   vector <int> getFirst(vector <int> series, vector <int> available) { 
      vector <int> res; 
      sort(available.begin(), available.end()); 
      ser = series; 
      avail = available; 
      memset(best, -1, sizeof(best)); 
      int M = (1<<available.size())-1; 
      int a = 11, b = 11; 
      for (int i = 0; i < ser.size(); ++i) { 
  if (ser[i] != -1) { 
    res.push_back(ser[i]); 
    a = b; 
    b = ser[i]; 
  } else { 
    int goal = Best(M, a, b, i); 
    for (int j = 0; j < avail.size(); ++j) { 
      if (M & (1<<j)) { 
        int val = Best(M & ~(1<<j), b, avail[j], i+1) +  
    Extr(a, b, avail[j]); 
        if (val == goal) { 
    res.push_back(avail[j]); 
    M &= ~(1<<j); 
    a = b; 
    b = avail[j]; 
    break; 
        } 
      } 
    } 
  } 
      } 
      return res; 
   } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/