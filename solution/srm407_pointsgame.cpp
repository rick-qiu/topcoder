/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9791
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

class PointsGame {
public:
    double gameValue(vector<int> pointsX, vector<int> pointsY);
};

double PointsGame::gameValue(vector<int> pointsX, vector<int> pointsY) {
    double ret;
    return ret;
}


int test0() {
    vector<int> pointsX = {0, 0};
    vector<int> pointsY = {0, 1};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> pointsX = {0, 0, 1, 1};
    vector<int> pointsY = {0, 5, 0, 5};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12.198039027185569;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pointsX = {0, 0, 0, 0};
    vector<int> pointsY = {0, 1, 5, 6};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pointsX = {0, 1, 2, 3};
    vector<int> pointsY = {0, 0, 0, 0};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pointsX = {245, 333};
    vector<int> pointsY = {245, 333};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 124.45079348883236;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> pointsX = {1, 0, 2};
    vector<int> pointsY = {1, 2, 0};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119286;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pointsX = {0, 1000, 1000, 0};
    vector<int> pointsY = {0, 0, 1000, 1000};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 4828.42712474619;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> pointsX = {0, 1000, 1000, 0, 500};
    vector<int> pointsY = {0, 0, 1000, 1000, 500};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6242.640687119286;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pointsX = {0, 10, 20, 30, 40, 50};
    vector<int> pointsY = {331, 331, 331, 331, 331, 331};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 190.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pointsX = {1, 1, 0, 2};
    vector<int> pointsY = {0, 4, 1, 1};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 10.576491222541474;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pointsX = {4, 0, 1, 2};
    vector<int> pointsY = {3, 3, 1, 0};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12.625316113301075;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pointsX = {606, 853, 408, 873};
    vector<int> pointsY = {249, 224, 577, 629};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1748.5925527328632;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> pointsX = {501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 0, 1000};
    vector<int> pointsY = {365, 365, 365, 365, 365, 365, 365, 365, 365, 365, 365, 365};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6080.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> pointsX = {100, 100, 50, 150, 0, 200, 100, 100};
    vector<int> pointsY = {100, 50, 75, 75, 100, 100, 0, 200};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1689.0841272698042;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pointsX = {100, 100, 110, 110, 1000, 900};
    vector<int> pointsY = {100, 200, 100, 200, 1000, 700};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 4943.0680876954;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pointsX = {0, 10, 5, 100, 120, 110, 500, 600, 550, 900, 950, 925};
    vector<int> pointsY = {10, 13, 41, 100, 100, 101, 333, 334, 390, 784, 800, 999};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 20178.992901151338;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pointsX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> pointsY = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 163.3864026599999;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pointsX = {1, 1000, 5, 995, 10, 990, 15, 985, 20, 980, 25, 975};
    vector<int> pointsY = {132, 132, 157, 157, 168, 168, 199, 199, 397, 398, 444, 444};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 20255.471525270357;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pointsX = {0, 1000, 1000, 0, 100, 900, 900, 100, 400, 600, 600, 400};
    vector<int> pointsY = {0, 0, 1000, 1000, 100, 100, 900, 900, 400, 400, 600, 600};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 24174.838387804008;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pointsX = {41, 449, 328};
    vector<int> pointsY = {474, 150, 709};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 942.8824539017646;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pointsX = {467, 329, 936, 440};
    vector<int> pointsY = {700, 117, 258, 811};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2084.6757730933214;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pointsX = {952, 491, 993, 931, 823};
    vector<int> pointsY = {431, 359, 590, 899, 153};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2702.7604748705803;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pointsX = {292, 370, 404, 698, 699, 876};
    vector<int> pointsY = {442, 705, 757, 527, 868, 893};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 3297.0560941390354;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> pointsX = {642, 273, 18, 885, 675, 788, 291};
    vector<int> pointsY = {303, 656, 660, 126, 704, 225, 862};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6166.298751483526;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pointsX = {522, 617, 630, 725, 17, 847, 715, 732};
    vector<int> pointsY = {502, 778, 304, 32, 168, 841, 288, 76};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 7616.440447170846;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pointsX = {31, 934, 245, 626, 419, 782, 875, 723, 346};
    vector<int> pointsY = {335, 992, 70, 369, 545, 610, 611, 60, 935};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 11540.18630439218;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pointsX = {738, 829, 962, 369, 918, 282, 928, 407, 602, 312};
    vector<int> pointsY = {532, 517, 102, 80, 907, 525, 829, 84, 635, 629};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12320.440592540608;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pointsX = {682, 921, 964, 304, 642, 364, 16, 717, 898, 53, 264};
    vector<int> pointsY = {824, 751, 558, 92, 496, 963, 277, 152, 618, 333, 743};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16690.543244691802;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pointsX = {632, 559, 27, 40, 323, 149, 925, 703, 953, 427, 76, 161};
    vector<int> pointsY = {990, 326, 442, 275, 726, 373, 931, 901, 177, 749, 197, 570};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 19735.83667467181;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pointsX = {416, 922, 479};
    vector<int> pointsY = {17, 397, 139};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 770.1063535206472;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pointsX = {900, 559, 744, 654};
    vector<int> pointsY = {393, 353, 597, 517};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1028.0287837641897;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> pointsX = {527, 477, 568, 37, 599};
    vector<int> pointsY = {326, 281, 806, 365, 9};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2801.542455104784;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pointsX = {592, 998, 321, 176, 649, 460};
    vector<int> pointsY = {273, 730, 53, 998, 392, 911};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 5343.283940580763;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pointsX = {894, 785, 109, 467, 725, 879, 624};
    vector<int> pointsY = {461, 790, 419, 296, 611, 791, 505};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 4903.793736032305;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pointsX = {295, 609, 917, 434, 580, 244, 503, 525};
    vector<int> pointsY = {776, 273, 218, 998, 839, 577, 975, 670};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6854.68843568223;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pointsX = {192, 465, 90, 329, 493, 586, 285, 494, 441};
    vector<int> pointsY = {175, 445, 612, 560, 777, 784, 266, 570, 778};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6747.63274603254;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pointsX = {982, 130, 452, 599, 520, 280, 32, 155, 172, 628};
    vector<int> pointsY = {951, 185, 796, 866, 137, 500, 186, 632, 248, 35};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 13508.48465906824;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pointsX = {308, 624, 336, 882, 857, 405, 840, 122, 821, 415, 860};
    vector<int> pointsY = {967, 312, 633, 11, 694, 554, 448, 865, 365, 70, 702};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15125.335760923686;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pointsX = {598, 508, 983, 843, 844, 674, 388, 780, 240, 407, 998, 575};
    vector<int> pointsY = {158, 275, 61, 395, 589, 734, 823, 902, 165, 152, 696, 172};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17605.98616743397;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> pointsX = {957, 298, 366};
    vector<int> pointsY = {664, 404, 545};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 864.9763299849204;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pointsX = {431, 533, 434, 503};
    vector<int> pointsY = {115, 42, 697, 750};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1513.9452880833414;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pointsX = {123, 411, 263, 971, 671};
    vector<int> pointsY = {517, 527, 420, 847, 937};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2933.9180340478006;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pointsX = {193, 172, 294, 396, 258, 89};
    vector<int> pointsY = {464, 266, 443, 709, 96, 690};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2943.078649000805;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pointsX = {285, 651, 781, 251, 309, 331, 154};
    vector<int> pointsY = {33, 912, 798, 831, 925, 309, 729};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6057.143141768428;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> pointsX = {293, 539, 623, 955, 481, 140, 173, 202};
    vector<int> pointsY = {122, 159, 530, 430, 162, 456, 32, 638};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6936.223323055949;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> pointsX = {266, 413, 236, 4, 128, 481, 741, 629, 173};
    vector<int> pointsY = {305, 470, 995, 166, 4, 769, 896, 941, 384};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 10499.251613733048;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pointsX = {192, 622, 451, 410, 305, 799, 305, 849, 348, 139};
    vector<int> pointsY = {822, 42, 480, 269, 511, 169, 756, 238, 762, 666};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 10783.346910920187;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> pointsX = {175, 972, 99, 472, 184, 620, 798, 95, 497, 623, 542};
    vector<int> pointsY = {923, 12, 943, 48, 167, 973, 405, 488, 566, 703, 18};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18026.183322070705;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> pointsX = {484, 142, 205, 255, 51, 893, 168, 352, 391, 944, 256, 141};
    vector<int> pointsY = {235, 803, 692, 735, 878, 663, 278, 538, 140, 681, 693, 603};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15822.244539965537;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> pointsX = {123, 550, 673, 636, 276, 354, 444, 674, 571, 828, 459, 17};
    vector<int> pointsY = {436, 98, 129, 798, 69, 29, 925, 1, 753, 138, 295, 567};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18177.43218053535;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> pointsX = {31, 736, 157, 104, 875, 69, 536, 484, 548, 460};
    vector<int> pointsY = {623, 602, 624, 897, 398, 492, 896, 948, 123, 572};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12280.453031579706;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> pointsX = {248, 185, 493, 263, 252, 196, 108, 25, 306, 983};
    vector<int> pointsY = {741, 405, 522, 132, 499, 761, 910, 158, 742, 936};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 11566.777335591754;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> pointsX = {644, 816, 870, 696};
    vector<int> pointsY = {940, 561, 357, 995};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1364.221044612128;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> pointsX = {199, 32, 433, 301, 748, 338, 322, 471, 103, 92};
    vector<int> pointsY = {873, 782, 828, 446, 406, 981, 357, 386, 534, 80};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 11164.361918321192;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> pointsX = {823, 324, 66, 321, 805, 471, 536};
    vector<int> pointsY = {193, 625, 348, 518, 344, 308, 248};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 4484.919721249233;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> pointsX = {332, 884, 9, 588, 102, 705, 678, 574, 17, 399, 105, 205};
    vector<int> pointsY = {561, 553, 924, 274, 826, 41, 946, 581, 705, 648, 956, 436};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18236.455991645213;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> pointsX = {510, 961, 605, 481, 911, 624, 57, 826, 671, 926, 221, 120};
    vector<int> pointsY = {731, 505, 719, 155, 438, 808, 218, 853, 625, 903, 190, 752};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18077.03766579361;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> pointsX = {381, 257, 679};
    vector<int> pointsY = {181, 722, 636};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 985.7027186284172;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> pointsX = {551, 992, 166, 680, 956, 538, 866};
    vector<int> pointsY = {300, 399, 625, 836, 831, 129, 451};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 6104.639590786683;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> pointsX = {847, 404, 646, 751};
    vector<int> pointsY = {425, 268, 661, 30};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1840.4461771698293;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> pointsX = {875, 52, 806, 610, 16, 918};
    vector<int> pointsY = {84, 665, 156, 808, 20, 462};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 5991.098914162949;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> pointsX = {71, 478, 587, 965, 130, 334, 295, 633};
    vector<int> pointsY = {714, 22, 247, 335, 751, 181, 598, 239};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 7740.360178579095;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> pointsX = {475, 826, 752, 588};
    vector<int> pointsY = {263, 992, 532, 527};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1726.257055119557;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> pointsX = {596, 461, 512, 103};
    vector<int> pointsY = {209, 786, 145, 581};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1778.771008822947;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> pointsX = {195, 675, 205, 969, 799, 596, 369, 744, 668, 402};
    vector<int> pointsY = {1000, 80, 65, 768, 483, 946, 281, 824, 572, 503};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 13473.761595695109;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> pointsX = {641, 701, 361, 1};
    vector<int> pointsY = {149, 462, 222, 152};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1741.6214060383309;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> pointsX = {612, 893, 584, 698, 787};
    vector<int> pointsY = {223, 750, 180, 971, 538};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2538.2757084493983;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> pointsX = {411, 77, 236, 571, 635, 969};
    vector<int> pointsY = {847, 891, 64, 524, 684, 529};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 5064.614165590969;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> pointsX = {768, 247, 511, 972, 261, 929, 863, 522, 222, 483, 290};
    vector<int> pointsY = {843, 592, 295, 111, 448, 125, 62, 542, 734, 872, 86};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15720.791749065389;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> pointsX = {409, 524, 589, 943, 1, 560, 28, 522, 322, 86, 941, 625};
    vector<int> pointsY = {387, 437, 44, 677, 587, 331, 608, 28, 200, 757, 925, 868};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 19233.272491541447;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> pointsX = {132, 690, 942, 831, 409, 595, 748, 40, 532, 763, 17, 194};
    vector<int> pointsY = {170, 31, 844, 604, 213, 733, 904, 356, 225, 742, 940, 941};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 21099.679348944475;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> pointsX = {295, 694, 386, 4, 335, 971, 527, 487, 566, 506, 947, 319};
    vector<int> pointsY = {67, 896, 126, 165, 927, 47, 406, 592, 147, 405, 372, 699};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18727.705040086264;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> pointsX = {606, 783, 356, 63, 549, 20, 722, 112, 784, 989, 248, 646};
    vector<int> pointsY = {913, 808, 462, 354, 995, 130, 212, 824, 611, 9, 605, 182};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 20950.390516107174;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> pointsX = {671, 649, 657, 613, 883, 343, 395, 439, 995, 255, 211, 449};
    vector<int> pointsY = {287, 618, 277, 242, 148, 113, 305, 209, 82, 4, 171, 59};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12704.232977272048;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> pointsX = {297, 842, 26, 131, 330, 249, 892, 673, 614, 883, 888, 558};
    vector<int> pointsY = {461, 924, 281, 640, 644, 218, 397, 917, 828, 350, 875, 239};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18568.55022229078;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> pointsX = {990, 597, 948, 974, 924, 772, 478, 380, 653, 288, 692, 584};
    vector<int> pointsY = {710, 933, 18, 404, 430, 228, 496, 952, 956, 487, 514, 244};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17457.76106100607;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> pointsX = {913, 841, 58, 686, 958, 238, 102, 199, 531, 808, 312, 36};
    vector<int> pointsY = {182, 259, 54, 953, 69, 690, 460, 750, 372, 786, 926, 535};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 21339.803994004393;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> pointsX = {97, 678, 93, 873, 50, 788, 954, 114, 927, 661, 87, 999};
    vector<int> pointsY = {929, 775, 722, 342, 28, 159, 754, 193, 66, 884, 953, 70};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 24291.899264216485;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> pointsX = {322, 845, 127, 281, 136, 805, 667, 614, 622, 596, 306, 689};
    vector<int> pointsY = {682, 50, 106, 237, 641, 527, 653, 857, 392, 397, 818, 810};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16999.65914217648;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> pointsX = {509, 699, 638, 58, 654, 945, 339, 681, 15, 651, 707, 58};
    vector<int> pointsY = {280, 395, 885, 844, 107, 918, 713, 731, 395, 504, 802, 256};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18439.449079767386;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> pointsX = {309, 597, 876, 283, 458, 11, 115, 604, 90, 783, 80, 533};
    vector<int> pointsY = {278, 272, 967, 123, 53, 320, 694, 248, 484, 699, 126, 84};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17649.976334017643;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> pointsX = {423, 951, 698, 675, 989, 51, 244, 472, 220, 397, 891, 856};
    vector<int> pointsY = {642, 466, 458, 175, 455, 607, 146, 10, 145, 374, 24, 922};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18931.978471548733;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> pointsX = {637, 429, 596, 777, 94, 803, 263, 586, 271, 779, 334, 428};
    vector<int> pointsY = {869, 540, 287, 571, 754, 558, 314, 379, 387, 878, 803, 838};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 14473.070358686307;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> pointsX = {790, 206, 445, 909, 658, 229, 496, 930, 531, 132, 137, 654};
    vector<int> pointsY = {655, 792, 339, 723, 382, 123, 706, 920, 167, 550, 630, 636};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17135.637118110375;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> pointsX = {60, 491, 510, 475, 600, 508, 221, 558, 905, 455, 538, 934};
    vector<int> pointsY = {147, 494, 537, 452, 330, 892, 322, 319, 903, 900, 718, 320};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15587.608819805508;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> pointsX = {319, 277, 381, 629, 684, 136, 560, 930, 116, 503, 324, 995};
    vector<int> pointsY = {321, 621, 636, 961, 583, 538, 262, 78, 143, 355, 624, 186};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16881.190844347428;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> pointsX = {867, 803, 368, 565, 243, 626, 145, 801, 943, 579, 940, 269};
    vector<int> pointsY = {411, 560, 802, 578, 200, 419, 614, 607, 53, 157, 877, 58};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17956.945008799896;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> pointsX = {496, 270, 676, 564, 574, 148, 141, 951, 331, 5, 242, 407};
    vector<int> pointsY = {482, 412, 744, 771, 880, 529, 178, 366, 480, 759, 874, 363};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15952.771786333622;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> pointsX = {888, 227, 456, 474, 966, 795, 96, 522, 556, 780, 580, 165};
    vector<int> pointsY = {567, 943, 327, 754, 479, 11, 661, 416, 415, 907, 753, 962};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17905.966960759157;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> pointsX = {1, 1000, 200, 200, 199, 561, 531, 891, 285, 631, 1000, 500};
    vector<int> pointsY = {193, 199, 999, 1000, 1000, 300, 700, 100, 300, 99, 1000, 100};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 23237.38097477647;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> pointsX = {1, 2, 3, 298, 28, 287, 998, 765, 321, 402, 12, 801};
    vector<int> pointsY = {0, 98, 201, 34, 29, 14, 4, 276, 876, 43, 15, 5};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18167.81482529317;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> pointsX = {491, 517, 484, 450, 519, 474, 528, 508, 512, 514, 455};
    vector<int> pointsY = {495, 531, 477, 511, 541, 545, 492, 477, 486, 541, 454};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1536.8934428066705;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> pointsX = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> pointsY = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 206.47518010647198;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> pointsX = {700, 321, 212, 532, 24, 15, 896, 347, 998, 109, 1000};
    vector<int> pointsY = {1000, 170, 621, 222, 578, 124, 215, 396, 147, 962, 129};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18647.539132306127;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> pointsX = {297, 141, 678, 542, 942, 742, 249, 685, 665, 609, 133, 532};
    vector<int> pointsY = {392, 252, 746, 781, 96, 639, 446, 779, 894, 226, 685, 961};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16901.04253835688;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> pointsX = {0, 90, 180, 270, 360, 450, 540, 630, 720, 810, 900, 990};
    vector<int> pointsY = {0, 90, 180, 270, 360, 450, 540, 630, 720, 810, 900, 990};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18582.766209582467;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> pointsX = {45, 543, 45, 321, 789, 453, 453, 321, 786, 45};
    vector<int> pointsY = {456, 78, 421, 78, 56, 39, 71, 86, 72, 76};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 9119.905963834699;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> pointsX = {730, 237, 34, 8, 124, 688, 245, 343, 813, 952, 271, 282};
    vector<int> pointsY = {299, 895, 443, 811, 57, 184, 679, 701, 573, 279, 550, 188};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18877.109251631722;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> pointsX = {100, 23, 34, 43, 34, 121, 32, 324, 423, 432, 54, 32};
    vector<int> pointsY = {123, 323, 234, 323, 21, 132, 12, 323, 13, 422, 213, 212};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 8855.099961559798;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> pointsX = {1, 2, 3, 4, 52, 23, 54, 30, 13, 98, 97, 90};
    vector<int> pointsY = {1, 2, 3, 4, 52, 23, 54, 30, 13, 98, 97, 90};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 2104.3497808111656;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> pointsX = {0, 0, 0, 0, 0, 0, 0};
    vector<int> pointsY = {1, 2, 3, 4, 5, 6, 7};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> pointsX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> pointsY = {735, 392, 421, 532, 285, 275, 214, 255, 143, 725, 188, 549};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 7893.869578625478;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> pointsX = {220, 391, 707, 650, 957, 353, 182, 416, 635, 515, 580, 40};
    vector<int> pointsY = {252, 168, 775, 621, 629, 536, 27, 72, 384, 40, 190, 8};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16389.239227524744;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> pointsX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 11};
    vector<int> pointsY = {4, 5, 6, 7, 8, 9, 3, 2, 1, 44, 55, 77};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 886.7736053574109;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> pointsX = {0, 10, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    vector<int> pointsY = {0, 10, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 19742.421330728408;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> pointsX = {383, 886, 777, 915, 793, 335, 386, 492, 649, 421, 362, 27};
    vector<int> pointsY = {383, 886, 777, 915, 793, 335, 386, 492, 649, 421, 362, 27};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 14948.237354283618;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> pointsX = {772, 609, 362, 949, 728, 355, 91, 701, 717, 510, 76, 247};
    vector<int> pointsY = {763, 132, 775, 938, 75, 79, 759, 72, 682, 840, 510, 362};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 19740.45574109664;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> pointsX = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> pointsY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 146.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> pointsX = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> pointsY = {10, 11, 12, 13, 141, 51, 16, 17, 18, 19, 20, 21};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 1048.7439301817876;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> pointsX = {0, 0, 1, 1, 121, 743, 12, 11, 11, 31, 21, 199};
    vector<int> pointsY = {0, 5, 0, 5, 121, 743, 12, 11, 17, 888, 772, 661};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15667.868320064328;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> pointsX = {400, 111, 999, 1000, 0, 200, 2, 999, 998, 876, 405, 888};
    vector<int> pointsY = {1, 1000, 9, 940, 299, 1, 39, 994, 450, 239, 984, 583};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 26518.185249181905;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> pointsX = {23, 35, 123, 45, 123, 435, 56, 43, 34, 234, 567, 987};
    vector<int> pointsY = {234, 456, 23, 12, 5, 7, 6, 5, 3, 2, 1, 34};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 12643.025604030572;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> pointsX = {33, 33, 741, 669, 217, 657, 594, 134, 298, 625, 864, 782};
    vector<int> pointsY = {653, 59, 206, 238, 838, 220, 94, 507, 572, 180, 311, 513};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 17101.957420455423;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> pointsX = {258, 811, 952, 491, 993, 931, 823, 431, 359, 590, 899};
    vector<int> pointsY = {41, 449, 328, 474, 150, 709, 467, 329, 936, 440, 700};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 13486.023548283956;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> pointsX = {1, 1000, 666, 472, 5, 0, 763, 224, 874, 953, 212};
    vector<int> pointsY = {2, 46, 882, 762, 737, 848, 222, 319, 400, 555, 825};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 19412.97906948628;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> pointsX = {123, 581, 119, 304, 979, 128, 207, 335, 542, 877, 141, 923};
    vector<int> pointsY = {224, 812, 203, 252, 841, 362, 203, 565, 769, 321, 500, 70};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18356.869682204535;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> pointsX = {956, 506, 501, 602, 677, 200, 217, 150, 684, 988, 560, 472};
    vector<int> pointsY = {243, 403, 450, 260, 60, 653, 578, 118, 0, 36, 405, 881};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16883.754020084038;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> pointsX = {0, 123, 123, 234, 234, 45, 564, 234, 164, 543, 234, 987};
    vector<int> pointsY = {892, 100, 200, 300, 987, 154, 543, 678, 456, 876, 447, 157};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18502.943579703115;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> pointsX = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    vector<int> pointsY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 206.47518010647198;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> pointsX = {10, 20, 30};
    vector<int> pointsY = {10, 20, 30};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 42.42640687119285;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> pointsX = {0, 0, 1000, 1000, 500, 500, 1000, 0, 500, 1, 998, 3};
    vector<int> pointsY = {0, 1000, 1000, 0, 0, 1000, 500, 500, 500, 1, 999, 3};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 28583.066436488036;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> pointsX = {111, 222, 333, 444, 555, 666, 777, 888, 999, 123, 456, 789};
    vector<int> pointsY = {654, 678, 423, 345, 932, 234, 123, 765, 245, 876, 132, 111};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 19101.643636538745;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> pointsX = {100, 50, 150, 300, 400, 500, 600, 700, 12, 34, 45, 584};
    vector<int> pointsY = {12, 4, 856, 56, 743, 356, 94, 344, 353, 90, 56, 34};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 16904.383571851162;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> pointsX = {473, 765, 275, 374, 987, 457, 347, 715, 852, 654, 887, 567};
    vector<int> pointsY = {999, 1, 43, 887, 478, 976, 439, 100, 1000, 356, 994, 275};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 20553.461834757225;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> pointsX = {385, 772, 381, 755, 474, 175, 471, 954, 241};
    vector<int> pointsY = {161, 519, 101, 852, 326, 259, 733, 443, 343};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 8947.146686004551;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> pointsX = {0, 30, 12, 503, 123, 999, 405, 0, 832, 213, 92, 12};
    vector<int> pointsY = {983, 12, 0, 234, 745, 23, 12, 853, 999, 123, 0, 532};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 23801.68326725385;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> pointsX = {1000, 666, 472, 5, 0, 763, 224, 874, 953, 212};
    vector<int> pointsY = {46, 882, 762, 737, 848, 222, 319, 400, 555, 825};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 14956.378122045786;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> pointsX = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> pointsY = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 146.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> pointsX = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<int> pointsY = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 206.47518010647198;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> pointsX = {0, 516, 660, 350, 716, 614, 694, 459, 708, 92, 398, 985};
    vector<int> pointsY = {582, 58, 414, 400, 463, 281, 402, 505, 152, 362, 798, 345};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 15113.500931159651;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> pointsX = {1, 2, 234, 234, 777, 222, 33, 44, 878, 234, 222, 35};
    vector<int> pointsY = {57, 234, 86, 2, 565, 345, 945, 234, 99, 22, 44, 942};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 18525.727730376708;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> pointsX = {0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
    vector<int> pointsY = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 67.06781710355924;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> pointsX = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8};
    vector<int> pointsY = {9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 7, 4};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 162.70084998863524;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> pointsX = {0, 0, 0};
    vector<int> pointsY = {1, 2, 3};
    PointsGame* pObj = new PointsGame();
    clock_t start = clock();
    double result = pObj->gameValue(pointsX, pointsY);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12179&pm=9791
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
#define MP(X,Y) make_pair(X,Y)
#define two(X) (1<<(X))
#define contain(S,X) (((S)&two(X))!=0)
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
 
class PointsGame
{
public:
  int n;
  double D[12][12];
  map<ipair,double> M;
  double solve(int set1,int set2,int side)
  {
    ipair buf=MP(set1,set2);
    if (M.find(buf)!=M.end()) return M[buf];
    if (set1+set2==two(n)-1)
    {
      double total=0;
      for (int i=0;i<n;i++) if (contain(set1,i))
        for (int j=0;j<n;j++) if (contain(set2,j))
          total+=D[i][j];
      return M[buf]=total;
    }
    double result=(side==0)?-1e100:1e100;
    for (int i=0;i<n;i++) if (!contain(set1,i) && !contain(set2,i))
    {
      double t=solve(set2,set1|two(i),1-side);
      if (side==0) checkmax(result,t);
      else checkmin(result,t);
    }
    return M[buf]=result;
  }
  double gameValue(vector <int> pointsX, vector <int> pointsY)
  {
    n=SIZE(pointsX);
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) 
      D[i][j]=sqrt((double)sqr(pointsX[i]-pointsX[j])+sqr(pointsY[i]-pointsY[j]));
    M.clear();
    double result=solve(0,0,0);
    return result;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/