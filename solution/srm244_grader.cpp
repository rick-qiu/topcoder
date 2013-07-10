/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4588
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

class Grader {
public:
    vector<int> grade(vector<int> predictedGrades, vector<int> actualGrades);
};

vector<int> Grader::grade(vector<int> predictedGrades, vector<int> actualGrades) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> predictedGrades = {1, 5, 7, 3};
    vector<int> actualGrades = {3, 5, 4, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 0, 50, 25, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> predictedGrades = {1, 1, 1};
    vector<int> actualGrades = {5, 6, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 33, 33, 33};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> predictedGrades = {3};
    vector<int> actualGrades = {3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> predictedGrades = {1, 5, 3, 5, 6, 4, 2, 5, 7, 6, 5, 2, 3, 4, 1, 4, 6, 5, 4, 7, 6, 6, 1};
    vector<int> actualGrades = {5, 1, 3, 2, 6, 4, 1, 7, 5, 2, 7, 4, 2, 6, 5, 7, 3, 1, 4, 6, 3, 1, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 13, 21, 17, 21, 4, 4};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> predictedGrades = {6, 7, 4, 7, 2, 7, 6, 1, 4, 2, 4, 1, 2, 3, 5, 4, 6, 2, 4, 3, 5, 7, 1, 1, 7, 4, 3, 4, 7, 3, 3, 3, 6, 1, 4, 7};
    vector<int> actualGrades = {2, 2, 7, 4, 6, 4, 4, 6, 7, 5, 5, 2, 4, 3, 6, 3, 6, 7, 7, 7, 4, 1, 6, 1, 7, 6, 2, 2, 3, 5, 1, 6, 5, 6, 6, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 19, 19, 19, 11, 13, 5};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> predictedGrades = {5, 3, 4, 7, 3, 1, 1, 2, 6, 7, 3, 2, 6, 6, 7, 5, 3, 3, 5, 7, 1, 4, 6, 6, 1, 3, 2, 5, 4, 3, 6, 6, 7, 3, 4, 3, 5, 4, 7, 6, 4, 2, 6, 1};
    vector<int> actualGrades = {2, 7, 2, 4, 5, 1, 7, 1, 3, 4, 7, 4, 6, 2, 2, 2, 3, 3, 6, 4, 1, 1, 6, 5, 7, 2, 1, 7, 3, 4, 5, 5, 7, 4, 2, 6, 6, 7, 7, 1, 6, 4, 5, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 27, 15, 20, 6, 6, 4};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> predictedGrades = {7, 4, 4, 1, 2, 3, 4, 7, 7, 7, 5, 7, 1, 1, 3, 7, 1, 3, 1, 4, 2, 6, 2, 6, 1, 4, 2, 2, 1, 1, 4, 4, 6, 3, 2, 7, 6, 3, 3};
    vector<int> actualGrades = {4, 5, 5, 7, 5, 5, 4, 5, 4, 4, 7, 4, 3, 3, 2, 4, 6, 7, 6, 7, 2, 5, 2, 6, 7, 3, 4, 2, 1, 6, 3, 5, 3, 3, 5, 1, 2, 1, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 17, 20, 23, 5, 7, 7};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> predictedGrades = {2, 2, 7, 5, 3, 6, 6, 1, 5, 7, 4, 2, 2, 3, 1, 4, 7, 2, 2, 1, 5, 5, 4, 7, 3, 7, 6, 3, 3, 4, 2, 2, 2, 1, 2, 6};
    vector<int> actualGrades = {4, 4, 5, 5, 1, 6, 2, 3, 3, 5, 1, 4, 3, 2, 2, 5, 2, 3, 1, 5, 2, 6, 6, 1, 5, 2, 6, 2, 6, 7, 3, 3, 3, 4, 2, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 30, 27, 16, 5, 5, 2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> predictedGrades = {2, 3, 3, 5, 2, 3, 4, 2, 3, 6, 7, 4, 4, 2, 1, 4, 2, 5, 4, 4, 3, 2, 2, 6, 6, 5, 3, 4, 7, 6, 4, 5, 1, 5, 1, 6, 6, 6, 7, 1};
    vector<int> actualGrades = {5, 1, 6, 5, 3, 4, 4, 5, 6, 7, 7, 1, 7, 5, 3, 2, 7, 5, 1, 7, 4, 6, 3, 7, 6, 6, 2, 3, 2, 1, 5, 4, 4, 2, 2, 7, 7, 1, 7, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 35, 7, 30, 2, 10, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> predictedGrades = {7, 1, 2, 3, 3, 5, 4, 5, 4, 2, 6, 2, 3, 7, 1, 3, 3, 6, 5, 5, 1, 7, 3, 3, 3, 5, 7, 7, 4, 5, 1, 1, 3, 1, 5, 7};
    vector<int> actualGrades = {4, 7, 7, 4, 6, 1, 6, 3, 2, 3, 3, 3, 1, 1, 5, 2, 3, 2, 7, 6, 6, 7, 5, 3, 2, 3, 1, 5, 2, 5, 6, 2, 6, 1, 5, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 19, 25, 11, 8, 8, 11};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> predictedGrades = {1, 4, 2, 5, 3, 3, 3, 5, 1, 4, 5, 2, 4, 5, 4, 4, 4, 3, 4, 5, 1, 7, 1, 4, 5, 7, 6, 7, 5, 5, 3, 5, 3, 2, 3, 1};
    vector<int> actualGrades = {6, 6, 1, 7, 6, 4, 7, 7, 2, 3, 4, 1, 6, 3, 5, 3, 3, 6, 6, 4, 5, 2, 7, 7, 3, 3, 2, 2, 2, 1, 3, 2, 3, 7, 4, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 30, 19, 16, 13, 11, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> predictedGrades = {3, 3, 7, 2, 1, 5, 5, 1, 4, 2, 5, 1, 7, 1, 6, 2, 3, 1, 6, 5, 3, 6, 3, 3, 7, 1, 4, 6, 2, 4, 4, 3, 1, 2, 5, 5, 2, 4, 6, 5, 5, 7, 3, 6, 5, 5, 6, 7};
    vector<int> actualGrades = {7, 1, 2, 1, 7, 3, 4, 2, 4, 4, 3, 4, 2, 4, 5, 5, 7, 1, 4, 3, 4, 1, 3, 5, 4, 4, 7, 6, 7, 2, 4, 1, 4, 5, 3, 6, 2, 4, 4, 1, 2, 5, 5, 7, 6, 5, 6, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 16, 27, 20, 6, 8, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> predictedGrades = {5, 1, 7, 4, 1, 3, 1, 2, 2, 1, 5, 7, 6, 3, 6, 1, 6, 2, 2, 5, 6, 7, 1, 3, 1, 7, 3, 3, 5, 6, 3, 2, 4, 7, 3, 5, 2, 6, 7, 7, 5, 3};
    vector<int> actualGrades = {4, 7, 4, 1, 4, 5, 6, 5, 3, 1, 7, 4, 5, 7, 7, 6, 2, 4, 2, 7, 5, 5, 1, 3, 7, 4, 3, 3, 2, 5, 4, 3, 5, 5, 5, 3, 1, 7, 5, 1, 3, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 26, 26, 16, 4, 4, 7};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> predictedGrades = {6, 5, 6, 1, 1, 3, 6, 7, 5, 5, 7, 1, 2, 3, 4, 3, 3, 3, 1, 7, 1, 2, 1, 5, 1, 6, 4, 2, 2, 1, 7, 6, 6, 2, 3, 1, 3, 2, 3, 1, 4, 4, 6, 1, 1, 1, 7, 4, 4, 4};
    vector<int> actualGrades = {5, 7, 1, 1, 2, 7, 5, 2, 4, 7, 3, 3, 3, 6, 2, 1, 1, 7, 3, 3, 6, 5, 2, 2, 7, 2, 3, 2, 7, 1, 2, 6, 4, 5, 2, 3, 6, 2, 3, 4, 2, 5, 6, 1, 7, 2, 6, 1, 1, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 22, 20, 16, 10, 10, 4};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> predictedGrades = {7, 4, 7, 1, 1, 7, 4, 7, 1, 3, 5, 2, 7, 7, 4, 2, 5, 5, 5, 6, 1, 3, 1, 4, 6, 6, 6, 3, 7, 3, 4, 2, 5, 4, 4, 1, 5};
    vector<int> actualGrades = {1, 4, 5, 6, 6, 5, 6, 2, 4, 2, 7, 6, 5, 7, 7, 6, 4, 5, 6, 2, 6, 2, 1, 2, 5, 6, 6, 2, 1, 7, 3, 2, 2, 1, 7, 4, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 21, 16, 16, 10, 10, 5};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> predictedGrades = {1, 1, 7, 2, 2, 4, 2, 4, 5, 7, 2, 2, 7, 6, 3, 2, 4, 3, 2, 2, 3, 1, 4, 7, 7, 1, 2, 3, 5, 7, 7, 4, 4, 5, 4, 4, 2, 1, 7, 5, 6, 2, 5, 5, 2, 6, 6, 6, 7};
    vector<int> actualGrades = {1, 5, 2, 2, 6, 6, 4, 3, 1, 6, 5, 6, 1, 6, 3, 6, 1, 4, 2, 4, 2, 7, 7, 3, 5, 6, 1, 1, 5, 3, 2, 7, 2, 5, 7, 1, 6, 6, 6, 5, 6, 1, 2, 7, 4, 2, 7, 4, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 16, 18, 14, 18, 10, 4};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> predictedGrades = {4, 2, 2, 2, 7, 5, 6, 3, 4, 4, 4, 5, 6, 7, 3, 3, 2, 7, 3, 1, 7, 2, 4, 4, 5, 1, 2, 2, 3, 6, 2, 2, 3, 4, 2, 2, 4, 1, 4, 7, 5, 2, 4, 6, 1, 5, 3, 2};
    vector<int> actualGrades = {2, 6, 6, 1, 3, 1, 6, 6, 5, 1, 4, 4, 4, 2, 6, 1, 6, 1, 3, 6, 4, 3, 1, 7, 6, 4, 5, 6, 5, 3, 5, 5, 3, 7, 1, 6, 4, 6, 5, 6, 2, 7, 6, 1, 7, 6, 6, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 18, 10, 29, 16, 10, 4};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> predictedGrades = {2, 7, 1, 3, 2, 3, 2, 5, 6, 6, 1, 2, 1, 5, 6, 7, 1, 3, 2, 3, 5, 4, 6, 1, 4, 5, 5, 3, 1, 6, 3, 2, 7, 6, 1, 1, 7};
    vector<int> actualGrades = {3, 6, 1, 5, 6, 5, 7, 7, 6, 5, 6, 4, 3, 1, 5, 1, 3, 3, 5, 7, 2, 1, 2, 2, 2, 5, 1, 3, 6, 6, 2, 3, 5, 3, 1, 4, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 18, 21, 16, 13, 8, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> predictedGrades = {6, 1, 3, 1, 5, 4, 2, 7, 3, 4, 7, 3, 1, 1, 6, 6, 3, 1, 5, 3, 6, 6, 6, 6, 4, 2, 1, 3, 6, 7, 3, 6, 7, 6, 2, 3, 2, 7, 3, 7, 5, 3};
    vector<int> actualGrades = {4, 5, 1, 7, 4, 6, 2, 5, 5, 6, 4, 1, 3, 3, 4, 2, 2, 1, 5, 3, 1, 2, 1, 2, 6, 7, 7, 2, 5, 2, 7, 1, 5, 6, 1, 6, 1, 2, 3, 6, 7, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 19, 30, 4, 11, 14, 4};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> predictedGrades = {6, 2, 1, 2, 7, 4, 3, 6, 4, 1, 5, 4, 5, 6, 7, 6, 4, 5, 4, 6, 2, 2, 3, 7, 5, 6, 7, 3, 6, 3, 5, 3, 1, 6, 3, 5, 3, 2, 2, 3, 1, 6, 3, 2, 3, 3, 1, 4, 2, 5};
    vector<int> actualGrades = {4, 5, 3, 4, 4, 5, 6, 1, 4, 1, 4, 4, 5, 7, 1, 4, 3, 1, 2, 1, 1, 5, 5, 2, 5, 7, 6, 1, 1, 3, 3, 2, 5, 4, 2, 3, 1, 3, 1, 1, 7, 4, 1, 4, 7, 7, 1, 6, 4, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 22, 36, 8, 8, 8, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> predictedGrades = {6, 2, 7, 6, 6, 3, 6, 7, 5, 3, 2, 3, 4, 1, 2, 7, 1, 6, 1, 1, 7, 7, 5, 4, 3, 5, 1, 5, 6, 2, 6, 6, 6, 7, 7, 4, 4, 5, 7, 5, 5, 1, 6};
    vector<int> actualGrades = {6, 5, 5, 7, 6, 7, 3, 4, 6, 5, 6, 7, 2, 6, 2, 7, 1, 5, 3, 2, 3, 1, 1, 3, 2, 3, 3, 5, 1, 7, 3, 4, 5, 7, 3, 7, 6, 2, 1, 1, 4, 3, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 20, 20, 13, 16, 6, 4};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> predictedGrades = {1, 3, 1, 4, 5, 3, 1, 1, 6, 4, 3, 2, 1, 2, 4, 5, 6, 3, 7, 1, 6, 1, 3, 5, 2, 1, 6, 5, 6, 4, 5, 6, 5, 7, 2, 6, 7, 7, 6, 4, 2, 7, 2, 3, 5, 7, 6, 4};
    vector<int> actualGrades = {7, 5, 2, 2, 3, 2, 3, 5, 4, 3, 5, 7, 5, 2, 4, 5, 6, 7, 7, 6, 3, 2, 2, 4, 5, 2, 1, 2, 6, 1, 3, 1, 5, 6, 5, 2, 7, 7, 1, 6, 4, 3, 1, 1, 4, 7, 5, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 25, 20, 10, 10, 10, 2};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> predictedGrades = {6, 4, 1, 3, 7, 3, 4, 2, 6, 6, 7, 4, 3, 5, 3, 6, 1, 2, 6, 7, 2, 6, 6, 7, 5, 5, 2, 7, 3, 3, 7, 5, 5, 7, 7, 5, 6};
    vector<int> actualGrades = {2, 1, 5, 4, 2, 3, 5, 2, 3, 3, 3, 3, 1, 6, 1, 4, 5, 6, 6, 2, 4, 7, 1, 6, 7, 4, 7, 1, 7, 2, 4, 2, 6, 5, 4, 4, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 27, 16, 16, 16, 13, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> predictedGrades = {1, 2, 3, 4, 6, 7, 5, 2, 7, 3, 4, 1, 6, 4, 6, 4, 6, 7, 7, 4, 1, 1, 2, 4, 6, 7, 4, 1, 4, 3, 4, 5, 7, 5, 1, 2, 7, 2, 4, 2, 7, 1, 3, 7, 6, 2, 1, 5, 2};
    vector<int> actualGrades = {4, 3, 4, 6, 5, 7, 1, 7, 2, 4, 3, 1, 2, 7, 2, 7, 5, 7, 2, 1, 2, 7, 7, 6, 2, 3, 7, 6, 6, 1, 2, 7, 3, 3, 2, 3, 5, 3, 5, 5, 2, 4, 5, 2, 4, 2, 1, 4, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 26, 20, 14, 12, 14, 2};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> predictedGrades = {1, 3, 4, 6, 7, 2, 7, 7, 5, 7, 6, 7, 2, 5, 1, 3, 4, 3, 3, 3, 6, 5, 2, 6, 1, 2, 1, 1, 4, 4, 1, 7, 6, 1, 6, 7, 6, 7, 3, 1, 1, 6, 1, 1, 6, 6, 7, 2, 2};
    vector<int> actualGrades = {1, 7, 5, 6, 4, 4, 3, 1, 3, 1, 1, 7, 7, 3, 4, 4, 3, 3, 1, 2, 4, 4, 6, 1, 5, 3, 1, 2, 1, 5, 7, 5, 2, 5, 5, 3, 2, 6, 5, 2, 1, 2, 3, 6, 2, 3, 3, 4, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 22, 18, 10, 22, 8, 6};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> predictedGrades = {4, 3, 7, 4, 3, 7, 4, 3, 7, 6, 2, 3, 6, 1, 1, 5, 5, 1, 4, 2, 1, 3, 2, 5, 1, 2, 2, 5, 2, 7, 1, 7, 2, 6, 6, 7, 5, 6, 4, 3, 6, 3, 5, 2, 2, 7};
    vector<int> actualGrades = {5, 6, 5, 7, 1, 4, 2, 3, 5, 4, 2, 6, 2, 2, 4, 5, 2, 4, 3, 2, 1, 7, 3, 2, 4, 7, 2, 4, 2, 4, 3, 7, 2, 1, 4, 7, 6, 3, 4, 1, 3, 1, 2, 1, 4, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 15, 21, 28, 4, 6, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> predictedGrades = {1, 3, 3, 4, 6, 5, 6, 6, 6, 1, 3, 7, 3, 5, 2, 3, 6, 5, 1, 6, 3, 4, 4, 1, 7, 2, 4, 5, 6, 2, 3, 5, 2, 7, 5, 2, 2, 2, 3, 4, 3, 7, 1, 7, 6, 6, 2};
    vector<int> actualGrades = {3, 4, 3, 7, 6, 4, 1, 3, 4, 1, 1, 2, 5, 5, 6, 1, 3, 2, 2, 7, 5, 7, 7, 1, 2, 6, 5, 6, 6, 2, 3, 3, 4, 2, 3, 6, 7, 1, 5, 4, 6, 2, 6, 5, 1, 1, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 14, 25, 14, 6, 19, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> predictedGrades = {1, 7, 1, 4, 1, 7, 4, 3, 7, 2, 2, 7, 6, 6, 2, 4, 3, 7, 2, 4, 6, 3, 1, 1, 2, 7, 6, 2, 7, 7, 5, 2, 5, 1, 4, 5, 1, 2, 1, 4, 7, 6, 2, 2, 2, 3};
    vector<int> actualGrades = {2, 2, 4, 3, 6, 2, 4, 4, 2, 5, 1, 7, 4, 5, 4, 6, 5, 7, 7, 6, 4, 3, 3, 1, 5, 4, 1, 7, 4, 5, 7, 2, 2, 1, 3, 6, 6, 5, 2, 3, 3, 1, 2, 3, 5, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 23, 19, 17, 2, 19, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> predictedGrades = {2, 7, 6, 1, 7, 3, 6, 2, 4, 2, 6, 1, 3, 5, 6, 4, 5, 2, 4, 6, 1, 1, 4, 3, 3, 3, 5, 6, 3, 6, 2, 4, 6, 6, 5, 5, 2, 7, 6, 1, 3};
    vector<int> actualGrades = {6, 3, 1, 5, 7, 5, 6, 3, 1, 7, 1, 2, 5, 4, 1, 3, 3, 2, 7, 1, 3, 1, 5, 3, 7, 3, 2, 4, 4, 3, 6, 7, 5, 7, 5, 5, 1, 4, 5, 6, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 24, 12, 14, 14, 14, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> predictedGrades = {3, 1, 2, 2, 1, 2, 4, 6, 3, 1, 2, 5, 6, 1, 5, 6, 1, 1, 1, 1, 7, 2, 6, 4, 4, 3, 7, 7, 3, 7, 6, 7, 4, 7, 6, 1, 1, 2, 7, 7, 6, 7, 1, 6, 1, 6};
    vector<int> actualGrades = {5, 4, 4, 2, 1, 5, 2, 1, 4, 6, 6, 1, 4, 2, 6, 4, 4, 5, 4, 1, 4, 3, 3, 3, 6, 4, 5, 3, 4, 7, 7, 2, 3, 7, 7, 2, 4, 5, 6, 6, 7, 3, 4, 2, 6, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 32, 15, 19, 13, 8, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> predictedGrades = {1, 3, 7, 3, 1, 7, 3, 2, 4, 3, 2, 2, 2, 3, 5, 3, 3, 4, 6, 4, 5, 6, 6, 7, 2, 2, 6, 3, 7, 5, 7, 7, 5, 3, 5, 7, 4, 4, 4, 5, 5, 7, 3, 2};
    vector<int> actualGrades = {6, 3, 2, 7, 2, 5, 1, 2, 4, 1, 1, 3, 2, 5, 5, 3, 2, 4, 5, 2, 6, 5, 5, 6, 2, 1, 4, 3, 2, 5, 4, 5, 2, 3, 2, 4, 3, 4, 3, 4, 3, 7, 7, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29, 29, 18, 9, 6, 6, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> predictedGrades = {5, 2, 5, 6, 1, 7, 3, 7, 4, 6, 2, 1, 7, 5, 7, 4, 7, 6, 6, 6, 3, 4, 3, 7, 5, 6, 2, 3, 3, 5, 4, 5, 4, 6, 3, 4};
    vector<int> actualGrades = {5, 5, 1, 7, 1, 3, 3, 4, 6, 4, 5, 7, 1, 5, 3, 1, 6, 4, 4, 6, 6, 2, 2, 6, 1, 2, 6, 5, 4, 5, 5, 4, 3, 4, 6, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 22, 22, 16, 16, 0, 5};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> predictedGrades = {2, 1, 4, 2, 2, 5, 4, 4, 1, 1, 6, 1, 1, 7, 3, 7, 7, 1, 7, 2, 5, 6, 3, 1, 5, 1, 2, 3, 5, 1, 5, 3, 4, 2, 4, 2, 2, 5, 6, 4, 1, 1, 7, 6, 3};
    vector<int> actualGrades = {3, 6, 5, 4, 1, 2, 4, 7, 7, 5, 5, 7, 2, 7, 5, 3, 6, 4, 5, 7, 1, 3, 1, 3, 4, 1, 5, 6, 7, 3, 1, 6, 2, 1, 6, 1, 2, 5, 1, 5, 2, 3, 4, 3, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 24, 22, 20, 8, 6, 4};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> predictedGrades = {7, 3, 6, 7, 6, 3, 7, 5, 6, 7, 4, 2, 2, 7, 1, 2, 6, 5, 7, 4, 2, 1, 4, 5, 6, 7, 4, 3, 4, 6, 5, 7, 7, 7, 7, 2, 2, 2};
    vector<int> actualGrades = {7, 2, 1, 5, 7, 7, 7, 2, 4, 6, 2, 1, 3, 2, 6, 2, 5, 4, 7, 1, 2, 7, 6, 7, 1, 6, 3, 5, 4, 4, 2, 4, 6, 2, 6, 4, 6, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 31, 21, 10, 5, 13, 2};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> predictedGrades = {3, 6, 6, 2, 7, 3, 1, 4, 7, 1, 3, 3, 6, 2, 4, 1, 2, 7, 1, 3, 4, 6, 2, 2, 1, 7, 7, 4, 1, 7, 4, 4, 1, 1, 5, 7, 5, 4};
    vector<int> actualGrades = {3, 2, 6, 7, 2, 3, 2, 1, 2, 7, 4, 7, 7, 3, 7, 6, 5, 6, 7, 1, 5, 4, 2, 7, 6, 5, 5, 4, 2, 4, 4, 2, 3, 7, 1, 3, 6, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 23, 15, 10, 10, 15, 7};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> predictedGrades = {3, 1, 6, 7, 1, 5, 5, 7, 1, 6, 3, 6, 2, 7, 3, 1, 7, 4, 1, 4, 1, 3, 1, 6, 6, 6, 4, 7, 7, 5, 7, 4, 2, 4, 5, 7, 5, 6};
    vector<int> actualGrades = {6, 3, 4, 1, 3, 3, 2, 4, 2, 5, 2, 3, 4, 7, 7, 3, 6, 7, 1, 6, 3, 4, 4, 4, 1, 5, 5, 6, 6, 6, 2, 1, 1, 2, 2, 7, 4, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 31, 26, 21, 5, 5, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> predictedGrades = {1, 7, 7, 6, 2, 5, 2, 1, 3, 1, 5, 5, 6, 2, 7, 3, 2, 4, 4, 4, 5, 2, 5, 3, 3, 2, 2, 3, 2, 3, 7, 6, 6, 4, 2, 1, 7, 2, 2, 3, 6, 6, 1, 3, 3, 2, 2, 4};
    vector<int> actualGrades = {1, 2, 2, 3, 6, 4, 4, 3, 4, 4, 1, 7, 3, 3, 7, 7, 6, 7, 6, 6, 3, 7, 3, 7, 2, 5, 2, 1, 6, 5, 1, 7, 2, 6, 3, 5, 3, 4, 3, 4, 6, 5, 5, 4, 4, 3, 3, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 27, 25, 10, 20, 6, 2};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> predictedGrades = {3, 6, 1, 2, 4, 1, 2, 3, 5, 7, 2, 2, 4, 3, 4, 7, 2, 1, 4, 7, 6, 1, 4, 4, 1, 7, 4, 5, 7, 4, 6, 6, 6, 1, 1, 4, 6, 5, 2, 2};
    vector<int> actualGrades = {3, 4, 4, 2, 1, 6, 3, 7, 2, 6, 5, 2, 4, 3, 2, 1, 4, 7, 3, 3, 6, 5, 6, 1, 3, 5, 3, 7, 5, 3, 7, 5, 7, 2, 5, 2, 5, 6, 1, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 30, 22, 12, 12, 2, 5};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> predictedGrades = {3, 7, 2, 3, 1, 7, 1, 4, 4, 1, 5, 5, 5, 1, 6, 2, 1, 6, 2, 1, 2, 5, 7, 1, 7, 7, 2, 2, 6, 4, 4, 7, 7, 7, 7, 1, 5, 7, 3, 7, 1, 2, 4, 3, 3, 1, 6, 5, 3, 4};
    vector<int> actualGrades = {2, 6, 4, 1, 3, 6, 5, 5, 7, 3, 4, 5, 7, 4, 2, 6, 4, 7, 4, 3, 7, 2, 6, 5, 2, 5, 7, 4, 3, 5, 7, 7, 6, 6, 7, 1, 5, 1, 3, 6, 4, 2, 7, 7, 3, 2, 3, 5, 1, 4};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 24, 20, 18, 10, 6, 2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> predictedGrades = {7, 6, 3, 6, 5, 1, 3, 6, 3, 5, 5, 3, 6, 4, 7, 4, 6, 2, 7, 3, 1, 1, 3, 4, 1, 1, 4, 5, 2, 5, 1, 1, 1, 1, 7, 5, 3, 7, 4};
    vector<int> actualGrades = {7, 6, 2, 6, 1, 7, 2, 4, 6, 6, 1, 2, 7, 1, 1, 6, 1, 5, 5, 1, 2, 2, 4, 3, 2, 4, 3, 6, 5, 5, 1, 5, 4, 3, 3, 4, 4, 6, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 38, 15, 15, 10, 2, 5};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> predictedGrades = {6, 6, 1, 3, 1, 1, 7, 2, 7, 2, 4, 2, 2, 7, 5, 6, 5, 1, 1, 6, 3, 2, 4, 1, 3, 2, 7, 1, 5, 5, 5, 3, 4, 6, 4, 1, 5, 2, 5};
    vector<int> actualGrades = {1, 6, 2, 5, 7, 3, 5, 6, 1, 5, 7, 1, 6, 4, 6, 3, 5, 5, 1, 6, 7, 7, 5, 6, 6, 1, 2, 3, 7, 5, 3, 5, 5, 4, 2, 1, 4, 5, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 17, 25, 15, 10, 10, 5};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> predictedGrades = {4, 1, 4, 1, 5, 4, 3, 6, 2, 6, 5, 1, 2, 2, 5, 7, 7, 3, 5, 3, 4, 5, 1, 2, 5, 7, 3, 5, 6, 6, 5, 5, 2, 5, 5, 2, 3, 1, 1, 7, 6, 6, 4};
    vector<int> actualGrades = {6, 6, 4, 1, 3, 5, 1, 7, 1, 4, 6, 1, 2, 4, 5, 1, 6, 2, 4, 1, 7, 3, 2, 2, 4, 6, 3, 7, 4, 5, 7, 5, 4, 6, 5, 4, 2, 3, 1, 2, 2, 6, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 30, 30, 4, 2, 4, 2};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> predictedGrades = {3, 6, 1, 7, 1, 7, 2, 1, 5, 1, 3, 5, 4, 7, 7, 3, 7, 5, 1, 2, 4, 6, 4, 2, 2, 1, 6, 7, 5, 6, 4, 7, 6, 1, 7, 5, 6, 3, 5, 4};
    vector<int> actualGrades = {1, 5, 5, 4, 5, 6, 5, 7, 2, 1, 2, 7, 4, 2, 5, 7, 4, 2, 5, 6, 4, 6, 2, 6, 3, 1, 3, 5, 6, 4, 6, 4, 5, 2, 4, 5, 4, 5, 1, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 20, 22, 20, 17, 2, 2};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> predictedGrades = {1, 2, 4, 4, 7, 6, 5, 2, 7, 3, 7, 1, 1, 5, 3, 4, 3, 5, 2, 1, 1, 3, 3, 5, 3, 3, 2, 7, 2, 5, 4, 7, 5, 5, 7, 2, 2};
    vector<int> actualGrades = {1, 5, 1, 5, 7, 4, 5, 7, 6, 7, 5, 5, 1, 1, 4, 7, 1, 7, 1, 2, 4, 5, 7, 7, 7, 3, 5, 1, 2, 5, 7, 6, 3, 4, 1, 5, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 18, 18, 18, 16, 2, 5};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> predictedGrades = {5, 6, 7, 6, 4, 5, 4, 3, 3, 7, 4, 1, 6, 1, 1, 5, 4, 5, 1, 5, 1, 5, 3, 3, 7, 3, 5, 2, 4, 2, 1, 5, 1, 1, 1, 6, 4};
    vector<int> actualGrades = {3, 2, 2, 2, 1, 3, 6, 6, 4, 2, 2, 1, 6, 3, 5, 4, 4, 6, 1, 4, 4, 3, 4, 7, 7, 6, 2, 5, 3, 3, 5, 6, 2, 7, 3, 2, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 24, 21, 16, 16, 5, 2};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> predictedGrades = {1, 2, 6, 7, 5, 7, 2, 1, 4, 6, 2, 4, 7, 3, 7, 2, 3, 3, 1, 6, 2, 2, 5, 2, 6, 3, 1, 4, 5, 3, 3, 3, 3, 4, 3, 7, 3, 6, 5, 1, 2, 5, 7, 7, 3, 2, 5, 6};
    vector<int> actualGrades = {7, 1, 2, 1, 3, 2, 1, 5, 4, 5, 1, 4, 1, 2, 4, 7, 1, 1, 6, 2, 3, 3, 7, 3, 2, 3, 7, 2, 1, 1, 1, 4, 4, 3, 6, 2, 5, 6, 5, 2, 6, 4, 6, 6, 2, 7, 6, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 35, 16, 4, 12, 12, 8};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> predictedGrades = {5, 5, 3, 5, 4, 6, 6, 1, 6, 6, 3, 3, 7, 2, 5, 1, 5, 3, 1, 3, 3, 2, 5, 5, 1, 3, 5, 5, 5, 2, 3, 4, 1, 2, 2, 6};
    vector<int> actualGrades = {2, 1, 2, 7, 6, 7, 4, 4, 7, 5, 4, 5, 6, 4, 1, 7, 6, 2, 2, 4, 4, 4, 5, 4, 4, 7, 1, 6, 2, 3, 1, 2, 7, 3, 2, 6};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 41, 22, 11, 11, 0, 5};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> predictedGrades = {5, 3, 1, 5, 6, 7, 4, 3, 6, 6, 2, 5, 4, 3, 6, 1, 3, 7, 7, 2, 6, 7, 5, 2, 5, 3, 1, 6, 1, 3, 4, 6, 4, 5, 7, 3, 7, 4, 1, 3, 6, 4, 2};
    vector<int> actualGrades = {1, 4, 3, 5, 3, 7, 7, 4, 2, 4, 6, 2, 5, 4, 4, 4, 3, 5, 1, 4, 2, 1, 2, 3, 7, 3, 6, 4, 7, 2, 5, 5, 1, 1, 4, 1, 7, 1, 5, 1, 2, 5, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 20, 20, 18, 16, 2, 6};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> predictedGrades = {4, 6, 6, 1, 4, 4, 7, 2, 1, 7, 5, 6, 2, 7, 6, 6, 4, 6, 2, 6, 6, 5, 5, 6, 6, 1, 2, 6, 3, 1, 6, 3, 6, 2, 3, 4, 6, 1, 1, 5, 3, 5, 3, 7};
    vector<int> actualGrades = {1, 6, 2, 4, 2, 1, 4, 6, 7, 3, 7, 3, 5, 7, 5, 7, 5, 4, 7, 2, 6, 3, 1, 1, 3, 7, 6, 7, 3, 5, 6, 7, 7, 5, 7, 2, 7, 7, 4, 7, 6, 5, 2, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 15, 13, 22, 20, 4, 6};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> predictedGrades = {6, 5, 2, 1, 4, 2, 5, 7, 1, 1, 1, 3, 5, 1, 5, 4, 6, 3, 7, 6, 6, 2, 7, 2, 2, 7, 5, 2, 5, 3, 5, 4, 6, 1, 4, 3, 3, 4, 5, 7, 2, 2, 1, 2, 6, 1, 1, 4};
    vector<int> actualGrades = {5, 1, 5, 2, 2, 6, 1, 1, 4, 7, 4, 1, 7, 1, 3, 2, 2, 5, 2, 7, 3, 5, 2, 3, 4, 2, 7, 1, 7, 4, 6, 7, 1, 1, 7, 7, 2, 7, 2, 3, 7, 7, 7, 3, 4, 1, 6, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 20, 20, 18, 12, 14, 6};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> predictedGrades = {1, 5, 3, 5, 6, 4, 2, 5, 7, 6, 5, 2, 3, 4, 1, 4, 6, 5, 4, 7, 6, 6, 1};
    vector<int> actualGrades = {5, 1, 3, 2, 6, 4, 1, 7, 5, 2, 7, 4, 2, 6, 5, 7, 3, 1, 4, 6, 3, 1, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 13, 21, 17, 21, 4, 4};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> predictedGrades = {1, 1, 1, 1, 1, 1, 1};
    vector<int> actualGrades = {2, 2, 2, 3, 3, 3, 3};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 42, 57, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> predictedGrades = {1, 1, 1, 1, 1, 1, 1};
    vector<int> actualGrades = {1, 2, 2, 2, 2, 6, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 57, 0, 0, 0, 14, 14};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> predictedGrades = {1, 5, 7, 3};
    vector<int> actualGrades = {3, 5, 4, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 0, 50, 25, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> predictedGrades = {1, 1, 2};
    vector<int> actualGrades = {2, 2, 2};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 66, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> predictedGrades = {1, 1, 2};
    vector<int> actualGrades = {7, 7, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 33, 66};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> predictedGrades = {1, 5, 7, 3};
    vector<int> actualGrades = {3, 5, 4, 5};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 0, 50, 25, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> predictedGrades = {1, 2, 2};
    vector<int> actualGrades = {1, 1, 1};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 66, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> predictedGrades = {1, 5, 3, 5, 6, 4, 2, 5, 7, 6, 5, 2, 3, 4, 1, 4, 6, 5, 4, 7, 6, 6, 1};
    vector<int> actualGrades = {5, 1, 3, 2, 6, 4, 1, 7, 5, 2, 7, 4, 2, 6, 5, 7, 3, 1, 4, 6, 3, 1, 7};
    Grader* pObj = new Grader();
    clock_t start = clock();
    vector<int> result = pObj->grade(predictedGrades, actualGrades);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 13, 21, 17, 21, 4, 4};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11770181&rd=7219&pm=4588
********************************************************************************
#line 2 "Grader.cpp"
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>
 
using namespace std;
class Grader {
  public:
  vector <int> grade(vector <int> predictedGrades, vector <int> actualGrades) {
    vector <int> res(7);
    for (int i = 0; i < predictedGrades.size(); ++i)
    {
      int diff = abs (predictedGrades[i] - actualGrades[i]);
      res[diff]++;
    }
    for (int i = 0 ;i < 7; ++i)
    {
      res[i] = int (res[i] * 100.0 / predictedGrades.size());
    }
    return res;
    
  }
       
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/