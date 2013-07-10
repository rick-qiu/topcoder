/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11316
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

class FoxStones {
public:
    int getCount(int N, int M, vector<int> sx, vector<int> sy);
};

int FoxStones::getCount(int N, int M, vector<int> sx, vector<int> sy) {
    int ret;
    return ret;
}


int test0() {
    int N = 6;
    int M = 1;
    vector<int> sx = {3};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 2;
    int M = 2;
    vector<int> sx = {2};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int M = 3;
    vector<int> sx = {1, 2, 3};
    vector<int> sy = {1, 2, 3};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 12;
    int M = 34;
    vector<int> sx = {5, 6, 7, 8, 9, 10};
    vector<int> sy = {11, 12, 13, 14, 15, 16};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 410850247;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 950203064;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 197;
    int M = 199;
    vector<int> sx = {28, 52, 117, 57, 82, 8, 119, 77, 79, 180, 60, 65, 113, 110, 196, 126, 55, 153, 160, 56, 160, 24, 108, 91, 68, 84, 77, 80, 129, 64, 132, 130, 185, 19, 43, 158, 121, 117, 128, 154, 13, 134, 8, 157, 18, 123, 158, 56, 125, 114};
    vector<int> sy = {180, 3, 139, 113, 176, 19, 40, 10, 123, 179, 11, 178, 143, 104, 26, 130, 23, 162, 186, 4, 3, 39, 186, 98, 115, 114, 8, 132, 164, 140, 148, 137, 137, 18, 148, 184, 28, 192, 175, 47, 85, 147, 30, 107, 194, 53, 152, 185, 120, 5};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 3;
    int M = 2;
    vector<int> sx = {1, 2, 3, 1, 2, 3};
    vector<int> sy = {1, 1, 1, 2, 2, 2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 92677741;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1};
    vector<int> sy = {200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 92677741;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 92677741;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200};
    vector<int> sy = {200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 92677741;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 200;
    int M = 200;
    vector<int> sx = {100};
    vector<int> sy = {100};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 726518383;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200};
    vector<int> sy = {101};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 900701751;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 1};
    vector<int> sy = {1, 200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 988790209;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 200};
    vector<int> sy = {1, 200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 796520540;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 1};
    vector<int> sy = {1, 2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 871453537;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2};
    vector<int> sy = {1, 2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 697559253;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2};
    vector<int> sy = {1, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 871453537;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 50};
    vector<int> sy = {50, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 950903405;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 200;
    int M = 200;
    vector<int> sx = {20, 30};
    vector<int> sy = {30, 20};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 224871263;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 200;
    int M = 200;
    vector<int> sx = {100, 100};
    vector<int> sy = {100, 101};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 599857223;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 200;
    int M = 200;
    vector<int> sx = {100, 101};
    vector<int> sy = {100, 101};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 163881047;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 200, 1, 200};
    vector<int> sy = {1, 1, 200, 200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 537963690;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 200;
    int M = 200;
    vector<int> sx = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> sy = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 537963690;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 444990460;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151};
    vector<int> sy = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 537963690;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 537963690;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    vector<int> sy = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 799100866;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97, 100, 103, 106, 109, 112, 115, 118, 121, 124, 127, 130, 133, 136, 139, 142, 145, 148};
    vector<int> sy = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61, 64, 67, 70, 73, 76, 79, 82, 85, 88, 91, 94, 97, 100, 103, 106, 109, 112, 115, 118, 121, 124, 127, 130, 133, 136, 139, 142, 145, 148};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 250658590;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 200;
    int M = 200;
    vector<int> sx = {75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124};
    vector<int> sy = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 357008391;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 200;
    int M = 200;
    vector<int> sx = {75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 778822500;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 200;
    int M = 200;
    vector<int> sx = {75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124};
    vector<int> sy = {125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 287831953;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 200;
    int M = 200;
    vector<int> sx = {75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124};
    vector<int> sy = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 443542644;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 51};
    vector<int> sy = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 148};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 61992900;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 101};
    vector<int> sy = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 131};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 489667034;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 200;
    int M = 200;
    vector<int> sx = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 104};
    vector<int> sy = {200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 20};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 596242121;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 200;
    int M = 200;
    vector<int> sx = {146, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200};
    vector<int> sy = {95, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 425853588;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 200;
    int M = 200;
    vector<int> sx = {26, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200};
    vector<int> sy = {50, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 661533032;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 1;
    int M = 1;
    vector<int> sx = {1};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 1;
    int M = 2;
    vector<int> sx = {1};
    vector<int> sy = {2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 1;
    int M = 3;
    vector<int> sx = {1};
    vector<int> sy = {3};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 2;
    int M = 1;
    vector<int> sx = {2};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 2;
    int M = 2;
    vector<int> sx = {2};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 2;
    int M = 3;
    vector<int> sx = {1};
    vector<int> sy = {3};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 3;
    int M = 1;
    vector<int> sx = {2};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 3;
    int M = 2;
    vector<int> sx = {1};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 3;
    int M = 3;
    vector<int> sx = {1};
    vector<int> sy = {1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 10;
    int M = 4;
    vector<int> sx = {10, 6, 1, 5, 9, 6, 2, 8, 10, 1, 8, 8, 2, 1, 2, 4, 6, 8, 1, 7, 7, 4, 5, 7, 10, 5, 2, 3, 4, 3, 10, 5, 9, 3, 6, 9, 9, 3, 4, 7};
    vector<int> sy = {2, 2, 2, 3, 4, 4, 1, 3, 4, 4, 4, 2, 3, 3, 2, 4, 1, 1, 1, 2, 4, 1, 4, 3, 1, 1, 4, 3, 2, 1, 3, 2, 3, 4, 3, 1, 2, 2, 3, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 8;
    int M = 3;
    vector<int> sx = {8, 5, 1, 2, 2, 6, 3, 1, 2, 7, 5, 6, 4, 4, 6, 4, 5, 8, 8, 3, 3, 7};
    vector<int> sy = {2, 3, 1, 3, 1, 2, 2, 3, 2, 3, 1, 1, 1, 3, 3, 2, 2, 1, 3, 1, 3, 2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 7;
    int M = 3;
    vector<int> sx = {7, 7, 4, 3, 3, 2, 1, 4, 1, 2, 6, 4, 6, 5, 3, 5, 5};
    vector<int> sy = {3, 2, 3, 1, 3, 2, 2, 1, 1, 3, 1, 2, 3, 1, 2, 2, 3};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 6;
    int M = 4;
    vector<int> sx = {3, 1, 1, 5, 4, 1, 3, 2, 3, 5, 3, 6, 2, 6, 2, 6, 5, 4};
    vector<int> sy = {1, 4, 3, 2, 2, 2, 2, 2, 3, 4, 4, 3, 1, 4, 3, 1, 3, 4};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 5;
    int M = 9;
    vector<int> sx = {1, 2, 5, 5, 3, 3, 4, 4, 2, 2, 2, 3, 5, 3, 2, 2, 5, 1, 1, 1, 5, 3, 4, 1, 1, 3, 4, 1, 4, 1, 1, 5, 2, 4, 3, 4, 4};
    vector<int> sy = {1, 5, 6, 3, 9, 8, 9, 5, 6, 7, 9, 3, 9, 6, 1, 2, 8, 2, 3, 4, 1, 5, 8, 8, 5, 4, 2, 7, 4, 6, 9, 4, 3, 1, 7, 6, 3};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 15;
    int M = 9;
    vector<int> sx = {9, 10, 6, 11};
    vector<int> sy = {2, 4, 1, 7};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 373357996;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 10;
    int M = 7;
    vector<int> sx = {7, 8, 5, 4};
    vector<int> sy = {5, 4, 7, 4};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 3110400;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 15;
    int M = 9;
    vector<int> sx = {3, 10, 1, 9, 13};
    vector<int> sy = {7, 3, 5, 2, 8};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 12;
    int M = 10;
    vector<int> sx = {5, 4, 8, 9, 2, 4};
    vector<int> sy = {5, 5, 9, 1, 5, 9};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 10;
    int M = 9;
    vector<int> sx = {2, 9, 8, 8, 2, 7, 3, 4, 7, 4, 1, 9};
    vector<int> sy = {7, 1, 1, 8, 9, 4, 9, 4, 9, 9, 6, 8};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 12;
    int M = 18;
    vector<int> sx = {9, 5, 4, 12, 12, 6, 9, 10, 2, 12, 9, 5, 7, 6, 9};
    vector<int> sy = {8, 3, 3, 6, 12, 5, 16, 11, 11, 3, 2, 15, 16, 14, 14};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 6;
    int M = 12;
    vector<int> sx = {5, 2, 2, 3, 4, 6, 5, 2, 2, 6, 3, 6, 2, 6, 6, 1, 5, 4, 2, 5, 6, 1, 4, 6, 6, 3, 3, 2, 4, 2, 4, 3, 1, 4, 5, 3, 5, 3, 5, 4, 2, 4, 1, 6, 1, 1, 3};
    vector<int> sy = {10, 1, 12, 11, 11, 5, 1, 7, 5, 2, 12, 9, 10, 3, 4, 8, 7, 12, 4, 4, 10, 7, 10, 8, 6, 1, 7, 3, 8, 6, 5, 8, 10, 1, 6, 2, 11, 9, 5, 4, 9, 6, 4, 11, 1, 5, 4};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 13;
    int M = 16;
    vector<int> sx = {2, 9, 4, 5, 9, 4, 10, 7, 9, 6, 10, 9, 1, 10, 8, 13, 11, 5, 10, 13, 6, 3, 5, 3, 6, 13, 13, 1, 10, 2, 8, 9, 7, 2, 2, 8, 12, 6, 4, 4, 7, 11, 1};
    vector<int> sy = {2, 1, 12, 6, 11, 4, 11, 15, 8, 11, 12, 16, 6, 16, 1, 2, 10, 5, 10, 8, 7, 12, 2, 15, 3, 1, 4, 10, 1, 5, 16, 2, 7, 15, 9, 10, 9, 1, 14, 13, 14, 12, 13};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 23;
    int M = 25;
    vector<int> sx = {8, 6};
    vector<int> sy = {19, 15};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 150239759;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 22;
    int M = 25;
    vector<int> sx = {13, 20, 21};
    vector<int> sy = {19, 9, 12};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 222147270;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 24;
    int M = 29;
    vector<int> sx = {19, 13, 22, 9, 6, 15, 17, 19};
    vector<int> sy = {22, 26, 8, 24, 20, 16, 28, 8};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 722554360;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 27;
    int M = 21;
    vector<int> sx = {15, 9, 12, 23, 6, 23, 16, 3};
    vector<int> sy = {5, 10, 7, 11, 17, 15, 18, 15};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 985983982;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 30;
    int M = 23;
    vector<int> sx = {2, 3, 1, 10, 8, 24, 7, 19, 22, 16, 20};
    vector<int> sy = {2, 1, 6, 7, 6, 5, 15, 12, 13, 8, 10};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 180377564;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 30;
    int M = 29;
    vector<int> sx = {13, 14, 8, 24, 10, 27, 21, 3, 4, 4, 11, 9};
    vector<int> sy = {6, 25, 11, 28, 7, 6, 23, 17, 26, 28, 18, 2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 20;
    int M = 25;
    vector<int> sx = {15, 1, 16, 13, 13, 20, 14, 8, 8, 4, 13, 16, 3, 15, 13, 10, 6, 19, 7, 16, 4, 17, 3, 8, 18, 17, 12, 16, 4, 14, 12, 17, 15, 18, 16, 8, 12, 5, 1, 9};
    vector<int> sy = {17, 21, 22, 10, 18, 16, 9, 14, 16, 18, 2, 13, 9, 11, 13, 10, 24, 10, 18, 16, 7, 6, 4, 22, 13, 7, 6, 10, 14, 16, 1, 14, 4, 16, 11, 11, 22, 18, 4, 21};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 26;
    int M = 20;
    vector<int> sx = {9, 14, 4, 5, 12, 18, 8, 18, 14, 23, 15, 18, 1, 20, 10, 22, 19, 3, 17, 19, 8, 9, 6, 16, 4, 6, 5, 15, 26, 14, 20, 12, 7, 1, 1, 13, 25, 11, 12, 13, 15, 9, 2};
    vector<int> sy = {5, 14, 2, 11, 16, 10, 15, 8, 11, 5, 7, 5, 19, 15, 15, 8, 6, 1, 15, 19, 13, 2, 6, 3, 1, 11, 4, 2, 16, 8, 9, 5, 19, 6, 8, 2, 14, 10, 3, 1, 10, 20, 16};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 36;
    int M = 76;
    vector<int> sx = {31, 12};
    vector<int> sy = {44, 63};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 136514153;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 41;
    int M = 55;
    vector<int> sx = {36, 4};
    vector<int> sy = {15, 19};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 758911145;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 87;
    int M = 53;
    vector<int> sx = {5, 49, 87, 52, 29, 3};
    vector<int> sy = {49, 43, 34, 29, 19, 46};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 832355786;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 64;
    int M = 36;
    vector<int> sx = {16, 46, 57, 32, 22, 60, 44};
    vector<int> sy = {26, 28, 18, 18, 29, 3, 4};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 289062051;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 84;
    int M = 35;
    vector<int> sx = {73, 51, 80, 65, 56, 70, 75, 74, 80, 36, 76};
    vector<int> sy = {6, 9, 17, 27, 34, 19, 25, 9, 31, 3, 10};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 709075959;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 75;
    int M = 72;
    vector<int> sx = {24, 37, 18, 43, 3, 74, 35, 13, 41};
    vector<int> sy = {33, 8, 68, 47, 46, 71, 23, 61, 41};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 282961862;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 66;
    int M = 69;
    vector<int> sx = {32, 27, 20, 57, 6, 64, 28, 42, 25, 20, 56, 57, 12, 47, 44, 65, 26, 42, 51, 20, 26, 35, 30, 12, 42, 60, 30, 3, 32, 5, 18, 55, 43, 59, 17, 8, 22, 34, 37, 16, 62, 41};
    vector<int> sy = {3, 62, 62, 58, 34, 49, 37, 37, 19, 28, 23, 8, 15, 58, 4, 68, 49, 45, 38, 2, 57, 40, 56, 61, 31, 66, 4, 14, 34, 53, 36, 58, 4, 5, 20, 14, 50, 60, 45, 38, 54, 22};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 55;
    int M = 33;
    vector<int> sx = {7, 55, 18, 14, 43, 11, 38, 40, 21, 3, 4, 28, 41, 49, 4, 36, 1, 45, 5, 19, 25, 37, 36, 7, 8, 4, 38, 3, 20, 53, 43, 42, 29, 34, 6, 2, 24, 23, 38, 55};
    vector<int> sy = {8, 32, 27, 4, 22, 30, 2, 32, 32, 20, 11, 5, 6, 26, 32, 18, 7, 14, 29, 22, 32, 14, 21, 1, 12, 13, 9, 10, 17, 1, 30, 32, 26, 19, 18, 13, 17, 32, 31, 21};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 200;
    int M = 196;
    vector<int> sx = {200};
    vector<int> sy = {143};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 875661008;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 195;
    int M = 190;
    vector<int> sx = {94};
    vector<int> sy = {126};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 758659401;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 199;
    int M = 192;
    vector<int> sx = {174};
    vector<int> sy = {149};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 643171050;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 194;
    int M = 200;
    vector<int> sx = {181};
    vector<int> sy = {5};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 499148563;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 190;
    int M = 200;
    vector<int> sx = {86};
    vector<int> sy = {165};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 111172244;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 199;
    int M = 192;
    vector<int> sx = {47, 32};
    vector<int> sy = {133, 154};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 664198933;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 196;
    int M = 196;
    vector<int> sx = {195, 12};
    vector<int> sy = {44, 160};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 204963044;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 195;
    int M = 192;
    vector<int> sx = {145, 171};
    vector<int> sy = {188, 168};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 845317718;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 190;
    int M = 192;
    vector<int> sx = {25, 39};
    vector<int> sy = {149, 160};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 935736741;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 190;
    int M = 192;
    vector<int> sx = {52, 169};
    vector<int> sy = {167, 121};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 583173087;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 195;
    int M = 200;
    vector<int> sx = {144, 130, 94};
    vector<int> sy = {42, 24, 145};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 178976011;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 197;
    int M = 195;
    vector<int> sx = {42, 39, 8, 136};
    vector<int> sy = {18, 68, 88, 127};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 860719646;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 195;
    int M = 195;
    vector<int> sx = {147, 29, 167};
    vector<int> sy = {40, 147, 108};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 885549785;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 194;
    int M = 192;
    vector<int> sx = {187, 81, 150, 105, 22};
    vector<int> sy = {40, 108, 128, 105, 172};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 982668480;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 200;
    int M = 200;
    vector<int> sx = {126, 56, 70, 1, 77};
    vector<int> sy = {121, 97, 72, 68, 84};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 506715681;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 198;
    int M = 194;
    vector<int> sx = {171, 129, 49, 184, 94, 76, 45, 47, 163, 143, 64, 172, 140, 83, 125, 146, 101, 69, 82, 30, 83, 67, 59, 150, 127, 144, 153, 150, 128, 79, 177, 133, 69, 179, 32, 136};
    vector<int> sy = {181, 135, 98, 55, 110, 7, 167, 97, 51, 30, 138, 142, 82, 174, 85, 170, 180, 90, 153, 190, 8, 25, 2, 43, 68, 60, 163, 1, 18, 41, 160, 7, 49, 163, 93, 83};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 192;
    int M = 192;
    vector<int> sx = {66, 105, 170, 101, 179, 184, 49, 191, 176, 70, 40, 176, 184, 169, 72, 57, 166, 111, 37, 125, 97, 125, 125, 169, 130, 62, 4, 170, 175, 177, 40, 159, 94, 28, 153, 53, 124, 20};
    vector<int> sy = {103, 73, 136, 104, 192, 76, 71, 47, 108, 111, 118, 190, 33, 184, 133, 104, 77, 128, 184, 151, 36, 135, 43, 79, 7, 163, 132, 151, 127, 20, 79, 35, 8, 116, 44, 63, 96, 84};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 193;
    int M = 191;
    vector<int> sx = {81, 107, 158, 82, 114, 172, 71, 143, 192, 81, 88, 36, 97, 47, 105, 13, 141, 66, 76, 53, 59, 35, 19, 5};
    vector<int> sy = {183, 53, 36, 185, 65, 64, 72, 130, 161, 24, 95, 28, 79, 108, 167, 43, 19, 167, 18, 160, 21, 11, 125, 86};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 200;
    int M = 198;
    vector<int> sx = {115, 63, 196, 81, 82, 43, 100, 104, 111, 41, 80, 38, 125, 108, 66, 156, 31, 121, 134, 139, 155, 143, 186, 43, 20, 66, 25, 34, 165, 193};
    vector<int> sy = {153, 89, 189, 139, 93, 32, 9, 71, 197, 15, 117, 179, 124, 1, 160, 183, 174, 35, 134, 144, 31, 11, 52, 43, 53, 45, 193, 2, 78, 25};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 199;
    int M = 200;
    vector<int> sx = {140, 106, 199, 101, 80, 19, 117, 99, 101, 124, 149, 82, 74, 199, 122, 29, 141, 14, 10, 196, 144, 54, 146, 44, 138, 19, 161, 27, 21, 79, 195, 138, 116, 115, 3, 24, 155, 112, 41, 197, 145, 102, 168, 59, 149, 53, 182, 199};
    vector<int> sy = {128, 143, 153, 38, 179, 183, 161, 21, 63, 15, 143, 119, 81, 95, 1, 52, 5, 85, 141, 11, 117, 178, 47, 189, 126, 105, 70, 91, 75, 153, 158, 9, 80, 95, 94, 88, 160, 187, 27, 106, 30, 75, 136, 25, 77, 55, 63, 94};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 198;
    int M = 200;
    vector<int> sx = {15, 77, 195, 82, 1, 24, 73, 58, 3, 148, 84, 11, 184, 74, 132, 113, 148, 79, 195, 137, 173, 134, 44, 95, 59, 6, 114, 114, 105, 105, 51, 49, 176, 134, 155, 45, 194, 34, 129, 7, 136, 86, 114, 98, 144, 126, 176, 80, 99};
    vector<int> sy = {12, 141, 62, 183, 146, 165, 166, 20, 47, 155, 35, 159, 11, 144, 72, 159, 88, 90, 52, 32, 198, 72, 140, 51, 50, 170, 198, 61, 114, 23, 66, 116, 77, 4, 28, 170, 101, 125, 36, 181, 94, 166, 100, 112, 3, 46, 143, 103, 186};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 194;
    int M = 195;
    vector<int> sx = {63, 134, 34, 179, 23, 96, 29, 161, 161, 49, 111, 109, 53, 1, 93, 185, 165, 10, 141, 76, 132, 131, 133, 178, 93, 27, 186, 129, 26, 29, 55, 59, 44, 178, 189, 166, 188, 178, 45, 84, 163, 91, 112, 88, 122};
    vector<int> sy = {109, 7, 59, 180, 70, 20, 182, 181, 193, 174, 77, 53, 30, 41, 119, 107, 64, 102, 26, 24, 170, 58, 192, 82, 186, 1, 97, 66, 169, 10, 75, 117, 13, 11, 143, 75, 17, 17, 104, 123, 97, 61, 181, 18, 74};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 200;
    int M = 194;
    vector<int> sx = {72, 181, 25, 47, 132, 34, 104, 89, 57, 94, 103, 51, 145, 118, 160, 163, 128, 88, 164, 166, 34, 53, 186, 8, 75, 42, 111, 129, 163, 67, 69, 26, 106, 143, 123, 58, 51, 159, 41, 150, 117, 8, 2, 36, 66, 121, 70, 49};
    vector<int> sy = {177, 10, 84, 117, 135, 11, 107, 101, 194, 77, 6, 92, 76, 52, 158, 81, 185, 3, 88, 88, 74, 163, 141, 125, 79, 105, 191, 66, 170, 154, 104, 36, 182, 68, 133, 21, 137, 11, 36, 87, 178, 5, 122, 31, 182, 183, 160, 31};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 12;
    int M = 34;
    vector<int> sx = {5, 6, 7, 8, 9, 10};
    vector<int> sy = {11, 12, 13, 14, 15, 16};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 410850247;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 200;
    int M = 200;
    vector<int> sx = {100};
    vector<int> sy = {100};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 726518383;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 200;
    int M = 200;
    vector<int> sx = {5, 5, 13};
    vector<int> sy = {5, 13, 13};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 182751846;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 200;
    int M = 199;
    vector<int> sx = {1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 8};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 6819587;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 199;
    int M = 199;
    vector<int> sx = {100};
    vector<int> sy = {100};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 63891021;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200};
    vector<int> sy = {50, 185, 83, 183, 60, 159, 71, 171, 180, 58, 100, 198, 186, 122, 81, 107, 34, 91, 144, 130, 128, 112, 52, 1, 104, 146, 64, 55, 170, 198, 85, 162, 191, 76, 167, 189, 62, 59, 29, 68, 70, 91, 35, 120, 95, 154, 93, 3, 151, 40};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 200;
    int M = 200;
    vector<int> sx = {47, 17, 46, 12, 10, 24, 45, 12, 45, 14, 36, 37, 30, 2, 29, 25, 43, 39, 13, 16, 35, 26, 15, 21, 42, 16, 1, 50, 24, 11, 11, 14, 15, 11, 24, 6, 18, 41, 1, 10, 11, 15, 8, 15, 41, 38, 29, 18, 8, 47};
    vector<int> sy = {47, 26, 23, 23, 12, 13, 49, 25, 31, 49, 41, 9, 12, 48, 7, 49, 5, 17, 39, 43, 44, 48, 36, 14, 11, 3, 38, 16, 28, 1, 18, 30, 4, 3, 15, 46, 24, 24, 23, 26, 12, 21, 22, 10, 10, 39, 26, 2, 10, 3};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 999720904;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 200;
    int M = 200;
    vector<int> sx = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    vector<int> sy = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 921005880;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 537963690;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 200;
    int M = 200;
    vector<int> sx = {93, 91, 61, 90, 62, 63, 50, 132, 69, 114, 9, 50, 71, 106, 70, 92, 116, 147, 44, 11, 12, 114, 8, 109, 79, 95, 35, 105, 10, 104, 96, 72, 129, 52, 8, 67, 45, 62, 67, 95, 108, 75, 77, 81, 139, 114, 32, 79, 26, 81};
    vector<int> sy = {135, 74, 74, 122, 54, 111, 81, 67, 196, 154, 148, 54, 95, 67, 71, 55, 61, 103, 108, 71, 162, 66, 130, 200, 125, 58, 78, 92, 118, 156, 163, 78, 63, 142, 162, 178, 198, 166, 52, 142, 158, 93, 86, 81, 137, 136, 54, 106, 102, 140};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 390156183;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 100, 200};
    vector<int> sy = {97, 99, 103};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 92958610;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 200;
    int M = 200;
    vector<int> sx = {3, 5, 7, 9, 2, 10, 22, 23, 44, 66, 77, 6, 101, 199};
    vector<int> sy = {8, 9, 10, 13, 14, 15, 30, 49, 66, 89, 100, 134, 156, 177};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 902818920;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 200;
    int M = 200;
    vector<int> sx = {20, 21, 22, 23, 24, 34, 35, 36, 37, 38, 39, 40, 41, 12, 13, 14, 15, 16, 17, 18, 19, 25, 26, 49, 50, 1, 2, 3, 4, 5, 6, 7, 27, 28, 29, 30, 31, 42, 43, 44, 45, 46, 47, 48, 8, 9, 10, 11, 32, 33};
    vector<int> sy = {20, 21, 22, 23, 24, 25, 26, 49, 50, 1, 2, 3, 4, 5, 6, 7, 27, 28, 29, 30, 31, 42, 43, 44, 45, 46, 47, 48, 8, 9, 10, 11, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 12, 13, 14, 15, 16, 17, 18, 19};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 533934107;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 200;
    int M = 200;
    vector<int> sx = {5, 10, 84, 120, 190};
    vector<int> sy = {66, 91, 120, 140, 10};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 498358706;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 200;
    int M = 200;
    vector<int> sx = {33, 157, 185, 71, 124, 150, 130, 80, 117, 141, 172, 100, 200, 166, 115, 151, 143, 185, 65, 73, 28, 12, 40, 139, 192, 70, 76, 166, 69, 176, 3, 199, 166, 46, 97, 142, 105, 11, 108, 190, 190, 99, 41, 55, 8, 137, 97, 31, 124, 177};
    vector<int> sy = {178, 132, 186, 42, 40, 123, 1, 192, 57, 135, 138, 81, 7, 147, 77, 149, 7, 93, 12, 45, 4, 191, 156, 153, 161, 153, 8, 71, 19, 168, 128, 101, 44, 125, 102, 115, 28, 84, 97, 168, 154, 55, 186, 55, 57, 127, 36, 29, 30, 63};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    vector<int> sy = {99, 97, 95, 93, 91, 89, 87, 85, 83, 81, 79, 77, 75, 73, 71, 69, 67, 65, 63, 61, 59, 57, 55, 53, 51, 49, 47, 45, 43, 41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 21, 19, 17, 15, 13, 11, 9, 7, 5, 3, 1};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 403549821;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97, 101, 105, 109, 113, 117, 121, 125, 129, 133, 137, 141, 145, 149, 153, 157, 161, 165, 169, 173, 177, 181, 185, 189, 193, 197};
    vector<int> sy = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97, 101, 105, 109, 113, 117, 121, 125, 129, 133, 137, 141, 145, 149, 153, 157, 161, 165, 169, 173, 177, 181, 185, 189, 193, 197};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 426384281;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 142649955;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 444990460;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> sy = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 711894482;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 200;
    int M = 200;
    vector<int> sx = {5, 6, 7, 8, 9, 10, 14, 15, 16, 17, 18, 19, 29, 30, 31, 32, 33, 34, 51, 52, 53, 54, 55, 56, 22, 23, 24, 25, 26, 27, 81, 82, 83, 84, 85, 86, 111, 112, 113, 114, 115, 116, 131, 132, 133, 134, 135, 136, 137, 138};
    vector<int> sy = {131, 132, 133, 134, 135, 136, 137, 138, 5, 6, 7, 8, 9, 10, 14, 15, 16, 17, 18, 19, 29, 30, 31, 32, 33, 34, 51, 52, 53, 54, 55, 56, 22, 23, 24, 25, 26, 27, 81, 82, 83, 84, 85, 86, 111, 112, 113, 114, 115, 116};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 350799846;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 179;
    int M = 147;
    vector<int> sx = {2, 34, 23, 97};
    vector<int> sy = {1, 17, 99, 43};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 784319368;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {112, 115, 117, 156, 157, 159, 123, 124, 126, 120, 56, 59, 51, 189, 184, 188, 165, 164, 169, 160, 45, 49, 47, 26, 23, 24, 65, 69, 64, 60, 12, 13, 19, 36, 39, 33, 78, 79, 72, 70, 199, 198, 191, 178, 174, 171, 142, 145, 146, 140};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 926015677;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 200;
    int M = 200;
    vector<int> sx = {115, 48, 90, 21, 50, 57, 194, 94, 50, 192, 51, 124, 183, 29, 4, 195, 94, 97, 96, 192, 142, 180, 182, 132, 119, 114, 133, 168, 12, 140, 4, 99, 190, 43, 122, 184, 25, 162, 129, 155, 114, 117, 24, 109, 113, 132, 49, 94, 83, 12};
    vector<int> sy = {71, 147, 20, 96, 141, 152, 11, 148, 179, 39, 110, 91, 138, 162, 192, 169, 163, 93, 16, 131, 170, 120, 43, 141, 49, 107, 197, 196, 66, 139, 20, 30, 52, 84, 142, 79, 43, 167, 108, 54, 73, 127, 30, 31, 177, 166, 33, 81, 70, 69};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 145638812;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> sy = {1, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 472318955;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 200;
    int M = 200;
    vector<int> sx = {53, 144, 35, 126, 17, 108, 199, 90, 181, 72, 163, 54, 145, 36, 127, 18, 109, 200, 91, 182, 73, 164, 55, 146, 37, 128, 19, 110, 1, 92, 183, 74, 165, 56, 147, 38, 129, 20, 111, 2, 93, 184, 75, 166, 57, 148, 39, 130, 21, 112};
    vector<int> sy = {33, 84, 135, 186, 37, 88, 139, 190, 41, 92, 143, 194, 45, 96, 147, 198, 49, 100, 151, 2, 53, 104, 155, 6, 57, 108, 159, 10, 61, 112, 163, 14, 65, 116, 167, 18, 69, 120, 171, 22, 73, 124, 175, 26, 77, 128, 179, 30, 81, 132};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
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
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> sy = {1, 200, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 199, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 198, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 160, 6};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 191125424;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 200;
    int M = 200;
    vector<int> sx = {42, 68, 135, 101, 170, 125, 79, 159, 163, 65, 106, 146, 82, 28, 162, 92, 196, 143, 28, 37, 192, 5, 103, 154, 93, 183, 22, 117, 119, 96, 48, 127, 172, 139, 70, 113, 68, 100, 36, 95, 104, 12, 123, 134, 74, 65, 142, 112, 54, 69};
    vector<int> sy = {148, 45, 63, 158, 38, 60, 124, 142, 130, 179, 117, 36, 191, 43, 89, 107, 41, 143, 65, 49, 47, 6, 91, 130, 171, 151, 7, 102, 194, 149, 30, 24, 85, 155, 157, 41, 167, 177, 132, 109, 145, 40, 27, 124, 138, 139, 119, 83, 130, 142};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 200;
    int M = 200;
    vector<int> sx = {110, 17, 136, 52, 1, 50, 120, 157, 199, 104, 25, 9, 45, 10, 190, 103, 196, 86, 94, 144, 124, 188, 115, 104, 49, 1, 59, 19, 181, 197, 199, 82, 190, 199, 10, 158, 73, 23, 139, 93, 39, 180, 191, 58, 159, 192, 16, 89, 157, 112};
    vector<int> sy = {3, 35, 73, 56, 129, 47, 163, 87, 76, 34, 70, 143, 45, 17, 82, 199, 123, 52, 22, 100, 158, 77, 93, 190, 76, 113, 1, 111, 4, 70, 62, 89, 2, 190, 56, 24, 3, 186, 183, 86, 89, 27, 18, 158, 33, 133, 170, 155, 122, 190};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 200;
    int M = 200;
    vector<int> sx = {53, 25, 200, 188, 20, 37, 50, 125, 135, 152, 196, 182, 172, 144, 147, 46, 129, 131, 99, 180, 161, 120, 126, 178, 136, 47, 84, 181, 18, 173, 54, 60, 137, 178, 70, 173, 143, 34, 146, 2, 123, 186, 142, 78, 50, 117, 101, 96, 60, 43};
    vector<int> sy = {197, 140, 150, 30, 71, 181, 35, 176, 167, 97, 76, 93, 86, 163, 116, 146, 151, 48, 124, 198, 171, 62, 81, 78, 38, 70, 59, 68, 109, 81, 80, 51, 194, 17, 38, 71, 75, 66, 57, 186, 200, 133, 174, 137, 79, 181, 126, 121, 3, 190};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 200;
    int M = 200;
    vector<int> sx = {114, 27, 140, 53, 166, 79, 192, 105, 18, 131, 44, 157, 70, 183, 96, 9, 122, 35, 148, 61, 174, 87, 200, 113, 26, 139, 52, 165, 78, 191, 104, 17, 130, 43, 156, 69, 182, 95, 8, 121, 34, 147, 60, 173, 86, 199, 112, 25, 138, 51};
    vector<int> sy = {18, 35, 52, 69, 86, 103, 120, 137, 154, 171, 188, 5, 22, 39, 56, 73, 90, 107, 124, 141, 158, 175, 192, 9, 26, 43, 60, 77, 94, 111, 128, 145, 162, 179, 196, 13, 30, 47, 64, 81, 98, 115, 132, 149, 166, 183, 200, 17, 34, 51};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 200;
    int M = 200;
    vector<int> sx = {1, 12, 33, 4, 5, 67, 7, 8, 59, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 125, 126, 27, 28, 29, 30, 131, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 200};
    vector<int> sy = {1, 2, 3, 84, 5, 63, 171, 81, 9, 200, 11, 12, 113, 6, 15, 16, 97, 1, 7, 20, 21, 22, 23, 124, 5, 26, 7, 28, 29, 130, 31, 32, 33, 99, 35, 136, 37, 38, 32, 4, 41, 42, 43, 144, 45, 46, 47, 48, 4, 200};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 200;
    int M = 200;
    vector<int> sx = {95, 116, 7, 8, 9, 10, 14, 15, 16, 17, 18, 19, 29, 30, 31, 32, 33, 34, 51, 52, 53, 54, 55, 56, 22, 23, 24, 25, 26, 27, 81, 82, 83, 84, 85, 86, 111, 112, 113, 114, 115, 116, 131, 132, 133, 134, 135, 140, 137, 144};
    vector<int> sy = {131, 132, 133, 134, 135, 136, 137, 138, 5, 6, 7, 8, 9, 10, 14, 15, 16, 17, 18, 19, 29, 30, 31, 32, 33, 34, 51, 52, 53, 54, 55, 56, 22, 23, 24, 25, 26, 27, 81, 82, 83, 84, 85, 86, 111, 112, 113, 114, 115, 116};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 95107368;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 200;
    int M = 200;
    vector<int> sx = {2, 7, 5};
    vector<int> sy = {5, 8, 34};
    FoxStones* pObj = new FoxStones();
    clock_t start = clock();
    int result = pObj->getCount(N, M, sx, sy);
    clock_t end = clock();
    delete pObj;
    int expected = 889435947;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14946025&rd=14427&pm=11316
********************************************************************************
# include <string> 
# include <vector> 
# include <iostream> 
# include <sstream> 
# include <cstdio> 
# include <cstdlib> 
# include <cmath> 
# include <cctype> 
# include <cstring> 
# include <limits> 
# include <numeric> 
# include <map> 
# include <queue> 
# include <deque> 
# include <set> 
# include <algorithm> 
# include <utility> 
# include <functional> 
# include <stack> 
# include <bitset> 
# include <complex> 
# include <cassert> 
# include <ctime> 
# include <list> 
# include <valarray> 
 
using namespace std; 
 
#define MP make_pair 
#define all(v) (v).begin(),(v).end() 
 
typedef long long ll; 
typedef long double ld; 
typedef vector<int> vi; 
typedef vector< vector<int> > vvi; 
typedef vector< vector< vector<int> > > vvvi; 
typedef vector<bool> vb; 
typedef vector<ld> vd; 
typedef pair<int, int> pii; 
typedef vector<string> vs; 
 
const long double PI = 3.1415926535897932384626433832795; 
const long double eps = 1e-10; 
 
const int MOD = 1000000009; 
 
class FoxStones 
{ 
public : 
  int getCount ( int N, int M, vector <int> sx, vector <int> sy ) 
  { 
    int res; 
    map< vector<int>, int> cnt; 
    for (int row = 1; row <= M; ++row) { 
      for (int col = 1; col <= N; ++col) { 
        vector<int> dists; 
        for (int i = 0; i < sx.size(); ++i) { 
          int dist = max(abs(sx[i] - col), abs(sy[i] - row)); 
          dists.push_back(dist); 
        } 
        cnt[dists]++; 
      } 
    } 
    res = 1; 
    vector<int> fact(N * M + 1, 1); 
    for (int i = 2; i <= N * M; ++i) { 
      fact[i] = (ll(fact[i - 1]) * i) % MOD; 
    } 
    for (map<vector<int>, int>::const_iterator it = cnt.begin(); it != cnt.end(); ++it) { 
      res = (ll(res) * fact[it->second]) % MOD; 
    } 
    return res; 
  } 
   
 
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/