/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2842
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

class Sortitaire {
public:
    int turns(vector<int> tableau, vector<int> stock);
};

int Sortitaire::turns(vector<int> tableau, vector<int> stock) {
    int ret;
    return ret;
}


int test0() {
    vector<int> tableau = {25, 19, 41, 36, 28, 40};
    vector<int> stock = {27, 36, 24, 39, 30};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> tableau = {1, 1, 1, 1, 1};
    vector<int> stock = {2, 3, 4};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tableau = {5, 4, 3, 2, 1};
    vector<int> stock = {20, 40};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> tableau = {40, 50, 60, 70, 1};
    vector<int> stock = {7, 6, 5, 4, 3, 2};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tableau = {19, 7, 23, 38, 23, 90, 81, 22, 71, 30, 87, 32, 99, 5, 80, 17, 19, 43, 67, 50, 88, 11};
    vector<int> stock = {24, 89, 70, 35, 55, 43, 92, 10, 33, 18, 8, 40, 14, 22, 56, 4, 98, 57, 89, 31, 30, 14};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tableau = {28, 24, 93, 83, 65, 82, 21, 50, 30, 60, 81, 1, 64, 82, 62, 14, 92, 87, 43, 26, 20, 51, 74, 73, 76, 12, 83, 49, 49, 1, 26, 46, 66, 16, 50, 21, 9, 45, 61, 28, 56, 74, 51, 4, 19, 41, 84, 93, 83, 40};
    vector<int> stock = {67, 24, 59, 51, 78, 93, 35, 31, 3, 74, 35, 22, 81, 60, 14, 91, 7, 88, 56, 27, 87, 2, 27, 22, 48, 76, 51, 10, 52, 58, 38, 82, 26, 25, 28, 19, 7, 42, 97, 36, 51, 68, 54, 37, 23, 83, 40, 75, 28, 94};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tableau = {6, 37, 76, 65, 13, 37, 26, 58, 16, 8, 2, 5, 75, 21, 13, 85, 24, 53, 37, 29, 88, 57, 4, 16, 4, 40, 5, 33, 66, 82, 31, 15, 13, 56, 73, 43, 87, 27, 43, 36, 10, 3, 89, 2, 64, 22, 99, 29, 18, 27};
    vector<int> stock = {87, 57, 21, 76, 8, 22, 34, 86, 15, 25, 43, 85, 18, 23, 14, 74, 21, 47, 88, 66, 82, 15, 81, 70, 4, 73, 63, 40, 38, 48, 46, 87, 12, 42, 27, 94, 66, 42, 19, 23, 47, 23, 58, 12, 44, 58, 68, 49, 11, 56};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tableau = {2, 29, 94, 14, 50, 91, 95, 16, 93, 78, 83, 29, 10, 72, 14, 53, 2, 19, 44, 38, 40, 39, 1, 10, 61, 59, 5, 16, 31, 88, 65, 20, 77, 33, 65, 84, 62, 60, 43, 26, 28, 66, 48, 1, 16, 62, 83, 76, 82, 72};
    vector<int> stock = {98, 62, 3, 46, 3, 88, 26, 42, 45, 57, 48, 61, 40, 87, 61, 16, 15, 55, 70, 30, 30, 66, 8, 67, 71, 16, 31, 47, 72, 13, 40, 33, 40, 63, 77, 80, 51, 3, 26, 55, 3, 50, 79, 29, 52, 63, 59, 35, 11, 5};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tableau = {28, 76, 65, 50, 90, 9, 28, 51, 66, 27, 77, 90, 11, 93, 7, 23, 63, 28, 91, 86, 42, 71, 67, 34, 40, 8, 32, 84, 23, 93, 17, 55, 24, 85, 7, 49, 11, 38, 46, 29, 86, 30, 58, 7, 40, 54, 79, 8, 75, 81};
    vector<int> stock = {15, 36, 88, 59, 70, 5, 74, 53, 5, 27, 60, 87, 61, 90, 32, 73, 29, 34, 80, 5, 61, 73, 40, 62, 82, 98, 59, 28, 7, 56, 62, 16, 75, 11, 74, 25, 95, 33, 52, 63, 95, 35, 74, 84, 29, 4, 86, 26, 7, 32};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tableau = {97, 65, 93, 87, 20, 77, 86, 31, 80, 81, 66, 82, 46, 90, 43, 51, 79, 82, 22, 2, 86, 19, 52, 75, 22, 17, 83, 64, 83, 59, 21, 13, 98, 13, 44, 47, 49, 72, 70, 16, 28, 98, 43, 13, 82, 78, 72, 33, 57, 45};
    vector<int> stock = {81, 67, 83, 42, 4, 14, 2, 14, 10, 19, 15, 16, 99, 98, 19, 37, 24, 37, 84, 13, 11, 51, 79, 65, 38, 41, 56, 20, 99, 35, 74, 46, 50, 51, 10, 76, 36, 25, 64, 45, 84, 4, 10, 76, 71, 1, 86, 2, 1, 95};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tableau = {5, 7, 34, 12, 15, 17, 19, 22, 22, 25, 27, 28, 52, 9, 35, 34, 35, 53, 39, 43, 43, 74, 38, 54, 55, 55, 60, 86, 61, 63, 63, 71, 73, 29, 74, 75, 78, 80, 84, 59, 87, 88, 89, 89, 92, 93, 94, 95, 96, 98};
    vector<int> stock = {11, 73, 1, 10, 19, 46, 85, 5, 13, 39, 22, 77, 28, 60, 54, 20, 74, 28, 55, 61, 33, 8, 90, 80, 12, 17, 45, 36, 32, 55, 75, 29, 42, 73, 84, 6, 62, 67, 97, 27, 59, 74, 98, 73, 45, 50, 46, 82, 60, 6};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tableau = {1, 1, 3, 4, 86, 9, 11, 12, 19, 24, 21, 22, 39, 24, 84, 25, 26, 29, 57, 30, 31, 32, 34, 35, 71, 40, 54, 44, 44, 47, 53, 41, 55, 29, 57, 60, 68, 69, 21, 97, 84, 25, 86, 8, 86, 90, 92, 96, 74, 97};
    vector<int> stock = {67, 15, 25, 67, 31, 84, 13, 24, 86, 90, 44, 65, 68, 79, 61, 91, 50, 8, 20, 13, 84, 90, 2, 16, 31, 38, 8, 63, 53, 2, 54, 86, 20, 71, 57, 40, 65, 71, 89, 17, 15, 73, 22, 41, 61, 54, 30, 16, 50, 58};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tableau = {4, 6, 54, 20, 13, 15, 17, 89, 23, 8, 29, 30, 33, 34, 35, 39, 98, 45, 50, 51, 51, 7, 55, 57, 58, 71, 61, 63, 64, 83, 68, 70, 71, 60, 71, 72, 75, 75, 76, 77, 81, 85, 83, 66, 87, 87, 26, 90, 96, 39};
    vector<int> stock = {48, 89, 94, 31, 19, 84, 60, 65, 40, 31, 81, 89, 66, 29, 23, 33, 25, 95, 97, 88, 61, 44, 63, 95, 9, 54, 7, 37, 83, 94, 18, 74, 86, 65, 53, 22, 59, 49, 87, 26, 79, 31, 29, 12, 55, 70, 78, 38, 87, 8};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tableau = {2, 4, 2, 5, 5, 4, 3, 2, 3, 2, 2, 1, 3, 4, 4, 3, 2, 2, 5, 3, 5, 5, 5, 3, 3, 2, 4, 5, 1, 3, 4, 1, 1, 5, 4, 3, 3, 4, 5, 3, 1, 1, 2, 2, 5, 3, 2, 4, 2, 4};
    vector<int> stock = {4, 2, 1, 1, 3, 4, 1, 4, 4, 1, 4, 2, 2, 5, 1, 5, 1, 3, 2, 3, 2, 1, 3, 5, 3, 3, 3, 2, 4, 3, 2, 3, 2, 5, 3, 1, 4, 5, 5, 1, 2, 5, 4, 4, 1, 5, 2, 3, 1, 5};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tableau = {5, 4, 5, 3, 5, 4, 3, 4, 2, 5, 3, 4, 1, 4, 3, 5, 1, 4, 5, 2, 2, 4, 5, 1, 5, 1, 2, 4, 4, 2, 5, 4, 4, 2, 4, 4, 1, 2, 2, 4, 3, 1, 3, 5, 5, 3, 2, 2, 3, 1};
    vector<int> stock = {5, 4, 4, 5, 1, 3, 2, 1, 1, 4, 2, 1, 1, 4, 1, 4, 2, 1, 2, 1, 4, 3, 5, 2, 2, 1, 5, 4, 4, 5, 4, 4, 1, 3, 5, 1, 5, 4, 3, 2, 2, 2, 5, 1, 1, 5, 3, 5, 3, 2};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tableau = {2, 2, 1, 8, 9, 5, 10, 2, 4, 2};
    vector<int> stock = {9, 3, 4, 8, 9, 4, 9, 4, 7, 9, 6, 1, 10, 1, 5};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tableau = {7, 3, 10, 8, 9, 8, 5, 2, 3, 3};
    vector<int> stock = {9, 6, 1, 1, 7, 4, 1, 6, 4, 10, 6, 9, 7, 8, 2};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tableau = {1, 1, 4, 3, 2, 4, 8, 8, 10, 10};
    vector<int> stock = {3, 6, 7, 6, 6, 6, 5, 2, 4, 3, 3, 8, 3, 1, 1};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tableau = {1, 7, 4, 5, 7, 4, 7, 7, 9, 10};
    vector<int> stock = {6, 10, 4, 8, 2, 9, 4, 8, 5, 10, 4, 4, 1, 8, 4};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tableau = {6, 1, 3, 7, 6, 10, 8, 5, 8, 2, 6, 10, 10, 3, 3, 7, 9, 4, 5, 2, 6, 3, 5, 4, 5, 5, 1, 4, 7, 9, 5, 3, 1, 2, 2, 6, 1, 3, 9, 7};
    vector<int> stock = {7, 7, 2, 3, 7, 7, 3, 9, 6, 5, 1, 5, 2, 8, 1, 9, 3, 7, 5, 1};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tableau = {8, 5, 10, 10, 5, 2, 10, 10, 3, 6, 10, 10, 6, 2, 7, 9, 8, 10, 5, 4, 10, 9, 8, 6, 7, 7, 7, 2, 5, 9, 2, 3, 9, 10, 10, 7, 4, 1, 5, 7};
    vector<int> stock = {2, 10, 7, 8, 6, 3, 5, 5, 9, 8, 10, 5, 10, 4, 8, 3, 9, 10, 5, 3};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tableau = {8, 9};
    vector<int> stock = {7};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tableau = {20, 10};
    vector<int> stock = {15};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tableau = {20, 10};
    vector<int> stock = {8};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tableau = {20, 10};
    vector<int> stock = {25};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tableau = {30, 33, 34, 34, 34, 34, 40, 42, 19, 50, 57, 59, 60};
    vector<int> stock = {41};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tableau = {30, 33, 34, 34, 34, 34, 40, 42, 19, 50, 57, 59, 60};
    vector<int> stock = {42};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tableau = {30, 33, 34, 34, 34, 34, 40, 42, 19, 50, 57, 59, 60};
    vector<int> stock = {31, 45, 63};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tableau = {30, 33, 34, 34, 34, 34, 40, 42, 19, 50, 57, 59, 60};
    vector<int> stock = {30, 33, 34, 34, 34, 34, 40, 42, 19, 50, 57, 59, 60};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tableau = {30, 33, 34, 34, 34, 34, 40, 42, 19, 50, 57, 59, 60};
    vector<int> stock = {50, 50};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tableau = {10, 20, 30, 40};
    vector<int> stock = {5};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tableau = {20, 10, 20, 30, 40};
    vector<int> stock = {5};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tableau = {10, 20, 30, 40, 35};
    vector<int> stock = {41, 42, 43, 44, 45, 45};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tableau = {28, 24, 30, 35, 70, 69};
    vector<int> stock = {67, 24};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tableau = {50, 49, 51, 48, 52, 47, 53, 46, 54, 45, 55, 44, 56, 43, 57, 42, 58, 51, 59, 40, 60, 39, 61, 48, 62, 38, 63, 37, 64, 39, 65, 48, 66, 49, 67, 37, 68, 36, 69, 35, 70, 34, 71, 33, 72, 32, 73, 32, 74, 48};
    vector<int> stock = {72, 71, 70, 71, 72, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 57, 54, 53, 52, 48, 72, 73, 74, 75};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tableau = {2, 1};
    vector<int> stock = {2};
    Sortitaire* pObj = new Sortitaire();
    clock_t start = clock();
    int result = pObj->turns(tableau, stock);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=5850&pm=2842
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define VAR(a,b) typeof(b) a=(b)
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it)
#define ALL(f,w) ({ bool _ok=true; f _ok=_ok && (w); _ok; })
#define EXISTS(f,w) (!ALL(f,!(w)))
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
template<class T> inline vector<T> makeV(const T&x) { return vector<T>(1,x); }
template<class T> inline vector<T> makeV(const T&x,const T&y) {
  vector<T> v(2); v[0] = x; v[1] = y; return v;
}
template<class T> inline vector<T> makeV(const T&x,const T&y,const T&z) {
  vector<T> v(3); v[0] = x; v[1] = y; v[2]=z; return v;
}
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
template<class T> string i2s(T x) { ostringstream o; o<<x; return o.str(); }
vector<string> split(string s,string del=" ") {
  s+=del[0];
  string w;
  vector<string> res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
 
///////////////////////////////////////////////////////////////////
 
bool dasie(VI tab, VI s) {
  sort(s.begin(),s.end());
  int p =0;
  int prev = -INF;
  REP(x, size(tab)) {
    while(p<size(s) && s[p] < prev) ++p;
    if(tab[x] < prev || p < size(s) && s[p] < tab[x]) {
      if(p==size(s)) return false;
      prev = s[p++];
    }
    else prev = tab[x];
  }
  return true;
}
 
struct Sortitaire {
  // MAIN
  int turns(vector <int> tab, vector <int> stock) {
    int a = -1, b = size(stock)+1;
    while(b-a>1) {
      int c = (a+b)/2;
      VI v; REP(i,c) v.push_back(stock[i]);
      if(dasie(tab,v)) b=c; else a=c;
    }
    if(b>size(stock)) return -1; else return b;
  }
 
 
  
///////////////////////////////////////////////////////////////////
 
 
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/