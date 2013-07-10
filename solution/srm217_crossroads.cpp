/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3042
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

class Crossroads {
public:
    vector<int> getOut(vector<int> angles);
};

vector<int> Crossroads::getOut(vector<int> angles) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> angles = {105, 75, 25, 120, 35, 75};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> angles = {1, 1, 1, 1, 1, 1};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> angles = {13};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> angles = {90, 123, 1, 23, 132, 11, 28, 179, 179, 77, 113, 91};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
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
    vector<int> angles = {179, 89, 90, 91, 1};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> angles = {89, 91};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
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
    vector<int> angles = {179, 178, 101, 91, 90, 89, 1};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> angles = {38, 140, 152, 179, 110, 71, 48, 54, 151, 5, 68, 17, 122, 11, 2, 165, 50, 49, 106, 124, 150, 131, 87, 37, 134, 84, 83, 170, 20, 108, 69, 132, 103, 65, 28, 41, 77, 144, 93, 178, 135, 62, 31, 118};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 18, 22, 41};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> angles = {12, 126, 91, 27, 171, 26, 163, 125, 55, 77, 13, 174, 123, 28, 158, 148, 105, 35, 32, 147, 86, 132, 73, 51, 102, 136};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 20};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> angles = {86, 23, 66, 150, 7, 93, 119, 77, 19, 170, 165, 99, 62, 85, 68, 152, 57, 82, 49, 177, 54, 133, 102, 36, 137, 151, 72, 90, 160, 5, 179, 103, 10, 96, 35, 113, 118};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 27};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> angles = {151, 23, 20, 134, 57, 169, 52, 61, 26, 132, 150};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 7};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> angles = {108, 134, 46, 26, 1, 11, 145, 153, 38, 21, 100, 3, 82, 135, 123, 98, 14, 79, 37, 125, 52, 42, 104, 96, 113, 29, 91, 173, 166, 35, 61, 32, 179, 18, 112, 17};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 23, 26, 35};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> angles = {167, 9, 161, 52, 41, 138, 74, 37, 113, 109, 81, 84, 108, 114, 154, 149, 112, 130, 102, 68, 33, 133, 100};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 11};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> angles = {44, 34, 109, 126, 105, 63, 89, 15, 133, 110, 112, 124, 145, 27, 104, 156, 164, 111, 131, 8, 120, 175, 57, 102, 55, 32, 20, 153, 134, 28, 59, 14, 115, 147, 98, 81, 74, 54, 84, 90, 58, 149, 172, 157, 130, 170};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 39, 40};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> angles = {12, 141, 94, 110, 172, 13, 157, 118};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> angles = {19, 91, 41, 52, 165, 99, 119, 21, 89, 68, 143, 92, 69, 124, 96, 109, 71};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 16};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> angles = {127, 19};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> angles = {155, 89, 134, 69, 141, 99, 64, 172, 113, 32, 68, 24, 171, 110, 5, 60, 11, 115, 152, 107, 130, 153, 3, 23, 127, 111, 39, 12, 31, 112, 62, 58};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 30, 31};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> angles = {119, 144, 145, 95, 110, 143, 162, 26, 113, 73, 46, 25, 154, 12, 77, 103, 55, 99, 41, 56};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 19};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> angles = {145, 25, 51, 142, 161, 134, 111};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> angles = {154, 41, 155, 42, 45, 98, 177, 10, 15, 94, 77, 17, 47, 160, 27, 23, 167, 9, 11};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 9, 10, 12, 14, 15, 18};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> angles = {164, 72, 78, 170, 150, 96, 151, 125, 47, 1, 95, 171, 44, 105, 46, 123, 160, 2};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 10, 17};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> angles = {108, 141, 104, 26, 40, 69, 1, 75, 15, 119, 154, 12, 146, 124, 144, 95, 123, 131, 140, 6, 156, 116, 127, 16, 99, 170, 11, 50, 176, 112, 53, 166, 66, 125, 28, 44, 94, 162, 20, 80, 31, 175, 139, 38, 82, 135, 21, 73};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 15, 36, 44, 47};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> angles = {178, 7, 46, 34, 45, 28, 112, 159, 169, 36, 140, 116, 118, 163, 82, 165, 119};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 14};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> angles = {114, 102, 76, 169, 97, 104, 46, 72, 63};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4, 7, 8};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> angles = {143, 36, 13};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> angles = {106, 13, 36, 28, 116, 82, 109, 125, 80, 123, 72, 150, 107, 171, 157, 71, 177, 34, 161, 103, 113};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 8};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> angles = {9, 52, 47, 73, 161, 128, 131, 71, 72, 162, 56, 70, 103, 64, 132, 134, 133, 25, 36, 49, 122, 164, 66, 93, 20, 163, 37, 118, 79, 124, 17, 15, 14, 5, 125, 26};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 23, 28, 35};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> angles = {13, 121, 130, 36, 125, 111, 118, 98, 18, 9, 175, 84, 174, 131, 96, 122, 67, 70, 145, 31, 11};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 5, 7, 11, 17, 19, 20};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> angles = {141, 39, 58, 87, 2, 79, 91, 109, 136, 72, 63, 151, 169, 112, 179, 10, 101};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> angles = {70, 55, 51, 5, 110, 71, 4, 6, 82, 154, 168, 72, 131, 145, 157, 105, 107, 15, 143, 83, 106, 102, 147, 121, 62, 2, 48, 42, 139, 67, 156, 21, 130, 113, 161, 33, 96, 162, 140, 173, 36, 171, 152, 160};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 40};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> angles = {34, 111, 48, 45, 132, 142, 31, 128, 87, 15, 145, 154, 23, 56, 103, 85, 137, 35, 131, 179, 3, 116, 124, 32, 13, 50, 122, 151, 100, 67, 140, 42};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 15, 29, 31};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> angles = {42, 37, 174, 51, 5, 138, 28, 9, 2, 63, 116, 62, 75, 17, 98, 126, 61, 118, 157, 96, 103, 10, 84, 47, 77, 155, 88, 16, 102, 128, 140, 153, 53};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 14, 19, 26, 32};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> angles = {116, 134, 149, 138, 157, 163, 164, 94, 79, 20, 64, 148, 77, 31, 1, 118, 139, 12, 17, 70, 123, 145, 28, 26, 9, 62, 4, 176, 10, 115, 78, 44, 71, 141, 5, 25, 114, 99, 177, 83, 39, 54, 87, 109};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 42};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> angles = {177, 136, 28, 82, 128, 179, 139};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> angles = {112, 170, 124, 52, 102, 99, 128, 45, 98, 89, 171, 120, 138, 80, 144, 134, 178, 37, 113, 163, 106, 165, 91, 88, 81, 160, 169, 33, 46, 131, 8, 115, 7};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 8, 9, 23, 24, 32};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> angles = {98, 80, 11, 179, 23, 108, 10, 31, 119, 60, 57, 118, 74, 77, 40, 122, 30, 90, 91, 144, 78, 1, 61, 68, 24, 149, 132, 160, 116};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 17, 20, 23};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> angles = {93, 132, 172, 84, 66, 21, 162, 148, 82, 20, 156, 137, 8, 75, 168, 13, 30, 38, 106, 22, 111, 104, 124, 131, 164, 120, 54, 145, 68, 179, 139, 37, 31};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 8, 28, 31, 32};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> angles = {33, 105, 36, 172, 35, 69, 55, 22, 9, 139, 137, 158, 1, 81, 77, 144, 83, 89, 135, 43, 101};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 17};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> angles = {166, 161, 154, 11, 88, 114};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 4};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> angles = {136, 46, 163, 142, 36, 99, 10, 94, 127, 5, 132, 100, 164, 157, 143, 55, 71, 87, 117, 1, 138, 40, 28, 11, 121, 6, 62, 125, 79, 176, 114, 53, 86, 15, 19, 26, 165, 56};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 7, 17, 32, 37};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> angles = {146, 9, 43, 161, 46, 49, 38, 42, 152, 157, 159, 110, 8, 32, 33, 64, 81, 34, 112, 98};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 19};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> angles = {94, 131, 179, 174, 156, 151, 27, 68, 51, 31, 175, 133, 129, 6, 116, 146, 132, 147, 23, 117, 164, 160, 139, 81, 2, 41, 75, 29, 165, 90, 44, 136, 163, 39, 100, 145, 153, 60, 97, 178, 67, 66, 7, 101, 72, 22};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 29, 44, 45};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> angles = {161, 37, 169, 23, 153, 80, 40, 114, 101, 112, 76, 3, 155, 26, 48, 53, 123};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 10};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> angles = {172, 109, 142, 76, 147, 133, 25, 93, 4, 2, 134, 60, 162, 83, 138, 10, 113, 5, 123, 174, 90, 127, 48, 148, 116, 107, 152, 63, 3};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 7, 20, 27, 28};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> angles = {113, 73, 69, 5, 52, 107, 159, 78, 167, 96, 2, 175, 155, 79, 126, 60, 108, 90, 101, 7, 68, 42, 168, 154, 173};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 17, 20, 21};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> angles = {105, 14, 73, 55, 90, 15, 157, 140, 168, 106, 39, 51, 101, 45, 54, 131, 156, 42, 35, 81, 160, 103, 6, 179, 11, 111, 47, 31, 21, 89, 172};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 29};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> angles = {15, 61, 51, 93};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> angles = {74, 166, 108, 53, 86, 72, 171, 99, 150, 143, 144, 107, 156, 57, 169, 48, 129, 23, 139, 85, 32, 5, 8, 82, 155, 25};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 19, 23, 25};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> angles = {39, 147};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> angles = {140, 118, 54, 166, 151, 44, 90, 5, 14, 6, 64, 129, 74, 33, 134, 25, 11, 95, 65, 145, 29, 162, 24, 147, 45, 103, 63, 97, 120, 156, 167, 170, 19, 28, 100, 144, 161, 13, 157, 148};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> angles = {121, 81, 51, 171, 176, 131, 107, 49, 24, 36, 108, 88, 64, 42, 86, 124, 170, 43, 92, 161, 87, 59, 97, 103, 61, 63, 31, 52};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 11, 20, 25, 27};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> angles = {166, 133, 145, 117, 123, 49, 138, 12, 130, 154, 62, 8};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3, 10, 11};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> angles = {4, 151, 111, 97, 109, 102, 140, 115, 125, 137, 156, 29, 76, 141, 79, 8, 91, 49, 13, 44, 176, 66, 172, 155, 61};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 16, 21, 24};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> angles = {52, 10, 178, 31, 13, 40, 54, 141, 117, 15, 48, 25, 39};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 10, 12};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> angles = {140, 118, 54, 166, 151, 44, 90, 5, 14, 6, 64, 129, 74, 33, 134, 25, 11, 95, 65, 145, 29, 162, 24, 147, 45, 103, 63, 97, 120, 156, 167, 170, 19, 28, 100, 144, 161, 13, 157, 148};
    Crossroads* pObj = new Crossroads();
    clock_t start = clock();
    vector<int> result = pObj->getOut(angles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10483013&rd=5863&pm=3042
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <map>
 
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define SWAP(tmp, a, b) tmp = a; a= b; b=tmp;
#define SQR(a) (a)*(a)
#define PI acos(0.0)*2
#define INF 1000000000
 
#ifdef _WIN32
typedef __int64 int64;
#else
typedef long long int64;
#endif
 
using namespace std;
 
 
struct tourTree
{
  tourTree* left, *right;
  string name;
};
 
class Crossroads
{  
public:  
  vector <int> getOut(vector <int> angles)  
  {  
    int n = angles.size();
    bool* pass = new bool[n];
    memset(pass, true, n);
    REP(i, n-1)
      FOR(j, i+1, n)
      if (angles[i] < angles[j])
      {
        if (abs(angles[i] - 90) < abs(angles[j] - 90))
          pass[j] = false;
        else
          if (abs(angles[i] - 90) > abs(angles[j] - 90))
            pass[i] = false;
          else //equal case -> i goes first
            pass[j] = false;
      }
    vector<int> res;
    REP(i, n)
      if (pass[i]) res.push_back(i);
    delete[] pass;
    return res;        
  }
  
};
 
 
/*
int main(void)
{
}
*/

********************************************************************************
*******************************************************************************/