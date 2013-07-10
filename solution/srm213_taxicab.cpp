/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2859
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

class Taxicab {
public:
    string calculateFare(vector<int> blocks);
};

string Taxicab::calculateFare(vector<int> blocks) {
    string ret;
    return ret;
}


int test0() {
    vector<int> blocks = {0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> blocks = {0, 0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.90";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> blocks = {4, 4};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.90";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> blocks = {10, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.30";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> blocks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "6.10";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> blocks = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "8.30";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> blocks = {0, 0, 0, 0, 0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "4.10";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> blocks = {10, 10, 10, 10, 10};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "7.10";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> blocks = {0, 10, 0, 10, 0, 10, 0, 10};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "7.70";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> blocks = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "22.10";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> blocks = {10, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "6.10";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> blocks = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "52.10";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> blocks = {10, 0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.50";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> blocks = {1, 10};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.50";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> blocks = {2, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> blocks = {2, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> blocks = {0, 2, 1};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.10";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> blocks = {0, 3, 1, 1, 1};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "4.00";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> blocks = {30};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "5.10";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> blocks = {3};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> blocks = {0, 0, 0, 0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.70";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> blocks = {9};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.00";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> blocks = {2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> blocks = {19};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "4.00";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> blocks = {0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> blocks = {4, 5};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.00";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> blocks = {3, 0, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.00";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> blocks = {0, 5};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.00";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> blocks = {1, 5};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.00";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> blocks = {3, 0, 3, 0, 0, 0, 1};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "4.70";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> blocks = {0, 0, 0, 0, 0};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "4.10";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> blocks = {2, 1, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.90";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> blocks = {2, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.50";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> blocks = {2, 3};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.60";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> blocks = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "152.10";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> blocks = {0, 2, 1};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.10";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> blocks = {3, 1};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "2.80";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> blocks = {2, 1, 5};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.20";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> blocks = {7, 2};
    Taxicab* pObj = new Taxicab();
    clock_t start = clock();
    string result = pObj->calculateFare(blocks);
    clock_t end = clock();
    delete pObj;
    string expected = "3.00";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5859&pm=2859
********************************************************************************
/*
 * This code fails systests.
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue>
//#include <1337_sk1llz>  /* D'oh!  TC's compiler doesn't support this header.  Looks like I'm doomed... */
 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define len length()
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef long long ii;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
#define nextp(A) next_permutation(b2e(A))
#define prevp(A) prev_permutation(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i];
  os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
//int dx[] = {1,1,1,0,0,-1,-1,-1}, dy[] = {1,0,-1,1,-1,1,0,-1};
 
/*
public class antimatter extends Idiot {
  String[] codeSolution(String[] problemStatement) {
      //re-code this method!
    //it always returns quickly, but is often incorrect (about 33% of the time)
    return null;
  }
}
*/
 
//----------------------------
 
class Taxicab {
  public:
  string calculateFare(vector <int> a) {
    int blocks = 0, ret = 0;
    for (int i = 0; i < a.si; i++) {
      if (a[i] >= 2) {
        blocks += a[i];
      } else {
        blocks += 4;
      }
    }
    blocks -= 4;
    ret += 250;
    if (blocks < 0) blocks = 0;
    ret += blocks * 10;
    char buf[1000];
    sprintf(buf,"%i.%02i", ret/100, ret%100);
    return string(buf);
  }
};

********************************************************************************
*******************************************************************************/