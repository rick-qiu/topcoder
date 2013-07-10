/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2996
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

class grafixClick {
public:
    vector<int> checkSaveButton(vector<int> mouseRows, vector<int> mouseCols);
};

vector<int> grafixClick::checkSaveButton(vector<int> mouseRows, vector<int> mouseCols) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> mouseRows = {0, 20, 30, 100};
    vector<int> mouseCols = {55, 66, 77, 88};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> mouseRows = {99, 101, 399, 0};
    vector<int> mouseCols = {66, 50, 200, 599};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> mouseRows = {10, 20, 30, 30, 30, 30, 34, 35, 345};
    vector<int> mouseCols = {10, 20, 30, 50, 60, 80, 34, 35, 345};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> mouseRows = {222, 32, 22, 222, 31, 111, 111, 39, 99};
    vector<int> mouseCols = {99, 99, 55, 44, 333, 555, 45, 54, 180};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 7};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> mouseRows = {99, 99, 55, 44, 333, 355, 25, 145, 180};
    vector<int> mouseCols = {62, 222, 62, 222, 111, 111, 61, 99, 99};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> mouseRows = {50, 48, 30, 5, 19, 2, 36, 56, 36, 43, 20, 26, 23, 10, 7, 10, 50, 17, 12, 13, 59, 23, 35, 7, 37, 13, 38, 20, 13, 21, 37, 32, 14, 38, 15, 10, 13, 13, 26, 5, 0, 23, 7, 9, 38, 27, 3, 59, 9, 56};
    vector<int> mouseCols = {146, 65, 49, 45, 109, 131, 25, 140, 133, 103, 71, 93, 90, 82, 91, 103, 53, 88, 38, 112, 54, 120, 101, 63, 74, 65, 66, 85, 71, 30, 125, 65, 108, 150, 146, 38, 21, 66, 74, 142, 75, 143, 45, 73, 85, 75, 52, 31, 24, 143};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 11, 12, 24, 26, 27, 31, 38, 44, 45};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> mouseRows = {30, 12, 23, 9, 55, 26, 57, 51, 46, 26, 6, 38, 32, 22, 13, 52, 58, 12, 45, 47, 53, 1, 44, 18, 7, 10, 41, 1, 20, 2, 4, 20, 25, 50, 29, 44, 21, 46, 12, 49, 26, 50, 54, 36, 12, 38, 26, 6, 29, 13};
    vector<int> mouseCols = {84, 136, 117, 129, 141, 114, 111, 140, 61, 38, 49, 145, 133, 34, 119, 37, 115, 102, 133, 119, 78, 28, 76, 84, 148, 82, 90, 97, 147, 110, 87, 38, 117, 38, 106, 50, 129, 67, 24, 111, 62, 29, 94, 121, 138, 108, 131, 74, 42, 129};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 40};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> mouseRows = {9, 18, 29, 42, 34, 30, 8, 34, 59, 23, 35, 31, 33, 16, 34, 45, 58, 6, 7, 53, 6, 11, 48, 1, 30, 33, 41, 33, 59, 15, 38, 0, 4, 5, 39, 14, 48, 50, 6, 3, 7, 12, 10, 19, 45, 0, 19, 47, 3, 41};
    vector<int> mouseCols = {45, 143, 40, 118, 61, 132, 84, 88, 79, 92, 71, 147, 82, 28, 97, 47, 98, 85, 78, 33, 30, 58, 102, 48, 105, 100, 113, 28, 38, 63, 150, 135, 113, 146, 26, 108, 118, 137, 64, 96, 47, 86, 107, 142, 116, 78, 86, 37, 141, 64};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 9, 10, 12, 14};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> mouseRows = {47, 54, 0, 13, 46, 5, 4, 23, 55, 45, 27, 54, 8, 29, 6, 8, 41, 56, 37, 31, 9, 27, 31, 22, 39, 24, 21, 0, 46, 7, 23, 0, 16, 5, 56, 15, 58, 32, 49, 5, 42, 12, 42, 32, 35, 32, 8, 55, 57, 12};
    vector<int> mouseCols = {73, 128, 79, 92, 95, 90, 83, 129, 39, 103, 94, 66, 90, 102, 121, 55, 81, 69, 21, 67, 71, 145, 87, 69, 47, 88, 110, 54, 46, 87, 90, 136, 108, 120, 23, 49, 150, 147, 147, 79, 38, 118, 41, 83, 44, 72, 69, 90, 34, 62};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 19, 22, 23, 25, 30, 43, 45};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> mouseRows = {13, 7, 58, 28, 30, 40, 37, 28, 48, 13, 49, 53, 14, 47, 54, 14, 31, 46, 59, 44, 54, 51, 54, 32, 21, 30, 40, 17, 4, 58, 21, 39, 48, 3, 39, 44, 37, 26, 0, 45, 17, 45, 30, 26, 36, 30, 34, 13, 34, 16};
    vector<int> mouseCols = {92, 72, 90, 81, 139, 42, 28, 22, 101, 53, 103, 125, 144, 21, 145, 57, 96, 73, 63, 47, 20, 104, 60, 44, 147, 131, 97, 134, 52, 133, 51, 68, 93, 48, 100, 49, 48, 93, 52, 28, 110, 23, 104, 44, 123, 24, 126, 102, 129, 116};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 16, 30, 31, 37};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> mouseRows = {53, 31, 50, 18, 44, 59, 34, 1, 25, 48, 48, 5, 51, 47, 18, 24, 22, 46, 30, 13, 40, 49, 50, 54, 8, 8, 33, 38, 14, 31, 48, 31, 37, 48, 57, 24, 35, 44, 14, 23, 36, 30, 14, 36, 46, 37, 35, 12, 2, 2};
    vector<int> mouseCols = {59, 31, 121, 69, 39, 78, 138, 32, 44, 94, 79, 135, 87, 150, 44, 56, 77, 50, 138, 122, 81, 129, 30, 128, 75, 142, 58, 99, 30, 82, 79, 79, 66, 141, 123, 62, 34, 127, 136, 26, 44, 40, 43, 81, 71, 82, 128, 99, 56, 108};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 16, 26, 27, 29, 31, 32, 35, 43, 45};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> mouseRows = {46, 3, 25, 15, 38, 26, 23, 13, 33, 13, 19, 42, 37, 53, 41, 51, 39, 18, 34, 59, 26, 50, 47, 53, 48, 52, 50, 38, 24, 1, 19, 40, 38, 30, 7, 55, 50, 31, 28, 3, 28, 9, 46, 52, 1, 48, 7, 44, 36, 53};
    vector<int> mouseCols = {143, 107, 23, 31, 41, 81, 133, 65, 53, 124, 37, 128, 93, 117, 64, 55, 71, 55, 100, 126, 80, 129, 108, 57, 92, 46, 137, 107, 70, 68, 96, 29, 20, 147, 33, 33, 51, 45, 53, 47, 36, 125, 129, 42, 54, 99, 31, 127, 48, 84};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 12, 16, 20, 28, 38};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> mouseRows = {35, 52, 49, 1, 36, 39, 29, 27, 51, 41, 35, 42, 25, 48, 20, 4, 31, 50, 12, 8, 17, 48, 19, 28, 58, 56, 16, 43, 9, 19, 4, 52, 33, 44, 59, 44, 10, 27, 9, 7, 45, 9, 30, 59, 20, 38, 42, 43, 47, 30};
    vector<int> mouseCols = {60, 46, 60, 35, 110, 107, 36, 134, 93, 61, 78, 107, 141, 148, 99, 33, 34, 67, 57, 61, 88, 73, 56, 24, 87, 24, 106, 112, 89, 113, 99, 63, 113, 91, 77, 83, 71, 46, 46, 55, 48, 114, 147, 79, 140, 124, 107, 114, 91, 128};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 14};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> mouseRows = {45, 9, 31, 11, 36, 0, 3, 6, 22, 46, 17, 41, 35, 55, 28, 37, 40, 19, 1, 1, 0, 11, 45, 20, 4, 8, 52, 31, 51, 34, 13, 16, 6, 10, 7, 0, 9, 44, 17, 6, 3, 45, 38, 16, 26, 42, 29, 32, 24, 58};
    vector<int> mouseCols = {23, 120, 22, 138, 125, 109, 35, 72, 148, 91, 146, 120, 33, 83, 147, 117, 61, 64, 51, 114, 96, 30, 119, 88, 113, 34, 140, 123, 81, 47, 96, 149, 75, 148, 79, 112, 62, 62, 121, 23, 132, 136, 114, 96, 101, 130, 24, 91, 40, 134};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 47};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> mouseRows = {37, 25, 42, 15, 53, 45, 17, 42, 18, 29, 23, 41, 40, 25, 18, 20, 56, 39, 21, 56, 28, 20, 52, 45, 0, 10, 7, 29, 42, 38, 47, 2, 34, 35, 12, 59, 51, 29, 49, 35, 20, 42, 46, 56, 8, 20, 44, 5, 21, 12};
    vector<int> mouseCols = {100, 84, 98, 85, 97, 109, 122, 127, 102, 74, 87, 86, 132, 129, 24, 128, 55, 76, 23, 124, 95, 43, 48, 102, 118, 143, 75, 62, 135, 29, 130, 51, 143, 77, 71, 58, 90, 122, 39, 82, 127, 23, 143, 54, 48, 87, 27, 73, 131, 122};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 9, 10, 17, 20, 27, 33, 39, 45};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> mouseRows = {56, 32, 0, 36, 23, 48, 31, 18, 36, 56, 8, 42, 58, 57, 37, 39, 28, 36, 54, 6, 48, 8, 44, 29, 45, 32, 37, 5, 2, 15, 4, 4, 2, 5, 5, 22, 54, 20, 35, 44, 24, 23, 28, 12, 31, 17, 4, 18, 32, 24};
    vector<int> mouseCols = {150, 65, 106, 62, 143, 85, 124, 105, 106, 56, 150, 146, 129, 32, 62, 59, 61, 25, 27, 97, 39, 121, 122, 97, 36, 47, 23, 71, 54, 45, 103, 113, 31, 29, 65, 123, 32, 49, 113, 58, 26, 112, 97, 92, 76, 76, 62, 48, 127, 126};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 14, 15, 16, 23, 42, 44};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> mouseRows = {34, 9, 26, 10, 49, 42, 2, 19, 27, 48, 35, 8, 48, 45, 23, 29, 16, 35, 52, 36, 28, 36, 23, 19, 57, 36, 44, 57, 13, 14, 51, 48, 15, 35, 39, 48, 23, 1, 51, 3, 58, 57, 24, 38, 38, 33, 15, 50, 51, 38};
    vector<int> mouseCols = {68, 138, 63, 56, 82, 112, 73, 91, 108, 109, 77, 61, 101, 45, 92, 103, 91, 105, 70, 55, 126, 116, 129, 69, 32, 70, 146, 70, 68, 69, 48, 119, 77, 90, 39, 59, 69, 36, 39, 39, 35, 101, 134, 77, 32, 144, 44, 27, 136, 117};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 10, 14, 19, 25, 33, 36, 43};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> mouseRows = {57, 15, 19, 6, 21, 2, 3, 14, 59, 44, 19, 9, 33, 33, 25, 19, 56, 50, 26, 58, 38, 2, 11, 52, 11, 44, 48, 39, 7, 26, 24, 42, 13, 51, 38, 42, 6, 54, 50, 38, 58, 32, 42, 30, 30, 50, 32, 41, 40, 48};
    vector<int> mouseCols = {119, 59, 138, 49, 119, 43, 26, 126, 25, 120, 94, 46, 48, 65, 100, 106, 119, 104, 66, 46, 147, 52, 22, 130, 75, 43, 96, 135, 130, 136, 64, 67, 54, 33, 51, 60, 139, 29, 41, 65, 127, 54, 143, 77, 37, 67, 137, 55, 25, 73};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 18, 30, 34, 39, 41, 43};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> mouseRows = {54, 54, 17, 34, 12, 57, 49, 14, 47, 30, 41, 27, 38, 29, 36, 43, 19, 13, 23, 34, 50, 37, 16, 9, 34, 45, 14, 15, 57, 33, 6, 30, 39, 31, 3, 14, 3, 21, 59, 56, 16, 52, 27, 24, 33, 2, 47, 28, 17, 49};
    vector<int> mouseCols = {124, 116, 82, 52, 112, 27, 40, 127, 40, 23, 136, 113, 104, 131, 62, 131, 110, 125, 133, 135, 92, 68, 127, 72, 118, 125, 135, 117, 49, 35, 102, 111, 25, 21, 29, 119, 122, 104, 53, 31, 121, 103, 31, 113, 134, 55, 25, 96, 71, 139};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 14, 21, 47};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> mouseRows = {10, 26, 11, 17, 29, 9, 31, 46, 21, 16, 50, 55, 0, 28, 25, 31, 56, 18, 59, 50, 52, 14, 10, 45, 56, 9, 9, 17, 4, 16, 40, 48, 9, 10, 1, 12, 22, 49, 29, 57, 20, 57, 13, 39, 57, 7, 41, 8, 4, 38};
    vector<int> mouseCols = {31, 103, 90, 28, 28, 85, 132, 125, 110, 43, 48, 100, 147, 126, 149, 48, 119, 141, 135, 45, 29, 79, 39, 141, 133, 94, 38, 150, 131, 114, 101, 110, 135, 139, 46, 143, 131, 117, 149, 78, 113, 60, 124, 60, 93, 76, 40, 26, 105, 64};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43, 49};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> mouseRows = {36, 10, 32, 17, 25, 19, 20, 42, 2, 47, 53, 28, 40, 33, 47, 26, 49, 57, 49, 6, 28, 58, 45, 46, 5, 5, 50, 13, 10, 28, 56, 18, 38, 36, 6, 11, 25, 43, 23, 20, 4, 18, 32, 41, 25, 19, 4, 51, 6, 20};
    vector<int> mouseCols = {74, 68, 69, 37, 108, 144, 95, 124, 73, 119, 61, 52, 99, 129, 128, 109, 103, 136, 132, 27, 95, 137, 32, 99, 121, 43, 41, 64, 111, 62, 81, 56, 143, 28, 39, 44, 107, 81, 23, 126, 37, 103, 98, 113, 28, 75, 87, 49, 43, 58};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6, 11, 20, 29, 42, 49};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> mouseRows = {36, 38, 57, 58, 22, 44, 2, 22, 1, 40, 27, 6, 58, 47, 21, 48, 41, 18, 34, 46, 13, 9, 36, 36, 19, 2, 4, 37, 12, 39, 47, 33, 1, 3, 7, 23, 33, 45, 40, 36, 11, 51, 46, 18, 4, 3, 33, 58, 22, 9};
    vector<int> mouseCols = {29, 91, 42, 118, 23, 89, 126, 117, 55, 133, 145, 74, 85, 76, 74, 106, 39, 27, 116, 40, 86, 145, 90, 121, 94, 102, 85, 83, 88, 47, 150, 114, 82, 76, 132, 131, 122, 117, 52, 117, 65, 89, 137, 32, 56, 134, 43, 115, 59, 127};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 14, 22, 27, 48};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> mouseRows = {20, 46, 23, 23, 20, 3, 57, 35, 51, 16, 31, 36, 42, 48, 38, 52, 21, 39, 52, 31, 15, 45, 45, 14, 10, 13, 28, 44, 47, 38, 6, 48, 27, 5, 11, 41, 58, 13, 26, 32, 44, 5, 37, 4, 18, 17, 2, 49, 53, 49};
    vector<int> mouseCols = {104, 117, 130, 42, 63, 78, 85, 85, 54, 31, 68, 84, 142, 84, 125, 115, 94, 64, 95, 72, 20, 128, 111, 133, 60, 113, 65, 112, 107, 138, 105, 85, 52, 35, 125, 52, 118, 134, 23, 53, 70, 41, 66, 84, 95, 117, 44, 53, 116, 139};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 10, 11, 16, 17, 19, 26, 32, 39, 42};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> mouseRows = {18, 0, 23, 44, 5, 49, 8, 5, 40, 13, 5, 9, 38, 11, 56, 6, 27, 6, 57, 49, 38, 37, 22, 24, 10, 25, 55, 21, 57, 38, 42, 25, 52, 10, 12, 29, 49, 8, 6, 15, 55, 54, 21, 13, 4, 38, 41, 25, 33, 24};
    vector<int> mouseCols = {84, 88, 96, 122, 96, 46, 136, 75, 83, 148, 110, 129, 73, 121, 117, 105, 98, 31, 28, 90, 56, 130, 134, 101, 115, 73, 88, 107, 118, 123, 128, 55, 137, 59, 102, 90, 67, 69, 77, 119, 90, 127, 125, 120, 76, 140, 23, 139, 121, 99};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 12, 16, 20, 25, 31, 35, 49};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> mouseRows = {9, 3, 10, 10, 28, 6, 11, 6, 34, 26, 27, 7, 32, 3, 48, 16, 31, 40, 52, 47, 33, 36, 45, 35, 38, 32, 22, 45, 52, 34, 19, 30, 2, 27, 24, 43, 8, 6, 26, 15, 1, 58, 52, 33, 32, 55, 39, 22, 43, 37};
    vector<int> mouseCols = {106, 49, 54, 83, 65, 56, 27, 58, 32, 126, 134, 114, 144, 29, 112, 145, 78, 32, 43, 146, 116, 99, 124, 103, 37, 148, 83, 109, 104, 79, 106, 92, 43, 45, 104, 87, 131, 93, 48, 92, 150, 51, 118, 91, 104, 98, 79, 144, 130, 140};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 16, 21, 26, 29, 31, 43, 46};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> mouseRows = {50, 6, 26, 11, 22, 48, 44, 57, 3, 17, 40, 53, 40, 9, 16, 37, 50, 49, 34, 27, 29, 37, 49, 8, 37, 38, 36, 9, 54, 45, 43, 8, 39, 10, 52, 8, 35, 33, 39, 39, 15, 52, 37, 39, 32, 55, 56, 54, 51, 6};
    vector<int> mouseCols = {86, 61, 94, 25, 126, 117, 60, 127, 75, 133, 82, 31, 30, 83, 43, 119, 67, 148, 117, 33, 122, 125, 71, 149, 130, 59, 40, 87, 118, 145, 64, 63, 70, 91, 99, 136, 68, 72, 83, 91, 150, 130, 56, 50, 114, 79, 124, 95, 20, 57};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 25, 32, 36, 37, 38, 39, 42, 43};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> mouseRows = {20, 27, 23, 30, 31, 24, 32, 16, 58, 10, 43, 47, 9, 2, 36, 58, 42, 43, 22, 39, 35, 24, 6, 20, 55, 58, 15, 57, 52, 28, 38, 36, 35, 13, 12, 31, 58, 38, 11, 54, 8, 16, 52, 30, 16, 9, 39, 45, 42, 8};
    vector<int> mouseCols = {33, 100, 125, 93, 68, 119, 80, 58, 82, 137, 48, 99, 114, 80, 101, 121, 133, 41, 21, 108, 28, 22, 87, 102, 138, 75, 61, 70, 133, 145, 49, 57, 56, 49, 111, 118, 80, 31, 127, 28, 56, 57, 60, 63, 41, 66, 52, 122, 106, 149};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 6, 31, 32, 43, 46};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> mouseRows = {45, 52, 4, 44, 8, 32, 34, 44, 22, 56, 22, 13, 1, 46, 52, 21, 48, 33, 42, 6, 57, 51, 56, 37, 8, 20, 24, 11, 6, 13, 51, 55, 26, 34, 55, 1, 29, 12, 38, 20, 11, 11, 28, 20, 12, 32, 29, 56, 19, 43};
    vector<int> mouseCols = {65, 121, 148, 21, 29, 105, 48, 81, 58, 49, 20, 135, 43, 37, 104, 143, 79, 141, 64, 63, 46, 112, 94, 106, 96, 36, 116, 139, 65, 125, 53, 90, 25, 141, 52, 52, 94, 91, 126, 68, 133, 23, 60, 62, 104, 38, 92, 42, 146, 56};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 36, 39, 42, 43, 46};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> mouseRows = {3, 36, 9, 57, 9, 44, 47, 23, 58, 27, 39, 25, 49, 52, 23, 28, 38, 8, 2, 12, 20, 25, 52, 57, 40, 17, 57, 34, 4, 8, 18, 21, 5, 45, 33, 40, 59, 9, 25, 30, 12, 25, 32, 25, 41, 52, 51, 26, 59, 58};
    vector<int> mouseCols = {23, 59, 78, 70, 127, 102, 66, 23, 36, 148, 43, 98, 139, 94, 109, 129, 95, 82, 136, 76, 104, 114, 116, 55, 135, 27, 32, 22, 119, 133, 134, 54, 44, 24, 113, 25, 65, 27, 34, 109, 38, 89, 54, 109, 117, 121, 76, 44, 34, 129};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 11, 16, 31, 41, 42};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> mouseRows = {57, 28, 18, 25, 36, 12, 33, 44, 13, 32, 32, 51, 11, 27, 8, 51, 17, 34, 10, 16, 47, 57, 20, 57, 32, 14, 13, 37, 10, 16, 49, 37, 52, 8, 18, 44, 50, 43, 11, 1, 21, 22, 17, 35, 28, 53, 56, 16, 11, 44};
    vector<int> mouseCols = {146, 22, 41, 88, 123, 99, 43, 110, 25, 64, 141, 110, 70, 34, 99, 103, 60, 64, 142, 109, 133, 144, 72, 68, 25, 32, 21, 140, 30, 105, 32, 72, 114, 97, 35, 131, 103, 110, 133, 81, 125, 36, 76, 78, 77, 47, 50, 94, 22, 20};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 17, 22, 31, 43, 44};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> mouseRows = {42, 1, 39, 44, 36, 35, 35, 2, 39, 45, 44, 22, 24, 19, 14, 37, 19, 20, 16, 11, 43, 44, 59, 1, 43, 46, 20, 27, 22, 23, 44, 55, 4, 28, 54, 7, 50, 31, 29, 23, 5, 23, 14, 36, 0, 59, 27, 33, 29, 22};
    vector<int> mouseCols = {109, 63, 37, 39, 22, 127, 99, 131, 31, 73, 65, 93, 116, 33, 96, 75, 112, 42, 84, 76, 112, 34, 53, 139, 57, 109, 48, 105, 142, 72, 84, 69, 23, 147, 109, 41, 149, 111, 116, 73, 117, 48, 86, 139, 101, 124, 123, 87, 83, 114};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 11, 15, 29, 39, 47, 48};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> mouseRows = {25, 26, 15, 49, 45, 43, 34, 39, 26, 45, 5, 0, 21, 13, 26, 38, 21, 51, 49, 2, 14, 43, 5, 39, 22, 11, 1, 29, 15, 30, 28, 31, 26, 57, 20, 41, 2, 22, 7, 10, 8, 20, 8, 7, 28, 28, 42, 57, 55, 26};
    vector<int> mouseCols = {27, 70, 150, 44, 28, 133, 99, 127, 119, 78, 35, 139, 23, 147, 41, 70, 138, 23, 91, 144, 34, 125, 87, 29, 39, 64, 119, 122, 78, 50, 43, 27, 72, 60, 138, 46, 45, 36, 20, 58, 142, 114, 39, 124, 88, 107, 107, 134, 47, 117};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 15, 29, 32, 44};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> mouseRows = {25, 19, 11, 0, 2, 37, 22, 9, 43, 17, 10, 31, 24, 57, 13, 57, 11, 11, 50, 29, 16, 47, 10, 50, 17, 8, 19, 27, 27, 11, 12, 42, 38, 25, 42, 17, 0, 17, 44, 16, 27, 27, 40, 56, 21, 22, 23, 21, 59, 6};
    vector<int> mouseCols = {90, 91, 147, 31, 69, 74, 50, 72, 122, 38, 103, 114, 48, 138, 146, 40, 63, 108, 55, 110, 77, 138, 107, 141, 32, 74, 99, 131, 66, 55, 148, 58, 90, 48, 118, 74, 89, 80, 73, 57, 69, 119, 97, 20, 114, 81, 31, 62, 136, 104};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 6, 28, 32, 40, 45, 47};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> mouseRows = {25, 32, 3, 23, 6, 29, 47, 39, 9, 14, 12, 15, 44, 38, 4, 50, 53, 54, 59, 35, 26, 3, 11, 12, 18, 21, 20, 37, 25, 21, 36, 24, 55, 7, 50, 20, 41, 56, 38, 5, 14, 29, 7, 37, 59, 6, 8, 57, 55, 47};
    vector<int> mouseCols = {118, 58, 57, 118, 39, 132, 26, 100, 28, 139, 53, 40, 46, 149, 26, 89, 36, 121, 123, 86, 85, 97, 147, 93, 64, 131, 126, 121, 62, 119, 31, 51, 21, 78, 91, 133, 130, 91, 46, 140, 141, 37, 31, 104, 52, 121, 92, 136, 83, 112};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 19, 20, 28, 31};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> mouseRows = {24, 20, 59, 45, 41, 22, 26, 2, 23, 14, 34, 28, 30, 8, 36, 22, 47, 19, 40, 7, 27, 28, 2, 16, 36, 49, 37, 54, 40, 34, 12, 0, 9, 59, 31, 25, 44, 15, 50, 11, 36, 49, 42, 45, 13, 14, 53, 38, 45, 49};
    vector<int> mouseCols = {120, 86, 72, 81, 118, 91, 121, 72, 22, 53, 102, 22, 148, 112, 100, 41, 80, 130, 46, 70, 90, 67, 133, 78, 147, 115, 104, 56, 92, 108, 34, 81, 129, 32, 46, 149, 102, 109, 42, 101, 22, 93, 74, 130, 129, 97, 39, 58, 65, 112};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 20, 21, 47};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> mouseRows = {53, 46, 20, 54, 41, 4, 57, 51, 23, 18, 42, 21, 32, 14, 20, 27, 38, 20, 20, 17, 41, 29, 54, 58, 44, 5, 45, 3, 45, 37, 0, 1, 54, 1, 10, 10, 24, 23, 43, 15, 31, 2, 9, 43, 27, 23, 27, 42, 45, 43};
    vector<int> mouseCols = {128, 96, 99, 123, 124, 148, 139, 92, 102, 122, 47, 69, 49, 28, 97, 48, 54, 92, 37, 100, 50, 60, 111, 139, 125, 78, 46, 146, 144, 119, 71, 55, 25, 36, 113, 49, 39, 57, 55, 109, 76, 62, 68, 45, 133, 57, 87, 147, 140, 22};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 11, 14, 16, 17, 21, 37, 40, 45, 46};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> mouseRows = {9, 54, 31, 6, 17, 38, 27, 33, 2, 45, 7, 5, 1, 35, 26, 29, 38, 36, 41, 51, 31, 58, 43, 6, 25, 58, 33, 21, 44, 27, 6, 50, 31, 45, 48, 12, 53, 11, 24, 18, 5, 2, 45, 8, 34, 15, 13, 24, 43, 0};
    vector<int> mouseCols = {90, 133, 36, 147, 36, 70, 45, 150, 30, 64, 68, 92, 51, 101, 77, 79, 150, 120, 137, 62, 21, 102, 145, 87, 59, 142, 61, 30, 36, 134, 57, 93, 77, 36, 112, 111, 71, 83, 79, 28, 86, 96, 38, 62, 81, 91, 147, 122, 56, 64};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 14, 15, 24, 26, 32, 38, 44};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> mouseRows = {30, 38, 23, 10, 6, 31, 34, 36, 27, 55, 22, 10, 43, 14, 58, 10, 20, 50, 22, 23, 4, 58, 28, 56, 50, 44, 52, 37, 39, 28, 17, 38, 34, 6, 29, 1, 11, 51, 56, 7, 51, 1, 37, 11, 18, 22, 31, 30, 55, 36};
    vector<int> mouseCols = {145, 42, 36, 80, 35, 149, 29, 125, 78, 147, 99, 118, 69, 41, 49, 139, 39, 36, 31, 44, 107, 121, 57, 117, 22, 143, 39, 121, 139, 114, 105, 48, 21, 112, 121, 150, 97, 122, 83, 39, 98, 131, 117, 127, 43, 30, 51, 82, 135, 141};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 10, 22, 46, 47};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> mouseRows = {41, 29, 4, 19, 57, 37, 58, 28, 44, 5, 8, 0, 8, 26, 29, 10, 36, 38, 56, 0, 47, 5, 7, 3, 49, 43, 57, 29, 12, 27, 46, 58, 52, 29, 34, 16, 55, 36, 45, 16, 45, 56, 25, 55, 28, 28, 11, 14, 4, 1};
    vector<int> mouseCols = {72, 134, 105, 130, 146, 147, 111, 89, 48, 20, 82, 113, 117, 63, 71, 98, 41, 134, 123, 67, 40, 74, 92, 65, 62, 42, 85, 126, 144, 103, 88, 73, 37, 25, 106, 129, 51, 136, 149, 94, 80, 96, 75, 59, 137, 24, 82, 77, 20, 66};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 13, 14, 42};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> mouseRows = {33, 29, 28, 33, 2, 37, 15, 36, 19, 45, 43, 42, 35, 32, 17, 7, 48, 41, 42, 57, 48, 45, 23, 12, 12, 59, 9, 5, 28, 11, 41, 46, 16, 38, 13, 55, 52, 59, 33, 36, 36, 9, 23, 36, 48, 26, 50, 7, 33, 34};
    vector<int> mouseCols = {60, 56, 32, 94, 148, 111, 53, 145, 93, 39, 55, 100, 61, 78, 94, 81, 43, 50, 39, 77, 26, 75, 65, 134, 146, 39, 119, 23, 120, 102, 37, 127, 140, 142, 34, 86, 102, 115, 62, 122, 42, 82, 58, 54, 122, 89, 115, 106, 143, 134};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 12, 13, 22, 38, 42, 43, 45};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> mouseRows = {50, 40, 49, 45, 50, 7, 55, 11, 15, 24, 0, 3, 32, 53, 46, 47, 4, 55, 25, 10, 5, 2, 44, 2, 56, 36, 56, 33, 9, 17, 45, 11, 39, 13, 18, 41, 22, 52, 16, 28, 59, 33, 35, 16, 27, 58, 28, 49, 12, 54};
    vector<int> mouseCols = {60, 66, 62, 140, 91, 91, 150, 90, 55, 129, 32, 108, 46, 136, 146, 87, 122, 21, 75, 72, 37, 35, 134, 73, 74, 142, 69, 36, 132, 94, 84, 74, 75, 68, 42, 81, 34, 72, 91, 36, 82, 131, 38, 81, 28, 130, 129, 72, 108, 123};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 32};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> mouseRows = {57, 36, 1, 21, 15, 6, 50, 58, 19, 47, 29, 17, 0, 8, 41, 41, 22, 18, 43, 43, 1, 12, 48, 43, 10, 12, 47, 50, 8, 42, 29, 54, 20, 15, 59, 3, 34, 54, 37, 54, 29, 58, 26, 20, 50, 2, 1, 54, 28, 43};
    vector<int> mouseCols = {57, 146, 64, 74, 119, 116, 49, 140, 106, 73, 30, 42, 108, 97, 129, 148, 42, 146, 130, 70, 64, 142, 141, 98, 150, 62, 136, 115, 98, 114, 94, 79, 87, 51, 139, 135, 25, 50, 64, 77, 112, 28, 78, 23, 77, 145, 22, 46, 79, 92};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 30, 32, 38, 42, 48};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> mouseRows = {41, 16, 45, 53, 45, 52, 24, 9, 45, 19, 32, 51, 43, 53, 47, 6, 22, 7, 43, 47, 49, 40, 18, 49, 12, 44, 47, 19, 2, 46, 2, 11, 17, 27, 48, 5, 44, 40, 24, 42, 8, 3, 59, 45, 18, 2, 8, 44, 46, 38};
    vector<int> mouseCols = {97, 102, 135, 91, 88, 49, 62, 124, 120, 106, 140, 146, 53, 108, 57, 46, 140, 133, 47, 57, 98, 76, 97, 70, 54, 62, 55, 129, 44, 23, 78, 29, 68, 145, 80, 82, 126, 50, 62, 33, 110, 61, 115, 40, 48, 48, 69, 133, 74, 106};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 38};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> mouseRows = {12, 35, 15, 40, 2, 20, 0, 27, 20, 45, 7, 52, 24, 16, 21, 0, 47, 38, 4, 5, 32, 3, 36, 57, 49, 3, 42, 16, 29, 59, 59, 46, 40, 40, 57, 22, 18, 51, 48, 4, 31, 3, 6, 36, 20, 42, 35, 48, 0, 55};
    vector<int> mouseCols = {63, 74, 86, 70, 52, 109, 47, 118, 36, 57, 95, 99, 93, 30, 26, 113, 124, 34, 106, 74, 90, 77, 102, 99, 29, 33, 26, 121, 58, 42, 86, 39, 105, 25, 42, 94, 106, 27, 89, 48, 61, 111, 69, 149, 105, 35, 136, 100, 93, 81};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 12, 20, 28, 35, 40};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> mouseRows = {33, 24, 15, 56, 5, 5, 30, 41, 3, 1, 53, 43, 1, 1, 43, 13, 29, 27, 32, 34, 38, 19, 2, 29, 42, 26, 55, 19, 46, 41, 44, 52, 28, 50, 57, 21, 55, 43, 47, 55, 54, 36, 27, 14, 41, 49, 21, 18, 30, 38};
    vector<int> mouseCols = {20, 40, 23, 114, 130, 148, 91, 133, 96, 94, 72, 83, 143, 122, 49, 94, 110, 22, 25, 145, 107, 57, 77, 68, 74, 30, 30, 140, 149, 119, 59, 90, 126, 134, 32, 134, 84, 60, 102, 114, 92, 84, 104, 24, 101, 43, 41, 134, 29, 109};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 23, 41};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> mouseRows = {50, 41, 8, 32, 12, 7, 11, 38, 46, 8, 58, 21, 56, 37, 31, 38, 7, 39, 10, 47, 14, 29, 2, 10, 53, 33, 49, 0, 58, 27, 44, 18, 19, 53, 0, 23, 29, 45, 29, 8, 23, 2, 19, 46, 47, 50, 11, 11, 51, 8};
    vector<int> mouseCols = {79, 91, 115, 138, 49, 65, 143, 137, 104, 80, 31, 96, 128, 107, 129, 114, 99, 109, 83, 115, 80, 139, 113, 72, 35, 124, 119, 98, 138, 130, 148, 124, 115, 27, 105, 31, 48, 128, 96, 121, 68, 94, 106, 30, 51, 71, 90, 104, 67, 99};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 38, 40};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> mouseRows = {39, 1, 57, 7, 22, 37, 51, 33, 47, 29, 14, 53, 3, 33, 51, 52, 37, 45, 13, 43, 53, 56, 56, 3, 41, 10, 53, 47, 57, 39, 2, 30, 28, 18, 42, 5, 56, 30, 55, 56, 22, 12, 22, 50, 43, 34, 58, 56, 11, 32};
    vector<int> mouseCols = {90, 29, 28, 51, 102, 99, 39, 90, 88, 87, 110, 33, 26, 63, 89, 62, 68, 113, 25, 51, 86, 37, 92, 39, 33, 137, 29, 68, 93, 111, 146, 78, 108, 64, 30, 61, 64, 115, 122, 40, 43, 31, 70, 52, 51, 45, 103, 116, 66, 85};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 7, 9, 13, 16, 31, 42, 49};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> mouseRows = {8, 10, 29, 19, 56, 9, 33, 48, 58, 13, 36, 33, 57, 7, 3, 4, 51, 40, 51, 46, 26, 0, 10, 5, 12, 8, 16, 29, 56, 28, 6, 10, 35, 32, 3, 44, 47, 15, 41, 17, 18, 58, 52, 46, 23, 41, 22, 1, 47, 23};
    vector<int> mouseCols = {100, 33, 58, 85, 65, 137, 58, 113, 144, 73, 31, 54, 91, 41, 106, 80, 138, 88, 124, 110, 139, 36, 25, 64, 108, 32, 108, 111, 100, 63, 38, 124, 37, 145, 33, 104, 51, 110, 92, 90, 119, 56, 33, 25, 45, 75, 148, 61, 117, 21};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6, 11, 29};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> mouseRows = {15, 52, 17, 4, 59, 24, 50, 37, 43, 58, 45, 0, 3, 54, 40, 23, 29, 50, 1, 53, 3, 51, 57, 8, 1, 40, 24, 15, 31, 24, 46, 53, 25, 48, 55, 32, 13, 25, 27, 31, 26, 10, 42, 36, 44, 8, 13, 58, 1, 35};
    vector<int> mouseCols = {144, 31, 69, 79, 144, 109, 39, 82, 71, 133, 84, 41, 98, 131, 58, 62, 51, 127, 44, 105, 63, 59, 57, 40, 135, 137, 51, 141, 131, 135, 66, 138, 101, 110, 134, 103, 29, 109, 22, 110, 116, 34, 21, 21, 146, 140, 37, 74, 37, 112};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 15, 16, 26};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> mouseRows = {18, 47, 14, 55, 7, 54, 27, 56, 8, 5, 45, 13, 52, 20, 39, 37, 7, 20, 8, 25, 47, 17, 39, 3, 13, 20, 43, 12, 20, 21, 46, 10, 18, 17, 53, 38, 13, 44, 42, 35, 59, 36, 5, 40, 49, 23, 11, 58, 19, 45};
    vector<int> mouseCols = {80, 55, 145, 26, 96, 114, 127, 38, 56, 38, 96, 31, 86, 25, 50, 40, 45, 35, 90, 65, 127, 25, 108, 123, 145, 33, 61, 52, 130, 88, 126, 41, 62, 147, 114, 33, 55, 61, 111, 34, 94, 64, 52, 40, 43, 76, 27, 60, 144, 114};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 19, 29, 41, 45};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> mouseRows = {20, 39, 100};
    vector<int> mouseCols = {99, 50, 200};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> mouseRows = {0, 100, 399};
    vector<int> mouseCols = {0, 200, 599};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> mouseRows = {30};
    vector<int> mouseCols = {75};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> mouseRows = {10, 20, 30, 30, 30, 30, 34, 35, 345};
    vector<int> mouseCols = {10, 20, 30, 50, 60, 80, 34, 35, 345};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4, 5};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> mouseRows = {57, 28, 18, 25, 36, 12, 33, 44, 13, 32, 32, 51, 11, 27, 8, 51, 17, 34, 10, 16, 47, 57, 20, 57, 32, 14, 13, 37, 10, 16, 49, 37, 52, 8, 18, 44, 50, 43, 11, 1, 21, 22, 17, 35, 28, 53, 56, 16, 11, 44};
    vector<int> mouseCols = {146, 22, 41, 88, 123, 99, 43, 110, 25, 64, 141, 110, 70, 34, 99, 103, 60, 64, 142, 109, 133, 144, 72, 68, 25, 32, 21, 140, 30, 105, 32, 72, 114, 97, 35, 131, 103, 110, 133, 81, 125, 36, 76, 78, 77, 47, 50, 94, 22, 20};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 17, 22, 31, 43, 44};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> mouseRows = {20, 39, 100};
    vector<int> mouseCols = {99, 50, 200};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
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
    vector<int> mouseRows = {57, 28, 18, 25, 36, 12, 33, 44, 13, 32, 32, 51, 11, 27, 8, 51, 17, 34, 10, 16, 47, 57, 20, 57, 32, 14, 13, 37, 10, 16, 49, 37, 52, 8, 18, 44, 50, 43, 11, 1, 21, 22, 17, 35, 28, 53, 56, 16, 11, 44};
    vector<int> mouseCols = {146, 22, 41, 88, 123, 99, 43, 110, 25, 64, 141, 110, 70, 34, 99, 103, 60, 64, 142, 109, 133, 144, 72, 68, 25, 32, 21, 140, 30, 105, 32, 72, 114, 97, 35, 131, 103, 110, 133, 81, 125, 36, 76, 78, 77, 47, 50, 94, 22, 20};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9, 17, 22, 31, 43, 44};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> mouseRows = {30};
    vector<int> mouseCols = {49};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> mouseRows = {41};
    vector<int> mouseCols = {51};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> mouseRows = {40};
    vector<int> mouseCols = {40};
    grafixClick* pObj = new grafixClick();
    clock_t start = clock();
    vector<int> result = pObj->checkSaveButton(mouseRows, mouseCols);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7460634&rd=5857&pm=2996
********************************************************************************
#include <vector>
using namespace std;
 
class grafixClick
{
public:
 vector< int > checkSaveButton( vector< int > rows, vector< int > cols )
 {
   vector< int > vec_Ret;
   for ( int i = 0; i < rows.size( ); ++i )
   {
     if ( rows[i]>=20 && rows[i]<=39 && cols[i]>=50 && cols[i]<=99 )
       vec_Ret.push_back( i );
   }
   return vec_Ret;
 }
};

********************************************************************************
*******************************************************************************/