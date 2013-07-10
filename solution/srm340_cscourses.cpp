/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7505
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

class CsCourses {
public:
    vector<int> getOrder(vector<int> theoreticalValue, vector<int> practicalValue, vector<int> expire, int skillBound);
};

vector<int> CsCourses::getOrder(vector<int> theoreticalValue, vector<int> practicalValue, vector<int> expire, int skillBound) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {1};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> theoreticalValue = {1, 2, 1};
    vector<int> practicalValue = {2, 1, 1};
    vector<int> expire = {5, 5, 5};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> theoreticalValue = {1, 2, 1};
    vector<int> practicalValue = {2, 1, 1};
    vector<int> expire = {1, 1, 1};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> theoreticalValue = {1, 2, 1};
    vector<int> practicalValue = {2, 1, 1};
    vector<int> expire = {3, 2, 1};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7};
    vector<int> expire = {1, 2, 3, 4, 5, 6, 7};
    int skillBound = 7;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> theoreticalValue = {0};
    vector<int> practicalValue = {1};
    vector<int> expire = {1};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
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
    vector<int> theoreticalValue = {1, 1};
    vector<int> practicalValue = {2, 1};
    vector<int> expire = {2, 1};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> theoreticalValue = {0, 2, 1};
    vector<int> practicalValue = {1, 1, 1};
    vector<int> expire = {2, 3, 3};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> theoreticalValue = {0, 2, 3, 1};
    vector<int> practicalValue = {1, 1, 2, 1};
    vector<int> expire = {3, 3, 4, 2};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> theoreticalValue = {1, 2, 2, 2, 3};
    vector<int> practicalValue = {1, 4, 3, 2, 4};
    vector<int> expire = {3, 4, 5, 2, 7};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 2, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> theoreticalValue = {1, 1, 3, 4, 2, 2};
    vector<int> practicalValue = {0, 1, 3, 4, 3, 2};
    vector<int> expire = {2, 2, 7, 8, 4, 4};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 2, 3};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> theoreticalValue = {3, 4, 1, 4, 2, 4, 2};
    vector<int> practicalValue = {1, 4, 0, 3, 0, 2, 1};
    vector<int> expire = {4, 7, 3, 6, 2, 7, 5};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 0, 5, 3, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> theoreticalValue = {1, 2, 2, 0, 1, 0, 3, 1};
    vector<int> practicalValue = {2, 5, 6, 1, 4, 2, 6, 3};
    vector<int> expire = {5, 7, 8, 1, 7, 3, 9, 6};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 7, 4, 1, 6};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> theoreticalValue = {3, 5, 2, 5, 1, 4, 4, 2, 3};
    vector<int> practicalValue = {2, 6, 2, 7, 1, 5, 4, 1, 3};
    vector<int> expire = {4, 8, 5, 10, 2, 7, 6, 2, 7};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 8, 6, 5, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> theoreticalValue = {2, 3, 0, 0, 1, 0, 2, 2, 2, 4};
    vector<int> practicalValue = {6, 8, 1, 3, 3, 2, 4, 5, 7, 8};
    vector<int> expire = {8, 12, 3, 3, 5, 4, 5, 6, 8, 13};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 4, 6, 7, 0, 8, 1, 9};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> theoreticalValue = {8, 5, 3, 2, 5, 7, 1, 4, 0, 6, 5};
    vector<int> practicalValue = {8, 4, 2, 2, 3, 7, 1, 2, 1, 6, 5};
    vector<int> expire = {11, 10, 6, 5, 7, 11, 3, 7, 4, 9, 9};
    int skillBound = 8;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 3, 2, 7, 4, 1, 10, 9, 5, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> theoreticalValue = {2, 6, 5, 6, 7, 7, 4, 3, 8, 3, 2, 1};
    vector<int> practicalValue = {2, 5, 4, 6, 6, 7, 4, 3, 8, 4, 1, 1};
    vector<int> expire = {3, 11, 10, 11, 13, 14, 6, 5, 12, 7, 5, 3};
    int skillBound = 8;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 0, 7, 6, 2, 1, 3, 5, 8};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> theoreticalValue = {7, 2, 4, 1, 0, 3, 7, 6, 4, 4, 4, 8, 5};
    vector<int> practicalValue = {6, 1, 2, 1, 1, 1, 7, 5, 3, 1, 4, 8, 4};
    vector<int> expire = {14, 4, 6, 2, 2, 7, 15, 10, 8, 7, 9, 15, 11};
    int skillBound = 8;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 5, 2, 8, 12, 7, 0, 6, 11};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> theoreticalValue = {7, 3, 5, 4, 2, 1, 8, 3, 6, 3, 4, 9, 9, 3};
    vector<int> practicalValue = {6, 3, 6, 6, 1, 0, 7, 1, 6, 4, 5, 7, 8, 2};
    vector<int> expire = {13, 8, 10, 9, 5, 4, 12, 5, 10, 8, 8, 14, 14, 4};
    int skillBound = 8;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 13, 1, 9, 10, 2, 8, 0, 6, 12};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> theoreticalValue = {8, 3, 3, 10, 10, 2, 9, 8, 4, 6, 8, 1, 7, 5, 8};
    vector<int> practicalValue = {7, 0, 1, 9, 8, 0, 7, 4, 1, 3, 5, 0, 4, 2, 6};
    vector<int> expire = {15, 4, 6, 18, 15, 4, 14, 12, 7, 7, 13, 1, 9, 6, 12};
    int skillBound = 9;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 5, 1, 8, 13, 9, 12, 10, 14, 6, 4, 3};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> theoreticalValue = {6, 9, 4, 6, 4, 0, 3, 7, 7, 5, 1, 0, 6, 8, 5, 2};
    vector<int> practicalValue = {8, 10, 3, 7, 4, 1, 3, 9, 8, 5, 2, 2, 6, 10, 6, 2};
    vector<int> expire = {15, 18, 6, 13, 8, 4, 5, 16, 15, 9, 5, 2, 12, 16, 9, 4};
    int skillBound = 9;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 15, 6, 4, 9, 12, 3, 0, 7, 13, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> theoreticalValue = {3, 6, 2, 1, 6, 5, 0, 0, 6, 2, 2, 6, 0, 6, 6, 2, 4};
    vector<int> practicalValue = {8, 13, 5, 3, 11, 10, 1, 3, 14, 7, 6, 12, 2, 16, 15, 4, 9};
    vector<int> expire = {10, 15, 9, 5, 14, 12, 3, 6, 17, 9, 8, 14, 3, 20, 18, 6, 12};
    int skillBound = 6;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 12, 3, 15, 2, 10, 9, 0, 16, 5, 4};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> theoreticalValue = {4, 16, 14, 12, 1, 15, 13, 15, 5, 6, 14, 3, 8, 11, 7, 10, 2, 9};
    vector<int> practicalValue = {2, 10, 8, 6, 0, 8, 7, 9, 2, 3, 7, 1, 4, 6, 4, 5, 0, 4};
    vector<int> expire = {7, 21, 18, 13, 3, 17, 13, 20, 7, 8, 14, 3, 8, 13, 9, 13, 5, 9};
    int skillBound = 10;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 16, 11, 0, 8, 9, 14, 12, 17, 15, 13, 3, 6, 2, 7, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> theoreticalValue = {12, 2, 11, 10, 7, 13, 5, 1, 9, 6, 12, 12, 12, 1, 14, 3, 8, 7, 4};
    vector<int> practicalValue = {13, 2, 10, 10, 7, 14, 4, 2, 9, 5, 14, 11, 12, 1, 15, 2, 8, 6, 3};
    vector<int> expire = {16, 6, 14, 12, 12, 18, 6, 5, 13, 8, 18, 14, 18, 1, 21, 5, 13, 9, 5};
    int skillBound = 14;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 1, 15, 18, 6, 9, 17, 4, 16, 8, 3, 2, 11, 12, 0, 5, 14};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> theoreticalValue = {4, 9, 13, 13, 14, 12, 12, 2, 1, 11, 6, 14, 10, 7, 6, 5, 8, 3, 5, 3};
    vector<int> practicalValue = {2, 5, 8, 9, 10, 7, 6, 0, 0, 6, 3, 11, 5, 4, 4, 3, 5, 1, 2, 2};
    vector<int> expire = {5, 13, 17, 21, 23, 19, 18, 5, 1, 14, 8, 22, 13, 14, 10, 7, 14, 6, 10, 7};
    int skillBound = 11;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 17, 0, 15, 10, 13, 16, 1, 12, 9, 5, 2, 3, 4, 11};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> theoreticalValue = {1, 1, 7, 4, 8, 9, 8, 5, 8, 10, 2, 1, 13, 5, 2, 3, 1, 12, 2, 11, 6};
    vector<int> practicalValue = {1, 2, 10, 8, 11, 13, 13, 8, 12, 13, 6, 4, 14, 9, 5, 8, 3, 14, 7, 13, 10};
    vector<int> expire = {1, 6, 15, 10, 15, 18, 16, 13, 19, 22, 6, 5, 21, 15, 6, 10, 6, 23, 8, 22, 14};
    int skillBound = 13;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 16, 11, 14, 10, 18, 15, 3, 13, 20, 2, 4, 8, 5, 9, 19, 17, 12};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> theoreticalValue = {13, 8, 11, 12, 8, 0, 9, 2, 14, 5, 6, 6, 2, 10, 1, 13, 7, 0, 10, 4, 0, 3};
    vector<int> practicalValue = {15, 12, 14, 14, 11, 3, 12, 5, 17, 7, 9, 8, 6, 13, 4, 16, 10, 2, 12, 7, 1, 7};
    vector<int> expire = {22, 17, 19, 23, 16, 4, 16, 8, 23, 12, 12, 10, 6, 21, 8, 23, 14, 2, 20, 9, 2, 7};
    int skillBound = 14;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 17, 5, 14, 7, 12, 21, 19, 9, 11, 10, 16, 4, 6, 13, 2, 3, 0, 15, 8};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> theoreticalValue = {11, 1, 16, 13, 10, 6, 12, 5, 3, 4, 14, 8, 10, 4, 3, 9, 7, 7, 2, 11, 6, 15, 1};
    vector<int> practicalValue = {13, 2, 17, 15, 13, 9, 14, 7, 4, 6, 16, 11, 12, 5, 5, 12, 9, 10, 3, 14, 8, 17, 1};
    vector<int> expire = {17, 4, 27, 21, 20, 14, 23, 9, 4, 11, 21, 15, 17, 8, 5, 17, 15, 12, 3, 20, 13, 22, 1};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 1, 18, 8, 13, 9, 7, 20, 5, 17, 11, 15, 4, 0, 6, 3, 10, 21, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> theoreticalValue = {5, 8, 2, 11, 11, 17, 4, 10, 16, 14, 8, 12, 3, 9, 6, 18, 15, 8, 17, 7, 9, 13, 1, 1};
    vector<int> practicalValue = {4, 6, 1, 11, 10, 16, 3, 10, 15, 14, 7, 12, 2, 9, 4, 16, 15, 5, 15, 4, 8, 13, 1, 0};
    vector<int> expire = {10, 13, 4, 20, 15, 24, 7, 17, 24, 20, 15, 17, 8, 16, 8, 24, 22, 11, 23, 9, 14, 20, 4, 1};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 2, 12, 6, 0, 14, 19, 17, 1, 10, 20, 13, 7, 3, 11, 21, 9, 16, 8, 5};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> theoreticalValue = {14, 15, 11, 12, 17, 2, 1, 3, 16, 9, 10, 10, 2, 13, 5, 8, 2, 6, 15, 16, 17, 12, 7, 4, 10};
    vector<int> practicalValue = {11, 13, 8, 10, 15, 1, 0, 2, 15, 4, 7, 5, 2, 10, 2, 4, 0, 3, 12, 14, 16, 9, 4, 2, 6};
    vector<int> expire = {22, 22, 17, 17, 24, 5, 5, 7, 24, 14, 17, 12, 7, 21, 9, 13, 2, 10, 21, 22, 25, 16, 9, 10, 14};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5, 7, 23, 14, 17, 22, 15, 9, 11, 24, 10, 2, 21, 13, 0, 18, 1, 19, 4, 20};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> theoreticalValue = {3, 6, 2, 8, 9, 8, 8, 4, 13, 11, 10, 7, 12, 5, 9, 6, 7, 5, 12, 3, 8, 3, 6, 8, 1, 8};
    vector<int> practicalValue = {3, 7, 2, 12, 16, 10, 13, 4, 19, 17, 16, 10, 18, 6, 15, 8, 9, 5, 19, 2, 15, 4, 6, 11, 1, 14};
    vector<int> expire = {4, 10, 5, 18, 24, 14, 20, 6, 29, 26, 25, 13, 28, 9, 24, 14, 14, 10, 29, 4, 22, 8, 13, 15, 3, 22};
    int skillBound = 13;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 2, 0, 7, 17, 13, 1, 15, 16, 5, 23, 3, 6, 25, 14, 10, 9, 12, 8};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> theoreticalValue = {7, 6, 5, 15, 1, 3, 18, 13, 13, 9, 6, 10, 2, 16, 13, 17, 1, 15, 7, 17, 4, 9, 12, 15, 14, 11, 8};
    vector<int> practicalValue = {8, 6, 4, 17, 2, 2, 20, 13, 15, 9, 5, 10, 2, 18, 14, 20, 1, 16, 7, 19, 3, 10, 12, 18, 15, 11, 8};
    vector<int> expire = {10, 11, 8, 26, 4, 4, 27, 17, 22, 14, 9, 17, 4, 25, 18, 29, 1, 25, 9, 28, 8, 15, 16, 24, 20, 18, 13};
    int skillBound = 18;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 12, 5, 20, 2, 10, 1, 18, 26, 9, 11, 25, 22, 7, 14, 24, 17, 3, 13, 19, 6};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> theoreticalValue = {12, 7, 16, 9, 5, 18, 17, 13, 3, 6, 11, 5, 1, 1, 10, 16, 5, 2, 13, 15, 17, 8, 17, 1, 14, 15, 1, 4};
    vector<int> practicalValue = {12, 8, 17, 9, 7, 21, 19, 14, 4, 8, 11, 6, 2, 3, 10, 16, 5, 3, 13, 15, 20, 8, 18, 1, 15, 16, 0, 5};
    vector<int> expire = {21, 12, 24, 16, 10, 28, 28, 22, 10, 15, 16, 12, 7, 8, 17, 23, 9, 8, 18, 22, 31, 16, 29, 5, 24, 23, 5, 11};
    int skillBound = 18;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 12, 17, 8, 27, 11, 4, 9, 1, 21, 3, 14, 10, 0, 18, 7, 24, 25, 2, 22, 6, 20, 5};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> theoreticalValue = {10, 18, 20, 1, 5, 2, 9, 3, 13, 6, 16, 14, 8, 4, 2, 4, 2, 15, 7, 15, 19, 4, 8, 15, 2, 17, 11, 12, 3};
    vector<int> practicalValue = {12, 17, 18, 0, 9, 3, 11, 4, 13, 9, 16, 13, 10, 6, 2, 7, 0, 16, 9, 15, 17, 8, 9, 14, 1, 16, 13, 13, 5};
    vector<int> expire = {20, 27, 33, 5, 13, 6, 16, 7, 21, 14, 29, 22, 17, 9, 6, 12, 4, 27, 13, 24, 30, 13, 15, 23, 7, 30, 18, 21, 8};
    int skillBound = 18;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 24, 14, 5, 7, 28, 13, 15, 21, 4, 9, 18, 12, 6, 0, 26, 27, 8, 11, 23, 19, 10, 25, 1, 20, 2};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> theoreticalValue = {3, 9, 10, 16, 11, 9, 2, 7, 7, 12, 11, 6, 1, 5, 8, 6, 3, 13, 8, 8, 15, 3, 1, 14, 8, 11, 4, 2, 5, 14};
    vector<int> practicalValue = {3, 14, 15, 22, 16, 13, 2, 8, 9, 18, 17, 7, 0, 5, 11, 6, 2, 19, 12, 10, 22, 4, 1, 21, 13, 15, 4, 1, 6, 20};
    vector<int> expire = {9, 23, 26, 30, 24, 21, 8, 15, 15, 27, 25, 16, 1, 9, 16, 15, 6, 28, 20, 15, 33, 9, 7, 32, 21, 24, 12, 7, 13, 27};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 6, 0, 26, 13, 15, 11, 7, 8, 19, 14, 18, 5, 1, 2, 4, 10, 9, 17, 29, 23, 20, 3};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> theoreticalValue = {12, 1, 5, 7, 16, 13, 6, 4, 9, 11, 8, 11, 3, 5, 10, 15, 5, 3, 14, 1, 8, 2, 15, 4, 17, 17, 8, 4, 0, 6, 5};
    vector<int> practicalValue = {21, 3, 12, 14, 25, 22, 14, 7, 18, 20, 15, 21, 5, 10, 19, 24, 13, 6, 23, 2, 17, 4, 25, 8, 26, 25, 16, 9, 1, 13, 11};
    vector<int> expire = {25, 6, 14, 17, 31, 25, 15, 9, 24, 23, 17, 28, 8, 13, 24, 29, 16, 10, 30, 6, 21, 6, 33, 10, 31, 30, 23, 10, 6, 19, 11};
    int skillBound = 17;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 19, 1, 21, 12, 17, 7, 23, 27, 13, 30, 2, 29, 3, 10, 26, 20, 8, 14, 9, 0, 5, 18, 15, 4, 24};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> theoreticalValue = {14, 10, 10, 8, 4, 15, 17, 8, 9, 1, 11, 15, 19, 6, 13, 3, 6, 2, 17, 18, 13, 19, 16, 19, 5, 8, 12, 8, 13, 7, 1, 15};
    vector<int> practicalValue = {17, 12, 11, 8, 3, 20, 23, 9, 11, 1, 13, 18, 24, 5, 14, 3, 4, 2, 22, 24, 16, 26, 21, 25, 4, 10, 13, 7, 15, 6, 0, 19};
    vector<int> expire = {22, 16, 17, 13, 9, 28, 30, 13, 14, 3, 21, 28, 33, 9, 23, 7, 11, 6, 32, 33, 21, 35, 28, 34, 9, 17, 21, 10, 20, 12, 4, 26};
    int skillBound = 19;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 17, 15, 4, 24, 13, 29, 27, 3, 7, 25, 8, 1, 10, 26, 14, 28, 20, 0, 11, 31, 5, 22, 18, 6, 19, 12};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> theoreticalValue = {9, 19, 16, 13, 15, 10, 14, 12, 18, 19, 1, 8, 6, 5, 17, 3, 7, 11, 12, 9, 20, 15, 5, 9, 18, 11, 2, 4, 9, 2, 21, 5, 17};
    vector<int> practicalValue = {9, 20, 16, 14, 15, 12, 14, 14, 18, 19, 1, 8, 6, 5, 17, 3, 7, 12, 13, 8, 20, 16, 6, 11, 17, 13, 1, 4, 10, 2, 20, 4, 16};
    vector<int> expire = {13, 35, 30, 22, 24, 20, 27, 24, 31, 32, 3, 16, 9, 9, 31, 4, 10, 17, 22, 15, 34, 28, 10, 16, 31, 18, 6, 9, 15, 3, 33, 6, 29};
    int skillBound = 20;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 29, 15, 27, 13, 12, 16, 11, 0, 28, 23, 5, 17, 18, 3, 6, 4, 2, 14, 8, 9, 20};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> theoreticalValue = {20, 14, 8, 17, 21, 13, 11, 16, 7, 13, 3, 7, 17, 9, 11, 21, 10, 1, 9, 6, 2, 12, 4, 15, 19, 15, 6, 6, 23, 5, 19, 22, 20, 18};
    vector<int> practicalValue = {20, 12, 6, 17, 22, 11, 10, 15, 5, 12, 0, 6, 16, 7, 9, 23, 9, 0, 8, 3, 0, 10, 0, 14, 18, 13, 2, 4, 25, 1, 19, 24, 21, 17};
    vector<int> expire = {33, 25, 12, 29, 36, 20, 17, 26, 14, 22, 7, 12, 27, 15, 16, 32, 14, 5, 18, 7, 5, 17, 6, 23, 28, 26, 6, 13, 36, 10, 28, 34, 35, 29};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 20, 10, 22, 29, 26, 19, 27, 8, 2, 13, 18, 16, 6, 21, 5, 1, 25, 23, 7, 12, 33, 24, 30, 0, 32, 4, 15, 31, 28};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> theoreticalValue = {9, 23, 4, 1, 19, 20, 23, 16, 4, 22, 3, 22, 14, 8, 5, 13, 21, 1, 13, 2, 14, 19, 12, 17, 11, 17, 15, 23, 18, 17, 10, 10, 7, 9, 6};
    vector<int> practicalValue = {6, 22, 4, 1, 18, 19, 23, 14, 3, 19, 3, 20, 13, 6, 5, 12, 19, 2, 11, 3, 14, 17, 11, 14, 10, 15, 14, 21, 16, 16, 9, 8, 6, 7, 5};
    vector<int> expire = {16, 37, 10, 4, 33, 32, 39, 24, 9, 33, 8, 36, 23, 14, 10, 18, 32, 2, 17, 7, 25, 29, 18, 28, 16, 29, 26, 33, 31, 27, 17, 16, 14, 15, 8};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 17, 19, 10, 2, 14, 34, 32, 13, 33, 31, 30, 24, 22, 15, 12, 26, 7, 25, 28, 21, 4, 5, 16, 11, 27, 1, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> theoreticalValue = {3, 7, 13, 4, 15, 11, 18, 19, 12, 10, 25, 2, 1, 21, 8, 20, 15, 23, 26, 9, 16, 17, 24, 25, 21, 28, 4, 17, 27, 22, 5, 6, 20, 1, 14, 15};
    vector<int> practicalValue = {2, 5, 8, 2, 10, 7, 15, 16, 7, 7, 23, 2, 1, 19, 5, 17, 12, 21, 24, 6, 13, 15, 22, 22, 20, 25, 3, 14, 25, 21, 3, 4, 18, 0, 9, 11};
    vector<int> expire = {6, 13, 18, 6, 22, 14, 24, 26, 15, 12, 37, 7, 5, 30, 10, 27, 19, 31, 37, 13, 24, 26, 36, 34, 29, 40, 7, 23, 36, 30, 12, 11, 27, 1, 20, 20};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 11, 0, 3, 30, 31, 1, 14, 19, 9, 5, 8, 2, 34, 4, 35, 16, 20, 27, 6, 7, 15, 32, 13, 24, 29, 17, 22, 10, 18, 28};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> theoreticalValue = {18, 8, 6, 17, 23, 13, 12, 24, 4, 15, 9, 22, 20, 4, 21, 9, 1, 20, 16, 3, 24, 16, 11, 25, 12, 10, 16, 22, 5, 14, 10, 16, 7, 24, 17, 19, 2};
    vector<int> practicalValue = {19, 8, 6, 19, 24, 13, 12, 25, 3, 14, 9, 22, 21, 4, 21, 8, 1, 20, 15, 2, 26, 17, 12, 28, 13, 10, 16, 23, 5, 13, 11, 18, 7, 27, 18, 19, 1};
    vector<int> expire = {30, 12, 10, 30, 33, 17, 20, 38, 8, 24, 12, 36, 34, 7, 34, 12, 6, 29, 21, 5, 36, 26, 19, 38, 16, 15, 22, 36, 8, 19, 15, 27, 8, 37, 26, 27, 4};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 36, 19, 8, 13, 28, 2, 32, 1, 10, 25, 30, 22, 6, 5, 29, 9, 18, 26, 21, 34, 0, 35, 17, 14, 11, 27, 4, 7, 20, 33, 23};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> theoreticalValue = {16, 1, 13, 20, 17, 12, 14, 21, 11, 12, 2, 21, 15, 18, 16, 14, 18, 19, 5, 10, 19, 8, 10, 8, 7, 4, 16, 3, 10, 5, 6, 22, 9, 10, 21, 10, 12, 9};
    vector<int> practicalValue = {22, 1, 18, 29, 24, 15, 19, 30, 14, 16, 2, 29, 21, 26, 23, 20, 25, 27, 5, 13, 28, 7, 11, 8, 6, 4, 21, 3, 14, 4, 6, 32, 8, 10, 31, 12, 17, 9};
    vector<int> expire = {29, 6, 22, 36, 30, 21, 26, 38, 18, 21, 4, 38, 29, 35, 28, 24, 32, 33, 6, 17, 37, 13, 17, 15, 10, 7, 28, 3, 17, 10, 12, 42, 12, 13, 40, 20, 21, 14};
    int skillBound = 22;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 27, 25, 18, 30, 24, 21, 23, 37, 33, 22, 35, 19, 8, 5, 9, 36, 2, 6, 15, 12, 0, 14, 4, 16, 13, 17, 20, 3, 7, 34, 31};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> theoreticalValue = {13, 12, 20, 19, 15, 10, 13, 13, 6, 5, 16, 11, 19, 23, 10, 22, 8, 7, 21, 12, 9, 12, 3, 5, 14, 8, 23, 9, 19, 5, 6, 2, 23, 1, 4, 6, 18, 13, 17};
    vector<int> practicalValue = {19, 15, 25, 23, 20, 12, 16, 18, 6, 4, 20, 14, 22, 26, 13, 26, 10, 9, 25, 14, 12, 16, 2, 3, 19, 9, 27, 11, 24, 5, 8, 2, 28, 1, 3, 7, 21, 17, 20};
    vector<int> expire = {28, 24, 36, 36, 30, 21, 24, 27, 10, 10, 33, 22, 32, 37, 21, 39, 17, 12, 40, 22, 16, 23, 8, 8, 27, 14, 40, 19, 34, 11, 15, 7, 41, 2, 4, 13, 33, 26, 33};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 31, 22, 34, 9, 29, 8, 35, 30, 17, 16, 27, 5, 14, 11, 1, 6, 37, 7, 24, 4, 10, 38, 36, 12, 3, 28, 2, 18, 15, 13};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> theoreticalValue = {21, 5, 2, 15, 3, 27, 25, 24, 20, 17, 6, 9, 5, 1, 14, 8, 26, 6, 1, 13, 6, 1, 11, 16, 16, 7, 28, 11, 23, 2, 21, 19, 10, 22, 11, 12, 18, 17, 4, 12};
    vector<int> practicalValue = {21, 4, 2, 16, 3, 25, 24, 23, 20, 18, 6, 10, 5, 2, 15, 9, 24, 5, 0, 14, 7, 1, 10, 18, 17, 8, 25, 12, 23, 3, 22, 20, 10, 23, 11, 13, 20, 19, 4, 12};
    vector<int> expire = {35, 8, 9, 28, 12, 41, 40, 42, 37, 28, 16, 21, 14, 5, 29, 19, 44, 14, 4, 26, 16, 4, 18, 29, 30, 16, 44, 21, 38, 6, 35, 35, 18, 35, 21, 25, 32, 29, 11, 20};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 2, 4, 38, 12, 10, 20, 25, 15, 11, 32, 34, 27, 35, 19, 14, 3, 24, 9, 37, 36, 31, 8, 0, 30, 33, 28, 7, 6, 16, 5};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> theoreticalValue = {21, 25, 5, 13, 6, 8, 10, 18, 1, 5, 11, 9, 10, 7, 3, 27, 24, 5, 22, 24, 1, 1, 20, 6, 17, 14, 9, 26, 16, 2, 1, 9, 16, 19, 15, 19, 19, 12, 18, 4, 23};
    vector<int> practicalValue = {24, 27, 7, 15, 9, 10, 12, 19, 3, 6, 14, 12, 13, 10, 5, 28, 26, 5, 25, 27, 1, 2, 23, 8, 17, 15, 10, 27, 15, 4, 0, 11, 16, 21, 15, 20, 22, 15, 18, 5, 26};
    vector<int> expire = {35, 45, 11, 27, 16, 18, 23, 32, 4, 9, 20, 22, 22, 14, 8, 41, 40, 14, 41, 40, 2, 3, 34, 11, 27, 27, 18, 40, 31, 6, 3, 20, 30, 36, 28, 31, 38, 23, 31, 13, 39};
    int skillBound = 27;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 21, 8, 29, 14, 39, 9, 2, 23, 4, 13, 5, 31, 6, 12, 10, 37, 3, 25, 34, 32, 24, 38, 7, 35, 33, 36, 22, 0, 18, 40, 16, 1, 27, 15};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> theoreticalValue = {21, 6, 18, 15, 21, 2, 10, 7, 27, 2, 29, 1, 21, 3, 5, 19, 25, 20, 21, 14, 5, 7, 12, 28, 27, 11, 0, 21, 11, 21, 24, 17, 29, 26, 22, 13, 23, 27, 9, 16, 8, 4};
    vector<int> practicalValue = {22, 7, 15, 14, 17, 1, 9, 8, 26, 2, 29, 1, 19, 3, 5, 16, 24, 16, 18, 13, 6, 7, 12, 28, 27, 10, 1, 21, 11, 20, 24, 15, 28, 25, 23, 12, 24, 28, 8, 15, 8, 4};
    vector<int> expire = {33, 12, 28, 26, 27, 4, 17, 14, 43, 10, 46, 6, 33, 7, 8, 24, 36, 30, 27, 19, 9, 14, 23, 46, 40, 19, 3, 31, 17, 34, 38, 24, 43, 39, 37, 19, 37, 44, 14, 21, 18, 8};
    int skillBound = 29;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 9, 13, 41, 14, 20, 1, 7, 40, 38, 6, 25, 28, 22, 35, 19, 3, 39, 31, 2, 15, 17, 4, 18, 12, 29, 27, 0, 34, 36, 30, 16, 33, 8, 24, 23, 10};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> theoreticalValue = {20, 4, 22, 6, 11, 29, 12, 21, 10, 26, 19, 10, 13, 30, 16, 25, 7, 23, 24, 5, 22, 27, 18, 4, 24, 27, 14, 31, 8, 28, 1, 15, 9, 12, 2, 4, 6, 13, 18, 17, 6, 3, 25};
    vector<int> practicalValue = {19, 2, 22, 7, 11, 28, 12, 20, 10, 26, 19, 9, 14, 29, 15, 26, 8, 22, 23, 4, 21, 26, 17, 3, 24, 27, 14, 30, 9, 28, 1, 15, 9, 11, 1, 4, 6, 13, 18, 16, 5, 2, 25};
    vector<int> expire = {30, 6, 33, 14, 19, 47, 22, 30, 17, 40, 32, 16, 21, 48, 26, 39, 11, 34, 37, 13, 33, 42, 31, 9, 36, 44, 25, 49, 17, 46, 2, 22, 13, 17, 7, 9, 12, 21, 32, 30, 14, 5, 37};
    int skillBound = 30;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 34, 41, 23, 19, 40, 36, 3, 16, 28, 32, 8, 4, 6, 37, 26, 31, 14, 39, 22, 38, 10, 0, 7, 20, 17, 18, 24, 42, 9, 25, 29, 5, 13, 27};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> theoreticalValue = {21, 12, 3, 8, 2, 4, 3, 22, 11, 19, 15, 19, 9, 17, 10, 26, 24, 5, 6, 20, 4, 10, 3, 4, 3, 22, 19, 23, 1, 0, 25, 7, 4, 20, 14, 0, 4, 12, 4, 18, 7, 24, 13, 16};
    vector<int> practicalValue = {27, 19, 6, 16, 3, 12, 5, 27, 18, 26, 22, 25, 16, 23, 17, 32, 29, 13, 14, 27, 9, 16, 3, 10, 4, 28, 24, 28, 2, 1, 31, 15, 7, 26, 21, 2, 8, 18, 11, 24, 14, 30, 20, 23};
    vector<int> expire = {38, 26, 10, 20, 10, 18, 11, 42, 24, 36, 29, 36, 21, 31, 24, 45, 47, 21, 17, 39, 16, 22, 9, 12, 10, 43, 36, 41, 6, 3, 49, 23, 15, 35, 28, 8, 12, 27, 17, 32, 20, 42, 27, 29};
    int skillBound = 26;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 28, 4, 24, 6, 2, 32, 36, 20, 23, 38, 5, 17, 18, 31, 3, 12, 14, 8, 1, 42, 34, 10, 43, 13, 39, 11, 33, 0, 7, 27, 16, 41, 30, 15};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> theoreticalValue = {25, 5, 16, 12, 23, 3, 17, 18, 24, 13, 9, 4, 8, 1, 20, 10, 20, 13, 27, 14, 6, 24, 2, 19, 15, 28, 6, 11, 20, 7, 12, 19, 0, 26, 7, 28, 9, 21, 0, 18, 19, 13, 3, 3, 22};
    vector<int> practicalValue = {25, 5, 17, 13, 24, 3, 18, 18, 24, 13, 11, 5, 9, 2, 22, 12, 24, 15, 25, 16, 6, 25, 2, 19, 16, 26, 5, 12, 23, 7, 12, 20, 2, 25, 8, 27, 10, 24, 1, 19, 21, 14, 2, 4, 24};
    vector<int> expire = {41, 15, 31, 25, 44, 7, 33, 30, 39, 24, 21, 12, 18, 6, 38, 23, 38, 26, 44, 26, 12, 43, 9, 30, 26, 46, 10, 21, 38, 15, 22, 33, 3, 45, 19, 45, 21, 40, 6, 29, 37, 28, 9, 8, 43};
    int skillBound = 27;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 13, 22, 5, 43, 11, 1, 20, 29, 34, 12, 36, 10, 15, 27, 3, 41, 17, 19, 24, 2, 6, 39, 31, 40, 14, 28, 37, 44, 4, 8, 0, 33, 18, 25, 35};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> theoreticalValue = {4, 20, 29, 28, 23, 4, 18, 27, 14, 24, 16, 3, 28, 9, 30, 31, 10, 12, 17, 19, 2, 25, 31, 26, 5, 12, 11, 13, 15, 6, 10, 27, 2, 4, 7, 27, 31, 8, 17, 26, 1, 21, 9, 22, 10, 9};
    vector<int> practicalValue = {7, 20, 29, 27, 22, 5, 19, 27, 15, 23, 17, 4, 28, 8, 30, 32, 11, 14, 18, 19, 2, 23, 30, 24, 7, 13, 12, 14, 16, 7, 10, 26, 3, 6, 7, 25, 31, 7, 17, 25, 1, 21, 7, 22, 9, 9};
    vector<int> expire = {10, 33, 42, 43, 37, 6, 33, 41, 27, 39, 24, 10, 43, 13, 46, 47, 22, 26, 28, 28, 5, 40, 46, 41, 12, 21, 24, 27, 23, 9, 17, 44, 4, 9, 13, 38, 45, 13, 29, 37, 5, 34, 12, 37, 15, 19};
    int skillBound = 31;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 20, 32, 11, 5, 33, 24, 29, 34, 37, 13, 44, 30, 16, 26, 25, 27, 8, 28, 10, 18, 6, 19, 1, 41, 43, 4, 9, 21, 23, 35, 31, 3, 12, 2, 14, 36};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> theoreticalValue = {24, 14, 27, 25, 7, 4, 13, 9, 26, 25, 18, 22, 23, 8, 12, 17, 9, 24, 16, 5, 1, 29, 4, 24, 20, 15, 3, 13, 2, 28, 13, 10, 21, 7, 21, 24, 19, 4, 21, 11, 11, 6, 27, 28, 15, 9, 19};
    vector<int> practicalValue = {26, 14, 34, 30, 4, 1, 13, 9, 32, 31, 19, 25, 25, 6, 11, 18, 8, 27, 17, 4, 0, 36, 3, 28, 21, 16, 1, 14, 1, 35, 12, 10, 24, 5, 23, 29, 21, 2, 22, 11, 10, 4, 33, 36, 15, 7, 20};
    vector<int> expire = {37, 28, 45, 45, 15, 9, 22, 18, 42, 43, 30, 35, 36, 11, 23, 32, 13, 41, 25, 8, 4, 48, 9, 43, 36, 29, 5, 24, 8, 47, 22, 17, 38, 13, 33, 41, 33, 11, 32, 22, 20, 9, 48, 49, 29, 14, 29};
    int skillBound = 29;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 28, 26, 37, 22, 19, 41, 33, 13, 45, 16, 7, 31, 39, 14, 30, 6, 1, 44, 25, 18, 15, 10, 46, 24, 38, 34, 32, 11, 12, 0, 17, 23, 35, 3, 9, 8, 42, 2, 29, 21};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> theoreticalValue = {28, 24, 6, 30, 23, 17, 26, 34, 11, 25, 22, 15, 13, 29, 8, 14, 29, 2, 22, 24, 14, 31, 21, 32, 33, 28, 5, 23, 20, 16, 5, 9, 19, 10, 1, 7, 6, 12, 33, 27, 18, 4, 20, 23, 35, 18, 3, 9};
    vector<int> practicalValue = {25, 21, 6, 27, 20, 13, 23, 30, 9, 22, 17, 12, 11, 26, 7, 11, 27, 1, 16, 22, 12, 27, 16, 28, 29, 24, 4, 19, 15, 13, 5, 8, 15, 9, 1, 7, 7, 10, 28, 24, 14, 3, 16, 18, 30, 15, 2, 7};
    vector<int> expire = {43, 35, 10, 45, 38, 27, 37, 50, 19, 38, 35, 24, 17, 43, 13, 17, 41, 7, 31, 37, 23, 49, 33, 48, 46, 41, 5, 35, 26, 26, 7, 14, 28, 15, 2, 9, 11, 19, 46, 38, 25, 4, 26, 31, 50, 24, 7, 11};
    int skillBound = 30;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 17, 46, 41, 26, 30, 2, 35, 14, 31, 33, 8, 37, 12, 15, 11, 29, 5, 40, 32, 28, 22, 10, 43, 27, 4, 1, 9, 6, 39, 0, 13, 3, 21, 23, 24, 7};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> theoreticalValue = {25, 14, 23, 27, 27, 32, 15, 12, 33, 32, 30, 13, 11, 24, 22, 7, 18, 3, 8, 20, 16, 19, 10, 17, 32, 1, 9, 20, 2, 6, 13, 15, 7, 4, 10, 26, 34, 21, 8, 27, 8, 13, 29, 28, 17, 8, 5, 9, 31};
    vector<int> practicalValue = {23, 14, 22, 24, 26, 31, 15, 10, 33, 32, 28, 12, 10, 23, 21, 3, 18, 1, 5, 19, 16, 19, 10, 17, 30, 0, 8, 20, 0, 2, 13, 16, 4, 1, 9, 24, 34, 20, 7, 25, 6, 11, 27, 27, 16, 4, 1, 9, 29};
    vector<int> expire = {41, 27, 34, 43, 46, 46, 28, 22, 50, 47, 43, 25, 22, 39, 33, 13, 33, 7, 12, 32, 27, 34, 20, 27, 47, 1, 19, 32, 4, 9, 25, 28, 10, 10, 18, 41, 50, 34, 16, 40, 14, 20, 45, 47, 27, 10, 5, 16, 46};
    int skillBound = 34;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 28, 17, 33, 46, 29, 15, 32, 18, 40, 38, 26, 34, 12, 7, 41, 11, 30, 1, 6, 20, 23, 16, 21, 19, 37, 14, 2, 13, 0, 35, 39, 4, 43, 42, 10, 48, 24, 5, 9, 8, 36};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> theoreticalValue = {1, 30, 16, 26, 30, 30, 28, 33, 12, 3, 1, 14, 2, 12, 32, 20, 9, 11, 3, 24, 19, 14, 30, 15, 27, 3, 8, 18, 30, 13, 10, 12, 21, 6, 14, 4, 28, 22, 17, 3, 22, 31, 7, 27, 23, 25, 24, 5, 29, 20};
    vector<int> practicalValue = {1, 34, 19, 27, 33, 35, 31, 37, 15, 7, 2, 17, 3, 14, 37, 22, 11, 12, 4, 26, 22, 18, 37, 19, 29, 5, 10, 21, 36, 16, 11, 13, 23, 8, 19, 7, 30, 25, 20, 6, 24, 37, 9, 28, 26, 27, 27, 8, 32, 23};
    vector<int> expire = {6, 49, 26, 40, 48, 49, 48, 50, 21, 10, 3, 22, 7, 19, 50, 28, 15, 20, 10, 39, 33, 28, 48, 27, 43, 12, 16, 28, 50, 22, 15, 23, 30, 14, 23, 9, 41, 33, 29, 9, 33, 48, 12, 42, 33, 42, 36, 16, 42, 34};
    int skillBound = 33;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 12, 18, 25, 39, 35, 47, 33, 42, 26, 16, 30, 17, 31, 13, 8, 29, 11, 21, 23, 2, 38, 27, 20, 15, 32, 40, 37, 44, 19, 45, 3, 43, 24, 36, 6, 48, 4, 1, 5, 28, 41, 14, 7};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> theoreticalValue = {13, 2, 11, 19, 18, 5, 2, 18, 19, 15, 20, 19, 4, 12, 5, 10, 1, 19, 12, 8, 14, 7, 3, 12, 2, 13, 6, 19, 7, 15, 5, 17, 19, 9, 16, 5, 7, 16, 18, 21, 11};
    vector<int> practicalValue = {7, 0, 5, 12, 10, 3, 1, 9, 12, 7, 15, 13, 1, 5, 2, 5, 0, 14, 5, 4, 7, 4, 1, 6, 0, 7, 4, 12, 4, 7, 3, 8, 13, 5, 8, 1, 4, 8, 11, 16, 5};
    vector<int> expire = {25, 2, 22, 35, 38, 15, 10, 32, 40, 33, 42, 40, 10, 21, 11, 20, 3, 41, 20, 19, 27, 19, 9, 27, 9, 28, 12, 40, 13, 31, 14, 30, 39, 21, 29, 9, 18, 33, 33, 45, 21};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 1, 22, 12, 14, 5, 26, 21, 19, 33, 15, 2, 23, 0, 20, 9, 34, 31, 7, 4, 38, 3, 11, 17, 10, 39};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> theoreticalValue = {21, 17, 1, 6, 1, 0, 13, 18, 15, 7, 22, 16, 10, 3, 17, 8, 0, 7, 0, 9, 23, 19, 25, 25, 12, 22, 2, 20, 4, 2, 10, 11, 24, 7, 22, 14, 5, 17, 21, 15, 6, 2};
    vector<int> practicalValue = {13, 9, 2, 4, 1, 1, 8, 11, 8, 5, 16, 9, 7, 4, 10, 5, 1, 5, 0, 6, 16, 12, 17, 17, 8, 15, 3, 12, 4, 3, 7, 8, 17, 4, 14, 8, 4, 9, 13, 8, 4, 4};
    vector<int> expire = {34, 31, 9, 15, 6, 6, 25, 32, 30, 16, 44, 27, 21, 14, 34, 20, 2, 21, 4, 21, 42, 32, 45, 46, 27, 42, 7, 33, 13, 7, 21, 26, 45, 16, 42, 27, 13, 31, 36, 31, 16, 13};
    int skillBound = 17;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 26, 13, 28, 36, 3, 9, 15, 19, 12, 31, 24, 6, 35, 8, 11, 14, 7, 21, 27, 0, 34, 25, 20, 32};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> theoreticalValue = {8, 12, 2, 15, 10, 4, 7, 11, 5, 15, 6, 10, 5, 1, 7, 16, 3, 16, 7, 2, 13, 10, 4, 9, 16, 7, 14, 13, 12, 16, 7, 16, 10, 16, 2, 7, 10, 4, 0, 10, 13, 7, 5};
    vector<int> practicalValue = {10, 13, 3, 19, 13, 5, 8, 13, 6, 18, 7, 13, 5, 2, 9, 21, 4, 21, 7, 2, 17, 13, 5, 10, 20, 7, 17, 16, 14, 21, 8, 21, 12, 21, 2, 7, 11, 5, 1, 13, 15, 9, 6};
    vector<int> expire = {26, 32, 11, 40, 29, 10, 21, 33, 14, 40, 15, 29, 16, 5, 23, 42, 6, 45, 21, 9, 35, 27, 14, 25, 38, 20, 38, 33, 34, 40, 23, 40, 26, 48, 9, 19, 27, 11, 2, 26, 37, 25, 13};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 13, 2, 16, 5, 8, 10, 6, 14, 0, 23, 36, 32, 7, 28, 40, 27, 26, 9, 3, 24};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> theoreticalValue = {0, 8, 7, 12, 0, 5, 2, 10, 14, 1, 9, 15, 11, 10, 0, 8, 0, 13, 16, 16, 14, 5, 18, 17, 8, 19, 3, 7, 10, 8, 4, 12, 12, 6, 6, 1, 7, 7, 8, 5, 19, 8, 0, 2};
    vector<int> practicalValue = {3, 15, 12, 19, 3, 9, 6, 16, 21, 4, 15, 22, 18, 17, 2, 13, 2, 20, 23, 23, 21, 11, 24, 24, 14, 25, 8, 11, 15, 13, 8, 19, 19, 11, 11, 5, 11, 11, 13, 10, 25, 14, 1, 7};
    vector<int> expire = {5, 31, 24, 35, 6, 13, 13, 35, 43, 7, 28, 40, 32, 35, 5, 22, 5, 40, 41, 40, 36, 15, 48, 44, 28, 48, 15, 20, 33, 26, 17, 37, 33, 20, 18, 13, 21, 17, 24, 16, 49, 29, 6, 11};
    int skillBound = 19;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 14, 0, 9, 35, 6, 43, 26, 30, 5, 39, 33, 2, 15, 24, 10, 7, 13, 12, 3, 17, 8, 11, 18, 23, 22, 25};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> theoreticalValue = {1, 13, 18, 6, 6, 10, 10, 20, 7, 23, 18, 19, 23, 8, 15, 5, 3, 23, 0, 17, 0, 19, 20, 22, 11, 9, 15, 16, 3, 14, 23, 23, 3, 21, 12, 13, 3, 8, 4, 2, 24, 15, 14, 7, 15};
    vector<int> practicalValue = {3, 8, 12, 5, 5, 7, 7, 16, 5, 18, 13, 15, 18, 5, 10, 4, 3, 20, 2, 11, 1, 14, 16, 18, 8, 7, 9, 10, 3, 8, 21, 19, 3, 17, 8, 8, 3, 6, 4, 3, 22, 10, 8, 5, 9};
    vector<int> expire = {3, 23, 38, 18, 14, 25, 22, 37, 17, 41, 39, 35, 42, 15, 30, 14, 10, 44, 8, 35, 6, 37, 42, 39, 23, 21, 30, 30, 10, 29, 48, 43, 8, 43, 22, 28, 11, 19, 13, 5, 45, 29, 25, 18, 33};
    int skillBound = 22;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 18, 0, 39, 16, 38, 15, 3, 8, 37, 25, 5, 24, 34, 1, 29, 26, 27, 19, 2, 10, 21, 11, 7, 33, 23, 31, 17, 30, 40};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> theoreticalValue = {15, 11, 21, 18, 9, 5, 16, 25, 15, 14, 3, 1, 13, 9, 16, 23, 3, 22, 12, 17, 24, 20, 25, 19, 3, 3, 20, 7, 15, 10, 7, 17, 26, 2, 17, 17, 20, 1, 8, 6, 4, 26, 13, 7, 8, 26};
    vector<int> practicalValue = {16, 14, 22, 18, 12, 6, 16, 24, 15, 15, 4, 1, 14, 13, 17, 23, 3, 23, 14, 17, 23, 20, 24, 19, 4, 4, 21, 9, 16, 14, 8, 17, 26, 2, 17, 18, 20, 1, 11, 7, 5, 25, 15, 10, 11, 24};
    vector<int> expire = {29, 25, 40, 38, 20, 14, 31, 48, 24, 27, 6, 3, 25, 23, 31, 44, 5, 43, 23, 31, 42, 35, 43, 39, 7, 11, 39, 15, 30, 18, 16, 31, 46, 8, 32, 35, 37, 4, 16, 15, 11, 50, 22, 18, 18, 46};
    int skillBound = 26;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 33, 16, 10, 40, 5, 39, 30, 27, 43, 38, 4, 13, 29, 1, 18, 12, 9, 0, 6, 19, 3, 23, 21, 26, 2, 17, 15, 20, 7, 41, 32};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> theoreticalValue = {20, 6, 19, 5, 25, 27, 10, 14, 19, 9, 18, 21, 1, 11, 27, 18, 15, 19, 26, 7, 21, 18, 27, 12, 8, 9, 22, 7, 14, 6, 23, 13, 22, 28, 17, 2, 7, 3, 4, 28, 21, 7, 16, 6, 27, 11, 24};
    vector<int> practicalValue = {15, 2, 13, 1, 18, 20, 6, 10, 15, 6, 12, 15, 0, 7, 20, 11, 10, 14, 19, 4, 15, 11, 20, 8, 5, 6, 16, 3, 10, 2, 17, 9, 15, 21, 10, 0, 4, 0, 1, 21, 15, 4, 10, 2, 20, 7, 17};
    vector<int> expire = {33, 7, 34, 9, 46, 45, 21, 24, 34, 19, 32, 39, 1, 22, 48, 31, 25, 35, 46, 18, 36, 32, 50, 21, 15, 18, 40, 15, 27, 11, 39, 24, 36, 50, 28, 7, 13, 7, 5, 49, 39, 12, 24, 8, 43, 18, 42};
    int skillBound = 21;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 35, 37, 38, 3, 1, 27, 19, 24, 9, 6, 13, 23, 31, 7, 16, 42, 34, 15, 10, 2, 17, 0, 11, 26, 30, 46, 4, 18, 5, 33};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> theoreticalValue = {12, 21, 24, 17, 15, 13, 12, 15, 9, 21, 11, 12, 13, 10, 4, 14, 6, 29, 28, 11, 25, 8, 4, 14, 3, 19, 5, 15, 16, 12, 18, 24, 26, 20, 25, 7, 29, 2, 23, 11, 24, 22, 1, 12, 5, 27, 4, 25};
    vector<int> practicalValue = {11, 17, 19, 14, 14, 12, 12, 14, 7, 17, 9, 12, 12, 8, 4, 13, 6, 24, 24, 11, 21, 7, 2, 14, 2, 16, 6, 14, 14, 11, 15, 20, 23, 17, 22, 7, 24, 1, 18, 10, 18, 17, 0, 11, 5, 23, 3, 23};
    vector<int> expire = {23, 40, 41, 31, 28, 26, 21, 31, 16, 37, 19, 27, 25, 17, 9, 28, 13, 50, 48, 19, 46, 17, 10, 28, 5, 37, 8, 31, 33, 23, 37, 40, 45, 38, 43, 16, 50, 2, 42, 17, 42, 40, 4, 22, 12, 48, 5, 47};
    int skillBound = 24;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 37, 24, 46, 14, 44, 16, 35, 21, 8, 13, 10, 39, 0, 5, 15, 4, 28, 3, 30, 25, 33, 1, 41, 38, 2, 31, 20, 34, 32, 45, 18};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> theoreticalValue = {2, 15, 14, 2, 11, 24, 11, 0, 17, 24, 17, 5, 21, 2, 28, 12, 25, 10, 26, 23, 9, 8, 28, 8, 6, 6, 27, 3, 2, 5, 22, 17, 13, 2, 24, 12, 16, 11, 8, 3, 20, 18, 19, 2, 1, 4, 7, 17, 17};
    vector<int> practicalValue = {1, 14, 13, 2, 9, 23, 10, 0, 19, 24, 17, 4, 23, 3, 28, 11, 25, 8, 26, 23, 8, 7, 28, 7, 6, 5, 27, 4, 2, 5, 23, 18, 12, 3, 25, 11, 15, 11, 6, 4, 22, 20, 21, 2, 0, 4, 6, 16, 16};
    vector<int> expire = {7, 33, 30, 10, 27, 47, 26, 2, 35, 47, 37, 16, 41, 8, 49, 27, 48, 22, 47, 46, 23, 24, 50, 21, 15, 16, 50, 12, 12, 13, 42, 37, 29, 12, 47, 27, 34, 30, 20, 16, 39, 36, 43, 6, 5, 14, 20, 34, 37};
    int skillBound = 28;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 0, 3, 13, 27, 45, 11, 25, 46, 21, 20, 17, 4, 6, 15, 32, 2, 1, 36, 47, 10, 31, 8, 41, 42, 40, 12, 30, 19, 9, 16, 18, 26, 14};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> theoreticalValue = {5, 16, 2, 3, 12, 11, 8, 7, 14, 6, 7, 17, 7, 1, 3, 3, 5, 9, 2, 23, 14, 4, 22, 11, 18, 14, 1, 10, 19, 21, 5, 14, 11, 9, 20, 18, 1, 9, 13, 3, 1, 9, 1, 24, 18, 11, 7, 15, 20, 6};
    vector<int> practicalValue = {5, 18, 2, 2, 14, 14, 8, 7, 15, 5, 8, 19, 6, 2, 2, 2, 4, 11, 2, 25, 15, 2, 24, 14, 22, 15, 1, 12, 22, 23, 3, 16, 13, 11, 22, 21, 2, 9, 15, 2, 2, 10, 1, 25, 20, 13, 8, 17, 22, 6};
    vector<int> expire = {20, 40, 10, 17, 32, 30, 29, 22, 38, 19, 20, 42, 22, 7, 12, 12, 18, 28, 8, 50, 38, 19, 50, 32, 45, 37, 2, 32, 44, 50, 19, 39, 32, 32, 50, 47, 9, 24, 34, 9, 6, 29, 6, 50, 47, 31, 27, 39, 46, 18};
    int skillBound = 24;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 2, 3, 21, 30, 16, 0, 49, 7, 6, 37, 41, 17, 27, 32, 4, 38, 31, 47, 1, 11, 44, 35, 28, 34, 29, 22, 19, 43};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> theoreticalValue = {12, 14, 14, 13, 7, 11, 5, 14, 10, 13, 50, 8, 10, 7, 1, 4, 3, 10, 7, 7, 0, 5, 50, 1, 34, 1, 6, 8, 8, 2, 6, 6, 2, 13, 3, 2, 4, 9, 7, 37, 44, 2, 8, 13, 12, 13, 13, 20, 13, 2};
    vector<int> practicalValue = {15, 20, 20, 17, 11, 14, 14, 45, 23, 15, 21, 12, 48, 12, 1, 8, 6, 13, 11, 10, 0, 8, 16, 2, 39, 0, 9, 12, 12, 6, 10, 9, 5, 16, 6, 4, 7, 12, 11, 29, 16, 3, 7, 15, 14, 19, 19, 47, 18, 4};
    vector<int> expire = {36, 42, 45, 41, 22, 33, 38, 34, 12, 38, 16, 24, 26, 26, 4, 16, 15, 29, 23, 20, 2, 15, 17, 11, 13, 7, 19, 32, 24, 13, 20, 23, 14, 38, 12, 8, 18, 31, 23, 27, 0, 11, 4, 35, 32, 37, 41, 30, 39, 7};
    int skillBound = 40;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> theoreticalValue = {16, 12, 1, 11, 2, 5, 41, 12, 7, 3, 26, 29, 37, 1, 8, 4, 21, 11, 25, 11, 42, 13, 7, 10, 26, 5, 40, 7, 23, 9, 10, 16, 25, 15, 36, 28, 4, 4, 8, 18, 14, 1, 3, 6, 5, 4, 2, 7, 47, 18};
    vector<int> practicalValue = {10, 35, 0, 12, 4, 9, 49, 14, 9, 6, 3, 43, 48, 2, 19, 6, 21, 13, 40, 11, 28, 14, 11, 40, 26, 8, 44, 11, 1, 12, 12, 8, 38, 31, 29, 7, 5, 7, 11, 19, 15, 1, 5, 9, 8, 2, 3, 10, 19, 24};
    vector<int> expire = {42, 2, 4, 24, 6, 15, 14, 24, 15, 10, 19, 16, 15, 10, 38, 14, 0, 24, 40, 12, 40, 24, 18, 11, 11, 16, 24, 23, 39, 19, 23, 16, 48, 32, 50, 43, 8, 15, 25, 13, 32, 4, 12, 20, 15, 23, 8, 15, 42, 19};
    int skillBound = 39;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> theoreticalValue = {4, 1, 21, 1, 5, 8, 9, 2, 7, 1, 36, 19, 1, 3, 45, 23, 4, 46, 26, 36, 3, 7, 3, 35, 41, 28, 8, 9, 6, 5, 2, 8, 15, 38, 16, 20, 42, 1, 10, 3, 7, 10, 30, 0, 49, 42, 8, 7, 42, 26};
    vector<int> practicalValue = {7, 3, 3, 28, 8, 13, 14, 4, 11, 2, 29, 18, 2, 26, 18, 30, 7, 23, 43, 36, 25, 10, 6, 38, 19, 44, 43, 14, 10, 9, 5, 11, 40, 15, 49, 33, 24, 3, 16, 6, 10, 15, 0, 1, 47, 21, 12, 39, 39, 23};
    vector<int> expire = {14, 11, 47, 37, 16, 24, 26, 9, 21, 2, 2, 9, 10, 32, 31, 26, 15, 32, 7, 34, 12, 20, 12, 24, 35, 4, 22, 23, 20, 18, 10, 25, 42, 1, 36, 48, 8, 10, 27, 16, 15, 25, 47, 2, 12, 7, 23, 11, 35, 15};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> theoreticalValue = {45, 10, 3, 15, 14, 11, 26, 29, 16, 0, 4, 10, 17, 6, 15, 12, 11, 16, 9, 0, 9, 11, 10, 1, 33, 11, 11, 7, 1, 8, 14, 22, 50, 14, 13, 2, 15, 49, 10, 13, 7, 11, 5, 22, 20, 6, 5, 7, 28, 16};
    vector<int> practicalValue = {17, 46, 3, 44, 13, 10, 32, 16, 15, 2, 4, 10, 32, 6, 21, 11, 10, 46, 8, 1, 12, 10, 9, 2, 36, 10, 10, 2, 38, 7, 14, 21, 30, 33, 11, 2, 15, 47, 9, 12, 7, 9, 5, 46, 45, 7, 6, 7, 18, 15};
    vector<int> expire = {26, 16, 10, 18, 26, 21, 26, 23, 33, 7, 12, 23, 17, 45, 50, 24, 24, 35, 19, 4, 15, 21, 16, 9, 8, 21, 25, 39, 19, 16, 26, 38, 9, 24, 25, 8, 32, 32, 17, 26, 50, 16, 10, 29, 1, 13, 14, 10, 1, 31};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> theoreticalValue = {21, 0, 12, 17, 50, 16, 41, 8, 18, 8, 21, 39, 8, 30, 14, 38, 11, 33, 7, 3, 14, 19, 50, 1, 29, 17, 50, 42, 33, 40, 30, 3, 22, 4, 34, 45, 30, 32, 2, 48, 17, 45, 18, 17, 27, 0, 43, 1, 21, 2};
    vector<int> practicalValue = {15, 1, 43, 11, 32, 25, 17, 37, 5, 36, 16, 2, 0, 22, 21, 20, 12, 2, 27, 0, 37, 39, 10, 26, 46, 35, 4, 11, 1, 3, 26, 2, 32, 3, 0, 13, 47, 48, 24, 9, 15, 2, 11, 25, 17, 1, 45, 1, 8, 1};
    vector<int> expire = {32, 7, 26, 6, 12, 38, 43, 14, 2, 16, 17, 42, 7, 14, 36, 27, 31, 37, 47, 36, 14, 39, 10, 1, 40, 20, 34, 12, 11, 30, 15, 7, 44, 12, 28, 24, 35, 43, 4, 46, 2, 50, 10, 24, 36, 5, 23, 3, 42, 11};
    int skillBound = 40;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> theoreticalValue = {17, 5, 2, 6, 20, 37, 15, 12, 11, 11, 4, 41, 22, 16, 12, 43, 13, 24, 18, 2, 6, 16, 16, 14, 10, 32, 11, 11, 22, 19, 5, 7, 1, 9, 14, 13, 8, 4, 36, 13, 14, 7, 7, 19, 7, 4, 11, 3, 21, 39};
    vector<int> practicalValue = {14, 2, 0, 3, 17, 1, 14, 10, 8, 9, 30, 3, 17, 14, 10, 26, 10, 28, 15, 1, 1, 50, 14, 12, 6, 13, 7, 8, 11, 17, 2, 13, 0, 5, 14, 40, 5, 1, 18, 11, 13, 5, 22, 16, 4, 2, 7, 1, 17, 46};
    vector<int> expire = {34, 7, 5, 15, 39, 32, 31, 25, 18, 18, 49, 44, 37, 32, 23, 0, 24, 50, 32, 47, 36, 14, 31, 26, 15, 7, 19, 19, 40, 39, 9, 12, 7, 16, 32, 8, 14, 6, 9, 28, 30, 14, 40, 34, 9, 12, 17, 10, 36, 12};
    int skillBound = 33;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> theoreticalValue = {45, 32, 25, 26, 30, 38, 5, 20, 31, 12, 44, 50, 21, 2, 9, 50, 26, 46, 33, 2, 15, 1, 23, 38, 41, 2, 22, 40, 4, 1, 40, 17, 43, 28, 23, 0, 6, 12, 27, 31, 21, 10, 49, 39, 18, 34, 46, 13, 9, 37};
    vector<int> practicalValue = {34, 27, 38, 45, 23, 19, 12, 20, 41, 42, 19, 16, 36, 2, 29, 43, 12, 47, 20, 2, 46, 9, 29, 23, 20, 1, 25, 11, 6, 0, 42, 38, 12, 18, 44, 42, 7, 39, 13, 16, 22, 43, 8, 43, 12, 6, 42, 9, 13, 32};
    vector<int> expire = {16, 47, 4, 38, 24, 39, 8, 20, 45, 14, 46, 38, 39, 6, 23, 35, 38, 40, 21, 5, 18, 27, 2, 37, 1, 3, 4, 40, 29, 7, 33, 21, 41, 31, 50, 40, 30, 14, 18, 2, 18, 10, 30, 25, 10, 36, 32, 15, 32, 46};
    int skillBound = 13;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> theoreticalValue = {20, 5, 8, 14, 17, 9, 2, 17, 9, 8, 50, 4, 11, 18, 18, 3, 15, 20, 8, 4, 1, 17, 20, 16, 20, 13, 19, 10, 1, 7, 11, 48, 8, 1, 6, 43, 20, 19, 1, 0, 19, 21, 12, 50, 20, 6, 23, 8, 16, 19};
    vector<int> practicalValue = {19, 5, 6, 14, 16, 10, 3, 15, 11, 9, 33, 4, 12, 16, 16, 4, 14, 21, 8, 4, 2, 16, 20, 23, 19, 13, 17, 11, 2, 6, 12, 29, 18, 1, 49, 15, 19, 38, 1, 25, 17, 21, 13, 47, 18, 6, 45, 7, 15, 16};
    vector<int> expire = {40, 10, 14, 27, 31, 15, 5, 31, 21, 14, 48, 7, 26, 28, 30, 9, 27, 44, 14, 9, 9, 30, 39, 35, 38, 28, 33, 17, 5, 15, 23, 24, 41, 40, 26, 37, 39, 36, 3, 25, 38, 45, 25, 28, 39, 11, 39, 12, 26, 35};
    int skillBound = 45;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> theoreticalValue = {10, 9, 7, 0, 4, 0, 1, 10, 3, 7, 9, 4, 3, 11, 13, 24, 4, 5, 2, 0, 0, 35, 35, 6, 10, 7, 3, 0, 12, 18, 7, 25, 3, 2, 17, 8, 0, 10, 30, 10, 4, 4, 8, 0, 17, 11, 8, 0, 12, 50};
    vector<int> practicalValue = {15, 14, 11, 2, 8, 1, 3, 48, 5, 11, 13, 7, 6, 17, 19, 15, 9, 9, 4, 3, 4, 30, 15, 10, 15, 11, 1, 0, 18, 2, 11, 15, 12, 3, 1, 12, 1, 15, 24, 16, 9, 26, 12, 3, 21, 3, 12, 1, 18, 23};
    vector<int> expire = {33, 33, 21, 11, 21, 7, 10, 0, 18, 22, 33, 19, 14, 39, 40, 22, 16, 22, 15, 10, 4, 24, 40, 25, 29, 24, 43, 3, 39, 18, 27, 38, 11, 10, 15, 28, 3, 30, 48, 32, 20, 10, 23, 9, 49, 40, 29, 8, 40, 40};
    int skillBound = 7;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 6, 18, 8, 12, 11, 4, 17, 23, 2};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> theoreticalValue = {2, 24, 2, 18, 23, 31, 1, 10, 29, 8, 33, 2, 5, 13, 18, 22, 9, 22, 3, 7, 7, 3, 3, 4, 1, 48, 2, 7, 41, 3, 6, 32, 1, 45, 4, 34, 8, 40, 1, 7, 20, 2, 9, 29, 7, 7, 37, 3, 33, 6};
    vector<int> practicalValue = {12, 44, 9, 29, 6, 44, 2, 50, 43, 16, 32, 2, 3, 27, 13, 37, 21, 50, 2, 6, 4, 3, 2, 3, 25, 31, 2, 5, 35, 2, 4, 47, 2, 4, 3, 47, 6, 17, 1, 49, 45, 2, 30, 7, 6, 5, 40, 18, 31, 4};
    vector<int> expire = {3, 10, 27, 25, 41, 23, 9, 14, 31, 28, 19, 13, 13, 30, 5, 6, 18, 13, 11, 19, 21, 5, 10, 12, 41, 50, 11, 22, 25, 11, 21, 12, 4, 6, 13, 14, 27, 32, 5, 14, 40, 9, 12, 20, 22, 16, 19, 33, 8, 17};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> theoreticalValue = {3, 49, 26, 13, 35, 49, 6, 17, 32, 15, 50, 23, 45, 44, 1, 25, 3, 40, 2, 47, 4, 50, 48, 28, 18, 5, 7, 1, 6, 18, 20, 35, 5, 4, 2, 2, 36, 43, 3, 14, 30, 3, 5, 22, 20, 4, 45, 35, 27, 1};
    vector<int> practicalValue = {29, 17, 22, 8, 20, 35, 15, 31, 34, 39, 3, 5, 37, 32, 2, 26, 7, 41, 3, 3, 46, 32, 47, 23, 47, 9, 10, 23, 10, 36, 31, 20, 9, 8, 3, 4, 4, 11, 6, 38, 7, 5, 9, 48, 36, 7, 1, 32, 1, 1};
    vector<int> expire = {16, 5, 33, 3, 48, 10, 47, 26, 11, 2, 13, 23, 7, 43, 4, 1, 14, 30, 8, 12, 19, 17, 7, 44, 17, 11, 16, 40, 20, 45, 8, 25, 20, 14, 9, 7, 7, 31, 12, 24, 16, 7, 18, 9, 37, 12, 15, 49, 13, 1};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 14, 18, 35, 41, 38, 45};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> theoreticalValue = {14, 0, 6, 9, 22, 7, 22, 17, 4, 4, 5, 0, 20, 11, 22, 10, 21, 14, 31, 10, 16, 14, 8, 22, 1, 14, 0, 16, 5, 6, 16, 19, 17, 2, 4, 21, 21, 3, 4, 12, 5, 22, 15, 22, 6, 2, 22, 18, 13, 15};
    vector<int> practicalValue = {12, 1, 9, 9, 23, 9, 24, 15, 3, 4, 8, 1, 19, 10, 24, 10, 20, 12, 9, 10, 14, 12, 9, 22, 2, 11, 1, 14, 7, 9, 14, 18, 16, 2, 6, 21, 20, 2, 5, 10, 9, 23, 13, 25, 9, 2, 23, 17, 10, 12};
    vector<int> expire = {36, 4, 18, 26, 50, 22, 50, 38, 10, 15, 18, 2, 45, 28, 47, 24, 40, 33, 35, 26, 35, 35, 23, 43, 11, 32, 5, 39, 12, 18, 39, 38, 38, 8, 11, 48, 42, 9, 13, 24, 19, 50, 31, 50, 16, 8, 46, 40, 31, 32};
    int skillBound = 12;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 24, 33, 37, 8, 9, 38, 34, 28, 10, 2, 5, 22, 3, 15, 13, 39, 48, 25, 0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> theoreticalValue = {2, 38, 33, 28, 18, 25, 19, 32, 0, 17, 49, 30, 19, 49, 16, 0, 2, 46, 48, 43, 4, 42, 34, 11, 21, 3, 19, 44, 41, 41, 8, 15, 0, 9, 20, 26, 1, 2, 35, 19, 39, 6, 18, 36, 12, 0, 40, 18, 28, 14};
    vector<int> practicalValue = {3, 25, 10, 42, 27, 1, 37, 19, 1, 23, 11, 27, 31, 36, 5, 1, 3, 20, 17, 40, 16, 32, 7, 50, 29, 39, 32, 6, 5, 50, 12, 41, 2, 50, 9, 0, 2, 3, 11, 31, 16, 8, 48, 20, 5, 1, 0, 43, 8, 46};
    vector<int> expire = {8, 44, 14, 7, 9, 50, 50, 5, 4, 19, 34, 31, 45, 8, 4, 2, 15, 9, 20, 27, 33, 16, 28, 16, 9, 10, 4, 3, 6, 7, 46, 11, 11, 16, 14, 48, 9, 6, 25, 35, 10, 37, 6, 16, 4, 6, 34, 22, 20, 7};
    int skillBound = 14;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> theoreticalValue = {39, 9, 10, 29, 19, 5, 29, 47, 47, 3, 15, 43, 19, 22, 4, 36, 5, 29, 44, 5, 2, 23, 10, 41, 30, 5, 18, 3, 37, 1, 35, 22, 4, 20, 9, 3, 12, 1, 3, 27, 41, 4, 0, 35, 32, 40, 42, 5, 15, 36};
    vector<int> practicalValue = {21, 45, 21, 1, 44, 7, 13, 50, 42, 33, 23, 3, 11, 7, 5, 47, 6, 30, 48, 7, 1, 49, 44, 2, 31, 6, 43, 2, 46, 1, 23, 41, 4, 39, 8, 3, 23, 1, 3, 29, 21, 4, 29, 34, 23, 35, 20, 5, 8, 1};
    vector<int> expire = {18, 32, 20, 8, 29, 18, 3, 43, 50, 13, 29, 24, 43, 35, 10, 9, 13, 14, 32, 13, 9, 38, 8, 34, 10, 16, 12, 9, 24, 3, 43, 35, 12, 43, 49, 9, 26, 4, 8, 0, 42, 13, 27, 8, 5, 6, 11, 10, 40, 22};
    int skillBound = 18;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> theoreticalValue = {12, 32, 34, 47, 28, 34, 18, 39, 42, 40, 1, 47, 18, 7, 1, 32, 13, 25, 44, 44, 5, 4, 15, 21, 11, 27, 7, 14, 43, 12, 8, 8, 40, 49, 12, 23, 10, 30, 27, 43, 3, 33, 1, 11, 7, 37, 9, 48, 29, 1};
    vector<int> practicalValue = {23, 31, 7, 21, 26, 15, 14, 17, 7, 43, 28, 8, 50, 38, 1, 34, 23, 20, 44, 2, 9, 10, 37, 3, 7, 21, 43, 39, 44, 47, 15, 47, 34, 49, 13, 11, 18, 33, 33, 20, 34, 15, 1, 4, 36, 44, 6, 27, 30, 45};
    vector<int> expire = {35, 34, 25, 50, 32, 11, 21, 32, 18, 0, 29, 47, 1, 1, 4, 30, 44, 22, 23, 47, 50, 2, 33, 25, 29, 44, 45, 17, 8, 50, 28, 32, 13, 30, 50, 25, 42, 2, 49, 25, 36, 36, 3, 31, 25, 33, 1, 32, 9, 46};
    int skillBound = 46;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> theoreticalValue = {19, 35, 3, 7, 12, 13, 8, 15, 4, 40, 34, 33, 8, 25, 18, 1, 6, 7, 16, 32, 20, 35, 4, 12, 6, 15, 1, 13, 14, 12, 5, 16, 6, 4, 27, 2, 7, 15, 17, 11, 50, 1, 26, 15, 6, 14, 10, 5, 9, 11};
    vector<int> practicalValue = {14, 0, 0, 2, 8, 30, 6, 41, 0, 14, 34, 30, 2, 6, 13, 0, 23, 2, 11, 42, 39, 0, 1, 6, 30, 49, 0, 7, 8, 6, 1, 11, 2, 30, 43, 0, 2, 10, 12, 5, 11, 0, 32, 10, 20, 9, 3, 2, 3, 4};
    vector<int> expire = {36, 45, 7, 15, 4, 4, 26, 0, 11, 47, 0, 17, 13, 31, 35, 2, 11, 40, 32, 25, 36, 11, 10, 18, 42, 22, 9, 26, 23, 24, 13, 30, 12, 28, 18, 7, 18, 23, 33, 24, 26, 8, 50, 30, 32, 23, 22, 16, 21, 18};
    int skillBound = 24;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> theoreticalValue = {36, 1, 6, 4, 17, 4, 0, 5, 2, 5, 4, 17, 29, 4, 37, 13, 11, 28, 19, 19, 15, 5, 38, 0, 11, 21, 32, 4, 14, 4, 3, 3, 1, 30, 24, 0, 50, 10, 26, 19, 6, 3, 2, 4, 48, 49, 3, 7, 18, 3};
    vector<int> practicalValue = {34, 1, 3, 6, 45, 45, 0, 38, 2, 7, 6, 10, 0, 6, 28, 29, 11, 26, 31, 26, 43, 13, 40, 1, 29, 46, 37, 7, 43, 4, 2, 38, 1, 13, 13, 1, 8, 22, 50, 30, 27, 3, 1, 5, 1, 44, 13, 29, 13, 2};
    vector<int> expire = {17, 4, 28, 15, 17, 25, 4, 6, 8, 24, 20, 15, 48, 14, 47, 21, 6, 44, 37, 40, 8, 33, 21, 8, 36, 14, 29, 18, 50, 18, 10, 42, 10, 45, 11, 8, 30, 25, 12, 24, 24, 14, 10, 14, 49, 11, 25, 19, 33, 9};
    int skillBound = 35;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> theoreticalValue = {6, 48, 21, 41, 27, 2, 27, 0, 11, 7, 15, 11, 6, 2, 7, 14, 8, 10, 46, 22, 8, 20, 12, 10, 20, 1, 31, 20, 17, 13, 13, 2, 16, 18, 17, 10, 9, 22, 19, 5, 12, 9, 3, 20, 20, 9, 4, 0, 21, 14};
    vector<int> practicalValue = {4, 1, 16, 39, 29, 2, 20, 34, 7, 5, 10, 43, 4, 2, 47, 9, 7, 7, 41, 16, 6, 15, 8, 7, 15, 1, 3, 15, 10, 1, 9, 9, 10, 12, 11, 7, 36, 16, 13, 3, 8, 7, 2, 15, 14, 36, 3, 14, 16, 10};
    vector<int> expire = {9, 23, 36, 0, 35, 3, 38, 35, 18, 9, 29, 38, 10, 6, 19, 26, 18, 20, 46, 38, 11, 33, 25, 15, 32, 8, 16, 34, 28, 49, 19, 34, 25, 30, 30, 21, 23, 39, 27, 7, 21, 13, 7, 39, 29, 26, 6, 31, 37, 22};
    int skillBound = 49;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> theoreticalValue = {12, 9, 16, 16, 1, 12, 25, 10, 7, 20, 20, 11, 25, 7, 49, 20, 14, 16, 2, 3, 22, 0, 19, 5, 21, 15, 17, 24, 8, 20, 20, 2, 10, 18, 26, 4, 24, 2, 2, 23, 4, 11, 6, 26, 12, 14, 13, 4, 23, 9};
    vector<int> practicalValue = {13, 10, 15, 16, 1, 14, 23, 11, 8, 21, 20, 13, 24, 7, 42, 21, 15, 15, 2, 4, 22, 0, 19, 5, 21, 15, 17, 23, 9, 21, 21, 3, 30, 18, 24, 4, 23, 2, 2, 23, 4, 12, 6, 25, 14, 15, 14, 5, 23, 10};
    vector<int> expire = {27, 24, 29, 34, 2, 23, 49, 24, 16, 37, 36, 26, 50, 18, 37, 39, 32, 28, 12, 7, 42, 3, 34, 12, 43, 30, 38, 44, 17, 39, 39, 8, 8, 35, 48, 16, 49, 10, 6, 45, 13, 25, 14, 50, 28, 30, 31, 10, 41, 23};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> theoreticalValue = {16, 6, 14, 36, 3, 43, 42, 2, 7, 15, 3, 8, 4, 1, 1, 3, 39, 7, 38, 43, 37, 3, 3, 2, 1, 47, 10, 8, 29, 14, 9, 34, 6, 4, 5, 13, 0, 11, 12, 9, 6, 9, 0, 7, 16, 5, 22, 2, 11, 9};
    vector<int> practicalValue = {10, 7, 10, 3, 6, 33, 47, 2, 7, 10, 5, 7, 7, 2, 2, 3, 15, 7, 12, 28, 29, 4, 5, 38, 37, 33, 8, 49, 15, 10, 7, 24, 7, 7, 7, 10, 1, 9, 10, 7, 6, 8, 34, 42, 10, 14, 13, 3, 9, 8};
    vector<int> expire = {32, 15, 29, 37, 11, 9, 3, 4, 16, 32, 10, 24, 15, 6, 7, 11, 28, 18, 24, 31, 31, 13, 13, 15, 10, 19, 23, 42, 22, 30, 18, 48, 15, 18, 14, 27, 3, 26, 26, 24, 9, 27, 43, 32, 31, 25, 9, 9, 26, 25};
    int skillBound = 49;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> theoreticalValue = {1, 49, 7, 7, 13, 4, 9, 9, 9, 11, 15, 9, 13, 3, 12, 20, 6, 9, 2, 32, 9, 16, 19, 1, 14, 7, 16, 8, 3, 1, 33, 10, 19, 34, 5, 39, 47, 17, 0, 46, 16, 30, 0, 7, 9, 15, 15, 12, 18, 9};
    vector<int> practicalValue = {2, 9, 7, 9, 18, 5, 15, 12, 15, 16, 20, 14, 18, 4, 16, 26, 6, 10, 2, 17, 11, 22, 25, 1, 19, 7, 22, 10, 3, 2, 50, 16, 24, 43, 5, 42, 42, 23, 1, 4, 21, 46, 1, 8, 15, 19, 19, 17, 24, 13};
    vector<int> expire = {11, 23, 15, 18, 33, 14, 28, 25, 22, 29, 37, 25, 33, 12, 32, 47, 18, 19, 11, 38, 20, 38, 42, 3, 36, 20, 39, 20, 12, 9, 33, 30, 42, 31, 10, 43, 35, 42, 4, 18, 37, 3, 3, 18, 24, 39, 37, 32, 43, 25};
    int skillBound = 10;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 18, 28, 13, 5, 34, 16, 2, 43, 3, 27, 20, 7, 49, 11, 6, 31};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> theoreticalValue = {25, 7, 4, 5, 14, 44, 28, 1, 8, 1, 10, 13, 1, 3, 4, 50, 34, 41, 4, 12, 6, 3, 29, 5, 49, 13, 11, 6, 27, 41, 7, 5, 6, 5, 4, 10, 25, 10, 6, 13, 2, 8, 47, 11, 11, 16, 9, 32, 0, 34};
    vector<int> practicalValue = {9, 31, 5, 20, 17, 27, 3, 1, 10, 1, 13, 41, 2, 26, 4, 20, 8, 0, 4, 16, 40, 3, 28, 6, 8, 16, 15, 8, 38, 28, 9, 9, 32, 6, 20, 26, 46, 34, 7, 16, 2, 11, 43, 44, 14, 20, 12, 8, 25, 31};
    vector<int> expire = {14, 10, 13, 40, 25, 36, 41, 3, 19, 6, 24, 30, 9, 36, 7, 14, 44, 40, 13, 24, 5, 9, 40, 11, 30, 28, 26, 13, 11, 12, 19, 42, 19, 12, 0, 50, 22, 20, 15, 27, 4, 19, 34, 40, 19, 11, 19, 36, 50, 21};
    int skillBound = 23;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> theoreticalValue = {18, 46, 29, 4, 43, 12, 48, 1, 35, 16, 15, 28, 27, 23, 19, 33, 19, 45, 29, 41, 28, 39, 0, 14, 31, 17, 33, 33, 44, 10, 29, 25, 0, 24, 2, 3, 14, 37, 22, 4, 8, 0, 43, 39, 17, 39, 25, 49, 30, 41};
    vector<int> practicalValue = {9, 27, 46, 46, 36, 50, 29, 25, 3, 36, 31, 5, 19, 5, 50, 16, 40, 13, 25, 33, 17, 23, 2, 11, 43, 18, 49, 1, 41, 50, 41, 26, 1, 10, 11, 17, 29, 29, 3, 17, 40, 20, 50, 14, 30, 24, 44, 10, 38, 15};
    vector<int> expire = {14, 42, 11, 37, 27, 29, 1, 4, 32, 48, 9, 18, 5, 48, 30, 34, 1, 47, 9, 31, 6, 5, 45, 27, 10, 48, 29, 44, 6, 34, 3, 16, 1, 33, 1, 16, 38, 38, 22, 22, 5, 20, 40, 23, 4, 36, 20, 31, 39, 29};
    int skillBound = 8;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> theoreticalValue = {43, 7, 9, 8, 3, 26, 21, 46, 30, 12, 9, 6, 40, 47, 2, 28, 35, 38, 1, 4, 11, 1, 13, 13, 35, 31, 2, 12, 13, 5, 7, 4, 1, 23, 21, 43, 10, 7, 38, 1, 39, 21, 11, 6, 7, 38, 12, 27, 24, 9};
    vector<int> practicalValue = {30, 9, 10, 9, 5, 20, 34, 13, 43, 45, 10, 8, 8, 31, 4, 19, 10, 44, 2, 7, 11, 2, 11, 11, 45, 46, 4, 11, 11, 7, 15, 6, 3, 27, 29, 2, 10, 40, 34, 1, 23, 6, 11, 9, 9, 33, 47, 21, 45, 9};
    vector<int> expire = {9, 20, 19, 19, 8, 26, 45, 2, 24, 4, 18, 18, 36, 3, 7, 45, 17, 44, 2, 15, 26, 3, 27, 26, 39, 13, 11, 23, 30, 10, 10, 13, 10, 39, 40, 17, 24, 17, 29, 3, 50, 35, 25, 15, 19, 50, 0, 1, 12, 20};
    int skillBound = 39;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> theoreticalValue = {25, 5, 3, 2, 1, 12, 24, 8, 8, 17, 12, 11, 2, 13, 9, 38, 13, 15, 13, 38, 3, 6, 5, 9, 0, 9, 30, 7, 36, 9, 7, 3, 10, 11, 11, 9, 14, 15, 1, 4, 10, 10, 7, 12, 14, 14, 14, 6, 5, 33};
    vector<int> practicalValue = {21, 1, 2, 1, 40, 12, 50, 7, 47, 11, 13, 11, 19, 13, 8, 46, 14, 13, 13, 41, 3, 5, 4, 9, 0, 7, 50, 6, 42, 8, 6, 32, 10, 12, 12, 8, 15, 17, 1, 4, 34, 10, 6, 2, 34, 15, 16, 5, 4, 41};
    vector<int> expire = {47, 34, 10, 9, 14, 25, 22, 15, 7, 25, 32, 26, 2, 31, 21, 4, 30, 10, 26, 29, 8, 9, 9, 23, 1, 19, 27, 16, 3, 16, 13, 12, 25, 26, 35, 19, 34, 37, 7, 12, 40, 21, 18, 39, 20, 35, 33, 17, 12, 34};
    int skillBound = 7;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38, 3, 2, 20, 39, 1, 21, 27, 7};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> theoreticalValue = {31, 21, 13, 32, 6, 30, 35, 25, 33, 18, 11, 10, 22, 27, 14, 23, 27, 28, 31, 20, 15, 6, 2, 24, 24, 29, 8, 4, 5, 16, 31, 3, 19, 34, 4, 11, 9, 35, 1, 23, 26, 23, 12, 17, 14, 11, 17, 32, 27, 7};
    vector<int> practicalValue = {28, 17, 12, 30, 6, 26, 32, 21, 31, 15, 10, 9, 17, 23, 12, 18, 24, 25, 29, 16, 14, 6, 2, 20, 21, 26, 7, 4, 5, 14, 27, 3, 15, 32, 4, 9, 8, 32, 1, 19, 21, 20, 11, 14, 13, 11, 14, 31, 22, 6};
    vector<int> expire = {50, 30, 23, 47, 11, 46, 50, 34, 50, 30, 21, 19, 30, 41, 23, 33, 43, 40, 49, 27, 26, 12, 7, 33, 38, 41, 11, 6, 9, 25, 46, 6, 29, 50, 11, 16, 17, 50, 3, 33, 35, 34, 16, 27, 22, 17, 30, 50, 41, 9};
    int skillBound = 48;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> theoreticalValue = {48, 7, 9, 16, 45, 36, 13, 18, 1, 16, 2, 27, 11, 13, 6, 10, 12, 4, 15, 16, 16, 2, 14, 29, 17, 28, 13, 23, 2, 3, 15, 37, 5, 12, 10, 11, 13, 14, 16, 16, 33, 8, 16, 13, 6, 12, 5, 35, 2, 4};
    vector<int> practicalValue = {43, 5, 6, 19, 34, 4, 12, 19, 1, 19, 1, 48, 17, 11, 20, 7, 9, 3, 14, 17, 14, 2, 13, 7, 19, 29, 10, 13, 1, 2, 15, 48, 3, 28, 7, 8, 10, 14, 18, 16, 49, 6, 19, 10, 4, 10, 3, 38, 2, 15};
    vector<int> expire = {26, 12, 13, 33, 29, 25, 24, 35, 8, 33, 3, 36, 21, 28, 9, 21, 21, 10, 27, 32, 0, 8, 27, 42, 40, 26, 24, 18, 6, 13, 26, 46, 13, 29, 20, 18, 27, 22, 36, 32, 44, 13, 33, 27, 11, 23, 8, 12, 4, 10};
    int skillBound = 45;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> theoreticalValue = {3, 2, 3, 7, 32, 4, 48, 18, 32, 24, 39, 33, 45, 1, 31, 1, 8, 4, 2, 5, 3, 6, 37, 46, 34, 25, 37, 48, 2, 35, 27, 8, 22, 33, 13, 29, 3, 44, 43, 45, 10, 1, 33, 7, 15, 6, 3, 21, 45, 8};
    vector<int> practicalValue = {5, 3, 5, 7, 20, 4, 7, 8, 16, 35, 33, 21, 26, 2, 43, 39, 10, 5, 3, 6, 4, 7, 13, 13, 25, 42, 32, 21, 10, 26, 47, 7, 13, 40, 11, 30, 5, 43, 2, 33, 12, 1, 40, 22, 11, 6, 5, 38, 22, 1};
    vector<int> expire = {14, 10, 14, 17, 15, 28, 31, 27, 17, 30, 14, 34, 6, 7, 17, 11, 27, 17, 6, 11, 8, 15, 27, 49, 1, 41, 44, 37, 11, 5, 45, 21, 24, 26, 9, 29, 8, 28, 0, 42, 28, 8, 43, 26, 17, 19, 7, 22, 17, 6};
    int skillBound = 32;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> theoreticalValue = {10, 4, 35, 2, 50, 22, 8, 37, 2, 1, 45, 10, 8, 8, 29, 6, 11, 1, 39, 1, 11, 32, 7, 4, 49, 46, 32, 2, 4, 8, 1, 34, 25, 35, 41, 33, 3, 34, 20, 6, 5, 28, 35, 48, 1, 3, 1, 4, 20, 22};
    vector<int> practicalValue = {17, 3, 11, 1, 19, 2, 32, 36, 1, 37, 2, 13, 16, 10, 36, 41, 12, 10, 21, 1, 5, 47, 0, 3, 38, 11, 10, 0, 5, 33, 24, 32, 49, 29, 37, 7, 4, 22, 8, 1, 43, 35, 11, 34, 46, 2, 14, 3, 17, 8};
    vector<int> expire = {4, 6, 19, 4, 12, 14, 36, 27, 10, 34, 31, 41, 19, 22, 49, 17, 45, 20, 31, 6, 23, 34, 3, 11, 26, 19, 39, 47, 25, 36, 4, 2, 31, 40, 6, 21, 43, 25, 9, 44, 9, 48, 37, 41, 27, 10, 49, 11, 13, 21};
    int skillBound = 11;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> theoreticalValue = {18, 12, 4, 22, 46, 2, 4, 16, 6, 25, 2, 3, 42, 0, 9, 45, 2, 35, 48, 24, 40, 6, 37, 2, 8, 7, 39, 45, 20, 13, 7, 1, 49, 24, 29, 27, 4, 6, 5, 1, 3, 6, 9, 37, 11, 20, 45, 39, 35, 1};
    vector<int> practicalValue = {12, 28, 2, 37, 1, 11, 41, 0, 47, 34, 2, 2, 14, 47, 25, 37, 38, 0, 39, 4, 9, 19, 16, 3, 35, 16, 5, 13, 18, 27, 19, 1, 25, 7, 15, 40, 20, 39, 2, 1, 2, 0, 20, 30, 50, 42, 7, 7, 45, 2};
    vector<int> expire = {48, 35, 10, 12, 14, 2, 36, 36, 19, 27, 10, 13, 13, 29, 40, 49, 44, 9, 35, 41, 37, 28, 36, 26, 7, 34, 47, 43, 15, 7, 46, 2, 41, 36, 42, 46, 33, 17, 15, 6, 12, 13, 24, 9, 14, 16, 29, 22, 32, 6};
    int skillBound = 22;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> theoreticalValue = {17, 14, 46, 13, 0, 5, 4, 11, 11, 9, 0, 6, 21, 27, 2, 5, 13, 0, 8, 9, 10, 4, 3, 10, 2, 34, 45, 28, 36, 36, 1, 30, 11, 12, 4, 45, 10, 13, 45, 4, 31, 16, 7, 13, 50, 0, 8, 15, 39, 10};
    vector<int> practicalValue = {1, 18, 26, 18, 1, 6, 5, 14, 13, 9, 2, 7, 11, 24, 3, 6, 16, 0, 8, 36, 11, 7, 4, 12, 3, 44, 0, 8, 45, 21, 3, 38, 24, 15, 4, 21, 9, 16, 36, 5, 10, 19, 8, 17, 24, 1, 25, 18, 7, 10};
    vector<int> expire = {23, 31, 35, 32, 8, 18, 17, 24, 26, 17, 7, 21, 6, 26, 7, 15, 29, 1, 22, 35, 22, 34, 11, 26, 7, 16, 14, 47, 30, 8, 9, 1, 50, 26, 9, 38, 22, 31, 14, 10, 50, 35, 16, 32, 43, 6, 24, 33, 2, 23};
    int skillBound = 37;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> theoreticalValue = {8, 5, 42, 3, 19, 9, 31, 6, 14, 26, 16, 21, 44, 1, 9, 43, 6, 2, 29, 9, 45, 30, 4, 34, 7, 33, 6, 37, 32, 11, 21, 8, 10, 8, 0, 7, 3, 29, 32, 9, 24, 2, 22, 31, 6, 49, 9, 23, 15, 8};
    vector<int> practicalValue = {7, 4, 30, 9, 21, 8, 9, 36, 6, 37, 5, 13, 26, 1, 11, 42, 5, 1, 13, 9, 24, 12, 3, 42, 6, 37, 5, 42, 12, 10, 34, 4, 11, 7, 14, 6, 2, 17, 9, 11, 30, 1, 42, 37, 7, 33, 10, 35, 42, 6};
    vector<int> expire = {18, 6, 30, 21, 32, 15, 37, 8, 35, 8, 36, 18, 4, 3, 18, 43, 8, 3, 41, 16, 41, 7, 10, 17, 10, 12, 11, 45, 42, 35, 47, 0, 25, 14, 5, 13, 9, 35, 49, 24, 33, 4, 33, 31, 39, 8, 16, 33, 28, 18};
    int skillBound = 36;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> theoreticalValue = {32, 16, 34, 39, 26, 14, 15, 27, 7, 24, 12, 47, 6, 32, 11, 0, 24, 32, 17, 10, 29, 35, 16, 2, 10, 12, 0, 2, 16, 2, 25, 47, 26, 27, 16, 20, 26, 25, 8, 19, 21, 0, 32, 31, 0, 11, 5, 1, 17, 48};
    vector<int> practicalValue = {39, 23, 3, 9, 15, 46, 23, 40, 13, 21, 39, 21, 39, 11, 19, 1, 24, 18, 17, 31, 28, 49, 36, 45, 44, 2, 0, 3, 4, 17, 31, 11, 21, 29, 9, 30, 38, 33, 24, 31, 38, 2, 24, 13, 4, 15, 29, 2, 38, 7};
    vector<int> expire = {50, 45, 7, 2, 23, 41, 35, 23, 13, 40, 31, 45, 41, 11, 24, 7, 18, 13, 29, 21, 31, 3, 29, 24, 10, 38, 4, 10, 42, 26, 24, 48, 24, 19, 6, 22, 11, 21, 12, 19, 2, 6, 26, 31, 23, 39, 28, 8, 4, 36};
    int skillBound = 34;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> theoreticalValue = {37, 7, 2, 7, 4, 1, 29, 2, 24, 10, 35, 46, 1, 49, 43, 6, 2, 2, 5, 38, 7, 41, 42, 29, 4, 0, 14, 38, 27, 43, 34, 8, 48, 3, 20, 0, 26, 6, 18, 29, 0, 3, 1, 35, 44, 36, 24, 30, 46, 21};
    vector<int> practicalValue = {40, 4, 2, 4, 22, 1, 49, 40, 39, 28, 45, 19, 1, 13, 21, 4, 10, 2, 3, 13, 15, 32, 2, 23, 3, 0, 4, 33, 40, 44, 6, 4, 7, 2, 29, 33, 35, 4, 11, 50, 1, 31, 35, 46, 26, 15, 41, 26, 11, 36};
    vector<int> expire = {50, 15, 8, 16, 14, 5, 41, 28, 3, 33, 21, 48, 8, 23, 11, 17, 34, 7, 15, 43, 14, 1, 25, 16, 11, 7, 1, 10, 42, 13, 2, 14, 36, 9, 40, 10, 21, 12, 15, 12, 3, 49, 40, 40, 44, 23, 14, 29, 15, 38};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> theoreticalValue = {4, 3, 17, 0, 48, 16, 10, 8, 26, 3, 24, 6, 21, 12, 43, 3, 18, 22, 18, 31, 0, 0, 11, 14, 7, 37, 7, 18, 9, 18, 2, 3, 5, 6, 6, 1, 10, 5, 0, 7, 17, 16, 15, 10, 9, 4, 9, 13, 16, 5};
    vector<int> practicalValue = {40, 5, 15, 1, 38, 15, 11, 9, 13, 8, 5, 7, 38, 12, 14, 4, 16, 4, 16, 30, 1, 1, 12, 14, 9, 6, 27, 16, 10, 16, 3, 5, 6, 8, 8, 2, 12, 7, 1, 9, 13, 15, 15, 10, 34, 6, 31, 13, 15, 7};
    vector<int> expire = {35, 15, 34, 8, 33, 33, 28, 26, 23, 12, 10, 18, 1, 28, 7, 9, 38, 6, 39, 33, 7, 5, 25, 34, 18, 33, 22, 37, 20, 37, 12, 9, 13, 21, 15, 10, 24, 15, 7, 20, 41, 31, 28, 26, 35, 16, 41, 27, 31, 16};
    int skillBound = 13;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 35, 30, 15, 1, 45, 37, 33, 24, 7, 28, 6, 22, 13, 47};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> theoreticalValue = {2, 19, 10, 9, 8, 27, 16, 6, 18, 9, 1, 11, 9, 48, 3, 15, 5, 32, 6, 18, 22, 8, 6, 21, 13, 27, 15, 38, 3, 11, 4, 2, 17, 2, 35, 14, 20, 12, 46, 14, 6, 7, 50, 15, 13, 24, 34, 13, 13, 23};
    vector<int> practicalValue = {1, 17, 8, 7, 6, 12, 16, 5, 17, 8, 0, 9, 7, 12, 2, 15, 3, 37, 4, 17, 20, 5, 22, 19, 12, 9, 15, 6, 2, 10, 3, 21, 16, 0, 5, 13, 18, 10, 42, 14, 4, 5, 12, 15, 8, 21, 46, 13, 11, 21};
    vector<int> expire = {4, 34, 18, 21, 19, 19, 34, 12, 35, 17, 8, 22, 19, 29, 11, 29, 12, 26, 11, 32, 37, 19, 12, 39, 24, 15, 32, 42, 10, 19, 11, 31, 37, 2, 19, 26, 39, 21, 20, 25, 10, 14, 2, 33, 23, 45, 2, 28, 27, 44};
    int skillBound = 14;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 0, 14, 30, 16, 18, 41, 4, 3, 2, 11, 37, 48, 24, 35, 39};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> theoreticalValue = {11, 7, 50, 36, 7, 15, 30, 26, 5, 43, 2, 6, 48, 18, 9, 9, 12, 14, 1, 5, 36, 9, 4, 8, 3, 12, 2, 8, 26, 15, 25, 40, 15, 13, 14, 9, 10, 45, 9, 2, 26, 4, 14, 9, 1, 18, 1, 26, 8, 10};
    vector<int> practicalValue = {12, 5, 47, 5, 6, 14, 50, 49, 4, 22, 1, 4, 43, 10, 8, 8, 12, 12, 1, 3, 42, 10, 3, 28, 3, 22, 3, 7, 26, 13, 6, 38, 13, 12, 5, 7, 11, 30, 8, 2, 8, 3, 12, 9, 1, 3, 0, 38, 6, 12};
    vector<int> expire = {27, 16, 48, 27, 18, 33, 38, 22, 14, 47, 9, 18, 29, 17, 24, 25, 31, 31, 5, 14, 15, 28, 8, 47, 10, 6, 8, 19, 16, 33, 9, 49, 37, 31, 17, 21, 23, 3, 23, 5, 22, 13, 29, 25, 8, 48, 5, 17, 21, 26};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 39};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> theoreticalValue = {3, 13, 3, 21, 4, 23, 5, 2, 50, 9, 48, 11, 10, 2, 13, 13, 13, 13, 11, 19, 34, 13, 11, 13, 0, 0, 12, 3, 13, 33, 25, 7, 13, 1, 9, 30, 11, 7, 13, 26, 8, 1, 5, 13, 9, 6, 11, 12, 0, 13};
    vector<int> practicalValue = {4, 16, 4, 18, 5, 5, 6, 3, 41, 8, 22, 12, 9, 2, 15, 16, 17, 17, 10, 27, 33, 13, 11, 14, 1, 2, 13, 47, 13, 7, 11, 7, 16, 22, 8, 28, 11, 7, 15, 12, 7, 2, 5, 14, 8, 7, 10, 13, 1, 17};
    vector<int> expire = {15, 35, 7, 32, 14, 30, 17, 10, 5, 16, 31, 31, 21, 9, 31, 40, 40, 42, 22, 22, 46, 31, 29, 30, 5, 3, 32, 1, 28, 28, 34, 20, 37, 10, 21, 29, 23, 18, 34, 24, 19, 4, 11, 37, 18, 17, 21, 32, 7, 39};
    int skillBound = 16;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> theoreticalValue = {0, 20, 0, 1, 19, 10, 14, 18, 3, 1, 12, 17, 5, 4, 17, 22, 49, 22, 15, 2, 12, 11, 19, 7, 14, 10, 4, 2, 9, 17, 8, 16, 23, 21, 2, 2, 6, 13, 14, 15, 16, 12, 8, 19, 20, 20, 32, 18, 21, 28};
    vector<int> practicalValue = {0, 18, 1, 2, 17, 7, 12, 16, 3, 2, 11, 14, 4, 4, 15, 21, 18, 20, 14, 3, 11, 10, 17, 6, 13, 10, 4, 30, 9, 15, 8, 14, 21, 20, 34, 2, 5, 12, 13, 14, 14, 10, 7, 18, 18, 18, 9, 17, 19, 4};
    vector<int> expire = {7, 44, 3, 4, 36, 38, 25, 37, 8, 5, 21, 33, 15, 13, 37, 49, 24, 43, 27, 11, 23, 23, 41, 15, 25, 16, 14, 49, 20, 31, 20, 29, 50, 42, 50, 5, 17, 21, 24, 28, 29, 20, 16, 43, 44, 42, 45, 38, 45, 1};
    int skillBound = 28;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> theoreticalValue = {1, 5, 21, 1, 28, 50, 3, 42, 33, 14, 22, 37, 4, 18, 32, 12, 4, 28, 29, 32, 18, 36, 38, 38, 1, 14, 32, 11, 39, 46, 3, 13, 26, 21, 9, 28, 49, 5, 13, 36, 5, 5, 6, 2, 46, 39, 32, 42, 2, 48};
    vector<int> practicalValue = {0, 46, 41, 17, 14, 25, 1, 9, 28, 31, 31, 10, 2, 49, 13, 39, 24, 10, 8, 44, 29, 14, 25, 17, 13, 46, 22, 6, 25, 19, 3, 24, 6, 12, 12, 48, 15, 24, 27, 44, 50, 2, 41, 45, 46, 4, 27, 42, 1, 37};
    vector<int> expire = {5, 0, 44, 30, 27, 8, 5, 21, 20, 20, 15, 26, 11, 7, 18, 3, 49, 42, 17, 24, 2, 45, 32, 25, 33, 1, 16, 12, 26, 6, 17, 44, 41, 25, 13, 2, 42, 33, 20, 33, 0, 11, 36, 31, 15, 10, 8, 48, 2, 30};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> theoreticalValue = {19, 12, 18, 17, 10, 2, 14, 1, 14, 9, 25, 15, 0, 10, 47, 24, 14, 14, 1, 2, 16, 18, 16, 15, 21, 10, 13, 1, 2, 5, 42, 6, 2, 10, 1, 9, 4, 7, 14, 8, 17, 19, 15, 1, 35, 4, 14, 24, 3, 11};
    vector<int> practicalValue = {20, 9, 20, 18, 9, 5, 10, 2, 12, 7, 28, 15, 0, 22, 42, 34, 13, 2, 4, 5, 16, 19, 17, 16, 10, 9, 9, 3, 5, 6, 25, 6, 5, 8, 5, 7, 5, 6, 11, 7, 37, 21, 14, 1, 6, 5, 12, 35, 5, 9};
    vector<int> expire = {39, 26, 44, 39, 24, 10, 26, 10, 35, 22, 47, 33, 6, 40, 16, 9, 31, 25, 10, 11, 37, 42, 41, 34, 29, 27, 29, 10, 12, 15, 34, 19, 14, 21, 12, 23, 13, 16, 31, 17, 20, 45, 35, 8, 34, 17, 35, 11, 16, 30};
    int skillBound = 33;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> theoreticalValue = {8, 16, 20, 1, 6, 4, 13, 5, 46, 25, 4, 2, 3, 19, 10, 14, 21, 15, 12, 15, 10, 8, 0, 11, 1, 14, 8, 22, 15, 0, 19, 7, 5, 23, 13, 21, 15, 14, 9, 17, 5, 1, 21, 26, 25, 14, 12, 24, 18, 13};
    vector<int> practicalValue = {7, 17, 20, 2, 6, 4, 11, 6, 42, 22, 5, 3, 3, 19, 7, 13, 20, 16, 10, 14, 8, 7, 0, 8, 1, 12, 7, 22, 16, 34, 19, 7, 6, 22, 12, 21, 15, 18, 7, 17, 5, 0, 21, 23, 22, 12, 9, 22, 18, 10};
    vector<int> expire = {21, 37, 39, 4, 18, 14, 28, 17, 30, 50, 15, 8, 9, 37, 21, 34, 41, 35, 25, 30, 21, 19, 1, 21, 8, 28, 14, 42, 34, 45, 41, 14, 17, 49, 29, 41, 34, 28, 20, 36, 15, 3, 42, 50, 50, 27, 27, 48, 35, 29};
    int skillBound = 11;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 3, 11, 12, 5, 40, 4, 31, 0, 38, 14, 23, 46, 18, 6};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> theoreticalValue = {11, 0, 12, 13, 10, 14, 2, 6, 12, 4, 2, 13, 25, 3, 0, 33, 31, 43, 13, 1, 31, 7, 9, 37, 1, 5, 40, 8, 37, 15, 1, 13, 5, 11, 2, 12, 32, 6, 2, 18, 16, 28, 17, 13, 17, 2, 13, 3, 44, 12};
    vector<int> practicalValue = {16, 1, 17, 18, 14, 20, 3, 11, 17, 8, 5, 18, 23, 7, 26, 26, 19, 21, 18, 1, 32, 12, 14, 23, 1, 9, 16, 13, 25, 21, 1, 19, 10, 15, 3, 5, 17, 11, 2, 4, 22, 7, 49, 18, 22, 4, 12, 6, 22, 18};
    vector<int> expire = {22, 8, 31, 29, 24, 36, 11, 21, 24, 13, 14, 26, 9, 12, 10, 21, 43, 10, 33, 2, 22, 23, 19, 17, 9, 13, 49, 21, 20, 32, 8, 31, 15, 21, 8, 28, 9, 16, 6, 3, 37, 50, 11, 32, 39, 14, 14, 14, 31, 27};
    int skillBound = 42;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> theoreticalValue = {7, 10, 1, 20, 12, 13, 3, 11, 20, 19, 13, 9, 8, 2, 11, 3, 6, 20, 18, 7, 33, 14, 4, 14, 16, 5, 12, 19, 13, 15, 11, 20, 20, 1, 19, 17, 12, 1, 7, 6, 10, 17, 16, 1, 13, 4, 20, 1, 3, 18};
    vector<int> practicalValue = {9, 11, 3, 25, 12, 14, 5, 12, 26, 22, 16, 9, 9, 5, 11, 5, 7, 23, 21, 9, 50, 17, 6, 17, 19, 6, 12, 22, 15, 18, 12, 26, 24, 1, 21, 21, 13, 3, 8, 7, 10, 21, 20, 4, 15, 5, 26, 2, 5, 46};
    vector<int> expire = {19, 24, 3, 49, 30, 28, 9, 25, 50, 48, 36, 22, 22, 11, 25, 12, 13, 50, 45, 17, 38, 39, 16, 35, 40, 18, 27, 45, 37, 37, 30, 50, 48, 7, 43, 40, 32, 4, 18, 18, 24, 44, 40, 12, 36, 13, 50, 8, 11, 39};
    int skillBound = 37;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> theoreticalValue = {9, 2, 3, 27, 49, 35, 3, 6, 18, 36, 50, 1, 36, 21, 27, 49, 1, 4, 7, 31, 1, 44, 26, 46, 19, 33, 19, 21, 1, 6, 36, 1, 6, 1, 3, 7, 50, 1, 11, 5, 5, 7, 13, 1, 35, 1, 5, 39, 34, 3};
    vector<int> practicalValue = {40, 3, 50, 9, 37, 15, 4, 4, 39, 21, 49, 1, 27, 33, 25, 33, 0, 6, 7, 19, 30, 1, 44, 48, 17, 1, 24, 10, 0, 7, 7, 3, 6, 0, 4, 8, 49, 2, 33, 0, 6, 8, 42, 2, 29, 2, 8, 41, 3, 5};
    vector<int> expire = {35, 12, 45, 27, 0, 4, 17, 3, 12, 18, 37, 6, 18, 22, 21, 30, 3, 15, 23, 26, 36, 36, 45, 24, 17, 6, 41, 8, 10, 17, 10, 15, 15, 6, 18, 21, 14, 12, 31, 26, 18, 24, 35, 12, 6, 13, 24, 31, 4, 15};
    int skillBound = 34;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> theoreticalValue = {25, 17, 6, 3, 13, 21, 18, 10, 2, 9, 8, 19, 5, 26, 1, 3, 38, 11, 2, 26, 18, 6, 43, 0, 3, 5, 11, 31, 21, 6, 9, 34, 48, 41, 15, 1, 8, 10, 20, 6, 39, 12, 29, 15, 7, 11, 4, 9, 8, 18};
    vector<int> practicalValue = {24, 4, 49, 2, 10, 38, 30, 9, 1, 8, 6, 8, 3, 6, 38, 19, 1, 9, 2, 21, 27, 4, 49, 35, 2, 14, 9, 16, 16, 4, 7, 16, 25, 40, 31, 0, 6, 8, 23, 4, 9, 9, 34, 36, 5, 17, 2, 6, 6, 42};
    vector<int> expire = {10, 38, 15, 8, 24, 32, 16, 45, 7, 18, 15, 49, 12, 13, 36, 6, 0, 22, 4, 20, 41, 13, 44, 39, 11, 30, 24, 38, 11, 11, 18, 3, 19, 6, 36, 1, 17, 22, 40, 11, 17, 24, 47, 48, 13, 7, 8, 22, 16, 11};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 8, 3, 46, 12, 21, 44};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> theoreticalValue = {37, 36, 4, 1, 42, 5, 6, 47, 4, 1, 20, 24, 10, 27, 42, 23, 7, 4, 35, 40, 17, 31, 7, 18, 15, 39, 12, 2, 8, 3, 7, 1, 14, 36, 47, 1, 46, 49, 7, 42, 26, 1, 5, 4, 1, 6, 47, 5, 6, 24};
    vector<int> practicalValue = {19, 33, 6, 1, 16, 6, 6, 6, 5, 3, 20, 12, 24, 36, 43, 47, 19, 34, 30, 30, 0, 33, 8, 9, 32, 3, 34, 4, 9, 4, 7, 0, 21, 45, 18, 4, 5, 36, 7, 32, 40, 28, 6, 6, 2, 27, 33, 6, 7, 38};
    vector<int> expire = {42, 39, 14, 4, 30, 17, 19, 11, 15, 10, 6, 25, 24, 4, 11, 48, 45, 17, 40, 7, 6, 28, 23, 50, 30, 36, 48, 11, 20, 9, 17, 3, 0, 48, 7, 10, 11, 12, 23, 19, 41, 4, 18, 13, 8, 46, 27, 13, 16, 41};
    int skillBound = 43;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> theoreticalValue = {3, 3, 6, 0, 13, 9, 9, 7, 25, 30, 7, 33, 7, 5, 5, 6, 4, 1, 5, 13, 16, 34, 8, 32, 3, 7, 41, 2, 9, 2, 21, 11, 41, 6, 35, 7, 47, 41, 5, 2, 11, 8, 46, 3, 3, 6, 42, 7, 42, 21};
    vector<int> practicalValue = {19, 5, 7, 0, 14, 15, 9, 9, 8, 10, 8, 24, 7, 6, 7, 7, 5, 1, 6, 18, 24, 38, 9, 14, 4, 7, 32, 3, 2, 3, 32, 48, 21, 7, 41, 9, 13, 43, 6, 2, 19, 36, 49, 4, 3, 37, 31, 8, 4, 50};
    vector<int> expire = {45, 11, 17, 6, 50, 39, 27, 26, 39, 12, 37, 29, 24, 15, 19, 24, 12, 5, 18, 45, 44, 36, 27, 24, 10, 21, 12, 8, 7, 5, 40, 1, 17, 19, 5, 26, 4, 44, 19, 6, 23, 50, 19, 14, 8, 43, 14, 24, 0, 33};
    int skillBound = 50;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> theoreticalValue = {11, 1, 12, 5, 0, 12, 37, 3, 10, 0, 5, 34, 14, 8, 29, 27, 11, 0, 5, 10, 22, 45, 48, 0, 21, 31, 8, 10, 0, 41, 23, 12, 3, 11, 5, 9, 29, 42, 5, 8, 18, 6, 4, 2, 7, 4, 9, 17, 0, 7};
    vector<int> practicalValue = {11, 4, 41, 7, 4, 13, 13, 14, 33, 3, 8, 15, 32, 11, 6, 10, 37, 2, 8, 11, 44, 42, 2, 3, 40, 1, 10, 5, 1, 49, 48, 14, 5, 12, 8, 46, 28, 25, 2, 9, 36, 8, 33, 5, 19, 6, 11, 16, 3, 9};
    vector<int> expire = {28, 11, 46, 17, 6, 29, 11, 36, 17, 8, 12, 6, 33, 24, 42, 47, 15, 4, 14, 24, 42, 8, 42, 8, 12, 7, 24, 0, 8, 44, 37, 32, 9, 30, 16, 47, 15, 50, 50, 21, 3, 20, 46, 15, 15, 17, 26, 30, 6, 19};
    int skillBound = 34;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {0};
    vector<int> expire = {2};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> theoreticalValue = {2, 0};
    vector<int> practicalValue = {1, 1};
    vector<int> expire = {2, 1};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> theoreticalValue = {0, 3, 2};
    vector<int> practicalValue = {1, 3, 1};
    vector<int> expire = {1, 1, 1};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> theoreticalValue = {0, 3, 3, 3};
    vector<int> practicalValue = {0, 2, 3, 1};
    vector<int> expire = {1, 4, 0, 4};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> theoreticalValue = {1, 2, 0, 1, 0};
    vector<int> practicalValue = {1, 2, 5, 4, 4};
    vector<int> expire = {2, 5, 2, 5, 5};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> theoreticalValue = {2, 2, 0, 2, 1, 0};
    vector<int> practicalValue = {2, 2, 1, 3, 1, 1};
    vector<int> expire = {5, 7, 3, 7, 4, 2};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> theoreticalValue = {7, 1, 0, 5, 5, 7, 2};
    vector<int> practicalValue = {5, 2, 1, 4, 6, 0, 3};
    vector<int> expire = {1, 3, 2, 2, 5, 7, 4};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> theoreticalValue = {4, 1, 8, 7, 0, 0, 0, 6};
    vector<int> practicalValue = {0, 0, 0, 6, 0, 2, 0, 3};
    vector<int> expire = {7, 5, 5, 4, 2, 5, 3, 5};
    int skillBound = 6;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> theoreticalValue = {1, 6, 8, 6, 8, 4, 5, 0, 0};
    vector<int> practicalValue = {5, 4, 4, 6, 3, 7, 4, 9, 3};
    vector<int> expire = {0, 5, 9, 1, 9, 9, 6, 0, 1};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> theoreticalValue = {3, 2, 4, 5, 3, 1, 4, 2, 3, 3};
    vector<int> practicalValue = {4, 2, 5, 5, 4, 1, 5, 1, 3, 4};
    vector<int> expire = {7, 6, 10, 10, 7, 2, 9, 5, 7, 7};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> theoreticalValue = {0, 2, 1, 1, 10, 8, 0, 1, 4, 11, 8};
    vector<int> practicalValue = {5, 0, 1, 2, 6, 3, 0, 1, 5, 11, 6};
    vector<int> expire = {3, 6, 2, 6, 5, 0, 3, 8, 0, 0, 1};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> theoreticalValue = {2, 6, 1, 11, 5, 4, 3, 3, 1, 9, 3, 2};
    vector<int> practicalValue = {1, 5, 0, 0, 5, 5, 3, 4, 1, 11, 2, 1};
    vector<int> expire = {6, 11, 2, 7, 12, 10, 8, 10, 5, 8, 7, 4};
    int skillBound = 7;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> theoreticalValue = {12, 4, 2, 4, 4, 1, 0, 2, 4, 3, 4, 2, 1};
    vector<int> practicalValue = {12, 4, 4, 4, 4, 1, 11, 2, 3, 2, 3, 13, 0};
    vector<int> expire = {3, 9, 2, 9, 10, 5, 3, 6, 5, 4, 8, 12, 2};
    int skillBound = 11;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> theoreticalValue = {1, 1, 1, 7, 14, 1, 6, 13, 3, 2, 13, 4, 2, 4};
    vector<int> practicalValue = {1, 12, 1, 7, 13, 1, 5, 2, 11, 0, 6, 7, 2, 1};
    vector<int> expire = {4, 8, 3, 0, 1, 3, 13, 8, 0, 14, 1, 7, 4, 8};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> theoreticalValue = {13, 4, 5, 1, 7, 8, 11, 1, 6, 3, 15, 2, 14, 11, 1};
    vector<int> practicalValue = {8, 2, 15, 0, 1, 4, 2, 1, 7, 2, 8, 2, 1, 1, 1};
    vector<int> expire = {3, 9, 8, 1, 13, 6, 12, 4, 5, 8, 1, 4, 8, 6, 4};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> theoreticalValue = {14, 15, 8, 11, 15, 0, 3, 6, 11, 3, 4, 9, 14, 10, 9, 14};
    vector<int> practicalValue = {4, 4, 14, 15, 4, 1, 1, 11, 4, 16, 16, 1, 16, 6, 12, 0};
    vector<int> expire = {6, 2, 7, 4, 2, 1, 10, 0, 8, 4, 12, 2, 4, 2, 4, 10};
    int skillBound = 12;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> theoreticalValue = {2, 1, 1, 6, 8, 8, 1, 5, 0, 9, 14, 5, 2, 16, 6, 5, 13};
    vector<int> practicalValue = {2, 7, 1, 12, 12, 16, 1, 5, 6, 0, 7, 3, 3, 6, 11, 9, 1};
    vector<int> expire = {6, 9, 2, 2, 7, 9, 2, 16, 13, 8, 3, 12, 5, 17, 4, 0, 10};
    int skillBound = 11;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> theoreticalValue = {9, 2, 3, 15, 1, 13, 15, 18, 17, 9, 4, 0, 5, 18, 1, 1, 9, 9};
    vector<int> practicalValue = {12, 1, 1, 1, 1, 17, 9, 18, 4, 6, 1, 0, 1, 2, 6, 7, 1, 17};
    vector<int> expire = {11, 6, 5, 2, 3, 13, 7, 5, 11, 8, 12, 4, 1, 6, 8, 4, 0, 5};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> theoreticalValue = {14, 18, 18, 15, 7, 14, 16, 2, 3, 15, 1, 9, 18, 0, 11, 15, 9, 5, 2};
    vector<int> practicalValue = {16, 12, 9, 11, 9, 16, 3, 6, 2, 10, 1, 13, 19, 6, 0, 9, 17, 3, 2};
    vector<int> expire = {4, 16, 2, 19, 5, 7, 9, 19, 5, 4, 4, 10, 18, 2, 4, 1, 7, 1, 2};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> theoreticalValue = {3, 5, 4, 3, 9, 10, 10, 18, 6, 2, 3, 2, 14, 9, 6, 5, 18, 10, 9, 1};
    vector<int> practicalValue = {15, 13, 1, 1, 17, 14, 11, 7, 1, 0, 0, 15, 1, 12, 11, 2, 3, 18, 9, 0};
    vector<int> expire = {17, 20, 8, 7, 13, 11, 2, 12, 15, 2, 6, 7, 15, 14, 0, 1, 3, 3, 9, 3};
    int skillBound = 7;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> theoreticalValue = {0, 1, 2, 2, 1};
    vector<int> practicalValue = {0, 0, 1, 2, 1};
    vector<int> expire = {9, 9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {50};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> theoreticalValue = {1, 1, 1, 0, 1, 1, 2, 3};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 6, 5};
    vector<int> expire = {11, 11, 11, 11, 11, 11, 11, 11};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 6, 7};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> theoreticalValue = {0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14, 15, 15, 15, 16, 16, 17, 16};
    vector<int> practicalValue = {1, 0, 1, 2, 1, 2, 3, 2, 3, 4, 3, 4, 5, 4, 5, 6, 5, 6, 7, 6, 7, 8, 7, 8, 9, 8, 9, 10, 9, 10, 11, 10, 11, 12, 11, 12, 13, 12, 13, 14, 13, 14, 15, 14, 15, 16, 15, 16, 16, 17};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 18;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> theoreticalValue = {0};
    vector<int> practicalValue = {0};
    vector<int> expire = {50};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6};
    vector<int> practicalValue = {1, 1, 1, 1, 1, 2};
    vector<int> expire = {9, 9, 9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> theoreticalValue = {1, 1};
    vector<int> practicalValue = {1, 1};
    vector<int> expire = {5, 4};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> theoreticalValue = {1, 2, 3};
    vector<int> practicalValue = {1, 1, 2};
    vector<int> expire = {5, 5, 5};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> theoreticalValue = {1, 2, 3, 4};
    vector<int> practicalValue = {0, 0, 0, 1};
    vector<int> expire = {6, 6, 6, 6};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> theoreticalValue = {0, 1, 2, 2};
    vector<int> practicalValue = {0, 0, 0, 1};
    vector<int> expire = {5, 5, 5, 5};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {5};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> theoreticalValue = {0, 1, 2, 1, 3, 4, 3, 5, 6, 5, 7, 8, 7, 9, 10, 9, 11, 12, 11, 13, 14, 13, 15, 16, 15, 17, 18, 17, 19, 20, 19, 21, 22, 21, 23, 24, 23, 25, 26, 25, 27, 28, 27, 29, 30, 29, 31, 32, 31, 33};
    vector<int> practicalValue = {1, 0, 1, 2, 3, 3, 4, 5, 5, 6, 7, 7, 8, 9, 9, 10, 11, 11, 12, 13, 13, 14, 15, 15, 16, 17, 17, 18, 19, 19, 20, 21, 21, 22, 23, 23, 24, 25, 25, 26, 27, 27, 28, 29, 29, 30, 31, 31, 32, 33};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 33;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> practicalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    vector<int> expire = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> theoreticalValue = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> practicalValue = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> theoreticalValue = {0, 1, 2, 2, 1};
    vector<int> practicalValue = {0, 0, 1, 2, 1};
    vector<int> expire = {9, 9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> theoreticalValue = {1, 2, 3, 0, 2, 4, 4};
    vector<int> practicalValue = {0, 0, 0, 1, 2, 3, 4};
    vector<int> expire = {1, 2, 3, 9, 9, 9, 9};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> theoreticalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> practicalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 20, 30, 40};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> theoreticalValue = {3, 2, 2, 3, 1, 3, 1, 2, 1, 3, 3, 1, 2, 1, 2, 3, 3, 2, 3, 4, 1, 3, 4, 1, 1, 1, 1, 4, 1, 3, 2, 2, 1, 3, 1};
    vector<int> practicalValue = {2, 2, 2, 1, 3, 3, 3, 3, 2, 1, 4, 3, 4, 4, 1, 3, 3, 3, 1, 4, 4, 2, 3, 1, 1, 4, 4, 1, 4, 4, 3, 2, 3, 2, 2};
    vector<int> expire = {3, 1, 1, 3, 2, 3, 2, 2, 2, 1, 3, 3, 2, 3, 2, 2, 4, 3, 3, 2, 4, 2, 3, 4, 4, 2, 1, 2, 2, 3, 4, 1, 2, 1, 4};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 8, 17, 16};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 1, 2, 3, 4};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 5, 5, 5, 5};
    vector<int> expire = {10, 10, 9, 9, 9, 9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> theoreticalValue = {1, 0, 1, 2};
    vector<int> practicalValue = {0, 1, 2, 1};
    vector<int> expire = {5, 5, 5, 5};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 0, 0, 0, 1, 2};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9};
    vector<int> expire = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> theoreticalValue = {0, 1, 1, 2};
    vector<int> practicalValue = {1, 2, 1, 3};
    vector<int> expire = {9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {9};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6};
    vector<int> expire = {1, 2, 3, 4, 5, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> practicalValue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> expire = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> theoreticalValue = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25};
    vector<int> practicalValue = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 25;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> theoreticalValue = {1, 2, 3, 3, 1, 2, 3, 3, 1, 2, 3, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 3, 2, 1, 4, 5, 2, 3, 1, 4, 5, 5, 5, 5, 3, 2, 1, 1, 1, 2, 3, 3, 4, 1, 2};
    vector<int> practicalValue = {1, 1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1, 1, 1, 2, 3, 3, 3, 5, 5, 5, 4, 4, 4, 4, 5, 3, 2, 2, 2, 1, 3, 3};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 5;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 20, 9, 35};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {1};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> theoreticalValue = {1, 0, 1, 2};
    vector<int> practicalValue = {0, 1, 2, 1};
    vector<int> expire = {4, 4, 4, 4};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 2};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {1};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7, 8, 6, 7, 9, 9, 9};
    vector<int> practicalValue = {0, 0, 0, 0, 0, 0, 0, 0, 5, 2, 1, 2, 3};
    vector<int> expire = {20, 20, 20, 20, 20, 20, 20, 20, 10, 11, 20, 20, 20};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 10, 9, 12};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> theoreticalValue = {1, 1};
    vector<int> practicalValue = {1, 1};
    vector<int> expire = {2, 1};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> theoreticalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> practicalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> expire = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int skillBound = 49;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> theoreticalValue = {0, 2, 1, 2, 1};
    vector<int> practicalValue = {0, 0, 1, 2, 1};
    vector<int> expire = {9, 9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> theoreticalValue = {1, 43, 5, 6, 7, 8, 9, 0, 4, 23};
    vector<int> practicalValue = {2, 3, 4, 5, 6, 7, 8, 9, 12, 15};
    vector<int> expire = {3, 4, 5, 6, 7, 39, 3, 15, 16, 17};
    int skillBound = 9;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> theoreticalValue = {10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    vector<int> practicalValue = {10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    vector<int> expire = {10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1};
    int skillBound = 12;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> theoreticalValue = {17, 17, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1};
    vector<int> practicalValue = {17, 17, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1};
    vector<int> expire = {17, 17, 16, 16, 16, 15, 15, 15, 14, 14, 14, 13, 13, 13, 12, 12, 12, 11, 11, 11, 10, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 5, 5, 5, 4, 4, 4, 3, 3, 3, 2, 2, 2, 1, 1, 1};
    int skillBound = 18;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> theoreticalValue = {1};
    vector<int> practicalValue = {1};
    vector<int> expire = {10};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> theoreticalValue = {1, 2, 3};
    vector<int> practicalValue = {0, 1, 2};
    vector<int> expire = {50, 50, 50};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> theoreticalValue = {1, 2, 0, 1};
    vector<int> practicalValue = {0, 1, 1, 2};
    vector<int> expire = {50, 50, 50, 50};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> theoreticalValue = {0, 0, 20, 0, 6, 0, 13, 2, 3, 0, 0, 0, 10, 0, 0, 0, 14, 19, 18, 0, 17, 0, 0, 15, 12, 0, 1, 24, 0, 0, 0, 0, 5, 9, 0, 23, 0, 8, 21, 4, 11, 16, 0, 0, 0, 0, 22, 0, 0, 7};
    vector<int> practicalValue = {0, 23, 0, 20, 0, 21, 0, 0, 0, 14, 3, 11, 0, 6, 15, 19, 0, 0, 0, 13, 0, 4, 7, 0, 0, 1, 0, 0, 8, 10, 16, 9, 0, 0, 2, 0, 22, 0, 0, 0, 0, 0, 0, 5, 12, 18, 0, 24, 17, 0};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 24;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 26, 7, 8, 34, 10, 21, 39, 32, 4, 43, 13, 22, 28, 31, 29, 11, 44, 19, 9, 14, 30, 48, 45, 15, 3, 5, 36, 1, 47, 49, 37, 33, 12, 40, 24, 6, 16, 23, 41, 20, 18, 17, 2, 38, 46, 35, 27};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> theoreticalValue = {8, 6, 6, 8, 7, 6, 4, 6, 5, 8, 2, 8, 5, 4, 2, 9, 2, 1, 9, 9, 2, 1, 4, 3, 0, 2, 3, 2, 2, 5, 9, 2, 4, 3, 4, 1, 2, 2, 5, 0, 5, 4, 6, 5, 2, 2, 8, 0, 6, 7};
    vector<int> practicalValue = {4, 1, 6, 0, 9, 4, 5, 6, 2, 7, 0, 1, 0, 7, 9, 9, 6, 8, 2, 2, 2, 9, 7, 3, 9, 4, 1, 6, 3, 0, 0, 5, 6, 1, 8, 1, 8, 6, 0, 3, 7, 9, 1, 4, 6, 6, 2, 4, 6, 4};
    vector<int> expire = {33, 39, 29, 41, 22, 16, 45, 42, 32, 32, 37, 16, 42, 35, 41, 17, 40, 17, 1, 31, 50, 29, 40, 19, 7, 32, 38, 41, 41, 16, 34, 10, 36, 25, 21, 1, 19, 15, 49, 28, 12, 35, 48, 28, 3, 5, 25, 33, 20, 41};
    int skillBound = 9;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 20, 23, 25, 6, 8, 2, 49, 9, 17, 15};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> theoreticalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> practicalValue = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 50;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> theoreticalValue = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 23, 27};
    vector<int> practicalValue = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 26, 23};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 26;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> theoreticalValue = {1, 2, 1};
    vector<int> practicalValue = {2, 1, 1};
    vector<int> expire = {3, 2, 1};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 0};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> theoreticalValue = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10};
    vector<int> practicalValue = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 10;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 8, 12, 16, 20, 24, 28, 32, 36};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> theoreticalValue = {0, 7, 1, 3, 6, 5, 4, 4, 7, 6, 0, 6, 5, 1, 3, 7, 3, 2, 8, 7, 3, 0, 6, 4, 7, 8, 6, 2, 5, 4, 3, 6, 6, 2, 2, 4, 0, 7, 6, 3, 4, 2, 3, 5, 5, 6, 6, 0, 8, 7};
    vector<int> practicalValue = {2, 0, 7, 1, 7, 3, 3, 5, 5, 8, 8, 6, 2, 0, 5, 0, 1, 9, 1, 5, 0, 4, 6, 5, 5, 1, 7, 7, 2, 3, 8, 3, 9, 2, 8, 2, 3, 5, 4, 5, 5, 7, 4, 0, 7, 6, 5, 1, 7, 3};
    vector<int> expire = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    int skillBound = 8;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 47, 33, 3, 6, 5, 38, 8, 11, 48, 9};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> theoreticalValue = {1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    vector<int> practicalValue = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> expire = {1, 3, 3, 3, 4, 5, 6, 7, 8, 9, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39, 39};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 6, 7, 8, 10, 11};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> theoreticalValue = {1, 1, 3, 2, 1};
    vector<int> practicalValue = {2, 3, 2, 1, 1};
    vector<int> expire = {5, 8, 9, 2, 1};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2, 1};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> theoreticalValue = {1, 2, 3, 1};
    vector<int> practicalValue = {0, 0, 1, 0};
    vector<int> expire = {5, 5, 5, 5};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7};
    vector<int> practicalValue = {1, 1, 1, 1, 1, 1, 2};
    vector<int> expire = {9, 9, 9, 9, 9, 9, 9};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> theoreticalValue = {0, 1};
    vector<int> practicalValue = {1, 0};
    vector<int> expire = {9, 9};
    int skillBound = 1;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    vector<int> practicalValue = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 4;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> theoreticalValue = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    vector<int> practicalValue = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> theoreticalValue = {0, 0, 1, 2, 3, 0, 0, 0};
    vector<int> practicalValue = {0, 1, 5, 5, 5, 4, 2, 3};
    vector<int> expire = {9, 9, 9, 9, 8, 9, 9, 9};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 7, 5, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> theoreticalValue = {1, 1, 2, 3, 3};
    vector<int> practicalValue = {1, 2, 3, 3, 3};
    vector<int> expire = {9, 9, 9, 9, 9};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> theoreticalValue = {0, 1, 2, 2, 1};
    vector<int> practicalValue = {0, 0, 1, 2, 1};
    vector<int> expire = {9, 9, 9, 9, 9};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> theoreticalValue = {0, 1, 1, 2, 0, 2, 3, 4, 1, 1, 4, 5, 6, 5, 6, 7, 7, 8, 9, 9, 1, 0, 10, 1};
    vector<int> practicalValue = {1, 0, 1, 0, 2, 2, 2, 2, 3, 4, 4, 5, 5, 6, 6, 7, 8, 7, 1, 2, 8, 8, 10, 9};
    vector<int> expire = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    int skillBound = 10;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 6, 8, 10, 11, 14, 15, 16, 17, 18, 23, 22};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> theoreticalValue = {1, 0, 1, 2};
    vector<int> practicalValue = {0, 1, 2, 2};
    vector<int> expire = {50, 50, 50, 50};
    int skillBound = 2;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> theoreticalValue = {1, 2, 3, 4, 5, 6, 7};
    vector<int> practicalValue = {1, 2, 3, 4, 5, 6, 7};
    vector<int> expire = {1, 2, 3, 4, 5, 6, 7};
    int skillBound = 0;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> theoreticalValue = {1, 2, 1, 3};
    vector<int> practicalValue = {1, 1, 2, 3};
    vector<int> expire = {3, 3, 3, 4};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> theoreticalValue = {3, 1, 2, 0, 0};
    vector<int> practicalValue = {3, 0, 0, 1, 2};
    vector<int> expire = {5, 1, 2, 3, 4};
    int skillBound = 3;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 0};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> theoreticalValue = {1, 1, 1, 2, 1, 2, 3, 3, 4, 3, 4, 5, 5, 6, 7, 8, 8, 7, 9};
    vector<int> practicalValue = {1, 1, 1, 1, 2, 3, 3, 4, 3, 5, 5, 5, 6, 6, 7, 8, 7, 8, 9};
    vector<int> expire = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 21, 27};
    int skillBound = 9;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 7, 8, 11, 13, 14, 15, 18};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> theoreticalValue = {2, 1, 3, 2, 5, 1, 6, 1, 10, 11, 1, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> practicalValue = {1, 1, 4, 2, 6, 2, 5, 8, 10, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> expire = {30, 19, 28, 27, 26, 25, 24, 23, 22, 21, 20, 29, 28, 27, 26, 25, 24, 23, 22, 21};
    int skillBound = 11;
    CsCourses* pObj = new CsCourses();
    clock_t start = clock();
    vector<int> result = pObj->getOrder(theoreticalValue, practicalValue, expire, skillBound);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 17, 16, 15, 14, 13, 12, 11, 8, 9};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10664&pm=7505
********************************************************************************
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
 
//typedef long long __int64; 
 
class CsCourses 
{ 
public: 
  vector<int> A,B,E,result; 
  int f[60][60][60],L; 
  int max(int a,int b) 
  { 
    return (a>b)?a:b; 
  } 
  int solve(int m,int vA,int vB) 
  { 
    int &ret=f[m][vA][vB]; 
    if (ret!=-1) 
      return ret; 
    if (vA>=L && vB>=L) 
      return ret=0; 
    ret=100000000; 
    for (int i=0;i<A.size();i++) 
      if (E[i]>m && vA>=A[i]-1 && vB>=B[i]-1) 
      { 
        int t=solve(m+1,max(vA,A[i]),max(vB,B[i]))+1; 
        if (t<ret) 
          ret=t; 
      } 
    return ret; 
  } 
  void construct(int m,int vA,int vB) 
  { 
    if (vA>=L && vB>=L) 
      return; 
    int r=solve(m,vA,vB); 
    for (int i=0;i<A.size();i++) 
      if (E[i]>m && vA>=A[i]-1 && vB>=B[i]-1 
       && solve(m+1,max(vA,A[i]),max(vB,B[i]))+1==r) 
      { 
        result.push_back(i); 
        construct(m+1,max(vA,A[i]),max(vB,B[i])); 
        return; 
      } 
  } 
  vector<int> getOrder(vector<int> _A, vector<int> _B, vector <int> _E, int _L) 
  { 
    memset(f,255,sizeof(f)); 
    A=_A; 
    B=_B; 
    E=_E; 
    L=_L; 
    int ret=solve(0,0,0); 
    result.clear(); 
    if (ret==100000000) 
      return result; 
    construct(0,0,0); 
    return result; 
  } 
};

********************************************************************************
*******************************************************************************/