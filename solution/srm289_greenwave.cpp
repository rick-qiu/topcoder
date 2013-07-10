/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5920
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

class GreenWave {
public:
    vector<int> getFirstRed(int L, vector<int> speeds, vector<int> lights);
};

vector<int> GreenWave::getFirstRed(int L, vector<int> speeds, vector<int> lights) {
    vector<int> ret;
    return ret;
}


int test0() {
    int L = 10;
    vector<int> speeds = {1};
    vector<int> lights = {0};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int L = 50;
    vector<int> speeds = {1};
    vector<int> lights = {4, 5, 6, 7, 8};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int L = 300;
    vector<int> speeds = {2, 1};
    vector<int> lights = {16};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int L = 300;
    vector<int> speeds = {1, 2};
    vector<int> lights = {16};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int L = 60;
    vector<int> speeds = {12, 15, 20};
    vector<int> lights = {58};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int L = 340;
    vector<int> speeds = {16, 15, 29, 7, 9, 15, 2};
    vector<int> lights = {125, 156, 274, 309, 211};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int L = 500;
    vector<int> speeds = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> lights = {0, 1, 2, 3, 4};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int L = 95;
    vector<int> speeds = {18, 28, 24, 26};
    vector<int> lights = {62, 81, 19};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int L = 483;
    vector<int> speeds = {24, 16, 17, 25, 15, 13, 9, 7, 21, 22};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int L = 264;
    vector<int> speeds = {15};
    vector<int> lights = {129, 108, 261, 127};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 4, 4, 5};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int L = 247;
    vector<int> speeds = {14, 12, 19, 4, 6};
    vector<int> lights = {214, 125, 228, 42};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int L = 212;
    vector<int> speeds = {24, 4, 8, 29, 13, 2};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int L = 233;
    vector<int> speeds = {};
    vector<int> lights = {51, 94, 83, 220, 150};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int L = 378;
    vector<int> speeds = {6, 15};
    vector<int> lights = {259, 322, 92};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int L = 186;
    vector<int> speeds = {29, 19, 1, 14, 20, 28, 26, 28};
    vector<int> lights = {164, 105, 53, 97, 103};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int L = 381;
    vector<int> speeds = {};
    vector<int> lights = {302};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int L = 214;
    vector<int> speeds = {3, 22};
    vector<int> lights = {92, 61, 78, 125, 140};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 1, 3};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int L = 464;
    vector<int> speeds = {12, 26, 16};
    vector<int> lights = {72, 429, 236, 416};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 1, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int L = 110;
    vector<int> speeds = {11, 26};
    vector<int> lights = {95, 15, 90, 82};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 5, 4};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int L = 310;
    vector<int> speeds = {2, 7, 10, 15, 20};
    vector<int> lights = {154, 63};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int L = 144;
    vector<int> speeds = {19, 10, 3, 29};
    vector<int> lights = {42, 63, 46, 110};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 4, 5};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int L = 489;
    vector<int> speeds = {};
    vector<int> lights = {355, 446, 187, 395, 168};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int L = 142;
    vector<int> speeds = {25, 30};
    vector<int> lights = {13, 74, 88};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int L = 347;
    vector<int> speeds = {9, 30, 1, 28, 7, 19, 24};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int L = 488;
    vector<int> speeds = {20, 30, 2};
    vector<int> lights = {254, 86, 222, 354};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int L = 410;
    vector<int> speeds = {29, 19, 13};
    vector<int> lights = {383, 148, 251, 339, 99};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 5, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int L = 183;
    vector<int> speeds = {6, 13, 4, 27, 11, 16, 13, 18};
    vector<int> lights = {95};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int L = 166;
    vector<int> speeds = {26, 16, 3, 18, 28, 8, 24};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int L = 415;
    vector<int> speeds = {11, 17};
    vector<int> lights = {340, 199, 177};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 3};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int L = 93;
    vector<int> speeds = {12, 17, 2, 9, 10, 17, 18, 25, 1, 2};
    vector<int> lights = {1, 11, 37, 4, 66};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int L = 119;
    vector<int> speeds = {28, 28, 15};
    vector<int> lights = {79};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int L = 298;
    vector<int> speeds = {25, 17, 23, 11, 15, 28, 27, 5, 4, 24};
    vector<int> lights = {131, 239, 41, 20, 57};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5, 1, 1};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int L = 99;
    vector<int> speeds = {9, 27, 3, 8, 28, 18};
    vector<int> lights = {8, 83, 38, 97};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 2};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int L = 314;
    vector<int> speeds = {};
    vector<int> lights = {157, 279, 145, 115, 176};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int L = 397;
    vector<int> speeds = {25, 7, 12, 13, 25, 29};
    vector<int> lights = {211};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int L = 174;
    vector<int> speeds = {};
    vector<int> lights = {89, 0, 40, 86};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int L = 356;
    vector<int> speeds = {3, 27};
    vector<int> lights = {256};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int L = 266;
    vector<int> speeds = {9, 13, 6, 23, 3, 1};
    vector<int> lights = {224, 144, 206, 264, 151};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 4};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int L = 133;
    vector<int> speeds = {11};
    vector<int> lights = {58, 121, 26};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int L = 79;
    vector<int> speeds = {6, 24, 1, 11, 11, 19, 1, 29, 27, 27};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int L = 494;
    vector<int> speeds = {11, 7, 11, 6};
    vector<int> lights = {438, 251};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int L = 279;
    vector<int> speeds = {23, 15};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int L = 77;
    vector<int> speeds = {29, 3, 1, 28};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int L = 491;
    vector<int> speeds = {20, 12, 1, 3};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int L = 423;
    vector<int> speeds = {2, 18};
    vector<int> lights = {37, 244, 284, 419};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int L = 421;
    vector<int> speeds = {11, 11, 2, 5, 10, 23, 29, 9, 16};
    vector<int> lights = {368, 174, 270, 145};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 5, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int L = 486;
    vector<int> speeds = {};
    vector<int> lights = {289, 409, 40, 413, 161};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int L = 77;
    vector<int> speeds = {11, 26};
    vector<int> lights = {31, 65, 36, 69, 57};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 1, 3, 2};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int L = 23;
    vector<int> speeds = {18};
    vector<int> lights = {2, 6, 11, 19};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int L = 414;
    vector<int> speeds = {19, 6, 20, 19, 13, 10, 26};
    vector<int> lights = {408};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int L = 69;
    vector<int> speeds = {14, 16, 6, 20, 20};
    vector<int> lights = {23, 31};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int L = 297;
    vector<int> speeds = {7};
    vector<int> lights = {283, 107};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int L = 164;
    vector<int> speeds = {2};
    vector<int> lights = {76, 148, 150, 149};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int L = 321;
    vector<int> speeds = {12};
    vector<int> lights = {264, 229, 109};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int L = 245;
    vector<int> speeds = {23, 19, 17, 26, 27, 5, 27, 7, 28, 11};
    vector<int> lights = {76, 11, 84};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 1};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int L = 335;
    vector<int> speeds = {2, 18, 11, 6, 22, 27, 30, 9, 30};
    vector<int> lights = {124};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int L = 17;
    vector<int> speeds = {26, 15, 1, 20};
    vector<int> lights = {9, 1, 10, 7, 15};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int L = 314;
    vector<int> speeds = {8, 1, 5, 3, 20, 7, 3, 1};
    vector<int> lights = {53};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int L = 120;
    vector<int> speeds = {9, 6, 6, 16, 16, 22, 5, 30, 18};
    vector<int> lights = {31, 43, 16};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int L = 69;
    vector<int> speeds = {11, 12, 3, 13};
    vector<int> lights = {64, 7, 56, 38, 5};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int L = 467;
    vector<int> speeds = {15, 9, 19, 23};
    vector<int> lights = {309, 111, 90};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int L = 122;
    vector<int> speeds = {22, 20, 5, 16, 18, 8, 13, 24};
    vector<int> lights = {115};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int L = 106;
    vector<int> speeds = {15};
    vector<int> lights = {40, 15, 96, 45};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 3, 1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int L = 107;
    vector<int> speeds = {1, 9, 29};
    vector<int> lights = {4, 16, 28};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 5};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int L = 20;
    vector<int> speeds = {10, 7, 29, 28, 18, 30, 23, 5, 28, 20};
    vector<int> lights = {18};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int L = 243;
    vector<int> speeds = {23, 5, 24, 5, 5, 18, 8};
    vector<int> lights = {175, 66, 81};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int L = 163;
    vector<int> speeds = {3, 8, 6};
    vector<int> lights = {96, 105, 67};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int L = 241;
    vector<int> speeds = {14, 1, 16, 25, 23};
    vector<int> lights = {88};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int L = 414;
    vector<int> speeds = {};
    vector<int> lights = {113, 50};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int L = 424;
    vector<int> speeds = {27, 15, 30};
    vector<int> lights = {317, 349, 170, 124};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int L = 489;
    vector<int> speeds = {20, 2, 25, 13, 20, 2, 29, 7, 14};
    vector<int> lights = {126, 92, 198, 279, 289};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 4, 4, 1};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int L = 175;
    vector<int> speeds = {13, 16, 26, 25, 13, 21, 22, 20, 24, 17};
    vector<int> lights = {20, 10, 155};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int L = 393;
    vector<int> speeds = {5};
    vector<int> lights = {193, 133, 388};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 3, 4};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int L = 191;
    vector<int> speeds = {8, 6};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int L = 434;
    vector<int> speeds = {8, 4, 2, 14, 24, 23, 22, 7};
    vector<int> lights = {168};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int L = 434;
    vector<int> speeds = {22, 8, 30, 9, 6, 15, 18, 26, 1, 14};
    vector<int> lights = {237, 343};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int L = 98;
    vector<int> speeds = {22, 29, 23, 20};
    vector<int> lights = {61, 78, 76};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3, 3};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int L = 234;
    vector<int> speeds = {14, 20, 28, 11, 22, 10, 14};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int L = 329;
    vector<int> speeds = {9, 24, 4, 27, 19, 15};
    vector<int> lights = {301, 233, 176, 154, 321};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 3, 1, 1};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int L = 132;
    vector<int> speeds = {2, 8, 21, 9, 4, 1, 26, 24, 12};
    vector<int> lights = {90, 32, 107, 60};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 1, 2};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int L = 26;
    vector<int> speeds = {19};
    vector<int> lights = {14, 22, 10, 16, 12};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int L = 397;
    vector<int> speeds = {28, 12, 1, 27, 21, 8, 17, 1, 7, 19};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int L = 17;
    vector<int> speeds = {20, 3, 24, 27};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int L = 210;
    vector<int> speeds = {20, 16, 3, 22};
    vector<int> lights = {24, 134, 94, 23};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 1, 1};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int L = 440;
    vector<int> speeds = {29, 21, 11, 9, 19, 22, 8, 23};
    vector<int> lights = {280, 189, 251};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 4};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int L = 27;
    vector<int> speeds = {10};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int L = 475;
    vector<int> speeds = {19, 17, 16, 24};
    vector<int> lights = {208, 162, 443};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int L = 392;
    vector<int> speeds = {7, 5};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int L = 176;
    vector<int> speeds = {10, 21, 12, 19, 12, 25, 1};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int L = 301;
    vector<int> speeds = {25, 19, 30, 30, 20, 22, 15};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int L = 162;
    vector<int> speeds = {3, 21, 18};
    vector<int> lights = {40, 99};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int L = 299;
    vector<int> speeds = {12, 10, 29, 24, 22, 26, 10};
    vector<int> lights = {286};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int L = 9;
    vector<int> speeds = {15, 23, 4};
    vector<int> lights = {2, 4, 1, 3};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int L = 306;
    vector<int> speeds = {23, 7, 20, 7, 27, 8, 29};
    vector<int> lights = {178};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int L = 440;
    vector<int> speeds = {25, 18, 30, 19, 23, 18, 18, 18, 2};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int L = 231;
    vector<int> speeds = {28, 1, 3, 10, 4, 6, 22, 3, 11};
    vector<int> lights = {148, 71};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int L = 482;
    vector<int> speeds = {1, 14, 22, 18, 9};
    vector<int> lights = {182, 417, 174, 114};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 1, 1};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int L = 14;
    vector<int> speeds = {18, 26, 16, 4, 1, 13, 15, 2};
    vector<int> lights = {12};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int L = 144;
    vector<int> speeds = {16, 20};
    vector<int> lights = {55, 53, 45};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int L = 47;
    vector<int> speeds = {8, 1, 6, 2, 15, 26, 22, 14, 4, 15};
    vector<int> lights = {16};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int L = 26;
    vector<int> speeds = {1, 16, 27, 7, 28, 9};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int L = 493;
    vector<int> speeds = {29, 5, 1, 4};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int L = 276;
    vector<int> speeds = {11, 26, 15, 13, 23, 11, 3, 29, 13};
    vector<int> lights = {261, 191, 4, 223};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 4, 1};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int L = 43;
    vector<int> speeds = {26, 3, 4, 13, 20, 8, 21, 29};
    vector<int> lights = {0};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int L = 359;
    vector<int> speeds = {28, 6, 10, 17, 18};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int L = 439;
    vector<int> speeds = {28, 15, 2};
    vector<int> lights = {324};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int L = 500;
    vector<int> speeds = {};
    vector<int> lights = {};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int L = 340;
    vector<int> speeds = {16, 15, 29, 7, 9, 15, 2};
    vector<int> lights = {125, 156, 274, 309, 211};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int L = 100;
    vector<int> speeds = {1, 20, 30, 1, 25, 15};
    vector<int> lights = {0, 57, 5, 94, 23};
    GreenWave* pObj = new GreenWave();
    clock_t start = clock();
    vector<int> result = pObj->getFirstRed(L, speeds, lights);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19727958&rd=9810&pm=5920
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
using namespace std; 
  
