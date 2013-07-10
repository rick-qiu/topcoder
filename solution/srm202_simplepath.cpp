/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2876
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

class SimplePath {
public:
    int trouble(string direction, vector<int> length);
};

int SimplePath::trouble(string direction, vector<int> length) {
    int ret;
    return ret;
}


int test0() {
    string direction = "NWSEEN";
    vector<int> length = {5, 5, 3, 2, 5, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string direction = "NWWS";
    vector<int> length = {10, 3, 7, 10};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string direction = "NWES";
    vector<int> length = {2, 2, 1, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string direction = "NWSE";
    vector<int> length = {100, 100, 100, 100};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string direction = "NNNNNNNNNNNNNNNNNNNN";
    vector<int> length = {1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string direction = "NNNNNNNNNNNNNNNNNNSN";
    vector<int> length = {1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string direction = "ENWSE";
    vector<int> length = {5, 2, 19, 2, 19};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string direction = "EN";
    vector<int> length = {5, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string direction = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    vector<int> length = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string direction = "ESWNESWNESWNESWNESWNESWNESWNESWNESWNESWNESWNESWN";
    vector<int> length = {9950, 9950, 9951, 9951, 9952, 9952, 9953, 9953, 9954, 9954, 9955, 9955, 9956, 9956, 9957, 9957, 9958, 9958, 9959, 9959, 9960, 9960, 9961, 9961, 9962, 9962, 9963, 9963, 9964, 9964, 9965, 9965, 9966, 9966, 9967, 9967, 9968, 9968, 9969, 9969, 9970, 9970, 9971, 9971, 9972, 9972, 9973, 9973};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string direction = "ESWNESWNESWNESWNESWNESWNESWNESWNESWNESWNESWNESWN";
    vector<int> length = {9950, 9950, 9951, 9951, 9952, 9952, 9953, 9953, 9954, 9954, 9955, 9955, 9956, 9956, 9957, 9957, 9958, 9958, 9959, 9959, 9960, 9960, 9961, 9961, 9962, 9962, 9963, 9963, 9964, 9964, 9965, 9965, 9966, 9966, 9967, 9967, 9968, 9968, 9969, 9969, 9970, 9970, 9971, 9970, 9972, 9972, 9973, 9973};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string direction = "ENWNESW";
    vector<int> length = {20, 20, 20, 20, 5000, 30, 5000};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string direction = "ENWNESWS";
    vector<int> length = {20, 20, 20, 20, 5000, 30, 5000, 10};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string direction = "ENWNESWS";
    vector<int> length = {20, 20, 20, 20, 5000, 30, 5000, 5000};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string direction = "NNWSENW";
    vector<int> length = {10, 10, 10, 20, 20, 20, 10};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string direction = "NNWSENW";
    vector<int> length = {10, 10, 10, 21, 20, 21, 10};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string direction = "NNWSENWE";
    vector<int> length = {10, 10, 10, 21, 20, 21, 10, 20};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string direction = "NNWSENW";
    vector<int> length = {10, 10, 10, 21, 20, 21, 30};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string direction = "EEEEEW";
    vector<int> length = {1, 1, 1, 1, 1, 10};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string direction = "NENENWS";
    vector<int> length = {1, 1, 1, 1, 1, 1, 1};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string direction = "NWSE";
    vector<int> length = {100, 100, 100, 100};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string direction = "NWES";
    vector<int> length = {2, 2, 1, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string direction = "EEEEEW";
    vector<int> length = {1, 1, 1, 1, 1, 10};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string direction = "NWSENW";
    vector<int> length = {4, 4, 2, 2, 1, 5};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string direction = "NWSEEN";
    vector<int> length = {5, 5, 3, 2, 5, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string direction = "EEW";
    vector<int> length = {1, 1, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string direction = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
    vector<int> length = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string direction = "SESWNW";
    vector<int> length = {5, 5, 5, 3, 8, 8};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string direction = "NS";
    vector<int> length = {1, 1};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string direction = "NENENENENENENENENENENENENENENENENENENENENENENENENE";
    vector<int> length = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string direction = "EW";
    vector<int> length = {2, 1};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string direction = "EW";
    vector<int> length = {1, 2};
    SimplePath* pObj = new SimplePath();
    clock_t start = clock();
    int result = pObj->trouble(direction, length);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8377094&rd=5848&pm=2876
********************************************************************************
#line 5 "SimplePath.cpp" 
#include <string> 
#include <vector> 
# include <iostream> 
# include <sstream> 
# include<list> 
# include <map> 
# include <algorithm> 
# include <cctype> 
# include <cstring> 
# include <cstdio> 
# include <cmath> 
 
using namespace std; 
 
 
struct pt 
{ 
  int x,y; 
  bool operator <(const pt& p) const { 
    if(x<p.x) return true; 
    else return x==p.x&&y<p.y; 
  } 
}; 
 
 
class SimplePath 
{  
        public:  
        int trouble(string direction, vector <int> length)  
        {  
          
      map<pt,int> p; 
      pt n={0,0}; 
      p[n]=0; 
      int min=1000,i; 
      for(i=0;i<length.size();i++) 
      { 
        switch(direction[i]) 
        { 
          case 'N':for(;length[i]>0;length[i]--) 
               { 
                 n.y++; 
                 if(p.find(n)!=p.end())   
                 { 
                  if(p[n]<min)  min=p[n]; 
                 } 
                 else 
                 { 
                   p[n]=i; 
                 } 
               } 
              break; 
          case 'S':for(;length[i]>0;length[i]--) 
               { 
                 n.y--; 
                 if(p.find(n)!=p.end())   
                 { 
                  if(p[n]<min)  min=p[n]; 
                 } 
                 else 
                 { 
                   p[n]=i; 
                 } 
               } 
              break; 
          case 'E':for(;length[i]>0;length[i]--) 
               { 
                 n.x++; 
                 if(p.find(n)!=p.end())   
                 { 
                  if(p[n]<min)  min=p[n]; 
                 } 
                 else 
                 { 
                   p[n]=i; 
                 } 
               } 
              break; 
          case 'W':for(;length[i]>0;length[i]--) 
               { 
                 n.x--; 
                 if(p.find(n)!=p.end())   
                 { 
                  if(p[n]<min)  min=p[n]; 
                 } 
                 else 
                 { 
                   p[n]=i; 
                 } 
               } 
              break; 
        } 
      } 
      if(min!=1000)  return min; 
      else return -1; 
        }  
         
  
        };  
 
     
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/