/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11323
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

class Filtering {
public:
    vector<int> designFilter(vector<int> sizes, string outcome);
};

vector<int> Filtering::designFilter(vector<int> sizes, string outcome) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> sizes = {3, 4, 5, 6, 7};
    string outcome = "AAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sizes = {3, 4, 5, 6, 7};
    string outcome = "AARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {3, 4, 5, 6, 7};
    string outcome = "RAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sizes = {9};
    string outcome = "A";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sizes = {11, 42};
    string outcome = "AR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sizes = {35, 15};
    string outcome = "AR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 35};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sizes = {4, 3};
    string outcome = "AA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sizes = {10, 32, 65};
    string outcome = "AAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 65};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sizes = {4, 73, 40};
    string outcome = "ARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 40};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sizes = {38, 48, 23};
    string outcome = "RAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sizes = {47, 7, 37};
    string outcome = "RAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sizes = {32, 64, 66};
    string outcome = "RAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64, 66};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sizes = {6, 11, 46};
    string outcome = "RAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 11};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sizes = {63, 33, 44};
    string outcome = "ARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63, 63};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sizes = {9, 12, 1, 3};
    string outcome = "AAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sizes = {5, 2, 10, 19};
    string outcome = "AAAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sizes = {13, 38, 18, 42};
    string outcome = "ARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sizes = {38, 31, 41, 77};
    string outcome = "AARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 38};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sizes = {7, 14, 10, 18};
    string outcome = "AARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sizes = {30, 20, 37, 34};
    string outcome = "RARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sizes = {5, 6, 18, 24};
    string outcome = "ARRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sizes = {33, 44, 73, 60};
    string outcome = "ARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 33};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sizes = {14, 8, 13, 11};
    string outcome = "ARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 14};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sizes = {57, 34, 41, 36};
    string outcome = "RRAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 41};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sizes = {8, 9, 34, 64};
    string outcome = "RARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sizes = {30, 42, 35, 15};
    string outcome = "ARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sizes = {43, 27, 37, 47};
    string outcome = "ARRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 47};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sizes = {19, 18, 33, 24};
    string outcome = "RRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 24};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sizes = {8, 6, 5, 2};
    string outcome = "ARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sizes = {29, 18, 24, 8, 12, 4, 26, 17, 3, 10, 2, 25, 35, 28};
    string outcome = "RRRRRRRRRRARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sizes = {5, 20, 48, 69, 75, 46, 53, 1, 15, 54, 55, 2, 36, 3, 62, 21, 28, 31, 82, 71, 72, 14, 17, 16, 86, 26, 19, 24, 6, 47, 40, 29, 30, 41, 88, 79, 39, 58, 66, 56, 76, 67};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88, 88};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sizes = {32, 37, 46, 40, 15, 76, 42, 3, 33, 10, 53, 50, 64, 38, 78, 52, 13, 56, 71, 43, 26, 25, 9, 12, 55, 28, 57, 44, 7, 67, 17, 30, 4, 21, 47, 61, 75, 6, 14, 80, 48, 72, 11, 16, 27, 2, 8, 62, 36, 63};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 17};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sizes = {51, 1, 37, 17, 14, 12, 72, 65, 35, 52, 26, 4, 78, 70, 13, 31, 59, 66, 50, 20, 30, 27, 29, 43, 25};
    string outcome = "RARRRRRRRRRARRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sizes = {49, 32, 38, 46, 10, 12, 21, 39, 16, 43, 19, 9, 45, 33, 48, 44, 50, 13, 5, 1, 11, 35, 41, 51, 6, 2, 30, 34, 7, 14, 31, 36, 24, 23, 47, 4, 22, 25, 18, 42, 27, 37, 20};
    string outcome = "AAAAAAAAAAAAAAAAAARRAAAAARAAAAAAAAARAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 51};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sizes = {34, 44, 9, 45, 16, 6, 5, 42, 4, 27, 18, 12, 24, 25, 3, 31, 28, 15, 33, 7, 37, 35, 30, 29, 17, 36, 40, 41, 38, 26, 14};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 45};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sizes = {68, 57, 7, 41, 76, 53, 43, 77, 84, 52, 34, 48, 27, 75, 36};
    string outcome = "RARRRARRRARARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 57};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sizes = {40, 37, 14, 10, 25, 2, 38, 12, 11, 5, 30, 32, 34, 46, 33, 43, 39, 31, 24, 19, 16, 7, 13, 4, 3, 44, 18, 35, 28};
    string outcome = "RRRRRARRRRRRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sizes = {44, 23, 14, 39, 30, 71, 42, 87, 6, 86, 88, 8, 81, 95, 52, 7, 54, 75, 69, 35, 79, 11, 12, 43, 65, 46, 85, 50, 100, 99, 21, 27, 55, 49, 25, 28, 84, 98, 76, 47};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sizes = {15, 43, 86, 25, 73, 11, 62, 63, 51, 45, 49, 83, 42, 70, 14};
    string outcome = "RRRRRRRRRRRRRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 14};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sizes = {45, 1, 70, 67, 47};
    string outcome = "AARRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 47};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sizes = {48, 22, 47, 35, 67, 15, 41, 26, 4, 66, 27, 61, 20, 54, 69, 10, 9};
    string outcome = "ARAAARAARAAARAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 69};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sizes = {24, 17, 5, 62, 52, 66, 39, 33, 63, 3, 16, 83, 54, 20, 6, 50, 79, 44, 8, 80, 47, 76, 37, 22, 30, 35, 49, 67, 21, 41, 64, 55, 13, 31, 4, 1};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 83};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sizes = {20, 59, 64, 34, 18, 71, 48, 76, 44, 41, 73, 26, 22, 32, 53, 95, 55, 21, 61, 36, 86, 96, 12, 39, 88, 35, 60, 68, 10, 2, 37, 77, 31, 33, 90, 98, 89, 38, 79, 50, 69, 13, 99, 15};
    string outcome = "RRRRRARARRARRRRARRRRAARRARRRRRRARRAAARARRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71, 98};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sizes = {1, 26, 6, 23, 5, 19, 2, 10, 13, 11, 17};
    string outcome = "ARRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sizes = {56, 51, 53, 57, 12, 29, 55, 27, 30, 6, 48, 54, 32, 42, 9, 23, 25, 31, 16, 3, 38, 10, 37, 7, 24, 13, 14, 5, 43, 15, 19, 44, 36, 61, 47, 63, 8, 52, 58, 39, 33, 4, 49, 28, 17, 22, 34};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63, 63};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sizes = {4, 12, 7, 3, 10, 8, 13, 14, 5, 9};
    string outcome = "RRRRRARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 8};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sizes = {67, 28, 79, 70, 53, 90, 16, 43, 6, 18, 48, 3, 80, 50, 65, 74, 54, 68, 52, 56, 14, 64, 88, 27, 46, 30, 19, 44, 17, 45, 15, 89, 59, 1, 69, 57, 72, 78};
    string outcome = "AARAARAAAAAARAAAAAAAAARAAAAAAAARAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 78};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sizes = {9, 38, 28, 16, 45, 25, 20, 3, 51, 12, 1, 4, 24, 44, 37, 8, 53, 50, 13, 27, 32, 54, 42, 21, 14, 40, 52, 46, 6, 18, 5};
    string outcome = "AAAAAAARAARRAAAAAAAAAAAAAAAAAAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 54};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sizes = {36, 39, 59, 47, 54, 61, 22, 86, 51, 50, 20, 84, 96, 42, 40, 17, 49, 58, 82, 19};
    string outcome = "AAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 96};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sizes = {9, 47, 49, 38, 36, 48, 33, 21, 22, 11, 24, 39, 6, 27, 51, 50, 2, 28, 42, 46, 37, 1, 18, 5, 8, 17, 23, 15, 41, 43, 14, 31, 52, 3, 45, 32, 29, 25, 10, 13, 20, 44, 26, 12, 40, 30, 19, 16, 35};
    string outcome = "ARRAARAAAAAARARRRARRARARRAAARRAARRRAAAAAARAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 40};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sizes = {50, 73, 2, 64, 40, 67, 10, 49, 35, 65, 20, 48, 9, 32, 34, 56, 14, 28, 5, 27, 23, 1, 74, 59, 7, 45, 21, 75, 44, 15, 72, 60, 29, 3, 8, 54, 47, 76, 53, 77, 25, 58, 6, 63, 43, 55, 57, 38, 71, 41};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sizes = {78, 7, 87, 50, 61, 55, 9, 30, 31, 10, 66, 92, 28, 35, 21, 43, 54, 25, 3, 13, 91, 37, 24, 15, 39, 49, 80, 51, 75, 96, 76, 12, 65, 77, 42, 46, 74, 63, 95, 44, 17, 36, 88, 16, 73, 79, 6, 71, 85, 89};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96, 96};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sizes = {20, 21, 31, 6, 10, 25, 28, 41, 26, 14, 13, 44, 8, 38, 33, 11, 58, 2, 36, 60, 29, 63, 34, 37, 7, 48, 5, 40, 39, 64, 16, 46, 42, 15, 56, 50, 65, 57, 66, 32, 9, 19, 27, 17, 35, 4, 62, 52, 54, 59};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {63, 63};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sizes = {20, 43, 31, 11, 21, 10, 29, 2, 23, 15, 8, 28, 25, 35, 49, 5, 27, 33, 46, 14, 13, 44, 7, 17, 47, 36, 1, 12, 45, 22, 38, 34, 6, 30, 3, 42, 50, 16, 48, 39, 24, 26, 9, 32, 19, 18, 4, 40, 37, 41};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 16};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sizes = {62, 83, 56, 10, 82, 12, 55, 89, 74, 80, 40, 39, 73, 32, 69, 6, 24, 87, 47, 76, 86, 1, 50, 64, 3, 46, 41, 53, 42, 51, 8, 85, 75, 4, 65, 20, 66, 79, 11, 23, 59, 29, 68, 28, 14, 70, 91, 49, 13, 7};
    string outcome = "RRRARARRRRRRRARAARRRRARRARRRRRARRARARRAARARAARRRAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 32};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sizes = {3, 66, 28, 2, 49, 29, 55, 38, 14, 56, 60, 63, 61, 30, 52, 50, 39, 19, 59, 1, 12, 51, 35, 57, 13, 45, 65, 53, 17, 26, 67, 54, 31, 24, 58, 33, 8, 34, 22, 47, 40, 5, 23, 21, 4, 43, 36, 64, 18, 11};
    string outcome = "ARAARARRARRRRARRRARAARRRARRRAARRAARAARARRAAAARRRAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 33};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sizes = {85, 52, 46, 74, 83, 50, 33, 77, 17, 78, 2, 29, 22, 54, 11, 61, 73, 45, 58, 60, 62, 44, 55, 23, 21, 26, 72, 82, 70, 59, 53, 4, 7, 6, 71, 28, 24, 49, 51, 47, 39, 40, 14, 69, 67, 79, 56, 16, 18, 37};
    string outcome = "ARRAARRARARRRRRRARRRRRRRRRAAARRRRRARRRRRRRRRRARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 85};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sizes = {37, 11, 73, 26, 40, 35, 39, 13, 36, 10, 63, 12, 15, 6, 30, 27, 46, 31, 29, 59, 44, 32, 70, 49, 8, 48, 1, 17, 69, 43, 4, 58, 55, 45, 79, 9, 54, 78, 51, 16, 33, 71, 67, 72, 25, 64, 61, 2, 24, 56};
    string outcome = "RRARARARRRARRRRRARRAARAARARRAARAAAARAAARRAAARAARRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 79};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sizes = {74, 6, 80, 13, 41, 55, 22, 30, 44, 40, 73, 18, 50, 9, 23, 68, 43, 1, 71, 20, 75, 78, 15, 4, 53, 2, 28, 58, 77, 7, 48, 64, 17, 34, 49, 33, 16, 60, 14, 19, 61, 63, 82, 57, 10, 47, 25, 54, 24, 69};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 82};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sizes = {4, 35, 28, 16, 37, 55, 20, 21, 36, 49, 6, 39, 26, 31, 56, 33, 58, 47, 5, 43, 34, 25, 1, 12, 17, 54, 29, 41, 3, 22, 7, 15, 9, 38, 10, 18, 32, 40, 46, 13, 23, 14, 50, 53, 52, 11, 19, 2, 48, 24};
    string outcome = "RRARRRRRRRRRRARARRRRRRRRRRARRRRRRRRRARRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 33};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sizes = {45, 27, 55, 38, 9, 42, 48, 41, 86, 10, 28, 63, 65, 5, 15, 62, 6, 81, 31, 37, 83, 47, 67, 17, 72, 50, 23, 7, 74, 12, 52, 49, 24, 4, 82, 90, 22, 64, 16, 46, 34, 3, 36, 35, 71, 84, 61, 32, 43, 54};
    string outcome = "RRARRRRRARRAARRARARRARARARRRARARRRARRARRRRRRAAARRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 86};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sizes = {31, 43, 48, 1, 47, 40, 11, 50, 22, 29, 37, 23, 20, 30, 5, 16, 26, 41, 18, 13, 34, 38, 19, 46, 3, 49, 36, 25, 8, 21, 14, 12, 32, 28, 24, 51, 7, 52, 9, 27, 42, 44, 45, 17, 10, 6, 4, 15, 33, 35};
    string outcome = "RRRRRRRRARRAARRRRRRRRRRRRRRRRARRRRARRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 24};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sizes = {55, 33, 31, 18, 24, 11, 39, 27, 34, 50, 14, 1, 43, 36, 47, 3, 54, 9, 17, 10, 48, 45, 40, 44, 32, 4, 26, 56, 37, 19, 23, 2, 16, 41, 28, 38, 30, 46, 52, 49, 35, 53, 12, 13, 15, 8, 29, 20, 21, 51};
    string outcome = "RAARRRARAARRAAARRRRRAAAAARRRARRRRARAAARAARRRRRRRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 51};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sizes = {28, 32, 83, 45, 10, 81, 99, 2, 88, 5, 37, 21, 38, 62, 33, 78, 9, 55, 42, 34, 14, 75, 35, 60, 4, 1, 47, 16, 25, 44, 53, 77, 57, 63, 89, 46, 39, 6, 36, 24, 49, 100, 26, 13, 90, 69, 66, 41, 52, 11};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sizes = {100, 94, 26, 82, 45, 13, 97, 74, 96, 69, 4, 59, 63, 12, 73, 65, 85, 91, 6, 2, 38, 1, 55, 76, 28, 57, 99, 51, 92, 19, 52, 15, 43, 61, 71, 17, 48, 86, 95, 14, 20, 66, 7, 5, 37, 87, 90, 64, 70, 60};
    string outcome = "RAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 99};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sizes = {68, 37, 95, 77, 67, 100, 29, 35, 92, 46, 98, 73, 83, 69, 45, 61, 44, 60, 10, 24, 71, 62, 30, 94, 11, 31, 76, 79, 2, 21, 1, 82, 80, 75, 91, 9, 72, 13, 7, 96, 58, 93, 74, 18, 38, 56, 52, 63, 51, 65};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAARAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 100};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sizes = {24, 8, 37, 10, 23, 13, 15, 16, 7, 20, 36, 33, 26, 12, 27, 34, 3, 35, 19, 21, 31, 22, 1, 32, 28, 9, 5, 2};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 37};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sizes = {26, 81, 9, 14, 43, 77, 55, 57, 12, 34, 29, 79, 40, 25, 50};
    string outcome = "ARAAARRARARARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {10, 23, 26, 27, 8, 1, 22, 16, 30, 20, 7, 5, 19, 29, 18, 38, 9, 36, 34, 35};
    string outcome = "AAAAAAAAAAAAAAAAARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {4, 2, 11, 19, 14, 8, 29, 13, 6, 5, 22, 7};
    string outcome = "ARARAARAAARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 14};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sizes = {33, 20, 41, 24, 36};
    string outcome = "RARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {51, 22, 13, 62, 41, 46};
    string outcome = "AARAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 62};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sizes = {16, 40, 24, 23, 25, 32, 39, 45, 21, 36, 51, 41, 44, 43, 27, 5, 47, 12};
    string outcome = "RAARRAAAAARRAAAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {52, 10, 63, 75, 42, 85, 8, 18, 15, 26, 33, 56, 44, 64, 46, 47, 29, 1, 16, 30, 13, 79, 21, 84, 43, 81, 36, 61, 6, 11, 66, 73, 51, 74, 58, 40, 48, 27, 82, 67, 78, 55, 12, 54};
    string outcome = "RAARAAARRAAAAAAARARAAAAARAARAAAAAAARRRAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sizes = {23, 27, 16, 12, 1, 4, 15, 28, 6, 9, 44, 42, 24, 26, 17, 2, 20, 46, 51, 10, 47, 3, 13, 21, 18, 32, 37, 22, 8, 38, 33, 43, 41, 14, 39, 45, 48, 49, 30, 25, 7, 34};
    string outcome = "AAAAAAAARRARAAAAAAAAAAAAAARAAAAAARAAAAARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {39, 37, 42, 36, 46, 54, 26, 19, 2, 11, 53, 45, 47, 30, 18};
    string outcome = "RAAAARAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sizes = {25, 52, 40, 37, 61, 56, 42, 62, 53, 73, 35, 41, 28, 9, 33, 65, 22, 13, 66, 2, 84, 29, 44, 81, 58, 85, 80, 70, 10, 50, 43, 75, 77, 1, 78, 8, 49, 20, 14, 59, 48, 55, 76, 47, 3, 71, 4, 60, 31, 39};
    string outcome = "RAAAAAAARAAAAAAAAAAAAAAAAAAAAAAAAAAARAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sizes = {21, 34, 3, 35, 36, 11, 50, 44, 5, 14, 2, 42, 58, 57, 17, 55, 45, 48, 29, 39, 59, 15, 43, 47, 46, 32, 12, 33, 9, 54, 40, 10, 1, 13, 53, 31, 18, 27};
    string outcome = "AAAAAAAAAARAAAAAAAARAAAAAAAARARRAARRAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {10, 29, 21, 41, 53, 52, 32, 17, 7, 56, 44, 4, 42, 27, 25, 26, 2, 54, 47, 59, 34, 48, 57, 51, 45, 49, 14, 55, 20, 12, 23, 6, 39, 15, 22, 36, 33, 11, 58, 46, 38, 13, 40, 28, 35, 5, 31};
    string outcome = "ARAAARAAAAARARAAAARAAAARRAAAAAARAAAAARAARARRARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {63, 10, 46, 19, 23, 48, 17, 1, 59, 67, 4, 60, 8, 3, 28, 53, 65, 29, 30, 43};
    string outcome = "AAARARAAAAAAAARRRAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {57, 13, 70, 73, 56, 38};
    string outcome = "AAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 73};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sizes = {7, 43, 8, 23, 18, 40, 49, 39, 1, 35, 41, 26, 34, 11, 13, 22, 12, 2, 32, 33, 42, 44, 20, 36, 10, 48, 27, 29, 17, 31, 3, 24, 16, 30, 21, 15, 37, 25, 14, 47, 46, 9, 19, 4, 38, 45, 6, 28, 5, 50};
    string outcome = "RRRRRARRARRRRRRRRRRRRRRARRRARRRAAAARRRAAAARRARRARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {66, 60, 39, 6, 62, 72, 2, 9, 56, 73, 14, 45, 74, 4, 15, 76, 68, 32, 71, 63, 33, 46, 35, 50, 26, 51, 12, 20, 59, 53, 24, 58, 31, 17, 19, 5, 49, 69, 7, 10, 21, 23, 16, 29, 41, 75, 30, 37, 34, 3};
    string outcome = "AAAAAAAAARAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {1, 39, 52, 50, 65, 44, 24, 75, 43, 42, 48, 3, 13, 36, 57, 15, 45, 68, 55, 16, 22, 59, 32, 26, 73, 69, 40, 7, 66, 35, 81, 41, 17, 78, 54, 12, 79, 14, 61, 37, 33, 46, 10, 11, 67, 6, 62, 21, 5, 34};
    string outcome = "RRRRRRRARRARRRRRRRRRRARRRRRRRRRRRARRRRRRRRRARARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {48, 59, 56, 44, 51, 54, 35, 47, 1, 49, 30, 17, 32, 18, 61, 22, 33, 26, 43, 28, 8, 40, 37, 27, 2, 52, 13, 23, 42, 25, 62, 38, 24, 4, 3, 12, 41, 7, 57, 19, 10, 46, 14, 5, 31, 50, 45, 39, 29, 58};
    string outcome = "RRRRRARRARARARRRRRAARRARRRARRARRARRRRARRRRRAAARRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {24, 17, 9, 56, 57, 12, 6, 53, 18, 45, 22, 34, 69, 7, 11, 41, 47, 20, 5, 66, 3, 23, 26, 58, 61, 28, 40, 2, 15, 21, 72, 49, 63, 38, 1, 32, 64, 27, 14, 54, 65, 50, 31, 13, 59, 46, 19, 8, 71, 39};
    string outcome = "RRRRRAARRRRRRRRRRRRARRRRRRRRRRRRRRARRRRRRRRRRRRARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> sizes = {66, 33, 31, 62, 48, 24, 67, 71, 51, 20, 54, 23, 61, 27, 10, 30, 2, 65, 29, 39, 56, 50, 4, 68, 16, 53, 43, 14, 36, 17, 25, 59, 55, 1, 57, 52, 38, 37, 6, 7, 63, 19, 5, 13, 18, 3, 28, 41, 73, 40};
    string outcome = "RRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRRRRARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {40, 21, 34, 8, 48, 65, 61, 38, 2, 64, 52, 44, 20, 73, 13, 1, 72, 54, 63, 43, 69, 19, 59, 9, 51, 17, 67, 45, 23, 30, 12, 24, 39, 68, 41, 71, 56, 55, 27, 58, 6, 74, 22, 53, 46, 15, 57, 35, 49, 33};
    string outcome = "AAARAAARRRRAAARRAAAAAARAARRAARRARARRARRAAAAAAAARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {53, 69, 60, 14, 47, 22, 29, 6, 42, 70, 21, 25, 5, 61, 16, 9, 41, 56, 38, 15, 46, 40, 39, 19, 18, 54, 17, 51, 55, 59, 33, 11, 31, 66, 63, 48, 23, 20, 43, 71, 68, 12, 4, 57, 1, 2, 52, 36, 37, 67};
    string outcome = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAARAAAAAAAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {52, 21, 14, 59, 28, 3, 23, 40, 78, 94, 62, 54, 75, 53, 95, 17, 12, 31, 65, 44, 15, 76, 9, 33, 49, 74, 88, 26, 16, 47, 22, 2, 73, 38, 51, 11, 81, 84, 1, 93, 18, 34, 30, 92, 56, 24, 10, 91, 7, 69};
    string outcome = "RRRRRRRRRRARRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> sizes = {41, 15, 19, 2, 48, 46, 37, 51, 7, 45, 44, 1, 9, 40, 3, 52, 30, 57, 4, 34, 55, 12, 61, 10, 60, 25, 21, 36, 28, 32, 47, 26, 11, 43, 24, 56, 18, 6, 35, 50, 31, 53, 54, 23, 29, 38, 13, 27, 20, 22};
    string outcome = "ARRRRARRRRRRRARRRRRRARAAARRRRRRRRRRRRAARRRRARARRAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {56, 52, 37, 49, 26, 19, 57, 20, 63, 34, 22, 17, 58, 13, 16, 38, 25, 2, 18, 43, 27, 40, 59, 60, 24, 33, 53, 5, 4, 23, 7, 10, 8, 54, 29, 35, 50, 61, 44, 45, 15, 46, 62, 32, 21, 39, 9, 28, 11, 1};
    string outcome = "AAAARRRAARARRAAAARRAAAAAARAAARRRRARARAARRARRAARAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {46, 10, 51, 28, 57, 53, 27, 56, 64, 44, 11, 26, 12, 39, 37, 54, 17, 4, 31, 3, 33, 49, 35, 16, 30, 25, 29, 55, 7, 21, 43, 36, 13, 15, 8, 48, 58, 23, 14, 5, 47, 18, 22, 62, 19, 45, 34, 52, 63, 59};
    string outcome = "AARRRRRARRAARRRRRRRRRRRARRRRRARRRRRAARRRRRARARRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {16, 15, 7, 65, 29, 13, 31, 25, 5, 54, 9, 53, 52, 26, 34, 22, 48, 21, 28, 20, 44, 27, 8, 19, 17, 40, 51, 6, 66, 23, 41, 30, 62, 14, 42, 39, 24, 58, 2, 33, 63, 59, 36, 60, 61, 4, 46, 3, 64, 45};
    string outcome = "AAARAAAAAAAAAAAAAAAAAARRRAAAAAAAAARARRAAAAAAAAAARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {73, 61, 51, 23, 50, 54, 75, 9, 85, 28, 84, 33, 66, 62, 88, 86, 32, 19, 83, 43, 18, 14, 94, 96, 7, 11, 76, 2, 16, 8, 97, 21, 69, 46, 30, 68, 13, 60, 25, 70, 1, 87, 41, 56, 89, 82, 53, 31, 47, 90};
    string outcome = "ARRARRAARRRRRRRARAARARRRRARRRARARARRRRRRAARRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {48, 53, 68, 5, 30, 85, 55, 61, 24, 16, 59, 41, 15, 60, 9, 4, 72, 64, 49, 81, 20, 7, 31, 37, 57, 35, 44, 12, 14, 73, 23, 52, 86, 94, 70, 1, 77, 45, 92, 58, 32, 87, 88, 75, 62, 89, 90, 39, 42, 3};
    string outcome = "AARAAAARAARARRAAARAAARRRAAARRARAARAARAARAARAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {13, 6, 21, 33, 35};
    string outcome = "RRARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {9, 1, 34, 5, 69, 31, 67, 59, 21, 40, 38, 41, 17, 2, 63, 66, 4, 7, 60, 22, 27, 53, 58, 55};
    string outcome = "RRARRAAARAARRRAAARAAARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {56, 31, 46, 54, 62, 17, 3, 76, 12, 57, 49, 4, 59, 85, 69, 25, 18, 29, 43, 21, 13};
    string outcome = "RRRAARRRRRRRARARARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {67, 13, 54, 19, 61, 90, 82, 43, 84, 55, 36, 85, 17, 4, 66, 30, 96};
    string outcome = "RAAAARRRAARRAARAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> sizes = {15, 5, 30, 37, 10, 50, 19, 65, 23, 45, 48, 1, 9, 38, 2, 55, 8, 14, 52, 29, 56, 58, 4, 3, 46, 39, 32, 59, 60, 31, 11, 49, 6, 27, 12, 51, 33, 35, 40, 41, 17, 21};
    string outcome = "RRARRRRRARRRRRRRRARARRRRRRARRARRRARRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> sizes = {39, 57, 20, 16, 61, 65, 30, 58, 19, 38, 50, 10, 37, 60, 8, 43, 67, 42, 15, 55, 25, 59, 31, 52, 14, 18, 44, 51, 66, 17};
    string outcome = "RRRRARRRRAARRRRRRRRARRRARRAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> sizes = {24, 69, 9, 53, 58, 71, 30, 55, 76, 41, 19, 42, 28, 37, 18, 52, 70, 4, 11, 35, 50, 49, 75, 47, 51, 29, 56, 14};
    string outcome = "RARRARRRRRRRRRRRARRRRRRRRRAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56, 70};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> sizes = {6, 48, 68, 16, 1, 34, 69, 17, 7, 28, 46, 45, 37, 54, 52, 53, 22, 24, 44, 43, 61, 47, 63, 60, 49, 29, 26, 56, 30, 21, 27, 62, 51, 14, 58, 12, 31, 10, 42, 8, 13};
    string outcome = "RRRRRARRRRRRRRRRRRRRRRRRRARRARRRARRRARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {13, 20, 9, 28, 10, 30, 41, 3, 15, 12, 16, 7, 27, 24, 42, 26, 38, 43, 19, 34, 22, 8, 1, 37, 32};
    string outcome = "ARARARRARAAARRRRRRARRAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {9, 36, 41, 31, 27, 13, 2, 38, 24, 6, 17, 19, 40, 35, 16, 39, 18, 30, 32, 12, 7, 10, 4, 14, 21};
    string outcome = "RARAARRRARAAARRAAARRRRRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {12, 54, 63, 40, 7, 44, 59, 77, 57, 45, 15, 50, 35, 27, 13, 70, 16, 62, 66, 4};
    string outcome = "RAAAAAARAAAAAARRAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> sizes = {24, 29, 6, 17, 22, 15};
    string outcome = "RRRRAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {16, 53, 46, 7, 18, 30, 48, 35, 78, 8, 62, 28, 33, 5, 23, 47, 29, 22, 14, 9, 12, 79, 73, 40, 72, 27, 69, 34, 1, 50, 13, 68, 64, 49, 65, 74, 42, 58};
    string outcome = "RAARRRARRRAARRRARRARRRRARRRRRARRAARRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {43, 36, 27, 57, 8, 48, 17, 59, 44, 61, 54, 2, 58, 55, 14, 19, 6, 7, 5, 37, 25, 53, 28, 40, 16, 63, 30, 15};
    string outcome = "RARRRRARRARRRRRRRRRARRAARRAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {88, 67, 24, 53, 27, 11, 47, 14, 85, 28, 46, 64, 48, 29, 30, 22, 73, 81, 91, 49, 17, 69, 76, 78, 71, 61, 90, 13, 43, 83, 68, 31, 41, 12, 6, 26, 36, 5, 63, 7};
    string outcome = "RRARAARARRRRRRAARRRRARRRRRRARRRRAARARRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> sizes = {48, 6, 61, 2, 51, 19, 55, 30, 70, 1, 17, 47, 16, 4, 63, 58, 57, 13, 62, 67, 11, 26, 39, 18, 21, 60, 65, 42, 8, 29, 69, 12, 9, 15, 45, 5, 73, 40, 23, 34, 10, 66, 59, 53, 46, 56, 25, 41, 49, 44};
    string outcome = "RARRRARRRRARAARRRRRRARRAARRRAARAAARARRRRARRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {65, 4, 19, 58, 62, 43, 48, 8, 33, 42, 45, 73, 9, 5, 2, 17, 46, 66, 10, 59, 24, 60, 57, 71, 21, 72, 55, 44, 13, 3, 25, 70, 50, 26, 6, 53, 37, 22, 36, 16, 31, 28, 47, 14, 49, 32, 54, 29, 68, 41};
    string outcome = "RRARRARRAARARRRARRRRRRRRARRRRRARRARRRAAAAARARARARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {51, 1, 28, 80, 3, 32, 55, 57, 40, 33, 37, 9, 82, 47, 53, 31, 44, 11, 77, 19, 42, 13, 49, 73, 67, 74, 59, 20, 5, 48, 22, 65, 24, 72, 15, 64, 16, 50, 75, 18, 83, 63, 21, 29, 68, 6, 17, 25, 30, 45};
    string outcome = "RRRRRRRRRRRAARRRRARRRARRRRRRARRRRRARARRRRRRRRAARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {66, 12, 68, 46, 4, 52, 38, 22, 21, 39, 58, 3, 37, 11, 71, 31, 63, 67, 34, 69, 17, 44, 29, 64, 15, 55, 49, 16, 57, 30, 36, 50, 28, 2, 23, 25, 60, 48, 74, 40, 65, 72, 18, 70, 1, 33, 47, 6, 10, 19};
    string outcome = "ARRRRARRRRRRRRRRRRRRRRRRRRRRRRRRARRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {70, 63, 67, 34, 38, 57, 30, 43, 65, 29, 1, 96, 76, 75, 80, 68, 56, 64, 40, 86, 18, 32, 71, 17, 46, 62, 10, 59, 2, 77, 61, 54, 4, 7, 26, 73, 78, 50, 39, 90, 19, 91, 25, 72, 53, 88, 66, 60, 27, 16};
    string outcome = "RAAAAARAARRRRRRAAAARRARRAARARRAAARRRRAARRRRRARAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {24, 61, 13, 8, 57, 18, 16, 23, 17, 56, 68, 42, 26, 38, 19, 12, 66, 53, 58, 44, 40, 47, 35, 39, 67, 70, 36, 3, 33, 21, 43, 1, 5, 45, 51, 31, 29, 11, 4, 48, 28, 10, 27, 59, 30, 14, 32, 20, 50, 41};
    string outcome = "ARARRAAAARRRARARRRRRRRARRRRRRARRRRRRRARRARARRARARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {59, 34, 63, 55, 52, 66, 5, 36, 4, 15, 17, 60, 14, 41, 26, 6, 20, 48, 24, 13, 9, 40, 8, 54, 68, 2, 50, 56, 53, 23, 62, 21, 1, 65, 43, 69, 7, 22, 42, 32, 19, 30, 27, 39, 10, 28, 29, 58, 16, 11};
    string outcome = "AAAAAARRRAAAAAARAAAAAAAARRAAAAAARAARAAAAAAAAAAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {81, 39, 32, 71, 10, 46, 61, 44, 28, 70, 80, 31, 4, 36, 78, 92, 64, 9, 2, 50, 65, 73, 37, 56, 41, 22, 75, 15, 5, 33, 45, 72, 82, 55, 18, 29, 48, 26, 7, 14, 68, 17, 60, 23, 13, 69, 35, 90, 8, 59};
    string outcome = "RAARRARARRRARARRRRRRRRARARRRRAARRRRRARRRRRRRRRARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 48};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> sizes = {45, 16, 31, 88, 15, 70, 90, 53, 95, 61, 28, 20, 75, 44, 81, 84, 14, 76, 52, 33, 59, 5, 92, 85, 12, 57, 50, 18, 94, 87, 93, 23, 46, 3, 82, 66, 34, 21, 60, 63, 38, 83, 2, 62, 42, 19, 80, 39, 43, 58};
    string outcome = "RAARARRRRRAARARRRRRARRRRRRRARRRARRRAAARRARRRAARAAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> sizes = {10, 15, 39, 13, 52, 44, 57, 28, 11, 49, 54, 26, 50, 40, 56, 45, 51, 41, 36, 6, 3, 55, 43, 37, 1, 12, 46, 33, 9, 47, 30, 31, 25, 42, 58, 7, 4, 5, 22, 23, 24, 32, 17, 29, 34, 48, 8, 21, 16, 20};
    string outcome = "RRRRRRRRRRARRRARARRRRARRRRRRRRRRRRRRRRRRRRRRRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {59, 80, 87, 71, 37, 2, 19, 82, 58, 32, 26, 49, 55, 30, 33, 21, 53, 75, 66, 84, 17, 23, 96, 61, 77, 90, 67, 13, 47, 72, 42, 14, 48, 22, 81, 24, 43, 4, 78, 91, 29, 28, 40, 79, 88, 10, 8, 83, 63, 86};
    string outcome = "ARRARRAAARRAARRRAAARRRRAARARAARRARRRARARRRRARRRRAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {67, 38, 7, 11, 48, 5, 24, 25, 15, 19, 20, 14, 6, 47, 36, 63, 4, 52, 33, 44, 22, 78, 77, 73, 35, 3, 21, 46, 27, 34, 2, 65, 60, 12, 1, 16, 71, 62, 69, 51, 29, 10, 58, 64, 18, 56, 42, 66, 53, 54};
    string outcome = "RRRRRRRRRRRRRRRRRRARRRRRRRRRRARRRRRRRRRRRRARRRRRRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {89, 7, 86, 9, 25, 73, 47, 90, 69, 1, 40, 6, 55, 37, 34, 82, 61, 30, 66, 64, 84, 67, 33, 31, 42, 17, 39, 28, 23, 76, 49, 21, 15, 52, 60, 12, 78, 77, 50, 56, 75, 16, 65, 58, 91, 81, 2, 83, 22, 18};
    string outcome = "ARARAAARARAAAAAAAAAAAAAAAAAARAAAAAAAAAAAAAARRARAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> sizes = {80, 38, 56, 13, 49, 87, 74, 27, 18, 78, 42, 88, 47, 30, 43, 54, 32, 17, 97, 29, 37, 10, 22, 31, 26, 82, 76, 8, 57, 53, 14, 36, 79, 5, 65, 85, 20, 91, 11, 69, 35, 33, 94, 86, 51, 19, 68, 72, 9, 41};
    string outcome = "ARARAAARRARRRRRARRRRRRRRRAARAARRARAARRRARRRAARAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 87};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> sizes = {22, 41, 62, 68, 17, 74, 47, 65, 25, 24, 48, 6, 73, 36, 42, 26, 5, 51, 35, 19, 27, 58, 11, 8, 43, 33, 52, 54, 1, 10, 50, 55, 61, 45, 70, 20, 30, 13, 63, 69, 64, 53, 12, 2, 46, 15, 31, 56, 9, 72};
    string outcome = "AARRARARAAARRAAARAAAARAAAAAARAAARARAARRRRAARAAARAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {68, 57, 7, 41, 76, 53, 43, 77, 84, 52, 34, 48, 27, 75, 36};
    string outcome = "RARRRARRRARARRR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 57};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> sizes = {26, 81, 9, 14, 43, 77, 55, 57, 12, 34, 29, 79, 40, 25, 50};
    string outcome = "ARAAARRARARARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {26, 81, 9, 14, 43, 77, 55, 57, 12, 34, 29, 79, 40, 25, 50};
    string outcome = "ARAAARRARARARAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> sizes = {1, 2, 3, 4, 5};
    string outcome = "ARAAR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {1, 2, 3, 4, 5};
    string outcome = "RRARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {72, 52, 70};
    string outcome = "ARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 72};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> sizes = {3, 4, 5, 6, 7};
    string outcome = "AARAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {2, 1};
    string outcome = "AA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> sizes = {3, 7, 2};
    string outcome = "AAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6};
    string outcome = "RARARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
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
    vector<int> sizes = {3, 4, 5, 6, 7};
    string outcome = "RRRRA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 7};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> sizes = {5, 6};
    string outcome = "AR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> sizes = {3, 6, 4};
    string outcome = "ARA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> sizes = {4};
    string outcome = "A";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> sizes = {1, 3, 5};
    string outcome = "AAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> sizes = {49, 31, 26, 13, 7, 12, 14, 4, 8};
    string outcome = "ARARAAAAA";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> sizes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    string outcome = "RRAARRAARR";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> sizes = {100};
    string outcome = "A";
    Filtering* pObj = new Filtering();
    clock_t start = clock();
    vector<int> result = pObj->designFilter(sizes, outcome);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 100};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22906958&rd=14426&pm=11323
********************************************************************************
#include <iostream>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <functional>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;
 
#define FOR(i,a,b)  for(int i=(a);i<(b);++i)
#define F(i,a)      FOR(i,0,a)
#define ALL(x)      x.begin(),x.end()
#define PB          push_back
#define S           size()
 
class Filtering{
    public:
    vector <int> designFilter(vector <int> sizes, string outcome) {
 
        vector<pair <int,char> > v;
        vector<int> res;
 
        for(int c=0;c<outcome.S;c++)
        v.push_back(make_pair(sizes[c],outcome[c]));
 
        sort(ALL(v));
        int aux=0,em=0,fin=0;
 
        for(int c=0;c<v.size();c++)
        {
        if(v[c].second=='A' && aux==0){aux=1;em=v[c].first;}
        if(v[c].second=='R' && aux==1){aux=2;fin=v[c-1].first;}
        if(v[c].second=='A' && aux==2)return res;
        }
 
        if(fin==0)fin=v[v.S-1].first;
        if(aux==0)return res;
 
        res.push_back(em);
        res.push_back(fin);
 
        return res;
    }
 
};

********************************************************************************
*******************************************************************************/