/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2312
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

class Apothecary {
public:
    vector<int> balance(int W);
};

vector<int> Apothecary::balance(int W) {
    vector<int> ret;
    return ret;
}


int test0() {
    int W = 17;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, -1, 27};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int W = 1;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int W = 2016;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-243, -9, 81, 2187};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int W = 1000000;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-531441, -59049, -6561, -243, -27, 1, 81, 729, 2187, 1594323};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int W = 2;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 3};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int W = 3;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int W = 4;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int W = 5;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, -1, 9};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int W = 6;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, 9};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int W = 7;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-3, 1, 9};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int W = 8;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 9};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int W = 9;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int W = 14;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, -3, -1, 27};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int W = 22;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, 1, 3, 27};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int W = 45;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-27, -9, 81};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int W = 84;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 81};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int W = 156;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-81, -9, 3, 243};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int W = 316;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-9, 1, 81, 243};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int W = 500;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-243, -9, -3, -1, 27, 729};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int W = 911;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-81, -9, -1, 3, 27, 243, 729};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int W = 2045;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-243, -9, -1, 3, 27, 81, 2187};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int W = 4987;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2187, -81, -27, -9, 1, 729, 6561};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int W = 21345;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-729, -27, -9, -3, 243, 2187, 19683};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int W = 69100;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-6561, -2187, -729, -243, -3, 1, 9, 81, 19683, 59049};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int W = 101010;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-59049, -19683, -243, -81, 3, 729, 2187, 177147};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int W = 278982;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-177147, -59049, -19683, -2187, -729, -243, -9, 27, 6561, 531441};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int W = 402349;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-177147, -19683, -81, -9, 1, 3, 27, 2187, 6561, 59049, 531441};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int W = 654321;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-59049, -2187, -243, -81, 3, 729, 6561, 177147, 531441};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int W = 789123;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-729, -9, 3, 27, 81, 243, 2187, 19683, 59049, 177147, 531441};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int W = 999999;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-531441, -59049, -6561, -243, -27, 81, 729, 2187, 1594323};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int W = 531441;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {531441};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int W = 803158;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-531441, -177147, -59049, -19683, -6561, -243, -27, -9, -3, 1, 81, 729, 2187, 1594323};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int W = 797189;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-531441, -177147, -59049, -19683, -6561, -2187, -729, -243, -81, -9, -3, -1, 1594323};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int W = 94;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 9, 81};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int W = 87629;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-81, -9, -3, -1, 243, 2187, 6561, 19683, 59049};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int W = 931112;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-531441, -177147, -19683, -729, -81, -9, -1, 27, 243, 6561, 59049, 1594323};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int W = 723243;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-6561, -729, -9, 3, 81, 2187, 19683, 177147, 531441};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int W = 2016;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-243, -9, 81, 2187};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int W = 4;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int W = 1000000;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-531441, -59049, -6561, -243, -27, 1, 81, 729, 2187, 1594323};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int W = 12;
    Apothecary* pObj = new Apothecary();
    clock_t start = clock();
    vector<int> result = pObj->balance(W);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5850&pm=2312
********************************************************************************
#line 2 "Apothecary.cpp" 
 
// Warning: no successful challenges against me yet. 
 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <ctype.h> 
#include <math.h> 
#include <iostream> 
#include <set> 
#include <sstream> 
 
using namespace std; 
typedef long long ll; typedef long double ld; 
typedef vector<int> vi; typedef vector<string> vs; 
 
#define LS < 
#define FOR(k,start,end) for(typeof(start) k=(start); k LS (end); ++k) 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
  
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); k++) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FORALL(k,a,b,cond) (!EXISTS(k,a,b,!(cond))) 
  
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); k++) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
#define PRODTO(k,a,b,init,x) FOLD0(k,a,b,init,R##k *= (x)) 
#define MAXTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k >?= (x)) 
#define MINTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k <?= (x)) 
#define SUM(k,a,b,x) SUMTO(k,a,b,(typeof(x)) (0), x) 
#define PROD(k,a,b,x) PRODTO(k,a,b,(typeof(x)) (1), x) 
  
#define FOLD1(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(k++; k LS (b); k++) act, R##k) 
#define MAX(k,a,b,x) FOLD1(k,a,b,x, R##k >?= (x)) 
#define MIN(k,a,b,x) FOLD1(k,a,b,x, R##k <?= (x)) 
  
#define INF 2000000000 
int tcize(int n) {return n<INF ? n : -1;} 
 
class Apothecary { 
  public: 
  vector <int> balance(int W) { 
    // !FDI 
    vector<int> res; 
    int qty = 1; 
    while(W) { 
      if(W % (qty*3) == 0) ; 
      else if(W % (qty*3) == qty) { 
        W -= qty; 
        res.push_back(qty); 
        } 
      else { 
        W += qty; 
        res.push_back(-qty); 
        } 
      qty *= 3; 
      } 
    sort(res.begin(), res.end()); 
    return res; 
    } 
   
  
  }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/