/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12353
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

class UnknownTree {
public:
    int getCount(vector<int> distancesA, vector<int> distancesB, vector<int> distancesC);
};

int UnknownTree::getCount(vector<int> distancesA, vector<int> distancesB, vector<int> distancesC) {
    int ret;
    return ret;
}


int test0() {
    vector<int> distancesA = {1};
    vector<int> distancesB = {2};
    vector<int> distancesC = {3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> distancesA = {1, 2};
    vector<int> distancesB = {1, 2};
    vector<int> distancesC = {1, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> distancesA = {10, 11, 10, 5, 12, 10, 9, 9, 8, 6, 9, 12, 11, 8, 9, 9, 10, 4, 7, 12, 10, 13, 10, 3, 7, 12, 7, 11, 7, 7, 10, 8, 8, 6, 6, 10, 9, 8, 7, 9, 10, 9, 9, 7, 8, 9, 9, 9, 11, 7};
    vector<int> distancesB = {8, 9, 8, 3, 10, 8, 7, 7, 6, 4, 7, 10, 9, 6, 7, 7, 8, 2, 5, 10, 8, 11, 8, 1, 5, 10, 5, 9, 5, 5, 8, 6, 6, 4, 4, 8, 7, 6, 5, 7, 8, 7, 7, 5, 6, 7, 7, 7, 9, 5};
    vector<int> distancesC = {8, 5, 6, 3, 10, 8, 7, 1, 6, 4, 3, 4, 3, 4, 1, 1, 6, 8, 5, 4, 4, 5, 8, 5, 5, 10, 5, 5, 5, 5, 2, 2, 4, 2, 4, 8, 7, 6, 3, 7, 4, 5, 7, 5, 4, 5, 7, 7, 3, 1};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 966172686;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> distancesA = {5, 9, 4, 6, 6, 7, 5, 6, 3, 9, 3, 6, 5, 6, 5, 8, 8, 5, 6, 6, 5, 4, 6, 5, 5, 7, 7, 4, 6, 4, 4, 1, 7, 4, 6, 5, 7, 5, 4, 6, 7, 6, 3, 5, 6, 6, 2, 6, 7, 5};
    vector<int> distancesB = {9, 5, 8, 10, 10, 7, 9, 10, 7, 9, 5, 10, 5, 6, 9, 4, 8, 9, 10, 6, 9, 4, 10, 9, 5, 11, 7, 8, 10, 8, 8, 9, 11, 8, 10, 9, 11, 5, 6, 10, 7, 10, 7, 9, 2, 6, 6, 10, 11, 9};
    vector<int> distancesC = {7, 11, 6, 8, 8, 9, 3, 8, 5, 11, 5, 4, 7, 8, 7, 10, 10, 7, 8, 8, 3, 6, 8, 7, 7, 9, 9, 6, 4, 6, 6, 7, 5, 2, 8, 7, 9, 7, 6, 8, 9, 4, 5, 3, 8, 8, 4, 8, 9, 7};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 989568540;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> distancesA = {3, 5, 10, 9, 8, 13, 9, 7, 9, 8, 10, 11, 5, 7, 7, 7, 11, 11, 5, 6, 5, 6, 10, 1, 8, 3, 9, 9, 10, 14, 5, 7, 10, 8, 6, 9, 4, 9, 13, 11, 13, 7, 7, 2, 6, 9, 9, 12, 2, 8};
    vector<int> distancesB = {7, 7, 4, 11, 10, 7, 3, 9, 11, 10, 12, 3, 7, 7, 9, 1, 3, 13, 9, 6, 3, 8, 2, 7, 10, 5, 11, 3, 12, 8, 7, 9, 12, 2, 8, 1, 4, 1, 15, 5, 15, 7, 9, 8, 8, 3, 3, 14, 6, 10};
    vector<int> distancesC = {9, 9, 6, 13, 12, 9, 5, 11, 13, 12, 14, 5, 9, 9, 11, 3, 5, 15, 11, 8, 5, 10, 4, 9, 12, 7, 13, 5, 14, 10, 9, 11, 14, 4, 10, 3, 6, 3, 17, 7, 17, 9, 11, 10, 10, 5, 5, 16, 8, 12};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 678286243;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> distancesA = {3, 9, 12, 11, 10, 14, 13, 12, 10, 11, 6, 15, 15, 10, 15, 10, 13, 13, 8, 12, 16, 1, 10, 8, 14, 4, 15, 7, 9, 11, 15, 14, 8, 14, 10, 14, 12, 11, 2, 5, 18, 8, 13, 9, 6, 12, 7, 8, 9, 14};
    vector<int> distancesB = {8, 6, 9, 8, 7, 11, 2, 9, 7, 4, 7, 12, 12, 1, 12, 7, 10, 10, 5, 9, 13, 10, 7, 5, 11, 15, 12, 8, 10, 4, 4, 3, 5, 11, 7, 11, 9, 8, 13, 6, 15, 5, 10, 2, 17, 5, 4, 5, 6, 7};
    vector<int> distancesC = {13, 11, 14, 13, 12, 16, 3, 14, 12, 9, 12, 17, 17, 6, 17, 12, 15, 15, 10, 14, 18, 15, 12, 10, 16, 20, 17, 13, 15, 9, 3, 2, 10, 16, 12, 16, 14, 13, 18, 11, 20, 10, 15, 7, 22, 10, 9, 10, 11, 12};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 922366565;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> distancesA = {6, 12, 4, 8, 2, 15, 9, 9, 7, 11, 5, 7, 11, 5, 11, 2, 5, 11, 10, 11, 7, 15, 8, 10, 17, 12, 11, 16, 8, 10, 5, 12, 9, 14, 8, 13, 3, 13, 7, 12, 10, 16, 3, 2, 6, 6, 8, 15, 16, 14};
    vector<int> distancesB = {8, 14, 6, 10, 8, 17, 11, 11, 9, 13, 5, 9, 13, 7, 13, 8, 1, 13, 12, 13, 9, 17, 10, 12, 19, 14, 13, 18, 10, 12, 7, 14, 11, 16, 10, 15, 3, 15, 9, 14, 12, 18, 5, 4, 8, 8, 10, 17, 18, 16};
    vector<int> distancesC = {7, 13, 5, 9, 9, 16, 10, 10, 8, 12, 8, 8, 12, 2, 12, 9, 8, 12, 11, 12, 8, 16, 5, 11, 18, 13, 12, 17, 9, 11, 6, 13, 10, 15, 1, 14, 6, 14, 4, 13, 11, 17, 4, 5, 7, 7, 9, 16, 17, 15};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 471267145;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> distancesA = {7, 5, 1, 10, 8, 7, 8, 9, 7, 10, 8, 7, 7, 8, 11, 11, 9, 8, 10, 3, 13, 9, 7, 3, 10, 8, 8, 7, 6, 10, 9, 8, 6, 6, 10, 5, 8, 8, 10, 9, 11, 9, 4, 7, 5, 8, 8, 10, 8, 6};
    vector<int> distancesB = {1, 9, 5, 8, 6, 5, 2, 7, 5, 8, 6, 7, 1, 2, 9, 9, 7, 6, 8, 7, 11, 3, 5, 3, 8, 8, 6, 5, 4, 8, 7, 2, 4, 6, 8, 3, 6, 6, 8, 3, 9, 7, 2, 1, 5, 6, 6, 8, 6, 4};
    vector<int> distancesC = {5, 9, 5, 8, 2, 1, 6, 7, 5, 4, 6, 7, 5, 6, 9, 5, 7, 6, 8, 7, 7, 7, 5, 3, 8, 8, 2, 5, 4, 8, 7, 6, 4, 6, 8, 3, 6, 6, 4, 7, 5, 7, 2, 5, 5, 2, 6, 4, 6, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 823906458;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> distancesA = {1, 12, 7, 5, 12, 5, 13, 6, 9, 7, 9, 13, 11, 10, 9, 10, 6, 14, 8, 12, 14, 12, 12, 13, 15, 6, 2, 4, 13, 10, 12, 6, 12, 10, 10, 3, 11, 3, 13, 8, 12, 12, 13, 4, 8, 10, 10, 7, 4, 6};
    vector<int> distancesB = {7, 14, 9, 7, 14, 7, 15, 8, 11, 9, 11, 15, 13, 12, 11, 12, 8, 16, 2, 14, 16, 14, 14, 15, 17, 8, 4, 2, 15, 12, 14, 8, 14, 12, 12, 5, 13, 5, 15, 10, 14, 14, 15, 6, 10, 12, 12, 9, 6, 8};
    vector<int> distancesC = {9, 8, 3, 5, 8, 9, 9, 10, 9, 7, 9, 9, 7, 10, 1, 10, 2, 10, 12, 8, 10, 8, 8, 9, 11, 6, 6, 8, 9, 2, 8, 10, 8, 6, 6, 7, 7, 7, 9, 4, 8, 8, 9, 4, 12, 6, 2, 7, 8, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 131890278;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> distancesA = {9, 6, 10, 10, 11, 11, 10, 11, 8, 12, 6, 2, 11, 10, 10, 14, 6, 8, 5, 9, 9, 12, 9, 8, 7, 8, 12, 6, 14, 12, 13, 8, 7, 7, 4, 12, 12, 9, 9, 7, 2, 8, 3, 4, 4, 9, 13, 12, 11, 11};
    vector<int> distancesB = {6, 7, 5, 5, 6, 8, 7, 6, 5, 7, 3, 7, 8, 5, 7, 11, 5, 3, 4, 4, 6, 9, 4, 5, 6, 3, 9, 5, 11, 9, 10, 3, 4, 2, 9, 9, 9, 6, 6, 6, 11, 5, 12, 9, 5, 4, 10, 7, 8, 8};
    vector<int> distancesC = {6, 7, 7, 7, 8, 8, 7, 8, 5, 9, 3, 7, 8, 7, 7, 11, 5, 5, 4, 6, 6, 9, 6, 5, 6, 5, 9, 5, 11, 9, 10, 5, 4, 4, 9, 9, 9, 6, 6, 6, 11, 1, 12, 9, 5, 6, 10, 9, 8, 8};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 181122449;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> distancesA = {8, 17, 14, 18, 9, 4, 10, 13, 9, 17, 7, 6, 7, 5, 9, 15, 6, 12, 10, 2, 5, 5, 7, 2, 2, 1, 3, 11, 16, 2, 5, 3, 18, 6, 6, 10, 5, 17, 7, 11, 6, 8, 8, 8, 18, 4, 3, 4, 9, 4};
    vector<int> distancesB = {9, 12, 9, 13, 4, 13, 9, 2, 8, 12, 12, 7, 6, 10, 8, 10, 11, 7, 3, 11, 14, 6, 12, 11, 11, 10, 12, 6, 11, 11, 10, 12, 13, 7, 5, 5, 10, 12, 8, 4, 7, 13, 7, 3, 13, 9, 8, 13, 2, 13};
    vector<int> distancesC = {15, 4, 3, 5, 10, 19, 15, 14, 14, 4, 18, 13, 12, 16, 14, 2, 17, 5, 11, 17, 20, 12, 18, 17, 17, 16, 18, 12, 3, 17, 16, 18, 5, 13, 11, 7, 16, 4, 14, 12, 13, 19, 13, 9, 5, 15, 14, 19, 10, 19};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 935987977;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> distancesA = {6, 8, 7, 8, 6, 10, 6, 3, 8, 9, 6, 7, 10, 7, 7, 5, 6, 8, 2, 5, 3, 4, 2, 7, 4, 6, 3, 7, 8, 7, 8, 8, 7, 10, 1, 8, 7, 7, 5, 5, 1, 7, 7, 7, 6, 7, 7, 7, 6, 7};
    vector<int> distancesB = {6, 8, 1, 10, 6, 10, 6, 3, 4, 9, 2, 9, 10, 5, 7, 7, 6, 8, 4, 3, 5, 6, 8, 5, 2, 6, 5, 7, 8, 5, 8, 8, 3, 10, 7, 6, 1, 7, 5, 5, 7, 7, 7, 3, 8, 3, 7, 1, 4, 3};
    vector<int> distancesC = {5, 7, 2, 9, 5, 9, 5, 2, 3, 8, 1, 8, 9, 4, 6, 6, 5, 7, 3, 2, 4, 5, 7, 4, 1, 5, 4, 6, 7, 4, 7, 7, 2, 9, 6, 5, 2, 6, 4, 4, 6, 6, 6, 2, 7, 2, 6, 2, 3, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 617092208;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> distancesA = {8, 11, 16, 10, 9, 9, 11, 8, 11, 11, 5, 6, 10, 7, 10, 11, 16, 12, 6, 15, 4, 8, 3, 8, 6, 12, 8, 7, 5, 9, 11, 14, 7, 11, 7, 9, 10, 10, 4, 8, 7, 5, 12, 2, 9, 1, 17, 2, 9, 10};
    vector<int> distancesB = {10, 13, 18, 12, 11, 11, 13, 10, 13, 13, 7, 8, 12, 9, 12, 13, 18, 14, 8, 17, 6, 10, 5, 10, 8, 14, 10, 9, 7, 11, 13, 16, 9, 13, 9, 11, 12, 12, 6, 10, 9, 7, 14, 4, 11, 1, 19, 4, 11, 12};
    vector<int> distancesC = {23, 10, 1, 5, 10, 8, 14, 11, 10, 26, 20, 21, 25, 14, 9, 26, 3, 3, 9, 2, 19, 23, 18, 23, 21, 7, 7, 22, 12, 24, 14, 1, 22, 10, 8, 24, 25, 25, 11, 23, 10, 20, 27, 17, 12, 16, 4, 13, 12, 9};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 696136934;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> distancesA = {8, 8, 10, 10, 9, 5, 5, 2, 10, 8, 4, 13, 5, 14, 11, 14, 11, 5, 6, 7, 8, 10, 12, 8, 9, 11, 8, 2, 5, 12, 11, 7, 13, 12, 11, 10, 8, 7, 6, 6, 9, 9, 10, 13, 4, 3, 12, 9, 2, 8};
    vector<int> distancesB = {2, 2, 10, 10, 3, 5, 5, 6, 10, 4, 4, 13, 5, 14, 11, 14, 11, 5, 2, 3, 8, 10, 12, 4, 9, 11, 8, 10, 9, 12, 11, 1, 13, 12, 11, 10, 8, 7, 6, 6, 9, 9, 10, 13, 8, 11, 12, 9, 10, 4};
    vector<int> distancesC = {6, 6, 8, 8, 7, 3, 3, 4, 8, 6, 2, 11, 3, 12, 9, 12, 9, 3, 4, 5, 6, 8, 10, 6, 7, 9, 2, 8, 7, 10, 9, 5, 11, 10, 9, 8, 6, 5, 4, 4, 7, 7, 8, 11, 6, 9, 10, 7, 8, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 449219556;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> distancesA = {10, 12, 8, 10, 13, 7, 13, 10, 10, 10, 5, 8, 8, 12, 9, 14, 8, 4, 15, 4, 7, 3, 10, 10, 11, 12, 9, 8, 10, 7, 9, 7, 6, 10, 7, 10, 8, 12, 11, 8, 11, 8, 10, 7, 9, 2, 9, 8, 8, 12};
    vector<int> distancesB = {9, 7, 1, 5, 8, 6, 8, 5, 5, 5, 4, 3, 7, 7, 8, 9, 3, 5, 10, 7, 6, 6, 5, 9, 6, 7, 4, 7, 5, 2, 4, 6, 5, 5, 6, 5, 7, 7, 6, 7, 6, 7, 9, 6, 4, 7, 8, 3, 7, 7};
    vector<int> distancesC = {10, 8, 4, 6, 9, 7, 9, 6, 6, 2, 5, 4, 8, 8, 9, 10, 4, 6, 11, 8, 7, 7, 6, 10, 7, 8, 1, 8, 6, 3, 5, 7, 6, 2, 7, 6, 8, 8, 7, 8, 7, 8, 10, 7, 5, 8, 9, 4, 8, 8};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 419552783;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> distancesA = {9, 11, 12, 8, 4, 5, 10, 10, 11, 4, 10, 1, 8, 8, 9, 9, 9, 10, 8, 1, 8, 11, 2, 11, 5, 8, 11, 8, 4, 11, 4, 9, 9, 7, 9, 3, 4, 3, 8, 8, 7, 6, 10, 7, 9, 8, 10, 7, 8, 7};
    vector<int> distancesB = {5, 5, 8, 6, 8, 5, 10, 6, 5, 8, 8, 9, 8, 4, 9, 5, 7, 8, 6, 11, 6, 9, 12, 7, 9, 2, 7, 6, 14, 7, 12, 3, 3, 3, 7, 11, 8, 7, 8, 4, 7, 4, 8, 11, 7, 8, 4, 7, 4, 7};
    vector<int> distancesC = {8, 10, 11, 7, 9, 6, 11, 9, 10, 9, 9, 10, 9, 7, 10, 8, 2, 3, 7, 12, 7, 10, 13, 10, 10, 7, 10, 3, 15, 10, 13, 8, 8, 6, 8, 12, 9, 8, 9, 7, 8, 5, 3, 12, 8, 9, 9, 8, 7, 8};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 203484989;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> distancesA = {11, 13, 13, 5, 15, 12, 10, 11, 10, 6, 11, 12, 11, 3, 15, 2, 13, 10, 3, 12, 14, 7, 14, 9, 11, 9, 14, 10, 8, 9, 12, 3, 13, 13, 13, 7, 5, 5, 9, 8, 10, 15, 4, 1, 9, 12, 11, 8, 4, 13};
    vector<int> distancesB = {10, 12, 12, 4, 14, 11, 9, 10, 9, 5, 10, 11, 10, 2, 14, 3, 12, 9, 4, 11, 13, 6, 13, 8, 10, 8, 13, 9, 7, 8, 11, 4, 12, 12, 12, 6, 6, 6, 8, 7, 9, 14, 3, 6, 8, 11, 10, 7, 5, 12};
    vector<int> distancesC = {10, 2, 10, 10, 12, 11, 11, 4, 11, 11, 8, 13, 12, 12, 14, 13, 12, 9, 14, 11, 11, 12, 13, 10, 8, 6, 13, 7, 13, 8, 13, 14, 10, 12, 12, 8, 16, 16, 8, 7, 11, 14, 13, 16, 8, 11, 10, 9, 15, 12};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 165421826;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> distancesA = {4, 12, 7, 10, 9, 6, 12, 7, 8, 2, 14, 11, 9, 12, 10, 2, 10, 3, 7, 4, 11, 9, 4, 5, 8, 9, 4, 3, 4, 8, 13, 7, 12, 5, 9, 4, 10, 10, 8, 13, 11, 6, 6, 2, 7, 8, 5, 10, 6, 7};
    vector<int> distancesB = {6, 8, 7, 6, 9, 6, 8, 1, 4, 8, 10, 7, 5, 8, 6, 8, 6, 3, 3, 2, 7, 5, 10, 5, 4, 3, 4, 5, 4, 2, 9, 7, 8, 7, 5, 4, 6, 6, 8, 9, 7, 2, 6, 4, 7, 4, 1, 6, 6, 3};
    vector<int> distancesC = {10, 8, 11, 4, 13, 10, 8, 7, 4, 12, 10, 7, 5, 8, 4, 12, 6, 7, 3, 6, 7, 5, 14, 9, 8, 9, 8, 9, 8, 8, 9, 11, 6, 11, 3, 8, 6, 6, 12, 9, 7, 6, 10, 8, 11, 2, 5, 4, 10, 7};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 888161276;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> distancesA = {12, 4, 15, 13, 11, 10, 11, 14, 12, 12, 11, 7, 10, 10, 3, 17, 3, 8, 8, 14, 9, 8, 14, 14, 7, 16, 7, 14, 6, 10, 14, 11, 10, 15, 9, 13, 9, 3, 6, 5, 13, 9, 2, 13, 12, 10, 15, 13, 9, 9};
    vector<int> distancesB = {10, 2, 13, 11, 9, 8, 9, 12, 10, 10, 9, 3, 8, 8, 5, 15, 5, 6, 6, 12, 7, 6, 12, 12, 5, 14, 5, 12, 4, 8, 12, 9, 8, 13, 7, 11, 7, 5, 2, 1, 11, 7, 4, 11, 10, 8, 13, 11, 7, 5};
    vector<int> distancesC = {7, 5, 10, 8, 6, 5, 6, 9, 7, 7, 6, 8, 5, 5, 8, 12, 8, 3, 3, 9, 4, 1, 9, 9, 2, 11, 4, 9, 3, 5, 9, 6, 5, 10, 4, 8, 6, 8, 7, 6, 8, 6, 7, 8, 7, 5, 10, 8, 6, 10};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 566861338;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> distancesA = {19, 17, 15, 16, 1, 6, 11, 17, 15, 4, 13, 17, 14, 17, 16, 15, 14, 10, 13, 14, 20, 14, 19, 5, 6, 18, 16, 9, 13, 20, 13, 18, 9, 4, 6, 18, 7, 16, 11, 12, 2, 12, 4, 6, 8, 15, 15, 19, 13, 15};
    vector<int> distancesB = {19, 17, 15, 16, 1, 4, 11, 17, 15, 4, 13, 17, 14, 17, 16, 15, 14, 10, 13, 14, 20, 14, 19, 5, 4, 18, 16, 9, 13, 20, 13, 18, 9, 4, 6, 18, 7, 16, 11, 12, 2, 12, 2, 4, 8, 15, 15, 19, 13, 15};
    vector<int> distancesC = {10, 6, 4, 5, 12, 17, 6, 6, 4, 13, 2, 8, 3, 8, 5, 4, 3, 5, 2, 5, 9, 3, 8, 14, 17, 7, 5, 8, 8, 9, 4, 7, 4, 9, 7, 7, 6, 5, 2, 1, 11, 3, 15, 17, 7, 4, 6, 8, 2, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 692825068;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> distancesA = {7, 9, 9, 8, 6, 8, 7, 8, 9, 13, 6, 6, 9, 7, 9, 5, 11, 11, 9, 11, 7, 10, 8, 7, 9, 10, 8, 6, 5, 8, 6, 8, 9, 9, 7, 4, 8, 4, 9, 8, 9, 13, 7, 8, 2, 8, 9, 10, 4, 7};
    vector<int> distancesB = {7, 9, 9, 4, 6, 8, 3, 4, 9, 13, 2, 6, 1, 7, 9, 5, 11, 11, 9, 11, 7, 6, 4, 7, 5, 10, 4, 6, 5, 8, 6, 8, 1, 9, 7, 8, 8, 4, 9, 8, 9, 13, 7, 8, 6, 4, 9, 10, 8, 7};
    vector<int> distancesC = {6, 8, 8, 3, 5, 7, 2, 3, 8, 12, 1, 5, 4, 6, 8, 4, 10, 10, 8, 10, 6, 3, 1, 6, 2, 9, 1, 5, 4, 7, 5, 7, 4, 8, 6, 7, 7, 3, 8, 7, 8, 12, 6, 7, 5, 1, 8, 9, 7, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 440101908;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> distancesA = {31600284, 31964280, 38197778, 25071546, 32928375, 41366019, 33957155, 26310344, 38252852, 36539694, 30053620, 31169139, 31183683, 35773875, 36303422, 39320509, 26099568, 35276470, 25157942, 35871022, 27672622, 38107798, 14996663, 34028177, 27458905, 31206133, 19801774, 68556763, 18990525, 27634097, 12943564, 40240237, 49263361, 22210876, 32974715, 7714607, 58577862, 34387861, 29443932, 39806708, 7709441, 36493180, 37976519, 28399046, 40514378, 29914986, 33043709, 33795088, 27401812, 10475790};
    vector<int> distancesB = {18162882, 18526878, 13654130, 11634144, 8384727, 27928617, 20519753, 12872942, 13709204, 23102292, 16616218, 6625491, 17746281, 22336473, 11759774, 14776861, 12662166, 10732822, 11720540, 22433620, 14235220, 13564150, 39540311, 20590775, 14021503, 17768731, 6364372, 44013115, 5553123, 14196695, 16535632, 26802835, 24719713, 2332772, 19537313, 16829041, 34034214, 20950459, 16006530, 26369306, 32253089, 23055778, 24539117, 14961644, 27076976, 5371338, 8500061, 20357686, 13964410, 14067858};
    vector<int> distancesC = {23231981, 8395901, 31451973, 18325741, 26182570, 32997716, 2721910, 17942041, 31507047, 28171391, 23307815, 24423334, 24437878, 27405572, 29557617, 32574704, 19353763, 28530665, 18412137, 29125217, 19304319, 31361993, 46231908, 27282372, 20713100, 22837830, 11433471, 61810958, 12244720, 19265794, 23227229, 31871934, 42517556, 15465071, 26228910, 23520638, 51832057, 27642056, 22698127, 33060903, 38944686, 29747375, 31230714, 21653241, 9279133, 23169181, 26297904, 27049283, 3833433, 20759455};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 743577167;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> distancesA = {32785265, 30847597, 33927343, 37181319, 46468744, 32037530, 33157552, 30254835, 17193749, 28884168, 23361309, 18498574, 12088913, 30613587, 31802193, 33095932, 30396047, 25780390, 3352189, 30042616, 27259929, 28811029, 18234097, 25306804, 20958138, 29039225, 35901406, 22547751, 13939487, 38603950, 20938318, 30377498, 29564046, 22483595, 38353793, 23534916, 14503279, 11727254, 18888379, 5589451, 23044496, 6916550, 20789771, 26842133, 25821670, 34947284, 20254192, 26288007, 23878429, 16003766};
    vector<int> distancesB = {17858876, 15921208, 19000954, 22254930, 45141287, 22880367, 18231163, 15328446, 15866292, 13957779, 8434920, 34644565, 10761456, 29286130, 16875804, 10245563, 29068590, 2930021, 19498180, 28715159, 12333540, 5960660, 16906640, 23979347, 19630681, 14112836, 13051037, 21220294, 12612030, 23677561, 6011929, 29050041, 14637657, 21156138, 37026336, 14377753, 13175822, 27873245, 3961990, 21735442, 13887333, 15933819, 5863382, 3991764, 10895281, 33619827, 5327803, 3437638, 22550972, 6846603};
    vector<int> distancesC = {50809714, 48872046, 51951792, 55205768, 64493193, 50061979, 51182001, 48279284, 35218198, 46908617, 41385758, 6230253, 30113362, 48638036, 49826642, 51120381, 48420496, 43804839, 21376638, 48067065, 45284378, 46835478, 36258546, 43331253, 38982587, 47063674, 53925855, 40572200, 31963936, 56628399, 38962767, 48401947, 47588495, 40508044, 56378242, 41559365, 32527728, 13001573, 36912828, 23613900, 41068945, 24940999, 38814220, 44866582, 43846119, 52971733, 38278641, 44312456, 41902878, 34028215};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 408117256;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> distancesA = {21617490, 11546431, 32618214, 32595370, 27176152, 29307457, 15962022, 17679525, 39232642, 24526463, 21152696, 17328381, 5823102, 37657213, 23038809, 32234966, 32429013, 23707191, 8352469, 6842119, 30095003, 39695452, 24829284, 16847549, 27697740, 16275914, 14764514, 10121765, 30542163, 1856458, 20930372, 9282099, 20164550, 32012710, 31891232, 27813739, 26669255, 20955949, 38239582, 32445481, 8848943, 15669054, 21855481, 19346917, 24183015, 17832893, 32923202, 21042881, 14810244, 30741371};
    vector<int> distancesB = {6092279, 15425438, 17093003, 17070159, 11650941, 13782246, 19841029, 21558532, 23707431, 9001252, 25031703, 21207388, 9702109, 22132002, 7513598, 16709755, 16903802, 27586198, 12231476, 10721126, 14569792, 24170241, 9304073, 1322338, 12172529, 750703, 18643521, 25646976, 15016952, 17381669, 5405161, 13161106, 4639339, 17917433, 16366021, 12288528, 30548262, 6860672, 24144305, 16920270, 24374154, 143843, 25734488, 3821706, 10087738, 33358104, 18827925, 5517670, 714967, 15216160};
    vector<int> distancesC = {8416373, 29934090, 23958243, 2561507, 18516181, 28290898, 34349681, 36067184, 30572671, 23509904, 39540355, 35716040, 24210761, 7623350, 14378838, 31218407, 31412454, 42094850, 26740128, 25229778, 61140, 9661589, 23812725, 15830990, 19037769, 15259355, 33152173, 40155628, 21882192, 31890321, 12270401, 27669758, 19147991, 32426085, 1857369, 19153768, 45056914, 21369324, 38652957, 2411618, 38882806, 14652495, 40243140, 10686946, 24596390, 47866756, 33336577, 20026322, 15223619, 29724812};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 19810458;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> distancesA = {2706876, 29387844, 14498937, 14163870, 16914395, 16581274, 4213845, 21764502, 2216572, 11289165, 12726029, 6925004, 21554729, 9555782, 11262175, 16526082, 12279805, 8200137, 13778950, 6364612, 16549873, 11380074, 16471703, 17218554, 18791145, 9949592, 22979813, 27351515, 17723178, 4811092, 7645122, 37471328, 16658784, 17455047, 11807457, 24984538, 1388280, 12341651, 23236407, 17580047, 20665219, 24981685, 11969853, 19838287, 15411312, 35924164, 19149550, 14980325, 30234447, 13266349};
    vector<int> distancesB = {17775461, 41442491, 26553584, 26218517, 28969042, 28635921, 16268492, 33819149, 18265765, 19042278, 20479142, 24630781, 33609376, 21610429, 23316822, 28580729, 20032918, 23268722, 25833597, 14117725, 28604520, 19133187, 28526350, 29273201, 8450858, 17702705, 12639526, 39406162, 25476291, 19879677, 19699769, 49525975, 28713431, 29509694, 23862104, 14644251, 19094057, 24396298, 12896120, 25333160, 32719866, 32734798, 24024500, 31892934, 5071025, 47978811, 31204197, 27034972, 19894160, 25320996};
    vector<int> distancesC = {10101047, 18580853, 3691946, 11681549, 6107404, 14098953, 8594078, 10957511, 10591351, 15669398, 17106262, 16956367, 19072408, 7073461, 8779854, 14043761, 16660038, 15594308, 11296629, 10744845, 14067552, 15760307, 13989382, 14736233, 23171378, 14329825, 27360046, 16544524, 22103411, 12205263, 5162801, 26664337, 14176463, 21835280, 1000466, 29364771, 11419643, 16721884, 27616640, 21960280, 9858228, 29361918, 9487532, 24218520, 19791545, 25117173, 8342559, 12498004, 34614680, 10784028};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 382068220;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> distancesA = {29992908, 28398880, 31307522, 28680170, 29586881, 20169483, 22910030, 26043690, 34383985, 14840142, 12600121, 21814828, 10179384, 1020145, 23129824, 35658903, 35650295, 17212346, 26103929, 25072791, 38153539, 20144670, 24972422, 23975982, 18051201, 21627973, 29707755, 16359229, 23429075, 17165668, 41087855, 25894246, 28861641, 24570101, 15196879, 30937836, 31696092, 34954228, 18294997, 38232003, 29742279, 35004202, 34987038, 31740764, 33869716, 19045049, 24559512, 30273708, 12370109, 20960760};
    vector<int> distancesB = {11205768, 36111122, 28984774, 36392412, 37299123, 7901527, 20587282, 33755932, 32061237, 22552384, 20312363, 19492080, 17891626, 27050865, 20807076, 33336155, 33327547, 14889598, 23781181, 22750043, 35830791, 27856912, 22649674, 31688224, 25763443, 24958765, 27385007, 24071471, 4641935, 24877910, 38765107, 23571498, 26538893, 22247353, 12874131, 28615088, 39408334, 32631480, 26007239, 35909255, 27419531, 32681454, 32664290, 29418016, 31546968, 26757291, 5772372, 37985950, 15700901, 28673002};
    vector<int> distancesC = {29754335, 28160307, 31068949, 28441597, 29348308, 19930910, 22671457, 25805117, 34145412, 14601569, 12361548, 21576255, 9940811, 19100050, 22891251, 35420330, 35411722, 16973773, 25865356, 24834218, 37914966, 19906097, 24733849, 23737409, 17812628, 21389400, 29469182, 16120656, 23190502, 16927095, 40849282, 25655673, 28623068, 24331528, 14958306, 30699263, 31457519, 34715655, 18056424, 37993430, 29503706, 34765629, 34748465, 31502191, 33631143, 18806476, 24320939, 30035135, 12131536, 20722187};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 454129622;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> distancesA = {21784443, 40262556, 50292089, 30925580, 22584295, 41844146, 39300753, 23338433, 28002586, 29809499, 49137178, 25925520, 13348915, 14149252, 5830189, 23198212, 48524906, 19007768, 41226659, 42186654, 7538727, 13522826, 13744608, 27780511, 731925, 12117867, 17996202, 30080494, 20330987, 28830829, 13461272, 27670764, 37898966, 18029179, 31010096, 27712837, 19435689, 32485377, 26613111, 17235095, 20851184, 23046181, 32487913, 20939211, 36579346, 42678025, 34973779, 33445456, 15770891, 47311615};
    vector<int> distancesB = {12574902, 42875639, 52905172, 33538663, 25197378, 44457229, 41913836, 25951516, 30615669, 32422582, 51750261, 28538603, 15961998, 16762335, 32679006, 13988671, 51137989, 21620851, 43839742, 44799737, 19310090, 16135909, 25515971, 30393594, 27580742, 14730950, 20609285, 32693577, 22944070, 31443912, 25232635, 18461223, 40512049, 8819638, 33623179, 30325920, 10226148, 23275836, 29226194, 19848178, 32622547, 25659264, 35100996, 23552294, 39192429, 45291108, 37586862, 36058539, 18383974, 49924698};
    vector<int> distancesC = {18803994, 37282107, 47311640, 27945131, 19603846, 38863697, 36320304, 20357984, 25022137, 26829050, 46156729, 22945071, 10368466, 11168803, 27085474, 20217763, 45544457, 16027319, 38246210, 39206205, 13716558, 10542377, 19922439, 24800062, 21987210, 9137418, 15015753, 27100045, 17350538, 25850380, 19639103, 24690315, 34918517, 15048730, 28029647, 24732388, 16455240, 29504928, 23632662, 14254646, 27029015, 20065732, 29507464, 17958762, 33598897, 39697576, 31993330, 30465007, 12790442, 44331166};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 975222552;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> distancesA = {30681800, 30952462, 15990204, 40116988, 29552352, 11397562, 28271278, 13888346, 48928872, 26077340, 47402250, 47096013, 21323437, 13477019, 32894115, 38898946, 53607878, 30704799, 15651001, 34771768, 25142580, 44334334, 44224200, 32561060, 28715094, 27808338, 33849476, 39981827, 20977019, 23074161, 21155788, 39840609, 7000776, 30875038, 12448390, 1665686, 20807032, 39609948, 16113175, 417036, 21696585, 38439334, 8500149, 37772870, 7654566, 41619814, 29984548, 42527018, 28782461, 31153659};
    vector<int> distancesB = {14605588, 14876250, 19430444, 24040776, 32992592, 14837802, 31711518, 17328586, 32852660, 10001128, 31326038, 31019801, 24763677, 16917259, 36334355, 42339186, 37531666, 14628587, 19091241, 18695556, 28582820, 28258122, 28147988, 16484848, 12638882, 11732126, 17773264, 23905615, 24417259, 6997949, 5079576, 23764397, 19234588, 14798826, 15888630, 24569678, 24247272, 23533736, 19553415, 26652400, 25136825, 22363122, 34735513, 21696658, 30558558, 45060054, 13908336, 26450806, 12706249, 15077447};
    vector<int> distancesC = {27024537, 27295199, 12332941, 36459725, 25895089, 7740299, 16107137, 8129427, 45271609, 22420077, 43744987, 43438750, 15564518, 7718100, 20729974, 26734805, 49950615, 27047536, 3486860, 31114505, 12978439, 40677071, 40566937, 28903797, 25057831, 24151075, 30192213, 36324564, 8812878, 19416898, 17498525, 36183346, 12137085, 27217775, 6689471, 17472175, 17149769, 35952685, 3949034, 19554897, 15937666, 34782071, 27638010, 34115607, 23461055, 29455673, 26327285, 38869755, 25125198, 27496396};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 640644181;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> distancesA = {11856654, 37981956, 22753739, 36262656, 42683419, 24834012, 37301400, 34761508, 28497947, 33428698, 33192374, 37511194, 49745518, 13658322, 26795720, 53404286, 28100912, 11405821, 27121061, 36879142, 44710744, 16981638, 29603207, 26859981, 11031318, 53095760, 17009766, 42707697, 39653537, 17301385, 37372602, 10672134, 54192329, 33068690, 47529520, 15499298, 11210761, 11460259, 44011919, 16355028, 6472671, 45148538, 54276868, 55610367, 44853410, 18178463, 46972695, 4661935, 29839243, 27026048};
    vector<int> distancesB = {22943730, 25682846, 10454629, 23963546, 30384309, 12534902, 25002290, 22462398, 16198837, 21129588, 20893264, 25212084, 37446408, 12006632, 14496610, 41105176, 15801802, 22492897, 14821951, 24580032, 32411634, 4682528, 17304097, 14560871, 9379628, 40796650, 15358076, 30408587, 27354427, 28388461, 25073492, 21759210, 41893219, 20769580, 35230410, 26586374, 22297837, 22547335, 31712809, 4055918, 17559747, 32849428, 41977758, 43311257, 32554300, 5879353, 34673585, 15749011, 17540133, 14726938};
    vector<int> distancesC = {25792011, 14722729, 13302910, 13003429, 19424192, 15383183, 14042173, 25310679, 5238720, 10169471, 9933147, 14251967, 26486291, 14854913, 17344891, 30145059, 18650083, 25341178, 17670232, 27428313, 21451517, 7530809, 6343980, 17409152, 12227909, 29836533, 18206357, 19448470, 16394310, 31236742, 27921773, 24607491, 30933102, 23617861, 24270293, 29434655, 25146118, 25395616, 20752692, 6904199, 20408028, 21889311, 31017641, 32351140, 21594183, 8727634, 23713468, 18597292, 6580016, 17575219};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 377982220;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> distancesA = {28709755, 25696164, 31549724, 23864420, 33246452, 17722969, 29098498, 13417688, 1275984, 30072267, 16187632, 22886033, 14742969, 21661185, 13027960, 19218797, 7042334, 25092438, 31961590, 40239323, 37458164, 23183587, 22283693, 19171090, 34818594, 17079305, 22708244, 7356401, 27927616, 15532399, 27667229, 36161685, 44830750, 51242364, 46537324, 26540434, 23337925, 38040231, 30666363, 24637016, 17842519, 17060713, 34790503, 6308822, 24221344, 2890479, 37694710, 17623512, 43486148, 15185190};
    vector<int> distancesB = {16718894, 13705303, 36538993, 11873559, 21255591, 2638296, 17107637, 18406957, 20349921, 18081406, 21176901, 10895172, 33816906, 6576512, 18017229, 38292734, 12031603, 30081707, 16876917, 45228592, 42447433, 28172856, 27272962, 7180229, 39807863, 1994632, 10717383, 26430338, 15936755, 3541538, 12582556, 24170824, 32839889, 56231633, 51526593, 31529703, 28327194, 26049370, 18675502, 9552343, 5851658, 5069852, 22799642, 25382759, 9136671, 21964416, 25703849, 22612781, 31495287, 20174459};
    vector<int> distancesC = {26749105, 23735514, 46569204, 21903770, 31285802, 15762319, 12786158, 28437168, 30380132, 13759927, 31207112, 20925383, 43847117, 19700535, 28047440, 48322945, 22061814, 40111918, 30000940, 55258803, 52477644, 38203067, 37303173, 17210440, 49838074, 15118655, 6395904, 36460549, 25966966, 13571749, 25706579, 19849345, 28518410, 66261844, 61556804, 41559914, 38357405, 21727891, 14354023, 22676366, 15881869, 15100063, 32829853, 35412970, 22260694, 31994627, 8590562, 32642992, 27173808, 30204670};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 367388633;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> distancesA = {37909245, 59903120, 29864858, 26721730, 45437924, 26959139, 28341026, 18840385, 35409233, 45866439, 24486014, 39624912, 45342455, 41359653, 4707543, 34211742, 52069986, 22876311, 19929611, 39820708, 44122800, 42858763, 14168130, 59184805, 33237477, 23456631, 31322173, 38770650, 28829550, 13742270, 46522086, 34557899, 25568453, 35157146, 23702535, 27528866, 25922761, 54787975, 36739782, 51390076, 49321547, 19281327, 51279423, 21100843, 42971843, 22911222, 45467044, 46333483, 30668763, 28886807};
    vector<int> distancesB = {29726794, 51720669, 9711049, 18539279, 37255473, 6805330, 20158575, 1313424, 27226782, 25712630, 6959053, 19471103, 37160004, 33177202, 15446266, 26029291, 43887535, 14693860, 2402650, 19666899, 35940349, 34676312, 5985679, 39030996, 25055026, 3302822, 13795212, 21243689, 20647099, 6411539, 38339635, 26375448, 17386002, 15003337, 16371804, 10001905, 17740310, 46605524, 16585973, 43207625, 29167738, 11098876, 31125614, 12918392, 22818034, 5384261, 25313235, 26179674, 10514954, 11359846};
    vector<int> distancesC = {32998314, 54992189, 15609417, 21810799, 40526993, 12703698, 23430095, 4584944, 30498302, 31610998, 10230573, 25369471, 40431524, 36448722, 18717786, 29300811, 47159055, 17965380, 5674170, 25565267, 39211869, 37947832, 9257199, 44929364, 28326546, 9201190, 17066732, 24515209, 23918619, 9683059, 41611155, 29646968, 20657522, 20901705, 19643324, 4103537, 21011830, 49877044, 22484341, 46479145, 35066106, 14370396, 37023982, 16189912, 28716402, 8655781, 31211603, 32078042, 16413322, 14631366};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 592029866;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> distancesA = {52142203, 28448347, 45131353, 33641158, 50279925, 31165530, 60307864, 45286763, 39414206, 13246751, 26296490, 48560952, 26723159, 29675029, 24480701, 51621824, 42521939, 53462394, 16933036, 26786783, 44911831, 33263468, 21467543, 37331117, 26496927, 20222836, 43728509, 47064378, 3914970, 32938392, 36040377, 22635676, 26281377, 48839167, 35773191, 27879969, 61688767, 26827652, 48435809, 40619859, 7399993, 38231849, 47288518, 55472094, 11112191, 31728947, 12072325, 27354714, 40335079, 27612213};
    vector<int> distancesB = {33781797, 10087941, 26770947, 15280752, 31919519, 16255500, 24181918, 9160817, 24504176, 51783039, 30966706, 30200546, 11813129, 34345245, 29150917, 15495878, 24161533, 17336448, 21603252, 11876753, 8785885, 18353438, 26137759, 1205171, 31167143, 24893052, 7602563, 8528090, 42451258, 18028362, 21130347, 27305892, 30951593, 30478761, 17412785, 12969939, 25562821, 31497868, 12309863, 25709829, 31136295, 19871443, 28928112, 19346148, 49648479, 16818917, 35808627, 32024930, 21974673, 12702183};
    vector<int> distancesC = {45123429, 21429573, 38112579, 26622384, 43261151, 15262014, 53289090, 38267989, 7013338, 59674295, 38857962, 41542178, 19704385, 42236501, 37042173, 44603050, 35503165, 46443620, 29494508, 19768009, 37893057, 26244694, 34029015, 30312343, 39058399, 32784308, 36709735, 40045604, 50342514, 17034876, 29021603, 35197148, 38842849, 41820393, 28754417, 20861195, 54669993, 39389124, 41417035, 24716343, 39027551, 31213075, 40269744, 48453320, 57539735, 14698597, 43699883, 39916186, 33316305, 20593439};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 202557758;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> distancesA = {25998847, 10904006, 59846536, 45598034, 22968382, 18314895, 31850197, 19582900, 32035654, 16113208, 34401514, 20416384, 48640436, 25204467, 33985263, 34679307, 51027635, 26117622, 53335666, 46300637, 57449274, 30181892, 23337734, 35889968, 25095611, 47982563, 41684071, 30100683, 35141967, 43269332, 45314333, 31297030, 40921501, 19360531, 25701539, 18493790, 38547059, 28161889, 48531210, 9786801, 52324168, 55300691, 16725071, 43319683, 15135756, 49591602, 28590655, 21579568, 20320024, 49228497};
    vector<int> distancesB = {46699061, 42022624, 42489232, 28240730, 43668596, 39015109, 52550411, 50701518, 34553350, 36813422, 24734084, 41116598, 14927700, 27722163, 54685477, 55379521, 17314899, 46817836, 19622930, 12587901, 4522644, 50882106, 44037948, 56590182, 56214229, 30625259, 24326767, 32618379, 17784663, 25912028, 27957029, 21629600, 61621715, 40060745, 56820157, 39194004, 59247273, 59280507, 14818474, 43139829, 34966864, 21587955, 37425285, 9606947, 48488784, 15878866, 49290869, 42279782, 41020238, 31871193};
    vector<int> distancesC = {51260597, 46584160, 2358370, 11890132, 48230132, 43576645, 57111947, 55263054, 39114886, 41374958, 29295620, 45678134, 35844668, 32283699, 59247013, 59941057, 38231867, 51379372, 40539898, 33504869, 44653506, 55443642, 48599484, 61151718, 60775765, 18932065, 28888303, 37179915, 22346199, 14218834, 32518565, 26191136, 66183251, 44622281, 61381693, 43755540, 63808809, 63842043, 35735442, 47701365, 5163998, 42504923, 41986821, 30523915, 53050320, 36795834, 53852405, 46841318, 45581774, 36432729};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 173633345;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> distancesA = {26035118, 34786232, 28627890, 38557369, 29241383, 34420856, 22436104, 37345178, 12732308, 23885884, 28972075, 30228161, 36004870, 16851889, 24668077, 25717340, 15994822, 36111335, 39397951, 8304739, 37558964, 41177063, 21175161, 28069573, 18383649, 20169245, 29375130, 7207304, 22287578, 23339445, 30323974, 41004402, 21392334, 21470487, 32950041, 24879393, 37388022, 27645429, 28924216, 35601899, 22485147, 26126370, 16444647, 33076585, 28210724, 15650878, 18060836, 23038463, 35763360, 25905805};
    vector<int> distancesB = {30758845, 39509959, 19781165, 22330112, 50852258, 39144583, 13589379, 42068905, 34343183, 28609611, 20125350, 34951888, 19777613, 38462764, 46278952, 30441067, 37605697, 85852, 3372468, 29915614, 21331707, 24949806, 42786036, 32793300, 23107376, 24892972, 20528405, 28818179, 27011305, 28063172, 35047701, 24777145, 43003209, 26194214, 16722784, 29603120, 28541297, 49256304, 33647943, 19374642, 27208874, 9899113, 38055522, 24229860, 49821599, 20374605, 39671711, 27762190, 40487087, 30629532};
    vector<int> distancesC = {30619378, 39370492, 33212150, 43141629, 33825643, 39005116, 27020364, 41929438, 17316568, 28470144, 33556335, 34812421, 40589130, 21436149, 29252337, 30301600, 3004046, 40695595, 43982211, 12888999, 42143224, 45761323, 25759421, 32653833, 22967909, 24753505, 33959390, 11791564, 26871838, 27923705, 34908234, 45588662, 25976594, 26054747, 37534301, 29463653, 41972282, 32229689, 33508476, 40186159, 27069407, 30710630, 21028907, 37660845, 32794984, 20235138, 22645096, 27622723, 40347620, 30490065};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 721966890;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> distancesA = {31815670, 30900896, 29354155, 31727732, 45813686, 17730400, 41072365, 30468101, 12022563, 28916757, 36463093, 27189280, 35201281, 23702525, 26182720, 11390248, 28625220, 46833337, 32782855, 30351961, 33804695, 5099449, 41554467, 29498416, 29913864, 35302796, 14032644, 19644275, 25137078, 45019357, 6568111, 32112258, 37755334, 35496337, 37141092, 22189429, 27437368, 37156915, 22714272, 15418359, 31521828, 36532038, 28531607, 26056416, 19301231, 36855717, 51249673, 39954963, 35891382, 19387952};
    vector<int> distancesB = {14196315, 30644797, 29098056, 31471633, 45557587, 17474301, 40816266, 30212002, 29632854, 28660658, 8653904, 26933181, 34945182, 23446426, 1626469, 29000539, 28369121, 46577238, 32526756, 12732606, 33548596, 22709740, 41298368, 29242317, 12294509, 35046697, 13776545, 19388176, 24880979, 44763258, 24178402, 14492903, 37499235, 17876982, 36884993, 21933330, 9818013, 36900816, 5094917, 15162260, 31265729, 36275939, 28275508, 25800317, 19045132, 36599618, 50993574, 39698864, 35635283, 19131853};
    vector<int> distancesC = {19668723, 18753949, 17207208, 19580785, 33666739, 5583453, 28925418, 18321154, 17742006, 16769810, 24316146, 15042333, 23054334, 11555578, 14035773, 17109691, 16478273, 34686390, 20635908, 18205014, 21657748, 10818892, 29407520, 17351469, 17766917, 23155849, 1885697, 7497328, 12990131, 32872410, 12287554, 19965311, 25608387, 23349390, 24994145, 10042482, 15290421, 25009968, 10567325, 3271412, 19374881, 24385091, 16384660, 13909469, 7154284, 24708770, 39102726, 27808016, 23744435, 7241005};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 997991026;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> distancesA = {42001648, 52647505, 39024815, 39033302, 17348872, 41411282, 28652684, 35409980, 38276450, 37635555, 43679021, 43251073, 36121675, 15744467, 29512309, 57313554, 40868870, 33378080, 51197074, 45595296, 1639654, 44387717, 24892031, 37525208, 42973328, 34562885, 45446019, 34972868, 10935945, 9074456, 12602956, 40848346, 35453804, 33210259, 39356646, 46695376, 34048851, 41631433, 49944622, 45275817, 35627532, 38461232, 40550568, 36838223, 32925529, 50871020, 40152602, 36730888, 60830385, 36338032};
    vector<int> distancesB = {8031970, 18677827, 31753065, 31761552, 35893556, 34139532, 21380934, 19023080, 31004700, 30363805, 27292121, 9281395, 28849925, 34289151, 22240559, 7279936, 24481970, 16991180, 34810174, 29208396, 51673272, 10418039, 25141587, 30253458, 26586428, 18175985, 38174269, 18585968, 60969563, 40959162, 62636574, 33576596, 28182054, 16823359, 32084896, 12725698, 17661951, 25244533, 33557722, 28888917, 19240632, 38710788, 24163668, 13195395, 33175085, 43599270, 23765702, 36980444, 44443485, 19951132};
    vector<int> distancesC = {29740432, 40386289, 11825617, 25052836, 30904090, 15547826, 16391468, 23148764, 24295984, 23655089, 31417805, 30989857, 8922477, 29299685, 15531843, 45052338, 28607654, 21116864, 38935858, 33334080, 46683806, 32126501, 20152121, 23544742, 30712112, 22301669, 19582563, 22711652, 55980097, 35969696, 57647108, 26867880, 9590348, 20949043, 12157448, 34434160, 21787635, 29370217, 37683406, 33014601, 23366316, 33721322, 28289352, 24577007, 28185619, 25007564, 27891386, 31990978, 48569169, 24076816};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 353697748;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> distancesA = {45891985, 16818433, 28901968, 39521318, 44877720, 22547943, 49023979, 39902113, 31107227, 48311975, 42140106, 25667612, 42861902, 50571537, 25269965, 54925966, 47348318, 35295772, 35150511, 34556931, 40519138, 43510812, 45895051, 38593126, 36514384, 31587018, 31865259, 26067679, 42809510, 8713911, 30656397, 58249759, 30863905, 40809226, 44849029, 46058311, 20053896, 49587610, 40014923, 31287099, 42301479, 48852710, 48836078, 39307041, 49950241, 23570779, 25851300, 28397182, 41364751, 32198810};
    vector<int> distancesB = {25396591, 14021397, 8406574, 19025924, 14037890, 13279981, 28528585, 19406719, 10611833, 27816581, 21644712, 5172218, 22366508, 30076143, 22472929, 34430572, 26852924, 14800378, 14655117, 14061537, 20023744, 23015418, 25399657, 18097732, 16018990, 22319056, 11369865, 16799717, 22314116, 22125919, 10161003, 37754365, 10368511, 20313832, 24353635, 25562917, 10785934, 29092216, 9175093, 10791705, 21806085, 28357316, 28340684, 18811647, 29454847, 14302817, 5355906, 2442648, 20869357, 1358980};
    vector<int> distancesC = {2091228, 29078868, 23464045, 6375983, 39439797, 28337452, 5223222, 34464190, 25669304, 2414674, 36702183, 20229689, 37423979, 45133614, 37530400, 49488043, 41910395, 29857849, 29712588, 29119008, 7373803, 38072889, 40457128, 33155203, 31076461, 37376527, 16449766, 31857188, 37371587, 37183390, 15240904, 52811836, 25425982, 35371303, 1048272, 161010, 25843405, 44149687, 34577000, 25849176, 9156144, 15707375, 43398155, 33869118, 44512318, 29360288, 20413377, 22959259, 35926828, 26760887};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 159756672;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> distancesA = {20222829, 16398732, 23678659, 29499353, 26569117, 18001845, 13844432, 18851720, 23594726, 20073946, 14513047, 16750435, 22455798, 24939538, 22506530, 18708932, 9208343, 30402170, 13066193, 16965095, 9223308, 17523677, 18346286, 6344281, 14723399, 25627790, 19704498, 21899104, 20931028, 14227020, 29892482, 27711753, 13766973, 14855080, 14322698, 16279010, 27476097, 16689153, 25440230, 25835922, 28298004, 10717271, 27075913, 8058091, 27501803, 20612940, 15803104, 12886430, 14405056, 11385203};
    vector<int> distancesB = {28499438, 24675341, 16189790, 22010484, 24763882, 26278454, 22121041, 27128329, 21789491, 28350555, 22789656, 25027044, 30732407, 23134303, 30783139, 26985541, 17484952, 9436999, 21342802, 15159860, 11741863, 15718442, 26622895, 14620890, 12918164, 33904399, 17899263, 30175713, 13442159, 6738151, 38169091, 35988362, 22043582, 23131689, 22599307, 24555619, 25670862, 14883918, 23634995, 34112531, 26492769, 18993880, 25270678, 16334700, 20012934, 28889549, 24079713, 21163039, 22681665, 9579968};
    vector<int> distancesC = {33300590, 26048873, 36756420, 42577114, 39646878, 27651986, 23494573, 31929481, 36672487, 29724087, 24163188, 29828196, 32105939, 38017299, 19627457, 28359073, 18858484, 43479931, 26143954, 30042856, 22301069, 30601438, 27996427, 19422042, 27801160, 7595905, 32782259, 3867219, 34008789, 27304781, 11860597, 24832680, 26844734, 11976007, 11443625, 29356771, 40553858, 29766914, 38517991, 7804037, 41375765, 20367412, 40153674, 17708232, 40579564, 30263081, 25453245, 25964191, 27482817, 24462964};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 190099054;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> distancesA = {15762867, 23193275, 11391588, 18006821, 14520316, 12180677, 36741793, 25963302, 5289184, 12559804, 16842735, 17596893, 8853246, 17334452, 25587610, 21926913, 27271647, 15985999, 14242902, 24957283, 9192459, 20978425, 26657661, 28385599, 2570015, 21332070, 17443680, 8505089, 15268672, 30347664, 8865299, 27323569, 18588098, 1999607, 30641585, 25154530, 8992477, 12337536, 22421314, 10526701, 19454695, 30834888, 18879003, 23947332, 16195715, 16987022, 15073865, 16158060, 5009446, 17018822};
    vector<int> distancesB = {9925758, 17356166, 5554479, 12169712, 22414591, 6343568, 24848304, 20126193, 13183459, 20454079, 4949246, 11759784, 16747521, 11497343, 19750501, 29821188, 15378158, 10148890, 22137177, 19120174, 3355350, 9084936, 14764172, 16492110, 10464290, 15494961, 11606571, 16399364, 9431563, 18454175, 3028190, 21486460, 12750989, 9893882, 24804476, 19317421, 16886752, 6500427, 10527825, 4689592, 13617586, 24997779, 13041894, 18110223, 10358606, 11149913, 22968140, 10320951, 12903721, 24913097};
    vector<int> distancesC = {32482236, 39912644, 28110957, 34726190, 44971069, 28900046, 53461162, 25744365, 35739937, 43010557, 33562104, 34316262, 39303999, 17115515, 8862357, 52377666, 43991016, 32705368, 44693655, 41676652, 25911828, 37697794, 43377030, 45104968, 33020768, 38051439, 34163049, 38955842, 31988041, 47067033, 25584668, 44042938, 18369161, 32450360, 30422648, 41873899, 39443230, 29056905, 39140683, 27246070, 36174064, 47554257, 15570964, 23728395, 32915084, 33706391, 45524618, 32877429, 35460199, 47469575};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 548523719;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> distancesA = {14037129, 21470523, 24625167, 14503753, 19611445, 14292254, 14937282, 19786820, 13359575, 13219996, 24344278, 17006896, 13390339, 27856438, 16156328, 20604306, 39232080, 9713182, 8582957, 14324596, 33280536, 26006780, 13030886, 8378128, 19156753, 9454423, 6860986, 12090281, 26852966, 31838973, 18552155, 26925975, 17520860, 15198960, 11145583, 17130558, 18348526, 22280388, 22562777, 18707085, 20516640, 44723779, 19680639, 39964771, 10679307, 13427728, 20206545, 15521298, 17329875, 22387567};
    vector<int> distancesB = {35296065, 25973203, 19822331, 19006433, 24114125, 18794934, 19439962, 24289500, 17862255, 17722676, 28846958, 21509576, 17893019, 32359118, 20659008, 25106986, 34429244, 14215862, 29841893, 18827276, 28477700, 21203944, 8228050, 12880808, 23659433, 13957103, 28119922, 16592961, 22050130, 36341653, 23054835, 31428655, 12718024, 19701640, 15648263, 21633238, 2910410, 26783068, 17759941, 23209765, 25019320, 39920943, 24183319, 35161935, 15181987, 17930408, 15403709, 20023978, 21832555, 26890247};
    vector<int> distancesC = {25843191, 10985419, 19674973, 9553559, 9126341, 2486192, 9987088, 9301716, 2874471, 8269802, 13859174, 9904112, 8440145, 17371334, 5671224, 10119202, 34281886, 4762988, 20389019, 9374402, 28330342, 21056586, 8080692, 3427934, 8671649, 2351639, 18667048, 7140087, 21902772, 21353869, 8067051, 16440871, 12570666, 8096176, 660479, 10027774, 13398332, 11795284, 17612583, 8221981, 15566446, 39773585, 9195535, 35014577, 3576523, 6324944, 15256351, 8418514, 6844771, 11902463};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 149707115;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> distancesA = {2};
    vector<int> distancesB = {3};
    vector<int> distancesC = {4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> distancesA = {3};
    vector<int> distancesB = {2};
    vector<int> distancesC = {1};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> distancesA = {2};
    vector<int> distancesB = {2};
    vector<int> distancesC = {4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> distancesA = {2, 5};
    vector<int> distancesB = {3, 4};
    vector<int> distancesC = {1, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> distancesA = {4, 3};
    vector<int> distancesB = {3, 2};
    vector<int> distancesC = {2, 1};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> distancesA = {5, 4};
    vector<int> distancesB = {3, 2};
    vector<int> distancesC = {2, 1};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> distancesA = {2, 1, 3};
    vector<int> distancesB = {2, 3, 5};
    vector<int> distancesC = {2, 1, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> distancesA = {2, 4, 2};
    vector<int> distancesB = {1, 3, 3};
    vector<int> distancesC = {4, 6, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> distancesA = {3, 1, 4};
    vector<int> distancesB = {4, 2, 1};
    vector<int> distancesC = {4, 2, 5};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> distancesA = {6, 1, 4, 4};
    vector<int> distancesB = {7, 2, 5, 5};
    vector<int> distancesC = {4, 1, 2, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> distancesA = {7, 3, 4, 5};
    vector<int> distancesB = {6, 2, 3, 4};
    vector<int> distancesC = {8, 4, 1, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> distancesA = {2, 4, 3, 4};
    vector<int> distancesB = {3, 5, 2, 3};
    vector<int> distancesC = {1, 3, 2, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> distancesA = {1, 2, 3, 1, 3};
    vector<int> distancesB = {3, 2, 5, 1, 1};
    vector<int> distancesC = {1, 4, 1, 3, 5};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> distancesA = {2, 5, 3, 4, 4};
    vector<int> distancesB = {3, 2, 4, 5, 5};
    vector<int> distancesC = {2, 1, 3, 4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> distancesA = {5, 3, 2, 1, 7};
    vector<int> distancesB = {3, 9, 4, 7, 5};
    vector<int> distancesC = {1, 7, 2, 5, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> distancesA = {2, 4, 4, 4, 3, 6};
    vector<int> distancesB = {3, 5, 5, 1, 4, 7};
    vector<int> distancesC = {2, 4, 4, 4, 3, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> distancesA = {1, 4, 2, 5, 3, 2};
    vector<int> distancesB = {4, 7, 5, 4, 2, 5};
    vector<int> distancesC = {1, 4, 2, 5, 3, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> distancesA = {2, 1, 3, 5, 1, 5};
    vector<int> distancesB = {5, 4, 4, 2, 2, 2};
    vector<int> distancesC = {8, 7, 7, 1, 5, 5};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> distancesA = {4, 6, 1, 5, 3, 2, 5};
    vector<int> distancesB = {4, 2, 3, 1, 3, 2, 1};
    vector<int> distancesC = {5, 7, 2, 6, 4, 3, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> distancesA = {1, 1, 1, 3, 1, 2, 1};
    vector<int> distancesB = {3, 3, 3, 5, 3, 4, 3};
    vector<int> distancesC = {2, 2, 2, 4, 2, 3, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> distancesA = {4, 2, 6, 4, 1, 5, 6};
    vector<int> distancesB = {1, 3, 3, 1, 2, 2, 3};
    vector<int> distancesC = {2, 4, 4, 2, 3, 3, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> distancesA = {2, 4, 4, 1, 1, 6, 7, 2};
    vector<int> distancesB = {4, 6, 2, 3, 1, 6, 7, 2};
    vector<int> distancesC = {6, 8, 6, 5, 3, 2, 3, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> distancesA = {5, 3, 3, 4, 4, 3, 2, 4};
    vector<int> distancesB = {6, 4, 4, 5, 5, 4, 3, 5};
    vector<int> distancesC = {7, 3, 5, 6, 6, 5, 4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> distancesA = {4, 4, 6, 4, 6, 2, 3, 5};
    vector<int> distancesB = {4, 4, 6, 4, 2, 2, 3, 5};
    vector<int> distancesC = {4, 2, 6, 4, 6, 2, 1, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> distancesA = {9, 10, 7, 2, 3, 2, 5, 8, 6};
    vector<int> distancesB = {5, 6, 3, 6, 3, 2, 1, 4, 2};
    vector<int> distancesC = {8, 9, 6, 3, 2, 1, 4, 7, 5};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> distancesA = {1, 3, 2, 5, 1, 7, 4, 4, 1};
    vector<int> distancesB = {4, 2, 7, 4, 6, 6, 7, 1, 6};
    vector<int> distancesC = {1, 3, 4, 5, 3, 7, 2, 4, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> distancesA = {1, 4, 4, 2, 4, 2, 2, 3, 3};
    vector<int> distancesB = {4, 1, 7, 5, 9, 5, 7, 8, 2};
    vector<int> distancesC = {1, 4, 4, 2, 6, 2, 4, 5, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> distancesA = {6, 4, 5, 6, 8, 1, 5, 6, 4, 2};
    vector<int> distancesB = {4, 2, 3, 4, 6, 1, 3, 4, 2, 2};
    vector<int> distancesC = {6, 4, 5, 6, 8, 3, 5, 6, 4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 9000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> distancesA = {4, 4, 2, 1, 5, 6, 3, 3, 5, 3};
    vector<int> distancesB = {2, 2, 2, 3, 7, 4, 1, 5, 3, 5};
    vector<int> distancesC = {6, 6, 4, 3, 3, 8, 5, 1, 7, 5};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> distancesA = {7, 2, 5, 7, 4, 3, 6, 4, 4, 6};
    vector<int> distancesB = {6, 1, 4, 6, 3, 2, 5, 3, 3, 5};
    vector<int> distancesC = {9, 4, 7, 1, 2, 5, 4, 6, 6, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> distancesA = {8, 5, 6, 8, 6, 5, 6, 10, 8, 5, 10, 8, 7, 9, 7, 1, 11, 5, 9, 6, 6, 1, 6, 9, 8, 4, 12, 7, 5, 7, 6, 8, 12, 8, 6, 6, 5, 8, 5, 3, 3, 4, 8, 6, 6, 8, 8, 9, 7, 5};
    vector<int> distancesB = {9, 6, 7, 9, 7, 6, 7, 11, 9, 6, 11, 9, 8, 10, 8, 2, 12, 6, 10, 7, 7, 4, 7, 10, 9, 5, 13, 8, 6, 8, 7, 9, 13, 9, 7, 7, 6, 9, 6, 4, 4, 5, 9, 7, 7, 9, 9, 10, 8, 6};
    vector<int> distancesC = {8, 9, 6, 8, 2, 5, 6, 10, 8, 5, 10, 8, 7, 9, 1, 5, 11, 5, 9, 6, 6, 7, 6, 9, 8, 4, 12, 7, 5, 7, 6, 8, 12, 8, 6, 6, 5, 8, 1, 7, 3, 4, 8, 6, 6, 8, 8, 3, 7, 5};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 770724166;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> distancesA = {33030780, 30296205, 16842859, 28857842, 37928939, 27190807, 48689043, 33328845, 24254103, 3962046, 31043603, 25699520, 11297547, 27045586, 31603483, 23207518, 44089781, 48470539, 52366295, 39786470, 45623279, 21593844, 38639305, 27260993, 43899542, 36162768, 21640232, 43580853, 33826577, 30501815, 51470990, 2157904, 27823597, 9550575, 39234641, 24163007, 34155133, 42504989, 35821444, 36054200, 29026389, 29716374, 41764139, 19392309, 44258194, 19987908, 56722905, 46771885, 32668277, 40665175};
    vector<int> distancesB = {16191697, 13457122, 3776, 12018759, 21089856, 10351724, 31849960, 16489762, 7415020, 12877037, 14204520, 8860437, 9035480, 10206503, 14764400, 6368435, 27250698, 31631456, 35527212, 22947387, 28784196, 4754761, 21800222, 10421910, 27060459, 19323685, 4801149, 26741770, 16987494, 13662732, 34631907, 18996987, 10984514, 7288508, 22395558, 7323924, 17316050, 25665906, 18982361, 19215117, 12187306, 12877291, 24925056, 2553226, 27419111, 3148825, 39883822, 29932802, 15829194, 23826092};
    vector<int> distancesC = {19337227, 16602652, 3149306, 15164289, 24235386, 13497254, 34995490, 19635292, 10560550, 16030119, 17350050, 12005967, 12188562, 13352033, 17909930, 3215353, 30396228, 34776986, 38672742, 26092917, 31929726, 7907843, 24945752, 13567440, 30205989, 22469215, 7946679, 29887300, 20133024, 16808262, 37777437, 22150069, 14130044, 10441590, 25541088, 10469454, 20461580, 28811436, 22127891, 22360647, 15332836, 16022821, 28070586, 5706308, 30564641, 6294355, 43029352, 33078332, 18974724, 26971622};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 101733071;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> distancesA = {2};
    vector<int> distancesB = {1};
    vector<int> distancesC = {1};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> distancesA = {2, 3};
    vector<int> distancesB = {2, 3};
    vector<int> distancesC = {1, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> distancesA = {71};
    vector<int> distancesB = {71};
    vector<int> distancesC = {71};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> distancesA = {72129706, 33916819, 29365596, 85009559};
    vector<int> distancesB = {55575406, 99111289, 27251305, 29257418};
    vector<int> distancesC = {56633420, 80096658, 72247352, 68632202};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> distancesA = {12160732, 82248646, 1569336, 41503183, 53437794, 82625690, 67156863, 32919239, 90723805, 43980376, 78536257, 4564745, 28064884, 75151250, 95160086, 68093914, 76947882, 20696401, 7853710, 84699359};
    vector<int> distancesB = {53579649, 56265325, 28891420, 40906683, 59151968, 91118711, 84696953, 91100202, 34137513, 62156992, 88309842, 54622848, 949766, 54520703, 33528310, 23626158, 19536024, 27897115, 17675860, 85606265};
    vector<int> distancesC = {61238505, 75495727, 87160064, 158958, 9203876, 21425199, 38569107, 55220240, 94872169, 41783261, 97058975, 5924779, 33103604, 7106958, 47334742, 34493169, 34308494, 28779371, 41289930, 35568528};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> distancesA = {53688608, 84209705, 31938412, 81698912, 84629979, 62986220, 36267280, 80527425, 19899059, 67914650, 10207726, 24649943, 51607794, 68186346, 91553807, 55646032, 13585242, 32267712, 52087568, 51173683, 59182880, 72561750, 82448110, 53202945, 51021110, 99132225, 71084904, 90373400, 29592612, 54441855, 25177004, 59261707, 89172221, 1878110, 52249297, 93668095, 79060644, 56150337, 12884467, 81491301, 78745539, 6564973, 72150562, 6549079, 29313790, 50942040, 57676908};
    vector<int> distancesB = {15562806, 5895077, 40575260, 21563397, 3513864, 51798058, 92107410, 43047547, 54397427, 87929219, 48917423, 8029834, 73261664, 36453494, 53090895, 73422890, 24314529, 79078671, 22459809, 97011819, 14605655, 61021997, 4686551, 39528380, 62937005, 81581911, 10147806, 74713552, 99473265, 48505958, 80585212, 52680155, 65897313, 1349547, 80177070, 94252611, 89112819, 63622188, 19873188, 63139351, 24192774, 60154250, 59596288, 92984255, 12669667, 48848732, 33359400};
    vector<int> distancesC = {69062684, 29014033, 9104596, 23349548, 86948567, 9536273, 86054195, 32077553, 34373642, 92394259, 84654020, 93722586, 15538462, 62521084, 59398458, 58413097, 40247472, 15411116, 42764510, 4831197, 3520257, 96212582, 20666401, 87575589, 1387450, 66242990, 22831267, 78099211, 29450574, 34578702, 47026621, 49697659, 33151070, 87313333, 41563112, 5633366, 8045371, 47594189, 31195545, 79069866, 60613326, 93849651, 41640049, 67795975, 58074284, 64307881, 43585049};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> distancesA = {94832925, 85802164, 60792433, 48672025, 21576270, 30959407, 49133204, 63671444, 2412038, 76683550, 14524804, 92983461, 72609408, 25165723, 25776543, 82459990, 57574157, 51237155, 53600173, 76825319, 94016502, 21325714, 52646410, 7101530, 72689996, 92554343, 48521829, 27335343, 48125442, 57833523, 23517122, 56789743, 21095083, 1516302, 86606218, 15692829, 60295379, 44198664, 10700429, 63889719, 32611383, 43927285, 1821627, 68025201, 64460881, 84794870};
    vector<int> distancesB = {5218564, 69014067, 79827063, 93756047, 32538111, 83865795, 56922441, 30993257, 3054947, 48758897, 58817523, 23907460, 9520475, 23795530, 35907542, 22225875, 20691559, 75735140, 13550417, 73875766, 89302, 43152168, 86694913, 33962484, 75875217, 30381735, 12975946, 94090547, 89452838, 65328659, 40543483, 76798585, 27612614, 59681191, 71094137, 28274660, 36685539, 36399113, 31405406, 51767855, 16364455, 52098069, 21313092, 53622545, 4022303, 1469104};
    vector<int> distancesC = {76798863, 70958148, 98213940, 99031120, 11964958, 80046799, 2261173, 73511904, 71444549, 62413958, 27538757, 41849034, 22178819, 71528304, 19089958, 23226910, 51164152, 8965865, 11019429, 43654803, 97382811, 48549470, 21607447, 16192276, 91786588, 88767424, 50778878, 3578111, 41255803, 85430030, 56404980, 22760252, 92927534, 31823624, 67124559, 81299109, 77672056, 91073813, 56106734, 41567294, 76578937, 29807406, 78521922, 59249592, 82346983, 22797595};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> distancesA = {86867872, 47657606, 27944343, 17599703, 57403435, 49179476, 93593368, 33899321, 66600364, 39806905, 19766651, 70336606, 3585565, 92944593, 9543780, 83045573};
    vector<int> distancesB = {38335252, 98550453, 5668575, 32816245, 99991681, 40530557, 41419723, 32747573, 70467551, 77774143, 52593064, 8696924, 63010535, 61475446, 6432403, 1008161};
    vector<int> distancesC = {73346640, 24979569, 29917411, 62047859, 11618098, 84908821, 48298588, 44386664, 96164190, 18610286, 24966435, 829837, 57404844, 17486387, 46762598, 39631800};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> distancesA = {32120118, 88643934, 75736794, 29379338, 28375065, 87000302, 72696576, 89372771, 64440316, 3627091, 10763062, 45064089, 83901009, 20497439, 29697056, 6272961, 15134153, 52129473, 26963595, 79216297, 9526542, 21125782, 8175825, 7099434, 90714967, 3977218, 34131532, 54843731, 54029393, 87628501, 69710760, 95402307, 47080347, 51023107, 46367088, 91953486, 88987142, 17583714, 9971544, 72101331, 97231143, 6890916, 42313609};
    vector<int> distancesB = {15004754, 67386168, 23431277, 57254634, 88114951, 20806193, 42306268, 96672422, 67466036, 11095202, 36982885, 92105319, 48653826, 38904088, 41683103, 3120397, 39582281, 52473669, 12523022, 62344432, 62503244, 98054584, 31487269, 59623734, 74482611, 20256594, 34108834, 98182987, 59077750, 15544215, 2351875, 28425839, 65128558, 33297212, 68416373, 5987689, 18034012, 64137343, 82364291, 78830734, 62190725, 98934740, 64509670};
    vector<int> distancesC = {42026034, 51522030, 58860123, 35975865, 81348744, 44839233, 8459840, 20310471, 14113072, 77038813, 16451489, 99103714, 181751, 23489781, 16993370, 31193585, 31435470, 21946147, 14380758, 85759216, 93148463, 62157904, 27122944, 45935847, 94778404, 96441107, 94505179, 51746972, 25854850, 15129145, 29934648, 13150911, 75310460, 22599146, 33002635, 79641174, 14446794, 28033862, 28339058, 78991208, 50034228, 9656217, 79526395};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> distancesA = {73064962, 44956405, 81487221, 89836425};
    vector<int> distancesB = {17196401, 51925906, 46315256, 54579140};
    vector<int> distancesC = {75846881, 2302364, 47879399, 8940179};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> distancesA = {31024233, 62220852, 1772673, 34749647, 85922545, 68247885, 16800035, 77519936, 55264800, 38945427, 39698741, 90173911, 33755264, 96365068, 68819638, 27457920, 29137418, 63461667, 73154079, 1092548, 62008440, 16302403, 25968545, 91200597, 67203145, 76370703, 81406510, 283336, 85169033, 97389912, 47538727, 64734330, 22799141, 13165362, 47842009};
    vector<int> distancesB = {55301673, 94441279, 77831153, 59079985, 47921765, 60974123, 25533690, 96848092, 11252940, 11607595, 49660923, 840629, 39964532, 79274896, 25611044, 72488846, 86323495, 13337371, 38177746, 22943009, 65988880, 1929080, 29248195, 36379732, 49840594, 91505692, 12165097, 36553383, 3505710, 42731405, 10365398, 7722731, 88768958, 75366729, 13486860};
    vector<int> distancesC = {72879194, 50244883, 78296642, 74388630, 94002861, 90429014, 36172778, 79153611, 98623880, 13335925, 42854848, 54756340, 7800877, 62816314, 2127618, 61281616, 6983701, 88471723, 77460342, 44814613, 65510744, 19849384, 86461163, 36679830, 81055096, 17027559, 75303360, 72001905, 47661496, 83352517, 91081620, 75323710, 93244923, 78138714, 48694428};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> distancesA = {84569079, 44854497, 11117205, 53321926, 22823977, 82635460, 35209202, 53844937, 8127365, 96570662, 54672332, 64896216, 72980954, 56638316, 35285599, 18177716, 17074059, 57046280, 47223427, 27352792, 20442184, 9444734, 31340624, 83178102, 37060806, 57270089, 82615284, 39606947, 2473033, 52380582, 96691051, 58578989, 82307057, 22328702, 59392551, 44446737, 51589824, 18678894};
    vector<int> distancesB = {13259542, 44988785, 81961937, 19058945, 93144449, 14713231, 12415397, 71117697, 99296291, 65117294, 4055920, 71385715, 73234356, 598162, 98208861, 89362764, 4096882, 90836230, 66355748, 77430555, 85957478, 29652740, 45763818, 63914970, 23249222, 95698746, 24931040, 9636638, 167821, 38864921, 34124903, 8373724, 97437628, 37256295, 29660081, 87224565, 43915450, 13745293};
    vector<int> distancesC = {36271919, 31435940, 8284166, 10919358, 71833204, 14522644, 82996655, 93384079, 99716561, 68146152, 99253594, 25395875, 99281648, 36290799, 68318481, 20301198, 26495744, 50600100, 26370893, 81884757, 35652140, 22051388, 28681628, 18528090, 25325977, 28306245, 11691394, 91468662, 48653904, 35435987, 3511117, 56882419, 52157275, 87033622, 17714465, 36748445, 42312041, 8178458};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> distancesA = {58953881, 4975725, 11157053, 56764501, 78708585, 80964994, 16899997, 4712527, 7076061, 37612336, 60443971};
    vector<int> distancesB = {45255648, 97470261, 90674472, 26772891, 6839504, 32642405, 96264607, 66900052, 16542149, 41713810, 73673461};
    vector<int> distancesC = {53320067, 48755192, 57844955, 49715828, 29781034, 13874898, 27336399, 25489145, 18183832, 84981099, 38340641};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> distancesA = {10191626, 8762898, 9756880, 8297752, 10171194, 18283530, 7450174, 5866632, 10038508, 13473132, 7854514, 11184678, 10977260, 8002714, 7898418, 20679716, 5446874, 4066786, 13324424, 21545680, 13813474, 8707426, 14567404, 9556932, 9045468, 11374444, 10673470, 9311282, 15872968, 9987218, 11534650, 20105752, 10494292, 11781290, 11175156, 5640644, 10845174, 10342930, 5630922, 9594286, 17639888, 5353860, 6582206, 12585926, 5237432};
    vector<int> distancesB = {14339540, 9305382, 10659030, 12445666, 10821106, 18607642, 11598088, 10014546, 13780608, 17621046, 12002428, 15332592, 14850384, 12150628, 12046332, 24827630, 9594788, 8214700, 13866908, 25693594, 17961388, 12855340, 18715318, 13704846, 13193382, 9041466, 9754388, 9853766, 14953886, 14135132, 12996130, 23144594, 11144204, 14332188, 14622536, 9788558, 11495086, 14490844, 1483008, 10833572, 21499702, 9501774, 10730120, 13128410, 9385346};
    vector<int> distancesC = {2882820, 8498076, 14989186, 7860976, 7056400, 17752176, 7013398, 5429856, 9369706, 13202366, 7417738, 14886614, 10540484, 7565938, 6727602, 17279230, 5390594, 6351798, 13059602, 20374864, 13548652, 1398620, 4461358, 9120156, 8608692, 15237466, 9050284, 9046460, 14249782, 10501500, 12048932, 19004550, 6733302, 4472484, 11118876, 4630300, 7084184, 9906154, 15736968, 7971100, 17583608, 4917084, 6317384, 11783744, 5181152};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> distancesA = {17812284, 18900842, 14670166, 19733610, 12007756, 17378282, 18582296, 15057434, 15005862, 19917928, 14347574, 21391696, 6029252, 14022522, 21226756, 15778866, 15107376, 15546208, 13143102, 17930804, 13340264, 17515398, 14880506, 13917240, 20072784, 20682116, 7256924, 17136202, 12957904, 20885270, 16427962, 19447620, 11553722, 15373238, 16070194, 10196250, 16237904};
    vector<int> distancesB = {8375824, 11229870, 3489286, 7174352, 9483060, 4819024, 3307074, 6762544, 2446604, 5332526, 6177020, 8832438, 9245970, 7210086, 11614542, 5453742, 2548118, 2986950, 9366058, 3916214, 5169710, 4956140, 2321248, 1357982, 10636324, 8876010, 8018298, 3121612, 5201548, 5610048, 7955392, 4172398, 4900440, 2813980, 3510936, 5078972, 1652502};
    vector<int> distancesC = {6844036, 7932594, 3701918, 11649592, 10024854, 8979096, 10498278, 6975176, 4995312, 12523730, 5572166, 11300074, 11875868, 7422718, 10258508, 5666374, 5096826, 7462190, 2174854, 7920254, 4564856, 7504848, 4869956, 5833222, 9104536, 11511054, 10648196, 7125652, 1989656, 12062664, 7652554, 10706928, 6351398, 5362688, 6059644, 9554212, 8843706};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> distancesA = {12755520, 14559864, 28126622, 18693744, 22271868, 27940772, 14657180, 14162018, 9771084, 7835664, 12343762, 20591102, 9774402, 14524852, 15101324, 22797998, 17268514, 8646070, 19828000, 18663138, 10120336, 16386040, 2521570, 13413508, 12291690, 25556788};
    vector<int> distancesB = {12772764, 8843844, 16900378, 13606218, 15759846, 17862656, 2151094, 1980580, 6753484, 8688904, 162324, 15222062, 6750166, 8029050, 2919886, 10291912, 7348136, 7878498, 9907622, 6481700, 11712632, 3879954, 9984516, 7544016, 214396, 19687296};
    vector<int> distancesC = {12925662, 15781984, 10404164, 971286, 10592208, 22716282, 14786026, 10654352, 9893946, 10525124, 12472608, 5090080, 9897264, 16702822, 11593658, 13060588, 11320198, 9714718, 13879684, 6153232, 24347564, 16514886, 17706482, 14482156, 12524680, 26625436};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> distancesA = {35612684, 4834878, 14228808, 24792460, 27584612, 8832132, 15098824, 17169522, 10345704, 24795474, 25275570, 30895616, 15296266};
    vector<int> distancesB = {27351214, 17496184, 13333812, 2520096, 42583676, 26091456, 14203828, 16069104, 17216916, 24343846, 34945242, 10169392, 7034796};
    vector<int> distancesC = {54411606, 41847484, 35354012, 24540296, 40072754, 28180474, 36224028, 27198704, 34022522, 44143816, 32434320, 32189592, 34095188};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> distancesA = {12996990, 3430030, 12321866, 9841146, 17178592, 12734994, 9122318, 4320708, 12019172, 8275140, 9880188, 12818174, 9115408, 8958760, 9093664, 14919232, 7857598, 9148084, 12035920, 10260548, 14936642, 20507132, 17448374, 9838142, 15374938, 12131216, 12039478, 17272268, 15778096, 11675876, 12380628, 12959380, 15110618, 9378022, 9161580, 8346564, 3471116, 13832788, 15030574};
    vector<int> distancesB = {13410000, 13886478, 15190324, 11499682, 18390838, 13148004, 14794806, 12995800, 12432182, 10196986, 14781336, 6117326, 8381822, 9513366, 17768756, 25375680, 4895748, 11069930, 5335072, 11578580, 8762560, 14080244, 4793678, 14078982, 10235044, 18036994, 5457752, 16538682, 12451694, 11379590, 13540102, 17200220, 10499364, 9791032, 8427994, 8050278, 9376894, 7508040, 10993158};
    vector<int> distancesC = {21151318, 12558980, 14609858, 14895064, 26132156, 20889322, 16013038, 11668302, 20173500, 17973332, 17051536, 13858644, 16123140, 17289712, 6895346, 18601632, 19768354, 18846276, 13076390, 18809794, 14829662, 21821562, 18607966, 15297214, 13630426, 27699402, 13199070, 24280000, 17707378, 19943136, 16935484, 12175976, 13894746, 17532350, 16169312, 16613824, 19460126, 10903422, 14388540};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> distancesA = {1145314};
    vector<int> distancesB = {17579300};
    vector<int> distancesC = {39254886};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> distancesA = {27895308, 20543968, 19157760, 21327276, 18146924, 30275884, 18549944, 21032824, 24164508, 16517804, 19797152, 14635280, 18968616, 21455302, 22840988, 18627684, 18650354, 29608490, 5964604, 29575642, 23905716, 16702362};
    vector<int> distancesB = {10510224, 3158884, 6906790, 8875486, 761840, 15249300, 6298974, 5557348, 14877444, 4497976, 2412068, 20091156, 3493140, 21972504, 10389198, 1242600, 6198564, 12223406, 11420480, 17123852, 8159214, 19045248};
    vector<int> distancesC = {15248500, 7897160, 1733138, 3701834, 6461636, 19987576, 1125322, 11257144, 9703792, 3157462, 7150344, 19140908, 9192936, 16798852, 5215546, 5980876, 1024912, 16961682, 18643956, 11950200, 6481094, 17073826};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> distancesA = {15061070, 12988664, 22843550, 11192264, 7897108, 19072028};
    vector<int> distancesB = {13650260, 15722666, 28171636, 25989290, 36608438, 9639302};
    vector<int> distancesC = {4977244, 7049650, 19498620, 15383702, 27935422, 966286};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> distancesA = {4687846, 13394162, 13724990, 13755802, 14768032, 16132070, 29333582, 20752214, 9708002, 26602746, 17154442, 17639746, 13576906, 8223046, 12407858, 9687812, 13027274, 15079042, 11205694, 12583892, 17754218, 15721318, 13259230, 16373614, 12629682};
    vector<int> distancesB = {2772936, 8516440, 8847268, 12946554, 17389612, 13206928, 27805014, 16166096, 2247220, 24593658, 16345194, 14420486, 6116124, 10844626, 7530136, 12309392, 9550828, 14259956, 7861978, 9240176, 13652134, 18761536, 5798448, 13029898, 11820434};
    vector<int> distancesC = {21349002, 13609226, 13940054, 11041334, 1893124, 17530886, 27556690, 21258882, 17905838, 13727838, 14439974, 14425728, 15667448, 8438110, 12622922, 6973344, 13242338, 18583914, 11420758, 12798956, 17969282, 10084678, 15937200, 16588678, 9915214};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> distancesA = {10540832, 5898394, 14358808, 9838002, 4573920, 14670262, 10295128, 12500028, 16096526, 12729966, 10842660, 18305264, 16535532, 18704076, 18222906, 20818252, 19688864, 8013064, 12915124, 10650940, 9870526, 10149202, 20045814, 20102256, 11870068, 12492174, 13299428, 23627018, 16941492, 16111148, 13921286, 13371744, 12213220, 10356744, 14234208, 9277858, 11066124, 15142964, 16521320};
    vector<int> distancesB = {4050080, 733394, 7727020, 4752910, 2057868, 9585170, 4295784, 5868240, 9464738, 7579826, 4210872, 11673476, 11289066, 12072288, 15250920, 15124720, 13057076, 1381276, 6283336, 5485940, 4720386, 4984202, 13414026, 13470468, 5238280, 7327174, 6667640, 18084728, 11437896, 9479360, 7289498, 9791958, 5581432, 7840692, 7602420, 2646070, 4434336, 11563178, 9889532};
    vector<int> distancesC = {5852954, 10636428, 8712482, 6555784, 11960902, 11388044, 6098658, 6853702, 9635328, 9382700, 11351354, 11351814, 10198796, 12242878, 18752380, 15295310, 13227666, 8521758, 5961674, 12440428, 6523260, 10023664, 16274810, 12824738, 11726472, 11128504, 5577370, 22358876, 11608486, 10464822, 7460088, 13953610, 13850320, 6677992, 8587882, 9786552, 11574818, 13874822, 12460358};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> distancesA = {17, 10, 20, 8, 12, 17, 15, 20, 5, 15, 12, 4, 19, 8, 20, 4, 16, 3, 14, 20, 18, 17, 4, 6, 7, 10, 18, 13, 2, 10, 19, 9, 12, 6, 2, 9, 13, 16, 2, 1, 20, 12, 1, 12, 18, 20};
    vector<int> distancesB = {14, 4, 17, 8, 15, 17, 7, 18, 3, 7, 2, 8, 8, 16, 12, 1, 6, 11, 6, 10, 18, 14, 1, 11, 14, 2, 16, 17, 14, 2, 1, 6, 8, 17, 19, 9, 4, 9, 9, 1, 11, 20, 12, 20, 1, 2};
    vector<int> distancesC = {7, 19, 7, 5, 2, 13, 9, 12, 9, 20, 7, 6, 5, 10, 20, 13, 8, 5, 9, 14, 11, 19, 19, 14, 20, 2, 20, 8, 12, 4, 17, 6, 19, 9, 7, 1, 4, 5, 1, 2, 2, 14, 20, 5, 15, 16};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> distancesA = {19, 2, 18, 9, 7, 3, 15, 6, 12, 11, 6, 3, 1, 8, 2, 19, 9, 17, 9};
    vector<int> distancesB = {9, 4, 4, 15, 17, 8, 6, 2, 15, 15, 20, 2, 12, 17, 2, 20, 3, 18, 11};
    vector<int> distancesC = {20, 9, 1, 7, 10, 13, 19, 3, 7, 14, 19, 10, 16, 2, 7, 9, 13, 15, 20};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> distancesA = {1, 16, 9, 5, 4, 1, 15, 17, 10, 1, 4, 6, 18, 18, 14, 14, 16, 18, 15, 3, 7, 8, 3, 7, 11, 13, 3, 5, 16, 5};
    vector<int> distancesB = {13, 16, 17, 12, 11, 3, 18, 14, 14, 18, 17, 3, 16, 16, 7, 19, 4, 20, 2, 18, 16, 15, 8, 2, 17, 3, 16, 7, 8, 18};
    vector<int> distancesC = {8, 10, 15, 9, 2, 10, 9, 16, 10, 13, 3, 9, 4, 5, 1, 4, 15, 5, 20, 16, 1, 9, 15, 2, 18, 6, 20, 18, 6, 14};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> distancesA = {18, 15, 19, 17, 8, 2, 10, 20, 13, 4, 7, 17, 9, 7, 18, 1, 12, 3, 1, 20, 11, 7, 18, 7, 13, 19, 2, 15, 18, 20, 20, 3, 18, 18, 5, 4, 18, 6};
    vector<int> distancesB = {11, 4, 10, 5, 18, 14, 13, 20, 10, 15, 12, 10, 20, 4, 10, 12, 14, 14, 12, 15, 5, 6, 6, 10, 7, 13, 1, 19, 7, 15, 3, 5, 13, 3, 16, 18, 16, 13};
    vector<int> distancesC = {13, 16, 12, 20, 8, 12, 1, 18, 9, 3, 12, 19, 5, 1, 13, 5, 11, 7, 19, 19, 11, 3, 9, 1, 14, 19, 4, 13, 19, 20, 16, 7, 14, 18, 3, 4, 8, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> distancesA = {10, 18, 5, 1, 9, 19, 16, 7, 10, 9, 13, 13, 16, 18, 8, 5, 17, 15, 2, 13, 14, 19, 9, 3, 18, 7, 5, 10, 11, 7, 1, 13, 20, 19, 6, 10, 18, 2, 19, 15, 12, 13, 18, 7, 14, 5, 13};
    vector<int> distancesB = {10, 20, 3, 4, 8, 3, 8, 14, 4, 18, 1, 18, 5, 5, 19, 5, 12, 15, 10, 18, 15, 6, 13, 3, 6, 5, 15, 4, 15, 13, 2, 18, 2, 10, 2, 13, 5, 6, 2, 2, 17, 13, 12, 18, 19, 6, 16};
    vector<int> distancesC = {8, 17, 16, 14, 16, 4, 12, 17, 14, 12, 17, 16, 2, 11, 9, 5, 16, 5, 1, 17, 17, 8, 16, 19, 8, 10, 8, 4, 19, 11, 16, 1, 6, 15, 1, 1, 2, 15, 18, 2, 3, 8, 15, 7, 1, 13, 9};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> distancesA = {19, 1, 5, 5, 20, 3, 10, 9, 7, 6, 17, 15, 16, 16, 3, 13, 20, 6, 13, 20, 17, 10, 14, 1, 16, 11, 18, 15, 9, 12, 9};
    vector<int> distancesB = {2, 5, 20, 17, 3, 14, 6, 4, 15, 15, 4, 4, 11, 13, 18, 20, 5, 9, 15, 8, 8, 12, 12, 10, 7, 2, 12, 17, 15, 11, 11};
    vector<int> distancesC = {9, 4, 7, 2, 16, 12, 8, 14, 1, 6, 5, 5, 9, 14, 5, 15, 5, 7, 11, 6, 3, 19, 13, 12, 19, 2, 3, 5, 7, 8, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> distancesA = {12, 18, 18, 18, 6, 12, 11, 16, 17, 11, 8, 19, 17, 6, 1, 15, 8, 9, 1, 19, 20, 6, 3, 15, 11, 8, 9, 6, 11, 19, 4, 7, 9, 3, 7, 9};
    vector<int> distancesB = {8, 3, 7, 4, 17, 5, 12, 13, 3, 18, 12, 13, 6, 3, 9, 19, 7, 6, 5, 17, 2, 2, 9, 17, 17, 19, 6, 15, 19, 14, 13, 14, 12, 2, 2, 14};
    vector<int> distancesC = {20, 9, 5, 3, 6, 9, 5, 5, 5, 7, 12, 20, 3, 10, 1, 12, 6, 19, 12, 12, 16, 2, 2, 16, 3, 8, 14, 3, 1, 8, 15, 16, 19, 20, 14, 12};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> distancesA = {20, 16, 3, 20, 12, 18, 6, 2, 12, 18, 8, 19, 14, 2, 7, 18, 8, 7};
    vector<int> distancesB = {11, 4, 3, 3, 8, 8, 6, 6, 12, 3, 13, 10, 16, 8, 3, 9, 10, 1};
    vector<int> distancesC = {7, 16, 11, 17, 2, 7, 4, 14, 6, 11, 15, 15, 4, 9, 7, 19, 19, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> distancesA = {5, 4, 6, 1, 10};
    vector<int> distancesB = {9, 1, 12, 2, 16};
    vector<int> distancesC = {14, 6, 10, 2, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> distancesA = {15, 5, 12, 1, 14, 20, 14, 3, 12, 6, 14, 9, 12, 8, 20, 5, 7, 14, 8, 11, 7, 11, 18, 17, 20, 5, 14, 3, 17, 20, 1, 17, 14, 3, 16, 2, 6, 18};
    vector<int> distancesB = {11, 8, 15, 2, 13, 4, 18, 2, 20, 19, 8, 19, 20, 6, 19, 3, 14, 4, 1, 17, 1, 4, 2, 8, 18, 6, 13, 14, 9, 3, 12, 12, 10, 19, 16, 9, 4, 6};
    vector<int> distancesC = {3, 8, 17, 1, 6, 9, 2, 15, 4, 18, 8, 4, 20, 20, 18, 3, 9, 12, 6, 20, 8, 7, 13, 8, 17, 1, 12, 5, 9, 12, 8, 3, 15, 19, 4, 7, 9, 18};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> distancesA = {4, 4, 6, 6, 6, 4, 4, 6, 4, 6, 4, 6, 4, 4, 4, 4, 6, 6, 6, 4, 4, 6, 2, 2, 2, 6, 6, 4, 4, 6, 6, 4, 6, 6, 4, 6, 4, 6, 6, 6, 6, 4, 4, 8, 6};
    vector<int> distancesB = {2, 4, 6, 2, 6, 4, 4, 2, 4, 4, 6, 2, 2, 6, 6, 6, 6, 6, 6, 8, 4, 6, 2, 6, 4, 6, 6, 4, 4, 4, 6, 6, 6, 2, 4, 4, 4, 4, 6, 4, 4, 6, 6, 4, 4};
    vector<int> distancesC = {6, 2, 6, 4, 4, 6, 4, 6, 6, 4, 4, 4, 6, 6, 6, 4, 4, 6, 2, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 6, 2, 4, 6, 8, 6, 4, 8, 6, 6, 4, 4, 6, 4, 6, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> distancesA = {4, 2, 6, 6, 6, 4, 6, 4, 6, 4, 6, 6, 6, 4, 4, 8, 6, 6, 6, 4, 2, 4, 4, 6, 8, 4, 6, 6, 2, 6};
    vector<int> distancesB = {6, 6, 4, 6, 6, 6, 2, 4, 4, 6, 2, 6, 4, 2, 4, 4, 6, 4, 6, 6, 2, 6, 4, 2, 6, 4, 6, 4, 6, 6};
    vector<int> distancesC = {6, 4, 6, 8, 8, 6, 4, 6, 6, 6, 6, 4, 8, 6, 6, 6, 8, 8, 8, 4, 4, 6, 6, 6, 8, 6, 6, 6, 4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> distancesA = {6, 6, 6, 6, 4, 6, 4, 6, 6, 6, 6, 6, 4, 4, 4, 6, 4, 6, 6, 2, 6, 6, 8, 6, 4, 6, 4, 6, 6, 4, 6, 8, 6, 4, 2, 4, 2, 6, 4, 6, 4, 6, 6, 6, 4, 6};
    vector<int> distancesB = {6, 4, 4, 2, 2, 4, 4, 4, 4, 6, 2, 4, 4, 6, 4, 4, 6, 4, 2, 4, 6, 6, 6, 4, 2, 2, 6, 6, 4, 6, 4, 6, 4, 2, 4, 4, 2, 6, 4, 6, 4, 6, 4, 4, 2, 4};
    vector<int> distancesC = {6, 2, 4, 2, 4, 6, 4, 2, 4, 6, 4, 6, 4, 4, 4, 4, 4, 4, 4, 6, 6, 2, 4, 4, 4, 4, 4, 6, 4, 4, 4, 2, 2, 2, 4, 4, 6, 4, 4, 4, 4, 4, 2, 4, 2, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> distancesA = {2, 8, 6, 6, 8, 10, 10, 4, 4, 6, 8, 10, 6, 8, 10};
    vector<int> distancesB = {8, 2, 6, 6, 6, 6, 8, 4, 6, 8, 4, 4, 4, 8, 2};
    vector<int> distancesC = {4, 8, 10, 6, 10, 6, 4, 8, 6, 4, 8, 6, 8, 10, 10};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> distancesA = {12, 8, 8, 12, 10, 12, 4, 8};
    vector<int> distancesB = {6, 6, 4, 6, 4, 6, 8, 2};
    vector<int> distancesC = {10, 8, 6, 12, 8, 6, 10, 8};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> distancesA = {8, 4, 4, 4, 6, 4, 4, 4, 4, 6, 8, 2, 6, 6, 6, 4, 6, 2, 6, 6, 4, 6, 6, 2, 4, 8, 6, 6, 4, 2, 4, 6, 6, 4, 6, 6, 4, 6, 6, 4};
    vector<int> distancesB = {6, 2, 2, 4, 6, 4, 4, 6, 6, 8, 6, 4, 6, 4, 6, 4, 4, 4, 4, 4, 6, 6, 6, 4, 6, 6, 6, 4, 2, 4, 6, 4, 6, 4, 6, 8, 6, 4, 6, 6};
    vector<int> distancesC = {8, 4, 4, 2, 6, 2, 4, 4, 4, 6, 6, 4, 4, 6, 6, 6, 6, 4, 4, 6, 4, 4, 6, 4, 4, 6, 4, 4, 4, 4, 6, 6, 4, 2, 4, 6, 6, 6, 6, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> distancesA = {4, 4, 6, 6, 6, 4, 6, 4, 6, 6, 4, 6, 4, 6, 6, 4, 6, 4, 6, 6, 4, 4, 4, 6, 6, 6, 4, 8, 6, 6, 6, 6, 8, 2, 4, 6, 8, 8, 4, 6, 4, 6, 6, 4};
    vector<int> distancesB = {6, 6, 6, 4, 4, 2, 6, 4, 4, 4, 4, 4, 6, 6, 6, 6, 6, 4, 4, 4, 2, 4, 4, 4, 4, 4, 2, 6, 4, 4, 6, 8, 6, 4, 4, 4, 6, 6, 2, 4, 2, 4, 6, 6};
    vector<int> distancesC = {6, 4, 4, 6, 4, 4, 2, 6, 6, 6, 4, 6, 4, 4, 4, 2, 4, 6, 4, 4, 4, 6, 4, 6, 4, 4, 4, 2, 6, 6, 2, 4, 6, 4, 2, 4, 6, 4, 6, 4, 6, 6, 6, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> distancesA = {4, 8, 8, 6, 10, 8, 6, 8, 8, 8, 10, 10, 8, 6, 6, 2, 8, 6, 6, 6, 6, 8, 8, 6, 8, 10, 6, 6};
    vector<int> distancesB = {6, 8, 8, 6, 8, 4, 8, 6, 2, 4, 4, 4, 6, 6, 4, 8, 6, 6, 6, 4, 6, 2, 6, 8, 8, 4, 4, 4};
    vector<int> distancesC = {6, 4, 6, 2, 6, 4, 6, 2, 6, 2, 8, 4, 4, 4, 4, 8, 2, 4, 4, 8, 6, 6, 8, 4, 4, 6, 8, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> distancesA = {6, 8, 8, 6, 2, 8, 6, 6, 6, 4, 6, 6, 8, 4, 6, 4, 6, 2, 6, 6, 6, 8, 8, 4, 6, 6, 4, 6, 2};
    vector<int> distancesB = {6, 2, 4, 6, 6, 8, 6, 8, 8, 8, 8, 4, 6, 8, 10, 6, 6, 6, 8, 8, 6, 8, 6, 4, 6, 4, 6, 6, 6};
    vector<int> distancesC = {8, 8, 6, 6, 2, 4, 4, 4, 6, 2, 6, 6, 4, 6, 4, 4, 6, 6, 2, 8, 6, 4, 6, 4, 4, 6, 6, 6, 6};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> distancesA = {10, 10, 8, 8, 8, 6, 14, 10, 12, 8, 10, 10, 8, 6, 10, 10, 8, 10, 10, 8, 10, 8, 10, 14, 10};
    vector<int> distancesB = {10, 6, 6, 4, 6, 8, 8, 8, 6, 6, 8, 8, 2, 4, 6, 8, 6, 8, 6, 6, 4, 6, 8, 10, 6};
    vector<int> distancesC = {4, 2, 6, 4, 6, 6, 4, 10, 8, 4, 4, 6, 6, 6, 4, 8, 6, 6, 6, 4, 6, 6, 6, 8, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> distancesA = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    vector<int> distancesB = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    vector<int> distancesC = {100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000, 100000000};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> distancesA = {4, 4};
    vector<int> distancesB = {4, 4};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> distancesA = {4, 2};
    vector<int> distancesB = {4, 4};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> distancesA = {4, 2};
    vector<int> distancesB = {4, 2};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> distancesA = {4, 2};
    vector<int> distancesB = {4, 2};
    vector<int> distancesC = {4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> distancesA = {2, 4};
    vector<int> distancesB = {4, 4};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> distancesA = {2, 4};
    vector<int> distancesB = {4, 2};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> distancesA = {2, 4};
    vector<int> distancesB = {4, 2};
    vector<int> distancesC = {4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> distancesA = {2, 4};
    vector<int> distancesB = {2, 4};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> distancesA = {2, 4};
    vector<int> distancesB = {2, 4};
    vector<int> distancesC = {4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> distancesA = {2, 4};
    vector<int> distancesB = {2, 4};
    vector<int> distancesC = {2, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {4, 4};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {4, 2};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {4, 2};
    vector<int> distancesC = {4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 4};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 4};
    vector<int> distancesC = {4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 4};
    vector<int> distancesC = {2, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 2};
    vector<int> distancesC = {4, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 2};
    vector<int> distancesC = {4, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 2};
    vector<int> distancesC = {2, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> distancesA = {2, 2};
    vector<int> distancesB = {2, 2};
    vector<int> distancesC = {2, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> distancesA = {45, 51, 23, 14, 30, 59, 47, 57, 6, 39, 11, 54, 8, 18, 65, 9, 4, 20, 43, 1, 64, 21, 12, 3, 68, 36, 7, 7, 12, 28, 9, 16, 38, 1, 34, 3, 41, 56, 5, 14, 42, 26, 49, 16, 53, 32, 60, 67, 35, 62};
    vector<int> distancesB = {21, 27, 1, 10, 6, 35, 23, 33, 30, 15, 13, 30, 16, 6, 41, 15, 28, 4, 19, 23, 40, 3, 12, 27, 44, 12, 17, 31, 36, 4, 33, 8, 14, 25, 10, 21, 17, 32, 19, 38, 18, 2, 25, 40, 29, 8, 36, 43, 11, 38};
    vector<int> distancesC = {55, 61, 33, 24, 40, 69, 57, 67, 4, 49, 21, 64, 18, 28, 75, 19, 6, 30, 53, 11, 74, 31, 22, 7, 78, 46, 17, 3, 2, 38, 1, 26, 48, 9, 44, 13, 51, 66, 15, 4, 52, 36, 59, 6, 63, 42, 70, 77, 45, 72};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 7488594;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> distancesA = {9, 48, 32, 10, 43, 49, 14, 6, 44, 15, 56, 3, 51, 24, 16, 19, 9, 5, 24, 13, 25, 7, 41, 11, 52, 15, 28, 18, 55, 12, 34, 4, 46, 7, 23, 30, 37, 20, 36, 5, 22, 39, 2, 18, 42, 54, 14, 16, 26, 21};
    vector<int> distancesB = {10, 49, 33, 11, 44, 50, 15, 7, 45, 16, 57, 4, 52, 25, 15, 18, 8, 4, 23, 12, 26, 6, 42, 10, 53, 14, 29, 17, 56, 13, 35, 5, 47, 8, 22, 31, 38, 21, 37, 6, 23, 40, 3, 19, 43, 55, 13, 17, 27, 20};
    vector<int> distancesC = {12, 51, 35, 13, 46, 52, 17, 9, 47, 18, 59, 6, 54, 27, 13, 16, 6, 2, 21, 10, 28, 4, 44, 8, 55, 12, 31, 15, 58, 15, 37, 7, 49, 10, 20, 33, 40, 23, 39, 8, 25, 42, 5, 21, 45, 57, 11, 19, 29, 18};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 348110074;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> distancesA = {2, 40, 31, 23, 35, 27, 6, 10, 29, 17, 15, 46, 23, 10, 36, 21, 41, 24, 15, 51, 19, 49, 53, 8, 44, 4, 19, 47, 28, 5, 37, 11, 27, 26, 20, 17, 55, 12, 21, 26, 43, 8, 14, 3, 6, 2, 33, 38, 50, 24};
    vector<int> distancesB = {1, 41, 32, 22, 36, 28, 5, 11, 30, 16, 16, 47, 24, 9, 37, 22, 42, 25, 14, 52, 20, 50, 54, 7, 45, 5, 18, 48, 29, 4, 38, 10, 26, 25, 19, 18, 56, 13, 20, 27, 44, 9, 15, 2, 7, 3, 34, 39, 51, 23};
    vector<int> distancesC = {11, 53, 44, 10, 48, 40, 7, 23, 42, 4, 28, 59, 36, 3, 49, 34, 54, 37, 2, 64, 32, 62, 66, 5, 57, 17, 6, 60, 41, 8, 50, 2, 14, 13, 7, 30, 68, 25, 8, 39, 56, 21, 27, 10, 19, 15, 46, 51, 63, 11};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 799866075;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> distancesA = {5, 18, 46, 21, 41, 1, 4, 5, 35, 2, 45, 29, 19, 27, 13, 38, 34, 1, 25, 43, 8, 9, 22, 33, 30, 16, 6, 3, 14, 9, 19, 8, 10, 2, 14, 16, 17, 6, 12, 39, 23, 32, 21, 28, 7, 11, 36, 11, 10, 47};
    vector<int> distancesB = {12, 11, 53, 28, 48, 6, 3, 2, 42, 9, 52, 36, 12, 34, 6, 45, 41, 8, 32, 50, 15, 16, 29, 40, 37, 23, 13, 10, 21, 2, 26, 1, 17, 5, 7, 9, 24, 1, 19, 46, 30, 39, 14, 35, 14, 18, 43, 4, 3, 54};
    vector<int> distancesC = {25, 2, 66, 41, 61, 19, 16, 15, 55, 22, 65, 49, 1, 47, 7, 58, 54, 21, 45, 63, 28, 29, 42, 53, 50, 36, 26, 23, 34, 11, 39, 12, 30, 18, 6, 4, 37, 14, 32, 59, 43, 52, 1, 48, 27, 31, 56, 9, 10, 67};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 277565576;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> distancesA = {43, 4, 20, 7, 46, 41, 70, 50, 6, 68, 11, 66, 5, 3, 29, 59, 37, 5, 55, 30, 28, 22, 13, 51, 62, 24, 47, 64, 34, 3, 12, 18, 52, 26, 39, 31, 9, 49, 15, 33, 60, 16, 58, 54, 2, 36, 14, 57, 7, 45};
    vector<int> distancesB = {26, 21, 3, 24, 29, 24, 53, 33, 11, 51, 6, 49, 12, 14, 12, 42, 20, 22, 38, 13, 11, 5, 4, 34, 45, 7, 30, 47, 17, 20, 5, 1, 35, 9, 22, 14, 8, 32, 2, 16, 43, 1, 41, 37, 15, 19, 3, 40, 10, 28};
    vector<int> distancesC = {45, 2, 22, 5, 48, 43, 72, 52, 8, 70, 13, 68, 7, 5, 31, 61, 39, 3, 57, 32, 30, 24, 15, 53, 64, 26, 49, 66, 36, 1, 14, 20, 54, 28, 41, 33, 11, 51, 17, 35, 62, 18, 60, 56, 4, 38, 16, 59, 9, 47};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 304616396;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> distancesA = {6859313, 16419975, 6415042, 2619445, 9124963, 7684203, 1864756, 15041961, 13545165, 8848020, 3835273, 3862492, 3246614, 8666352, 3252481, 14235601, 4667749, 10345055, 4491593, 9442364, 15444883, 13357682, 17654, 2993361, 6211678, 17252838, 5469077, 6707147, 10310047, 9399570, 7893733, 5234809, 11326325, 7490625, 873053, 5772685, 17093829, 983738, 2032984, 2654023, 96286, 9340429, 3201179, 50073, 8040864, 572883, 1830039, 5067182, 11628802, 12445219};
    vector<int> distancesB = {3191675, 6368987, 16466030, 7431543, 19175951, 17735191, 11915744, 4990973, 3494177, 18899008, 6215715, 13913480, 13297602, 1384636, 6798507, 4184613, 14718737, 294067, 5559395, 608624, 5393895, 3306694, 10068642, 7057627, 3839310, 7201850, 15520065, 16758135, 20361035, 19450558, 2157255, 4816179, 1275337, 2560363, 10924041, 15823673, 7042841, 9067250, 8018004, 12705011, 9954702, 710559, 6849809, 10000915, 18091852, 9478105, 8220949, 4983806, 1577814, 2394231};
    vector<int> distancesC = {14739165, 24299827, 1464810, 10499297, 1245111, 195649, 6015096, 22921813, 21425017, 968168, 11715125, 4017360, 4633238, 16546204, 11132333, 22115453, 3212103, 18224907, 12371445, 17322216, 23324735, 21237534, 7862198, 10873213, 14091530, 25132690, 2410775, 1172705, 2430195, 1519718, 15773585, 13114661, 19206177, 15370477, 7006799, 2107167, 24973681, 8863590, 9912836, 5225829, 7976138, 17220281, 11081031, 7929925, 161012, 8452735, 9709891, 12947034, 19508654, 20325071};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 480191487;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> distancesA = {20829397, 17885694, 12407845, 13268643, 1921294, 14968810, 11890152, 14448553, 4321230, 15931410, 1900913, 10072329, 5523904, 8445157, 13511633, 13021171, 18517175, 20434031, 11300419, 685566, 13910091, 15917377, 4987631, 17503647, 622882, 6942434, 2752561, 412544, 3688333, 7463518, 1178264, 19570402, 394259, 1490439, 6288414, 8057707, 1223635, 2965143, 10779979, 11994748, 10146613, 3742528, 18908008, 9276354, 19745423, 16653996, 3338785, 691191, 471812, 11327040};
    vector<int> distancesB = {20516064, 17572361, 12094512, 12955310, 1607961, 14655477, 11576819, 14135220, 4007897, 15618077, 2214246, 9758996, 5210571, 8131824, 13198300, 12707838, 18203842, 20120698, 10987086, 998899, 13596758, 15604044, 4674298, 17190314, 936215, 6629101, 2439228, 99211, 3375000, 7150185, 864931, 19257069, 707592, 1803772, 5975081, 7744374, 910302, 2651810, 10466646, 11681415, 9833280, 3429195, 18594675, 8963021, 19432090, 16340663, 3025452, 1004524, 785145, 11013707};
    vector<int> distancesC = {9979552, 7035849, 1558000, 2418798, 8928551, 4118965, 1040307, 3598708, 6528615, 5081565, 12750758, 777516, 5325941, 2404688, 2661788, 2171326, 7667330, 9584186, 450574, 11535411, 3060246, 5067532, 5862214, 6653802, 11472727, 3907411, 8097284, 10437301, 7161512, 3386327, 9671581, 8720557, 11244104, 12340284, 4561431, 2792138, 9626210, 7884702, 69866, 1144903, 703232, 7107317, 8058163, 1573491, 8895578, 5804151, 7511060, 11541036, 11321657, 477195};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 154069770;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> distancesA = {9735718, 12323966, 465753, 493694, 16830232, 2429162, 3265865, 7883363, 846884, 5708462, 13756190, 13440469, 5715434, 1488357, 4509485, 11204703, 6584560, 1810433, 11274376, 14060013, 4038841, 14820237, 15272859, 15815130, 10789030, 4888238, 6395314, 1752541, 10900275, 6489505, 9087906, 14885863, 7111985, 3028033, 10781716, 587488, 11444618, 7343979, 9518673, 2747570, 4917258, 12717989, 6130812, 16755985, 3550352, 8824950, 3704361, 2261275, 17247614, 10361109};
    vector<int> distancesB = {2143896, 444352, 12345367, 11385920, 4950618, 9450452, 8613749, 3996251, 12726498, 17588076, 1876576, 1560855, 6164180, 10391257, 16389099, 674911, 5295054, 13690047, 605238, 2180399, 7840773, 2940623, 3393245, 3935516, 1090584, 16767852, 18274928, 13632155, 979339, 18369119, 2791708, 3006249, 4767629, 14907647, 1097898, 11292126, 434996, 19223593, 2360941, 14627184, 6962356, 838375, 5748802, 4876371, 15429966, 3054664, 8175253, 14140889, 5368000, 1518505};
    vector<int> distancesC = {7833793, 10422041, 2367678, 1408231, 14928307, 527237, 1363940, 5981438, 2748809, 7610387, 11854265, 11538544, 3813509, 413568, 6411410, 9302778, 4682635, 3712358, 9372451, 12158088, 2136916, 12918312, 13370934, 13913205, 8887105, 6790163, 8297239, 3654466, 8998350, 8391430, 7185981, 12983938, 5210060, 4929958, 8879791, 1314437, 9542693, 9245904, 7616748, 4649495, 3015333, 10816064, 4228887, 14854060, 5452277, 6923025, 1802436, 4163200, 15345689, 8459184};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 239054654;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> distancesA = {4340249, 18598162, 2054794, 13096033, 18896976, 8948352, 706967, 12940935, 2894977, 15116514, 16468139, 7659764, 8264285, 1001451, 11674094, 5019707, 13801902, 21200718, 3820002, 3836857, 4508570, 9914790, 13851686, 813648, 20368743, 7241446, 2601124, 19652177, 2513237, 17250787, 12256874, 17850860, 4180828, 4779053, 15566427, 10857197, 6432542, 3578246, 12950101, 2468180, 2983221, 13953957, 1160709, 543173, 1686547, 4457725, 3221622, 10483797, 9029954, 5513897};
    vector<int> distancesB = {18853384, 4085027, 16567929, 1417102, 4383841, 5564783, 13806168, 1572200, 17408112, 603379, 1955004, 6853371, 6248850, 15514586, 2839041, 9493428, 711233, 6687583, 10693133, 18349992, 19021705, 4598345, 661449, 13699487, 5855608, 7271689, 11912011, 5139042, 17026372, 2737652, 2256261, 3337725, 18693963, 9734082, 1053292, 3655938, 8080593, 10934889, 1563034, 12044955, 11529914, 559178, 15673844, 15056308, 12826588, 10055410, 11291513, 4029338, 5483181, 8999238};
    vector<int> distancesC = {6864989, 16073422, 4579534, 10571293, 16372236, 6423612, 1817773, 10416195, 5419717, 12591774, 13943399, 5135024, 5739545, 3526191, 9149354, 2494967, 11277162, 18675978, 1295262, 6361597, 7033310, 7390050, 11326946, 1711092, 17844003, 4716706, 76384, 17127437, 5037977, 14726047, 9732134, 15326120, 6705568, 2254313, 13041687, 8332457, 3907802, 1053506, 10425361, 56560, 458481, 11429217, 3685449, 3067913, 838193, 1932985, 696882, 7959057, 6505214, 2989157};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 189321488;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> distancesA = {21258644, 19862485, 4331058, 18264144, 11594766, 3009387, 4538796, 19196854, 24096812, 1791740, 756808, 22675566, 5210405, 3688607, 12259240, 21757186, 24127419, 21188891, 6137818, 8806310, 18759156, 10786692, 8780272, 712014, 9582216, 20543825, 17069927, 3786516, 7884252, 20619215, 16371676, 20565698, 6970125, 13919317, 12235670, 15062035, 14690883, 18312011, 13199707, 23553880, 4269401, 10456366, 2734987, 13701892, 23576697, 19813888, 1461770, 16893741, 893757, 4086909};
    vector<int> distancesB = {3264946, 1868787, 13662640, 270446, 6398932, 14984311, 13454902, 1203156, 6103114, 16201958, 18750506, 4681868, 12783293, 14305091, 5734458, 3763488, 6133721, 3195193, 11855880, 9187388, 765458, 7207006, 9213426, 17281684, 8411482, 2550127, 923771, 14207182, 10109446, 2625517, 1622022, 2572000, 11023573, 4074381, 5758028, 2931663, 3302815, 318313, 4793991, 5560182, 13724297, 7537332, 15258711, 4291806, 5582999, 1820190, 16531928, 1099957, 18887455, 13906789};
    vector<int> distancesC = {5664239, 4268080, 11263347, 2669739, 3999639, 12585018, 11055609, 3602449, 8502407, 13802665, 16351213, 7081161, 10384000, 11905798, 3335165, 6162781, 8533014, 5594486, 9456587, 6788095, 3164751, 4807713, 6814133, 14882391, 6012189, 4949420, 1475522, 11807889, 7710153, 5024810, 777271, 4971293, 8624280, 1675088, 3358735, 532370, 903522, 2717606, 2394698, 7959475, 11325004, 5138039, 12859418, 1892513, 7982292, 4219483, 14132635, 1299336, 16488162, 11507496};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 849789634;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> distancesA = {4, 4, 4, 4, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 4, 4, 3, 4, 4, 3, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 4, 3, 4, 3, 4, 4, 2, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    vector<int> distancesB = {3, 3, 3, 3, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 3, 3, 3, 3, 2, 3, 3, 2, 3, 2, 2, 2, 2, 2, 3, 3, 2, 2, 3, 2, 3, 2, 3, 2, 3, 3, 1, 2, 2, 3, 3, 3, 3, 2, 2, 2};
    vector<int> distancesC = {4, 4, 4, 4, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 4, 4, 4, 4, 3, 4, 4, 3, 4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 4, 3, 4, 3, 4, 3, 4, 4, 2, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 222808379;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> distancesA = {3, 3, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 1, 3, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 2, 3, 3, 2, 2, 3, 3, 3, 3, 3, 2, 3, 2, 3, 2, 3};
    vector<int> distancesB = {3, 3, 2, 2, 3, 3, 2, 3, 2, 2, 2, 2, 3, 2, 3, 3, 1, 3, 2, 2, 2, 2, 2, 3, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 2, 3, 3, 2, 2, 3, 3, 3, 3, 3, 2, 3, 2, 3, 2, 3};
    vector<int> distancesC = {4, 4, 3, 3, 4, 4, 3, 4, 3, 3, 3, 3, 4, 3, 4, 4, 2, 4, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4, 3, 4, 4, 3, 3, 4, 4, 4, 4, 4, 3, 4, 3, 4, 3, 4};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 653897930;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> distancesA = {3, 3, 4, 3, 2, 4, 4, 4, 3, 3, 3, 4, 3, 4, 4, 3, 4, 4, 3, 4, 3, 3, 3, 4, 3, 3, 4, 4, 4, 3, 3, 3, 4, 3, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4, 4, 3, 3, 4, 3, 3};
    vector<int> distancesB = {2, 2, 3, 2, 1, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 2, 3, 3, 2, 3, 2, 2, 2, 3, 2, 2, 3, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 3, 2, 2, 3, 2, 2};
    vector<int> distancesC = {2, 2, 3, 2, 1, 3, 3, 3, 2, 2, 2, 3, 2, 3, 3, 2, 3, 3, 2, 3, 2, 2, 2, 3, 2, 2, 3, 3, 3, 2, 2, 2, 3, 2, 2, 2, 2, 2, 3, 2, 2, 3, 2, 3, 3, 2, 2, 3, 2, 2};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 860181748;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> distancesA = {3, 4, 3, 3, 4, 4, 4, 3, 4, 4, 4, 3, 4, 3, 3, 3, 4, 3, 2, 4, 4, 3, 4, 4, 3, 4, 3, 3, 4, 3, 3, 4, 4, 3, 4, 4, 4, 3, 4, 3, 3, 4, 4, 4, 3, 3, 4, 3, 3, 4};
    vector<int> distancesB = {2, 3, 2, 2, 3, 3, 3, 2, 3, 3, 3, 2, 3, 2, 2, 2, 3, 2, 1, 3, 3, 2, 3, 3, 2, 3, 2, 2, 3, 2, 2, 3, 3, 2, 3, 3, 3, 2, 3, 2, 2, 3, 3, 3, 2, 2, 3, 2, 2, 3};
    vector<int> distancesC = {2, 3, 2, 2, 3, 3, 3, 2, 3, 3, 3, 2, 3, 2, 2, 2, 3, 2, 1, 3, 3, 2, 3, 3, 2, 3, 2, 2, 3, 2, 2, 3, 3, 2, 3, 3, 3, 2, 3, 2, 2, 3, 3, 3, 2, 2, 3, 2, 2, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 699550393;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> distancesA = {3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 4, 4, 4, 4, 3, 3, 4, 4, 3, 4, 3, 4, 4, 4, 3, 4, 4, 4, 4, 4, 3, 4, 4, 3, 4, 4, 3, 3, 4, 3, 3, 3, 3, 2, 3, 3, 3, 4};
    vector<int> distancesB = {2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 3, 2, 3, 3, 3, 3, 2, 2, 3, 3, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 2, 3, 3, 2, 3, 3, 2, 2, 3, 2, 2, 2, 2, 1, 2, 2, 2, 3};
    vector<int> distancesC = {2, 2, 2, 2, 3, 3, 2, 2, 2, 3, 3, 2, 3, 3, 3, 3, 2, 2, 3, 3, 2, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 2, 3, 3, 2, 3, 3, 2, 2, 3, 2, 2, 2, 2, 1, 2, 2, 2, 3};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 495176982;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> distancesA = {1529861, 1674021, 1150906, 1416626, 1845701, 923310, 1566251, 1310487, 1767965, 1620349, 915490, 1199618, 952549, 1676475, 1321419, 930305, 1632081, 1039186, 1052130, 1388897, 1263482, 1861001, 1713637, 935194, 1238264, 1743107, 1692260, 1333719, 1515929, 1197025, 915730, 1409093, 1153698, 1101805, 1594193, 1819949, 1066482, 1268472, 1737411, 1818025, 1735757, 1068657, 1720091, 1433123, 1625080, 1331850, 1410386, 1525803, 997251, 1605486};
    vector<int> distancesB = {1169274, 1313434, 790319, 1056039, 1485114, 562723, 1205664, 949900, 1407378, 1259762, 554903, 839031, 591962, 1315888, 960832, 569718, 1271494, 678599, 691543, 1028310, 902895, 1500414, 1353050, 574607, 877677, 1382520, 1331673, 973132, 1155342, 836438, 555143, 1048506, 793111, 741218, 1233606, 1459362, 705895, 907885, 1376824, 1457438, 1375170, 708070, 1359504, 1072536, 1264493, 971263, 1049799, 1165216, 636664, 1244899};
    vector<int> distancesC = {1510669, 1654829, 1131714, 1397434, 1826509, 904118, 1547059, 1291295, 1748773, 1601157, 896298, 1180426, 933357, 1657283, 1302227, 911113, 1612889, 1019994, 1032938, 1369705, 1244290, 1841809, 1694445, 916002, 1219072, 1723915, 1673068, 1314527, 1496737, 1177833, 896538, 1389901, 1134506, 1082613, 1575001, 1800757, 1047290, 1249280, 1718219, 1798833, 1716565, 1049465, 1700899, 1413931, 1605888, 1312658, 1391194, 1506611, 978059, 1586294};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 719363319;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> distancesA = {1001621, 1130410, 754719, 1082858, 953365, 1668478, 740709, 1070648, 1559895, 972338, 1564375, 1204145, 1012962, 1468248, 790990, 1047583, 882301, 1653114, 1296171, 723822, 901516, 846195, 677572, 1563562, 1476156, 1401950, 1644246, 753220, 1598191, 1198020, 1049657, 1163472, 1062999, 866502, 803014, 1560867, 1653358, 793581, 933375, 1109455, 1223382, 1183777, 1412712, 875123, 916715, 1159582, 792706, 1642299, 1125075, 1505804};
    vector<int> distancesB = {1116168, 1244957, 869266, 1197405, 1067912, 1783025, 855256, 1185195, 1674442, 1086885, 1678922, 1318692, 1127509, 1582795, 905537, 1162130, 996848, 1767661, 1410718, 838369, 1016063, 960742, 792119, 1678109, 1590703, 1516497, 1758793, 867767, 1712738, 1312567, 1164204, 1278019, 1177546, 981049, 917561, 1675414, 1767905, 908128, 1047922, 1224002, 1337929, 1298324, 1527259, 989670, 1031262, 1274129, 907253, 1756846, 1239622, 1620351};
    vector<int> distancesC = {1289914, 1418703, 1043012, 1371151, 1241658, 1956771, 1029002, 1358941, 1848188, 1260631, 1852668, 1492438, 1301255, 1756541, 1079283, 1335876, 1170594, 1941407, 1584464, 1012115, 1189809, 1134488, 965865, 1851855, 1764449, 1690243, 1932539, 1041513, 1886484, 1486313, 1337950, 1451765, 1351292, 1154795, 1091307, 1849160, 1941651, 1081874, 1221668, 1397748, 1511675, 1472070, 1701005, 1163416, 1205008, 1447875, 1080999, 1930592, 1413368, 1794097};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 719363319;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> distancesA = {1028412, 795319, 1264642, 1324532, 1471064, 690725, 1403422, 1445596, 925572, 1042630, 699815, 1085845, 870646, 960843, 909946, 1044026, 1222406, 1510426, 593086, 952346, 1549932, 1137979, 1338423, 1409860, 781354, 1078423, 1309142, 1590148, 619727, 979707, 1196222, 822336, 1578283, 1331805, 1120627, 1174540, 1516397, 1458881, 941258, 1550483, 1274950, 1527554, 639885, 1573553, 784279, 1123274, 1318328, 1268031, 1145362, 1114723};
    vector<int> distancesB = {1312072, 1078979, 1548302, 1608192, 1754724, 974385, 1687082, 1729256, 1209232, 1326290, 983475, 1369505, 1154306, 1244503, 1193606, 1327686, 1506066, 1794086, 876746, 1236006, 1833592, 1421639, 1622083, 1693520, 1065014, 1362083, 1592802, 1873808, 903387, 1263367, 1479882, 1105996, 1861943, 1615465, 1404287, 1458200, 1800057, 1742541, 1224918, 1834143, 1558610, 1811214, 923545, 1857213, 1067939, 1406934, 1601988, 1551691, 1429022, 1398383};
    vector<int> distancesC = {1394733, 1161640, 1630963, 1690853, 1837385, 1057046, 1769743, 1811917, 1291893, 1408951, 1066136, 1452166, 1236967, 1327164, 1276267, 1410347, 1588727, 1876747, 959407, 1318667, 1916253, 1504300, 1704744, 1776181, 1147675, 1444744, 1675463, 1956469, 986048, 1346028, 1562543, 1188657, 1944604, 1698126, 1486948, 1540861, 1882718, 1825202, 1307579, 1916804, 1641271, 1893875, 1006206, 1939874, 1150600, 1489595, 1684649, 1634352, 1511683, 1481044};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 719363319;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> distancesA = {1229210, 1855387, 1274464, 1313613, 1584663, 1354099, 1701751, 1619901, 1341022, 1592493, 1333824, 1430781, 913654, 1265913, 1180546, 1857735, 1353420, 1055120, 988672, 1888726, 1080889, 1246024, 1291579, 977406, 1322644, 1743154, 1255392, 1732512, 1226785, 1620156, 1151186, 1707594, 1835385, 1816285, 1136761, 1734763, 1006481, 988217, 1643072, 1782568, 1561565, 1452784, 1327159, 899587, 1096753, 1819760, 1451376, 1442129, 1886772, 1176397};
    vector<int> distancesB = {432901, 1059078, 478155, 517304, 788354, 557790, 905442, 823592, 544713, 796184, 537515, 634472, 117345, 469604, 384237, 1061426, 557111, 258811, 192363, 1092417, 284580, 449715, 495270, 181097, 526335, 946845, 459083, 936203, 430476, 823847, 354877, 911285, 1039076, 1019976, 340452, 938454, 210172, 191908, 846763, 986259, 765256, 656475, 530850, 103278, 300444, 1023451, 655067, 645820, 1090463, 380088};
    vector<int> distancesC = {361394, 987571, 406648, 445797, 716847, 486283, 833935, 752085, 473206, 724677, 466008, 562965, 45838, 398097, 312730, 989919, 485604, 187304, 120856, 1020910, 213073, 378208, 423763, 109590, 454828, 875338, 387576, 864696, 358969, 752340, 283370, 839778, 967569, 948469, 268945, 866947, 138665, 120401, 775256, 914752, 693749, 584968, 459343, 31771, 228937, 951944, 583560, 574313, 1018956, 308581};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 719363319;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> distancesA = {702166, 1555532, 1261806, 1198449, 740008, 1435922, 979476, 719054, 758247, 1599597, 1458741, 997719, 1531783, 1327401, 1223194, 1294040, 1061006, 1179975, 1600936, 1377519, 900316, 883550, 760292, 725598, 1528213, 770229, 1581035, 815179, 1170508, 947372, 708044, 1166022, 822451, 815802, 1080615, 748415, 1110309, 1109334, 1602256, 1375463, 913737, 1260497, 868086, 833238, 726566, 641218, 999191, 735789, 1532149, 1356354};
    vector<int> distancesB = {495120, 1348486, 1054760, 991403, 532962, 1228876, 772430, 512008, 551201, 1392551, 1251695, 790673, 1324737, 1120355, 1016148, 1086994, 853960, 972929, 1393890, 1170473, 693270, 676504, 553246, 518552, 1321167, 563183, 1373989, 608133, 963462, 740326, 500998, 958976, 615405, 608756, 873569, 541369, 903263, 902288, 1395210, 1168417, 706691, 1053451, 661040, 626192, 519520, 434172, 792145, 528743, 1325103, 1149308};
    vector<int> distancesC = {552768, 1406134, 1112408, 1049051, 590610, 1286524, 830078, 569656, 608849, 1450199, 1309343, 848321, 1382385, 1178003, 1073796, 1144642, 911608, 1030577, 1451538, 1228121, 750918, 734152, 610894, 576200, 1378815, 620831, 1431637, 665781, 1021110, 797974, 558646, 1016624, 673053, 666404, 931217, 599017, 960911, 959936, 1452858, 1226065, 764339, 1111099, 718688, 683840, 577168, 491820, 849793, 586391, 1382751, 1206956};
    UnknownTree* pObj = new UnknownTree();
    clock_t start = clock();
    int result = pObj->getCount(distancesA, distancesB, distancesC);
    clock_t end = clock();
    delete pObj;
    int expected = 719363319;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15187&pm=12353
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
 
class UnknownTree {
public:
  int getCount(vector <int>, vector <int>, vector <int>);
};
 
const int md = 1000000009;
 
vector < pair <int, int> > v[7];
 
int get_res(vector < pair<int, int> > V) {
  int i, j, res = 1;
  sort(V.begin(), V.end());
  int sz = V.size();
  i = 0;
  while (i < sz) {
    j = i;
    while (j < sz && V[i].first == V[j].first) j++;
    if (V[i].second != 0) res = 0;
    for (int k=i+1;k<j;k++) {
      int cnt = 0;
      for (int p=i;p<k;p++)
        if (V[p].second < V[k].second) cnt++;
      res = (long long)res*cnt % md;
    }
    i = j;
  }
  return res;
}
 
int mabs(int x) {
  return (x < 0) ? -x : x;
}
 
int UnknownTree::getCount(vector <int> dA, vector <int> dB, vector <int> dC) {
  int n = dA.size(), i, j, ans = 0;
  int min = (int)1e9, km = -1;
  for (i=0;i<n;i++) {
    int cur = dA[i]+dB[i]+dC[i];
    if (cur < min) min = cur, km = i; else
    if (cur == min) km = -1;
  }
  if (km != -1) {
    int center = km;
    int dAc = dA[center], dBc = dB[center], dCc = dC[center], ok = 1;
    for (i=0;i<4;i++) v[i].clear();
    v[0].push_back(make_pair(0, 0));
    v[1].push_back(make_pair(dAc, 0));
    v[2].push_back(make_pair(dBc, 0));
    v[3].push_back(make_pair(dCc, 0));
    for (i=0;i<n;i++) {
      if (i == center) continue;
      int qa = dA[i]-dAc, qb = dB[i]-dBc, qc = dC[i]-dCc;
      if (qa != qb && qa != qc && qb != qc) {
        ok = 0;
        break;
      }
      if (qa == qb && qa == qc && qb == qc) {
        v[0].push_back(make_pair(0, qa));
        continue;
      }
      if (qb == qc) {
        int t1 = qb-qa, t2 = qb+qa;
        if (t1 < 0 || t1 % 2 != 0 || t2 < 0 || t2 % 2 != 0) ok = 0;
        v[1].push_back(make_pair(t1/2, t2/2));
      } 
      if (qa == qc) {
        int t1 = qa-qb, t2 = qa+qb;
        if (t1 < 0 || t1 % 2 != 0 || t2 < 0 || t2 % 2 != 0) ok = 0;
        v[2].push_back(make_pair(t1/2, t2/2));
      } 
      if (qa == qb) {
        int t1 = qa-qc, t2 = qa+qc;
        if (t1 < 0 || t1 % 2 != 0 || t2 < 0 || t2 % 2 != 0) ok = 0;
        v[3].push_back(make_pair(t1/2, t2/2));
      } 
      if (!ok) break;
    }
    if (ok) {
      int res = 1;
      for (int z=0;z<4;z++) {
        res = (long long)res*get_res(v[z]) % md;
      }
      ans = (ans+res) % md;
    }
  }
 
  for (int rot=0;rot<3;rot++) {
    int min = (int)1e9, km = 0, mi[77];
    for (i=0;i<n;i++) {
      int ft = dA[i]+dC[i];
      if (ft < min) {
        min = ft;
        km = 0;
      }
      if (ft == min) mi[km++] = i;
    }
    for (i=0;i<km;i++)
      for (j=i+1;j<km;j++)
        if (dA[mi[i]] > dA[mi[j]]) {
          int tmp = mi[i]; mi[i] = mi[j]; mi[j] = tmp;
        }
    int ok = 1;
    for (i=0;i<km-1;i++)
      if (dA[mi[i]] == dA[mi[i+1]]) ok = 0;
    if (ok) {
      for (int w=0;w<2;w++) {
        int dAB;
        if (w == 0) dAB = dA[mi[0]]+dB[mi[0]];
        else dAB = dA[mi[0]]-dB[mi[0]];
        if (dAB <= 0 || dAB >= min) continue;
        int err = 0;
        for (i=0;i<km;i++) {
          int dd = dAB-dA[mi[i]];
          if (dd < 0) dd = -dd;
          if (dd != dB[mi[i]]) err = 1;
        }
        if (err) continue;
        for (i=0;i<3;i++) v[i].clear();
        v[0].push_back(make_pair(0, 0));
        v[2].push_back(make_pair(dAB, 0));
        v[1].push_back(make_pair(min-dAB, 0));
        for (i=0;i<n;i++) {
          bool w1 = (dA[i]-dB[i] == dAB);
          bool w2 = (dC[i]-dB[i] == min-dAB);
          if (!w1 && !w2) {
            err = 1;
            break;
          }
          if (w1 && w2) {
            v[0].push_back(make_pair(0, dB[i]));
            continue;
          }
          if (w1) {
            int t2 = dB[i]+dC[i]-(min-dAB);
            int t1 = dB[i]-t2/2;
            if (t1 <= 0 || t2 < 0 || t2 % 2 == 1) err = 1;
            v[1].push_back(make_pair(t1, t2/2));
          }
          if (w2) {
            int t2 = dA[i]+dB[i]-dAB;
            int t1 = dB[i]-t2/2;
            if (t1 <= 0 || t2 < 0 || t2 % 2 == 1) err = 1;
            v[2].push_back(make_pair(t1, t2/2));
          }
          if (err) break;
        }
        if (err) continue;
        int res = 1;
        for (int z=0;z<3;z++) {
          res = (long long)res*get_res(v[z]) % md;
        }
        ans = (ans+res) % md;
      }
    }
    vector <int> vtmp = dA;
    dA = dB;
    dB = dC;
    dC = vtmp;
  }
  
  for (int rot=0;rot<3;rot++) {
    int dAB = mabs(dA[0]-dB[0]), dBC = mabs(dB[0]-dC[0]), ok = 1;
    for (i=0;i<n;i++) {
      if (mabs(dA[i]-dB[i]) != dAB || mabs(dB[i]-dC[i]) != dBC) ok = 0;
      if (dB[i] > dA[i] && dB[i] > dC[i]) ok = 0;
    }
    if (dAB == 0 || dBC == 0) ok = 0;
    if (ok) {
      for (i=0;i<3;i++) v[i].clear();
      v[0].push_back(make_pair(0, 0));
      v[1].push_back(make_pair(dAB, 0));
      v[2].push_back(make_pair(dBC, 0));
      for (i=0;i<n;i++) {
        if (dB[i] < dA[i] && dB[i] < dC[i]) {
          v[0].push_back(make_pair(0, dB[i]));
        }
        if (dA[i] < dB[i]) {
          v[1].push_back(make_pair(dAB, dA[i]));
        }
        if (dC[i] < dB[i]) {
          v[2].push_back(make_pair(dBC, dC[i]));
        }
      }
      int res = 1;
      for (int z=0;z<3;z++) {
        res = (long long)res*get_res(v[z]) % md;
      }
      ans = (ans+res) % md;
    }
    vector <int> vtmp = dA;
    dA = dB;
    dB = dC;
    dC = vtmp;
  }
 
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/