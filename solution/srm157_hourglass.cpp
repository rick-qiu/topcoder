/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1787
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

class HourGlass {
public:
    vector<int> measurable(int glass1, int glass2);
};

vector<int> HourGlass::measurable(int glass1, int glass2) {
    vector<int> ret;
    return ret;
}


int test0() {
    int glass1 = 5;
    int glass2 = 7;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int glass1 = 13;
    int glass2 = 5;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 13, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int glass1 = 23;
    int glass2 = 23;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 46, 69, 92, 115, 138, 161, 184, 207, 230};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int glass1 = 24;
    int glass2 = 30;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 30, 36, 42, 48, 54, 60, 66, 72, 78};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int glass1 = 1;
    int glass2 = 50;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int glass1 = 19;
    int glass2 = 6;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 12, 18, 19, 20, 21, 22, 23, 24, 25};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int glass1 = 27;
    int glass2 = 21;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 27, 33, 39, 42, 45, 48, 51, 54, 57};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int glass1 = 50;
    int glass2 = 50;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int glass1 = 1;
    int glass2 = 1;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int glass1 = 45;
    int glass2 = 20;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 40, 45, 50, 55, 60, 65, 70, 75, 80};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int glass1 = 19;
    int glass2 = 8;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 16, 19, 22, 24, 25, 27, 28, 29, 30};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int glass1 = 50;
    int glass2 = 48;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 50, 52, 54, 56, 58, 60, 62, 64, 66};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int glass1 = 47;
    int glass2 = 13;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 26, 39, 47, 52, 55, 57, 60, 62, 63};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int glass1 = 19;
    int glass2 = 24;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 24, 29, 34, 38, 39, 43, 44, 48, 49};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int glass1 = 20;
    int glass2 = 23;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 23, 26, 29, 32, 35, 38, 40, 41, 43};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int glass1 = 8;
    int glass2 = 11;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 11, 14, 16, 17, 19, 20, 21, 22, 23};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int glass1 = 2;
    int glass2 = 5;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int glass1 = 2;
    int glass2 = 3;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int glass1 = 50;
    int glass2 = 17;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 34, 50, 51, 52, 53, 54, 55, 56, 57};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int glass1 = 10;
    int glass2 = 48;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20, 30, 40, 48, 50, 52, 54, 56, 58};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int glass1 = 14;
    int glass2 = 18;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 18, 22, 26, 28, 30, 32, 34, 36, 38};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int glass1 = 46;
    int glass2 = 46;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 92, 138, 184, 230, 276, 322, 368, 414, 460};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int glass1 = 10;
    int glass2 = 14;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 14, 18, 20, 22, 24, 26, 28, 30, 32};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int glass1 = 19;
    int glass2 = 23;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 23, 27, 31, 35, 38, 39, 42, 43, 46};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int glass1 = 29;
    int glass2 = 20;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 29, 38, 40, 47, 49, 51, 56, 58, 60};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int glass1 = 27;
    int glass2 = 18;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 27, 36, 45, 54, 63, 72, 81, 90, 99};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int glass1 = 50;
    int glass2 = 41;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 50, 59, 68, 77, 82, 86, 91, 95, 100};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int glass1 = 48;
    int glass2 = 41;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41, 48, 55, 62, 69, 76, 82, 83, 89, 90};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int glass1 = 1;
    int glass2 = 2;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int glass1 = 49;
    int glass2 = 50;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 50, 51, 52, 53, 54, 55, 56, 57, 58};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int glass1 = 7;
    int glass2 = 12;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 12, 14, 16, 17, 18, 19, 20, 21, 22};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int glass1 = 50;
    int glass2 = 17;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 34, 50, 51, 52, 53, 54, 55, 56, 57};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int glass1 = 13;
    int glass2 = 5;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 13, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int glass1 = 5;
    int glass2 = 7;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 7, 9, 10, 11, 12, 13, 14, 15, 16};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int glass1 = 5;
    int glass2 = 13;
    HourGlass* pObj = new HourGlass();
    clock_t start = clock();
    vector<int> result = pObj->measurable(glass1, glass2);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 13, 15, 16, 17, 18, 19, 20, 21};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7352909&rd=4590&pm=1787
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
 
using namespace std;
 
#include <string>
#include <vector>
class HourGlass {
  public:
    int depth;
    set<int> sum;
    vector<int> result;
 
    void calc(int x, int y, int _Rx, int _Ry, int _S) {
      depth++;
      int Rx = _Rx, Ry = _Ry, S = _S;
      if (Rx < Ry) { 
        S += Rx; Ry -= Rx; Rx = 0; 
        sum.insert(S);
        if (depth <= 10) {
          calc(x,y,Ry,Ry,S);
          calc(x,y,x,Ry,S);
          calc(x,y,Rx,y-Ry,S);
          calc(x,y,x,y-Ry,S);
        }
      } else { 
        S += Ry; Rx -= Ry; Ry = 0; 
        sum.insert(S);
        if (depth <= 10) {
          calc(x,y,Rx,Rx,S);
          calc(x,y,Rx,y,S);
          calc(x,y,x-Rx,Ry,S);
          calc(x,y,x-Rx,y,S);
        }
      };
      depth--;
    }
  vector <int> measurable(int glass1, int glass2) {
    depth = 0;
    int x = glass1, y = glass2, Rx = glass1, Ry = glass2;
    int S = 0;
    calc(x,y,Rx,Ry,S);
    set<int>::iterator si = sum.begin();
    for (int i=0; i<10; i++) {
      result.push_back(*si);
      si++;
    }
    return result;
  }
};
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/