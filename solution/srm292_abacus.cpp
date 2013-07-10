/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4512
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

class Abacus {
public:
    vector<string> add(vector<string> original, int val);
};

vector<string> Abacus::add(vector<string> original, int val) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> original = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 5;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "o---oooooooo", "ooooo---oooo"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> original = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 21;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> original = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "ooooo---oooo", "---ooooooooo"};
    int val = 7123;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "ooooooooo---", "oo---ooooooo", "ooooooooo---", "oo---ooooooo", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> original = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 99;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oo---ooooooo", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 100000;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooooooo---o", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 900000;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 0;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 909020;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 809030;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 6;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "o---oooooooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 123456;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooo---oo", "oooooooo---o", "ooooo---oooo", "ooooo---oooo", "oooooo---ooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 818273;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooooo---", "---ooooooooo", "ooooooo---oo", "oooo---ooooo", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> original = {"oooo---ooooo", "oooooooo---o", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "ooooooooo---"};
    int val = 410670;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooo---oo", "oooooooo---o", "ooo---oooooo", "ooooo---oooo", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> original = {"oooo---ooooo", "oooooooo---o", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "ooooooooo---"};
    int val = 489020;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> original = {"oooooo---ooo", "---ooooooooo", "oooooooo---o", "ooooooo---oo", "ooo---oooooo", "oooooo---ooo"};
    int val = 78899;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooo---oooo", "oo---ooooooo", "ooooooooo---", "oooooooo---o", "ooo---oooooo", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> original = {"ooooo---oooo", "---ooooooooo", "o---oooooooo", "ooooooo---oo", "ooooo---oooo", "ooooo---oooo"};
    int val = 196155;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "---ooooooooo", "ooooo---oooo", "oooooo---ooo", "---ooooooooo", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> original = {"ooooooooo---", "oooooo---ooo", "ooooooooo---", "ooo---oooooo", "oooooooo---o", "oooooo---ooo"};
    int val = 83121;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooooooo---o", "oooooooo---o", "oooooo---ooo", "oo---ooooooo", "oooooo---ooo", "ooooo---oooo"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> original = {"---ooooooooo", "o---oooooooo", "oooo---ooooo", "oooooooo---o", "ooooo---oooo", "oooooooo---o"};
    int val = 1115;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "o---oooooooo", "ooo---oooooo", "ooooooo---oo", "oooo---ooooo", "ooo---oooooo"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> original = {"ooo---oooooo", "---ooooooooo", "ooo---oooooo", "ooooooooo---", "ooooooo---oo", "oooooo---ooo"};
    int val = 95774;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "---ooooooooo", "oooooooo---o", "oo---ooooooo", "---ooooooooo", "oo---ooooooo"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> original = {"ooooooo---oo", "oooooooo---o", "ooooooooo---", "oooo---ooooo", "oooooooo---o", "ooooooo---oo"};
    int val = 164954;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooooo---ooo", "oo---ooooooo", "oooo---ooooo", "ooooo---oooo", "ooo---oooooo", "ooo---oooooo"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> original = {"ooo---oooooo", "oooo---ooooo", "ooooooo---oo", "ooooooooo---", "oooo---ooooo", "---ooooooooo"};
    int val = 166825;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o---oooooooo", "oooooooo---o", "o---oooooooo", "o---oooooooo", "o---oooooooo", "ooooo---oooo"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> original = {"---ooooooooo", "oooooooo---o", "ooooooo---oo", "oooo---ooooo", "oooooo---ooo", "ooooooo---oo"};
    int val = 81413;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "---ooooooooo", "oooooo---ooo", "---ooooooooo", "ooooo---oooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> original = {"ooooo---oooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "o---oooooooo", "oooooooo---o"};
    int val = 224375;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "oooooo---ooo", "ooooo---oooo", "oooooooo---o", "oooo---ooooo", "ooo---oooooo"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> original = {"o---oooooooo", "ooo---oooooo", "oooooooo---o", "oooo---ooooo", "oooooooo---o", "oooo---ooooo"};
    int val = 59650;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooo---oo", "oooooooo---o", "oooooooo---o", "ooo---oooooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> original = {"ooooo---oooo", "oo---ooooooo", "ooo---oooooo", "ooooo---oooo", "oo---ooooooo", "ooooooo---oo"};
    int val = 177148;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "oooo---ooooo", "oooooo---ooo", "ooo---oooooo", "ooooooo---oo", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> original = {"ooo---oooooo", "ooooooo---oo", "ooooooooo---", "oo---ooooooo", "ooooooo---oo", "---ooooooooo"};
    int val = 307549;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooo---oo", "o---oooooooo", "ooooooo---oo", "oo---ooooooo", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> original = {"---ooooooooo", "ooooooo---oo", "o---oooooooo", "o---oooooooo", "o---oooooooo", "oo---ooooooo"};
    int val = 25251;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "oooo---ooooo", "ooooo---oooo", "oooooooo---o", "oooooo---ooo", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> original = {"ooo---oooooo", "oooooo---ooo", "oooooo---ooo", "oo---ooooooo", "oo---ooooooo", "ooooo---oooo"};
    int val = 33146;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "ooo---oooooo", "ooo---oooooo", "---ooooooooo", "ooooooo---oo", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> original = {"oooo---ooooo", "ooooooo---oo", "oooo---ooooo", "---ooooooooo", "o---oooooooo", "o---oooooooo"};
    int val = 78439;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "ooooooooo---", "ooooo---oooo", "ooooo---oooo", "ooooooo---oo", "oo---ooooooo"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> original = {"oooooooo---o", "oo---ooooooo", "oo---ooooooo", "oooo---ooooo", "oooooo---ooo", "oooooooo---o"};
    int val = 797330;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "oo---ooooooo", "ooooo---oooo", "o---oooooooo", "ooo---oooooo", "oooooooo---o"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> original = {"ooo---oooooo", "ooooo---oooo", "oo---ooooooo", "ooooo---oooo", "oooo---ooooo", "ooooooooo---"};
    int val = 25802;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "oo---ooooooo", "oooooo---ooo", "ooooooo---oo", "oooo---ooooo", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> original = {"---ooooooooo", "ooooooooo---", "oooooooo---o", "ooo---oooooo", "---ooooooooo", "oo---ooooooo"};
    int val = 64485;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooo---oooooo", "ooo---oooooo", "oooooooo---o", "o---oooooooo", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> original = {"o---oooooooo", "oooooooo---o", "oo---ooooooo", "oooo---ooooo", "ooooooo---oo", "ooo---oooooo"};
    int val = 150262;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooo---oooooo", "oo---ooooooo", "oo---ooooooo", "o---oooooooo", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> original = {"ooo---oooooo", "ooo---oooooo", "oo---ooooooo", "---ooooooooo", "ooooo---oooo", "oooooooo---o"};
    int val = 38359;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "ooooooooo---", "ooo---oooooo", "oooooo---ooo", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> original = {"ooo---oooooo", "ooooo---oooo", "oooooooo---o", "ooooooo---oo", "ooooo---oooo", "o---oooooooo"};
    int val = 139357;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "o---oooooooo", "ooooooooo---", "ooo---oooooo", "ooooooooo---", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> original = {"oooo---ooooo", "ooo---oooooo", "ooooo---oooo", "oo---ooooooo", "ooo---oooooo", "oo---ooooooo"};
    int val = 180951;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "ooooo---oooo", "oooo---ooooo", "oo---ooooooo", "oooooooo---o", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> original = {"ooo---oooooo", "ooo---oooooo", "ooooooo---oo", "o---oooooooo", "ooooooo---oo", "ooooo---oooo"};
    int val = 265695;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooo---oo", "o---oooooooo", "oooo---ooooo", "oooooooo---o", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> original = {"oooooo---ooo", "ooooooooo---", "ooo---oooooo", "oooooo---ooo", "oooo---ooooo", "ooooo---oooo"};
    int val = 290279;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooo---ooooo", "---ooooooooo", "ooo---oooooo", "ooo---oooooo", "oooooo---ooo", "oooooo---ooo"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> original = {"---ooooooooo", "oooo---ooooo", "oooo---ooooo", "---ooooooooo", "oooooooo---o", "oooo---ooooo"};
    int val = 32592;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "o---oooooooo", "o---oooooooo", "oooo---ooooo", "ooooooooo---", "oo---ooooooo"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> original = {"oooo---ooooo", "ooooo---oooo", "oo---ooooooo", "ooo---oooooo", "oooooo---ooo", "o---oooooooo"};
    int val = 42257;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooo---ooooo", "o---oooooooo", "---ooooooooo", "o---oooooooo", "---ooooooooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> original = {"oo---ooooooo", "oooooooo---o", "oooo---ooooo", "ooo---oooooo", "ooooooooo---", "ooooo---oooo"};
    int val = 211041;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooo---oo", "ooo---oooooo", "ooo---oooooo", "ooooo---oooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> original = {"oooo---ooooo", "---ooooooooo", "oo---ooooooo", "ooooo---oooo", "oooo---ooooo", "oo---ooooooo"};
    int val = 166877;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oo---ooooooo", "ooo---oooooo", "ooooo---oooo", "oooooo---ooo", "oooooo---ooo", "ooooo---oooo"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> original = {"o---oooooooo", "oooo---ooooo", "ooooooooo---", "oo---ooooooo", "o---oooooooo", "oooooo---ooo"};
    int val = 135393;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "o---oooooooo", "ooo---oooooo", "oooooooo---o", "oo---ooooooo", "ooo---oooooo"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 99999;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooooooo---o", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> original = {"o---oooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo"};
    int val = 1;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oooooooo---o"};
    int val = 1;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> original = {"o---oooooooo", "oo---ooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo"};
    int val = 5;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"o---oooooooo", "o---oooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooo---oooo"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 12;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oooooooo---o", "ooooooo---oo"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> original = {"---ooooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 0;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> original = {"---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "o---oooooooo"};
    int val = 1;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 1;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oooooooo---o"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> original = {"ooooo---oooo", "ooooo---oooo", "ooooo---oooo", "ooooo---oooo", "ooooo---oooo", "ooooo---oooo"};
    int val = 1;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooo---oooo", "ooooo---oooo", "ooooo---oooo", "ooooo---oooo", "ooooo---oooo", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> original = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 5;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooo---oooooo", "---ooooooooo", "---ooooooooo", "---ooooooooo", "o---oooooooo", "ooooo---oooo"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 99;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "---ooooooooo", "oooooooo---o", "ooooooooo---", "oo---ooooooo", "o---oooooooo"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 1;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "o---oooooooo", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> original = {"ooooooooo---", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    int val = 100000;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"oooooooo---o", "---ooooooooo", "ooooooooo---", "---ooooooooo", "oo---ooooooo", "---ooooooooo"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 3;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oooooo---ooo"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 0;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> original = {"ooooooooo---", "ooooo---oooo", "oooooo---ooo", "oo---ooooooo", "---ooooooooo", "ooo---oooooo"};
    int val = 431;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooo---oooo", "ooooo---oooo", "ooooooo---oo", "ooooooo---oo", "oo---ooooooo"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 56;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oooo---ooooo", "ooo---oooooo"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> original = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---"};
    int val = 5;
    Abacus* pObj = new Abacus();
    clock_t start = clock();
    vector<string> result = pObj->add(original, val);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "ooooooooo---", "oooo---ooooo"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=9813&pm=4512
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
 
int decrypt(string s) {
  int a=0;
  while(s[a]=='o') ++a;
  return 9-a;
}
 
string encrypt(int x) {
  string s;
  REP(i,9-x) s+='o';
  REP(i,3) s+='-';
  REP(i,x) s+='o';
  return s;
}
 
struct Abacus {
 
  // MAIN
  vector <string> add(vector <string> original, int val) {
    int x = 0;
    REP(i,6) x = 10*x + decrypt(original[i]);
    x = (x+val)%1000000;
    FORD(i,5,0) {
      original[i]=encrypt(x%10);
      x/=10;
    }
    return original;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/