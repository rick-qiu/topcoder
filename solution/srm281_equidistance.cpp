/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5949
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

class Equidistance {
public:
    long minimumEffort(vector<int> initial);
};

long Equidistance::minimumEffort(vector<int> initial) {
    long ret;
    return ret;
}


int test0() {
    vector<int> initial = {1, 4, 7, 10};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> initial = {4, 3, 1};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> initial = {3, 3, 3};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> initial = {-2000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> initial = {2, 3, 4, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> initial = {3, 1, 3, 3, 5, 5, 5, 5, 3, 3, 5, 5, 3, 5, 6, 5, 3, 3};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> initial = {10, 2, 0, 5};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> initial = {6, 3, 11, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> initial = {1, 0, 10, 9};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> initial = {0, 1, 7, 8};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> initial = {9, 0, 15};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> initial = {7, 1, 42, 0, 41};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> initial = {222, 0, 749, 512, 788, 538, 859, 269, 210, 350};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 367;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> initial = {37, 33, 31, 0, 97};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> initial = {4, 4, 9, 0, 9};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> initial = {0, 10, 10, 0, 3};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> initial = {1, 21, 0, 17, 5};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> initial = {19, 7, 21, 0, 8, 5, 10};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> initial = {12, 20, 11, 0, 12, 29, 18};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> initial = {29, 13, 17, 17, 0, 23, 28};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> initial = {26, 0, 34, 25, 47, 8, 31, 30, 30, 35, 21};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> initial = {48, 51, 35, 15, 5, 40, 80, 47, 0, 54, 38, 60, 61, 54};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> initial = {55, 92, 87, 174, 20, 130, 95, 79, 96, 120, 80, 170, 127, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 159;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> initial = {0, 8187, 15221, 4747, 11082, 4945, 2900, 5994, 11083, 529, 5444, 4451, 10117, 7506, 16957, 11174, 7624, 1487, 4980, 13787, 812, 6551, 6037, 13134, 6668, 8360, 12336, 12722, 7936, 11682, 10787, 10633, 4715, 2567, 15164, 16509};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 17130;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> initial = {147317, 734493, 398041, 1076354, 1668937, 1124606, 739330, 223698, 495775, 1356843, 1061327, 793082, 142868, 1408717, 265338, 732261, 651872, 972480, 1711223, 60859, 999332, 488177, 1070923, 924827, 25072, 250150, 1197284, 1441954, 104346, 195939, 750881, 1725886, 528805, 0, 1697521, 464084, 392615, 320585, 171190};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2676380;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> initial = {209, 340, 924, 729, 170, 821, 425, 280, 729, 220, 437, 240, 913, 147, 874, 15, 450, 153, 673, 110, 361, 65, 308, 366, 36, 466, 677, 194, 936, 898, 787, 866, 868, 605, 57, 71, 163, 898, 244, 90, 866, 122, 853, 0, 872, 405, 698, 777, 239, 144};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2550;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> initial = {-1, -1, -2};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> initial = {-6, 5, 5, -6};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> initial = {7, -4, -2, 4, -5};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> initial = {9, -2, 8, -2, -1, 9};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> initial = {13, -8, 13, -8, -8, 13, 13};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> initial = {-19, -19, 23, 21, 23, 21, 21, -6};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> initial = {13, -10, -34, 13, 27, 7, -34, 11, -10};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 43;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> initial = {54, 44, -57, -48, 15, -48, 46, 54, 46, -57};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 153;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> initial = {-22, -22, 67, -22, -22, 64, -22, -22, 67, 67, -22};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 209;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> initial = {57, -154, 1, 57, -154, 57, 43, 101, 50, -170, 40, 101};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 467;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> initial = {9, -202, -156, -203, 27, -203, -202, -228, -235, -103, -203, -203, -235};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 454;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> initial = {-297, -29, 388, 127, -245, -262, -262, 344, -245, 127, -29, -155, -262, 127};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 847;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> initial = {598, -440, -397, -440, -415, 330, 249, 204, 102, -415, -192, -312, 330, 205, -312};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1238;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> initial = {330, -437, 678, -221, 330, 914, 914, 678, -928, -221, 330, -437, 678, 678, -928, 678};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2380;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> initial = {204, -1041, -1427, 765, 765, -804, -1041, -804, -1041, -1041, -1041, -1041, -1041, -1041, -804, -804, -60};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4890;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> initial = {-495, -2020, 684, 1699, -534, 1658, 835, -668, 1699, 276, -534, 276, 1658, 276, 1658, 173, 276, 835};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3795;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> initial = {-2888, 2284, -2378, 2284, 1744, -2073, 156, 691, 156, 1744, 691, 1013, -2378, 3118, -2888, -1957, 3118, -1957, 2284};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 6407;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> initial = {-518, -5081, -5081, 217, -518, -5081, -5081, -515, 1356, -4502, -5081, 217, 217, -4502, -831, 1356, 377, 1931, -5081, -831};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 13862;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> initial = {-2868, -6554, -2868, 3065, 2594, -2868, -6554, 3065, -2868, 1561, 1561, 1561, 1561, -6554, -2868, 1561, -2868, -6554, -6554, -2868, 1561};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 17070;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> initial = {7965, -3651, 7806, -2319, -10776, -2319, -2154, -3651, -3651, -3651, 7806, -2154, 1825, 1825, -3651, -2154, -884, 7965, -10776, -2154, 1825, 9293};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 37016;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> initial = {2572, -12894, 12028, -14986, 6801, -7318, 12416, 12028, 3942, -9010, 6801, -12894, 6801, 3942, -9010, -5755, -14837, 6385, 4877, -3519, -6263, 12098, -12894};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 32395;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> initial = {5979, 25354, 25354, -17462, 18272, 28254, -13807, -13807, 7483, 25354, -18370, 18272, 25354, 18272, -17403, -1624, -17462, 28254, 5979, -1624, 28425, -1624, 14069, -1624};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 63202;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> initial = {-1349, -31090, 4532, 31814, -31090, 1001, 42134, -26243, 4532, -33477, 27538, -31090, -31090, -26243, -33477, -33477, -31090, -26243, -1349, -18582, 31814, -31090, 27538, 1001, -1349};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 179368;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> initial = {25421, 23234, -3545, 23234, 25421, 25421, -3545, 25421, 25421, -3545, 23234, 25421, -3545, -3545, -3545, 23234, 23234, 23234, 25421, 23234, 23234, 25421, 23234, 23234, 23234, 25421};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 157176;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> initial = {-2438, -28102, -2324, -18350, 13900, -88955, -2324, -88955, 77826, 13900, -57279, 39828, -18350, 77826, -28102, -2438, 13900, -77789, 77826, -88955, -28102, -57279, -88955, 39828, 328, 39828, -28102};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 231406;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> initial = {-62544, -158916, -52224, 158939, 139888, 138691, -39914, 72793, -62126, 58713, -41749, 149636, 37732, -52224, -158916, 158939, 58713, 121376, -62544, 149636, -62126, -41749, -62544, -41749, 48434, 72793, -62544, -158916};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 524730;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> initial = {-19497, -135525, -19497, 45645, -114855, -135525, 58888, -19497, 58888, -77682, -135525, 141229, -114855, -114855, -201193, -114855, -237555, -19497, 141229, -201193, -237555, -201193, -135525, -77682, 58888, 141229, -114855, -201193, 244942};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 699179;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> initial = {-58203, -334448, 335437, -13785, -39517, -211941, 351283, 82834, 95214, -345473, 351283, -105000, -344941, 82834, -211941, 298062, 91482, 194339, 298062, 71710, -105000, 298062, 91482, -4185, -283094, -211941, 71710, 91482, -345473, 82834};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1014262;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> initial = {-134775, 580805, 47436, 402525, 199644, -238107, -333414, -290581, -228253, -257209, -333414, -238324, 84951, 67848, 199644, -238107, -207225, -176076, -238324, -366464, 199644, -366464, -134775, 580805, -366464, -290581, 84951, 199644, -272329, -544776, 332123};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2157973;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> initial = {570017, -813820, 570017, -519580, -891899, -165001, -272720, -165001, 272868, -891899, -332135, -165001, -165001, -573912, -891899, -332135, -154588, -813820, -573912, 259564, 272868, -891899, 570017, -813820, 272868, -332135, 259564, -154588, -332135, -519580, -165001, -519580};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2398358;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> initial = {144242, 442182, -587463, 1010254, 275751, 1010254, -587463, 442182, 1040711, -48497, -48497, -727057, -901979, -537321, -901979, -54638, 1040711, -901979, -48497, 144242, 223286, -657303, 1142308, -537321, -313164, 1142308, 590882, 590882, 1010254, -657303, 56736, 1010254, -256752};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2262114;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> initial = {991447, -1725899, -1812803, 295165, 1298662, 1298662, 766079, 396179, 1298662, -609395, 396179, 991447, 47536, -1906813, -598642, 1877005, -1725899, 47536, -1812803, 295165, 396179, -1725899, -1906813, 2072591, -598642, 12311, -1812803, 489732, -2103969, -2103969, 1262131, 1262131, -1812803, 1298662};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 7151895;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> initial = {1249003, -2306667, 1249003, 1764158, 1128481, 148150, 1133023, -2818139, 1133023, -2389844, -447402, -1995140, 1807053, 1764158, -1964961, 794295, -1995140, 1764158, 2628032, 1764158, 482091, -1964961, 2628032, -2436573, 1807053, 1965629, 2842668, 1252779, -1758764, -1964961, -2306667, 794295, 1764158, -1995140, -2306667};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 14418731;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> initial = {-2930942, 2650754, 1196045, 1196045, -2930942, -2930942, 1196045, 1196045, 2650754, 2650754, 2650754, -2930942, -2930942, 2650754, -886168, 2650754, 2650754, 1196045, -886168, 2650754, -886168, -886168, -886168, -886168, -2930942, -2930942, 2650754, -2930942, -2930942, 2650754, -886168, 1196045, -2930942, 1196045, -2930942, -2930942};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 19060831;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> initial = {4373073, 6532940, 1546260, 4373073, 1546260, 3071950, 6036582, 6036582, 656106, 2217266, -6587180, -6651828, -2125487, 3071950, -5084325, -6651828, 6532940, -7025657, -7025657, 656106, 3071950, 3742601, 2875889, 4373073, 6532940, 2875889, -6651828, 415048, 3071950, -5084325, 1546260, 6036582, 6534040, 1546260, 415048, -2253215, 2217266};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 39893423;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> initial = {-10828777, 816429, -9409405, 9684499, 816429, 9684499, 816429, 6678696, -9409405, -11544161, 6898537, -11544161, 6678696, 816429, 4961136, 6678696, 9684499, 9684499, -11544161, 4961136, 6898537, 816429, -2318573, -9409405, 9684499, 4961136, 9684499, 6678696, 816429, 6678696, 4961136, -10828777, 6678696, 6898537, 4961136, 6898537, -9409405, -11544161};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 88685863;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> initial = {15939295, -15398188, 15939295, 10318407, 10318407, -15219517, 12658544, -8954703, -3268004, -12942178, 9984522, -13837944, -11972299, -12942178, -12942178, 15939295, -3268004, -11977653, 13546973, -11972299, -3075540, -11972299, -12942178, -12942178, -15219517, -8954703, 13989071, 1375628, -8954703, 9984522, 15939295, -8954703, 15939295, 15939295, 13989071, -15398188, 1375628, 15939295, -11972299};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 121697715;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> initial = {-1838804, -7586142, -7586142, 1357108, -12270004, -4093476, -9149279, -522350, 20568247, 10422862, -18005452, -16124054, 19725482, -4093476, -4093476, -4093476, -15369900, 25199198, 25199198, 10422862, -16124054, -12270004, -9149279, -924087, -20639386, -7586142, -522350, -22032997, -15369900, -22956377, -924087, -690922, 10422862, 19725482, 2655430, -18005452, 3897529, -924087, -25679007, -10359018};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 92577926;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> initial = {-32857988, 21332526, 21332526, -29240304, 31142814, 217548, 26474440, 21332526, 217548, 217548, 26474440, 26474440, 217548, 217548, -29240304, -24844749, 31142814, 26474440, 26474440, -24844749, 21332526, 31142814, 26474440, -24844749, 217548, -24844749, 217548, -21952561, -29240304, 21332526, 31142814, -32857988, 21332526, -24844749, -24844749, -29240304, 31142814, -21952561, -21952561, 217548, 217548};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 193436074;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> initial = {40168587, 35678212, 3760060, -50068635, 39438262, 48394626, -40413010, 16022687, -50068635, -39691737, -52866065, 39438262, 42822345, -53012286, -44550062, 58182241, -53012286, 35678212, -54607744, 48394626, -53012286, 24315982, -26130505, -10182988, -39691737, 53345027, 41958555, -28708835, -26130505, -52866065, 16022687, -28708835, -5737419, 16022687, -10182988, 40168587, 16022687, 3760060, -52394928, 40168587, -5737419, 40168587};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 243165401;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> initial = {-70383432, 60026381, 30839841, -64440722, 28589350, -64440722, 32989836, 32989836, 28589350, 73322651, -76182815, -25223026, 47413494, 41791409, 16368705, 30839841, -34562853, 84490072, -52691573, 31177008, -88001102, -44622571, -52691573, 22166037, -32082196, -32082196, 46891018, 41791409, -88001102, 73322651, 41791409, -32082196, 46891018, 30839841, -88001102, 84490072, -32082196, 60026381, -88001102, 30839841, -88001102, 73322651, -88001102};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 366827234;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> initial = {60837931, 28929655, -135059394, 80601542, -62143808, 67169763, 70208397, -139421433, -50924850, -1075038, 60837931, 1837701, -1075038, 51989553, 28929655, 7001708, 59712856, 59712856, -135059394, 80601542, 51989553, 1837701, 59712856, -24092180, -18217099, 3044240, 59712856, -23529545, -11044879, -18217099, 80601542, -50924850, 3956408, 7001708, 2211161, 59712856, -91003648, -128278437, -18217099, 7001708, 35187064, 51989553, -145740068, -140003848};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 726839039;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> initial = {13705382, 13705382, -40038537, -44865612, -10366162, -44865612, -44865612, -10366162, -40038537, -10366162, -44865612, -10366162, -40038537, -10366162, 13705382, 13705382, -44865612, 13705382, -44865612, -44865612, -10366162, -44865612, -44865612, 13705382, -10366162, -10366162, -10366162, 13705382, -10366162, -44865612, 13705382, -44865612, -40038537, -44865612, -10366162, -44865612, -10366162, 13705382, -44865612, -44865612, -40038537, -40038537, -10366162, -10366162, 13705382};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 304055488;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> initial = {-332114995, 65473267, -313469177, 94624807, -58701064, 278687879, 219712457, -313469177, 205190720, -153289536, 32618109, 32618109, 174101649, -345130587, 144047383, -313469177, 312021327, -61976218, 180536539, 312021327, 28857785, -61976218, 180536539, -313469177, 278687879, 312021327, 94624807, 205190720, 333617720, 37938061, -345130587, -61976218, -61976218, -313469177, -357692070, 312021327, 205190720, -61976218, -332114995, -58701064, 180536539, -165829510, -357692070, -81004031, 316260071, -181479078};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1224195435;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> initial = {-114249308, 2611888, -382755896, -5657215, -475983314, 242543484, 444869248, -475983314, -184694883, -514351857, -5657215, 2611888, -121104198, 458548365, -475983314, -382755896, 437726593, -488038115, 444869248, -422978671, -114249308, -422758298, -194829240, 1491798, 115291648, -382755896, -475983314, -239063841, 166487835, -239063841, 328305907, 242543484, 412240464, -184694883, -141176806, 115291648, -8669403, 444869248, -418040038, -422758298, 444869248, 242543484, -473933403, 193533745, -422758298, 458548365, -418040038};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2038596230;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> initial = {-639283391, -430373809, 826828110, 366739274, 826828110, 559598880, 221372237, -349584144, 221372237, -94323758, -61468010, 338672050, -837131296, 191832555, 338672050, -492323210, 14869541, -714909339, 559598880, 221372237, -837131296, -212406595, 366739274, -389464177, -212406595, -349584144, 14869541, 51764413, 366739274, -389464177, -349584144, -244588065, -714909339, -714909339, -430373809, -349584144, 51764413, -212406595, -133778686, 191832555, -430373809, -308010575, 652800513, -389464177, -212406595, -48508538, -492323210, -244588065};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2923585981;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> initial = {-133661262, -410506937, 250044628, -1077517231, 250044628, -1077517231, -826762923, 912173423, 912173423, -133661262, 555628605, 555628605, -815683181, 750973507, -826762923, 750973507, 912173423, -262815916, -657265473, -1214846397, -815683181, 750973507, -1214846397, 412598552, 912173423, -1077517231, -133661262, -815683181, -243798883, -826762923, 250044628, -657265473, -262815916, -815683181, 555628605, -262815916, -262815916, 750973507, 912173423, -410506937, -410506937, 412598552, 750973507, -133661262, -815683181, -410506937, -815683181, 250044628, 750973507};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3889895601;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> initial = {1864955289, 1973257513, -1020475032, 1758814454, -1982770600, 1755805469, 1797248128, 569059377, 456413246, -977361750, -1882455667, 1640314518, 1067761470, 1062057619, -1282253460, -101297529, 788840081, 1341162666, 1743347568, 414846082, -163230175, 1369138812, 1618376936, 558480003, 1013404181, 1274260674, 1067847569, 1700369615, 1006548305, -1900197440, 1414804526, 1613584769, -1853551843, -1139750358, 1323982442, -667159672, 1860953057, 628989398, -1856646620, 528509183, 1778645494, 1612518615, -1962385151, 256693836, 1129627616, 825379177, -470592534, 1612254786, -1249380343, 1004305588};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 17152320583;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> initial = {-223767842, 397720044, -1361314630, 1702161500, 1850413223, 1281221022, 1950947482, -1911600338, -267003143, -16247731, -1433729204, -761081013, 220238390, 1441836993, 769377271, -1348737403, -432217698, 266092521, 1570620718, -1269597481, 1033960539, 774725981, -1150245714, -502601268, 1788197439, -1320473785, 1015511246, -1980758605, 1358310770, -1977421309, -1051304369, -1146112341, 288342370, 1630938289, -1407879110, 408020379, -1373664145, -825517405, -485431429, 102906893, -1853703025, 1728033325, 983816470, -379800753, 1366098958, 1693835886, 0, -1098607582, -303400852, 73422856};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4112657742;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> initial = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, 2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000575;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> initial = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000575;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> initial = {2000000000, -2000000000, 2000000000, -2000000000, 2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, 2000000000, -2000000000, 2000000000, -2000000000, -2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, -2000000000, 2000000000, 2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, -2000000000, 2000000000, 2000000000, -2000000000, -2000000000, -2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 41371428578;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> initial = {-1999803582, -1999999856, -1999971343, -1999999623, -1997821691, -1834419859, -1994297113, -1999989054, -1999999390, -1999997416, -1999999945, -1998653731, -1999998403, -1996475422, -1999682189, -1999999999, -1999999998, -1999999995, -1999999997, -1936754014, -1999993235, -1566505563, -1732085704, -1999995819, -1999878607, -1960911831, -163688097, -1999999013, -1999999966, -1990772535, -1999924975, -1999999992, -1897665845, 971215073, -1999999999, -865096830, -1999485771, -1999953632, -1999982289, -1999167960, -1298591267, -1999999767, -1999999979, -1999999987, -1975842183, -1985069648, -1999999911};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 7722961920;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> initial = {-1, 1, 2, 1, -1, 1, -1, 1, -3, -1, -1, -1, 1, -1, 1, 1, 1, -1};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> initial = {-11, -13, -3, -8};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> initial = {44, 36, 39, 33};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> initial = {9, 8, -1, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> initial = {-4, -5, -12, -11};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> initial = {9, 15, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> initial = {109, 68, 75, 110, 69};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> initial = {1997, 1669, 1809, 2208, 1459, 2318, 2247, 1728, 1681, 1971};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 367;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> initial = {218, 214, 278, 181, 212};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 58;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> initial = {-3, 2, -7, -3, 2};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> initial = {-6, -9, -9, 1, 1};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> initial = {-43, -31, -47, -27, -48};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> initial = {-8, 3, -18, -13, -10, 1, -11};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> initial = {84, 90, 101, 84, 72, 83, 92};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> initial = {-28, -57, -29, -44, -34, -40, -40};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> initial = {161, 166, 157, 167, 136, 166, 170, 144, 171, 183, 162};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> initial = {22, 57, 78, 17, 71, 52, 64, 71, 68, 32, 97, 55, 65, 77};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> initial = {256, 338, 184, 243, 334, 164, 291, 244, 294, 251, 219, 284, 260, 259};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 159;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> initial = {2175, -3676, -11612, 5345, 3552, -8712, -5575, -6632, -3252, -529, -9045, -3425, -6865, 3609, 4897, 724, -7161, -5061, -10800, -6168, -3988, -11083, -1495, -825, -4106, -5618, -438, -4944, -979, 70, -530, 1522, 1110, -6897, -6667, -10125};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 17130;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> initial = {1218120, 1971526, 1038722, 469338, 977901, 1316563, 1602483, 1321994, 980133, 733817, 741415, 388508, 638255, 441579, 1654357, 349986, 1244972, 709724, 996521, 897512, 392957, 495790, 1943161, 306499, 1370246, 984970, 643681, 774445, 510978, 270712, 416830, 1687594, 245640, 1914577, 566225, 1306967, 1170467, 1956863, 1442924};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2676380;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> initial = {365, 1115, 1162, 533, 655, 1192, 538, 1168, 1192, 744, 464, 309, 438, 1207, 719, 457, 416, 1230, 294, 899, 1166, 574, 384, 534, 1147, 330, 514, 441, 1071, 731, 1023, 971, 760, 1160, 634, 1218, 967, 1023, 660, 404, 447, 992, 602, 1081, 351, 1160, 488, 359, 699, 503};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2550;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> initial = {-1, 0, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> initial = {-8, -19, -8, -19};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> initial = {9, 12, 1, 3, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> initial = {-17, -28, -18, -27, -28, -17};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> initial = {0, 0, -21, 0, -21, 0, -21};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> initial = {28, 28, -12, 1, 30, 28, -12, 30};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> initial = {11, 34, -13, 28, 32, 11, 34, 48, -13};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 43;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> initial = {140, 46, 138, 37, 148, 140, 109, 37, 148, 46};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 153;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> initial = {92, 3, 3, 92, 3, 89, 92, 3, 3, 3, 3};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 209;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> initial = {103, -124, 103, 89, -108, 147, 103, -108, 47, 147, 86, 96};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 467;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> initial = {-165, 65, 47, -65, -197, -165, -190, -164, -118, -197, -164, -165, -165};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 454;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> initial = {-124, -159, -107, 482, 109, 109, 265, -17, 265, -107, 265, -124, 526, -124};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 847;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> initial = {-1109, -364, -592, -1006, -445, -1134, -96, -1091, -1134, -489, -1109, -886, -490, -364, -1006};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1238;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> initial = {3059, 1944, 2160, 2711, 2160, 2711, 1453, 3059, 1453, 3059, 3295, 1944, 3295, 2711, 3059, 3059};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2380;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> initial = {-1223, -398, -1967, -959, -1967, -2204, -1967, -398, -2590, -2204, -2204, -2204, -2204, -2204, -2204, -2204, -1967};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4890;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> initial = {3354, 3865, 4880, 2686, 4880, 3457, 3457, 4839, 4839, 2647, 2647, 4016, 4016, 1161, 2513, 4839, 3457, 3457};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3795;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> initial = {912, 1333, 5574, 402, 1217, 3446, 5034, 4303, 402, 3446, 5574, 1333, 6408, 912, 3981, 3981, 6408, 5574, 5034};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 6407;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> initial = {200, -113, 203, -4363, -4363, -3784, -4363, 2649, 200, 935, -4363, -113, -4363, 2074, 1095, 935, -3784, 935, -4363, 2074};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 13862;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> initial = {-6095, -2409, -6095, 2020, 3053, -2409, -2409, -2409, 3524, 2020, 2020, 2020, 2020, -2409, -2409, -2409, -6095, 3524, -6095, -6095, 2020};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 17070;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> initial = {-15145, -16642, -11166, -16642, -5026, -11166, -15145, -11166, -23767, -16642, -5026, -5185, -15145, -13875, -15145, -23767, -16642, -16642, -3698, -15310, -15310, -5185};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 37016;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> initial = {6609, -15029, 11836, -7510, -3711, 4685, -5947, 6609, 11836, -13086, 6193, 6609, -9202, 3750, -13086, 2380, 12224, -13086, -6455, 3750, -15178, -9202, 11906};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 32395;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> initial = {55724, 52824, 33449, 52824, 52824, 33449, 13663, 34953, 45742, 10067, 55895, 25846, 52824, 41539, 25846, 45742, 25846, 25846, 9100, 55724, 13663, 10008, 45742, 10008};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 63202;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> initial = {38281, 43128, 68022, 68022, 35894, 43128, 38281, 50789, 101185, 73903, 38281, 70372, 96909, 38281, 35894, 43128, 70372, 38281, 38281, 73903, 96909, 35894, 68022, 111505, 101185};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 179368;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> initial = {44182, 70961, 73148, 73148, 44182, 73148, 44182, 73148, 73148, 73148, 70961, 73148, 70961, 44182, 44182, 44182, 70961, 70961, 70961, 70961, 70961, 70961, 73148, 70961, 73148, 70961};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 157176;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> initial = {-45146, 32352, -31574, -73576, -123263, -47912, -102753, -31574, -102753, -63824, -73576, -47798, -63824, -47912, -5646, -134429, -73576, 32352, -73576, -5646, -134429, 32352, -5646, -134429, -31574, -47798, -134429};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 231406;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> initial = {513978, 378641, 399436, 600124, 282269, 378641, 581073, 282269, 590821, 562561, 499898, 590821, 379059, 579876, 401271, 489619, 378641, 513978, 478917, 499898, 388961, 379059, 388961, 282269, 399436, 399436, 378641, 600124};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 524730;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> initial = {-478884, -660580, -478884, -400499, -400499, -660580, -400499, -214445, -574242, -574242, -478884, -478884, -318158, -318158, -318158, -594912, -594912, -696942, -574242, -594912, -537069, -413742, -660580, -594912, -537069, -574242, -660580, -696942, -574242};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 699179;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> initial = {-387573, -823996, -143618, -824528, -483240, -180993, -284716, -762149, -127772, -690996, -584055, -387573, -387573, -180993, -690996, -396221, -584055, -383841, -396221, -407345, -127772, -407345, -824528, -537258, -518572, -690996, -492840, -180993, -813503, -396221};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1014262;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> initial = {-409317, 399741, -438273, -113216, 18580, -419388, -453393, 221461, -471645, -547528, -315839, -96113, -315839, -547528, 18580, -419388, -514478, -419171, -357140, -514478, 18580, 399741, -133628, -547528, 18580, -419171, -725840, -388289, -96113, -471645, 151059};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2157973;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> initial = {-529496, 195109, -539909, -707043, -894488, -948820, -1266807, 195109, -539909, -707043, -1188728, -1266807, -529496, -948820, 195109, -539909, -707043, -894488, -1266807, -539909, -102040, -894488, -1266807, -647628, -115344, -102040, -707043, -115344, -539909, -102040, -1188728, -1188728};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2398358;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> initial = {3299200, 1981261, 2852560, 2170997, 2765054, 1806339, 2120855, 2659821, 2659821, 2931604, 2051015, 2984069, 3718572, 3718572, 2120855, 3150500, 3718572, 2395154, 2653680, 3299200, 3749029, 2051015, 1806339, 3150500, 3850626, 3749029, 2451566, 2170997, 2659821, 2852560, 3850626, 3718572, 1806339};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2262114;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> initial = {336605, -3461885, -3548789, -2345381, -3548789, -473855, -3839955, -1339807, 141019, -1440821, -437324, -3642799, -744539, -3839955, -3548789, -1339807, -437324, -437324, -1723675, -1688450, -2334628, -1440821, -1339807, -3461885, -2334628, -3461885, -1246254, -437324, -3642799, -969907, -3548789, -473855, -744539, -1688450};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 7151895;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> initial = {6064436, 2850472, 5948456, 2850472, 6579591, 2820293, 2850472, 6579591, 5609728, 6579591, 6579591, 2425589, 2378860, 6622486, 4963583, 5609728, 6064436, 6579591, 2820293, 1997294, 7658101, 7443465, 2508766, 7443465, 2508766, 5297524, 4368031, 5948456, 2508766, 2820293, 6622486, 6068212, 3056669, 6781062, 5943914};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 14418731;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> initial = {1791535, 1791535, 5918522, 5918522, 5918522, 3836309, 7373231, 5918522, 7373231, 3836309, 1791535, 3836309, 7373231, 1791535, 3836309, 1791535, 7373231, 1791535, 7373231, 3836309, 1791535, 1791535, 7373231, 3836309, 1791535, 5918522, 7373231, 7373231, 1791535, 5918522, 1791535, 7373231, 5918522, 7373231, 1791535, 3836309};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 19060831;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> initial = {-8801354, -2923420, -2924520, -11710675, -6385510, -6385510, -6581571, -11582947, -16044640, -6385510, -16483117, -16109288, -16109288, -14541785, -7240194, -7911200, -6581571, -5084387, -6385510, -3420878, -9042412, -14541785, -3420878, -3420878, -7911200, -2924520, -7911200, -5084387, -8801354, -5084387, -16483117, -2924520, -5714859, -9042412, -7240194, -7911200, -16109288};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 39893423;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> initial = {1801699, -7195570, 1801699, 84139, 4807502, 4807502, 1801699, -14286402, 4807502, 1801699, -15705774, -14286402, 4807502, -4060568, -16421158, 2021540, -14286402, 84139, 1801699, 1801699, 2021540, -4060568, -15705774, -4060568, -14286402, 2021540, 84139, 84139, -16421158, 2021540, 4807502, -16421158, -16421158, 4807502, -4060568, -4060568, -4060568, 84139};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 88685863;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> initial = {-11521101, -7516552, -34447801, -30460326, -33477922, -34447801, -11187216, -34447801, -5566328, -33477922, -33477922, -36903811, -36903811, -33483276, -34447801, -11521101, -30460326, -36725140, -11187216, -24773627, -5566328, -5566328, -35343567, -34447801, -7516552, -5566328, -24773627, -20129995, -30460326, -24581163, -30460326, -5566328, -36725140, -20129995, -8847079, -5566328, -7958650, -5566328, -33477922};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 121697715;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> initial = {-56847668, -60194020, -34303900, -63596574, -60025448, -38934851, -63596574, -85182105, -39777616, -75627152, -58145990, -49080236, -67089240, -81536095, -61341902, -34303900, -77508550, -74872998, -71773102, -68652377, -49080236, -75627152, -39777616, -69862116, -63596574, -82459475, -63596574, -68652377, -49080236, -71773102, -77508550, -60427185, -55605569, -60427185, -67089240, -80142484, -60025448, -60427185, -74872998, -67089240};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 92577926;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> initial = {578203, -49994627, 10388491, 5720117, -20536775, 10388491, 578203, 578203, 5720117, -42706884, 10388491, 578203, -45599072, -49994627, -53612311, -45599072, -42706884, -45599072, 578203, 5720117, 5720117, -20536775, -49994627, -20536775, -49994627, 5720117, -42706884, 10388491, -20536775, -53612311, -45599072, -20536775, 5720117, 10388491, -20536775, -45599072, -20536775, 578203, -20536775, -20536775, -45599072};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 193436074;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> initial = {-122318816, -76457616, -63741202, -165001893, -162204463, -156685890, -96113141, -58790801, -96113141, -71967241, -87819846, -72697566, -140844663, -76457616, -63741202, -138266333, -117873247, -71967241, -70177273, -165001893, -138266333, -96113141, -165148114, -166743572, -122318816, -53953587, -165148114, -72697566, -151827565, -140844663, -164530756, -108375768, -117873247, -71967241, -162204463, -71967241, -69313483, -151827565, -165148114, -152548838, -108375768, -96113141};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 243165401;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> initial = {238488399, 280634042, 229477428, 240301227, 136927959, 119310289, 172748538, 267337772, 238151232, 249102800, 119310289, 254724885, 238151232, 238151232, 182088365, 291801463, 162688820, 223680096, 254202409, 119310289, 119310289, 249102800, 119310289, 240301227, 154619818, 119310289, 175229195, 267337772, 280634042, 175229195, 235900741, 154619818, 142870669, 291801463, 175229195, 235900741, 280634042, 254202409, 131128576, 249102800, 142870669, 238151232, 175229195};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 366827234;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> initial = {225368592, 194585391, 74652088, 37377299, 19915668, 147438637, 167493437, 246257278, 26234303, 225368592, 232825499, 141563556, 200842800, 246257278, 30596342, 225368592, 154610857, 164580698, 167493437, 168699976, 25651888, 103511928, 226493667, 142126191, 226493667, 217645289, 30596342, 194585391, 164580698, 225368592, 114730886, 217645289, 246257278, 172657444, 169612144, 235864133, 147438637, 225368592, 114730886, 147438637, 172657444, 167866897, 217645289, 172657444};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 726839039;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> initial = {-22549507, 11949943, 36021487, -17722432, 36021487, 11949943, 11949943, 36021487, 11949943, 11949943, 11949943, -22549507, 11949943, -22549507, 11949943, -22549507, -17722432, -22549507, 36021487, 11949943, -22549507, 36021487, 36021487, -22549507, -22549507, 36021487, -22549507, -22549507, -22549507, 11949943, 11949943, -17722432, -22549507, -22549507, -22549507, -22549507, 36021487, 11949943, -17722432, 36021487, 36021487, 11949943, 11949943, -17722432, -17722432};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 304055488;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> initial = {602275708, 39392918, 64969993, 709106315, 577621527, 675772867, 709106315, 83615811, 491709795, 602275708, 571186637, 491709795, 335108770, 335108770, 316080957, 64969993, 462558255, 215605910, 231255478, 335108770, 338383924, 429703097, 429703097, 51954401, 709106315, 435023049, 675772867, 83615811, 335108770, 541132371, 335108770, 83615811, 616797445, 83615811, 243795452, 425942773, 713345059, 577621527, 709106315, 51954401, 338383924, 730702708, 602275708, 39392918, 83615811, 577621527};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1224195435;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> initial = {-997906486, -1587152619, -1161782433, -1638327724, -836088414, -1278643629, -719525073, -719525073, -726667728, -752153857, -1173063724, -921850837, -1403458162, -705845956, -921850837, -1678746178, -1278643629, -1049102673, -1349089204, -1285498519, -1640377635, -1162902523, -1640377635, -1582434359, -1547150217, -1587152619, -1640377635, -1349089204, -1049102673, -921850837, -1587372992, -719525073, -1587152619, -705845956, -970860576, -1652432436, -1403458162, -1170051536, -1582434359, -1305571127, -1640377635, -1161782433, -719525073, -1547150217, -1547150217, -1359223561, -1170051536};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2038596230;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> initial = {425151663, 720292082, 1467416353, 602209245, 602209245, 384242031, 1035988077, 1181355114, 425151663, 1181355114, 866380253, 425151663, 465031696, 322292630, 175332449, 506605265, 766107302, 1181355114, 829485381, 322292630, 570027775, 465031696, 680837154, 1374214720, 1641443950, 99706501, -22515456, 1035988077, 384242031, 1006448395, 1153287890, 829485381, 1006448395, 1035988077, 753147830, 602209245, 1641443950, 1374214720, 99706501, 465031696, 465031696, 866380253, -22515456, 384242031, 602209245, 570027775, 1153287890, 99706501};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2923585981;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> initial = {-370587957, 1000723829, 34588287, 695139852, 695139852, -632422007, -370587957, 1196068731, -212170249, 182279308, 1357268647, -632422007, -370587957, 182279308, -769751173, 1196068731, -370587957, -769751173, 182279308, -381667699, 311433962, 1357268647, 182279308, 311433962, 1196068731, -632422007, 34588287, 1357268647, 1357268647, -370587957, -381667699, 1000723829, 1000723829, -381667699, -212170249, 1196068731, 34588287, 857693776, 34588287, 1196068731, 1196068731, 311433962, 857693776, 201296341, -370587957, 311433962, 1357268647, 695139852, 695139852};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3889895601;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> initial = {1956028113, 996174781, -1899685067, 987076188, 1397575126, 1050618169, 541250603, 1738576069, -1266609743, 511279783, 1741585054, -487821934, 1306753042, -1873876020, -1299482860, 1351909412, 1257031274, 1596355369, 1623085118, 808149777, 397616682, -684389072, -1917426840, -1156979758, -994591150, -1870781243, 1323933266, 611759998, -2000000000, 1847725889, 1050532070, -180459575, 1761416094, 439183846, 1780018728, -1979614551, 1683140215, 771610681, 989318905, 1595289215, 1726118168, 1601147536, 1595025386, -118526929, 1044828219, 239464436, 551829977, -1037704432, 1112398216, 1843723657};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 17152320583;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> initial = {2000000000, 1742888404, 1407363288, -712028495, 457072897, -453548750, -1384676686, -330748235, 1032868988, 1777085843, 1837249957, -1049555064, -217950625, -1862547820, -1324611627, 1083013057, 269290908, 337394888, 818429789, 1679990807, 122475374, 446772562, -1271421267, 823778499, -174715324, -1101193196, 1064563764, -776464887, 32804787, 315145039, 151959411, -254348334, -1097059823, -1804650507, -1358826592, -436378911, -1931706087, 49052518, 1899465741, -1002251851, -1299684885, 1490889511, -1928368791, 1415151476, 1619673236, -383165180, -1220544963, -1312262112, 1751214018, 1330273540};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4112657742;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> initial = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, 2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000575;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> initial = {2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000575;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> initial = {-2000000000, -2000000000, 2000000000, -2000000000, -2000000000, -2000000000, 2000000000, 2000000000, 2000000000, -2000000000, -2000000000, -2000000000, 2000000000, -2000000000, -2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, -2000000000, 2000000000, -2000000000, -2000000000, 2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, 2000000000, -2000000000, 2000000000, 2000000000, 2000000000, -2000000000, -2000000000, 2000000000, -2000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 41371428578;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> initial = {-1975842184, -1999999980, -1999998404, -1994297114, -1999971344, 971215072, -1298591268, -1999924976, -2000000000, -1999999857, -1999682190, -1999999988, -1999982290, -1985069649, -1996475423, -1999999998, -1566505564, -1999803583, -1999999391, -1990772536, -1998653732, -1999997417, -1999999014, -1999167961, -1999993236, -1999999624, -1999999946, -865096831, -1999999993, -1999999999, -1999995820, -163688098, -1999999967, -1960911832, -2000000000, -1999999768, -1999999912, -1999989055, -1999999996, -1997821692, -1936754015, -1732085705, -1999878608, -1897665846, -1834419860, -1999485772, -1999953633};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 7722961920;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> initial = {0, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> initial = {190345818, 190345818};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> initial = {-2000000000, -2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> initial = {804289383, -153069114, 681692777, 714636915, 957747793, -575761665, -280114614, 649760492, -403483351, 189641421, 25202362, 350490027, -216631310, 102520059, 1044897763, 967513926, 365180540, 540383426, -695910828, 303455736, -964994789, -478404632, -705297433, 726956429, -663534218, -138978470, -721277138, -766334877, 1145174067, -531296865, 101513929, 801979802, 315634022, -364276942, 369133069, 125898167, 59961393, 1089018456, -371824989, 656478042, 131176229, 653377373, -140515579, 914544919, -391586216, -243101463, 734575198, 973594324, -850201685, 1038664370};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1657791924;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> initial = {-2000000000, -2000000000, -2000000000, -2000000000, -2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 13454545456;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> initial = {-2000000000, 3, 4, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 18, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999992;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> initial = {0, 18, 0};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> initial = {1022253520, -1567395570, -255789442, 1518193449, 1180602734, 957609358, 302141791, -671813117, 199201401, -1960298038, 135713737, 1877362651, -365032117, -1876861082, -461023417, 235773105, 438635183, -328690787, -1449245449, 483306929, -1103278861, -683683011, -1963163575, 1003036895, 42182012, -978358347, 576643073, 755178075, -1997297669, 932901101, -48216940, 1247133640, 1606592745, 3925201, 388698527, -1660532616, -1835350263, 1315879995, 888601762, 1766768222, 1289893179, -550742389, -226175230, 908056720, 1951415899, -662859570, -115208277, 1888115413, 1758595, -763026522};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 6109742743;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> initial = {2, 2};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> initial = {1, 1};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> initial = {3, 3};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> initial = {-54654564, -52131, 21315, 2131811, 2181, 21381, 8121231, 21812, 8123684, -87897899, -56465, 5533317, 2121581};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 146423791;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> initial = {-2000000000, -2000000000, -1000000000, 0, 1000000000, 2000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> initial = {3, 3, 3};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> initial = {-8, -3, 0, 5, 8};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> initial = {-1999999999, 1999999999, -1999999000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1999999000;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> initial = {-2000000000, -1000000000, 41, 46, 500, 1000000, 1000000000};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2198999587;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> initial = {-3997, -2000000000, -5000, -4000, -3999, -3998};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1999995998;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> initial = {1804289383, 846930886, 1681692777, 1714636915, 1957747793, 424238335, 719885386, 1649760492, 596516649, 1189641421, 1025202362, 1350490027, 783368690, 1102520059, 44897763, 1967513926, 1365180540, 1540383426, 304089172, 1303455736, 35005211, 521595368, 294702567, 1726956429, 336465782, 861021530, 278722862, 233665123, 145174067, 468703135, 1101513929, 1801979802, 1315634022, 635723058, 1369133069, 1125898167, 1059961393, 89018456, 628175011, 1656478042, 1131176229, 1653377373, 859484421, 1914544919, 608413784, 756898537, 1734575198, 1973594324, 149798315, 38664370};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 1512883664;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> initial = {3, 8, 10};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> initial = {-9, -3, 0, 5, 7};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> initial = {0, 2, 7};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> initial = {0, 50, 51, 101};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> initial = {52435, 54654756, 647567564, -546345, 5464, 8, 0, 0, 0, 546345, -675867, -654756, 567, 567, 563, 4563456, 657567, 56475, 454654, 5436456, 5464, 456, 6, 7, 546, 645, 456, 6, 64574, 45645, 54, 43, 4564};
    Equidistance* pObj = new Equidistance();
    clock_t start = clock();
    long result = pObj->minimumEffort(initial);
    clock_t end = clock();
    delete pObj;
    long expected = 714995851;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=8078&pm=5949
********************************************************************************
# include <algorithm> 
# include <bitset> 
# include <cassert> 
# include <cctype> 
# include <cmath> 
# include <complex> 
# include <cstdio> 
# include <cstdlib> 
# include <cstring> 
# include <ctime> 
# include <deque> 
# include <functional> 
# include <iostream> 
# include <iterator> 
# include <list> 
# include <map> 
# include <numeric> 
# include <queue> 
# include <set> 
# include <sstream> 
# include <stack> 
# include <string> 
# include <valarray> 
# include <vector> 
# include <utility> 
 
using namespace  std  ; 
 
// Constants 
const int INF =  1000000000 ; 
const long double EPS =  1e-10L ; 
const long double PI = 3.1415926535897932384626433832795L ; 
 
// Types 
typedef  long double  ld ; 
typedef  long long ll ; 
typedef  pair < int , int > pii ; 
typedef  vector < int > vi ; 
typedef  vector < pii > vp ; 
typedef  vector < ld  > vd ; 
typedef  vector < string  > vs ; 
typedef  vector < bool >  vb ; 
typedef  queue <  int  > qi ; 
typedef  queue <  pii  > qp ; 
typedef  map  < string , int > msi ; 
typedef  map  < string , string >  mss  ; 
typedef  set  < int >  si ; 
typedef vector < ll > vl ; 
 
class Equidistance 
{ 
// Global 
 
// Functions 
  ll abs ( ll x ) 
  { 
    if ( x < 0 ) 
      return - x ; 
    return x ; 
  } 
public : 
  long long minimumEffort ( vector <int> p ) 
  { 
    long long res = ll ( INF ) * INF ; 
    int n = p . size ( ) ; 
    sort ( p . begin ( ) , p . end ( ) ) ; 
    for ( int i = 0 ; i < n ; ++ i ) 
    { 
      for ( int j = 0 ; j < n ; ++ j ) 
      { 
        if ( i == j ) 
          continue ; 
        ll k1 = abs ( ll ( p [ j ] ) - p [ i ] ) / abs ( j - i ) ; 
        if ( k1 == 0 ) 
          ++ k1 ; 
        vl cur ( n ) ; 
        for ( int k = 0 ; k < n ; ++ k ) 
          cur [ k ] = p [ i ] + k1 * ( k - i ) ; 
        ll cres = 0 ; 
        for ( int k = 0 ; k < n ; ++ k ) 
          cres += abs ( cur [ k ] - p [ k ] ) ; 
        res = min ( res , cres ) ; 
        ++ k1 ; 
        cur = vl ( n ) ; 
        for ( int k = 0 ; k < n ; ++ k ) 
          cur [ k ] = p [ i ] + k1 * ( k - i ) ; 
        cres = 0 ; 
        for ( int k = 0 ; k < n ; ++ k ) 
          cres += abs ( cur [ k ] - p [ k ] ) ; 
        res = min ( res , cres ) ; 
      } 
    } 
    return res ; 
  } 
   
 
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/