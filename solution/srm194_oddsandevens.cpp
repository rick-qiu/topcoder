/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2394
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

class OddsAndEvens {
public:
    string find(vector<string> sums, vector<string> products);
};

string OddsAndEvens::find(vector<string> sums, vector<string> products) {
    string ret;
    return ret;
}


int test0() {
    vector<string> sums = {"EVEN"};
    vector<string> products = {"ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 0 ODD 2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> sums = {"ODD"};
    vector<string> products = {"ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> sums = {"EVEN", "EVEN", "EVEN"};
    vector<string> products = {"EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 3 ODD 0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> sums = {"EVEN", "ODD", "ODD"};
    vector<string> products = {"ODD", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 2";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> sums = {"EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 3";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> sums = {"EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD"};
    vector<string> products = {"EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> sums = {"ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "ODD", "ODD", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> sums = {"ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD"};
    vector<string> products = {"ODD", "ODD", "EVEN", "ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> sums = {"EVEN", "ODD", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> sums = {"ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> sums = {"ODD", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD"};
    vector<string> products = {"EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> sums = {"EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> sums = {"ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 3";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> sums = {"ODD", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 6";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> sums = {"ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 3";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> sums = {"EVEN", "EVEN", "ODD", "ODD", "ODD", "ODD"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 2";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> sums = {"ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD"};
    vector<string> products = {"ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 3 ODD 7";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> sums = {"ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 4";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> sums = {"EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD", "EVEN"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 3 ODD 4";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> sums = {"EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 3 ODD 1";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> sums = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 10 ODD 0";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> sums = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 0 ODD 10";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> sums = {"ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 5 ODD 5";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> sums = {"EVEN", "ODD", "ODD", "ODD", "ODD", "EVEN"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 2";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> sums = {"ODD", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN"};
    vector<string> products = {"EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 4";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> sums = {"EVEN", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD"};
    vector<string> products = {"EVEN", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 3";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> sums = {"EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN"};
    vector<string> products = {"ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 4";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> sums = {"EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD"};
    vector<string> products = {"EVEN", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 5";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> sums = {"ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN"};
    vector<string> products = {"EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 3 ODD 5";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> sums = {"ODD", "EVEN", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 6";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> sums = {"EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN"};
    vector<string> products = {"EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 2 ODD 7";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> sums = {"EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "ODD", "ODD", "ODD", "ODD", "EVEN", "ODD", "ODD", "ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD", "ODD", "ODD", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "ODD", "EVEN", "EVEN", "ODD", "ODD", "ODD", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 4 ODD 6";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> sums = {"ODD", "EVEN", "ODD", "EVEN", "ODD", "EVEN"};
    vector<string> products = {"ODD", "EVEN", "EVEN", "EVEN", "ODD", "ODD"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 3";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> sums = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    vector<string> products = {"EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN", "EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 10 ODD 0";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> sums = {"ODD"};
    vector<string> products = {"EVEN"};
    OddsAndEvens* pObj = new OddsAndEvens();
    clock_t start = clock();
    string result = pObj->find(sums, products);
    clock_t end = clock();
    delete pObj;
    string expected = "EVEN 1 ODD 1";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=5069&pm=2394
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define ALL(x) (x).begin(),(x).end()
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
 
struct OddsAndEvens {
  // MAIN
  string find(vector <string> sums, vector <string> products) {
    int n=1;
    while(n*(n-1)/2 != size(sums)) ++n;
    int ns=0, np = 0;
    FOREACH(it,sums) if(*it=="ODD") ++ns;
    FOREACH(it,products) if(*it=="ODD") ++np;
    FOR(x,0,n) {
      if(x*(n-x)==ns && x*(x-1)/2==np) {
        return "EVEN " + i2s(n-x) + " ODD " + i2s(x);
      }
    }
    return "IMPOSSIBLE";
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/