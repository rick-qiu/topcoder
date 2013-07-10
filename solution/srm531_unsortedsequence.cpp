/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11278
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

class UnsortedSequence {
public:
    vector<int> getUnsorted(vector<int> s);
};

vector<int> UnsortedSequence::getUnsorted(vector<int> s) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> s = {1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> s = {1, 2, 3};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> s = {7, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 2};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> s = {1000};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> s = {1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> s = {1, 2, 4, 3};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> s = {1, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> s = {2, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> s = {1, 2, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> s = {2, 2, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> s = {1, 1, 2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> s = {2, 1, 2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> s = {1, 2, 2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> s = {2, 2, 2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> s = {1, 1, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> s = {2, 1, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> s = {1, 2, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> s = {2, 2, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> s = {1, 1, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 1, 2};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> s = {2, 1, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> s = {1, 2, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2, 2};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> s = {2, 2, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> s = {1, 100, 100, 1000};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> s = {1, 100, 1000, 100};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> s = {1, 1000, 100, 100};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> s = {100, 1, 100, 1000};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> s = {100, 1, 1000, 100};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> s = {100, 100, 1, 1000};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> s = {100, 100, 1000, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> s = {100, 1000, 1, 100};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> s = {100, 1000, 100, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> s = {1000, 1, 100, 100};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> s = {1000, 100, 1, 100};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> s = {1000, 100, 100, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 100, 1000, 100};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> s = {468, 335, 501, 170, 725, 479, 359, 963, 465, 706, 146, 282, 828, 962, 492, 996, 943, 828, 437, 392, 605, 903, 154, 293, 383, 422, 717, 719, 896, 448, 727, 772, 539, 870, 913, 668, 300, 36, 895, 704, 812, 323};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 146, 154, 170, 282, 293, 300, 323, 335, 359, 383, 392, 422, 437, 448, 465, 468, 479, 492, 501, 539, 605, 668, 704, 706, 717, 719, 725, 727, 772, 812, 828, 828, 870, 895, 896, 903, 913, 943, 962, 996, 963};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> s = {674, 665, 142, 712, 254, 869, 548, 645, 663, 758, 38, 860, 724, 742, 530, 779, 317, 36, 191, 843, 289, 107, 41, 943, 265, 649, 447, 806, 891, 730, 371, 351, 7, 102};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 36, 38, 41, 102, 107, 142, 191, 254, 265, 289, 317, 351, 371, 447, 530, 548, 645, 649, 663, 665, 674, 712, 724, 730, 742, 758, 779, 806, 843, 860, 869, 943, 891};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> s = {549, 630, 624, 85, 955, 757, 841, 967, 377, 932, 309, 945, 440, 627, 324, 538, 539, 119, 83, 930, 542, 834, 116, 640, 659, 705, 931, 978, 307, 674, 387, 22, 746, 925, 73, 271, 830, 778, 574, 98, 513, 987, 291, 162};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 73, 83, 85, 98, 116, 119, 162, 271, 291, 307, 309, 324, 377, 387, 440, 513, 538, 539, 542, 549, 574, 624, 627, 630, 640, 659, 674, 705, 746, 757, 778, 830, 834, 841, 925, 930, 931, 932, 945, 955, 967, 987, 978};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> s = {356, 768, 656, 575, 32, 53, 351, 151, 942, 725, 967, 431, 108, 192, 8, 338, 458, 288, 754, 384, 946, 910, 210, 759, 222, 589, 423, 947, 507, 31, 414, 169, 901, 592, 763, 656, 411};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 31, 32, 53, 108, 151, 169, 192, 210, 222, 288, 338, 351, 356, 384, 411, 414, 423, 431, 458, 507, 575, 589, 592, 656, 656, 725, 754, 759, 763, 768, 901, 910, 942, 946, 967, 947};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> s = {625, 538, 549, 484, 596, 42, 603, 351, 292, 837};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42, 292, 351, 484, 538, 549, 596, 603, 837, 625};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> s = {21, 597, 22, 349, 200, 669, 485, 282, 735, 54, 1000, 419, 939, 901, 789, 128, 468, 729, 894, 649, 484, 808, 422, 311, 618};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 22, 54, 128, 200, 282, 311, 349, 419, 422, 468, 484, 485, 597, 618, 649, 669, 729, 735, 789, 808, 894, 901, 1000, 939};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> s = {515, 310, 617, 936, 452, 601, 250, 520, 557, 799, 304, 225, 9, 845};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 225, 250, 304, 310, 452, 515, 520, 557, 601, 617, 799, 936, 845};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> s = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
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
    vector<int> s = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
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
    vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 50, 49};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> s = {50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 50, 49};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> s = {1, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 1, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> s = {50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 50, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> s = {2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> s = {1, 2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> s = {2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 2, 1, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 2, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> s = {467, 45, 660, 293, 440, 254, 25, 155, 511, 746, 650, 187, 314, 475, 23, 169, 19, 788, 906, 959, 392, 203, 626, 478, 415, 315, 825, 335, 875, 373, 160, 834, 71, 488, 298, 519, 178, 774, 271, 764, 669, 193, 986, 103, 481, 214, 628, 803, 100, 528};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 23, 25, 45, 71, 100, 103, 155, 160, 169, 178, 187, 193, 203, 214, 254, 271, 293, 298, 314, 315, 335, 373, 392, 415, 440, 467, 475, 478, 481, 488, 511, 519, 528, 626, 628, 650, 660, 669, 746, 764, 774, 788, 803, 825, 834, 875, 906, 986, 959};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> s = {626, 544, 925, 24, 973, 62, 182, 4, 433, 506, 594, 726, 32, 493, 143, 223, 287, 65, 901, 188, 361, 414, 975, 271, 171, 236, 834, 712, 761, 897, 668, 286, 551, 141, 695, 696, 625, 20, 126, 577, 695, 659, 303, 372, 467, 679, 594, 852, 485, 19};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 19, 20, 24, 32, 62, 65, 126, 141, 143, 171, 182, 188, 223, 236, 271, 286, 287, 303, 361, 372, 414, 433, 467, 485, 493, 506, 544, 551, 577, 594, 594, 625, 626, 659, 668, 679, 695, 695, 696, 712, 726, 761, 834, 852, 897, 901, 925, 975, 973};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> s = {465, 120, 153, 801, 88, 61, 927, 11, 758, 171, 316, 577, 228, 44, 759, 165, 110, 883, 87, 566, 488, 578, 475, 626, 628, 630, 929, 424, 521, 903, 963, 124, 597, 738, 262, 196, 526, 265, 261, 203, 117, 31, 327, 12, 772, 412, 548, 154, 521, 791};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 12, 31, 44, 61, 87, 88, 110, 117, 120, 124, 153, 154, 165, 171, 196, 203, 228, 261, 262, 265, 316, 327, 412, 424, 465, 475, 488, 521, 521, 526, 548, 566, 577, 578, 597, 626, 628, 630, 738, 758, 759, 772, 791, 801, 883, 903, 927, 963, 929};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> s = {2, 8, 5, 1, 10, 5, 9, 9, 3, 10, 5, 6, 6, 2, 8, 2, 10};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 3, 5, 5, 5, 6, 6, 8, 8, 9, 10, 9, 10, 10};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> s = {1, 2, 3};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> s = {1000, 1, 1, 1, 1, 1, 1, 1, 1, 1000, 1000, 1000, 1000, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1, 1000, 1000, 1000, 1000, 1000, 1, 1000, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 1000, 3, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> s = {2, 2, 2, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> s = {1, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
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
    vector<int> s = {1, 2, 3, 4};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 4, 3};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> s = {1000};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
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

int test60() {
    vector<int> s = {1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> s = {4, 4, 4};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> s = {1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> s = {1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 27, 26};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> s = {3, 2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> s = {5, 5, 3, 5, 3, 5};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5, 3, 5, 5, 5};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> s = {1, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> s = {2, 8, 5, 1, 10, 5, 9, 9, 3, 10, 5, 6, 6, 2, 8, 2, 10};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 3, 5, 5, 5, 6, 6, 8, 8, 9, 10, 9, 10, 10};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> s = {1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> s = {2, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> s = {1, 1, 1, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> s = {7, 7, 2, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 7, 2, 7};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> s = {3, 1, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 2};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> s = {10, 10, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 10, 2, 10};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> s = {2, 1, 1, 1};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> s = {2, 2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> s = {2, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
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
    vector<int> s = {1, 1, 2, 2, 3, 3, 5, 67, 78, 78, 78, 89, 89, 89};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 2, 2, 3, 3, 5, 67, 78, 78, 89, 78, 89, 89};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> s = {2, 2, 3, 3, 3, 7, 7, 7};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 3, 3, 7, 3, 7, 7};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> s = {2, 1, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> s = {5, 5, 5, 5};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
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
    vector<int> s = {2, 8, 5, 1, 10, 5, 9, 9, 3, 10, 5, 6, 6, 2, 8, 2, 10, 11};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 2, 3, 5, 5, 5, 6, 6, 8, 8, 9, 9, 10, 10, 11, 10};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 50, 11, 20, 23, 76, 34, 23, 76, 1, 4, 1, 7, 3, 2, 7, 2, 8, 5, 3, 5, 2, 5, 2, 6, 3, 9, 7, 5, 4, 1, 6, 4, 2, 5, 8, 5, 3};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 10, 11, 11, 12, 20, 23, 23, 34, 76, 50, 76};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> s = {1, 2, 3, 3, 3, 3};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2, 3, 3, 3};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> s = {1, 3, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 2};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 9, 8};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> s = {2, 7, 7};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2, 7};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> s = {1, 5, 8, 5, 5, 8, 9, 6, 4, 3, 5, 7, 9, 7, 32, 2, 3, 4, 6, 8, 6, 4, 3, 4, 6, 78, 9, 5, 3, 2};
    UnsortedSequence* pObj = new UnsortedSequence();
    clock_t start = clock();
    vector<int> result = pObj->getUnsorted(s);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 8, 8, 8, 9, 9, 9, 78, 32};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22906325&rd=14724&pm=11278
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <set> 
using namespace std; 
 
#define X first 
#define Y second 
#define pb push_back 
#define mp make_pair 
#define sz size() 
#define all(x) (x).begin(),(x).end() 
 
class UnsortedSequence { 
public: 
   vector <int> getUnsorted( vector <int> s ) { 
     set<int> voc(all(s)); 
     if(voc.sz <= 1) return vector<int> (); 
     sort(all(s)); 
     next_permutation(all(s)); 
     return s; 
   } 
};

********************************************************************************
*******************************************************************************/