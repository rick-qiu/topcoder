/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12424
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

class Chopsticks {
public:
    int getmax(vector<int> length);
};

int Chopsticks::getmax(vector<int> length) {
    int ret;
    return ret;
}


int test0() {
    vector<int> length = {5, 5};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> length = {1, 2, 3, 2, 1, 2, 3, 2, 1};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> length = {1};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> length = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> length = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> length = {100, 57, 5};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> length = {78, 15, 79, 64, 77, 7, 99, 52};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> length = {57, 78, 49, 88, 77, 84, 6, 87, 51, 29, 8, 33, 16};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> length = {65, 16, 44, 8, 64, 25, 36, 35, 36, 64, 30, 33, 15, 66, 85, 88, 89, 36};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> length = {18, 71, 97, 67, 71, 80, 38, 22, 13, 53, 75, 8, 50, 3, 30, 12, 95, 27, 6, 57, 38, 81, 56};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> length = {55, 80, 63, 69, 43, 89, 53, 50, 77, 93, 69, 37, 59, 52, 35, 21, 92, 97, 47, 16, 90, 99, 54, 75, 94, 1, 12, 79};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> length = {100, 86, 70, 93, 94, 22, 19, 36, 89, 43, 31, 99, 27, 98, 32, 66, 49, 31, 46, 52, 15, 17, 34, 75, 79, 72, 37, 24, 46, 32, 37, 56, 27};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> length = {95, 53, 26, 11, 2, 92, 15, 64, 27, 88, 80, 72, 20, 43, 12, 41, 96, 48, 91, 91, 82, 22, 80, 49, 68, 17, 77, 53, 68, 45, 58, 84, 92, 17, 76, 51, 100, 14};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> length = {37, 23, 67, 71, 39, 68, 29, 67, 74, 32, 36, 86, 64, 24, 44, 69, 64, 17, 82, 96, 86, 52, 22, 21, 48, 42, 69, 54, 21, 87, 9, 54, 11, 82, 32, 8, 70, 14, 70, 44, 46, 79, 5};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> length = {73, 56, 44, 60, 37, 98, 74, 18, 18, 52, 33, 26, 71, 6, 25, 56, 31, 100, 77, 42, 39, 77, 91, 38, 1, 8, 57, 4, 57, 9, 59, 57, 74, 70, 40, 19, 55, 55, 90, 12, 66, 99, 97, 91, 57, 72, 70, 87};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> length = {3, 89, 91, 78, 49, 2, 37, 13, 19, 94, 8, 81, 71, 11, 50, 85, 31, 59, 16, 99, 29, 18, 4, 3, 84, 40, 64, 57, 63, 51, 80, 18, 69, 38, 63, 69, 13, 76, 92, 85, 21, 31, 73, 1, 9, 27, 87, 71, 33, 18};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> length = {37, 79, 58, 92, 71, 7, 17, 66, 92, 86, 99, 37, 26, 45, 61, 57, 6, 20, 97, 37, 11, 29, 91, 81, 19, 98, 1, 71, 16, 6, 16, 34, 100, 62, 61, 16, 51, 9, 4, 50, 53, 33, 43, 63, 82, 42, 42, 94, 73, 82};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> length = {67, 92, 45, 45, 84, 77, 17, 75, 5, 53, 91, 61, 94, 42, 92, 53, 79, 28, 78, 17, 79, 44, 97, 75, 60, 72, 80, 96, 29, 89, 62, 86, 6, 9, 63, 57, 5, 32, 51, 37, 55, 84, 9, 14, 85, 73, 62, 1, 48, 96};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> length = {86, 18, 31, 63, 38, 49, 36, 7, 67, 37, 90, 47, 3, 18, 82, 94, 8, 57, 32, 9, 34, 75, 91, 67, 61, 89, 98, 21, 19, 91, 37, 77, 54, 13, 70, 57, 29, 62, 84, 64, 92, 91, 72, 44, 68, 69, 69, 71, 27, 57};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> length = {85, 62, 43, 97, 95, 11, 100, 66, 11, 93, 48, 24, 92, 26, 91, 20, 12, 40, 50, 60, 42, 69, 40, 87, 63, 40, 39, 28, 4, 55, 42, 78, 38, 50, 68, 9, 69, 54, 65, 29, 1, 9, 87, 95, 48, 64, 17, 60, 61, 79};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> length = {41, 68, 29, 45, 59, 17, 65, 67, 18, 53, 99, 18, 28, 100, 94, 86, 90, 52, 5, 25, 21, 58, 32, 28, 39, 16, 71, 97, 84, 3, 82, 35, 48, 60, 59, 96, 33, 32, 100, 38, 98, 95, 62, 20, 85, 10, 14, 15, 31, 34};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> length = {29, 53, 10, 38, 96, 36, 53, 72, 49, 90, 26, 5, 5, 46, 67, 86, 1, 96, 43, 77, 91, 52, 21, 92, 60, 16, 25, 71, 39, 39, 16, 52, 48, 14, 10, 90, 40, 53, 17, 83, 34, 87, 30, 93, 73, 88, 12, 2, 71, 55};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> length = {90, 15, 8, 85, 81, 51, 45, 70, 88, 28, 60, 24, 29, 32, 4, 11, 36, 46, 40, 77, 87, 23, 4, 70, 18, 32, 54, 50, 22, 99, 97, 44, 97, 46, 12, 22, 11, 53, 21, 71, 53, 6, 57, 29, 55, 75, 76, 85, 17, 98};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> length = {80, 38, 92, 44, 67, 71, 2, 58, 47, 23, 12, 94, 42, 92, 5, 67, 3, 35, 34, 17, 68, 44, 73, 62, 52, 69, 82, 12, 21, 5, 6, 59, 28, 98, 88, 3, 70, 72, 10, 85, 91, 45, 70, 85, 36, 5, 40, 54, 47, 68};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> length = {49, 74, 99, 33, 64, 76, 11, 38, 43, 37, 21, 58, 47, 16, 38, 96, 60, 67, 39, 44, 90, 82, 77, 39, 35, 95, 72, 6, 55, 27, 95, 55, 76, 17, 59, 74, 68, 3, 44, 77, 92, 43, 88, 14, 70, 58, 57, 17, 100, 21};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> length = {18, 17, 38, 32, 10, 37, 36, 29, 45, 48, 27, 48, 15, 21, 21, 45, 21, 25, 12, 11, 6, 45, 33, 12, 10, 17, 31, 49, 50, 40, 26, 49, 40, 35, 50, 12, 4, 29, 6, 35, 31, 49, 13, 3, 19, 28, 30, 15, 27, 26};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> length = {30, 3, 26, 21, 3, 21, 30, 6, 26, 3, 30, 21, 11, 6, 3, 30, 3, 30, 11, 11, 11, 41, 41, 30, 21, 30, 41, 26, 3, 21, 21, 11, 26, 41, 26, 30, 26, 3, 11, 6, 26, 6, 30, 3, 30, 41, 21, 11, 3, 41};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> length = {38, 47, 8, 17, 1, 8, 19, 13, 4, 1, 38, 28, 24, 6, 24, 43, 20, 37, 25, 39, 50, 1, 18, 32, 24, 37, 16, 20, 16, 41, 6, 1, 37, 16, 20, 39, 13, 26, 45, 1, 35, 50, 49, 18, 28, 27, 41, 31, 35, 24};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> length = {25, 25, 25, 50, 50, 50, 50, 50, 25, 50, 25, 25, 50, 50, 50, 50, 50, 50, 50, 25, 25, 50, 25, 50, 50, 50, 25, 50, 25, 25, 50, 25, 25, 50, 25, 50, 50, 50, 25, 50, 50, 25, 25, 25, 50, 50, 25, 25, 25, 25};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> length = {42, 11, 49, 35, 17, 15, 38, 15, 41, 29, 23, 17, 31, 31, 13, 27, 32, 50, 1, 4, 9, 28, 44, 35, 1, 49, 5, 14, 26, 47, 26, 48, 2, 5, 5, 42, 43, 21, 17, 36, 6, 31, 2, 39, 50, 11, 28, 4, 21, 41};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> length = {2, 30, 30, 27, 30, 36, 28, 27, 20, 28, 20, 27, 2, 20, 20, 2, 36, 20, 30, 2, 2, 2, 30, 2, 6, 2, 6, 28, 2, 6, 20, 30, 2, 2, 27, 6, 28, 2, 28, 2, 36, 27, 30, 27, 2, 2, 27, 2, 20, 30};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> length = {7, 39, 7, 39, 12, 39, 49, 12, 12, 49, 12, 49, 49, 7, 39, 49, 12, 39, 7, 39, 7, 12, 12, 7, 12, 39, 39, 7, 12, 7, 39, 49, 7, 12, 12, 39, 12, 39, 7, 49, 7, 49, 7, 7, 49, 39, 7, 7, 49, 12};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> length = {32, 31, 11, 4, 11, 47, 22, 47, 27, 47, 11, 34, 27, 47, 38, 47, 39, 33, 34, 4, 38, 18, 4, 47, 33, 37, 31, 32, 4, 38, 11, 11, 34, 37, 38, 32, 31, 49, 48, 32, 48, 48, 22, 33, 31, 32, 1, 39, 38, 31};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> length = {5, 14, 1, 39, 32, 35, 25, 28, 17, 10, 3, 28, 3, 28, 33, 41, 8, 41, 47, 13, 19, 7, 39, 31, 24, 9, 23, 24, 19, 18, 1, 48, 23, 41, 25, 33, 1, 25, 45, 10, 3, 13, 49, 34, 18, 3, 49, 8, 24, 5};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> length = {38, 4, 19, 36, 16, 18, 2, 23, 2, 3, 11, 2, 1, 18, 46, 49, 45, 46, 3, 20, 35, 36, 9, 30, 4, 17, 9, 49, 26, 49, 12, 38, 13, 2, 37, 36, 11, 46, 23, 46, 4, 8, 1, 11, 16, 11, 22, 42, 40, 42};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> length = {13, 13, 9, 13, 13, 13, 9, 13, 9, 9, 13, 13, 13, 13, 13, 13, 13, 9, 9, 13, 13, 13, 13, 9, 9, 9, 13, 9, 13, 13, 13, 13, 9, 9, 13, 13, 13, 13, 9, 9, 9, 9, 9, 13, 13, 9, 13, 13, 13, 9};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> length = {25, 14, 4, 23, 9, 43, 40, 33, 49, 2, 37, 8, 50, 31, 40, 43, 5, 23, 6, 4, 38, 46, 8, 22, 10, 9, 19, 46, 49, 49, 23, 47, 47, 46, 47, 23, 2, 41, 4, 2, 50, 46, 10, 10, 43, 26, 32, 26, 37, 36};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> length = {50, 6, 13, 17, 33, 3, 30, 49, 25, 46, 22, 5, 33, 40, 45, 15, 20, 26, 13, 24, 24, 43, 30, 38, 49, 34, 48, 2, 19, 34, 23, 17, 28, 10, 46, 48, 18, 41, 28, 11, 40, 45, 19, 23, 38, 1, 34, 15, 9, 28};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> length = {33, 21, 4, 20, 23, 43, 12, 32, 10, 36, 5, 25, 5, 42, 31, 9, 16, 50, 45, 8, 1, 23, 29, 4, 22, 6, 48, 45, 4, 30, 34, 5, 12, 21, 11, 2, 49, 22, 6, 18, 13, 35, 41, 32, 48, 7, 36, 15, 16, 25};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> length = {37, 37, 45, 18, 47, 5, 42, 11, 23, 4, 8, 42, 48, 4, 14, 4, 14, 21, 19, 20, 47, 47, 5, 1, 40, 45, 2, 11, 23, 23, 35, 37, 47, 46, 40, 7, 20, 17, 32, 8, 14, 37, 37, 23, 17, 45, 40, 17, 18, 19};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> length = {50, 16, 31, 22, 47, 14, 28, 34, 37, 35, 5, 8, 37, 46, 35, 11, 30, 30, 20, 40, 48, 2, 18, 29, 47, 43, 35, 31, 50, 2, 22, 29, 39, 30, 14, 22, 4, 27, 37, 14, 34, 31, 40, 22, 46, 50, 43, 47, 2, 11};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> length = {7, 7, 23, 37, 23, 26, 8, 35, 49, 40, 24, 23, 34, 49, 24, 37, 25, 35, 40, 37, 49, 23, 18, 17, 37, 34, 40, 37, 23, 46, 34, 49, 35, 46, 48, 11, 17, 7, 17, 17, 23, 17, 37, 8, 48, 17, 7, 18, 18, 17};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> length = {18, 22, 10, 36, 3, 48, 2, 29, 5, 31, 32, 9, 19, 46, 44, 7, 32, 2, 23, 21, 10, 33, 2, 19, 38, 20, 10, 16, 17, 33, 34, 22, 41, 36, 2, 44, 48, 46, 34, 32, 41, 4, 48, 32, 50, 23, 21, 6, 12, 38};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> length = {35, 35, 35, 50, 16, 30, 10, 10, 35, 50, 16, 16, 16, 30, 50, 30, 16, 35, 50, 30, 10, 50, 50, 16, 16, 10, 35, 50, 50, 50, 16, 35, 35, 30, 35, 10, 50, 10, 50, 50, 16, 30, 35, 10, 10, 30, 10, 10, 16, 35};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> length = {5, 3, 45, 37, 47, 45, 33, 17, 17, 22, 15, 5, 2, 1, 32, 47, 20, 1, 15, 22, 22, 37, 1, 33, 15, 45, 32, 33, 1, 15, 22, 45, 40, 28, 32, 33, 17, 45, 5, 20, 17, 28, 20, 28, 40, 37, 1, 22, 33, 15};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> length = {5, 5};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
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
    vector<int> length = {100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> length = {85, 97, 96, 85, 97, 95, 96, 90, 91, 80, 93, 83, 98, 100, 88, 95, 88, 84, 99, 98, 94, 94, 87, 83, 80, 87, 88, 100, 95, 83, 89, 83, 98, 80, 85, 85, 99, 85, 92, 93, 83, 85, 96, 85, 87, 84, 91, 93, 99, 92};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> length = {1, 2, 2, 3};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> length = {90};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> length = {9, 47, 57, 62, 82, 9, 5, 52, 6, 28, 9, 8, 15, 55, 98, 26, 54, 45, 56, 47, 51, 30, 61, 82, 55, 65, 99, 69, 39, 99, 58, 79, 62, 93, 12, 50, 99, 35, 55, 94, 11, 68, 18, 33, 42, 10, 16, 82, 38, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> length = {52, 52, 52, 52, 90, 90, 90};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> length = {100, 100, 100, 100, 3, 3};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> length = {100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> length = {1, 2, 50, 52, 52, 53, 99, 99, 77, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> length = {1, 1, 2, 2, 3, 4, 4, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> length = {60, 60, 60, 60};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
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
    vector<int> length = {100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> length = {100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> length = {2, 3};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> length = {100, 1};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> length = {70, 70, 80, 80, 90, 90};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> length = {1, 2, 3, 4, 5, 6, 7, 8, 9, 99, 94, 73, 77, 77, 87, 88, 87};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> length = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> length = {80, 90, 90};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> length = {35, 35, 35, 50, 16, 30, 10, 10, 35, 50, 16, 16, 16, 30, 50, 30, 16, 35, 50, 30, 10, 50, 50, 16, 16, 10, 35, 50, 50, 50, 16, 35, 35, 30, 35, 10, 50, 10, 50, 50, 16, 30, 35, 10, 10, 30, 100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> length = {2, 2, 3};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> length = {100, 100, 67, 90, 78, 60, 100, 80, 90};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> length = {1, 1, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> length = {100, 100, 100, 99, 99};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> length = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> length = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> length = {100, 100, 100, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> length = {1, 1, 1};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
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
    vector<int> length = {2, 3, 2, 100, 100};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> length = {100, 2, 3, 2, 100, 2, 3, 2, 1};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> length = {1, 1, 2, 2};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> length = {1, 2, 4, 3, 3, 3, 3};
    Chopsticks* pObj = new Chopsticks();
    clock_t start = clock();
    int result = pObj->getmax(length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22933742&rd=15490&pm=12424
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
 
class Chopsticks {
public:
  int getmax(vector <int>);
};
 
int Chopsticks::getmax(vector <int> length) {
  
    map<int,int> f;
    
    int n=length.size();
    
    for(int i=0;i<n;i++)
      f[length[i]]+=1;
      
    int ans=0;
    
    map<int,int>::iterator it;
    
    for(it=f.begin();it!=f.end();it++)
      ans+=it->second/2;
      
    return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/