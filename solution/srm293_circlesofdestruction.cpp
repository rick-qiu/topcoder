/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5877
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

class CirclesOfDestruction {
public:
    double exitTime(int xSize, int ySize, int px, int py, vector<int> x, vector<int> y);
};

double CirclesOfDestruction::exitTime(int xSize, int ySize, int px, int py, vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    int xSize = 10;
    int ySize = 10;
    int px = 5;
    int py = 5;
    vector<int> x = {1, 5, 5};
    vector<int> y = {5, 1, 9};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int xSize = 101;
    int ySize = 10;
    int px = 5;
    int py = 5;
    vector<int> x = {1, 5, 5, 9};
    vector<int> y = {5, 1, 9, 5};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int xSize = 4;
    int ySize = 3;
    int px = 0;
    int py = 2;
    vector<int> x = {0, 0, 1, 1, 1};
    vector<int> y = {1, 3, 1, 2, 3};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int xSize = 5;
    int ySize = 6;
    int px = 4;
    int py = 2;
    vector<int> x = {0, 4, 5};
    vector<int> y = {6, 0, 2};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int xSize = 100;
    int ySize = 100;
    int px = 50;
    int py = 50;
    vector<int> x = {10, 30, 70, 90, 10, 30, 70, 90};
    vector<int> y = {90, 70, 30, 10, 10, 30, 70, 90};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int xSize = 1000;
    int ySize = 1000;
    int px = 800;
    int py = 800;
    vector<int> x = {1000, 800, 600};
    vector<int> y = {800, 1000, 750};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 805.4744331758768;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int xSize = 6;
    int ySize = 7;
    int px = 2;
    int py = 4;
    vector<int> x = {0, 1, 6, 4};
    vector<int> y = {3, 7, 1, 0};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.166666666666667;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int xSize = 916;
    int ySize = 792;
    int px = 663;
    int py = 283;
    vector<int> x = {833, 17, 390, 711};
    vector<int> y = {205, 431, 546, 610};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 284.28060264123246;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int xSize = 94;
    int ySize = 47;
    int px = 50;
    int py = 16;
    vector<int> x = {31, 65, 58};
    vector<int> y = {9, 30, 6};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 34.39491241448363;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int xSize = 94;
    int ySize = 47;
    int px = 50;
    int py = 16;
    vector<int> x = {30, 65, 60};
    vector<int> y = {10, 30, 5};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 34.39491241448363;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int xSize = 8;
    int ySize = 8;
    int px = 5;
    int py = 3;
    vector<int> x = {0, 4, 8, 8};
    vector<int> y = {4, 2, 5, 0};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.134307266916454;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int xSize = 50;
    int ySize = 47;
    int px = 25;
    int py = 15;
    vector<int> x = {32, 14};
    vector<int> y = {6, 39};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 18.027756377319946;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int xSize = 67;
    int ySize = 100;
    int px = 30;
    int py = 48;
    vector<int> x = {30, 8, 58, 66};
    vector<int> y = {98, 60, 3, 59};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 41.6096276252397;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int xSize = 412;
    int ySize = 551;
    int px = 155;
    int py = 273;
    vector<int> x = {262, 109};
    vector<int> y = {280, 369};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 155.74839485529216;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int xSize = 152;
    int ySize = 559;
    int px = 85;
    int py = 147;
    vector<int> x = {33, 69, 44};
    vector<int> y = {295, 82, 337};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 67.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int xSize = 425;
    int ySize = 29;
    int px = 185;
    int py = 7;
    vector<int> x = {146, 134, 385, 29};
    vector<int> y = {17, 24, 23, 5};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int xSize = 846;
    int ySize = 811;
    int px = 507;
    int py = 761;
    vector<int> x = {825, 569, 126, 169, 598};
    vector<int> y = {306, 720, 270, 274, 48};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int xSize = 972;
    int ySize = 529;
    int px = 714;
    int py = 475;
    vector<int> x = {584, 900, 610, 550, 744, 143};
    vector<int> y = {107, 289, 391, 90, 481, 390};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 54.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int xSize = 86;
    int ySize = 114;
    int px = 30;
    int py = 8;
    vector<int> x = {47, 72, 32, 54, 86, 85, 26};
    vector<int> y = {74, 5, 105, 18, 78, 101, 21};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int xSize = 628;
    int ySize = 478;
    int px = 213;
    int py = 418;
    vector<int> x = {173, 104, 521, 378, 307, 437, 262, 192};
    vector<int> y = {407, 54, 452, 125, 145, 404, 174, 185};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 60.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int xSize = 125;
    int ySize = 774;
    int px = 45;
    int py = 189;
    vector<int> x = {120, 12, 88, 87, 0, 56, 123, 10, 91};
    vector<int> y = {543, 318, 489, 632, 312, 658, 496, 550, 203};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 45.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int xSize = 478;
    int ySize = 681;
    int px = 215;
    int py = 391;
    vector<int> x = {113, 248, 248, 364, 315, 197, 71, 363, 295, 75};
    vector<int> y = {311, 6, 91, 342, 215, 357, 591, 373, 322, 453};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int xSize = 25;
    int ySize = 156;
    int px = 12;
    int py = 92;
    vector<int> x = {0, 7, 12, 5, 1, 9, 3, 8, 18, 9, 11};
    vector<int> y = {64, 121, 39, 28, 95, 146, 25, 99, 21, 141, 115};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int xSize = 323;
    int ySize = 701;
    int px = 9;
    int py = 420;
    vector<int> x = {53, 156, 227, 249, 36, 150, 151, 144, 308, 190, 134, 110};
    vector<int> y = {501, 659, 25, 638, 598, 118, 397, 491, 64, 472, 416, 185};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int xSize = 479;
    int ySize = 989;
    int px = 319;
    int py = 931;
    vector<int> x = {319, 299, 393, 359, 101, 303, 233, 294, 374, 356, 112, 38, 30};
    vector<int> y = {427, 106, 884, 139, 743, 777, 665, 571, 147, 829, 70, 856, 712};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 58.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int xSize = 616;
    int ySize = 421;
    int px = 303;
    int py = 420;
    vector<int> x = {408, 477, 267, 220, 160, 315, 371, 71, 602, 445, 355, 432, 579, 456};
    vector<int> y = {137, 104, 62, 51, 341, 69, 117, 253, 79, 40, 263, 57, 374, 206};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int xSize = 643;
    int ySize = 138;
    int px = 45;
    int py = 109;
    vector<int> x = {128, 338, 327, 345, 414, 68, 426, 354, 4, 204, 343, 105, 518, 134, 28};
    vector<int> y = {131, 34, 4, 55, 138, 36, 75, 97, 91, 10, 118, 30, 133, 116, 5};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int xSize = 968;
    int ySize = 323;
    int px = 397;
    int py = 64;
    vector<int> x = {313, 542, 67, 230, 73, 479, 373, 313, 870, 590, 751, 501, 146, 340, 802, 383};
    vector<int> y = {229, 137, 310, 236, 227, 182, 143, 187, 48, 173, 220, 260, 88, 289, 169, 255};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 64.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int xSize = 35;
    int ySize = 846;
    int px = 9;
    int py = 371;
    vector<int> x = {2, 0, 31, 22, 8, 12, 8, 0, 4, 6, 25, 29, 6, 35, 1, 4, 30};
    vector<int> y = {404, 386, 828, 778, 403, 55, 524, 195, 307, 304, 60, 625, 679, 578, 486, 837, 814};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int xSize = 835;
    int ySize = 265;
    int px = 561;
    int py = 262;
    vector<int> x = {424, 253, 830, 771, 374, 32, 126, 707, 62, 476, 300, 19, 157, 602, 400, 680, 575, 22};
    vector<int> y = {121, 55, 166, 221, 118, 239, 105, 159, 185, 175, 168, 187, 79, 20, 136, 187, 212, 59};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int xSize = 733;
    int ySize = 973;
    int px = 301;
    int py = 584;
    vector<int> x = {382, 456, 450, 304, 430, 614, 414, 418, 78, 356, 4, 29, 687, 396, 554, 148, 18, 632, 286};
    vector<int> y = {80, 546, 226, 233, 5, 548, 407, 647, 494, 104, 505, 856, 546, 905, 298, 917, 159, 280, 207};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int xSize = 601;
    int ySize = 338;
    int px = 52;
    int py = 119;
    vector<int> x = {482, 375, 478, 123, 227, 499, 30, 586, 312, 59, 405, 568, 100, 320, 427, 187, 581, 36, 195, 75};
    vector<int> y = {125, 115, 5, 38, 262, 202, 41, 1, 270, 141, 188, 40, 280, 228, 304, 100, 224, 127, 191, 48};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int xSize = 599;
    int ySize = 557;
    int px = 170;
    int py = 318;
    vector<int> x = {126, 97, 261, 12, 507, 592, 85, 278, 567, 207, 530, 2, 208, 258, 262, 57, 313, 429, 142, 363, 269};
    vector<int> y = {276, 224, 548, 229, 25, 404, 145, 214, 316, 219, 467, 522, 512, 227, 159, 305, 484, 265, 437, 434, 417};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int xSize = 431;
    int ySize = 311;
    int px = 0;
    int py = 309;
    vector<int> x = {316, 202, 287, 258, 210, 135, 212, 89, 151, 201, 425, 62, 245, 355, 97, 221, 232, 50, 4, 48, 286, 394};
    vector<int> y = {194, 180, 107, 186, 240, 97, 297, 198, 115, 110, 237, 305, 290, 206, 301, 181, 208, 163, 109, 41, 126, 45};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int xSize = 228;
    int ySize = 911;
    int px = 216;
    int py = 477;
    vector<int> x = {38, 55, 153, 158, 184, 23, 98, 190, 10, 34, 58, 134, 197, 227, 1, 114, 16, 115, 88, 161, 137, 142, 96};
    vector<int> y = {358, 123, 25, 612, 781, 824, 35, 616, 624, 296, 661, 401, 484, 428, 622, 68, 848, 72, 23, 93, 237, 282, 325};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int xSize = 980;
    int ySize = 164;
    int px = 579;
    int py = 103;
    vector<int> x = {577, 7, 970, 208, 25, 341, 127, 953, 430, 304, 91, 960, 272, 790, 111, 487, 672, 943, 377, 497, 914, 887, 300, 963};
    vector<int> y = {46, 140, 3, 40, 52, 142, 74, 53, 117, 61, 46, 89, 157, 84, 25, 86, 159, 33, 78, 20, 44, 27, 161, 129};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 61.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int xSize = 448;
    int ySize = 251;
    int px = 108;
    int py = 6;
    vector<int> x = {238, 328, 380, 101, 38, 406, 45, 178, 408, 342, 83, 90, 259, 264, 362, 259, 256, 403, 11, 148, 224, 261, 238, 257, 385};
    vector<int> y = {24, 71, 53, 101, 250, 124, 114, 242, 107, 197, 79, 19, 81, 62, 47, 125, 82, 199, 80, 214, 2, 157, 64, 11, 131};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int xSize = 421;
    int ySize = 230;
    int px = 305;
    int py = 90;
    vector<int> x = {146, 182, 214, 15, 383, 63, 71, 175, 291, 76, 310, 112, 176, 119, 379, 150, 396, 386, 8, 401, 107, 221, 394, 252, 100, 41};
    vector<int> y = {9, 114, 89, 115, 161, 219, 121, 154, 51, 129, 118, 172, 49, 173, 74, 168, 28, 2, 47, 123, 171, 68, 149, 155, 194, 160};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int xSize = 67;
    int ySize = 469;
    int px = 66;
    int py = 269;
    vector<int> x = {58, 33, 26, 14, 11, 28, 22, 14, 61, 5, 17, 7, 16, 50, 51, 58, 28, 46, 30, 29, 62, 46, 53, 27, 50, 11, 21};
    vector<int> y = {81, 201, 316, 313, 103, 291, 40, 174, 319, 373, 361, 149, 324, 373, 169, 154, 280, 201, 466, 321, 454, 76, 466, 420, 14, 324, 168};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int xSize = 293;
    int ySize = 123;
    int px = 165;
    int py = 98;
    vector<int> x = {206, 243, 171, 274, 158, 170, 140, 185, 95, 198, 57, 218, 269, 149, 77, 39, 48, 206, 177, 198, 137, 286, 110, 285, 181, 17, 256, 207};
    vector<int> y = {118, 53, 104, 53, 27, 0, 59, 2, 67, 106, 16, 3, 100, 122, 43, 55, 61, 10, 123, 48, 26, 91, 41, 70, 60, 25, 43, 64};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int xSize = 844;
    int ySize = 670;
    int px = 496;
    int py = 463;
    vector<int> x = {359, 34, 477, 116, 48, 627, 149, 402, 274, 53, 729, 775, 321, 789, 675, 331, 276, 830, 782, 473, 683, 698, 300, 215, 714, 649, 650, 123, 28};
    vector<int> y = {325, 335, 343, 447, 315, 181, 76, 7, 285, 190, 666, 243, 4, 301, 476, 620, 491, 180, 545, 544, 58, 284, 124, 496, 529, 510, 470, 157, 55};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int xSize = 831;
    int ySize = 170;
    int px = 240;
    int py = 162;
    vector<int> x = {67, 308, 721, 579, 610, 210, 656, 87, 370, 695, 155, 57, 671, 5, 107, 707, 738, 500, 477, 790, 692, 671, 49, 630, 669, 809, 302, 2, 42, 778};
    vector<int> y = {93, 143, 51, 103, 45, 161, 94, 147, 118, 96, 117, 130, 9, 76, 138, 14, 163, 72, 8, 158, 13, 91, 100, 44, 105, 42, 48, 34, 97, 28};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int xSize = 991;
    int ySize = 747;
    int px = 796;
    int py = 586;
    vector<int> x = {611, 141, 793, 665, 410, 806, 825, 490, 393, 418, 808, 764, 29, 733, 18, 469, 17, 457, 292, 768, 703, 793, 914, 715, 371, 108, 117, 253, 91, 628, 972};
    vector<int> y = {351, 39, 371, 215, 182, 294, 721, 461, 326, 146, 345, 695, 231, 192, 513, 158, 721, 311, 647, 450, 226, 383, 402, 702, 403, 43, 86, 179, 695, 616, 257};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 195.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int xSize = 871;
    int ySize = 511;
    int px = 613;
    int py = 57;
    vector<int> x = {805, 65, 59, 477, 312, 496, 763, 506, 142, 437, 551, 83, 827, 295, 750, 757, 192, 660, 795, 110, 378, 83, 596, 300, 564, 774, 394, 726, 255, 264, 793, 573};
    vector<int> y = {232, 350, 364, 86, 454, 477, 167, 366, 104, 35, 430, 6, 226, 323, 223, 285, 375, 5, 72, 246, 80, 250, 254, 196, 55, 40, 110, 188, 90, 69, 27, 207};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 58.01374015765685;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int xSize = 609;
    int ySize = 849;
    int px = 449;
    int py = 528;
    vector<int> x = {390, 105, 261, 131, 322, 57, 39, 598, 2, 360, 70, 9, 522, 509, 465, 75, 510, 222, 335, 261, 306, 35, 382, 605, 256, 210, 121, 401, 445, 272, 152, 77, 558};
    vector<int> y = {530, 364, 772, 79, 771, 419, 311, 111, 562, 236, 477, 386, 234, 756, 562, 267, 426, 3, 87, 733, 212, 96, 759, 172, 280, 150, 782, 127, 67, 215, 533, 99, 541};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int xSize = 727;
    int ySize = 821;
    int px = 89;
    int py = 685;
    vector<int> x = {619, 436, 652, 465, 390, 457, 357, 512, 119, 551, 724, 133, 153, 546, 681, 313, 671, 580, 331, 328, 539, 618, 441, 246, 310, 534, 282, 393, 81, 97, 505, 434, 259, 362};
    vector<int> y = {351, 419, 221, 788, 680, 486, 45, 564, 708, 201, 340, 689, 440, 360, 401, 724, 704, 646, 410, 631, 419, 456, 509, 146, 529, 550, 168, 735, 432, 740, 85, 302, 621, 380};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 89.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int xSize = 617;
    int ySize = 280;
    int px = 128;
    int py = 208;
    vector<int> x = {455, 37, 524, 544, 382, 424, 412, 369, 173, 335, 570, 612, 226, 458, 66, 388, 367, 242, 85, 332, 566, 55, 25, 170, 19, 446, 64, 483, 186, 429, 287, 405, 365, 85, 326};
    vector<int> y = {137, 192, 25, 277, 68, 58, 95, 231, 115, 85, 237, 228, 159, 5, 45, 76, 214, 15, 25, 148, 43, 80, 3, 205, 43, 65, 193, 60, 17, 57, 170, 58, 156, 200, 24};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 72.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int xSize = 626;
    int ySize = 297;
    int px = 187;
    int py = 102;
    vector<int> x = {316, 114, 532, 351, 400, 127, 451, 148, 514, 358, 416, 63, 239, 429, 244, 516, 558, 323, 153, 243, 464, 125, 329, 34, 324, 364, 426, 195, 40, 120, 371, 60, 32, 375, 367, 478};
    vector<int> y = {200, 135, 101, 165, 282, 90, 202, 95, 254, 172, 256, 271, 265, 122, 153, 64, 232, 162, 244, 52, 159, 7, 291, 178, 89, 132, 288, 123, 145, 140, 107, 34, 123, 146, 176, 164};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int xSize = 813;
    int ySize = 32;
    int px = 331;
    int py = 5;
    vector<int> x = {11, 678, 581, 85, 434, 187, 640, 622, 218, 468, 659, 575, 470, 38, 224, 359, 620, 297, 79, 231, 429, 645, 256, 87, 611, 383, 701, 604, 514, 736, 788, 52, 480, 61, 507, 341, 123};
    vector<int> y = {17, 4, 27, 9, 6, 9, 16, 2, 4, 5, 13, 12, 15, 0, 18, 19, 10, 4, 11, 7, 27, 29, 1, 23, 0, 7, 10, 14, 15, 4, 12, 27, 32, 26, 24, 12, 0};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int xSize = 407;
    int ySize = 875;
    int px = 284;
    int py = 399;
    vector<int> x = {350, 391, 369, 336, 265, 103, 284, 209, 39, 275, 139, 24, 98, 295, 231, 0, 222, 235, 145, 127, 8, 146, 399, 177, 235, 248, 31, 18, 9, 335, 156, 0, 318, 86, 158, 395, 353, 47};
    vector<int> y = {282, 366, 444, 11, 10, 479, 118, 765, 403, 619, 168, 300, 372, 824, 40, 309, 80, 11, 2, 573, 585, 234, 226, 827, 480, 287, 795, 742, 9, 687, 266, 814, 238, 487, 298, 682, 116, 397};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int xSize = 366;
    int ySize = 808;
    int px = 277;
    int py = 183;
    vector<int> x = {288, 136, 161, 69, 341, 211, 75, 65, 187, 205, 119, 352, 239, 316, 101, 182, 2, 161, 96, 324, 50, 42, 219, 342, 236, 102, 153, 190, 245, 289, 137, 167, 338, 284, 133, 67, 167, 179, 89};
    vector<int> y = {456, 169, 571, 534, 611, 446, 495, 171, 55, 530, 175, 401, 177, 121, 229, 274, 58, 753, 156, 114, 560, 274, 260, 49, 195, 568, 242, 658, 421, 716, 329, 312, 490, 447, 336, 578, 446, 438, 649};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 89.90406531374188;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int xSize = 592;
    int ySize = 255;
    int px = 53;
    int py = 27;
    vector<int> x = {71, 398, 264, 579, 359, 166, 248, 164, 334, 46, 580, 126, 525, 496, 536, 439, 213, 527, 387, 414, 16, 73, 252, 109, 272, 426, 532, 584, 188, 76, 314, 0, 33, 451, 23, 151, 248, 364, 532, 201};
    vector<int> y = {156, 16, 54, 127, 149, 208, 174, 25, 89, 1, 51, 251, 207, 38, 103, 86, 61, 13, 62, 88, 89, 220, 13, 169, 226, 254, 182, 112, 61, 231, 127, 160, 19, 17, 206, 227, 44, 6, 27, 201};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 55.509008277936296;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int xSize = 645;
    int ySize = 273;
    int px = 412;
    int py = 240;
    vector<int> x = {18, 390, 343, 539, 367, 453, 149, 19, 595, 164, 558, 52, 416, 53, 42, 581, 9, 520, 328, 447, 640, 474, 445, 165, 544, 566, 185, 78, 170, 179, 636, 6, 275, 288, 311, 74, 118, 40, 449, 413, 38};
    vector<int> y = {44, 99, 112, 35, 75, 234, 257, 218, 129, 175, 227, 185, 203, 13, 195, 45, 84, 129, 186, 48, 251, 272, 8, 224, 33, 36, 202, 174, 90, 256, 56, 188, 176, 60, 191, 85, 184, 240, 60, 146, 53};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int xSize = 571;
    int ySize = 939;
    int px = 52;
    int py = 402;
    vector<int> x = {272, 417, 533, 103, 410, 341, 316, 23, 60, 398, 124, 367, 322, 219, 305, 13, 435, 285, 317, 489, 326, 46, 370, 453, 14, 384, 378, 271, 174, 508, 22, 238, 446, 545, 117, 223, 540, 150, 223, 570, 109, 85};
    vector<int> y = {634, 597, 679, 245, 245, 653, 698, 139, 676, 669, 14, 221, 641, 704, 136, 260, 784, 275, 895, 796, 591, 899, 895, 842, 712, 641, 109, 905, 83, 49, 569, 778, 672, 100, 667, 899, 39, 494, 366, 736, 120, 44};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 52.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int xSize = 277;
    int ySize = 307;
    int px = 163;
    int py = 106;
    vector<int> x = {230, 197, 156, 149, 5, 102, 74, 184, 261, 53, 38, 215, 96, 216, 223, 119, 277, 111, 0, 231, 162, 156, 45, 225, 148, 93, 150, 74, 4, 220, 45, 171, 6, 88, 213, 258, 35, 76, 212, 152, 160, 152, 131};
    vector<int> y = {101, 118, 46, 278, 212, 211, 242, 87, 108, 209, 29, 140, 272, 74, 189, 126, 123, 289, 282, 134, 239, 22, 41, 69, 302, 75, 141, 10, 199, 180, 64, 15, 197, 19, 7, 118, 13, 189, 168, 16, 14, 145, 72};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int xSize = 963;
    int ySize = 564;
    int px = 508;
    int py = 457;
    vector<int> x = {215, 135, 605, 871, 322, 111, 553, 328, 321, 262, 14, 761, 730, 191, 218, 828, 744, 550, 155, 43, 10, 569, 535, 947, 441, 105, 621, 471, 854, 660, 71, 777, 258, 853, 761, 608, 147, 813, 26, 786, 911, 677, 240, 156};
    vector<int> y = {310, 537, 393, 125, 293, 272, 404, 462, 276, 515, 23, 126, 431, 542, 458, 492, 37, 362, 224, 133, 137, 207, 23, 225, 550, 133, 214, 430, 401, 81, 478, 5, 31, 418, 498, 244, 509, 261, 389, 277, 263, 221, 203, 379};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 118.30887247875945;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int xSize = 429;
    int ySize = 937;
    int px = 306;
    int py = 543;
    vector<int> x = {170, 264, 414, 52, 185, 359, 93, 68, 10, 324, 114, 43, 284, 166, 366, 164, 406, 78, 62, 388, 75, 11, 216, 159, 361, 340, 258, 239, 388, 399, 423, 115, 419, 215, 271, 411, 312, 123, 44, 27, 205, 423, 287, 28, 118};
    vector<int> y = {241, 657, 259, 88, 573, 847, 580, 770, 916, 419, 696, 447, 294, 679, 267, 327, 810, 322, 399, 740, 453, 613, 451, 395, 779, 225, 851, 233, 788, 252, 593, 537, 184, 835, 66, 232, 374, 211, 657, 839, 757, 1, 36, 49, 859};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int xSize = 662;
    int ySize = 874;
    int px = 29;
    int py = 297;
    vector<int> x = {109, 3, 131, 391, 22, 193, 564, 67, 248, 412, 271, 138, 43, 638, 505, 253, 541, 289, 220, 235, 118, 165, 516, 19, 538, 438, 171, 443, 584, 535, 528, 59, 141, 78, 112, 83, 579, 1, 494, 164, 351, 57, 291, 15, 479, 586};
    vector<int> y = {151, 512, 855, 827, 103, 264, 89, 677, 761, 307, 805, 743, 446, 865, 427, 15, 393, 195, 13, 564, 368, 50, 487, 371, 241, 348, 419, 684, 94, 418, 662, 489, 38, 98, 790, 825, 776, 589, 476, 277, 572, 550, 22, 824, 170, 405};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 29.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int xSize = 407;
    int ySize = 322;
    int px = 113;
    int py = 229;
    vector<int> x = {309, 278, 347, 148, 339, 271, 105, 291, 66, 116, 179, 318, 207, 294, 247, 334, 287, 327, 226, 126, 340, 217, 267, 401, 41, 367, 221, 72, 158, 380, 336, 214, 71, 214, 73, 234, 135, 46, 206, 312, 10, 40, 142, 301, 111, 201, 101};
    vector<int> y = {151, 289, 152, 316, 142, 129, 13, 117, 274, 168, 261, 235, 305, 56, 60, 22, 307, 230, 178, 294, 293, 91, 163, 256, 8, 59, 130, 45, 64, 204, 129, 262, 46, 21, 59, 32, 239, 206, 115, 284, 11, 78, 182, 313, 210, 117, 314};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int xSize = 124;
    int ySize = 474;
    int px = 63;
    int py = 225;
    vector<int> x = {88, 26, 93, 42, 111, 47, 78, 82, 92, 44, 65, 66, 112, 69, 86, 50, 82, 97, 77, 5, 2, 37, 124, 88, 98, 6, 55, 62, 81, 98, 90, 54, 64, 72, 89, 35, 57, 2, 61, 67, 87, 71, 34, 112, 60, 69, 118, 62};
    vector<int> y = {340, 178, 366, 390, 382, 90, 440, 158, 280, 328, 220, 158, 62, 304, 336, 252, 243, 124, 105, 260, 210, 410, 306, 80, 399, 54, 10, 437, 406, 185, 69, 104, 315, 399, 5, 295, 19, 468, 92, 426, 160, 143, 102, 185, 198, 272, 317, 132};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int xSize = 228;
    int ySize = 827;
    int px = 176;
    int py = 423;
    vector<int> x = {123, 171, 74, 45, 172, 150, 129, 172, 86, 53, 132, 223, 158, 4, 210, 222, 10, 29, 111, 211, 35, 73, 112, 148, 49, 31, 159, 160, 56, 227, 146, 49, 153, 159, 78, 213, 213, 66, 131, 205, 133, 118, 112, 99, 193, 128, 128, 148, 69};
    vector<int> y = {408, 560, 432, 395, 391, 346, 145, 406, 212, 611, 770, 377, 130, 501, 187, 335, 271, 173, 282, 324, 554, 679, 756, 625, 292, 324, 56, 689, 554, 619, 155, 750, 308, 23, 10, 723, 66, 131, 45, 220, 800, 479, 708, 404, 67, 627, 204, 668, 807};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 52.35884909401567;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int xSize = 630;
    int ySize = 225;
    int px = 626;
    int py = 183;
    vector<int> x = {117, 270, 562, 579, 608, 346, 391, 33, 350, 486, 526, 102, 96, 627, 270, 236, 466, 319, 45, 103, 282, 56, 353, 301, 388, 96, 190, 246, 397, 539, 288, 409, 553, 367, 387, 573, 19, 480, 117, 546, 397, 146, 77, 487, 163, 596, 223, 313, 197, 265};
    vector<int> y = {73, 54, 185, 106, 7, 173, 177, 29, 196, 223, 220, 92, 210, 72, 78, 30, 74, 119, 21, 9, 59, 128, 197, 139, 206, 22, 10, 78, 166, 14, 206, 85, 3, 131, 29, 158, 69, 163, 221, 127, 107, 214, 167, 90, 54, 8, 114, 1, 47, 121};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int xSize = 999;
    int ySize = 897;
    int px = 241;
    int py = 168;
    vector<int> x = {593, 777, 411, 677, 213};
    vector<int> y = {696, 811, 128, 440, 155};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 539.2708272732069;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int xSize = 31;
    int ySize = 31;
    int px = 15;
    int py = 15;
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> y = {30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 17.059180079945225;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int xSize = 3;
    int ySize = 3;
    int px = 1;
    int py = 2;
    vector<int> x = {0};
    vector<int> y = {0};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int xSize = 4;
    int ySize = 4;
    int px = 4;
    int py = 4;
    vector<int> x = {0, 0, 4};
    vector<int> y = {0, 4, 0};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int xSize = 1000;
    int ySize = 1000;
    int px = 501;
    int py = 499;
    vector<int> x = {0, 0, 1000, 1000};
    vector<int> y = {0, 1000, 0, 1000};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 499.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int xSize = 1000;
    int ySize = 1000;
    int px = 501;
    int py = 501;
    vector<int> x = {1, 1, 1000, 998};
    vector<int> y = {1, 1000, 1, 999};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 499.00099597593595;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int xSize = 10;
    int ySize = 100;
    int px = 10;
    int py = 50;
    vector<int> x = {5};
    vector<int> y = {50};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int xSize = 10;
    int ySize = 100;
    int px = 10;
    int py = 50;
    vector<int> x = {5};
    vector<int> y = {50};
    CirclesOfDestruction* pObj = new CirclesOfDestruction();
    clock_t start = clock();
    double result = pObj->exitTime(xSize, ySize, px, py, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=9814&pm=5877
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
 
#define EPS 1e-10 
#define eq(a,b) ( ((a)-EPS <= (b)) && ((b) <= (a)+EPS) ) 
#define lt(a,b) ( (a)+EPS < (b) ) 
#define gt(a,b) ( (a)-EPS > (b) ) 
#define lte(a,b) ( (a)-EPS <= (b) ) 
#define gte(a,b) ( (a)+EPS >= (b) ) 
#define sq(a) ((a)*(a)) 
 
struct point { 
   double x, y;  
   point() { x = y = 0; } 
   point( const point &drugi ) { *this = drugi; } 
   point( double X, double Y ) { x = X; y = Y; } 
}; 
 
struct segment { 
   point a, b; 
   segment() {} 
   segment( const segment &drugi ) { *this = drugi; } 
   segment( const point &A, const point &B ) { a = A; b = B; } 
   segment( double X1, double Y1, double X2, double Y2 )  
      { a = point( X1, Y1 ); b = point( X2, Y2 ); } 
}; 
 
struct line { 
   double A, B, C; 
   line() { A = B = C = 0; }   
   line( const line &drugi ) { *this = drugi; } 
   line( double a, double b, double c ) { A = a; B = b; C = c; } 
   line( const segment &S ) {  
      A = S.b.y - S.a.y;  
      B = S.a.x - S.b.x; 
      C = A*S.a.x + B*S.a.y; 
   } 
   line( const point &A, const point &B ) { *this = line( segment( A, B ) ); } 
}; 
 
int mysgn( double val ) { 
   if( lt( val, 0 ) ) return -1;  
   if( gt( val, 0 ) ) return 1; 
   return 0; 
}        
double myhypot( double A, double B )  
{  return sqrt( A*A + B*B );  } 
 
int strana( const line &L, const point &T ) 
{  return mysgn( L.A*T.x + L.B*T.y - L.C );  } 
 
int ccw( const point &A, const point &B, const point &C ) 
{  return mysgn( (B.x-A.x)*(C.y-A.y) - (C.x-A.x)*(B.y-A.y) );  } 
 
line okomica( const line &L, const point &T ) { 
   line ret;  
   ret.A = L.B; ret.B = -L.A; 
   ret.C = ret.A*T.x + ret.B*T.y; 
   return ret; 
} 
point midpoint( const point &A, const point &B )  
{  return point( (A.x+B.x)/2, (A.y+B.y)/2 );  } 
 
bool intersects( const line &L, const point &P )  
{  return eq( L.A*P.x + L.B*P.y - L.C, 0 ); } 
 
bool intersects( const segment &S, const point &P ) { 
   return intersects( line(S), P ) &&  
      eq( fabs(S.b.x-P.x)+fabs(S.a.x-P.x), fabs(S.b.x-S.a.x) ) && 
      eq( fabs(S.b.y-P.y)+fabs(S.a.y-P.y), fabs(S.b.y-S.a.y) ); 
} 
bool intersects( const line &L1, const line &L2 )  
{  return !eq( L1.A*L2.B, L2.A*L1.B );  } 
 
bool intersects( const line &L, const segment &S )  
{  return strana( L, S.a ) * strana( L, S.b ) < 0;  } 
 
point intersect( const line &L1, const line &L2 ) { 
   return point( (L1.C*L2.B-L2.C*L1.B) / (L1.A*L2.B-L2.A*L1.B), 
                 (L1.A*L2.C-L2.A*L1.C) / (L1.A*L2.B-L2.A*L1.B) ); 
} 
point intersect( const line &L, const segment &S )  
{  return intersect( L, line(S) ); } 
 
double dist( const point &A, const point &B )  
{  return myhypot( A.x-B.x, A.y-B.y );  } 
 
double dist( const line &L, const point &T )  
{  return fabs(L.A*T.x + L.B*T.y - L.C) / myhypot( L.A, L.B ); } 
 
double dist( const segment &S, const point &T ) { 
   double a = dist( S.b, T ), b = dist( S.a, T ), c = dist( S.a, S.b ); 
   if( gte( sq(b), sq(a)+sq(c) ) ) return a; 
   if( gte( sq(a), sq(b)+sq(c) ) ) return b; 
   return dist( line( S ), T ); 
} 
 
class CirclesOfDestruction {  
   public:  
 
   int on_boundary( point p, double xSize, double ySize ) { 
      if( eq( p.x, 0.0 ) ) return 1; 
      if( eq( p.x, xSize ) ) return 1; 
      if( eq( p.y, 0.0 ) ) return 1; 
      if( eq( p.y, ySize ) ) return 1; 
      return 0; 
   } 
 
   double exitTime(int xSize, int ySize, int px, int py, vector <int> x, vector <int> y) {  
      vector<point> p; 
      p.push_back( point( 0, 0 ) ); 
      p.push_back( point( xSize, 0 ) ); 
      p.push_back( point( xSize, ySize ) ); 
      p.push_back( point( 0, ySize ) ); 
 
      int n = x.size(); 
      point A( px, py ); 
      for( int i = 0; i < n; ++i ) { 
         point B( x[i], y[i] ); 
         line L = okomica( line( A, B ), midpoint( A, B ) ); 
          
         for( int i = 0; i < p.size(); ++i ) { 
            int j = (i+1)%p.size(); 
            segment S( p[i], p[j] ); 
            if( intersects( L, S ) ) { 
               p.insert( p.begin() + i + 1, intersect( L, S ) ); 
               ++i; 
            } 
         } 
         for( int i = 0; i < p.size(); ++i ) { 
            if( strana( L, p[i] ) == strana( L, B ) ) { 
               p.erase( p.begin() + i ); 
               --i; 
            } 
         } 
      } 
 
      double ret = 1e10; 
      for( int i = 0; i < p.size(); ++i ) { 
         int j = (i+1)%p.size(); 
         if( on_boundary( p[i], xSize, ySize ) ) { 
            ret <?= dist( p[i], A ); 
            if( !on_boundary( p[j], xSize, ySize ) ) continue; 
            if( !on_boundary( midpoint( p[j], p[i] ), xSize, ySize ) ) continue; 
            ret <?= dist( segment( p[i], p[j] ), A ); 
         } 
      } 
      if( ret >= 1e9 ) return -1.0; 
      return ret; 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/