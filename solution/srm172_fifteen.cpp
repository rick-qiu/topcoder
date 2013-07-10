/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1850
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

class Fifteen {
public:
    string outcome(vector<int> moves);
};

string Fifteen::outcome(vector<int> moves) {
    string ret;
    return ret;
}


int test0() {
    vector<int> moves = {7, 5, 9, 6, 8, 1, 2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> moves = {4, 8, 6, 5, 2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> moves = {2, 4, 7, 6, 9, 8, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 1";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> moves = {9, 2, 1, 6, 3, 4, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 5";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> moves = {1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> moves = {2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> moves = {3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> moves = {4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> moves = {5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> moves = {6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> moves = {7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> moves = {8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> moves = {9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> moves = {6, 3, 7, 8, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> moves = {4, 6, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> moves = {3, 2, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> moves = {1, 8, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> moves = {9, 1, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> moves = {2, 9, 3, 8, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> moves = {1, 8, 7, 9, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> moves = {4, 5, 1, 3, 2, 9, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 7";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> moves = {9, 2, 7, 5, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> moves = {4, 8, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> moves = {5, 8, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> moves = {1, 2, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> moves = {8, 3, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> moves = {1, 4, 8, 5, 3, 7, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> moves = {4, 3, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> moves = {9, 1, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> moves = {2, 4, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> moves = {4, 2, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> moves = {3, 5, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> moves = {5, 4, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> moves = {3, 1, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> moves = {9, 6, 5, 1, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> moves = {2, 9, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> moves = {5, 6, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> moves = {1, 3, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> moves = {8, 4, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> moves = {3, 1, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 5";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> moves = {8, 4, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> moves = {6, 2, 3, 8, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> moves = {4, 7, 6, 3, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 5";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> moves = {1, 5, 7, 2, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> moves = {4, 7, 1, 5, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> moves = {1, 8, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 5";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> moves = {7, 1, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> moves = {2, 1, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> moves = {2, 4, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> moves = {4, 5, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> moves = {1, 6, 8, 2, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 5";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> moves = {1, 3, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> moves = {7, 4, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 8";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> moves = {7, 1, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> moves = {9, 6, 8, 5, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> moves = {2, 5, 4, 8, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> moves = {5, 1, 8, 7, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> moves = {6, 3, 5, 2, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> moves = {6, 3, 2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> moves = {9, 7, 3, 6, 5, 1, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> moves = {4, 7, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> moves = {8, 7, 4, 2, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> moves = {4, 8, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> moves = {1, 2, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> moves = {4, 6, 1, 8, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> moves = {5, 4, 1, 7, 2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> moves = {4, 9, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> moves = {5, 3, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> moves = {2, 1, 9, 4, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> moves = {2, 5, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> moves = {2, 8, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> moves = {1, 7, 8};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> moves = {2, 9, 1, 8, 6, 3, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> moves = {9, 8, 7, 3, 2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> moves = {1, 4, 7, 2, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 8";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> moves = {3, 6, 2, 7, 9, 1, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 8";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> moves = {5, 2, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> moves = {1, 9, 6, 7, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> moves = {4, 8, 9, 5, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> moves = {1, 8, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 3";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> moves = {7, 8, 4, 9, 6, 3, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> moves = {3, 4, 8, 5, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> moves = {5, 1, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> moves = {1, 3, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> moves = {7, 5, 3, 1, 9, 2, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 8";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> moves = {5, 4, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> moves = {9, 3, 2, 6, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> moves = {9, 6, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 8";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> moves = {4, 2, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> moves = {2, 3, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> moves = {7, 8, 2};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 6";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> moves = {2, 1, 9, 7, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> moves = {1, 9, 5, 8, 2, 4, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 3";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> moves = {7, 2, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 4";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> moves = {2, 9, 5, 1, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> moves = {7, 4, 6, 2, 3};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 5";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> moves = {7, 9, 4, 2, 1};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> moves = {5, 7, 8, 3, 4};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> moves = {7, 9, 1, 8, 6};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> moves = {2, 7, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "LOSE";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> moves = {1, 8, 6, 3, 7};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 2";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> moves = {1, 5, 2, 4, 9};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 3";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> moves = {1, 2, 3, 4, 5};
    Fifteen* pObj = new Fifteen();
    clock_t start = clock();
    string result = pObj->outcome(moves);
    clock_t end = clock();
    delete pObj;
    string expected = "WIN 9";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4665&pm=1850
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
#define foreach(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++) 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
int b[500], nb=0; 
char buf[1000]; 
int iswin[1024][1024]; 
 
int doit(int p, int o) { 
  int &ret = iswin[p][o]; 
  if( ret != -1 ) return ret; 
  if( p+o == (1<<10)-1 ) return ret=0; 
  for( int x = 1; x <= 9; x++ ) if( !(p&(1<<x)) && !(o&(1<<x)) ) { 
    p |= (1<<x); 
    for( int i = 0; i < nb; i++ ) if( (p&b[i]) == b[i] ) return ret=x; 
    if( !doit(o, p) ) return ret=x; 
    p &= ~(1<<x); 
  } 
  return ret=0; 
} 
 
class Fifteen { 
public: 
string outcome(vector <int> a) { 
  int i, j, k, x, y, z, n; 
 
  memset(iswin, -1, sizeof(iswin)); 
  for( i = 1; i <= 9; i++ ) 
  for( j = i+1; j <= 9; j++ ) 
  for( k = j+1; k <= 9; k++ ) if( i+j+k == 15 ) 
    b[nb++] = (1<<i)+(1<<j)+(1<<k); 
  x = y = 0; 
  for( i = 0; i < a.size(); i += 2 ) x += (1<<a[i]); 
  for( i = 1; i < a.size(); i += 2 ) y += (1<<a[i]); 
  x = doit(y, x); 
  if( !x ) return "LOSE"; 
  sprintf(buf, "WIN %d", x); 
  return buf; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/