#define SZ(var) (int)var.size() 
#define REP(var, hi) for (var = 0; var < (hi); var++) 
typedef vector <int> VI; 
 
VI s; 
VI l; 
int leng; 
int n; 
int w[5]; 
int p[10]; 
int tt[500]; 
int c[5]; 
int ans, res; 
int ww[5]; 
 
void update() 
{ 
  if (res > ans) 
    return; 
  int i; 
  if (res == ans) 
  { 
    REP(i, SZ(l)) 
      if (ww[i]<w[i]) 
        return; 
  } 
  REP(i, SZ(l)) 
    ww[i] = w[i]; 
  ans = res; 
} 
 
void checking() 
{ 
  memset(p, -1, sizeof(p)); 
  int left = n; 
  int i, j, u; 
  memcpy(c, w, sizeof(c)); 
  res = 0; 
  while (left>0) 
  { 
    res++; 
    REP(i, n) 
      if (p[i]>-1 && p[i]<leng) 
      { 
        REP(j, s[i]) 
        { 
          if (i>0 && p[i]==p[i-1]-1) 
            break; 
          u = tt[ p[i] ]; 
          if (u > -1) 
          { 
            if ( c[u]<=5 ) // red 
              break; 
          } 
          p[i]++; 
          if (p[i]>=leng) 
          { 
            p[i]=2*leng; 
            left--; 
            break; 
          } 
        } 
      } 
    REP(i, n) 
      if (p[i]==-1) 
      { 
        if (i>0&&p[i-1]==0) 
          break; 
        p[i] = 0; 
        break; 
      } 
    REP(i, SZ(l)) 
    { 
      c[i]--; 
      if (c[i] == 0) c[i] = 10; 
    } 
  } 
  update(); 
} 
 
void recr(int v, int m) 
{ 
  if (v == m) 
  { 
    checking(); 
    return; 
  } 
  int i; 
  REP(i, 5) 
  { 
    w[v]=i+1; 
    recr(v+1, m); 
  } 
} 
 
class GreenWave 
{ 
public: 
vector <int> getFirstRed(int L, vector <int> speeds, vector <int> lights) 
{ 
  s = speeds; 
  l = lights; 
  leng = L; 
  n = SZ(s); 
  memset(tt, -1, sizeof(tt)); 
  int i; 
  REP(i, SZ(l)) 
    tt[ l[i] ] = i; 
  ans = 2000000000; 
  recr(0, SZ(l)); 
  VI a(0); 
  REP(i, SZ(l)) 
    a.push_back( ww[i] ); 
  return a; 
} 
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/