/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7575
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

class HittingPerfectTarget {
public:
    double getProbability(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2);
};

double HittingPerfectTarget::getProbability(vector<int> x1, vector<int> y1, vector<int> x2, vector<int> y2) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x1 = {-100, -100, 100, 100};
    vector<int> y1 = {-100, 100, -100, 100};
    vector<int> x2 = {-100, -100, 100, 100};
    vector<int> y2 = {-100, 100, -100, 100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
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
    vector<int> x1 = {-99, -98, 0};
    vector<int> y1 = {-99, 99, 0};
    vector<int> x2 = {99, 98, 0};
    vector<int> y2 = {-99, 99, 0};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.475186257765897E-5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x1 = {0, 0, 1, 1};
    vector<int> y1 = {0, 1, 0, 1};
    vector<int> x2 = {-54, -99, -100, -100};
    vector<int> y2 = {-54, 99, 100, -100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
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
    vector<int> x1 = {-1, 1, -30, 30, 0};
    vector<int> y1 = {-1, -1, 30, 30, 50};
    vector<int> x2 = {-2, 2, -60, 60, 0};
    vector<int> y2 = {-2, -2, 60, 60, 100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03895943169723522;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x1 = {-1, 1, -30, 30, 0};
    vector<int> y1 = {-1, -1, 30, 30, 50};
    vector<int> x2 = {-2, 2, -60, 60, 0};
    vector<int> y2 = {-2, -2, 40, 40, 41};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03551892279894062;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x1 = {-64, -77, 83, 91};
    vector<int> y1 = {51, -54, -94, -54};
    vector<int> x2 = {4, 92, 17, -91};
    vector<int> y2 = {-83, -43, 85, -35};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22479641593029875;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x1 = {-68, -81, 100};
    vector<int> y1 = {-6, 63, 81};
    vector<int> x2 = {-21, 33, 66};
    vector<int> y2 = {94, -59, 43};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.034454592708101285;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x1 = {-74, -94, 43, 92, 16, 51, -99, 97};
    vector<int> y1 = {-76, 75, 91, -66, -97, -92, -67, 84};
    vector<int> x2 = {96, 44, -86, -91, 81, 62, -72, -92};
    vector<int> y2 = {8, 100, -32, 93, -27, -59, -88, 72};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6302566768149304;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x1 = {-69, -90, -18, -55, 72, 52, -56, -94, -73, 97, 90};
    vector<int> y1 = {-94, -24, 80, 62, -79, -92, -99, 8, 43, 46, 75};
    vector<int> x2 = {95, -77, 56, -95, 14, -32, -88, -98, 54, 18, 98};
    vector<int> y2 = {-90, 64, 31, -14, -98, 72, -90, 21, -99, 67, -36};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5832776416425336;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x1 = {53, 98, -98, 98, -50, 93, -63, -91, 92, -3, 13, 35, -40, -73};
    vector<int> y1 = {-84, -45, -66, -6, -99, 77, 72, 40, -77, 97, 100, 95, -99, 67};
    vector<int> x2 = {53, 98, -98, 98, -50, 93, -63, -91, 92, -3, 13, 35, -40, -73};
    vector<int> y2 = {-84, -45, -66, -6, -99, 77, 72, 40, -77, 97, 100, 95, -99, 67};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8052028415138239;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x1 = {-86, -34, 45, -41, -96, 91, 9, 76, 48, -99, 96};
    vector<int> y1 = {81, -95, -95, -92, -62, 47, -100, 74, 89, 39, -84};
    vector<int> x2 = {-86, 74, 98, -62, 51, -5, 96, 2, -93, -48, 100};
    vector<int> y2 = {-50, 87, -23, 91, -55, 95, 79, -77, 56, -64, 25};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.632014059057944;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x1 = {81, -14, -84, -24, 98, 86, 40, -62, -89, -92, 89};
    vector<int> y1 = {-99, -100, 44, 85, -86, 83, 98, -94, -30, -84, 71};
    vector<int> x2 = {90, 96, -41, -88, -58, 41, 52, 62, -28, -97, 93};
    vector<int> y2 = {32, -83, 100, -1, -88, -99, 92, 83, -94, 97, 15};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7186950818049058;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x1 = {95, -84, 36};
    vector<int> y1 = {61, -67, -67};
    vector<int> x2 = {99, 56, -10};
    vector<int> y2 = {67, 24, 10};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00598995074379347;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x1 = {0, 100, 0};
    vector<int> y1 = {0, 0, 100};
    vector<int> x2 = {0, -100, 0};
    vector<int> y2 = {0, 0, 100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002499938120343556;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x1 = {0, -96, 72, -26};
    vector<int> y1 = {81, -96, 72, -69};
    vector<int> x2 = {-21, 69, -44, -73};
    vector<int> y2 = {-48, 77, 88, 14};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16430286379050024;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x1 = {-71, 100, -58, 70, 2};
    vector<int> y1 = {-94, -39, 93, 82, -86};
    vector<int> x2 = {45, -78, 45, -85, 96};
    vector<int> y2 = {-91, -42, 58, 9, -38};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3607088933442242;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x1 = {91, 80, -34, 27, -99, 48, -95, -100, -29};
    vector<int> y1 = {45, -58, 100, -83, 25, 97, -12, 82, -100};
    vector<int> x2 = {91, -100, -79, -60, 59, 93, -41, 93, -83};
    vector<int> y2 = {-46, 59, -1, -48, -98, 84, -92, 55, 100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6809237395113983;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x1 = {-31, -92, -84, -91, 99, 64, -36, -66, -99, 90, 95, 98, 62};
    vector<int> y1 = {-98, -79, -93, 72, -17, -97, 100, 97, -45, 42, -93, -61, 71};
    vector<int> x2 = {57, 87, -21, -78, -100, -99, -73, -85, 63, 90, 29, -46, 90};
    vector<int> y2 = {-94, -72, 93, 63, 19, -51, -94, -93, 90, 4, -95, 83, 80};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7613425410262122;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x1 = {-100, -100, -99};
    vector<int> y1 = {-100, 0, 100};
    vector<int> x2 = {100, 100, 99};
    vector<int> y2 = {100, 0, -100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x1 = {-100, -100, -99, -1};
    vector<int> y1 = {-100, 0, 100, 0};
    vector<int> x2 = {100, 100, 99, 1};
    vector<int> y2 = {100, 0, -100, 0};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x1 = {-51, -55, 72, -78, -97, 85, -94, -23, 95, 96, 30, -99};
    vector<int> y1 = {-94, 98, 47, 97, -40, 20, -66, -100, -71, -23, 75, 78};
    vector<int> x2 = {-58, -97, -64, -72, 57, 78, -76, 90, 89, 11, 49, -12};
    vector<int> y2 = {-62, 84, 98, -11, -95, 43, 95, -76, -50, 97, 89, -94};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6379297542140046;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x1 = {-87, 41, -75, 88, 96, -66};
    vector<int> y1 = {42, -63, -44, -58, 82, -67};
    vector<int> x2 = {77, 81, -10, -94, 85, -95};
    vector<int> y2 = {-86, 55, 42, 17, -45, -62};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4194945669661642;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x1 = {-92, -31, -11, 97, 98, 60, -88};
    vector<int> y1 = {-85, 25, 61, 48, 75, -81, -98};
    vector<int> x2 = {-94, -70, 52, -96, -11, 85, 95};
    vector<int> y2 = {-63, 98, -91, 53, -96, 98, -57};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47501299472785324;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x1 = {72, -21, -40, 26, 85, -97, 5, 98, 99, -90, 74, 100, -16, 47, -98};
    vector<int> y1 = {82, -94, 99, 98, -70, 64, -98, -59, 28, 74, -79, 4, 100, -89, -36};
    vector<int> x2 = {72, -21, -40, 26, 85, -97, 5, 98, 99, -90, 74, 100, -16, 47, -98};
    vector<int> y2 = {82, -94, 99, 98, -70, 64, -98, -59, 28, 74, -79, 4, 100, -89, -36};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8032969480953441;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x1 = {-96, -99, -24, -34, 2, -11, 99, 75, -87, 96};
    vector<int> y1 = {-96, -77, -90, 99, 100, 100, -77, -81, 42, 82};
    vector<int> x2 = {85, 95, -92, 74, -27, 67, 3, -88, -66, -56};
    vector<int> y2 = {98, -57, -46, -68, 94, -70, -83, 59, 84, -94};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7268631964555333;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x1 = {89, -91, 2, 96, -63, 84};
    vector<int> y1 = {52, -71, 66, 2, 65, -96};
    vector<int> x2 = {50, 54, -96, -27, 4, -83};
    vector<int> y2 = {-61, -90, 58, -75, 53, 98};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3034825870646766;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x1 = {-96, -99, -24, -34, 2, -11, 99, 75, -87, 96, 73, -66};
    vector<int> y1 = {-96, -77, -90, 99, 100, 100, -77, -81, 42, 82, 99, 89};
    vector<int> x2 = {-69, -92, 35, 47, -25, -95};
    vector<int> y2 = {-66, 57, -77, 88, -76, -24};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.459790599242593;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x1 = {99, -25, -93, -16, -44, -92, 98, -88, 73, -91, 51, 91};
    vector<int> y1 = {-93, 95, 29, 96, -98, -85, 75, -98, 93, 74, 98, -94};
    vector<int> x2 = {-40, -79, 95, 82, -18, 95};
    vector<int> y2 = {-49, -19, 87, -80, 74, -5};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5076607014677854;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x1 = {-98, 92, 91, 80, -34, 27, 48, -100, -29};
    vector<int> y1 = {-84, 66, 45, -58, 100, -83, 97, 82, -100};
    vector<int> x2 = {-71, 100, -58, 70, 2};
    vector<int> y2 = {-94, -39, 93, 82, -86};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5934754090245291;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x1 = {96, -96, -74, 4, 97, 93, 21, -91, -34};
    vector<int> y1 = {-38, -43, -71, -98, -3, 98, -98, 91, -90};
    vector<int> x2 = {28, -72, 64, -93, -97, -74};
    vector<int> y2 = {-33, -71, 82, -53, -4, 72};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4223162793000173;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x1 = {63, -78, -98, 80, 85, -30, -99, 28, -86, -19, 45};
    vector<int> y1 = {63, -95, 77, -5, -92, -98, -82, -96, 81, 85, -95};
    vector<int> x2 = {91, 9, -97, 76, -20, 48};
    vector<int> y2 = {47, -100, 42, 74, -77, 89};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4243459320313854;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x1 = {-45, -84, 43, -28, -98, 20, 100, -100, 100, -55, 67};
    vector<int> y1 = {96, -68, -83, -83, 15, -88, 95, -35, 89, -76, -40};
    vector<int> x2 = {-89, 86, -33, 82, -77};
    vector<int> y2 = {94, -93, 97, 62, -54};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5646394891215564;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x1 = {-94, -73, -92, 5, 91, 95, 7, 56, 51, -64};
    vector<int> y1 = {47, -90, 32, 98, 74, -48, -93, -89, 89, 100};
    vector<int> x2 = {25, 40, 100, -81, 54, -76};
    vector<int> y2 = {74, -100, -73, -94, 68, 39};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5660008415633276;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x1 = {96, -93, 14, -100, -38, 69, -100, 97, -78, -88};
    vector<int> y1 = {66, -89, -99, 80, 95, 91, 33, -83, 96, 93};
    vector<int> x2 = {-84, 71, 26, -73, 43, 62, -28};
    vector<int> y2 = {-21, 44, 82, -62, 93, -96, -75};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.450137372837306;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x1 = {-70, 83, -86, 67, -98, -31, 84, 44, 100, -97};
    vector<int> y1 = {-100, 73, 85, -79, -23, 93, -56, 93, 41, 77};
    vector<int> x2 = {14, 80, -94, 93, 80};
    vector<int> y2 = {98, -71, 17, 45, 76};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43434568451275957;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x1 = {12, -97, 88, 71, -68, 79, -28, 93, -88, 84, -77};
    vector<int> y1 = {-100, 36, -80, 89, 77, -93, 100, 7, -28, -89, -81};
    vector<int> x2 = {-52, -55, -36, 56, 73, 20, 68};
    vector<int> y2 = {-63, -49, 52, 28, -43, -84, -48};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30818544095443184;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x1 = {-100, 95, -3, -76, -100, 62, 57, 100, 84, -79, 43, 92};
    vector<int> y1 = {-29, -33, 91, -76, -17, 95, 96, 32, -45, 73, -88, 62};
    vector<int> x2 = {-22, -80, -99, 92, 81, -94};
    vector<int> y2 = {-78, -58, 52, -56, 62, 16};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5319917823816243;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x1 = {93, -97, 96, 15, 34, -86, -99, -100, 85, 7, 98};
    vector<int> y1 = {15, 98, -87, -97, 92, -94, -27, 3, 53, 98, -22};
    vector<int> x2 = {-87, 48, 31, -87, 7, -86};
    vector<int> y2 = {-57, -58, -92, 57, 78, -82};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4541224227123091;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x1 = {97, -99, 65, -98, 80, 7, -87, 100, -21, -66};
    vector<int> y1 = {-99, -24, 87, -71, 85, -96, 68, 81, 94, -79};
    vector<int> x2 = {73, -15, -72, -76, -76, 61, -66, 75};
    vector<int> y2 = {-70, -98, 11, -74, -38, -95, -94, 84};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5018935174871909;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x1 = {43, 92, 16, 51, -99, 97, -93, -78, -38};
    vector<int> y1 = {91, -66, -97, -92, -67, 84, 95, -81, -99};
    vector<int> x2 = {-80, 83, -70, -90, 55};
    vector<int> y2 = {89, -76, -12, 65, 53};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.40184648894829333;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x1 = {-98, 66, -95, -99, 97, 77, -25, -70};
    vector<int> y1 = {-75, 96, 48, 6, 54, -51, -93, 98};
    vector<int> x2 = {52, -71, 66, 16};
    vector<int> y2 = {-91, 84, 96, -63};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3403628623053885;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x1 = {-96, 98, -57, -12, 10, 94, -83, 84, -94};
    vector<int> y1 = {-82, 95, 91, -92, -87, -44, -88, -60, 85};
    vector<int> x2 = {-90, -49, -75, 53, 10, 98};
    vector<int> y2 = {4, -96, 4, -84, -4, -45};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.27838419841093043;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x1 = {-41, -99, 96, 54, -77, 100, -99, 95, -93};
    vector<int> y1 = {98, -4, 93, -91, 93, -16, 17, -75, -89};
    vector<int> x2 = {-74, -39, 48, -64, 86, -41, 17};
    vector<int> y2 = {44, -32, -48, 5, 28, 68, 93};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.36306032028910173;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x1 = {26, -30, 76, 82, 95, -77, 92, -95, 14, -88, -98};
    vector<int> y1 = {97, 98, 88, 43, -90, 64, -59, -14, -98, -90, 21};
    vector<int> x2 = {54, 18, -75, 98, -57};
    vector<int> y2 = {-99, 67, -54, -36, 7};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4037028786416178;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x1 = {91, -81, -85, -12, -97, 91, -90, 85, 80, -69};
    vector<int> y1 = {-47, -96, -86, 93, 8, -25, 88, -91, 84, 91};
    vector<int> x2 = {6, -4, 90, 16, -9, 42, -13};
    vector<int> y2 = {94, -40, 7, 98, -32, -98, 52};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2877899061904408;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x1 = {13, -90, -55, -35, 58, 100, 93, -88, -100};
    vector<int> y1 = {-100, 26, 75, 88, 96, -86, 81, -92, -23};
    vector<int> x2 = {-85, 52, 90, -99};
    vector<int> y2 = {95, 81, -65, -77};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5995643672186332;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x1 = {53, 91, -39, 92, -36, -96, -94, -68};
    vector<int> y1 = {100, -77, -100, 79, 98, 64, -39, -90};
    vector<int> x2 = {-67, 73, -99, 71, 54, 22, 43};
    vector<int> y2 = {32, -56, -18, -94, 90, -73, 97};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4518204994925868;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x1 = {90, 91, -27, -54, 41, -85, 57, 87, -21, -78, -100};
    vector<int> y1 = {75, -53, -94, 89, 96, -84, -94, -72, 93, 63, 19};
    vector<int> x2 = {17, -39, -99, 26, -73, -85, -4, -19, 48};
    vector<int> y2 = {-4, -7, -51, -58, -94, -93, -81, -90, -3};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21098487661196505;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x1 = {90, -36, -95, 89, 83, -58, -29, 53, 1, 59, -87, -56};
    vector<int> y1 = {55, -89, 67, -40, -81, 90, 95, 91, 94, -95, -33, -80};
    vector<int> x2 = {66, -77, -60, -77, -13, -69, -20};
    vector<int> y2 = {-54, -69, -94, -70, 58, -11, -86};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2881364322665281;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x1 = {72, -14, -98, -70, 82, -51, 85, -73, -93};
    vector<int> y1 = {83, -85, -51, -71, -91, -77, 12, 96, 14};
    vector<int> x2 = {-66, 100, 79, 100, -74, 73};
    vector<int> y2 = {44, -75, 86, -26, 74, -93};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3984554837751541;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x1 = {96, 2, -50, 57, -32, -99, -39, 99, 56, -100, -96};
    vector<int> y1 = {6, -94, -79, -100, -85, -17, 98, -81, 98, -42, 48};
    vector<int> x2 = {95, 98, -8, 73, 74, -80};
    vector<int> y2 = {47, 69, -84, 67, -28, 14};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3457587683473181;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x1 = {97, -100, 85, 91, 76, 95, 13, 81, -94, 25};
    vector<int> y1 = {-50, -94, 42, -69, 52, 10, 97, -92, 98, -96};
    vector<int> x2 = {39, -74, -48, 98, -96, 86};
    vector<int> y2 = {51, 54, 74, -63, -71, 25};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5308284448404742;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x1 = {77, -27, -95, -40, 47, -88, 10, -91, 97, 61, -95};
    vector<int> y1 = {92, -85, -92, 94, -74, 61, 98, -94, 1, -69, -51};
    vector<int> x2 = {-65, 58, -96, 19, 71, -79, 74};
    vector<int> y2 = {96, -30, 8, 20, -75, -49, -57};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.37073339768817604;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x1 = {-94, 72, -100, 66, 88, -65, -9, 100, -44};
    vector<int> y1 = {-49, -88, -6, -94, -51, 75, 99, 100, -97};
    vector<int> x2 = {61, 43, 12, -44, -86, -78};
    vector<int> y2 = {-15, -73, 81, 94, -59, 45};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.445781045023638;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x1 = {55, -98, 87, -79, -61, 69, 95, -96, -24, 50, 83, -39};
    vector<int> y1 = {-30, -84, 76, -87, 88, 87, 30, 63, -82, 98, -11, 95};
    vector<int> x2 = {-37, 95, -82, -96, -74, 92};
    vector<int> y2 = {57, -72, -81, -71, -5, 95};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5015717432736814;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x1 = {-89, 86, 77, 72, 93, -77, 47, -100, 86, -57, -63};
    vector<int> y1 = {-30, 56, 93, -91, -37, 86, 98, 77, -69, -78, 88};
    vector<int> x2 = {89, 95, 49, 6, -77, 83};
    vector<int> y2 = {-92, -63, 52, 81, -92, 9};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4250142323209822;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x1 = {27, 98, -46, 94, 75, 84, -94, -92};
    vector<int> y1 = {93, 67, -96, -77, -96, 91, -75, 97};
    vector<int> x2 = {39, 47, -34, -68, -89, -89, 64};
    vector<int> y2 = {-93, 20, -75, -56, -23, -38, -82};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.26788940867800304;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x1 = {54, 98, -100, 77, 36, -89, -95, -100, -94, 97, 83};
    vector<int> y1 = {-83, 64, -59, -68, 91, -82, -72, -28, 61, 5, 80};
    vector<int> x2 = {49, -93, -72, 1, -95, 85, 93};
    vector<int> y2 = {-89, -49, -73, 96, -23, -54, 96};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6084255340214351;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x1 = {99, 92, -69, 96, 59, -91, -79, -85, -94, 76};
    vector<int> y1 = {-38, -85, -91, 74, 98, -9, -74, 95, 8, 98};
    vector<int> x2 = {41, -59, 68, -61, -13, -55, 100};
    vector<int> y2 = {-65, -69, -19, 18, 88, 93, 51};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4789980446028564;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x1 = {-55, -92, -99, 97, -91, -81, 82, 99};
    vector<int> y1 = {-96, 42, -62, 21, -75, 83, -99, 88};
    vector<int> x2 = {79, -37, 44, -33, -67};
    vector<int> y2 = {48, -72, -86, 68, -14};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3904358802999926;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x1 = {-99, 79, -87, -100, 98, 38};
    vector<int> y1 = {100, -88, -97, 12, 95, -100};
    vector<int> x2 = {90, -32, 4, 92, 53};
    vector<int> y2 = {-90, -71, 38, -11, 88};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32830870523006855;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x1 = {61, -98, -79, -19, 77, -97, 100, -89, 97, -74, -7};
    vector<int> y1 = {-74, 50, 72, -91, 99, -32, -21, -66, 80, -99, 98};
    vector<int> x2 = {45, 6, -17, 99, -82, -15};
    vector<int> y2 = {-26, -43, 80, 55, 62, -30};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3147446845375114;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x1 = {99, -94, 84, 98, 97, -28, 81, -78, -100, 66, 16};
    vector<int> y1 = {2, -87, -92, 72, -56, -97, 85, -94, 95, 96, -99};
    vector<int> x2 = {-61, -99, -65, 4, -27, 74, 79};
    vector<int> y2 = {97, 36, -25, 87, -66, 34, -62};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5196901066805277;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x1 = {-80, 84, 98, -95, -85, 43, 46, -68, 97, 84, 95, -94};
    vector<int> y1 = {-97, -64, -34, -33, 78, -76, 90, 89, -52, 87, 32, -67};
    vector<int> x2 = {54, -71, 10, 35, -71, 89, -25};
    vector<int> y2 = {47, 75, -98, 85, -79, -57, 83};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5545159773272939;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x1 = {-99, 4, -12, -52, 98, -99, 51, -85, 8, 98, 75};
    vector<int> y1 = {0, 98, -96, 92, 11, -91, 72, 60, 97, 37, -100};
    vector<int> x2 = {-78, -81, -83, 55, 76, 60, 71};
    vector<int> y2 = {29, 0, -90, 52, -73, -100, 2};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5089477983218237;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x1 = {78, 60, 6, -86, 52, -45, 100, -94, -99, 91, -62};
    vector<int> y1 = {-82, -97, 81, -57, 54, -82, -28, 61, -7, 2, 79};
    vector<int> x2 = {41, -63, -41, 88, 42, -67, 17};
    vector<int> y2 = {-91, 36, 97, -83, 8, 47, -93};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.31231900200490087;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x1 = {100, -78, 78, -35, 57, 81, -93, 9, 61, 97};
    vector<int> y1 = {-75, 58, 41, 78, 59, -93, -92, 84, -99, -43};
    vector<int> x2 = {-77, 44, 4, -44, 23, 32};
    vector<int> y2 = {82, -29, -79, -86, 85, 60};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.36192173461052946;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x1 = {62, -98, -82, 89, 99, 98, 48, -64, 96};
    vector<int> y1 = {-94, -89, 49, -58, 37, -16, 100, 87, 68};
    vector<int> x2 = {-40, 61, -76, 58, 71, -70};
    vector<int> y2 = {68, 84, -22, -54, 14, -52};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.402960322764288;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x1 = {-81, -92, 4, 100, -97, -100, -94, 98, 87, -59, -98, -72, -53};
    vector<int> y1 = {-64, 86, -96, 43, 18, 66, -12, -81, 85, -97, 79, 98, 99};
    vector<int> x2 = {74, -79, 26, 1, -96, 76, 100, -89};
    vector<int> y2 = {74, 56, -95, 100, 27, -96, 47, -4};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6279795054577857;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x1 = {-98, -32, -96, -43, -92, 100, 71, 90, 80};
    vector<int> y1 = {-36, 99, 44, 92, -86, -51, -87, 58, 97};
    vector<int> x2 = {79, 58, -43, 76, -95};
    vector<int> y2 = {-82, 98, -6, 36, -74};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4274646667161704;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x1 = {-28, 93, -88, 76, 97, -57, 81, -87};
    vector<int> y1 = {100, -10, -91, 94, 67, -100, -98, 28};
    vector<int> x2 = {-51, -66, 0, -65, 2, -51};
    vector<int> y2 = {-76, 45, -100, -38, 47, 83};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23927625553822926;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x1 = {97, -35, -70, -98, -91, 96, 56, 90, -100};
    vector<int> y1 = {-79, 95, -87, -50, 70, 83, -96, 100, 52};
    vector<int> x2 = {84, -73, -81, 8, 97, 52};
    vector<int> y2 = {-71, -66, 4, -95, -38, 81};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5048142372713547;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x1 = {85, -99, -100, 99, -98, -78, 89, 39, 21, -13, 53, -71};
    vector<int> y1 = {62, 44, 34, 26, -87, 92, -17, -74, 98, -92, 92, 96};
    vector<int> x2 = {78, 74, -69, -16, -66, 71};
    vector<int> y2 = {-32, 97, 12, 88, 67, -70};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3992227915150615;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x1 = {91, -42, 97, -97, 12, 69, -76, -98, 53, -76};
    vector<int> y1 = {-75, 98, -36, -30, 99, -82, -96, 72, 90, 88};
    vector<int> x2 = {65, -80, -23, 51, 74, -11, -100};
    vector<int> y2 = {84, 37, -30, -62, 20, 100, 8};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42370238360436624;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x1 = {57, 85, -74, -92, -47, 3, -91, -90, -81, -72, 71};
    vector<int> y1 = {-98, 95, -92, 45, -100, 99, 4, -35, 85, 99, -97};
    vector<int> x2 = {-71, 35, -73, -83, 92, 56};
    vector<int> y2 = {78, 59, 73, 39, -38, -100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.36825821143041015;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> x1 = {-51, 99, 28, 100, -84, -85, 0, 84, -59, 96, 72};
    vector<int> y1 = {-97, -81, -96, -47, -68, -12, -98, 88, 84, 83, 89};
    vector<int> x2 = {38, 94, -97, -96, -88, 81, 26};
    vector<int> y2 = {-58, 50, 15, -74, 83, -30, 68};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5188485433528873;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> x1 = {100, 100, 99, -100, -100};
    vector<int> y1 = {99, -100, 100, -100, 100};
    vector<int> x2 = {-100, -100, -99, 100, 100};
    vector<int> y2 = {-99, 100, -100, 100, -100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999504962748447;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> x1 = {0, 1, 2, 3, 4, 5, 6, 7, 7, 6, 5, 4, 3, 2, 1};
    vector<int> y1 = {0, 3, 5, 6, 6, 5, 3, 0, -1, -4, -6, -7, -7, -6, -4};
    vector<int> x2 = {0, 1, 2, 3, 4, 5, 6, 7, 7, 6, 5, 4, 3, 2, 1};
    vector<int> y2 = {0, 3, 5, 6, 6, 5, 3, 0, -1, -4, -6, -7, -7, -6, -4};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017573822430137869;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> x1 = {0, 0, 1, 1};
    vector<int> y1 = {0, 1, 0, 1};
    vector<int> x2 = {-54, -99, -100, -100};
    vector<int> y2 = {-54, 99, 100, -100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> x1 = {-99, -98, 0};
    vector<int> y1 = {-99, 99, 0};
    vector<int> x2 = {99, 98, 0};
    vector<int> y2 = {-99, 99, 0};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.475186257765897E-5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> x1 = {-100, -100, 100, 100};
    vector<int> y1 = {-100, 100, -100, 100};
    vector<int> x2 = {-100, -100, 100, 100};
    vector<int> y2 = {-100, 100, -100, 100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> x1 = {-100, 0, -100};
    vector<int> y1 = {100, 0, -100};
    vector<int> x2 = {100, 0, 100};
    vector<int> y2 = {100, 0, -100};
    HittingPerfectTarget* pObj = new HittingPerfectTarget();
    clock_t start = clock();
    double result = pObj->getProbability(x1, y1, x2, y2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.475186257765897E-5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22671209&rd=10780&pm=7575
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
 
class HittingPerfectTarget {
public:
  double getProbability(vector <int>, vector <int>, vector <int>, vector <int>);
};
const int MAX=101;
struct point{ int x,y;} p1[MAX],p2[MAX];
point l[MAX],r[MAX],stk1[MAX],stk2[MAX];
int cmp(const void *a,const void*b)
{
     point *a1=(point *)a, *b1=(point *)b;
        if(a1->y<b1->y) return -1; 
  if(a1->y>b1->y) return 1;
        if(a1->x<b1->x) return -1; 
  if(a1->x>b1->x) return 1;
        return 0;
}
int cross(point p0,point p1,point p2)
{
    return (p1.x-p0.x)*(p2.y-p0.y)-(p2.x-p0.x)*(p1.y-p0.y);
}
void solve(int n,point p[MAX],point stk[MAX])
{
        int i,ls,rs;
    if(n==1) return ;
        qsort((void *)p,n,sizeof(p[0]),cmp);
        ls=rs=2; l[0]=r[0]=p[0]; l[1]=r[1]=p[1];
        for(i=2;i<n;i++)
    {
                while(rs>1&&cross(r[rs-2],r[rs-1],p[i])<0) rs--;
                while(ls>1&&cross(l[ls-2],l[ls-1],p[i])>0) ls--;
                l[ls++]=p[i]; r[rs++]=p[i];
        }
        for(n=i=0;i<rs;i++) stk[n++]=r[i];
        for(i=ls-2;i>0;i--) stk[n++]=l[i];
    stk[n]=stk[0];
}
 
double HittingPerfectTarget::getProbability(vector <int> x1, vector <int> y1, vector <int> x2, vector <int> y2) {
  int n,m,i,j,k,tol;
  n=x1.size(),m=x2.size();
  for(i=0;i<n;i++)
    p1[i].x=x1[i],p1[i].y=y1[i];
  for(i=0;i<m;i++)
    p2[i].x=x2[i],p2[i].y=y2[i];
  solve(n,p1,stk1);
  solve(m,p2,stk2);
  for(tol=0,i=-100;i<=100;i++)
    for(j=-100;j<=100;j++)
    {
      point p;
      p.x=i,p.y=j;
      for(k=0;k<n;k++)
        if(cross(stk1[k],stk1[k+1],p)<0)
          break;
      if(k<n)
        continue;
      for(k=0;k<m;k++)
        if(cross(stk2[k],stk2[k+1],p)<0)
          break;
      if(k<m)
        continue;
      tol++;
    }
  return 1.0*tol/(201*201);
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/