/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8540
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

class PolygonCover {
public:
    double getArea(vector<int> x, vector<int> y);
};

double PolygonCover::getArea(vector<int> x, vector<int> y) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0, 10, 0, -10};
    vector<int> y = {-10, 0, 10, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {-708, -241, -613};
    vector<int> y = {662, -120, -221};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 169035.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {-229, 69, 15, -70, 47, 191, -82, 140, 185, -148, 181, 109, -77, 182, 102};
    vector<int> y = {35, -159, -62, -116, -232, -216, -156, 154, -187, 143, -57, 186, -17, -136, -7};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1800.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {117, 36, -55, 177, -51, -69, 178, 19, -106};
    vector<int> y = {-162, -41, 25, -193, -202, -184, 212, 8, -10};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3780.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {-1, 2, -2, 0};
    vector<int> y = {-1, 0, 2, -1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {0, 0, -2, 2, -1, 1};
    vector<int> y = {1, 0, 2, 2, 3, 3};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {2, 0, -2, -1, 1};
    vector<int> y = {0, 2, 0, -2, -2};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {2, 0, -2, -1, 1, 0};
    vector<int> y = {0, 2, 0, -2, -2, 1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {1, -1, 1, -1};
    vector<int> y = {1, 1, -1, -1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1, -1, 1, -1, 1000};
    vector<int> y = {1, 1, -1, -1, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-1000, 1000, 500};
    vector<int> y = {-1000, -1000, 1000};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000000.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {-1000, 1000, 1000};
    vector<int> y = {-1000, -1000, 1000};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000000.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-1000, 1000, 500, 0};
    vector<int> y = {-1000, -1000, 1000, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {1, 0, -4, 0, 1, 4};
    vector<int> y = {1, 4, 0, -4, -1, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-1000, 0, 1000, 1};
    vector<int> y = {-1000, 1, 1000, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1999.5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-810, 9, -984, 34, 271, 385, -243, 111, -309};
    vector<int> y = {392, -267, -430, -938, 422, 856, -706, 942, -631};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100565.5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {-139, -648, -575, 753, -259, -800};
    vector<int> y = {-22, -101, 567, -271, 86, 192};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 57171.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-489, 866, 596, -889, -798, -903, 813, 672, -428};
    vector<int> y = {631, -100, 952, -592, -125, -551, -964, 252, 321};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 80300.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-997, -847, 93, -295, 188, 490};
    vector<int> y = {-754, 593, 126, 478, 16, -56};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 113529.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {718, 821, -235, -87, -894, 996};
    vector<int> y = {841, 344, -663, 645, -337, 265};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 306102.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {685, -635, 119, -404, -335, 135, -105, -948, 485, 541, -411, -974, 779, 779};
    vector<int> y = {727, 968, -891, -139, 564, 570, 578, 115, -681, 625, -345, -888, -925, 97};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 94937.5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {1000, 1000, -1000, -1000};
    vector<int> y = {1000, -1000, 1000, -1000};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 4000000.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {1000, 1000, -1000, -1000, 0};
    vector<int> y = {1000, -1000, 1000, -1000, 1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {-491, 892, -47, -663, 440, 851, 823, 605, 495, 368};
    vector<int> y = {719, -403, 914, 152, 394, 487, -453, -689, 931, -406};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 55989.5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-429, -782, 966, -939, -822, -549, 592, -971, 391, 972, 357};
    vector<int> y = {902, 785, 405, -157, -111, 800, 810, 337, 497, 782, -717};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 87618.5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {620, 437, -235, -799};
    vector<int> y = {273, -527, 318, 754};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 265494.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {524, 340, 314, -67};
    vector<int> y = {18, 351, 969, 756};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 83032.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {364, -711, -848, 486, 955, -694, -862, -699, -166, 373, 544, 553, 192, -393, -967};
    vector<int> y = {780, 38, 423, 908, 620, 578, 520, -348, -981, 42, -405, 550, 864, -962, 576};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 49419.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {268, -365, 144, 776, -651, -824, -202};
    vector<int> y = {82, 916, -927, -648, -987, -642, 905};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 199028.5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-366, 199, 476, -534, 6, -858};
    vector<int> y = {-27, -771, 4, 437, 813, 130};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 164285.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-621, -192, 655};
    vector<int> y = {881, 353, -261};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 91905.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {-907, -525, 327, -256, -8, 118, -84, 704, -620, -829, -786};
    vector<int> y = {475, 104, 951, 280, 297, 930, 968, -502, -468, 558, 695};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 58794.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {967, 680, 464, 944, 813};
    vector<int> y = {950, 608, -998, 579, -954};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 126881.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {966, 366, 114, -284, -613, -872, 196, 297, 542, -678, -148};
    vector<int> y = {106, -395, 930, -501, -409, -429, 536, 251, 862, -161, 636};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 70997.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {394, -743, -541, 132, 340};
    vector<int> y = {180, -893, -649, 718, 886};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 108301.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {203, 264, -209, 380};
    vector<int> y = {-372, -579, 282, -198};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 46321.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {-115, -768, 165, -502, -101, -696, -728};
    vector<int> y = {-48, 799, 896, 708, -427, -61, -415};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 108206.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {-401, 456, -163, -294, 819, -191, -810};
    vector<int> y = {-11, 549, 106, -683, -780, 260, -631};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30098.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-688, -634, -839, 686, -131, -355, 804, 614, 810, 821, 395, -859, -529};
    vector<int> y = {-817, -702, -756, 404, -587, -631, -383, -467, 858, -14, -773, 335, 510};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 78780.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {711, 315, -1, -761, -884, -424, 199, -450, -977, 449};
    vector<int> y = {-56, -573, -859, 999, 960, 298, 555, -449, -376, 674};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 78335.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {360, 271, -831, -402, 579, -527};
    vector<int> y = {154, -572, -473, 235, 749, -888};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 249653.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {-21, 155, 182, -235, -683, 518};
    vector<int> y = {337, 616, -982, 369, 244, -574};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 253786.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {-245, 149, 868, -303, 532, 67, 5, -477, -460, -652, -38, -964, -202, -183, -730};
    vector<int> y = {114, -446, -722, 670, -614, -383, -337, 166, -49, -973, 21, -449, 304, 70, -889};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 19883.5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {-689, -608, 519, 470, -894, -603, 814, 546, -269, -603, 920, -218, -5, 639};
    vector<int> y = {-287, 996, -352, -410, -68, 849, 128, 592, -534, 471, -618, 766, -753, 607};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 39857.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-785, -261, -490, -799, -56, -733};
    vector<int> y = {-984, -570, 298, -408, 326, -372};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 62874.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {803, -633, -333, -164, 667, 121, 53, -902};
    vector<int> y = {-515, 687, -808, -863, 619, 573, 51, -56};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 140722.5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {486, -108, 42, 955, -431, 435, 340, 927, 644, 147, 191};
    vector<int> y = {-191, -380, -195, 43, -936, -31, 112, 12, 465, -457, 678};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 18578.5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {390, 239, -967, -314, -36, 305, 1000, -200, 372, 724, -549};
    vector<int> y = {-446, 498, 456, 45, -985, 749, 497, -912, -676, 90, 724};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 77377.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {104, -94, 706, -106, 883, -748, -640, 818, -826, 799, -452};
    vector<int> y = {-409, 249, -334, 655, 663, -931, 281, -536, -11, -269, -306};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 88655.5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {8, -191, -303, 626, -723, 680, 21, -309, 903, -625};
    vector<int> y = {895, -874, 317, 657, -944, -593, 666, 541, 407, 721};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 111249.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {-796, 607, 723, -582, -996, 750};
    vector<int> y = {911, 909, 174, 665, -233, 957};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 143422.5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {823, -137, -962, -870, 893};
    vector<int> y = {-151, 536, 405, 640, 353};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 248823.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {379, -894, 246, -97, -976, -214, 922, 376, 702, -412, 546};
    vector<int> y = {-552, -23, 332, -441, 899, 77, 119, -398, 86, 818, 423};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 36426.5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {30, 132, 0};
    vector<int> y = {460, -462, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 37290.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-35, 421, 55, -247, 765, 414, 310, -923, 475, 208, -119, -965, 225};
    vector<int> y = {-926, -212, -405, 25, -262, 253, 565, 747, 121, -146, -27, 538, 887};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 65330.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-384, -997, -77, 567};
    vector<int> y = {529, -651, -316, -137};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 325096.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {-702, -28, 740, -315, -20, -37, -2, 78, -827, 887, -506, 900, -398, 95};
    vector<int> y = {852, 727, 298, 326, 881, 444, -832, 149, 795, 682, 155, 910, -311, -808};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 53623.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {-703, -342, 391, 458, 554, -707, -751, -457, -636, 936, 894, -355, 242};
    vector<int> y = {452, 168, 668, -755, -574, -325, 75, 575, 310, -318, -484, 124, -925};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 44553.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-926, -477, -575, -384, -363, -489, 128};
    vector<int> y = {630, -335, -1000, 627, 23, -922, 215};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 145185.5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {917, -772, -946, -603, -132, -331, 271, 993, -105, -412, -191, 239, 785};
    vector<int> y = {-209, 353, 86, -142, -976, 777, 245, -416, -165, 313, 533, 235, 852};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 34617.5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {663, -849, -418, 695, 360, 365, 265, 757, -545, 138};
    vector<int> y = {-902, 478, -106, 614, 316, 23, -247, 269, -455, 662};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 76776.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {567, -502, 574, -574, 755, 235, 925, 73, -817, 715};
    vector<int> y = {844, -645, 544, 617, 267, 804, 138, -655, 406, -349};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 162945.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {281, 723, 246, -809, -327, 740, -714, 648, -458, 790};
    vector<int> y = {882, -894, -688, -775, 357, -876, -78, -279, -930, -709};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 65345.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {185, -932, -763, -77, 68, 610, -54, -479, -730};
    vector<int> y = {184, -16, -38, -772, 308, -96, 307, 798, -70};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 16047.5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {-164, -348, -895, -821, 823, -598, -653, -864, 367, 887, -800, 519, 171, 116, 585};
    vector<int> y = {-363, -454, 52, -934, -995, -857, -707, 131, 544, -266, 265, 706, 622, 886, 904};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 69872.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {-165, -662, 757, -48, -603, -824};
    vector<int> y = {-764, 987, -22, -13, -449, -69};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 221912.5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {-768, 287, -405};
    vector<int> y = {-2, 674, -124};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 187049.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {-769, -470, -754, -723, 777, -5, -753, 563, -595};
    vector<int> y = {-403, -328, -197, -942, -357, -352, -398, 559, 341};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 17772.5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {978, -104, -226, 132, -731, 692, -760, 327, 523, -839, 893, 425, -985, 923, 545};
    vector<int> y = {905, 240, -389, -185, 936, 896, -447, -314, 495, 99, 538, 790, -523, 135, 655};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 68975.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {977, -861, -575, -653, -156, 22};
    vector<int> y = {62, -763, -19, 736, -962, 126};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 346718.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {913, 184, -729, 726, 254, 83, 786, -144, -359, 262, 690};
    vector<int> y = {-480, 490, 786, 442, 634, -168, 570, -947, -83, -760, 968};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 50318.5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {755, -553, 459, 507, 484, 240, -629, -673};
    vector<int> y = {683, -823, 314, 116, 78, -471, 157, -912};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33737.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {501, -187, -571, -197, 977, 937, 922, -909, 781, 391, 626, 40, -44, 898};
    vector<int> y = {-10, -698, -320, 429, 928, 777, -335, -228, 437, -724, -845, -465, -500, -383};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31604.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {57, -944, -920, 576, -449};
    vector<int> y = {-854, 301, 49, -651, -527};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 188649.5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x = {151, 82, 949, -168, 306, -498, -425, -270, 69, -40, -437};
    vector<int> y = {600, 306, 138, -813, 171, 804, 1, -468, -992, 615, -806};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 60318.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x = {-516, -367, -367, -236};
    vector<int> y = {378, -757, 841, -512};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 197264.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x = {-770, -444, 604, -939, 14, -253, -300, 938, 327, -812};
    vector<int> y = {-315, -632, 207, -198, 162, 685, 556, -382, 951, -208};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 82198.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x = {-581, -78, -869, 358, 507, 444, -750};
    vector<int> y = {993, -507, 15, 558, -546, 375, 64};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 135412.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x = {-740, -816, 762, -304, 737, 601, -164, 173, -534, -240, -325, 984, -213};
    vector<int> y = {155, 182, -900, -211, 456, 72, -349, 336, -87, -614, 2, -269, 575};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 27731.5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x = {817, 871, -30, 469};
    vector<int> y = {-246, -820, -530, 710};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 324821.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x = {816, 114, -380, -759, -115, -295, -102, 662, 291, -585};
    vector<int> y = {-647, 622, -160, -370, -453, -352, -535, 747, -614, 272};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 78077.5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> x = {657, -181, 808, -979, 559, -137, 41, 576, 314, -564, 290, -50, 872, -249, 185};
    vector<int> y = {516, -691, 926, 862, 548, -654, -505, 781, 195, -484, 477, 671, -736, 635, -455};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 35133.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> x = {657, -938, 459, -206, -867, -807, -707};
    vector<int> y = {115, 308, -706, -218, -907, 577, -40};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 244823.5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> x = {276, -610, -529, -482, -128, 238, -938, 467, 402, 89, -795, 545, -586, -152, 599};
    vector<int> y = {-145, -505, 787, -527, 589, 448, -779, 233, -723, -296, -508, 782, -960, 495, -149};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 35458.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> x = {-74, -341, 991, -453, 759, 804, 159, -895, -311, -785, 143, -240};
    vector<int> y = {908, 498, 802, 232, -168, 475, -442, -450, -152, -515, -469, -653};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 27598.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> x = {-328, -418, -39};
    vector<int> y = {216, 623, 611};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 76586.5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> x = {-297, -476, 468, 707, -158, -979, 594, -918, 197, 288, 800, 879, -329, 436};
    vector<int> y = {-915, 438, -865, -388, 429, 321, -303, 969, 564, 428, 352, 948, 368, -494};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30234.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> x = {-646, 551, 779, -37, 154};
    vector<int> y = {540, 0, -776, -550, -431};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 182976.5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> x = {-900, 473, -695};
    vector<int> y = {-153, 125, -968};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 587992.5;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> x = {942, 179, 493, 598, 877, 667, 575, -67};
    vector<int> y = {-992, 813, 118, 996, -581, 504, 222, -537};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33367.5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> x = {759, 386, -808, -810, 217, -893, -73, -268, 850, -114, 189, -796, -789, -222, 252};
    vector<int> y = {274, -584, 829, -256, -891, -10, -485, 400, -677, 666, -271, -816, -62, -696, 356};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 67599.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> x = {746, 704, 879, 645, 368, -903, 413, 670, -691, 653, 877, 319, 937, -476, -377};
    vector<int> y = {115, 365, -333, -145, -86, -522, 911, -664, -21, 736, 945, -152, 383, -10, -481};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 58992.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> x = {-192, 12, -997, 11, -876, -53, -341, 178, -6, 364, -775, 312, 868, 746, -13};
    vector<int> y = {-139, 288, 638, -848, 406, 174, 904, -899, -904, -715, -936, -400, -53, 27, -687};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 40606.5;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> x = {291, -535, -992, 100, 963, 644, 899, -837, -673, 978, -436, -568, 662, 829, -564};
    vector<int> y = {-45, 871, 506, 408, -839, 967, 305, 717, 193, 364, 603, 70, -730, 677, 240};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 63153.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> x = {-784, 919, 570, 189, 358, -659, 137, 593, 662, 33, -540, 110, 13, 912, 887};
    vector<int> y = {-394, -103, 817, -779, -527, 201, -293, -111, 847, -559, 142, 540, 151, -674, -391};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 62032.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> x = {-700, 81, -742, -726, -411, 786, -165, 623, 696, 843, 705, -138, 523, -729, -279};
    vector<int> y = {-553, -841, 3, -998, -297, 359, -150, -198, 870, -537, 400, 15, 399, -808, 272};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 65308.5;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> x = {805, -612, -617, -918, 346, -365, -919, 131, -178, 553, -947, 298, 897, 492, 85};
    vector<int> y = {-807, -475, 974, 299, 196, -946, -157, -433, 429, 13, 77, 209, -37, -772, 66};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 44055.5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> x = {266, 988, 825, -548, -735, 181, 313, 596, -194, 68, 497, -341, 111, -121, 621};
    vector<int> y = {-808, 769, 182, -929, 771, 386, -905, 590, 620, 62, -523, 955, 160, 49, 567};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30792.5;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> x = {-274, 587, -178, -621, 186, 726, -900, -498, -210, 26, -61, -979, 883, 823, -843};
    vector<int> y = {749, 455, -167, -155, -655, 160, 348, 56, 811, -332, 434, -300, 799, -687, -933};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 92243.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> x = {-770, -105, -53, -813, 500, -425, 348, -990, 917, -263, 731, -543, -744, 44, -480};
    vector<int> y = {938, 378, 361, -859, -163, 856, 342, -180, 371, 218, 554, -548, 363, -651, 863};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 48301.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> x = {0, -406, -743, -951, -994, -866, -587, -207, 207, 587, 866, 994, 951, 743, 406};
    vector<int> y = {-1000, -913, -669, -309, 104, 500, 809, 978, 978, 809, 499, 104, -309, -669, -913};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 175348.0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> x = {-87, -79, -90, -27, 85, 90, -73, -85, -110, 54};
    vector<int> y = {-10, -5, 9, 31, 18, -8, -13, 13, -8, -1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 361.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> x = {-114, -85, -665, -508, 421, -973, -941, 926, 426, 736, 368, -571, 530, 123, 135};
    vector<int> y = {383, -223, 793, 386, -351, -638, -310, 763, -460, 172, 211, -433, 782, -138, -933};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 83044.5;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> x = {-459, -33, -166, 0, -331, 224, -22, -142, 462, -36, 205, -355, -219, 327, 461};
    vector<int> y = {-9, 495, 442, 327, -64, -109, 104, 402, -347, -208, -118, -79, 216, 218, 395};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11382.5;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> x = {-242, -235, 353, 464, 0, -99, -253, -46, 688, 735, 325, 46, 676, -235, -35};
    vector<int> y = {253, 325, 353, -423, 0, -234, 243, 345, 35, 343, 0, 234, 353, -1, 23};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8963.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> x = {0, 2, 1, 4, 1, 100, 200, 300, 980, -668, -31, -851, 129, -3, 290};
    vector<int> y = {1, 1, 0, 0, 5, 100, 300, 350, -100, -793, 997, 407, -149, -163, 971};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 455.5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> y = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> x = {16, 73, 16, 1, 73, 0, 72, 15, 1, 15, 72, 0, 714, 715, 717};
    vector<int> y = {26, 39, 25, 1, 38, 1, 38, 26, 0, 25, 39, 0, 139, 139, 140};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> x = {18, -123, 15, 156, 109, 120, 541, 678, -59, 1, 8, -1, -2, -1, 0};
    vector<int> y = {1, 234, 12, -2, 418, 555, 1000, -5, 5, -1, 2, -1, 4, 3, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 626.5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> x = {1, 67, 656, 13, 4, 641, 6, 3, 6, 97, 97, 79, 77, 99, 314};
    vector<int> y = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 391.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> x = {123, -345, 235, 654, 121, 566, 878, -45, -145, 689, 862, -235, -236, 847, -345};
    vector<int> y = {-145, 689, 862, -235, -236, 847, -345, 123, -345, 235, 654, 121, 566, 878, -45};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20585.5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> x = {473, 307, -893, -686, 116, 398, -700, 576, -447, -551, 868, 779, -931, 515, 934};
    vector<int> y = {773, 400, -650, -243, -244, 900, -481, -756, -931, -966, -19, -189, -818, 814, -176};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 20403.0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 150};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {0, 2, 5, 9, 14, 20, 27, 35, 44, 54, 65, 77, 90, 104, 119};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> x = {999, 950, 977, 850, -970, 0, 0, 45, -450, 63, 75};
    vector<int> y = {0, 2, 4, 770, -60, 5, 100, 77, 50, 74, 75};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1678.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> x = {1, 50, -50, 0, 0};
    vector<int> y = {0, 1, 1, 50, -50};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> x = {395, 12, 657, 34, 23, 15, -376, -316, -12, 57, -865, 999, -199, 42, 123};
    vector<int> y = {15, -396, -36, -12, 57, -865, 999, -999, 42, 123, 345, 12, 657, 34, 23};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 11693.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> x = {215, 81, 36, 99, 821, 714, 505, 44, 513, 801, 900, 412, 150, 180};
    vector<int> y = {789, 512, 42, 213, 123, 144, 188, 153, 741, 215, 322, 238, 53, 127};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 13131.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> x = {1, 2, 3, 5, 16, 18, 19, 10, 22, 23, 25, 27, 38, 39, 30};
    vector<int> y = {0, 13, 25, 37, 5, 11, 22, 39, 4, 17, 28, 31, 8, 19, 20};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30.5;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> x = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, 66, 78, 91, 105};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> x = {5, -12, 338, 15, 1, 512, 42, 99, 15, -138, 12, -856, 38, 11, 994};
    vector<int> y = {-99, 771, 177, -412, 41, -612, 0, 223, 177, -99, 577, 510, 36, 166, 87};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 14228.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> x = {-437, -438, 541, 509, 665, -391, 216, -326, -684, -265, 657, -552, -751, -854, 125};
    vector<int> y = {452, -680, 875, -930, 262, 500, 647, -429, -388, -111, 981, -933, -314, -101, 546};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 13410.5;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> x = {-1, 0, 1, -100, 100, 0};
    vector<int> y = {-1, 1, -1, 100, 100, -100};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 151.5;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> x = {-1, -1, 1, 1, -1000, 1000};
    vector<int> y = {-1, 1, -1, 1, 0, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> x = {432, 34, 26, 88, -78, 89, 689, -23, 45, -98, 67, 13, 543, -35};
    vector<int> y = {24, 67, -875, 56, -2, -35, 678, 429, 987, 32, 1, -820, -43, 439};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 8688.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> x = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> y = {43, 234, 54, 345, 4, 23, 4, 534, -13, 342, 3, 23, 412, 123, 343};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 79.0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> x = {124, 865, 742, 965, 853, 651, 864, 984, 124, -84, -622, -84, -76, -93, -1};
    vector<int> y = {-94, -53, -86, -71, -62, 85, 94, 73, 62, 84, 93, 81, 84, 65, 86};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1405.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> x = {452, 567, 382, 688, 134, 897, 250, 235, 654, 846, 684, 873, 64, 345, 321};
    vector<int> y = {557, 324, 807, 364, 123, 457, 937, 682, 479, 186, 238, 174, 169, 652, 687};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6764.5;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    vector<int> y = {217, 192, 102, -19, 89, 12, 909, 832, 12, 329, 298, 128, 382, 982, 921};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 147.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> x = {1, 2, 8, 16, 32, 100, 150, 200, 250, 300, 350, 400, 450, 500, 4};
    vector<int> y = {2, 23, 34, 56, 101, 123, 205, 507, -103, -19, -1, -15, -500, -45, 203};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6434.0;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> x = {-1, 2, -2, 0};
    vector<int> y = {-1, 0, 2, -1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> x = {4, 1, 0, -4, 0, 1};
    vector<int> y = {0, 1, 4, 0, -4, -1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> x = {1, 100, 100, 99, 239, 523, 524, 522, -172, -247, -23, -999, 983, 239, 986};
    vector<int> y = {0, 0, -100, -99, 566, 566, -566, 565, 345, 234, 75, 99, 964, 234, -985};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 838.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> x = {0, 1, 0, -3, -3, 6};
    vector<int> y = {0, 0, -1, 3, -6, -1};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> x = {436, -437, -32, 0, 1000, -396, 1, 1, -75, -3, -965, 989, -34, -43, 569};
    vector<int> y = {1000, -1000, 230, -54, 0, -54, -733, -864, 961, 962, 34, 542, 654, -324, 78};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 37167.0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> x = {0, 0, 1};
    vector<int> y = {0, 1, 0};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> x = {0, 1, 4, 9, 16, 24, 345, 212, 577, 923, 135, 555, 567, 587, 234};
    vector<int> y = {123, 0, 15, 10, 5, 6, 7, 8, 9, 0, 10, 11, 12, 13, 14};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 373.5;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> x = {8, 9, 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 5, 6, 7};
    vector<int> y = {36, 45, 55, 66, 78, 91, 105, 0, 1, 3, 6, 10, 15, 21, 28};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> x = {0, 0, 1, 22, 22, 23};
    vector<int> y = {0, 1, 1, 2, 3, 3};
    PolygonCover* pObj = new PolygonCover();
    clock_t start = clock();
    double result = pObj->getArea(x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15982182&rd=11120&pm=8540
********************************************************************************
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
 
using namespace std;
typedef double real;
const int MaxN = 16, MaxL = 1 << MaxN;
const real MaxC = 1E25;
 
class PolygonCover
{
private:
 real f [MaxL];
 
 inline real area (real x1, real y1, real x2, real y2, real x3, real y3)
 {
  return (x1 - x2) * (y1 + y2) + (x2 - x3) * (y2 + y3) + (x3 - x1) * (y3 + y1);
 }
 
public:
 double getArea (vector <int> x, vector <int> y)
 {
  int i, j, k, l, m, n, p;
  real g;
  n = x.size ();
  assert (n == y.size ());
  m = 1 << n;
  f[0] = 0.0;
  for (i = 1; i < m; i++)
   f[i] = MaxC;
  for (i = 0; i < m; i++)
  {
   for (j = 0; j < n; j++)
    for (k = j + 1; k < n; k++)
     for (l = k + 1; l < n; l++)
     {
      p = i | (1 << j) | (1 << k) | (1 << l);
      g = fabs (area (x[j], y[j], x[k], y[k], x[l], y[l]));
      if (f[p] > f[i] + g)
       f[p] = f[i] + g;
     }
  }
  return f[m - 1] * 0.5;
 }
};
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/