/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6251
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

class Segments {
public:
    string intersection(vector<int> s1, vector<int> s2);
};

string Segments::intersection(vector<int> s1, vector<int> s2) {
    string ret;
    return ret;
}


int test0() {
    vector<int> s1 = {0, 0, 0, 1};
    vector<int> s2 = {1, 0, 1, 1};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> s1 = {0, 0, 0, 1};
    vector<int> s2 = {0, 1, 0, 2};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> s1 = {0, -1, 0, 1};
    vector<int> s2 = {-1, 0, 1, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> s1 = {0, 0, 2, 0};
    vector<int> s2 = {1, 0, 10, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> s1 = {5, 5, 5, 5};
    vector<int> s2 = {6, 6, 6, 6};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> s1 = {5, 5, 5, 8};
    vector<int> s2 = {5, 4, 5, 9};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> s1 = {10, 0, -10, 0};
    vector<int> s2 = {5, 0, -5, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> s1 = {800, 1000, 800, 850};
    vector<int> s2 = {1000, 1000, -1000, 1000};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> s1 = {10, 20, 10, 20};
    vector<int> s2 = {20, 10, 20, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> s1 = {0, 0, 0, 0};
    vector<int> s2 = {10, 0, 0, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> s1 = {0, 0, 0, 10};
    vector<int> s2 = {0, 0, 0, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> s1 = {-788, -799, -600, -799};
    vector<int> s2 = {-100, -799, -1, -799};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> s1 = {-778, -799, -600, -799};
    vector<int> s2 = {-778, -799, -600, -799};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> s1 = {-788, -799, -600, -799};
    vector<int> s2 = {-700, -799, -600, -799};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> s1 = {-600, -799, -788, -799};
    vector<int> s2 = {-601, -799, -788, -799};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> s1 = {19, -19, 20, -19};
    vector<int> s2 = {20, 99, 20, 1000};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> s1 = {-5, 10, 78, 10};
    vector<int> s2 = {100, 10, 79, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> s1 = {-5, 10, 78, 10};
    vector<int> s2 = {-999, 10, -10, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> s1 = {10, -5, 10, 78};
    vector<int> s2 = {10, -90, 10, -80};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> s1 = {10, -5, 10, 78};
    vector<int> s2 = {10, 90, 10, 80};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> s1 = {123, 1000, 123, 433};
    vector<int> s2 = {888, 123, 751, 123};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> s1 = {987, 10, 987, 20};
    vector<int> s2 = {-987, 10, -987, 20};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {75, -1000, 75, 1000};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {50, -1000, 50, 1000};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {100, 1000, 100, -1000};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {110, 60, 90, 60};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {110, 60, 60, 60};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {110, 60, 50, 60};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> s1 = {50, 60, 100, 60};
    vector<int> s2 = {110, 60, 40, 60};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> s1 = {0, 0, 0, 0};
    vector<int> s2 = {0, 0, 0, -5};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> s1 = {0, 0, 2, 0};
    vector<int> s2 = {1, 0, 10, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> s1 = {0, 0, 0, 1};
    vector<int> s2 = {0, 1, 0, 2};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> s1 = {0, 0, 0, 0};
    vector<int> s2 = {0, 0, 0, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> s1 = {-10, 0, 10, 0};
    vector<int> s2 = {-10, 0, -10, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> s1 = {0, 1, 0, 0};
    vector<int> s2 = {0, -10, 0, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> s1 = {10, 0, -10, 0};
    vector<int> s2 = {5, 0, -5, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> s1 = {1, 1, 1, 3};
    vector<int> s2 = {1, 2, 1, 3};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> s1 = {-1000, -1000, 1000, -1000};
    vector<int> s2 = {-1000, -1000, 1000, -1000};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> s1 = {0, 0, 0, 0};
    vector<int> s2 = {-1, 0, 1, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> s1 = {0, 0, 2, 0};
    vector<int> s2 = {0, 0, 2, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> s1 = {0, -1, 0, 1};
    vector<int> s2 = {1, -1, 0, -1};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> s1 = {0, 1, 0, 10};
    vector<int> s2 = {0, 1, 0, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> s1 = {1, 1, 1, 2};
    vector<int> s2 = {0, 2, 0, 4};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> s1 = {1, 1, 1, 3};
    vector<int> s2 = {1, 1, 1, 3};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> s1 = {0, -1, 0, 1};
    vector<int> s2 = {-1, 0, 1, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> s1 = {0, 0, 0, 1};
    vector<int> s2 = {0, 2, 0, 3};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> s1 = {0, 0, 10, 0};
    vector<int> s2 = {10, 0, 0, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> s1 = {4, 0, 4, 0};
    vector<int> s2 = {5, 0, 3, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> s1 = {1, 1, 1, 2};
    vector<int> s2 = {0, 1, 2, 1};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> s1 = {3, 3, 3, 3};
    vector<int> s2 = {4, 4, 4, 4};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> s1 = {1, 2, 1, 5};
    vector<int> s2 = {1, 5, 1, 9};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> s1 = {10, 0, 9, 0};
    vector<int> s2 = {5, 0, -5, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> s1 = {1, 2, 1, 4};
    vector<int> s2 = {1, 2, 1, -2};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> s1 = {0, 0, 0, 2};
    vector<int> s2 = {0, 1, 0, 1};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> s1 = {0, 0, 1, 0};
    vector<int> s2 = {0, 12, 1, 12};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> s1 = {0, 5, 10, 5};
    vector<int> s2 = {10, 5, 20, 5};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> s1 = {0, 10, 0, 2};
    vector<int> s2 = {1, 5, 10, 5};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> s1 = {0, 1, 0, 2};
    vector<int> s2 = {0, 0, 0, 1};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> s1 = {10, 0, -10, 0};
    vector<int> s2 = {0, 0, 0, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> s1 = {2, 3, 2, 5};
    vector<int> s2 = {2, 7, 2, 10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> s1 = {0, 0, 0, 1};
    vector<int> s2 = {0, 0, -1, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> s1 = {0, -1, 0, 1};
    vector<int> s2 = {-100, 0, -101, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> s1 = {2, 2, 2, 2};
    vector<int> s2 = {2, 1, 2, 3};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> s1 = {0, 0, 10, 0};
    vector<int> s2 = {0, 0, 10, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SEGMENT";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> s1 = {0, 3, 0, 10};
    vector<int> s2 = {0, 0, 10, 0};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> s1 = {0, 0, 0, 3};
    vector<int> s2 = {0, 5, 0, 6};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> s1 = {2, 1, 0, 1};
    vector<int> s2 = {1, 0, 1, 3};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> s1 = {0, -10, 0, 10};
    vector<int> s2 = {0, -10, 10, -10};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "POINT";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> s1 = {1, 1, 1, 1};
    vector<int> s2 = {2, 1, 3, 1};
    Segments* pObj = new Segments();
    clock_t start = clock();
    string result = pObj->intersection(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20148820&rd=9824&pm=6251
********************************************************************************
//#line 82 "Segments.cpp" 
 
#include <string> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <stack> 
#include <queue> 
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
 
class Segments { 
  public: 
  string intersection(vector <int> s1, vector <int> s2) { 
 
    if (s1[0]>s1[2]) swap(s1[0],s1[2]); 
    if (s1[1]>s1[3]) swap(s1[1],s1[3]); 
    if (s2[0]>s2[2]) swap(s2[0],s2[2]); 
    if (s2[1]>s2[3]) swap(s2[1],s2[3]); 
    int x1,y1,x2,y2; 
    x1=(s1[0]>s2[0])?s1[0]:s2[0]; 
    y1=(s1[1]>s2[1])?s1[1]:s2[1]; 
    x2=(s1[2]<s2[2])?s1[2]:s2[2]; 
    y2=(s1[3]<s2[3])?s1[3]:s2[3]; 
  
    if (x1>x2 || y1>y2) return "NO"; 
    if (x1==x2 && y1==y2) return "POINT"; 
    return "SEGMENT"; 
  } 
 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/