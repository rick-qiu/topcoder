/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2013
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

class Deranged {
public:
    long numDerangements(vector<int> nums);
};

long Deranged::numDerangements(vector<int> nums) {
    long ret;
    return ret;
}


int test0() {
    vector<int> nums = {1, 1, 2, 2, 3};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> nums = {0, 0, 0, 1, 1, 1};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> nums = {0, 0, 0, 1, 1, 1, 1};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 481066515734;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> nums = {1, 4, 4, 2, 0};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> nums = {7, 8, 5, 10, 11, 8, 5, 10, 7, 8, 9, 6};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 1151487;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> nums = {6, 7, 8, 9, 2, 11, 8, 1, 2, 11, 0, 5};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 12563896;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> nums = {4, 6, 9, 1, 10, 5, 3, 7, 7, 4, 7, 6, 11};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 38707344;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> nums = {4, 12, 6, 4, 11, 12, 12, 2, 1, 11, 9, 0, 4};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 8935756;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> nums = {6, 1, 4, 3, 6, 1, 8, 9, 4, 3};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 33905;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> nums = {4, 5, 10, 3, 4, 1, 6, 3, 0, 9, 6, 11};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 12563896;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> nums = {3, 8, 5, 2, 5, 8, 9, 6, 5, 8};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 8193;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> nums = {2, 1, 6, 9, 0, 7, 2, 5, 8, 5};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 209581;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> nums = {2, 3, 0, 1, 6, 7, 4, 5};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 14833;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> nums = {0, 1, 6, 7, 4, 5, 2, 3};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 14833;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> nums = {7, 8, 10, 8, 8, 6, 3, 10, 2, 4, 4, 1, 5};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 38707344;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> nums = {6, 4, 3, 0, 13, 3, 6, 0, 1, 0, 14, 5, 10, 12, 14};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 4053826542;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> nums = {0};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> nums = {8, 8, 0, 9, 10, 6, 8, 5, 3, 8, 0};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 48480;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> nums = {13, 4, 10, 8, 8, 2, 2, 3, 9, 0, 5, 10, 11, 11, 1};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 16783469910;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> nums = {5, 0, 6, 2, 3, 6, 3, 5, 4, 1, 3};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 204684;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> nums = {0, 1};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> nums = {3, 7, 12, 10, 5, 2, 7, 8, 7, 11, 4, 11, 10};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 38707344;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> nums = {1, 4, 3, 3, 9, 1, 9, 1, 0, 10, 7};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 204684;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> nums = {4, 8, 6, 10, 1, 9, 7, 1, 7, 2, 10, 1, 9};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 16522632;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> nums = {2, 3, 0, 1, 6, 7, 4, 5};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 14833;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> nums = {0, 9, 6, 7, 0, 9, 10, 11, 4, 5, 2, 3};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 30173825;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> nums = {5, 12, 4, 1, 3, 12, 8, 12, 12, 0, 1, 12, 9};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 682800;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> nums = {11, 0, 5, 10, 7, 8, 9, 2, 3, 4, 1, 10};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 72755370;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> nums = {8, 1, 10, 3, 4, 9, 6, 7, 8, 1, 6, 11};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 12563896;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> nums = {3, 1, 2, 0, 3};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> nums = {0, 5, 4, 2, 3, 6, 6};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 640;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> nums = {9, 2, 0, 3, 14, 14, 1, 6, 12, 8, 13, 7, 11, 8, 0};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 38727700100;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> nums = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 481066515734;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    Deranged* pObj = new Deranged();
    clock_t start = clock();
    long result = pObj->numDerangements(nums);
    clock_t end = clock();
    delete pObj;
    long expected = 481066515734;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=4685&pm=2013
********************************************************************************
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <algorithm>
using namespace std;
 
#define ll long long
#define vs vector<string>
#define vi vector<int>
#define vll vector<ll>
#define fo(x,y) for((x)=0;(x)<(y);(x)++)
#define fi fo(i,n)
#define fj fo(j,n)
#define fk fo(k,n)
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define pb push_back
#define sz size()
#define cs c_str()
#define ins(x) insert(x)
#define dub (double)
 
int g[20];
 
ll ncr(int n, int r) {
  ll ret=1;
  int i;
  if (r>n) return 0;
  for(i=1;i<=r;i++) ret*=(n+1-i),ret/=i;
  return ret;
}
 
class Deranged { public: ll numDerangements(vi f) {
int n=f.size();
int i,j,r;
ll k,ret=0;
ll x;
 
fo(i,1<<n) {
  fo(j,n) g[j]=0; k=1;
  r=n;
  fo(j,n) if(i&(1<<j)) { k=-k; r--; } else { g[f[j]]++; }
  x=1;
  fo(j,n) x*=ncr(r,g[j]),r-=g[j];
  ret+=k*x;
}
return ret;
}};

********************************************************************************
*******************************************************************************/