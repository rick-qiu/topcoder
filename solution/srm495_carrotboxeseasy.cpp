/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11307
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

class CarrotBoxesEasy {
public:
    int theIndex(vector<int> carrots, int K);
};

int CarrotBoxesEasy::theIndex(vector<int> carrots, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<int> carrots = {5, 8};
    int K = 3;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> carrots = {5, 8};
    int K = 4;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
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
    vector<int> carrots = {4, 9, 5};
    int K = 18;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> carrots = {13, 75, 24, 55};
    int K = 140;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> carrots = {14, 36, 52, 86, 27, 97, 3, 67};
    int K = 300;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> carrots = {1};
    int K = 1;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> carrots = {44, 63};
    int K = 30;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> carrots = {1, 9, 53};
    int K = 49;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> carrots = {57, 20, 12, 52};
    int K = 40;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> carrots = {6, 9, 94, 31, 67};
    int K = 147;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> carrots = {33, 18, 48, 73, 69, 81};
    int K = 118;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> carrots = {50, 93, 65, 70, 52, 28, 91};
    int K = 30;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> carrots = {36, 21, 45, 11, 63, 85, 64, 2};
    int K = 217;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> carrots = {37, 77, 32, 30, 98, 76, 92, 91, 45};
    int K = 555;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> carrots = {26, 30, 31, 28, 27, 44, 35, 5, 61, 50};
    int K = 108;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> carrots = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int K = 3198;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> carrots = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int K = 5000;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> carrots = {11, 6, 11, 1, 97, 43, 86, 61, 48, 25, 32, 59, 87, 20, 1, 16, 56, 83, 75, 62, 7, 3, 69, 66, 71, 19, 24, 90, 7, 20, 31, 56, 33, 94, 75, 96, 11, 74, 56, 31, 96, 46, 6, 95, 49, 74, 54, 75, 61, 42};
    int K = 387;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> carrots = {45, 44, 41, 38, 80, 36, 50, 30, 11, 8, 18, 56, 88, 74, 27, 46, 13, 73, 96, 54, 54, 84, 18, 56, 18, 77, 78, 77, 100, 55, 29, 3, 62, 56, 71, 17, 95, 82, 31, 81, 5, 87, 60, 8, 55, 80, 3, 66, 54, 33};
    int K = 842;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> carrots = {33, 64, 18, 8, 84, 11, 68, 17, 47, 20, 29, 72, 8, 57, 21, 54, 29, 55, 31, 78, 49, 21, 5, 15, 11, 20, 26, 99, 32, 2, 10, 52, 23, 18, 53, 25, 96, 72, 54, 26, 79, 17, 43, 98, 89, 33, 18, 5, 44, 96};
    int K = 965;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> carrots = {8, 37, 3, 68, 46, 64, 41, 99, 97, 52, 8, 68, 98, 79, 51, 10, 31, 61, 17, 62, 94, 10, 54, 99, 31, 35, 44, 90, 89, 32, 93, 2, 75, 95, 94, 66, 50, 66, 38, 59, 42, 49, 44, 30, 16, 90, 10, 89, 55, 44};
    int K = 142;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> carrots = {72, 17, 65, 78, 13, 6, 12, 13, 83, 93, 24, 2, 25, 5, 38, 3, 5, 64, 92, 74, 76, 7, 60, 27, 97, 60, 64, 59, 78, 85, 48, 57, 49, 6, 55, 95, 60, 31, 24, 84, 25, 48, 3, 48, 77, 50, 93, 89, 5, 34};
    int K = 1969;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> carrots = {43, 15, 68, 29, 7, 92, 1, 93, 19, 99, 19, 69, 76, 80, 20, 64, 97, 80, 17, 67, 41, 33, 31, 15, 56, 72, 12, 80, 97, 1, 17, 4, 94, 56, 29, 82, 6, 30, 38, 98, 87, 58, 78, 83, 55, 7, 58, 30, 81, 42};
    int K = 1245;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> carrots = {53, 34, 61, 91, 17, 33, 7, 15, 86, 48, 28, 36, 59, 84, 11, 43, 75, 5, 72, 73, 6, 81, 72, 80, 18, 82, 81, 92, 76, 1, 47, 33, 69, 59, 27, 79, 67, 69, 55, 4, 64, 23, 12, 94, 49, 58, 32, 20, 13, 93};
    int K = 2257;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> carrots = {21, 24, 39, 10, 53, 23, 29, 77, 53, 18, 24, 3, 5, 37, 51, 36, 26, 29, 65, 27, 66, 76, 5, 65, 74, 59, 25, 22, 30, 78, 25, 27, 5, 52, 38, 39, 26, 80, 20, 76, 89, 98, 21, 79, 67, 98, 56, 75, 29, 3};
    int K = 64;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> carrots = {80, 83, 77, 62, 28, 92, 83, 75, 62, 43, 98, 34, 6, 19, 76, 39, 21, 58, 40, 89, 72, 28, 57, 69, 65, 71, 80, 68, 39, 12, 7, 47, 79, 71, 11, 85, 43, 97, 9, 72, 69, 77, 8, 13, 49, 18, 58, 19, 55, 91};
    int K = 1342;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> carrots = {40, 50, 85, 12, 75, 22, 37, 29, 86, 94, 68, 44, 32, 55, 40, 84, 84, 85, 16, 97, 89, 35, 52, 23, 14, 90, 26, 86, 98, 77, 16, 50, 41, 14, 89, 23, 80, 83, 41, 67, 47, 1, 64, 23, 79, 46, 37, 58, 100, 86};
    int K = 1222;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> carrots = {18, 93, 33, 99, 32, 46, 85, 87, 36, 3, 5, 51, 78, 88, 96, 93, 79, 38, 88, 20, 16, 88, 58, 54, 54, 89, 84, 86, 76, 90, 10, 54, 96, 98, 70, 71, 69, 39, 99, 84, 45, 92, 1, 43, 54, 86, 3, 90, 46, 20};
    int K = 798;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> carrots = {45, 70, 43, 61, 98, 1, 78, 26, 84, 79, 51, 4, 95, 81, 60, 57, 27, 21, 76, 97, 49, 18, 9, 27, 46, 83, 35, 67, 37, 46, 5, 44, 26, 56, 70, 60, 24, 80, 83, 8, 40, 57, 24, 19, 36, 98, 54, 9, 70, 35};
    int K = 739;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> carrots = {21, 7, 15, 81, 71, 80, 63, 76, 72, 15, 45, 64, 27, 44, 76, 24, 58, 12, 19, 62, 73, 12, 67, 24, 40, 75, 11, 3, 23, 46, 23, 37, 34, 48, 35, 79, 12, 10, 14, 38, 18, 14, 51, 4, 70, 88, 92, 50, 56, 6};
    int K = 1495;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> carrots = {69, 30, 53, 12, 51, 71, 46, 92, 91, 75, 65, 18, 59, 54, 17, 75, 84, 17, 8, 9, 95, 57, 64, 91, 50, 96, 83, 7, 50, 24, 50, 54, 65, 40, 65, 3, 74, 44, 12, 60, 48, 70, 77, 53, 34, 5, 49, 90, 66, 11};
    int K = 111;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> carrots = {98, 67, 23, 84, 29, 81, 46, 96, 18, 50, 20, 27, 30, 79, 37, 84, 75, 49, 39, 7, 14, 93, 92, 20, 91, 17, 49, 64, 18, 18, 42, 49, 99, 87, 23, 8, 26, 95, 25, 48, 84, 19, 48, 91, 39, 65, 96, 42, 78, 18};
    int K = 1608;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> carrots = {16, 11, 26, 86, 15, 72, 7, 54, 41, 99, 45, 10, 6, 24, 78, 81, 81, 69, 59, 71, 97, 52, 44, 67, 39, 74, 32, 53, 35, 82, 63, 99, 2, 40, 99, 12, 85, 74, 59, 17, 44, 79, 75, 38, 30, 16, 72, 68, 58, 36};
    int K = 1688;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> carrots = {93, 49, 5, 92, 65, 79, 9, 56, 68, 74, 26, 2, 27, 66, 88, 100, 25, 17, 50, 11, 54, 24, 59, 54, 3, 56, 60, 7, 88, 58, 4, 83, 85, 88, 11, 43, 71, 62, 87, 2, 49, 98, 76, 42, 19, 81, 77, 16, 34, 55};
    int K = 2099;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> carrots = {56, 71, 93, 23, 54, 2, 24, 79, 91, 21, 43, 68, 53, 91, 83, 76, 60, 93, 73, 43, 12, 63, 95, 17, 76, 25, 85, 7, 80, 74, 8, 67, 67, 43, 78, 82, 75, 35, 87, 18, 93, 99, 49, 58, 54, 21, 15, 21, 12, 6};
    int K = 2292;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> carrots = {90, 79, 4, 18, 16, 56, 61, 6, 54, 55, 12, 40, 70, 32, 5, 35, 87, 36, 17, 46, 66, 28, 77, 35, 1, 80, 3, 60, 52, 71, 46, 54, 48, 52, 19, 14, 84, 62, 31, 21, 66, 80, 42, 76, 68, 44, 48, 58, 21, 97};
    int K = 1918;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> carrots = {47, 88, 48, 2, 70, 44, 33, 79, 48, 47, 36, 65, 48, 53, 10, 96, 28, 3, 22, 14, 91, 18, 37, 24, 87, 18, 52, 41, 28, 32, 87, 18, 26, 48, 19, 39, 30, 26, 100, 72, 90, 55, 81, 52, 33, 74, 40, 20, 11, 91};
    int K = 249;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> carrots = {63, 48, 55, 85, 18, 98, 18, 67, 37, 16, 48, 9, 18, 66, 62, 41, 71, 1, 1, 35, 36, 86, 78, 31, 82, 80, 24, 93, 63, 84, 39, 89, 19, 76, 57, 67, 29, 5, 32, 36, 88, 59, 95, 64, 93, 10, 51, 63, 50, 74};
    int K = 2610;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> carrots = {8, 9, 68, 79, 90, 95, 47, 92, 87, 81, 29, 35, 71, 61, 36, 86, 70, 96, 88, 27, 56, 32, 67, 11, 61, 32, 99, 94, 80, 91, 93, 82, 100, 28, 40, 43, 82, 93, 98, 78, 59, 42, 72, 11, 93, 41, 68, 100, 9, 20};
    int K = 3130;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> carrots = {11, 69, 57, 59, 88, 34, 69, 38, 33, 57, 13, 29, 24, 35, 79, 16, 39, 56, 3, 94, 9, 66, 2, 2, 67, 7, 59, 53, 81, 14, 64, 37, 35, 43, 79, 61, 21, 91, 77, 27, 4, 22, 70, 70, 15, 100, 4, 95, 39, 61};
    int K = 2278;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> carrots = {1, 52, 90, 12, 44, 64, 8, 58, 6, 41, 18, 91, 73, 45, 76, 42, 17, 11, 32, 50, 2, 1, 61, 62, 2, 61, 48, 2, 12, 12, 43, 53, 43, 17, 21, 65, 12, 82, 6, 95, 45, 52, 88, 12, 92, 95, 15, 20, 78, 76};
    int K = 2104;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> carrots = {78, 1, 87, 15, 82, 23, 73, 70, 98, 51, 17, 46, 23, 95, 64, 32, 51, 35, 5, 79, 68, 3, 31, 24, 77, 17, 26, 51, 38, 87, 98, 44, 55, 95, 50, 49, 26, 21, 45, 11, 7, 33, 12, 48, 44, 10, 83, 83, 47, 26};
    int K = 2334;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> carrots = {14, 36, 52, 86, 27, 97, 3, 67};
    int K = 300;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> carrots = {13, 75, 24, 55, 50, 50, 50, 50};
    int K = 299;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> carrots = {1, 2};
    int K = 3;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> carrots = {5, 8};
    int K = 3;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> carrots = {100, 100, 100, 100, 100};
    int K = 500;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> carrots = {100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99, 100, 99};
    int K = 4969;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> carrots = {5, 3, 6, 1, 9};
    int K = 4;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> carrots = {2, 2, 10};
    int K = 4;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> carrots = {5, 8};
    int K = 4;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> carrots = {5, 5};
    int K = 2;
    CarrotBoxesEasy* pObj = new CarrotBoxesEasy();
    clock_t start = clock();
    int result = pObj->theIndex(carrots, K);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22918242&rd=14424&pm=11307
********************************************************************************
#include <vector> 
using namespace std; 
class CarrotBoxesEasy { 
public: 
  int theIndex(vector<int> carrots, int k) { 
    int highestIndex = -1; 
    int highestCarrots = 0; 
    for (int l = 0; l < k; l++) { 
      highestCarrots = 0; 
      highestIndex = -1; 
      for (int i = 0; i < carrots.size(); i++) { 
        if (carrots[i] > highestCarrots) { 
          highestCarrots = carrots[i]; 
          highestIndex = i; 
        } 
      } 
      carrots[highestIndex]--; 
    } 
    return highestIndex; 
  } 
};

********************************************************************************
*******************************************************************************/