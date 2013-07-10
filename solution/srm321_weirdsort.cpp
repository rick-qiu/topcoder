/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6755
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

class WeirdSort {
public:
    vector<int> sortArray(vector<int> data);
};

vector<int> WeirdSort::sortArray(vector<int> data) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> data = {1, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> data = {1, 2, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> data = {1, 1, 1, 1, 2, 2, 2, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 2, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> data = {1, 2, 3, 4, 5, 6};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 6, 5};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> data = {1, 1, 2, 2, 3, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 3, 2, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> data = {0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> data = {0, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> data = {0, 0, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> data = {2, 2, 0, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> data = {1, 0, 1, 1, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> data = {0, 1, 2, 2, 1, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 2, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> data = {0, 1, 1, 0, 3, 1, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> data = {3, 3, 4, 1, 2, 2, 3, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 2, 4, 3, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> data = {4, 2, 4, 2, 3, 2, 0, 1, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 2, 2, 2, 4, 4};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> data = {5, 4, 5, 1, 5, 3, 2, 4, 5, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 2, 5, 5, 5, 5, 4, 4};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> data = {4, 5, 0, 2, 0, 2, 1, 2, 1, 5, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 1, 1, 4, 2, 2, 5, 5};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> data = {3, 3, 1, 6, 4, 3, 1, 2, 3, 5, 6, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 4, 3, 3, 3, 5, 4, 6, 6};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> data = {5, 3, 2, 0, 0, 3, 5, 6, 2, 2, 0, 5, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 2, 2, 4, 3, 3, 6, 5, 5, 5};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> data = {1, 0, 2, 6, 6, 3, 5, 7, 7, 3, 7, 6, 7, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 3, 3, 5, 7, 7, 7, 7, 6, 6, 6};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> data = {1, 1, 0, 1, 1, 1, 7, 2, 7, 0, 0, 5, 5, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 1, 1, 1, 1, 1, 4, 4, 7, 5, 5, 7};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> data = {6, 0, 6, 3, 5, 4, 6, 7, 3, 5, 7, 7, 7, 3, 4, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 3, 3, 5, 4, 4, 6, 5, 7, 7, 7, 7, 6, 6};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> data = {6, 6, 2, 8, 8, 8, 2, 3, 8, 0, 0, 3, 4, 4, 3, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 2, 2, 2, 4, 3, 3, 3, 6, 4, 6, 8, 8, 8, 8};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> data = {6, 2, 6, 4, 5, 9, 0, 4, 0, 9, 7, 0, 8, 2, 2, 5, 6, 8};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 2, 2, 4, 4, 6, 5, 5, 7, 6, 6, 9, 9, 8, 8};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> data = {9, 5, 3, 0, 6, 1, 5, 4, 8, 5, 5, 5, 2, 4, 7, 1, 9, 9, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 3, 5, 4, 4, 6, 5, 5, 5, 5, 7, 7, 9, 9, 9, 8};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> data = {5, 10, 6, 7, 9, 1, 9, 10, 9, 2, 1, 2, 9, 2, 9, 9, 1, 8, 2, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 5, 2, 2, 2, 2, 6, 8, 7, 10, 10, 9, 9, 9, 9, 9, 9};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> data = {10, 0, 8, 6, 9, 2, 5, 4, 10, 5, 3, 9, 4, 4, 7, 5, 3, 3, 1, 7, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 3, 3, 3, 5, 4, 4, 4, 6, 5, 5, 7, 7, 9, 8, 10, 10, 9};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> data = {6, 1, 11, 4, 11, 10, 1, 8, 5, 10, 1, 3, 5, 3, 5, 9, 3, 9, 0, 4, 11, 6};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 1, 1, 3, 3, 5, 4, 4, 6, 5, 5, 8, 6, 9, 9, 11, 11, 11, 10, 10};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> data = {0, 1, 6, 10, 5, 11, 0, 5, 7, 8, 10, 7, 7, 7, 7, 10, 9, 10, 6, 0, 5, 7, 10};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 5, 1, 5, 5, 7, 6, 6, 8, 7, 7, 7, 7, 7, 9, 11, 10, 10, 10, 10, 10};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> data = {9, 10, 3, 7, 5, 7, 10, 9, 7, 0, 3, 2, 4, 9, 8, 2, 6, 3, 1, 11, 2, 7, 5, 8};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 2, 2, 4, 3, 3, 5, 5, 7, 6, 8, 7, 7, 7, 9, 8, 10, 9, 9, 11, 10};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> data = {1, 11, 9, 2, 1, 7, 8, 3, 3, 7, 0, 11, 9, 12, 7, 0, 12, 8, 6, 9, 8, 1, 7, 7, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 1, 1, 3, 3, 6, 8, 7, 7, 7, 7, 7, 9, 8, 8, 11, 9, 9, 12, 12, 11};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> data = {11, 3, 11, 12, 8, 10, 2, 2, 8, 7, 6, 7, 1, 11, 10, 0, 10, 11, 12, 10, 4, 10, 0, 13, 13, 12};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 3, 2, 4, 6, 8, 7, 7, 10, 8, 10, 10, 10, 10, 12, 11, 11, 11, 11, 13, 13, 12, 12};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> data = {4, 10, 2, 13, 0, 11, 2, 10, 9, 10, 9, 6, 6, 11, 8, 8, 9, 11, 6, 0, 7, 13, 1, 13, 3, 1, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 3, 2, 4, 6, 6, 6, 8, 7, 7, 9, 8, 10, 9, 9, 11, 10, 10, 13, 11, 11, 13, 13};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> data = {11, 0, 0, 12, 13, 1, 11, 12, 11, 11, 10, 10, 5, 0, 8, 7, 7, 5, 10, 7, 10, 0, 7, 10, 6, 6, 10, 8};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 5, 1, 5, 7, 6, 6, 8, 7, 7, 7, 10, 8, 10, 10, 10, 10, 10, 12, 11, 11, 11, 11, 13, 12};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> data = {0, 13, 4, 7, 3, 7, 11, 7, 0, 3, 4, 8, 8, 10, 2, 2, 7, 1, 4, 5, 0, 14, 8, 11, 6, 13, 12, 11, 6};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 1, 3, 2, 4, 3, 5, 4, 4, 6, 6, 8, 7, 7, 7, 7, 10, 8, 8, 11, 11, 11, 13, 12, 14, 13};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> data = {8, 4, 8, 7, 0, 9, 14, 14, 1, 13, 4, 12, 3, 9, 5, 9, 5, 0, 9, 4, 5, 11, 13, 6, 15, 4, 11, 9, 10, 13};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 1, 4, 4, 4, 4, 6, 5, 5, 5, 7, 9, 8, 8, 10, 9, 9, 9, 9, 11, 11, 13, 12, 14, 13, 13, 15, 14};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> data = {8, 11, 10, 13, 5, 4, 10, 10, 12, 1, 13, 7, 5, 4, 2, 13, 3, 15, 10, 0, 4, 7, 1, 15, 7, 15, 7, 14, 0, 13, 15};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 3, 5, 4, 4, 4, 7, 5, 7, 7, 7, 10, 8, 10, 10, 10, 12, 11, 13, 13, 13, 13, 15, 15, 15, 15, 14};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> data = {12, 0, 2, 4, 9, 16, 13, 14, 7, 12, 4, 1, 13, 8, 0, 5, 0, 16, 8, 5, 8, 13, 4, 1, 1, 16, 10, 0, 6, 12, 14, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 2, 1, 1, 1, 4, 4, 4, 6, 5, 5, 7, 9, 8, 8, 8, 10, 12, 12, 12, 14, 13, 13, 13, 16, 14, 16, 16};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> data = {1, 10, 0, 11, 12, 1, 13, 1, 4, 11, 13, 5, 8, 4, 14, 16, 12, 5, 5, 8, 15, 4, 8, 2, 12, 9, 14, 0, 2, 9, 5, 16, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 1, 3, 2, 4, 4, 4, 8, 5, 5, 5, 5, 8, 8, 10, 9, 9, 11, 11, 13, 12, 12, 12, 14, 13, 15, 14, 16, 16};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> data = {7, 15, 6, 0, 15, 5, 16, 15, 14, 6, 8, 2, 14, 0, 12, 2, 11, 2, 3, 9, 11, 16, 12, 3, 12, 10, 17, 14, 14, 13, 8, 2, 10, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 3, 2, 2, 2, 5, 3, 6, 6, 8, 7, 9, 8, 10, 10, 12, 11, 11, 13, 12, 12, 14, 14, 14, 14, 16, 15, 15, 15, 17, 16};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> data = {15, 17, 3, 4, 1, 7, 5, 6, 3, 0, 6, 10, 0, 13, 16, 0, 9, 10, 8, 8, 0, 16, 4, 17, 4, 9, 2, 3, 3, 8, 15, 13, 1, 5, 11};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 2, 1, 1, 3, 3, 3, 3, 5, 4, 4, 4, 6, 5, 7, 6, 8, 8, 8, 10, 9, 9, 11, 10, 13, 13, 15, 15, 17, 17, 16, 16};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> data = {17, 8, 3, 2, 11, 1, 2, 17, 5, 3, 7, 18, 3, 13, 12, 9, 0, 7, 5, 3, 2, 3, 11, 2, 6, 6, 17, 0, 11, 8, 4, 11, 7, 13, 14, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 1, 3, 2, 2, 2, 4, 3, 3, 3, 3, 5, 5, 7, 6, 6, 8, 7, 7, 9, 8, 11, 11, 11, 11, 13, 12, 14, 13, 18, 17, 17, 17};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> data = {16, 6, 9, 1, 10, 13, 10, 2, 15, 3, 6, 14, 11, 17, 0, 11, 13, 12, 5, 1, 1, 16, 17, 18, 4, 16, 2, 6, 1, 12, 3, 2, 2, 2, 14, 1, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2, 4, 3, 5, 5, 9, 6, 6, 6, 10, 10, 12, 11, 11, 13, 12, 14, 13, 15, 14, 16, 16, 16, 18, 17, 17};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> data = {10, 9, 17, 2, 15, 10, 6, 12, 17, 10, 8, 10, 9, 7, 14, 7, 17, 1, 11, 15, 15, 0, 10, 10, 18, 19, 6, 4, 4, 16, 0, 7, 0, 19, 14, 0, 12, 15};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 2, 1, 4, 4, 6, 6, 8, 7, 7, 7, 9, 9, 11, 10, 10, 10, 10, 10, 10, 12, 12, 14, 14, 16, 15, 15, 15, 15, 17, 17, 17, 19, 19, 18};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> data = {16, 9, 6, 14, 13, 10, 12, 13, 3, 17, 13, 18, 1, 19, 16, 15, 13, 18, 14, 0, 4, 10, 1, 15, 11, 0, 17, 15, 14, 4, 12, 14, 17, 0, 0, 15, 9, 17, 11};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 3, 1, 1, 4, 4, 6, 9, 9, 11, 10, 10, 12, 11, 13, 12, 14, 13, 13, 13, 15, 14, 14, 14, 16, 15, 15, 15, 17, 16, 18, 17, 17, 17, 19, 18};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> data = {5, 0, 16, 16, 4, 11, 17, 5, 3, 7, 13, 1, 11, 10, 19, 12, 3, 8, 11, 8, 3, 20, 16, 4, 15, 19, 13, 12, 9, 16, 16, 9, 4, 2, 19, 6, 8, 7, 12, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 3, 3, 3, 5, 4, 4, 4, 6, 5, 7, 7, 9, 8, 8, 8, 10, 9, 11, 11, 11, 13, 12, 12, 12, 15, 13, 16, 16, 16, 16, 16, 19, 17, 20, 19, 19};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> data = {18, 9, 13, 16, 11, 19, 10, 20, 5, 13, 18, 14, 9, 3, 17, 19, 12, 18, 12, 13, 13, 14, 16, 20, 19, 17, 20, 6, 1, 20, 20, 9, 17, 12, 20, 10, 20, 11, 9, 11, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 7, 6, 9, 9, 9, 9, 11, 10, 10, 12, 11, 11, 13, 12, 12, 14, 13, 13, 13, 16, 14, 16, 18, 17, 17, 17, 19, 18, 18, 20, 20, 20, 20, 20, 20, 20, 19, 19};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> data = {9, 2, 8, 1, 10, 20, 3, 10, 6, 0, 3, 0, 20, 12, 7, 10, 11, 13, 1, 21, 20, 9, 2, 9, 16, 13, 10, 8, 19, 12, 8, 5, 12, 8, 21, 14, 8, 11, 6, 16, 15, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 1, 3, 2, 5, 3, 6, 6, 8, 7, 9, 8, 8, 8, 8, 10, 9, 9, 11, 10, 10, 10, 12, 11, 13, 12, 12, 14, 13, 15, 19, 16, 16, 21, 21, 20, 20, 20};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> data = {6, 12, 3, 16, 9, 13, 21, 17, 18, 0, 18, 18, 4, 15, 21, 13, 6, 1, 21, 20, 17, 17, 4, 15, 17, 5, 14, 6, 12, 8, 9, 9, 14, 19, 10, 5, 3, 7, 18, 6, 11, 20, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 3, 5, 4, 4, 6, 5, 7, 6, 6, 6, 8, 7, 9, 9, 9, 11, 10, 12, 12, 14, 13, 13, 15, 14, 16, 15, 17, 17, 17, 17, 19, 18, 18, 18, 18, 21, 21, 21, 20, 20};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> data = {7, 0, 15, 15, 13, 1, 6, 21, 15, 15, 4, 11, 11, 13, 15, 11, 0, 10, 9, 13, 0, 11, 16, 2, 4, 4, 0, 17, 6, 13, 16, 1, 9, 11, 4, 10, 20, 10, 10, 12, 1, 17, 2, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 2, 1, 1, 1, 1, 4, 2, 4, 4, 4, 6, 6, 9, 7, 9, 11, 10, 10, 10, 10, 12, 11, 11, 11, 11, 13, 13, 13, 13, 15, 15, 15, 15, 15, 17, 16, 16, 20, 17, 21};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> data = {4, 9, 19, 12, 4, 6, 5, 4, 0, 14, 9, 19, 13, 20, 10, 12, 19, 2, 0, 21, 19, 18, 2, 9, 5, 4, 0, 0, 0, 3, 7, 14, 20, 18, 20, 5, 3, 9, 6, 18, 11, 5, 0, 16, 8};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 2, 2, 4, 3, 3, 5, 4, 4, 4, 6, 5, 5, 5, 7, 6, 8, 10, 9, 9, 9, 9, 11, 13, 12, 12, 14, 14, 16, 18, 18, 18, 20, 19, 19, 19, 19, 21, 20, 20};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> data = {4, 23, 9, 14, 0, 3, 19, 8, 6, 23, 5, 16, 5, 2, 16, 19, 22, 14, 8, 18, 19, 19, 5, 20, 17, 18, 17, 1, 19, 7, 14, 1, 20, 18, 21, 10, 9, 15, 13, 16, 1, 9, 15, 7, 9, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 1, 3, 5, 4, 6, 5, 5, 5, 7, 7, 9, 8, 8, 10, 9, 9, 9, 13, 15, 14, 14, 14, 16, 15, 17, 16, 16, 18, 17, 19, 18, 18, 20, 19, 19, 19, 19, 21, 20, 23, 23, 22};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> data = {6, 14, 23, 5, 22, 19, 6, 1, 4, 18, 18, 5, 5, 18, 14, 19, 14, 3, 0, 12, 20, 13, 20, 12, 2, 19, 0, 3, 16, 15, 22, 15, 5, 15, 7, 13, 10, 21, 18, 6, 18, 12, 1, 14, 17, 22, 19};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 3, 3, 5, 4, 6, 5, 5, 5, 7, 6, 6, 10, 12, 12, 12, 14, 13, 13, 15, 14, 14, 14, 16, 15, 15, 17, 19, 18, 18, 18, 18, 18, 20, 19, 19, 19, 21, 20, 23, 22, 22, 22};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> data = {6, 24, 2, 21, 2, 7, 0, 14, 3, 22, 19, 4, 18, 16, 15, 6, 8, 5, 19, 21, 0, 14, 12, 23, 23, 18, 1, 16, 2, 16, 19, 24, 13, 8, 0, 3, 9, 13, 13, 20, 23, 20, 7, 17, 24, 6, 12, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 1, 3, 2, 2, 4, 3, 5, 7, 6, 6, 6, 8, 7, 7, 9, 8, 12, 12, 14, 13, 13, 13, 15, 14, 16, 16, 16, 18, 17, 19, 18, 20, 19, 19, 21, 20, 22, 21, 24, 24, 24, 23, 23, 23};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> data = {7, 23, 12, 10, 13, 13, 13, 10, 9, 14, 9, 9, 20, 14, 10, 11, 14, 6, 24, 6, 14, 18, 10, 7, 11, 6, 7, 0, 16, 8, 16, 5, 23, 14, 1, 7, 11, 9, 23, 18, 11, 11, 3, 3, 10, 9, 0, 20, 20};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 3, 1, 3, 5, 7, 6, 6, 6, 8, 7, 7, 7, 9, 9, 9, 9, 9, 11, 10, 10, 10, 10, 10, 12, 11, 11, 11, 11, 13, 13, 13, 16, 14, 14, 14, 14, 14, 16, 18, 18, 20, 20, 20, 24, 23, 23, 23};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> data = {1, 24, 11, 18, 14, 21, 23, 20, 20, 14, 9, 5, 23, 9, 23, 0, 14, 16, 2, 24, 13, 21, 16, 21, 25, 17, 5, 18, 24, 4, 16, 22, 22, 17, 15, 20, 21, 2, 22, 18, 14, 6, 1, 20, 15, 7, 8, 2, 21, 17};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 4, 2, 2, 5, 5, 7, 6, 8, 11, 9, 9, 13, 15, 14, 14, 14, 14, 16, 15, 17, 16, 16, 18, 17, 17, 20, 18, 18, 20, 20, 20, 22, 21, 21, 21, 21, 21, 23, 22, 22, 24, 23, 23, 25, 24, 24};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> data = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> data = {14, 2, 91, 88, 24, 28, 86, 15, 13, 12, 90, 8, 81, 36, 58, 24, 34, 100, 2, 39, 56, 94, 97, 76, 95, 84, 11, 53, 41, 60, 96, 50, 67, 99, 5, 87, 100, 72, 9, 44, 20, 25, 1, 57, 83, 79, 27, 31, 32, 63};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 2, 2, 8, 11, 9, 12, 14, 13, 15, 20, 24, 24, 27, 25, 28, 31, 34, 32, 36, 39, 41, 44, 50, 53, 56, 58, 57, 60, 63, 67, 72, 76, 79, 81, 83, 86, 84, 87, 90, 88, 91, 94, 96, 95, 97, 100, 100, 99};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> data = {83, 110, 50, 66, 159, 194, 190, 192, 181, 176, 173, 130, 194, 61, 166, 170, 117, 23, 188, 141, 129, 124, 143, 1, 114, 191, 147, 91, 74, 66, 143, 200, 178, 113, 72, 199, 189, 132, 115, 76, 43, 160, 168, 70, 125, 188, 57, 136, 137, 21};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 21, 23, 43, 50, 57, 61, 66, 66, 70, 72, 74, 76, 83, 91, 110, 113, 115, 114, 117, 124, 129, 125, 130, 132, 136, 141, 137, 143, 143, 147, 159, 166, 160, 168, 170, 173, 176, 178, 181, 188, 188, 190, 189, 191, 194, 192, 194, 200, 199};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> data = {61, 100, 71, 114, 279, 104, 253, 54, 84, 235, 50, 100, 112, 196, 256, 273, 197, 204, 261, 134, 96, 13, 103, 96, 298, 141, 151, 299, 155, 238, 44, 162, 213, 299, 106, 130, 153, 290, 120, 248, 242, 15, 299, 219, 71, 151, 90, 141, 107, 110};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 15, 44, 50, 54, 61, 71, 71, 84, 90, 96, 96, 100, 100, 103, 106, 104, 107, 110, 112, 114, 120, 130, 134, 141, 141, 151, 151, 153, 155, 162, 196, 204, 197, 213, 219, 235, 238, 242, 248, 253, 256, 261, 273, 279, 290, 299, 299, 299, 298};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> data = {250, 59, 169, 281, 212, 97, 238, 278, 236, 261, 137, 352, 222, 374, 388, 65, 392, 397, 187, 385, 229, 334, 177, 78, 255, 308, 345, 201, 199, 295, 150, 72, 156, 214, 193, 280, 130, 399, 248, 376, 96, 141, 184, 274, 88, 380, 96, 183, 119, 184};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59, 65, 72, 78, 88, 96, 96, 119, 97, 130, 137, 141, 150, 156, 169, 177, 183, 187, 184, 184, 193, 199, 201, 212, 214, 222, 229, 236, 238, 248, 250, 255, 261, 274, 278, 280, 295, 281, 308, 334, 345, 352, 374, 376, 380, 385, 388, 392, 397, 399};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> data = {401, 188, 442, 210, 161, 157, 168, 55, 213, 425, 415, 401, 267, 45, 384, 12, 68, 377, 366, 53, 411, 93, 149, 328, 53, 484, 41, 40, 394, 388, 116, 261, 18, 287, 414, 275, 351, 144, 301, 114, 189, 36, 219, 41, 358, 300, 74, 445, 233, 472};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 18, 36, 40, 45, 41, 41, 53, 53, 55, 68, 74, 93, 114, 116, 144, 149, 157, 161, 168, 188, 210, 189, 213, 219, 233, 261, 267, 275, 287, 300, 328, 301, 351, 358, 366, 377, 384, 388, 394, 401, 401, 411, 414, 425, 415, 442, 445, 472, 484};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> data = {315, 538, 470, 195, 44, 226, 575, 298, 6, 428, 269, 558, 57, 2, 390, 207, 440, 18, 266, 321, 532, 61, 368, 133, 323, 87, 213, 302, 570, 508, 368, 307, 9, 191, 411, 156, 242, 241, 549, 359, 269, 307, 12, 171, 31, 541, 396, 568, 319, 113};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 9, 12, 18, 31, 44, 57, 61, 87, 113, 133, 156, 171, 191, 195, 207, 213, 226, 241, 266, 242, 269, 269, 298, 302, 307, 307, 315, 319, 321, 323, 359, 368, 368, 390, 396, 411, 428, 440, 470, 508, 532, 538, 541, 549, 558, 568, 570, 575};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> data = {114, 649, 636, 85, 152, 115, 368, 297, 50, 218, 676, 645, 657, 254, 94, 191, 57, 133, 172, 632, 426, 687, 215, 256, 324, 415, 478, 197, 10, 454, 225, 635, 472, 302, 301, 120, 421, 480, 671, 678, 303, 588, 314, 576, 319, 512, 616, 380, 389, 495};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 50, 57, 85, 94, 114, 120, 115, 133, 152, 172, 191, 197, 215, 218, 225, 254, 256, 297, 301, 303, 302, 314, 319, 324, 368, 380, 389, 415, 421, 426, 454, 472, 478, 480, 495, 512, 576, 588, 616, 632, 635, 645, 636, 649, 657, 671, 676, 678, 687};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> data = {61, 776, 685, 353, 683, 348, 400, 565, 85, 669, 422, 10, 221, 266, 588, 468, 624, 407, 211, 701, 533, 160, 530, 604, 372, 599, 463, 22, 275, 696, 597, 475, 747, 178, 463, 674, 616, 235, 478, 242, 517, 438, 407, 434, 288, 489, 296, 616, 679, 276};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 22, 61, 85, 160, 178, 211, 221, 235, 242, 266, 275, 288, 276, 296, 348, 353, 372, 400, 407, 407, 422, 434, 438, 463, 463, 468, 475, 478, 489, 517, 530, 533, 565, 588, 597, 599, 604, 616, 616, 624, 669, 674, 679, 683, 685, 696, 701, 747, 776};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> data = {805, 248, 318, 392, 447, 815, 33, 873, 255, 777, 236, 136, 395, 643, 97, 821, 204, 306, 68, 568, 779, 293, 883, 322, 248, 348, 418, 213, 777, 155, 56, 2, 234, 172, 581, 840, 300, 565, 658, 17, 639, 726, 773, 695, 86, 802, 856, 32, 703, 316};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 17, 32, 56, 33, 68, 86, 97, 136, 155, 172, 204, 213, 234, 236, 248, 248, 255, 293, 300, 306, 316, 318, 322, 348, 392, 395, 418, 447, 565, 568, 581, 639, 643, 658, 695, 703, 726, 773, 777, 777, 779, 802, 805, 815, 821, 840, 856, 873, 883};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> data = {451, 846, 416, 213, 441, 823, 913, 797, 222, 270, 946, 821, 851, 279, 342, 863, 779, 996, 592, 928, 215, 387, 600, 690, 513, 928, 941, 73, 630, 954, 849, 664, 489, 241, 526, 642, 83, 792, 32, 684, 404, 904, 221, 791, 340, 894, 293, 183, 450, 873};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 73, 83, 183, 213, 215, 221, 241, 222, 270, 279, 293, 340, 342, 387, 404, 416, 441, 450, 489, 451, 513, 526, 592, 600, 630, 642, 664, 684, 690, 779, 791, 797, 792, 821, 823, 846, 849, 851, 863, 873, 894, 904, 913, 928, 928, 941, 946, 954, 996};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> data = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> data = {999, 1000, 999, 999, 1000, 1000, 1000, 999, 999, 999, 1000, 1000, 1000, 999, 1000, 999, 999, 999, 999, 1000, 999, 1000, 1000, 1000, 1000, 999, 999, 1000, 1000, 999, 999, 1000, 1000, 1000, 1000, 999, 1000, 999, 999, 1000, 1000, 999, 1000, 1000, 999, 1000, 999, 1000, 1000, 999};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> data = {999, 997, 996, 997, 999, 999, 999, 1000, 1000, 999, 999, 996, 997, 996, 996, 997, 997, 1000, 997, 997, 996, 997, 999, 998, 998, 1000, 999, 999, 999, 997, 997, 998, 998, 1000, 997, 997, 999, 998, 997, 998, 999, 998, 998, 1000, 997, 1000, 998, 1000, 999, 1000};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {996, 996, 996, 996, 996, 998, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 999, 998, 998, 998, 998, 998, 998, 998, 998, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> data = {995, 996, 998, 1000, 1000, 995, 999, 991, 996, 999, 993, 993, 1000, 999, 994, 992, 992, 992, 993, 1000, 996, 1000, 995, 995, 994, 998, 991, 999, 991, 993, 991, 992, 999, 992, 998, 991, 997, 991, 995, 998, 999, 997, 997, 999, 999, 992, 993, 998, 996, 1000};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {991, 991, 991, 991, 991, 991, 993, 992, 992, 992, 992, 992, 992, 994, 993, 993, 993, 993, 995, 994, 996, 995, 995, 995, 995, 997, 996, 996, 996, 998, 997, 997, 999, 998, 998, 998, 998, 1000, 1000, 1000, 1000, 1000, 1000, 999, 999, 999, 999, 999, 999, 999};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> data = {988, 995, 995, 999, 996, 990, 998, 991, 990, 997, 988, 996, 990, 985, 993, 991, 995, 993, 986, 987, 989, 994, 986, 986, 984, 991, 997, 987, 984, 993, 1000, 996, 1000, 997, 985, 1000, 995, 991, 993, 1000, 1000, 998, 984, 989, 997, 986, 992, 985, 1000, 991};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {984, 984, 984, 986, 985, 985, 985, 987, 986, 986, 986, 988, 987, 989, 988, 990, 989, 991, 990, 990, 992, 991, 991, 991, 991, 993, 993, 993, 993, 995, 994, 996, 995, 995, 995, 997, 996, 996, 998, 997, 997, 997, 999, 998, 1000, 1000, 1000, 1000, 1000, 1000};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> data = {989, 993, 989, 994, 985, 980, 997, 983, 994, 993, 989, 975, 984, 992, 982, 993, 996, 986, 994, 993, 992, 986, 990, 978, 988, 983, 976, 977, 1000, 992, 994, 989, 987, 986, 976, 999, 979, 995, 977, 994, 996, 977, 976, 980, 989, 976, 998, 984, 1000, 981};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {975, 977, 976, 976, 976, 976, 978, 977, 977, 979, 981, 980, 980, 982, 984, 983, 983, 985, 984, 986, 986, 986, 988, 987, 989, 989, 989, 989, 989, 992, 990, 992, 992, 994, 993, 993, 993, 993, 995, 994, 994, 994, 994, 996, 996, 998, 997, 1000, 1000, 999};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> data = {985, 995, 967, 989, 994, 988, 967, 995, 993, 986, 979, 975, 990, 967, 982, 989, 980, 995, 966, 984, 1000, 989, 964, 984, 977, 970, 988, 995, 965, 991, 981, 971, 966, 984, 996, 991, 985, 967, 972, 994, 985, 992, 998, 1000, 984, 983, 966, 989, 995, 995};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {964, 966, 965, 967, 966, 966, 970, 967, 967, 967, 971, 975, 972, 977, 979, 981, 980, 982, 984, 983, 985, 984, 984, 984, 986, 985, 985, 988, 988, 990, 989, 989, 989, 989, 991, 991, 993, 992, 994, 994, 996, 995, 995, 995, 995, 995, 995, 998, 1000, 1000};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> data = {977, 999, 987, 963, 971, 951, 993, 954, 987, 958, 999, 968, 999, 967, 996, 971, 962, 960, 1000, 990, 956, 984, 965, 997, 968, 965, 978, 978, 957, 967, 951, 982, 977, 967, 982, 963, 986, 957, 962, 984, 954, 954, 981, 983, 992, 964, 989, 974, 970, 979};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {951, 951, 954, 954, 954, 956, 958, 957, 957, 960, 962, 962, 964, 963, 963, 965, 965, 967, 967, 967, 970, 968, 968, 971, 971, 974, 977, 977, 979, 978, 978, 981, 983, 982, 982, 984, 984, 986, 989, 987, 987, 990, 992, 996, 993, 997, 1000, 999, 999, 999};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> data = {968, 988, 977, 999, 972, 947, 954, 940, 988, 982, 961, 956, 991, 970, 991, 946, 988, 940, 965, 981, 965, 938, 968, 951, 972, 982, 969, 952, 976, 992, 951, 964, 969, 961, 971, 962, 974, 953, 972, 948, 953, 980, 982, 978, 987, 992, 989, 985, 970, 970};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {938, 940, 940, 946, 948, 947, 951, 951, 953, 952, 954, 953, 956, 961, 961, 964, 962, 965, 965, 968, 968, 970, 969, 969, 971, 970, 970, 972, 972, 972, 974, 976, 978, 977, 980, 982, 981, 985, 982, 982, 987, 989, 988, 988, 988, 991, 991, 999, 992, 992};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> data = {948, 942, 953, 931, 941, 949, 999, 960, 972, 939, 978, 959, 926, 944, 980, 939, 933, 950, 956, 976, 977, 986, 920, 954, 946, 943, 965, 995, 963, 995, 931, 951, 977, 998, 984, 949, 995, 961, 974, 926, 991, 984, 926, 947, 955, 945, 920, 945, 971, 938};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {920, 920, 926, 926, 926, 931, 931, 933, 938, 941, 939, 939, 942, 944, 943, 945, 945, 947, 946, 948, 950, 949, 949, 951, 953, 955, 954, 956, 959, 961, 960, 963, 965, 971, 974, 972, 976, 978, 977, 977, 980, 984, 984, 986, 991, 995, 995, 995, 999, 998};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> data = {932, 999, 955, 968, 978, 909, 967, 903, 984, 998, 941, 916, 956, 995, 939, 938, 948, 920, 905, 912, 911, 927, 924, 946, 995, 922, 966, 972, 909, 927, 997, 919, 965, 983, 947, 924, 964, 973, 989, 901, 920, 1000, 977, 932, 974, 992, 999, 940, 966, 952};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {901, 903, 905, 909, 909, 911, 916, 912, 919, 922, 920, 920, 924, 924, 927, 927, 932, 932, 938, 940, 939, 941, 946, 948, 947, 952, 955, 964, 956, 965, 967, 966, 966, 968, 972, 974, 973, 977, 983, 978, 984, 989, 992, 995, 995, 997, 999, 998, 1000, 999};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> data = {968, 964, 926, 978, 988, 893, 916, 915, 900, 895, 903, 923, 955, 953, 995, 922, 884, 883, 971, 921, 909, 926, 998, 932, 983, 887, 885, 933, 969, 975, 916, 891, 900, 987, 943, 957, 971, 895, 894, 881, 951, 882, 881, 897, 953, 991, 922, 983, 929, 966};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {881, 881, 883, 882, 884, 887, 885, 891, 893, 895, 894, 897, 895, 900, 900, 903, 909, 915, 921, 916, 916, 922, 922, 926, 923, 926, 929, 932, 943, 933, 951, 953, 953, 955, 957, 964, 966, 968, 971, 969, 971, 975, 978, 983, 983, 987, 991, 988, 995, 998};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> data = {985, 889, 922, 863, 999, 922, 870, 939, 982, 911, 948, 969, 867, 971, 985, 863, 916, 894, 861, 911, 861, 880, 882, 940, 877, 949, 976, 992, 948, 883, 963, 887, 973, 977, 950, 932, 990, 969, 927, 916, 939, 907, 872, 993, 940, 988, 866, 978, 922, 867};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {861, 861, 863, 863, 866, 870, 867, 867, 872, 877, 880, 882, 887, 883, 889, 894, 907, 911, 911, 916, 916, 922, 922, 922, 927, 932, 939, 939, 948, 940, 940, 948, 950, 949, 963, 969, 969, 971, 973, 976, 978, 977, 982, 985, 985, 988, 990, 992, 999, 993};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> data = {952, 927, 981, 866, 991, 982, 870, 837, 898, 957, 838, 991, 937, 937, 992, 962, 978, 988, 926, 916, 841, 968, 937, 855, 965, 932, 846, 863, 903, 985, 985, 915, 971, 905, 973, 966, 892, 898, 890, 919, 952, 906, 871, 987, 934, 967, 906, 838, 894, 955};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {837, 841, 838, 838, 846, 855, 863, 866, 870, 890, 871, 892, 894, 898, 898, 903, 905, 915, 906, 906, 916, 919, 926, 932, 927, 934, 937, 937, 937, 952, 952, 955, 957, 962, 965, 967, 966, 968, 971, 973, 978, 981, 985, 982, 985, 987, 991, 988, 992, 991};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> data = {877, 927, 917, 963, 805, 873, 849, 902, 932, 929, 981, 1000, 901, 974, 872, 868, 814, 829, 893, 926, 835, 895, 887, 840, 882, 861, 827, 907, 911, 985, 958, 924, 949, 931, 939, 973, 982, 894, 848, 895, 812, 804, 804, 804, 928, 891, 808, 817, 933, 1000};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {804, 804, 804, 808, 805, 812, 814, 817, 827, 829, 835, 840, 848, 861, 849, 868, 872, 877, 873, 882, 887, 891, 893, 895, 894, 901, 895, 902, 907, 911, 917, 924, 926, 928, 927, 929, 931, 933, 932, 939, 949, 958, 963, 973, 981, 974, 982, 985, 1000, 1000};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> data = {963, 827, 873, 836, 855, 878, 821, 815, 832, 844, 945, 882, 950, 810, 911, 804, 796, 914, 889, 838, 906, 848, 799, 775, 973, 922, 825, 940, 820, 925, 902, 842, 969, 935, 976, 979, 878, 806, 816, 902, 923, 801, 857, 977, 952, 948, 781, 947, 839, 897};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {775, 781, 796, 799, 801, 804, 806, 810, 815, 820, 816, 821, 825, 827, 832, 836, 838, 842, 839, 844, 848, 855, 857, 873, 878, 878, 882, 889, 897, 902, 902, 906, 911, 914, 922, 925, 923, 935, 940, 945, 947, 950, 948, 952, 963, 969, 973, 976, 979, 977};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> data = {857, 768, 919, 805, 912, 879, 829, 761, 932, 804, 964, 774, 855, 976, 962, 886, 958, 988, 970, 757, 763, 803, 909, 952, 802, 750, 971, 924, 981, 752, 803, 878, 772, 774, 786, 887, 914, 793, 973, 765, 979, 941, 837, 778, 873, 922, 786, 819, 928, 856};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {750, 752, 757, 761, 763, 765, 768, 772, 774, 774, 778, 786, 786, 793, 802, 804, 803, 803, 805, 819, 829, 837, 855, 857, 856, 873, 878, 886, 879, 887, 909, 912, 914, 919, 922, 924, 928, 932, 941, 952, 958, 962, 964, 970, 973, 971, 976, 979, 981, 988};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> data = {916, 933, 774, 901, 817, 719, 846, 712, 779, 900, 980, 882, 830, 920, 932, 915, 803, 871, 850, 780, 939, 736, 934, 775, 867, 881, 965, 902, 937, 829, 886, 918, 863, 817, 908, 853, 984, 841, 813, 844, 970, 717, 970, 864, 748, 737, 938, 954, 826, 759};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {712, 717, 719, 736, 748, 737, 759, 774, 779, 775, 780, 803, 813, 817, 817, 826, 829, 841, 830, 844, 846, 850, 853, 863, 867, 864, 871, 881, 886, 882, 900, 902, 901, 908, 915, 918, 916, 920, 932, 934, 933, 937, 939, 938, 954, 965, 970, 970, 980, 984};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> data = {907, 762, 900, 916, 810, 783, 943, 776, 891, 715, 884, 885, 893, 965, 798, 717, 808, 916, 940, 690, 835, 924, 918, 756, 968, 744, 977, 737, 724, 817, 970, 857, 799, 737, 839, 962, 913, 809, 774, 712, 738, 818, 820, 993, 940, 930, 765, 948, 993, 889};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {690, 712, 715, 717, 724, 737, 737, 744, 738, 756, 762, 765, 774, 776, 783, 798, 808, 799, 809, 817, 810, 818, 820, 835, 839, 857, 884, 889, 885, 891, 893, 900, 907, 913, 916, 916, 918, 924, 930, 940, 940, 943, 948, 962, 965, 968, 970, 977, 993, 993};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> data = {802, 772, 807, 671, 780, 949, 988, 851, 725, 859, 780, 772, 894, 786, 958, 910, 849, 818, 919, 772, 908, 747, 726, 814, 775, 708, 746, 691, 818, 688, 858, 795, 656, 835, 830, 824, 688, 818, 796, 666, 848, 793, 763, 824, 908, 709, 873, 870, 951, 816};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {656, 666, 671, 688, 688, 691, 708, 725, 709, 726, 746, 763, 747, 772, 772, 772, 775, 780, 780, 786, 793, 795, 802, 796, 807, 814, 816, 818, 818, 818, 824, 824, 830, 835, 848, 851, 849, 858, 870, 859, 873, 894, 908, 908, 910, 919, 949, 951, 958, 988};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> data = {692, 849, 832, 867, 604, 675, 997, 973, 768, 727, 634, 632, 683, 984, 709, 769, 733, 986, 861, 735, 956, 644, 737, 745, 778, 639, 821, 838, 805, 622, 680, 600, 846, 798, 794, 901, 949, 965, 721, 971, 611, 933, 994, 934, 731, 693, 869, 809, 606, 809};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {600, 604, 606, 611, 622, 632, 634, 639, 644, 675, 680, 683, 692, 709, 693, 721, 727, 731, 733, 735, 737, 745, 768, 778, 769, 794, 798, 805, 809, 809, 821, 832, 838, 846, 849, 861, 867, 869, 901, 933, 949, 934, 956, 965, 971, 973, 984, 986, 994, 997};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> data = {1, 2, 2, 3, 3, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 2, 4, 4, 3};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> data = {1, 2, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 2, 4};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> data = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> data = {1, 1, 2, 2, 3, 3, 4, 5, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 3, 5, 5, 5, 5, 5, 5, 7, 6, 6, 6, 8, 7, 7, 9, 9, 9, 8, 8};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> data = {1, 2, 3, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> data = {1000};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> data = {1, 3, 2, 4, 3, 8, 9, 10, 10, 11, 12, 13, 13, 13, 14, 15, 16, 17, 17, 17, 17, 17, 18, 18, 19, 20, 21, 22, 22, 22, 22, 22, 23, 23, 23, 23, 24, 25, 31, 33, 32, 34, 33};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 3, 8, 10, 9, 11, 10, 12, 14, 13, 13, 13, 15, 17, 16, 18, 17, 17, 17, 17, 19, 18, 20, 22, 21, 23, 22, 22, 22, 22, 24, 23, 23, 23, 25, 31, 33, 32, 34, 33};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> data = {1, 1, 2, 2, 3, 3, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> data = {999, 997, 997, 993, 999, 993, 225, 331, 0, 1, 2, 3, 120, 221, 456, 123, 222, 222, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 99, 999, 995, 994, 994, 994, 994, 994, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 993, 993, 993, 93};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 93, 99, 120, 123, 221, 225, 222, 222, 331, 456, 993, 993, 993, 993, 993, 995, 994, 994, 994, 994, 994, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 997, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999, 999};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> data = {1, 4, 3, 2, 0, 0, 4, 4, 1, 2, 0, 0, 3, 3, 4, 3, 4, 1, 2, 4, 4, 2, 1, 4, 3, 0, 2, 1, 1, 0, 3, 2, 0, 4, 4, 1, 1, 1, 1, 3, 3, 0, 0, 3, 2, 3, 2, 0, 3, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> data = {1, 2, 5, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 2, 5};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> data = {1, 2, 2, 3, 3, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> data = {1, 1, 2, 2, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 4, 2, 2, 4};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 3, 5, 4, 6, 5, 7, 6, 8, 7, 9, 8, 10, 9, 11, 10, 12, 11, 13};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> data = {1, 3, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> data = {1, 7, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 7};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> data = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 3, 5, 4, 6, 5, 7, 7, 6};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> data = {1, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> data = {0, 0, 1, 1, 2, 2, 3, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2, 1, 1, 3, 3, 2};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 6, 5, 7, 9, 8, 10, 12, 11, 13, 15, 14, 16, 18, 17, 19, 21, 20, 22, 24, 23, 25, 27, 26, 28, 30, 29, 31, 33, 32, 34, 36, 35, 37, 39, 38, 40, 42, 41, 43, 45, 44, 46, 48, 47, 50, 49};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> data = {1, 1, 1, 2, 2, 2, 4, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 4, 2, 2, 2, 4, 4};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> data = {1, 3, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 3};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> data = {3, 0, 1, 2, 2, 6};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 2, 6};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> data = {1, 2, 3, 3, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> data = {4, 4, 1, 1, 1, 1, 1, 3, 3, 3, 3, 2, 2, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 3, 2, 2, 2, 2, 4, 4, 3, 3, 3};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> data = {1, 1, 2, 2, 3, 3, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 4, 3};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> data = {2, 3, 3, 4, 4, 5, 6};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 3, 3, 5, 4, 6};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> data = {7, 7, 9, 9, 9, 10, 12, 13, 14, 16, 17, 18, 19, 80, 79, 78, 77, 76, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 115, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7, 9, 9, 9, 12, 10, 13, 16, 14, 17, 19, 18, 76, 78, 77, 79, 101, 80, 102, 104, 103, 105, 107, 106, 108, 110, 109, 111, 113, 112, 114, 116, 115, 115, 115, 117, 119, 118, 120, 122, 121, 123, 125, 124, 126, 128, 127, 130, 129};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> data = {1000, 1000, 1000, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 6, 11, 14, 11, 11, 12, 14, 13, 12, 12, 17, 11, 14, 13, 11, 11, 13, 16, 999, 998, 998, 999, 997, 997, 996, 995, 993};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 3, 2, 2, 2, 4, 6, 5, 11, 11, 11, 11, 11, 11, 13, 12, 12, 12, 14, 13, 13, 16, 14, 14, 17, 993, 995, 997, 996, 998, 997, 999, 998, 1000, 1000, 1000, 999};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> data = {1000, 1000, 1000, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 6, 11, 14, 11, 11, 12, 14, 13, 12, 12, 17, 11, 14, 13, 11, 11, 13, 16, 999};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 3, 2, 2, 2, 4, 6, 5, 11, 11, 11, 11, 11, 11, 13, 12, 12, 12, 14, 13, 13, 16, 14, 14, 17, 1000, 1000, 1000, 999};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> data = {0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 6, 6, 6};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 1, 1, 1, 3, 2, 2, 4, 3, 3, 6, 4, 4, 6, 6};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> data = {6, 1, 3, 2, 7, 8, 9, 2, 3, 3, 10, 1, 4, 5, 6, 7, 8, 9, 10, 4, 3, 2, 1, 5, 4, 10, 10, 10, 2, 3, 4, 5, 6, 7, 8, 3, 2, 1, 5, 4, 23, 2, 5, 7, 8, 9, 3, 3, 3, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 4, 4, 4, 4, 6, 5, 5, 5, 5, 7, 6, 6, 8, 7, 7, 7, 9, 8, 8, 8, 10, 9, 9, 23, 10, 10, 10, 10};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> data = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> data = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> data = {1, 1, 1, 1, 1, 2, 4, 4, 4, 4, 4, 4, 2, 22, 2, 2, 2, 54, 22, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 4, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 22, 22, 54};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> data = {1, 1, 1, 1, 1, 2, 4, 4, 4, 4, 4, 4, 2, 22, 2, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 4, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 22};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> data = {0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> data = {1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 2, 2, 2, 3, 3, 2, 2, 3, 3, 4, 5, 3, 2, 1, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 4, 4, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> data = {100, 100};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> data = {1, 3, 2, 4, 1, 2, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> data = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> data = {0};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> data = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> data = {1000, 1000};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 1000};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> data = {1, 3, 2, 2, 6, 6, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 2, 6, 6, 5};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> data = {0, 1, 5, 4, 4, 6, 7, 8, 8, 4, 5, 6, 7, 8, 8, 7, 6, 5, 4, 4, 4, 4, 5, 5, 7, 0, 7, 8, 4, 6, 6, 6, 7, 6, 5, 8, 4, 5, 7, 5, 6, 4, 5, 8, 5, 4, 6, 8, 9};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 4, 1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7, 6, 6, 6, 6, 6, 6, 6, 6, 8, 7, 7, 7, 7, 7, 7, 9, 8, 8, 8, 8, 8, 8, 8};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> data = {1, 2, 3, 3, 4, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 3, 5};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> data = {1, 4, 4, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 2, 4};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> data = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> data = {1, 2, 1, 4, 2, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 4, 2, 2, 4};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> data = {1, 4, 2, 4, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 2, 2, 4};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> data = {1, 1, 4, 4, 2, 5, 6, 7, 8, 3, 4, 9, 2, 3, 6, 1, 3, 5, 10, 2, 3, 5, 35};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 3, 2, 2, 2, 4, 3, 3, 3, 5, 4, 4, 6, 5, 5, 7, 6, 8, 10, 9, 35};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> data = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> data = {27, 988, 7, 0, 10, 21, 1000, 982, 984, 3, 4, 992, 3, 6, 981, 23, 1, 993, 8, 997, 4, 22, 994, 986, 9, 985, 20, 990, 991, 6, 29, 18, 22, 18, 983, 1000, 995, 999, 996, 19, 8, 987, 998, 1, 7, 989, 30, 13, 999, 28};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 1, 1, 3, 6, 4, 4, 6, 8, 7, 7, 9, 8, 10, 13, 18, 18, 20, 19, 21, 23, 22, 22, 27, 29, 28, 30, 981, 983, 982, 984, 986, 985, 987, 989, 988, 990, 992, 991, 993, 995, 994, 996, 998, 997, 1000, 1000, 999, 999};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> data = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> data = {1, 2, 3, 4, 5, 6, 7};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 6, 5, 7};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> data = {1, 3, 6, 9, 10, 11, 12, 15, 17, 17, 17, 17, 17, 18, 19, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 3, 3, 3, 4, 5, 6, 7, 8, 9, 44, 50};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 3, 3, 3, 5, 4, 6, 6, 8, 7, 9, 9, 11, 10, 12, 15, 17, 17, 17, 17, 17, 19, 18, 21, 19, 22, 24, 23, 25, 27, 26, 28, 30, 29, 31, 33, 32, 34, 36, 35, 37, 39, 38, 40, 42, 41, 43, 50, 44};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> data = {11, 1};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> data = {1, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2, 4, 2, 1, 4, 2, 4, 1, 4, 2};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 4, 2, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> data = {1, 1, 2, 2, 3, 3, 4, 5};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 4, 3, 5};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> data = {1, 2, 2, 4, 4};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 2, 2, 4};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> data = {1, 3, 2, 4, 3};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> data = {1, 1, 3, 2, 2, 12, 3, 21, 38, 53, 75, 284, 321, 401, 402, 403, 501, 502, 601, 602, 602, 602, 602, 604, 604};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 2, 2, 12, 3, 21, 38, 53, 75, 284, 321, 401, 403, 402, 501, 601, 502, 602, 602, 602, 602, 604, 604};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> data = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 7, 7, 7, 7, 8, 8, 8, 9, 9, 1, 0, 10, 10, 10, 10, 14, 14, 15, 15, 15, 15, 16};
    WeirdSort* pObj = new WeirdSort();
    clock_t start = clock();
    vector<int> result = pObj->sortArray(data);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 1, 1, 3, 2, 4, 3, 3, 5, 4, 7, 5, 7, 7, 7, 9, 8, 8, 8, 10, 9, 14, 10, 10, 10, 14, 16, 15, 15, 15, 15};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10001&pm=6755
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef map <string , int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
class WeirdSort 
{ 
// Global 
 
// Functions 
public: 
  vector <int> sortArray(vector <int> data, int f = -1) 
  { 
    vector <int> res; 
    int n; 
    sort(all(data)); 
    if (data.back() - data[0] <= 1) 
    { 
      reverse(all(data)); 
      return data; 
    } 
/*    res.push_back(data[0]); 
    reverse(all(data)); 
    data.pop_back(); 
    reverse(all(data));*/ 
    for (int i = 0; i < data.size(); ++i) 
    { 
      if (data[i] != f) 
      { 
        res.push_back(data[i]); 
        swap(data[i], data.back()); 
        data.pop_back(); 
        break; 
      } 
    } 
    vi r1 = sortArray(data, res[0] + 1); 
    for (int i = 0; i < r1.size(); ++i) 
      res.push_back(r1[i]); 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/