/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10900
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

class TheMoviesLevelTwoDivOne {
public:
    vector<int> find(vector<int> length, vector<int> scary);
};

vector<int> TheMoviesLevelTwoDivOne::find(vector<int> length, vector<int> scary) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> length = {100, 50};
    vector<int> scary = {1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
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
    vector<int> length = {330, 82, 250, 240, 372, 282, 33, 235};
    vector<int> scary = {7, 29, 108, 30, 180, 263, 19, 217};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 0, 2, 3, 4, 5, 7};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> length = {88, 288, 49};
    vector<int> scary = {73, 208, 10};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> length = {211, 265, 65, 233, 89, 131, 123, 289, 120, 41};
    vector<int> scary = {162, 113, 1, 57, 14, 59, 67, 155, 58, 11};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 9, 0, 1, 3, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> length = {426, 6, 367, 251, 228, 416, 207, 255, 265, 470, 233, 303, 453, 168, 307, 300, 81, 420, 68};
    vector<int> scary = {303, 1, 109, 36, 214, 96, 179, 3, 9, 316, 206, 257, 156, 140, 106, 93, 31, 196, 4};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 16, 18, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 17};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> length = {132};
    vector<int> scary = {38};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> length = {402, 62, 256, 28, 94, 408, 96, 160, 73, 364, 159, 212, 300};
    vector<int> scary = {108, 59, 214, 21, 40, 239, 19, 29, 63, 91, 111, 73, 129};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 8, 4, 0, 2, 5, 6, 7, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> length = {404};
    vector<int> scary = {250};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> length = {296, 43, 50, 431, 123, 462, 292, 376, 387, 20};
    vector<int> scary = {113, 2, 47, 359, 30, 381, 198, 296, 95, 16};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 9, 4, 0, 3, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> length = {407, 355, 374, 371, 43, 100, 257, 148, 288, 162, 386, 397, 174, 368, 220, 266, 329};
    vector<int> scary = {386, 145, 68, 309, 1, 77, 65, 120, 191, 103, 361, 391, 62, 256, 195, 252, 265};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 0, 1, 2, 3, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> length = {431, 354, 467, 60};
    vector<int> scary = {115, 268, 394, 47};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> length = {95};
    vector<int> scary = {1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> length = {244};
    vector<int> scary = {30};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> length = {98, 44, 374, 150, 438};
    vector<int> scary = {7, 24, 39, 32, 194};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> length = {46, 53, 46, 51, 50, 44, 44, 47, 45, 53, 51, 53, 52, 48, 49, 49};
    vector<int> scary = {4, 37, 19, 15, 10, 35, 20, 37, 5, 15, 11, 14, 10, 16, 28, 31};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> length = {44, 50, 54, 45, 52, 44, 54, 50, 44, 46, 50, 52, 47, 50, 48, 54, 44, 47};
    vector<int> scary = {33, 36, 31, 29, 7, 38, 25, 28, 9, 18, 31, 49, 25, 18, 36, 7, 15, 30};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> length = {46, 45, 50, 53, 53, 48, 50, 48, 53, 45, 49, 50, 45, 53, 44, 45, 50};
    vector<int> scary = {31, 37, 19, 27, 29, 8, 8, 40, 26, 33, 1, 4, 18, 27, 15, 37, 35};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> length = {52, 44, 44, 44, 46, 48, 47, 48, 44, 44, 48, 53};
    vector<int> scary = {22, 13, 10, 34, 10, 44, 3, 16, 15, 10, 8, 27};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> length = {50, 46, 51, 44, 48, 44, 45, 54, 47, 44};
    vector<int> scary = {43, 36, 17, 41, 12, 7, 1, 9, 20, 19};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> length = {55, 55, 48, 49, 47, 53, 47, 50, 47, 53, 49, 47, 53, 51, 51, 47, 52, 48, 47, 49};
    vector<int> scary = {7, 18, 37, 7, 18, 51, 35, 40, 25, 37, 37, 5, 9, 18, 19, 31, 28, 43, 13, 21};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 10, 11, 15, 17, 9, 12, 16, 13, 18, 19, 14};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> length = {47, 55, 55, 56, 51, 50, 47, 55, 52, 53, 51, 49, 47, 47, 49, 47, 51, 53, 47, 49};
    vector<int> scary = {35, 25, 19, 12, 1, 41, 25, 7, 12, 30, 21, 43, 26, 1, 43, 15, 3, 3, 40, 27};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 6, 11, 12, 13, 14, 15, 18, 5, 8, 9, 19, 10, 7, 16, 17};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> length = {49, 53, 56, 51, 53, 47, 47, 49, 55, 55, 48, 49, 52, 47, 55, 55, 47, 47, 51, 55};
    vector<int> scary = {14, 27, 33, 43, 33, 37, 29, 15, 28, 7, 16, 44, 40, 1, 35, 37, 13, 44, 47, 25};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 6, 7, 10, 11, 13, 16, 17, 18, 12, 4, 8, 19, 9, 14, 15};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> length = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
    vector<int> scary = {35, 34, 5, 49, 34, 11, 29, 44, 23, 45, 15, 7, 23, 18, 19, 11, 38, 41, 7, 11};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 4, 5, 6, 7, 8, 10, 16, 11, 12, 13, 14, 15, 19, 18, 2, 9, 17};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> length = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
    vector<int> scary = {17, 7, 33, 12, 1, 32, 41, 37, 32, 36, 21, 11, 36, 43, 41, 35, 3, 41, 38, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5, 6, 7, 9, 12, 13, 14, 15, 8, 1, 3, 10, 4, 11, 16, 19, 17, 18};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> length = {47, 49, 53, 51, 53, 53, 47, 47, 50, 47, 48, 47, 49, 52, 54, 50, 50, 53, 47, 51};
    vector<int> scary = {46, 1, 52, 50, 1, 52, 46, 46, 49, 46, 1, 46, 48, 1, 53, 1, 1, 52, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, 17, 1, 4, 13, 15, 16, 18, 19, 14};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> length = {53, 48, 50, 50, 50, 53, 54, 50, 47, 53, 55, 55, 52, 54, 50, 55, 47, 51, 53, 47};
    vector<int> scary = {52, 1, 49, 1, 1, 52, 53, 1, 1, 52, 54, 1, 51, 53, 1, 54, 1, 50, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 8, 12, 16, 17, 4, 7, 11, 14, 18, 19, 6, 9, 10, 13, 15};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> length = {474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 474};
    vector<int> scary = {163, 26, 450, 223, 447, 439, 439, 78, 130, 406, 325, 75, 1, 75, 342, 269, 382, 396, 256, 236};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> length = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> length = {88, 87, 65, 34, 38, 5, 21, 58, 28, 21, 81, 75, 31, 80, 11, 54, 9, 79, 55, 72};
    vector<int> scary = {80, 85, 11, 29, 15, 3, 17, 21, 1, 17, 66, 68, 15, 67, 9, 28, 6, 35, 20, 67};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 0, 6, 1, 7, 8, 9, 10, 12, 11, 14, 13, 15, 16, 18, 19, 17};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> length = {100, 100, 100, 100};
    vector<int> scary = {77, 76, 75, 74};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> length = {115, 16, 456, 389, 161, 26, 227, 224, 445, 414, 88, 263, 371, 61, 49, 198, 330, 433, 39, 243};
    vector<int> scary = {71, 10, 179, 123, 87, 25, 113, 218, 420, 117, 17, 212, 73, 23, 44, 101, 95, 406, 14, 24};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 5, 13, 14, 18, 10, 2, 3, 4, 6, 7, 8, 9, 11, 12, 15, 16, 17, 19};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> length = {139, 22, 30, 41, 34, 56, 64, 100, 31, 48, 78, 19, 87, 102, 141, 46, 104, 3, 110, 16};
    vector<int> scary = {33, 4, 22, 37, 12, 19, 17, 70, 9, 32, 67, 4, 69, 6, 65, 1, 43, 2, 73, 10};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 11, 2, 3, 4, 5, 6, 8, 9, 15, 17, 10, 12, 19, 13, 7, 14, 16, 18};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> length = {217, 428, 96, 82, 82, 42, 83, 6, 72, 54, 83, 78, 6, 81, 55, 70, 85, 48, 26, 36};
    vector<int> scary = {21, 384, 77, 19, 5, 17, 73, 1, 17, 4, 31, 34, 2, 69, 38, 57, 81, 36, 19, 11};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 7, 5, 8, 9, 12, 10, 18, 14, 17, 19, 11, 0, 1, 2, 6, 13, 15, 16};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> length = {100, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38};
    vector<int> scary = {74, 10, 20, 30, 40, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5, 10, 11, 12, 9, 13, 8, 14, 7, 15, 6, 16, 17, 18, 19, 4, 3, 2};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> length = {46, 220, 21, 63, 220, 51, 17, 113, 57, 133, 94, 70, 120, 218, 138, 28, 192, 13, 152, 59};
    vector<int> scary = {37, 151, 3, 30, 74, 33, 14, 13, 7, 96, 54, 61, 16, 38, 89, 14, 74, 8, 124, 35};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 5, 6, 7, 15, 11, 17, 19, 10, 8, 1, 4, 9, 12, 13, 14, 16, 18};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> length = {12, 25, 41, 19, 77, 20, 35, 57, 71, 5, 71, 4, 79, 101, 31, 76, 4, 89, 29, 73};
    vector<int> scary = {2, 21, 21, 12, 61, 2, 24, 21, 8, 2, 51, 3, 19, 61, 20, 35, 2, 69, 4, 67};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> length = {300, 200, 100, 400};
    vector<int> scary = {299, 1, 50, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1, 3};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> length = {12, 43, 65, 103, 76, 99, 22, 45, 67, 89, 23, 54, 11, 11, 11, 42, 43, 56, 76, 34};
    vector<int> scary = {10, 11, 52, 40, 22, 6, 9, 40, 7, 15, 2, 40, 6, 8, 4, 10, 20, 7, 8, 24};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 6, 8, 10, 12, 5, 13, 7, 9, 14, 11, 15, 16, 17, 19, 18};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> length = {147, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> length = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> length = {138, 47, 83, 182, 4, 120, 161, 17, 163, 188, 102, 120, 32, 187, 11, 87, 179, 150, 118, 73};
    vector<int> scary = {48, 35, 39, 168, 2, 33, 160, 1, 15, 117, 4, 13, 2, 3, 7, 17, 47, 149, 26, 42};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 5, 7, 12, 14, 15, 19, 0, 3, 6, 8, 9, 10, 11, 13, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> length = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> scary = {32, 49, 1, 23, 21, 32, 21, 23, 19, 45, 9, 13, 27, 36, 44, 2, 32, 22, 21, 49};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 19, 9, 14, 8, 13, 10, 16, 12, 17, 18, 11, 15};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> length = {100, 50, 75, 80, 2, 150, 150, 300, 200, 150, 48, 73, 72, 70, 70, 121, 122, 407, 408, 409};
    vector<int> scary = {49, 49, 50, 79, 1, 149, 139, 126, 100, 12, 47, 72, 71, 65, 48, 74, 74, 308, 309, 300};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3, 10, 0, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> length = {77, 66, 77, 66, 77, 66, 77, 66, 77, 66, 77, 66, 77, 66, 77, 66, 77, 66, 77, 66};
    vector<int> scary = {55, 44, 55, 44, 55, 44, 55, 44, 55, 44, 55, 44, 55, 44, 55, 44, 55, 44, 55, 44};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> length = {474, 474, 474, 474, 474, 474, 474, 474, 474, 47, 47, 47, 47, 343, 234, 434, 64, 123, 32, 34};
    vector<int> scary = {23, 11, 11, 23, 11, 11, 31, 44, 33, 23, 11, 11, 23, 11, 11, 12, 21, 32, 12, 23};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 10, 11, 12, 16, 18, 19, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 13, 14, 15};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> length = {100, 130, 130, 474, 85, 65, 75, 140, 90, 110, 85, 75, 95, 90, 85, 65, 75, 85, 90, 110};
    vector<int> scary = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 11, 0, 1, 2, 3, 4, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> length = {121, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> length = {130, 92, 61, 78, 100, 70, 76, 61, 79, 135, 83, 76, 54, 118, 54, 36, 68, 53, 35, 43};
    vector<int> scary = {22, 71, 20, 48, 8, 24, 25, 41, 49, 71, 42, 43, 15, 43, 30, 24, 47, 42, 4, 16};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 12, 14, 18, 15, 17, 19, 7, 6, 0, 1, 3, 4, 8, 9, 10, 11, 13, 16};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> length = {4, 2, 2, 3, 4, 54, 23, 3, 54, 23, 3, 5, 23, 2, 3, 3, 5, 32, 34, 5};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> length = {80, 70, 5};
    vector<int> scary = {79, 69, 3};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 0};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> length = {300, 6, 5, 11, 18, 13, 21, 16, 4, 6, 9, 21, 13, 17, 10, 4, 7, 18, 6, 9};
    vector<int> scary = {200, 1, 3, 10, 16, 4, 6, 11, 3, 3, 3, 19, 2, 11, 9, 3, 4, 9, 1, 4};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 0, 8, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> length = {34, 44, 45, 42, 62, 51, 67, 62, 30, 49, 54, 67, 35, 49, 32, 46, 50, 60, 66, 77};
    vector<int> scary = {15, 24, 33, 40, 21, 38, 6, 4, 4, 12, 43, 44, 21, 10, 25, 36, 14, 43, 17, 46};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> length = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    vector<int> scary = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> length = {293, 151, 462, 157, 139, 240, 279, 256, 222, 255, 298, 74, 46, 240, 384, 404, 12, 392, 328, 293};
    vector<int> scary = {204, 102, 80, 150, 81, 214, 232, 6, 9, 219, 174, 5, 16, 156, 55, 234, 6, 63, 104, 247};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 12, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 14, 15, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> length = {100, 100, 100, 100, 100, 100, 50, 50, 100, 100, 100, 100, 100, 100, 100, 50, 50, 100, 174, 99};
    vector<int> scary = {77, 76, 75, 74, 99, 1, 49, 1, 1, 77, 76, 75, 74, 99, 1, 49, 1, 1, 100, 50};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 15, 5, 16, 0, 1, 2, 3, 4, 8, 9, 10, 11, 12, 13, 14, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> length = {200, 4, 4, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> length = {43, 22, 187, 14, 251, 117, 128, 34, 3, 343, 31, 240, 106, 274, 30, 20, 159, 119, 99, 235};
    vector<int> scary = {10, 10, 183, 11, 43, 87, 23, 6, 1, 60, 18, 217, 72, 73, 14, 1, 72, 104, 82, 67};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 7, 8, 6, 10, 14, 12, 15, 2, 4, 9, 11, 13, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> length = {103, 123, 345, 245, 133, 234, 333, 341, 234, 296, 377, 378, 334, 237, 367, 246, 249, 111, 123, 178};
    vector<int> scary = {99, 98, 301, 206, 99, 94, 24, 48, 52, 38, 88, 98, 94, 24, 14, 36, 39, 34, 27, 11};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 19};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> length = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 96};
    vector<int> scary = {24, 23, 24, 23, 24, 23, 24, 23, 23, 24, 23, 24, 23, 24, 23, 24, 23, 24, 23, 74};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> length = {400, 400, 40, 40, 40, 40, 400, 40, 40, 40, 40, 40, 400, 40, 40, 40, 40, 40, 40, 40};
    vector<int> scary = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 0, 1, 6, 12};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> length = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> length = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> scary = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> length = {48, 48, 30, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 100, 48, 48, 48};
    vector<int> scary = {3, 3, 16, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 40, 3, 3, 3, 3};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> length = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> length = {120, 47, 47, 47, 47, 40};
    vector<int> scary = {74, 1, 1, 2, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4, 5, 3};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> length = {100, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14};
    vector<int> scary = {80, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> length = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> scary = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> length = {34, 186, 125, 131, 118, 173, 201, 116, 144, 66, 29, 41, 193, 77, 70, 4, 167, 98, 106, 109};
    vector<int> scary = {21, 126, 10, 130, 1, 52, 166, 16, 11, 33, 8, 19, 158, 6, 27, 3, 58, 48, 21, 10};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 10, 11, 9, 15, 13, 14, 1, 3, 4, 5, 6, 7, 8, 12, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> length = {69, 66, 75, 44, 76, 59, 74, 56, 91, 52, 50, 62, 42, 70, 37, 37, 31, 72, 94, 44};
    vector<int> scary = {2, 3, 7, 23, 2, 24, 6, 6, 26, 11, 25, 7, 6, 23, 24, 10, 12, 25, 4, 24};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 2, 12, 15, 7, 16, 9, 14, 10, 19, 5, 11, 4, 6, 8, 13, 17, 18};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> length = {9, 57, 98, 74, 96, 50, 43, 33, 80, 85, 70, 10, 91, 51, 63, 5, 80, 12, 63, 84};
    vector<int> scary = {4, 33, 37, 72, 42, 21, 34, 9, 64, 62, 52, 6, 75, 37, 28, 3, 64, 5, 30, 43};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 6, 4, 15, 7, 10, 11, 3, 13, 14, 17, 18, 19, 8, 9, 12, 16};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> length = {100, 100, 50, 101, 50, 50, 50, 100, 50, 50, 50, 87, 50, 100, 50, 50, 100, 50, 50, 100};
    vector<int> scary = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 6, 8, 9, 10, 12, 14, 11, 0, 1, 3, 7, 13, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> length = {100, 50, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> scary = {1, 49, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> length = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    vector<int> scary = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> length = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 300, 400};
    vector<int> scary = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 29, 100};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> length = {59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 11, 12, 13, 14, 9, 15, 10, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> length = {77, 66};
    vector<int> scary = {57, 10};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> length = {120, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {74, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> length = {59, 59, 59, 59, 59, 59, 59, 59, 59, 2, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {58, 58, 58, 58, 58, 58, 58, 58, 58, 1, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 9, 2, 3, 4, 5, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> length = {101, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> scary = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 74};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> length = {300, 300, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 1};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> length = {45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45, 45};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 30};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> length = {50, 474, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<int> scary = {1, 473, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 1};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> length = {43, 419, 161, 377, 171, 51, 80, 385, 364, 241, 7, 122, 8, 204, 463, 18, 147, 69, 79, 213};
    vector<int> scary = {13, 359, 39, 154, 122, 41, 62, 237, 63, 134, 2, 11, 4, 115, 18, 5, 90, 11, 51, 97};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 6, 10, 11, 12, 15, 17, 18, 1, 2, 3, 4, 7, 8, 9, 13, 14, 16, 19};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> length = {3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 3, 4, 5, 6, 7, 3, 4, 5, 6, 7};
    vector<int> scary = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> length = {53, 59, 46, 43, 51, 59, 54, 48, 53, 47, 56, 55, 46, 56, 43, 48, 50, 48, 53, 54};
    vector<int> scary = {29, 36, 31, 21, 39, 18, 38, 14, 30, 13, 11, 11, 17, 19, 3, 5, 21, 3, 30, 38};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 6, 7, 8, 9, 10, 12, 14, 15, 19, 17, 18, 16, 13, 11, 5};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> length = {100, 134, 112, 149, 135, 129, 121, 154, 149, 145, 110, 152, 143, 131, 118, 101, 105, 122, 109, 110};
    vector<int> scary = {80, 74, 71, 70, 70, 74, 75, 76, 76, 76, 72, 77, 75, 74, 71, 76, 78, 78, 75, 73};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> length = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> scary = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> length = {12, 34, 56, 100, 400, 13, 400, 450, 200, 10, 12, 34, 56, 100, 400, 13, 400, 450, 200, 10};
    vector<int> scary = {10, 12, 40, 50, 1, 2, 300, 20, 10, 5, 10, 12, 40, 50, 1, 2, 300, 20, 10, 5};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 5, 9, 10, 8, 11, 15, 12, 19, 13, 4, 6, 7, 14, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> length = {81, 128, 82, 137, 8, 70, 94, 78, 103, 6, 12, 16};
    vector<int> scary = {21, 104, 37, 121, 6, 61, 27, 8, 31, 5, 11, 8};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 9, 4, 5, 6, 10, 7, 11, 1, 3, 8};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> length = {100, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<int> scary = {90, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> length = {100, 20, 30, 10, 100, 100, 100, 30, 20, 100, 100, 20, 20, 30, 100, 100, 20, 100, 100, 100};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 10, 10, 10, 99, 99};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 7, 5, 8, 11, 6, 12, 13, 16, 9, 10, 14, 15, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> length = {54, 56, 55, 56, 55, 55, 54, 54, 54, 56, 55, 55, 55, 56, 54, 55, 54, 54, 55, 54};
    vector<int> scary = {53, 1, 54, 13, 54, 54, 53, 53, 53, 1, 33, 33, 33, 1, 53, 4, 53, 53, 4, 51};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 10, 11, 9, 15, 18, 4, 5, 6, 7, 8, 12, 13, 14, 16, 17, 19};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> length = {200, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> length = {100, 122};
    vector<int> scary = {99, 74};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> length = {47, 173, 40, 106, 275, 130, 84, 264, 268, 170, 11, 251, 187, 33, 67, 197, 301, 248, 33, 42};
    vector<int> scary = {23, 86, 20, 53, 137, 65, 42, 132, 134, 85, 5, 125, 93, 16, 33, 98, 150, 124, 16, 21};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 10, 6, 13, 18, 14, 19, 1, 4, 5, 7, 8, 9, 11, 12, 15, 16, 17};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> length = {400, 115, 115, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47};
    vector<int> scary = {1, 1, 1, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5, 6, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 0, 2};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> length = {474, 100, 100};
    vector<int> scary = {47, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> length = {47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 80, 76, 2};
    vector<int> scary = {46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 46, 74, 75, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 19, 18};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> length = {100, 2, 2};
    vector<int> scary = {89, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> length = {44, 87, 92, 49, 100, 59, 80, 83, 32, 73, 48, 81, 23, 76, 72, 37, 42, 23, 90, 49};
    vector<int> scary = {5, 3, 11, 4, 8, 14, 20, 4, 4, 5, 11, 11, 12, 13, 7, 20, 1, 4, 13, 8};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 5, 8, 6, 16, 17, 10, 12, 7, 15, 19, 9, 2, 4, 11, 13, 14, 18};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> length = {103, 123, 345, 245, 133, 101, 30, 341, 234, 100, 377, 378, 334, 237, 67, 46, 49, 111, 123, 178};
    vector<int> scary = {99, 98, 301, 206, 99, 94, 24, 48, 52, 38, 88, 98, 94, 24, 14, 36, 39, 34, 27, 11};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 9, 15, 16, 14, 0, 1, 2, 3, 4, 5, 7, 8, 10, 11, 12, 13, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> length = {61, 54, 89, 98, 82, 25, 101, 81, 115, 47, 111, 22, 112, 41, 38, 67, 91, 89, 87, 55};
    vector<int> scary = {48, 1, 61, 65, 3, 18, 28, 12, 87, 9, 85, 7, 62, 37, 27, 13, 19, 25, 70, 13};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 5, 9, 11, 7, 14, 13, 15, 19, 2, 3, 6, 8, 10, 12, 16, 17, 18};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> length = {131, 130, 129, 99, 98, 97, 96, 95, 10, 9, 100, 101, 102, 103, 104, 105, 106, 11, 12, 13};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8, 4, 9, 17, 5, 18, 6, 19, 7, 0, 1, 2, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> length = {2, 4, 8, 16, 32, 64, 7, 19, 51, 77, 32, 43, 52, 12, 44, 9, 13, 27, 41, 35};
    vector<int> scary = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> length = {70, 70, 2};
    vector<int> scary = {1, 52, 1};
    TheMoviesLevelTwoDivOne* pObj = new TheMoviesLevelTwoDivOne();
    clock_t start = clock();
    vector<int> result = pObj->find(length, scary);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20036294&rd=14152&pm=10900
********************************************************************************
#include <sstream> 
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h> 
#include <stdio.h> 
#include <numeric>
#include <math.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;
 
int n;
vector < int > a , b;
int dp[1 << 20] , next[1 << 20];
int used[32];
 
int go ( int mask , int lvl ) {
  int &ans = dp[mask];
  if ( ans != -1 ) return ans;
  ans = 0;
  
  int i;
  
  for (i = 0; i < n; i++)
    if ( !(mask & (1 << i)) ) {
      if ( lvl - b[i] >= 0 && (lvl - b[i] + 47 - (a[i] - b[i])) >= 0 ) {
        if ( go ( mask | (1 << i) , lvl - a[i] + 47 ) + 1 > ans ) {
          ans = go ( mask | (1 << i) , lvl - a[i] + 47 ) + 1;
          next[mask] = i;
        }
      }
    }
    
  return ans;
}
 
vector <int> solve ( vector <int> length, vector <int> scary ) {
  a = length;
  b = scary;
  
  n = (int)a.size();
  vector < int > ans;
  int i;
  
  memset ( dp , -1 , sizeof dp );
  memset ( next , -1 , sizeof next );
 
  go ( 0 , 74 );
  
  for (i = 0; next[i] != -1; i |= 1 << next[i]) {
    ans.push_back ( next[i] );
    used[ next[i] ] = 1;
  }
  
  for (i = 0; i < n; i++)
    if ( !used[i] )
      ans.push_back ( i );
    
  return ans;
}
 
class TheMoviesLevelTwoDivOne {
  public:
  vector <int> find(vector <int> length, vector <int> scary) {
    return solve ( length, scary );
  }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/