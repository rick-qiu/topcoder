/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10901
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

class TheMoviesLevelTwoDivTwo {
public:
    vector<int> find(vector<int> length, vector<int> scary);
};

vector<int> TheMoviesLevelTwoDivTwo::find(vector<int> length, vector<int> scary) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> length = {100, 50};
    vector<int> scary = {1, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> length = {100, 50};
    vector<int> scary = {1, 49};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> length = {100, 100, 100, 100};
    vector<int> scary = {77, 76, 75, 74};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> length = {100};
    vector<int> scary = {99};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
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
    vector<int> length = {18, 18, 8};
    vector<int> scary = {5, 11, 6};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> length = {64};
    vector<int> scary = {55};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> length = {80, 30};
    vector<int> scary = {70, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> length = {27, 126, 2, 8, 38, 174, 53};
    vector<int> scary = {4, 119, 1, 3, 34, 113, 15};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 4, 6, 5};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> length = {185, 53, 28, 92, 70};
    vector<int> scary = {96, 17, 4, 6, 34};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> length = {8, 74, 12, 130};
    vector<int> scary = {3, 60, 4, 24};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> length = {42, 53, 180, 154};
    vector<int> scary = {37, 33, 1, 133};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> length = {32, 47, 164, 66};
    vector<int> scary = {17, 25, 35, 31};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> length = {11, 196, 137, 152, 12};
    vector<int> scary = {2, 51, 46, 31, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4, 1, 3};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> length = {187, 18, 192, 144};
    vector<int> scary = {67, 10, 161, 52};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 0, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> length = {2, 149, 118, 114};
    vector<int> scary = {1, 1, 64, 69};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> length = {2, 90, 28, 154, 112};
    vector<int> scary = {1, 10, 17, 54, 60};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> length = {120, 184, 2, 38, 10};
    vector<int> scary = {1, 79, 1, 20, 5};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> length = {130, 54, 98, 79, 50};
    vector<int> scary = {118, 18, 6, 37, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 0, 3};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> length = {177, 90, 48, 132};
    vector<int> scary = {81, 54, 6, 107};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 0, 3};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> length = {58, 102, 26, 68, 71};
    vector<int> scary = {45, 49, 2, 60, 35};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 1, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> length = {282, 250, 330, 82, 240, 372, 33};
    vector<int> scary = {263, 108, 7, 29, 30, 180, 19};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 0, 1, 2, 4, 5};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> length = {106, 202, 124, 387, 197, 160, 244};
    vector<int> scary = {85, 100, 99, 178, 53, 100, 30};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> length = {79, 137, 357, 163, 98, 354, 310};
    vector<int> scary = {27, 100, 203, 28, 97, 153, 277};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> length = {303, 251, 307, 367, 265, 68, 300};
    vector<int> scary = {257, 36, 106, 109, 9, 4, 93};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 0, 1, 2, 3, 4, 6};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> length = {228, 168, 6, 207, 255, 416, 81};
    vector<int> scary = {214, 140, 1, 179, 3, 96, 31};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 0, 1, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> length = {110, 198, 470, 168, 212, 132, 366};
    vector<int> scary = {99, 41, 316, 80, 65, 38, 100};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> length = {184, 128, 75, 231, 92, 432, 402};
    vector<int> scary = {38, 1, 37, 162, 50, 307, 332};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> length = {366, 404, 167, 441, 93, 367, 455};
    vector<int> scary = {129, 250, 21, 389, 73, 138, 121};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0, 1, 2, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> length = {432, 465, 210, 441, 35, 403, 32};
    vector<int> scary = {383, 268, 107, 265, 15, 112, 11};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 0, 1, 2, 3, 5};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> length = {409, 63, 453, 343, 160, 200, 143};
    vector<int> scary = {252, 45, 133, 321, 1, 109, 51};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> length = {52, 53, 56, 50, 54, 54, 56};
    vector<int> scary = {28, 1, 47, 31, 41, 21, 11};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> length = {52, 49, 48, 47, 55, 51, 47};
    vector<int> scary = {25, 46, 8, 4, 31, 29, 35};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> length = {47, 50, 50, 54, 55, 47, 47};
    vector<int> scary = {21, 38, 29, 41, 45, 15, 33};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> length = {51, 54, 55, 49, 57, 47, 48};
    vector<int> scary = {41, 37, 16, 13, 9, 34, 16};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> length = {53, 48, 51, 54, 47, 54, 49};
    vector<int> scary = {41, 40, 31, 5, 33, 29, 15};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> length = {62, 63, 66, 60, 64, 64, 66};
    vector<int> scary = {7, 23, 37, 25, 14, 19, 41};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 3, 5, 6};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> length = {62, 59, 58, 57, 65, 61, 57};
    vector<int> scary = {1, 16, 57, 40, 57, 49, 37};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 5, 6, 1, 0, 4};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> length = {57, 60, 60, 64, 65, 57, 57};
    vector<int> scary = {15, 55, 43, 1, 45, 17, 13};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 6, 3, 4};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> length = {61, 64, 65, 59, 67, 57, 58};
    vector<int> scary = {1, 47, 14, 45, 9, 46, 57};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 5, 2, 4, 1, 6};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> length = {63, 58, 61, 64, 57, 64, 59};
    vector<int> scary = {29, 34, 21, 46, 45, 3, 23};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 6, 5, 3, 4};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> length = {47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {2, 45, 13, 37, 1, 17, 3};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> length = {47, 47, 47, 47, 47, 47};
    vector<int> scary = {17, 45, 3, 2, 13, 37};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> length = {74, 74, 74, 74, 74, 74, 74};
    vector<int> scary = {71, 7, 7, 1, 21, 63, 14};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> length = {74, 74, 74, 74, 74, 74, 74};
    vector<int> scary = {38, 37, 68, 58, 18, 27, 13};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> length = {474, 474, 474, 474, 474, 474, 474};
    vector<int> scary = {382, 342, 256, 406, 439, 325, 396};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> length = {2, 2, 2, 2, 2, 2, 2};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> length = {49, 72, 64, 58, 84, 84, 75};
    vector<int> scary = {48, 71, 63, 57, 83, 83, 74};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> length = {100, 50};
    vector<int> scary = {1, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> length = {100};
    vector<int> scary = {99};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> length = {100, 100, 100, 100};
    vector<int> scary = {77, 76, 75, 74};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> length = {100, 100, 100, 100, 65};
    vector<int> scary = {78, 75, 74, 76, 20};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 0, 1, 3};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> length = {474, 5, 10, 2, 474, 2, 74};
    vector<int> scary = {73, 1, 6, 1, 60, 1, 73};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 5, 6, 0, 4};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> length = {250, 276, 280, 389};
    vector<int> scary = {123, 50, 10, 364};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> length = {51, 52, 45, 50, 53, 54, 44};
    vector<int> scary = {1, 2, 3, 4, 5, 6, 7};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> length = {46, 49, 66, 100};
    vector<int> scary = {45, 40, 64, 33};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> length = {100, 100};
    vector<int> scary = {99, 99};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> length = {474, 123, 125, 473};
    vector<int> scary = {87, 88, 89, 124};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> length = {121, 100};
    vector<int> scary = {77, 99};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> length = {2, 2};
    vector<int> scary = {1, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> length = {141, 121};
    vector<int> scary = {1, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> length = {100, 100, 102, 100};
    vector<int> scary = {77, 76, 75, 74};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> length = {100, 100, 100, 100, 233, 23, 34};
    vector<int> scary = {77, 76, 75, 74, 43, 22, 12};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 5, 0, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> length = {121, 100, 121};
    vector<int> scary = {77, 77, 77};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> length = {50, 75};
    vector<int> scary = {46, 74};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> length = {100, 100, 100, 100};
    vector<int> scary = {99, 99, 99, 99};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> length = {200, 200};
    vector<int> scary = {100, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> length = {10, 10, 200};
    vector<int> scary = {1, 1, 47};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> length = {100, 100, 100, 100};
    vector<int> scary = {73, 76, 75, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> length = {100, 100, 100};
    vector<int> scary = {99, 99, 99};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> length = {5, 5, 5, 5};
    vector<int> scary = {1, 3, 2, 4};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> length = {100, 80};
    vector<int> scary = {75, 1};
    TheMoviesLevelTwoDivTwo* pObj = new TheMoviesLevelTwoDivTwo();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22833392&rd=14152&pm=10901
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
 
class TheMoviesLevelTwoDivTwo {
public:
  vector <int> find(vector <int>, vector <int>);
};
 
vector<int> order;
 
vector <int> TheMoviesLevelTwoDivTwo::find(vector <int> length, vector <int> scary) {
  int n = length.size();
  order.clear();
  for (int i = 0; i < n; i++)
    order.push_back(i);
  int maxMov = -1;
  vector<int> res;
  do{
    int cnt = 0;
    int level = 74;
    for (int i = 0; i < n; i++){
      int ii = order[i];
      level -= scary[ii];
      if (level < 0) break;
      level += 47;
      level -= (length[ii] - scary[ii]);
      if (level < 0) break;
      cnt++;
    }
//    cout<<cnt<<endl;
    if (cnt > maxMov){ 
      res.clear();
      maxMov = cnt;
      for (int i = 0; i < n; i++)
        res.push_back(order[i]);
    }
  }while (next_permutation(order.begin(),order.end()));
  return res;  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/