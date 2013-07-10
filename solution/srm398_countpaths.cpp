/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8158
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

class CountPaths {
public:
    vector<int> difPaths(int r, int c, vector<int> fieldrow, vector<int> fieldcol);
};

vector<int> CountPaths::difPaths(int r, int c, vector<int> fieldrow, vector<int> fieldcol) {
    vector<int> ret;
    return ret;
}


int test0() {
    int r = 3;
    int c = 3;
    vector<int> fieldrow = {2, 3};
    vector<int> fieldcol = {2, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int r = 6;
    int c = 4;
    vector<int> fieldrow = {3, 5};
    vector<int> fieldcol = {2, 3};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 24, 18};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int r = 6;
    int c = 4;
    vector<int> fieldrow = {5, 3};
    vector<int> fieldcol = {3, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 24, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int r = 30;
    int c = 30;
    vector<int> fieldrow = {1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28, 28, 29, 29, 30, 30};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 6, 2, 3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 17, 17, 17, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 980196, 492851, 420437, 242629, 75394, 25153, 54279, 263790, 360516, 177345, 686437, 258400, 451652, 248564, 573042, 12035, 194248, 726779, 353374, 901839, 620764, 524091, 981772, 709090, 280008, 568983, 170599, 253917, 439999, 606924, 716612, 242394, 153622, 418219, 323651, 336646, 410897, 424702, 786576, 24281, 562034, 94208, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int r = 5;
    int c = 5;
    vector<int> fieldrow = {1, 2, 3};
    vector<int> fieldcol = {3, 4, 5};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 14, 10, 4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int r = 8;
    int c = 8;
    vector<int> fieldrow = {1, 2, 5, 5, 6, 7, 8, 8};
    vector<int> fieldcol = {3, 4, 5, 6, 7, 7, 7, 8};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 63, 767, 843, 775, 574, 308, 86, 16};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int r = 25;
    int c = 35;
    vector<int> fieldrow = {14, 17, 24, 9, 5, 1, 21, 25, 15, 15, 15, 9, 18, 18, 6, 11, 4};
    vector<int> fieldcol = {20, 11, 2, 18, 1, 30, 15, 15, 17, 27, 25, 14, 12, 30, 14, 11, 35};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52340, 454768, 685027, 726633, 38057, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int r = 11;
    int c = 9;
    vector<int> fieldrow = {3, 8, 5, 2, 10, 4, 1, 5, 7, 2, 1, 4, 2, 6, 5};
    vector<int> fieldcol = {8, 9, 9, 8, 1, 7, 7, 6, 9, 6, 3, 1, 9, 4, 7};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9358, 18900, 5955, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int r = 31;
    int c = 33;
    vector<int> fieldrow = {16, 15, 19, 19, 25, 19, 16, 24, 31, 6, 30, 31, 9, 10, 23, 7, 15, 14, 16, 2, 17};
    vector<int> fieldcol = {8, 13, 13, 9, 9, 31, 1, 18, 16, 22, 31, 21, 24, 13, 2, 23, 22, 17, 25, 8, 24};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {868541, 491090, 726643, 605443, 345038, 544050, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int r = 23;
    int c = 48;
    vector<int> fieldrow = {5, 18, 18, 1, 1, 16, 7, 18, 7, 1, 14, 8, 14, 11};
    vector<int> fieldcol = {48, 32, 46, 13, 6, 11, 39, 12, 9, 24, 12, 21, 14, 8};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {662438, 969822, 262493, 752237, 342978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int r = 35;
    int c = 37;
    vector<int> fieldrow = {3, 28, 28, 27, 27, 5, 15, 23, 21, 3, 8, 25, 34, 31, 33, 35, 13, 34};
    vector<int> fieldcol = {12, 34, 3, 9, 34, 3, 18, 17, 26, 5, 23, 14, 20, 7, 3, 20, 19, 23};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {830519, 709835, 755976, 219563, 868547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int r = 6;
    int c = 39;
    vector<int> fieldrow = {6, 3, 4, 5, 2, 5, 4, 3, 1, 1, 1, 4, 6, 1, 6, 3, 2, 4};
    vector<int> fieldcol = {6, 14, 31, 4, 20, 34, 29, 28, 22, 20, 5, 36, 14, 24, 12, 6, 5, 10};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2850, 115537, 43329, 4320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int r = 50;
    int c = 24;
    vector<int> fieldrow = {17, 36, 29, 31, 10, 48, 1, 3, 20, 23, 48, 24, 25, 18, 12, 17, 18, 45, 36, 8, 36, 22, 38, 48, 14, 17, 47, 42, 23, 47};
    vector<int> fieldcol = {18, 20, 8, 6, 20, 16, 1, 13, 17, 10, 2, 10, 13, 5, 8, 9, 14, 4, 5, 16, 17, 16, 7, 18, 20, 6, 15, 6, 5, 13};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 701755, 670229, 160764, 499858, 898766, 64080, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int r = 1;
    int c = 42;
    vector<int> fieldrow = {1, 1, 1, 1, 1, 1, 1};
    vector<int> fieldcol = {29, 23, 19, 10, 34, 4, 24};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int r = 29;
    int c = 7;
    vector<int> fieldrow = {14, 2, 4, 14, 4, 19, 23, 21, 17, 23, 27, 23, 9, 12, 15, 16, 5, 22, 9, 18, 2, 1, 19, 26, 7, 2, 8, 1, 3, 25, 19, 23, 7, 2, 17, 22, 9, 8, 22, 6};
    vector<int> fieldcol = {6, 2, 7, 2, 3, 5, 2, 1, 4, 3, 1, 6, 6, 2, 4, 6, 7, 6, 3, 7, 7, 1, 7, 3, 1, 5, 6, 3, 4, 5, 2, 4, 2, 4, 5, 7, 1, 3, 2, 4};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 720, 2416, 716, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int r = 11;
    int c = 3;
    vector<int> fieldrow = {1, 11, 10, 5, 9, 6, 1, 5, 9, 3, 8, 8, 8, 11, 7, 1};
    vector<int> fieldcol = {1, 3, 3, 3, 2, 1, 3, 2, 3, 3, 2, 3, 1, 2, 3, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int r = 16;
    int c = 11;
    vector<int> fieldrow = {13, 9, 10, 10, 9, 13, 1, 8, 15, 10};
    vector<int> fieldcol = {4, 10, 11, 6, 2, 2, 3, 10, 4, 8};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27666, 638801, 317003, 360, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int r = 1;
    int c = 26;
    vector<int> fieldrow = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> fieldcol = {23, 18, 8, 14, 7, 19, 24, 2, 26, 6, 22, 3, 9, 11, 13, 20, 15, 5, 16, 1, 21, 12};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int r = 18;
    int c = 16;
    vector<int> fieldrow = {18, 16, 2, 1, 9, 18, 15, 6};
    vector<int> fieldcol = {1, 9, 1, 12, 4, 4, 2, 6};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {911376, 679422, 35457, 120, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int r = 29;
    int c = 29;
    vector<int> fieldrow = {23, 22, 24, 14, 16, 13, 11, 7, 18, 9, 18, 9, 27, 22, 24};
    vector<int> fieldcol = {29, 17, 1, 9, 29, 24, 17, 21, 3, 21, 25, 9, 26, 13, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {828166, 505212, 839676, 280386, 533618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int r = 6;
    int c = 16;
    vector<int> fieldrow = {4, 6, 2, 3, 6, 6, 1, 2, 5, 4, 3, 1, 6, 2, 6, 1, 2, 6, 2, 6, 5, 1, 4, 4, 3, 4, 6, 1, 5, 3, 1, 4, 3, 5, 2};
    vector<int> fieldcol = {14, 15, 6, 8, 10, 11, 8, 8, 3, 15, 9, 2, 13, 11, 3, 11, 5, 8, 3, 4, 13, 6, 3, 6, 14, 13, 7, 5, 10, 2, 10, 5, 16, 15, 16};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 6, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int r = 24;
    int c = 22;
    vector<int> fieldrow = {12, 19, 1, 15, 19, 7, 24, 9, 1, 18, 12, 22};
    vector<int> fieldcol = {10, 9, 11, 6, 15, 12, 19, 15, 7, 9, 18, 20};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {437047, 696174, 299603, 170592, 582199, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int r = 15;
    int c = 44;
    vector<int> fieldrow = {4, 15, 4, 14, 7, 4, 15, 15, 7, 7, 13, 5, 6, 5, 5};
    vector<int> fieldcol = {21, 41, 11, 23, 27, 32, 40, 31, 3, 23, 24, 35, 7, 9, 11};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {240003, 721554, 366451, 925197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int r = 41;
    int c = 46;
    vector<int> fieldrow = {17, 34, 12, 17, 18, 5, 41, 30, 7, 26, 36, 15, 5, 35, 40, 37, 10};
    vector<int> fieldcol = {21, 44, 39, 44, 16, 25, 31, 8, 32, 40, 4, 31, 43, 14, 2, 35, 45};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {146298, 479355, 179906, 43024, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int r = 23;
    int c = 30;
    vector<int> fieldrow = {4, 2};
    vector<int> fieldcol = {19, 11};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {934294, 535717, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int r = 30;
    int c = 28;
    vector<int> fieldrow = {26, 19, 11, 19, 30, 26, 9, 15, 1, 15, 15};
    vector<int> fieldcol = {8, 13, 20, 21, 2, 10, 21, 10, 15, 1, 20};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {966293, 466840, 946426, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26};
    vector<int> fieldcol = {2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {351538, 896709, 192270, 783406, 838564, 627763, 213005, 718301, 650731, 101906, 553819, 490519, 88703, 820109, 240589, 515746, 97458, 162367, 958738, 422881, 505263, 302773, 512554, 30814, 469206, 96188, 586981, 447904, 510153, 449355, 701858, 594049, 465410, 993621, 580434, 102916, 937164, 253231, 72870, 831654, 790629, 805098, 724478, 542039, 992612, 85115, 288724, 625008, 766470, 596994, 951461};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26};
    vector<int> fieldcol = {2, 1, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25, 26, 26, 27};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 518607, 300150, 152424, 285070, 667406, 619034, 324713, 997629, 194639, 408496, 26373, 622745, 637278, 82991, 249067, 619040, 914211, 1764, 417990, 150170, 151046, 854651, 737569, 187062, 910503, 849825, 273534, 891276, 86350, 808244, 178987, 86671, 997343, 874307, 803610, 247952, 615039, 141920, 833466, 703627, 314476, 806548, 921678, 175102, 688750, 248008, 848453, 57971, 854369, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int r = 10;
    int c = 10;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> fieldcol = {3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int r = 4;
    int c = 4;
    vector<int> fieldrow = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4};
    vector<int> fieldcol = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int r = 5;
    int c = 10;
    vector<int> fieldrow = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int r = 10;
    int c = 10;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 2, 3, 4, 5, 6, 7, 8, 1};
    vector<int> fieldcol = {3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int r = 30;
    int c = 30;
    vector<int> fieldrow = {};
    vector<int> fieldcol = {};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {148830};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int r = 1;
    int c = 1;
    vector<int> fieldrow = {};
    vector<int> fieldcol = {};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int r = 1;
    int c = 1;
    vector<int> fieldrow = {1};
    vector<int> fieldcol = {1};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {};
    vector<int> fieldcol = {};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {337966};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {50, 1};
    vector<int> fieldcol = {50, 1};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int r = 35;
    int c = 37;
    vector<int> fieldrow = {3, 28, 28, 27, 27, 5, 15, 23, 21, 3, 8, 25, 34, 31, 33, 35, 13, 34};
    vector<int> fieldcol = {12, 34, 3, 9, 34, 3, 18, 17, 26, 5, 23, 14, 20, 7, 3, 20, 19, 23};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {830519, 709835, 755976, 219563, 868547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 292146, 584292, 804054, 879048, 450457, 586612, 980113, 112114, 99354, 403390, 87479, 473344, 207211, 729737, 924463, 677898, 503550, 897128, 117307, 443166, 23229, 175827, 125077, 490071, 92800, 397677, 944704, 534325, 793382, 959465, 552363, 967904, 952882, 915124, 644670, 9135, 143347, 296728, 993134, 50620, 911128, 583747, 376372, 382743, 916916, 99754, 771587, 181339, 799228};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int r = 3;
    int c = 3;
    vector<int> fieldrow = {};
    vector<int> fieldcol = {};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {46, 9, 24, 20, 42, 47, 16, 1, 5, 1, 22, 20, 22, 27, 8, 26, 27, 22, 2, 43, 1, 19, 46, 23, 34, 28, 14, 26, 44, 47, 45, 24, 23, 7, 20, 4, 12, 50, 39, 29, 47, 47, 11, 50, 16, 33, 26, 38, 36, 46};
    vector<int> fieldcol = {16, 2, 12, 36, 5, 45, 13, 1, 12, 8, 48, 3, 23, 7, 6, 30, 50, 31, 29, 13, 29, 47, 20, 33, 31, 38, 19, 26, 41, 34, 47, 40, 5, 7, 24, 41, 10, 31, 47, 22, 17, 16, 35, 50, 7, 42, 29, 16, 23, 38};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 522192, 463544, 984180, 622678, 570327, 768380, 678656, 547090, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int r = 50;
    int c = 49;
    vector<int> fieldrow = {21, 21, 3, 5, 1, 1, 35, 3, 5, 13, 5, 23, 25, 17, 5, 32, 5, 43, 13, 12, 34, 23, 4, 23, 44, 23, 1, 12, 3, 12, 3, 12, 3, 12, 3, 12, 4, 2, 1, 4, 23, 4, 8, 18, 19, 39, 36, 49, 49, 22};
    vector<int> fieldcol = {8, 35, 43, 5, 1, 4, 45, 3, 24, 6, 11, 14, 29, 5, 12, 43, 31, 43, 5, 21, 34, 1, 2, 43, 5, 12, 33, 5, 31, 9, 5, 1, 4, 8, 21, 36, 6, 43, 7, 5, 48, 47, 8, 44, 49, 34, 25, 1, 49, 22};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 851243, 221907, 560734, 395039, 234067, 340542, 201791, 286731, 671574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int r = 1;
    int c = 1;
    vector<int> fieldrow = {1};
    vector<int> fieldcol = {1};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int r = 4;
    int c = 4;
    vector<int> fieldrow = {1, 4, 2};
    vector<int> fieldcol = {1, 4, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 8, 0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 292146, 584292, 804054, 879048, 450457, 586612, 980113, 112114, 99354, 403390, 87479, 473344, 207211, 729737, 924463, 677898, 503550, 897128, 117307, 443166, 23229, 175827, 125077, 490071, 92800, 397677, 944704, 534325, 793382, 959465, 552363, 967904, 952882, 915124, 644670, 9135, 143347, 296728, 993134, 50620, 911128, 583747, 376372, 382743, 916916, 99754, 771587, 181339, 799228};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int r = 2;
    int c = 2;
    vector<int> fieldrow = {2};
    vector<int> fieldcol = {2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 49};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 146073, 438219, 694173, 841551, 164749, 18531, 283359, 46110, 105734, 251372, 745438, 780415, 840281, 468474, 827100, 301177, 590724, 700339, 7214, 780240, 733201, 99528, 150452, 307574, 791439, 745242, 171187, 239511, 163850, 376420, 755914, 260130, 960393, 934003, 779897, 826906, 76241, 720041, 644931, 521877, 480874, 247434, 980063, 879561, 149826, 508335, 935674, 476463, 990287, 399614};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 730481, 676106, 625654, 953957, 41023, 845862, 494543, 163371, 190873, 603950, 429619, 418989, 870920, 242268, 906627, 459584, 379678, 134582, 470778, 285155, 587033, 180928, 358150, 475658, 829458, 304790, 926202, 532498, 26622, 604795, 733004, 343360, 274427, 820787, 417455, 947662, 307864, 181540, 331296, 502947, 564745, 576810, 614143, 147822, 498360, 716549, 423975, 585813, 599421};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int r = 5;
    int c = 5;
    vector<int> fieldrow = {2, 3, 4, 1};
    vector<int> fieldcol = {2, 3, 4, 1};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 50, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 36, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    vector<int> fieldcol = {1, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 26, 24, 22, 20, 18, 16, 14, 12, 10, 8, 6, 4, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 655172, 27281, 512393, 123531, 747409, 630529, 966376, 242339, 63041, 891715, 313816, 295447, 109644, 256248, 141233, 823447, 383116, 767117, 751805, 191922, 65258, 388189, 610300, 994005, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int r = 5;
    int c = 5;
    vector<int> fieldrow = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5};
    vector<int> fieldcol = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int r = 10;
    int c = 10;
    vector<int> fieldrow = {1};
    vector<int> fieldcol = {1};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 48620};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int r = 50;
    int c = 50;
    vector<int> fieldrow = {1, 3, 4, 5, 34, 45, 13, 32, 43, 42, 34, 50, 33, 45, 13, 14, 15, 16, 17, 12, 23, 24, 25, 26, 27, 34, 35, 35, 36, 47, 5, 4, 3, 2, 1, 47, 5, 22, 11, 12, 12, 13, 14, 15, 16, 17, 27, 45, 6, 43};
    vector<int> fieldcol = {45, 13, 32, 43, 42, 34, 50, 11, 12, 13, 14, 15, 16, 17, 12, 23, 24, 25, 26, 27, 34, 35, 35, 36, 47, 5, 4, 3, 2, 1, 47, 5, 22, 11, 12, 12, 13, 14, 15, 16, 17, 27, 45, 6, 23, 1, 3, 4, 5, 34};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {732757, 590083, 242579, 535397, 432745, 321379, 369330, 474832, 564823, 305813, 194703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int r = 3;
    int c = 3;
    vector<int> fieldrow = {1, 2};
    vector<int> fieldcol = {1, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int r = 3;
    int c = 3;
    vector<int> fieldrow = {3, 2};
    vector<int> fieldcol = {3, 2};
    CountPaths* pObj = new CountPaths();
    clock_t start = clock();
    vector<int> result = pObj->difPaths(r, c, fieldrow, fieldcol);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22700358&rd=12170&pm=8158
********************************************************************************
#include <iostream> 
#include <cstdlib> 
#include <cmath> 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <sstream> 
using namespace std; 
 
#define pe(x)  cout<<x<<endl; 
#define p(x)    cout<<x<<" "; 
#define lm(n,x) (n<<x) 
#define rm(n,x)    (n>>x) 
#define two(x)  (1<<x) 
#define sqr(x)  ((x)*(x)) 
 
int dp[53][53][53][53]; 
 
class CountPaths{ 
    public:   
        vector <int> difPaths(int r, int c, vector <int> px, vector <int> py){ 
            int m=px.size(),ind[100][100],mod=1000007; 
            memset(ind,0xff,sizeof(ind)); 
            for (int i=1;i<=m;i++)   ind[px[i-1]][py[i-1]]=i; 
            memset(dp,0,sizeof(0)); 
            dp[1][1][(ind[1][1]!=-1)][ind[1][1]==-1?0:ind[1][1]]=1; 
            for (int i=1;i<=r;i++) 
                for (int j=1;j<=c;j++) 
                    for (int t=0;t<=m;t++) 
                        for (int pred=0;pred<=m;pred++) 
                            if (dp[i][j][t][pred]){ 
                               if (i+1<=r) { 
                                    int x=i+1,y=j; 
                                    if (ind[x][y]==-1){ 
                                        dp[x][y][t][pred]=(dp[x][y][t][pred]+dp[i][j][t][pred])%mod; 
                                    } 
                                    if (ind[x][y]!=-1&&ind[x][y]>pred){ 
                                        dp[x][y][t+1][ind[x][y]]=(dp[x][y][t+1][ind[x][y]]+dp[i][j][t][pred])%mod; 
                                    } 
                                } 
                                if (j+1<=c){ 
                                    int x=i,y=j+1; 
                                    if (ind[x][y]==-1){ 
                                        dp[x][y][t][pred]=(dp[x][y][t][pred]+dp[i][j][t][pred])%mod; 
                                    } 
                                    if (ind[x][y]!=-1&&ind[x][y]>pred){ 
                                        dp[x][y][t+1][ind[x][y]]=(dp[x][y][t+1][ind[x][y]]+dp[i][j][t][pred])%mod; 
                                    } 
                                } 
                            } 
            vector<int> ans; 
            for (int i=0;i<=m;i++){ 
                int tmp=0; 
                for (int j=0;j<=m;j++)  tmp=(tmp+dp[r][c][i][j])%mod; 
                ans.push_back(tmp); 
            } 
            return ans; 
        } 
};

********************************************************************************
*******************************************************************************/