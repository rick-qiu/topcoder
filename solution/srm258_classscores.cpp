/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4710
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

class ClassScores {
public:
    vector<int> findMode(vector<int> scores);
};

vector<int> ClassScores::findMode(vector<int> scores) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> scores = {65, 70, 88, 70};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> scores = {88, 70, 65, 70, 88};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 88};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> scores = {92, 56, 14, 73, 22, 38, 93, 45, 55};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 22, 38, 45, 55, 56, 73, 92, 93};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> scores = {0};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> scores = {99, 99, 99, 99, 74, 74, 74, 74, 32, 32, 32, 32, 5, 6, 7};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 74, 99};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> scores = {5, 45, 4, 92, 32, 26, 40, 79, 18, 51, 40, 78, 41, 40, 26, 84, 54, 38, 45, 12, 33, 23, 44, 81, 67, 39, 72, 93, 67, 53, 9, 67, 11, 39, 15, 79, 7, 85, 9, 31, 77, 25, 67, 48};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> scores = {77, 52, 99, 32, 33, 65, 39, 6, 52, 17, 85, 83, 4, 39, 5, 85, 27, 1, 45, 13, 28, 68, 66, 9, 87, 74, 22, 44, 98, 25, 52, 34, 17, 24, 100, 77, 56, 27, 60, 20, 81, 12, 48, 46, 50, 88, 99, 89, 69, 16};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> scores = {80, 77, 66, 43, 68, 48, 88, 93, 99, 33, 15, 81, 41, 10, 96, 27, 66, 72, 36, 65, 4, 27, 83, 11, 36, 43, 21, 62, 6, 94, 7, 11, 60, 50, 12, 0};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 27, 36, 43, 66};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> scores = {8, 2, 84, 19, 100, 43, 26, 26, 96, 20, 23, 77, 45, 95, 47, 86, 5, 81, 14, 31, 48, 43, 86, 67, 17, 27, 81, 62, 15, 9, 29, 62, 8, 73, 34, 82, 60, 10, 77, 18, 87, 49};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 26, 43, 62, 77, 81, 86};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> scores = {27, 43, 6, 95, 93, 32, 61, 99, 7, 31, 56, 61, 97, 55, 29, 29, 52, 38, 61, 19, 55, 40, 51, 87, 67, 82, 19, 25, 44, 100, 37, 80, 78, 31, 74, 100, 53, 22, 75, 4, 44, 58, 63, 79};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {61};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> scores = {25, 67, 97, 10, 83, 71, 62, 15, 93, 90, 81, 51};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 15, 25, 51, 62, 67, 71, 81, 83, 90, 93, 97};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> scores = {29, 60, 32, 50, 38, 22, 23, 74, 0, 53, 96, 91, 77, 72, 20, 94, 68, 30, 81, 35, 93, 24, 14, 15, 40, 47, 72, 82, 43, 58, 12, 70, 80, 74, 11, 55, 2, 95};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72, 74};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> scores = {4, 90, 44, 48, 55, 19, 43, 12, 3, 73, 4, 91, 9, 61, 51, 41, 1, 75, 66, 53};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> scores = {23, 58, 30, 67, 36, 56, 9, 27, 86, 37, 98, 89, 44, 64, 39, 28, 56, 57, 100, 55, 82, 93, 83, 61, 22, 20, 71, 7, 75, 9, 86, 34};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 56, 86};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> scores = {4, 82, 88, 47, 99, 53, 86, 40, 92, 83, 92};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> scores = {67, 97};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67, 97};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> scores = {28, 55, 60, 12, 97, 86, 87, 3, 32, 71, 81, 99, 46, 68, 100, 28, 18, 89, 45, 98};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> scores = {17, 73, 43, 18, 99, 36, 11, 62, 53, 48, 71, 23, 78, 71, 41, 22, 74, 28, 55, 43, 43, 48, 39, 90, 32, 21, 21, 60, 1, 99, 62, 49, 22, 95, 17, 75, 98, 37, 15, 30, 3, 23, 70, 60, 65};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> scores = {11, 61, 48, 38};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 38, 48, 61};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> scores = {30, 79, 52, 98};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 52, 79, 98};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> scores = {9, 81, 29, 81, 100, 20, 47, 45, 86, 48, 22, 62, 29, 63, 68, 78, 45, 48, 41, 3, 59, 59, 77, 15, 99, 42, 45, 80, 17, 70, 37, 9, 38, 3, 69, 35, 24, 89, 17, 8, 72, 61, 75, 32, 35, 93};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> scores = {36, 70, 52};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 52, 70};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> scores = {1, 100, 93, 14};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 93, 100};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> scores = {89, 71, 14, 12, 0, 81, 23, 92, 63};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 12, 14, 23, 63, 71, 81, 89, 92};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> scores = {20, 75, 15, 82, 38, 43, 70, 62, 90, 39, 56, 4, 84, 17, 66, 63, 66, 21, 26, 90, 86, 85, 93, 50, 54, 58, 69, 62};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 66, 90};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> scores = {92, 56, 14, 73, 22, 38, 93, 45, 55};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 22, 38, 45, 55, 56, 73, 92, 93};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> scores = {88, 70, 65, 70, 88};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 88};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> scores = {100, 100, 100, 50, 100, 88, 100};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> scores = {1, 10, 1, 100, 1, 99};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> scores = {10, 10, 10, 10, 10, 13, 16, 17, 20, 20, 20, 20, 20, 30, 30, 30, 30, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> scores = {65, 65, 88, 88, 65};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> scores = {65, 70, 88, 70, 100, 100, 100};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> scores = {65, 65, 88, 88};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65, 88};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> scores = {92, 56, 14, 73, 22, 38, 93, 45, 55, 100};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 22, 38, 45, 55, 56, 73, 92, 93, 100};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> scores = {92, 56, 14, 100, 22, 38, 93, 45, 55};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 22, 38, 45, 55, 56, 92, 93, 100};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> scores = {0, 0, 0, 0, 1, 1};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> scores = {100, 0, 100, 100};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> scores = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> scores = {92, 14, 14, 92, 38, 38, 93, 93, 55};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 38, 92, 93};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> scores = {92, 56, 14, 73, 22, 38, 93, 45, 55, 55, 45, 45};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> scores = {100, 100, 0};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> scores = {100, 25, 25, 25, 30, 34, 34, 30, 34, 100};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 34};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> scores = {2, 1, 2};
    ClassScores* pObj = new ClassScores();
    clock_t start = clock();
    vector<int> result = pObj->findMode(scores);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15025482&rd=7993&pm=4710
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <numeric> 
#include <string> 
#include <vector> 
#include <queue> 
#include <stack> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
#define REP(i, n) for (int (i) = 0; i < (n); (i)++) 
#define REPF(i, f, n) for (int (i) = (f); i < (n); (i)++) 
#define REPV(i, v) for (unsigned int (i) = 0; (i) < v.size(); (i)++) 
#define ALL(v) (v).begin(), (v).end() 
#define all(v) (v).begin(), (v).end() 
typedef pair<int,int> pi; typedef vector<int> vi; typedef vector<string> vs; 
 
class ClassScores { 
public: 
    vector <int> findMode(vector <int> s) { 
        vector <int> res; 
    vi v(101, 0); 
    REPV(i, s) 
      v[s[i]]++; 
 
    int mx = *max_element(all(v)); 
 
    REPV(i, v) 
      if (v[i]==mx) 
        res.push_back(i); 
        return res; 
    } 
 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/