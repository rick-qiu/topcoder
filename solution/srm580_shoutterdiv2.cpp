/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12578
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

class ShoutterDiv2 {
public:
    int count(vector<int> s, vector<int> t);
};

int ShoutterDiv2::count(vector<int> s, vector<int> t) {
    int ret;
    return ret;
}


int test0() {
    vector<int> s = {1, 2, 4};
    vector<int> t = {3, 4, 6};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> s = {0};
    vector<int> t = {100};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {71, 30};
    vector<int> t = {97, 90};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> s = {54, 30, 16};
    vector<int> t = {62, 94, 87};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> s = {3, 5, 2, 3};
    vector<int> t = {78, 37, 87, 16};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> s = {23, 14, 72, 7, 4};
    vector<int> t = {28, 53, 100, 28, 31};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> s = {45, 5, 43, 60, 7, 25};
    vector<int> t = {83, 80, 45, 84, 91, 41};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> s = {16, 11, 10, 30, 52, 61, 15};
    vector<int> t = {100, 66, 73, 39, 87, 94, 81};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> s = {26, 10, 8, 13, 2, 4, 75, 51};
    vector<int> t = {52, 85, 21, 30, 65, 70, 85, 99};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> s = {60, 18, 38, 0, 7, 27, 7, 19, 55};
    vector<int> t = {63, 87, 63, 70, 27, 40, 38, 86, 70};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> s = {26, 34, 33, 24, 48, 23, 85, 24, 23, 2};
    vector<int> t = {64, 93, 75, 88, 79, 72, 86, 55, 40, 11};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> s = {17, 3, 7, 58, 35, 16, 40, 16, 5, 7, 15};
    vector<int> t = {77, 47, 90, 63, 46, 30, 60, 35, 11, 86, 66};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> s = {67, 30, 20, 3, 48, 48, 77, 6, 90, 56, 88, 9};
    vector<int> t = {88, 63, 25, 56, 67, 71, 80, 46, 97, 63, 89, 11};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> s = {13, 45, 64, 61, 24, 0, 54, 26, 48, 6, 56, 16, 80};
    vector<int> t = {17, 51, 74, 89, 59, 31, 56, 32, 93, 52, 94, 54, 97};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> s = {31, 37, 41, 32, 60, 11, 34, 87, 55, 34, 43, 23, 67, 4};
    vector<int> t = {88, 63, 65, 35, 68, 60, 91, 92, 95, 54, 100, 38, 90, 97};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> s = {27, 40, 57, 41, 34, 2, 36, 10, 0, 68, 14, 13, 4, 47, 86};
    vector<int> t = {67, 52, 65, 56, 34, 6, 65, 14, 70, 77, 18, 34, 59, 67, 88};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> s = {41, 60, 76, 23, 1, 5, 8, 44, 18, 62, 6, 10, 42, 17, 19, 14};
    vector<int> t = {53, 89, 93, 55, 58, 92, 100, 60, 31, 85, 34, 13, 98, 70, 75, 24};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> s = {27, 67, 3, 39, 20, 26, 17, 20, 11, 38, 38, 82, 19, 26, 7, 47, 40};
    vector<int> t = {51, 91, 78, 70, 68, 85, 56, 45, 83, 97, 95, 97, 39, 92, 23, 86, 66};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> s = {14, 55, 10, 19, 7, 83, 60, 77, 5, 24, 38, 16, 48, 12, 20, 22, 13, 13};
    vector<int> t = {47, 65, 67, 83, 59, 85, 64, 94, 6, 43, 56, 65, 83, 44, 77, 61, 26, 38};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> s = {55, 60, 68, 12, 30, 91, 59, 27, 36, 65, 43, 46, 68, 74, 36, 56, 85, 14, 16};
    vector<int> t = {70, 80, 97, 31, 50, 99, 99, 40, 59, 97, 66, 86, 73, 96, 53, 80, 92, 62, 85};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> s = {3, 65, 47, 50, 11, 17, 22, 62, 28, 48, 49, 12, 5, 16, 48, 12, 51, 21, 3, 26};
    vector<int> t = {5, 96, 84, 56, 65, 88, 90, 87, 36, 83, 79, 79, 97, 21, 83, 35, 89, 88, 99, 47};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> s = {81, 37, 8, 85, 19, 50, 15, 70, 2, 24, 22, 45, 62, 44, 28, 41, 32, 12, 10, 40, 21};
    vector<int> t = {82, 61, 33, 91, 63, 84, 81, 95, 56, 37, 89, 78, 91, 50, 51, 97, 41, 25, 50, 89, 99};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> s = {17, 22, 15, 10, 1, 78, 29, 35, 15, 17, 30, 92, 44, 17, 40, 90, 5, 18, 28, 10, 18, 27};
    vector<int> t = {93, 51, 87, 36, 48, 80, 78, 73, 24, 19, 76, 100, 55, 99, 58, 96, 14, 23, 66, 37, 58, 77};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> s = {35, 23, 21, 80, 19, 33, 67, 14, 59, 72, 21, 54, 40, 8, 13, 15, 64, 34, 3, 10, 20, 50, 7};
    vector<int> t = {62, 75, 97, 100, 24, 71, 100, 51, 96, 98, 69, 84, 88, 59, 28, 41, 73, 97, 28, 55, 48, 51, 87};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> s = {35, 60, 69, 58, 47, 26, 65, 45, 67, 9, 86, 14, 28, 61, 5, 24, 39, 2, 0, 83, 55, 63, 17, 35};
    vector<int> t = {84, 97, 70, 86, 63, 55, 66, 48, 86, 37, 91, 99, 65, 75, 73, 85, 60, 33, 4, 90, 59, 64, 88, 52};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> s = {21, 5, 0, 69, 21, 7, 66, 61, 14, 29, 4, 8, 51, 12, 17, 12, 42, 27, 24, 63, 22, 91, 79, 14, 44};
    vector<int> t = {33, 93, 26, 92, 95, 100, 88, 62, 82, 39, 52, 47, 61, 37, 41, 13, 81, 38, 99, 84, 100, 99, 89, 88, 69};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 195;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> s = {62, 17, 9, 33, 87, 14, 67, 25, 19, 63, 14, 43, 68, 44, 34, 72, 38, 73, 10, 34, 66, 13, 51, 17, 69, 15};
    vector<int> t = {73, 77, 39, 52, 91, 68, 96, 71, 97, 96, 77, 86, 82, 64, 40, 94, 56, 97, 90, 38, 68, 16, 58, 86, 86, 91};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> s = {5, 17, 8, 60, 66, 56, 41, 43, 13, 0, 71, 3, 17, 79, 27, 31, 0, 72, 10, 71, 32, 12, 22, 74, 15, 43, 7};
    vector<int> t = {72, 63, 100, 71, 70, 64, 53, 55, 81, 37, 74, 60, 33, 81, 76, 60, 30, 98, 38, 80, 85, 60, 79, 89, 62, 75, 49};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> s = {23, 48, 0, 43, 43, 9, 4, 53, 8, 31, 50, 31, 21, 10, 23, 41, 71, 27, 46, 9, 72, 40, 17, 1, 30, 42, 15, 51};
    vector<int> t = {72, 56, 12, 64, 50, 87, 16, 65, 37, 57, 64, 72, 72, 48, 84, 61, 75, 58, 55, 81, 97, 58, 92, 45, 77, 70, 43, 90};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 282;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> s = {8, 57, 52, 11, 48, 31, 63, 75, 76, 53, 51, 45, 58, 1, 11, 57, 18, 28, 7, 14, 14, 33, 21, 11, 22, 65, 72, 38, 15};
    vector<int> t = {44, 97, 83, 19, 67, 70, 97, 96, 90, 83, 91, 96, 74, 9, 88, 67, 35, 51, 47, 37, 92, 66, 40, 35, 77, 84, 86, 100, 69};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 254;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> s = {10, 72, 26, 72, 3, 65, 29, 31, 16, 50, 20, 13, 1, 26, 28, 7, 14, 13, 50, 34, 8, 76, 48, 9, 32, 55, 5, 53, 42, 1};
    vector<int> t = {14, 80, 83, 88, 38, 99, 50, 91, 52, 80, 74, 63, 79, 85, 51, 86, 67, 25, 70, 92, 60, 88, 90, 51, 70, 96, 100, 92, 84, 31};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> s = {37, 15, 25, 46, 15, 52, 9, 10, 19, 24, 32, 1, 21, 1, 1, 30, 1, 16, 33, 1, 57, 71, 27, 6, 7, 28, 56, 36, 40, 38, 57};
    vector<int> t = {93, 69, 95, 48, 46, 96, 24, 31, 48, 99, 33, 19, 89, 27, 62, 71, 50, 26, 44, 78, 78, 97, 48, 49, 49, 89, 84, 68, 97, 48, 70};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> s = {16, 52, 24, 61, 42, 19, 14, 37, 30, 81, 9, 86, 7, 62, 2, 54, 7, 41, 7, 25, 79, 95, 26, 33, 19, 83, 11, 3, 50, 15, 21, 14};
    vector<int> t = {93, 76, 94, 66, 97, 90, 23, 89, 97, 100, 69, 95, 36, 67, 25, 70, 36, 83, 53, 67, 80, 100, 31, 86, 40, 94, 79, 37, 82, 29, 29, 95};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> s = {0, 5, 78, 49, 57, 25, 58, 7, 0, 8, 51, 25, 43, 59, 8, 22, 11, 53, 26, 31, 39, 69, 8, 17, 66, 38, 41, 34, 8, 1, 45, 38, 74};
    vector<int> t = {18, 99, 85, 91, 88, 33, 93, 81, 51, 72, 60, 70, 53, 67, 64, 64, 27, 72, 38, 90, 82, 100, 16, 79, 97, 91, 60, 85, 28, 7, 46, 78, 99};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 338;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> s = {30, 12, 38, 18, 42, 34, 63, 28, 5, 50, 88, 45, 53, 86, 48, 8, 46, 72, 23, 30, 39, 64, 64, 21, 81, 11, 28, 55, 19, 18, 7, 31, 5, 63};
    vector<int> t = {99, 57, 40, 94, 86, 45, 70, 82, 6, 55, 95, 52, 68, 88, 63, 73, 94, 88, 80, 69, 40, 99, 90, 94, 92, 98, 55, 93, 72, 30, 88, 44, 83, 91};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 387;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> s = {4, 36, 50, 73, 51, 73, 17, 10, 97, 6, 3, 32, 57, 22, 30, 8, 42, 92, 24, 63, 40, 10, 27, 1, 17, 42, 20, 15, 55, 69, 25, 5, 62, 13, 25};
    vector<int> t = {80, 58, 83, 84, 59, 81, 55, 78, 98, 12, 9, 59, 74, 80, 84, 61, 81, 100, 57, 95, 42, 53, 52, 49, 18, 87, 82, 97, 67, 98, 35, 79, 73, 39, 71};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 368;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> s = {32, 1, 25, 3, 4, 83, 9, 4, 59, 52, 10, 13, 37, 35, 3, 79, 21, 1, 10, 10, 3, 91, 86, 32, 22, 4, 50, 9, 25, 18, 29, 37, 16, 4, 63, 22};
    vector<int> t = {78, 77, 73, 58, 82, 97, 65, 32, 96, 54, 74, 28, 100, 94, 60, 97, 44, 20, 38, 65, 67, 94, 92, 97, 98, 11, 63, 95, 38, 19, 78, 53, 42, 69, 100, 68};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> s = {55, 19, 42, 6, 23, 62, 56, 2, 14, 33, 46, 53, 3, 45, 26, 1, 7, 6, 4, 48, 33, 15, 15, 8, 19, 35, 11, 66, 18, 48, 22, 15, 10, 12, 10, 71, 62};
    vector<int> t = {65, 63, 44, 12, 83, 78, 96, 7, 48, 92, 51, 90, 46, 85, 52, 92, 23, 26, 94, 100, 57, 64, 94, 61, 29, 74, 38, 93, 95, 98, 29, 31, 83, 71, 48, 78, 77};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 461;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> s = {18, 73, 1, 10, 84, 9, 3, 63, 82, 38, 47, 73, 12, 3, 55, 3, 43, 86, 16, 57, 38, 15, 75, 30, 29, 47, 68, 34, 63, 86, 32, 59, 63, 13, 23, 20, 18, 47};
    vector<int> t = {88, 80, 74, 83, 90, 57, 12, 71, 85, 94, 73, 90, 92, 79, 78, 31, 97, 94, 41, 96, 50, 61, 77, 63, 83, 83, 99, 60, 98, 92, 57, 80, 68, 25, 73, 25, 38, 79};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> s = {52, 17, 60, 21, 28, 74, 54, 45, 26, 15, 73, 23, 34, 59, 2, 19, 42, 5, 46, 10, 63, 32, 58, 53, 68, 10, 59, 13, 81, 3, 45, 10, 8, 21, 62, 5, 11, 26, 78};
    vector<int> t = {76, 42, 84, 97, 97, 75, 57, 81, 33, 51, 88, 62, 78, 96, 57, 41, 96, 98, 99, 37, 83, 60, 71, 74, 90, 97, 88, 64, 90, 55, 77, 94, 96, 29, 79, 29, 40, 52, 98};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 519;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> s = {62, 30, 4, 6, 59, 43, 15, 3, 45, 15, 34, 17, 7, 23, 9, 15, 1, 12, 63, 67, 49, 42, 74, 18, 24, 19, 64, 21, 6, 2, 33, 7, 2, 87, 7, 20, 11, 50, 30, 1};
    vector<int> t = {96, 96, 56, 66, 69, 77, 77, 35, 64, 95, 62, 66, 41, 39, 20, 87, 41, 34, 67, 68, 97, 44, 75, 49, 78, 47, 91, 45, 32, 19, 56, 65, 82, 95, 32, 100, 75, 54, 90, 21};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 549;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> s = {34, 7, 8, 13, 9, 14, 76, 11, 84, 29, 2, 1, 22, 70, 50, 64, 45, 88, 44, 55, 62, 0, 39, 32, 70, 11, 57, 43, 86, 4, 64, 24, 8, 25, 7, 69, 31, 52, 10, 44, 60};
    vector<int> t = {61, 55, 90, 63, 44, 23, 78, 78, 92, 71, 56, 90, 73, 72, 58, 67, 80, 89, 98, 78, 73, 55, 39, 94, 90, 88, 90, 62, 92, 12, 95, 37, 33, 73, 30, 80, 75, 62, 82, 84, 67};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 524;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> s = {8, 78, 54, 38, 47, 24, 51, 32, 84, 27, 20, 18, 77, 15, 34, 26, 26, 5, 27, 92, 46, 24, 2, 42, 15, 16, 21, 4, 45, 28, 37, 10, 64, 35, 47, 50, 16, 20, 38, 28, 38, 53};
    vector<int> t = {27, 92, 85, 58, 90, 79, 53, 72, 96, 87, 66, 48, 81, 21, 78, 30, 38, 64, 46, 96, 48, 51, 60, 72, 66, 79, 75, 71, 68, 45, 54, 53, 65, 89, 79, 55, 36, 40, 57, 53, 86, 65};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 596;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> s = {16, 6, 9, 40, 16, 58, 13, 8, 12, 14, 32, 47, 52, 13, 26, 6, 21, 32, 18, 7, 46, 43, 37, 3, 35, 27, 23, 72, 16, 73, 1, 26, 20, 74, 95, 12, 48, 8, 86, 11, 11, 9, 76};
    vector<int> t = {93, 71, 38, 47, 25, 65, 40, 74, 42, 37, 35, 73, 75, 62, 87, 97, 32, 34, 22, 10, 50, 99, 43, 85, 54, 84, 43, 90, 91, 82, 48, 59, 75, 82, 100, 12, 80, 22, 97, 54, 56, 11, 93};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> s = {6, 61, 4, 6, 7, 40, 23, 44, 39, 24, 45, 6, 45, 6, 27, 69, 24, 35, 34, 25, 40, 74, 77, 16, 10, 30, 34, 6, 41, 18, 23, 50, 6, 4, 76, 28, 5, 45, 8, 38, 4, 10, 89, 67};
    vector<int> t = {73, 90, 69, 26, 98, 81, 87, 62, 81, 46, 47, 71, 59, 15, 64, 99, 42, 43, 77, 66, 53, 75, 100, 20, 17, 41, 59, 24, 69, 73, 49, 96, 91, 86, 85, 83, 14, 55, 83, 69, 55, 84, 94, 98};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 633;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> s = {17, 37, 63, 52, 41, 86, 20, 38, 84, 0, 52, 3, 2, 83, 21, 41, 30, 26, 47, 29, 73, 71, 65, 42, 68, 23, 16, 70, 4, 8, 13, 0, 45, 22, 33, 37, 4, 51, 87, 1, 12, 91, 72, 19, 16};
    vector<int> t = {66, 49, 83, 66, 97, 92, 98, 92, 95, 58, 63, 84, 74, 99, 42, 63, 47, 92, 73, 80, 78, 99, 76, 97, 84, 73, 31, 73, 77, 88, 69, 26, 88, 77, 49, 93, 94, 83, 96, 96, 29, 95, 82, 86, 96};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 722;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> s = {13, 79, 47, 17, 23, 2, 23, 61, 0, 31, 6, 11, 6, 66, 87, 21, 29, 14, 41, 31, 54, 75, 1, 24, 63, 35, 3, 72, 22, 16, 28, 25, 31, 7, 13, 26, 68, 16, 17, 12, 10, 60, 43, 60, 5, 8};
    vector<int> t = {77, 83, 56, 38, 29, 62, 23, 77, 89, 50, 100, 30, 67, 87, 90, 89, 84, 98, 79, 36, 100, 80, 67, 35, 76, 49, 78, 89, 44, 89, 62, 25, 81, 67, 96, 62, 72, 36, 65, 79, 60, 61, 93, 71, 31, 43};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 750;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> s = {8, 22, 51, 0, 12, 25, 31, 15, 5, 29, 14, 19, 47, 68, 50, 41, 3, 7, 45, 53, 5, 41, 75, 3, 60, 11, 6, 19, 10, 19, 63, 26, 61, 0, 80, 24, 79, 2, 38, 49, 32, 5, 56, 72, 7, 11, 49};
    vector<int> t = {41, 38, 73, 2, 72, 48, 75, 99, 86, 46, 66, 75, 64, 81, 58, 90, 75, 42, 87, 91, 100, 93, 91, 11, 65, 25, 92, 62, 45, 63, 69, 32, 63, 28, 84, 96, 87, 81, 88, 57, 40, 26, 97, 75, 64, 71, 87};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 733;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> s = {38, 56, 1, 92, 56, 80, 74, 60, 20, 26, 59, 26, 5, 35, 46, 24, 63, 88, 48, 82, 9, 15, 49, 80, 86, 28, 57, 3, 59, 79, 75, 0, 41, 66, 49, 28, 18, 61, 6, 2, 50, 14, 1, 48, 77, 58, 15, 0};
    vector<int> t = {41, 72, 17, 93, 96, 87, 97, 67, 80, 98, 60, 32, 79, 38, 49, 85, 63, 94, 90, 83, 15, 32, 71, 81, 88, 46, 91, 98, 64, 93, 79, 31, 52, 98, 69, 86, 24, 74, 61, 62, 95, 15, 58, 96, 95, 79, 89, 48};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 594;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> s = {82, 47, 85, 52, 29, 62, 80, 46, 7, 9, 53, 10, 15, 9, 6, 45, 12, 46, 33, 4, 39, 36, 26, 15, 11, 55, 19, 25, 73, 38, 39, 86, 1, 24, 0, 0, 81, 1, 40, 65, 6, 12, 83, 37, 45, 12, 72, 8, 34};
    vector<int> t = {96, 83, 92, 69, 60, 64, 88, 68, 31, 92, 64, 18, 25, 38, 50, 99, 14, 87, 55, 87, 74, 89, 74, 33, 24, 97, 100, 65, 88, 75, 96, 89, 12, 67, 59, 63, 89, 5, 61, 97, 92, 97, 97, 37, 97, 19, 85, 24, 98};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 692;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> s = {47, 10, 15, 19, 46, 41, 18, 31, 16, 31, 70, 80, 55, 24, 53, 32, 51, 15, 7, 2, 38, 33, 19, 38, 33, 7, 2, 11, 4, 3, 3, 22, 75, 34, 62, 15, 23, 3, 10, 13, 10, 60, 54, 35, 28, 26, 69, 21, 9, 91};
    vector<int> t = {47, 23, 45, 36, 68, 63, 83, 66, 80, 100, 75, 83, 70, 45, 95, 63, 97, 87, 95, 48, 83, 55, 45, 82, 56, 17, 41, 39, 21, 90, 64, 54, 85, 51, 74, 95, 85, 20, 83, 47, 21, 70, 98, 82, 62, 49, 80, 98, 91, 94};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 871;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> s = {74, 3, 5, 17, 22, 18, 65, 13, 17, 54, 10, 43, 23, 16, 10, 88, 4, 25, 0, 27, 21, 25, 61, 21, 63, 67, 76, 5, 26, 54, 85, 53, 7, 16, 47, 1, 34, 40, 37, 50, 44, 7, 29, 14, 72, 61, 15, 24, 56, 13};
    vector<int> t = {82, 81, 66, 18, 27, 39, 88, 69, 19, 67, 13, 94, 80, 50, 34, 90, 50, 86, 98, 40, 96, 42, 78, 43, 67, 79, 100, 60, 56, 66, 88, 80, 91, 54, 52, 20, 49, 52, 63, 100, 68, 62, 31, 33, 97, 74, 34, 39, 57, 48};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> s = {53, 50, 39, 16, 20, 36, 7, 63, 3, 67, 9, 94, 41, 56, 12, 20, 2, 67, 27, 5, 18, 67, 44, 19, 18, 15, 52, 41, 32, 26, 16, 1, 11, 34, 8, 31, 41, 4, 54, 47, 25, 29, 12, 13, 51, 38, 0, 75, 14, 52};
    vector<int> t = {72, 64, 94, 51, 85, 60, 29, 95, 96, 78, 76, 100, 61, 93, 32, 36, 86, 97, 76, 51, 32, 98, 51, 98, 44, 47, 99, 88, 45, 28, 18, 4, 17, 61, 44, 53, 81, 68, 76, 60, 72, 54, 61, 82, 60, 75, 25, 89, 23, 98};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 786;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> s = {35, 35, 43, 78, 6, 76, 58, 6, 90, 88, 34, 22, 67, 28, 21, 9, 69, 43, 2, 3, 22, 16, 13, 81, 83, 42, 10, 16, 26, 90, 53, 34, 40, 5, 32, 0, 4, 44, 57, 15, 33, 92, 8, 10, 4, 8, 54, 66, 4, 41};
    vector<int> t = {85, 56, 71, 78, 45, 100, 65, 82, 99, 89, 51, 35, 75, 59, 40, 27, 76, 79, 74, 76, 90, 64, 53, 87, 96, 51, 64, 56, 46, 95, 71, 51, 51, 39, 45, 63, 54, 54, 61, 79, 64, 100, 48, 78, 34, 43, 74, 82, 81, 45};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 713;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> s = {38, 11, 3, 5, 55, 59, 34, 11, 7, 36, 15, 13, 42, 22, 10, 16, 4, 30, 12, 1, 74, 23, 3, 40, 2, 18, 2, 8, 24, 87, 59, 41, 18, 80, 84, 47, 50, 10, 86, 0, 23, 27, 69, 36, 52, 94, 17, 17, 16, 84};
    vector<int> t = {100, 65, 32, 89, 100, 85, 83, 82, 76, 57, 63, 31, 71, 96, 76, 59, 68, 69, 61, 94, 90, 61, 40, 84, 59, 40, 42, 16, 42, 92, 95, 76, 32, 96, 99, 70, 59, 97, 92, 44, 70, 78, 85, 46, 98, 98, 77, 96, 27, 96};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 866;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> s = {12, 6, 4, 14, 81, 30, 23, 35, 23, 60, 9, 67, 16, 48, 34, 4, 12, 38, 59, 49, 42, 23, 17, 67, 47, 6, 50, 36, 3, 51, 0, 46, 47, 56, 35, 65, 26, 8, 42, 22, 20, 6, 47, 22, 32, 36, 67, 63, 57, 51};
    vector<int> t = {36, 67, 95, 56, 90, 35, 30, 42, 78, 89, 38, 73, 50, 64, 74, 78, 87, 98, 88, 99, 65, 66, 77, 92, 89, 25, 86, 52, 99, 88, 78, 63, 76, 56, 57, 66, 60, 59, 48, 60, 74, 94, 78, 29, 43, 81, 71, 89, 95, 63};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 914;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> s = {59, 8, 8, 55, 21, 82, 14, 60, 19, 4, 30, 10, 20, 52, 22, 64, 8, 3, 36, 33, 80, 32, 35, 18, 10, 7, 14, 9, 21, 17, 43, 25, 49, 14, 18, 81, 21, 42, 90, 70, 17, 5, 48, 28, 63, 3, 12, 80, 65, 60};
    vector<int> t = {86, 29, 60, 93, 97, 87, 27, 78, 52, 80, 38, 58, 76, 63, 31, 85, 88, 78, 49, 33, 97, 93, 93, 52, 45, 98, 64, 58, 55, 64, 59, 93, 100, 66, 85, 99, 42, 92, 92, 72, 45, 94, 66, 84, 89, 91, 83, 84, 74, 69};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 896;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> s = {67, 3, 8, 24, 45, 10, 80, 11, 78, 20, 14, 29, 5, 41, 69, 26, 26, 61, 3, 41, 19, 50, 53, 34, 42, 0, 74, 69, 16, 80, 20, 44, 28, 38, 14, 60, 52, 17, 31, 17, 7, 70, 42, 74, 59, 41, 31, 6, 29, 24};
    vector<int> t = {95, 54, 70, 41, 45, 85, 94, 44, 88, 97, 53, 47, 88, 51, 87, 31, 40, 69, 41, 59, 63, 71, 82, 51, 86, 86, 88, 77, 22, 96, 65, 82, 66, 68, 29, 85, 81, 95, 38, 25, 7, 72, 91, 80, 89, 69, 86, 51, 88, 78};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 795;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> s = {5, 28, 28, 32, 48, 31, 26, 12, 41, 21, 8, 79, 51, 67, 15, 9, 95, 36, 30, 9, 17, 14, 70, 39, 2, 4, 46, 80, 27, 13, 51, 30, 26, 25, 72, 59, 55, 67, 0, 89, 91, 16, 48, 16, 60, 33, 8, 1, 4, 8};
    vector<int> t = {74, 63, 84, 93, 62, 62, 54, 94, 81, 79, 31, 86, 78, 77, 53, 21, 96, 68, 76, 97, 38, 75, 82, 66, 20, 5, 50, 87, 51, 68, 94, 30, 79, 38, 82, 86, 73, 85, 68, 97, 96, 24, 64, 69, 80, 37, 31, 24, 21, 25};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 680;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> s = {10, 65, 15, 37, 6, 73, 35, 36, 61, 56, 29, 0, 23, 56, 81, 26, 43, 68, 3, 65, 31, 3, 51, 38, 54, 44, 60, 44, 11, 4, 1, 2, 47, 63, 26, 21, 34, 80, 51, 63, 9, 93, 65, 24, 30, 1, 72, 67, 24, 17};
    vector<int> t = {44, 95, 98, 80, 93, 88, 46, 43, 64, 82, 54, 37, 62, 61, 84, 42, 68, 91, 41, 79, 82, 72, 79, 49, 68, 81, 71, 56, 69, 73, 33, 62, 54, 93, 92, 26, 57, 86, 94, 83, 85, 98, 82, 36, 94, 11, 88, 90, 30, 59};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 754;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> s = {9, 26, 8, 35, 3, 58, 91, 24, 10, 26, 22, 18, 15, 12, 15, 27, 15, 60, 76, 19, 12, 16, 37, 35, 25, 4, 22, 47, 65, 3, 2, 23, 26, 33, 7, 11, 34, 74, 67, 32, 15, 45, 20, 53, 60, 25, 74, 13, 44, 51};
    vector<int> t = {26, 62, 80, 80, 52, 83, 100, 71, 20, 73, 23, 32, 80, 37, 34, 55, 51, 86, 97, 89, 17, 81, 74, 94, 79, 85, 77, 97, 87, 8, 70, 46, 58, 70, 97, 35, 80, 76, 82, 80, 19, 56, 65, 62, 80, 49, 79, 28, 75, 78};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 830;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> s = {0, 0, 0};
    vector<int> t = {1, 1, 1};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> s = {0, 1, 3, 5};
    vector<int> t = {2, 4, 6, 7};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {9, 26, 8, 35, 3, 58, 91, 24, 10, 26, 22, 18, 15, 12, 15, 27, 15, 60, 76, 19, 12, 16, 37, 35, 25, 4, 22, 47, 65, 3, 2, 23, 26, 33, 7, 11, 34, 74, 67, 32, 15, 45, 20, 53, 60, 25, 74, 13, 44, 51};
    vector<int> t = {26, 62, 80, 80, 52, 83, 100, 71, 20, 73, 23, 32, 80, 37, 34, 55, 51, 86, 97, 89, 17, 81, 74, 94, 79, 85, 77, 97, 87, 8, 70, 46, 58, 70, 97, 35, 80, 76, 82, 80, 19, 56, 65, 62, 80, 49, 79, 28, 75, 78};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 830;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> s = {9, 26, 8, 35, 3, 58, 91, 24, 10, 26, 22, 18, 15, 12, 15, 27, 15, 60, 76, 19, 12, 16, 37, 35, 25, 4, 22, 47, 65, 3, 2, 23, 26, 33, 7, 11, 34, 74, 67, 32, 15, 45, 20, 53, 60, 25, 74, 13, 44, 51};
    vector<int> t = {26, 62, 80, 80, 52, 83, 100, 71, 20, 73, 23, 32, 80, 37, 34, 55, 51, 86, 97, 89, 17, 81, 74, 94, 79, 85, 77, 97, 87, 8, 70, 46, 58, 71, 97, 35, 80, 76, 82, 80, 19, 56, 65, 62, 80, 49, 79, 28, 75, 78};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 830;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> s = {1, 2};
    vector<int> t = {1, 4};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> s = {10, 1};
    vector<int> t = {11, 2};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> s = {8, 5};
    vector<int> t = {10, 6};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> s = {2, 1};
    vector<int> t = {3, 4};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> s = {2, 2, 3, 3};
    vector<int> t = {2, 2, 3, 3};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {1, 2, 4};
    vector<int> t = {3, 4, 6};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {4, 1};
    vector<int> t = {5, 2};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> s = {2, 5, 6, 9};
    vector<int> t = {3, 7, 7, 9};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> s = {4, 2};
    vector<int> t = {5, 3};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> s = {1, 2, 4};
    vector<int> t = {3, 3, 6};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {3, 2};
    vector<int> t = {4, 2};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {2, 1};
    vector<int> t = {4, 3};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> s = {3, 1};
    vector<int> t = {4, 2};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {2, 6};
    vector<int> t = {4, 8};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
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
    vector<int> s = {1, 1, 1, 1, 1, 5, 5, 5, 5, 5};
    vector<int> t = {2, 2, 2, 2, 6, 8, 9, 8, 9, 10};
    ShoutterDiv2* pObj = new ShoutterDiv2();
    clock_t start = clock();
    int result = pObj->count(s, t);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23059053&rd=15500&pm=12578
********************************************************************************
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
class ShoutterDiv2{ 
 
    public: 
    int count(vector <int> s, vector <int> t){ 
        int a = 0; 
        for(int i =0; i < s.size();i++){ 
            for(int j = i+1;j<s.size();j++){ 
                if(s[i] >= s[j] && t[j] >= s[i]) 
                    a++; 
                if(s[i] < s[j] && t[i] >= s[j]) 
                    a++; 
            } 
 
    } 
    return a; 
} 
};

********************************************************************************
*******************************************************************************/