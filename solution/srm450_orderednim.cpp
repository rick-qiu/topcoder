/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10190
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

class OrderedNim {
public:
    string winner(vector<int> layout);
};

string OrderedNim::winner(vector<int> layout) {
    string ret;
    return ret;
}


int test0() {
    vector<int> layout = {5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> layout = {1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> layout = {2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> layout = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> layout = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> layout = {1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> layout = {1, 1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> layout = {1, 1, 1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> layout = {1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> layout = {1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> layout = {1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> layout = {1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> layout = {1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> layout = {1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> layout = {1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 2, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> layout = {1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 1, 1, 2, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 2, 2, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> layout = {1, 1, 1, 1, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 947537006, 722267024, 466906117, 324990703, 545986140, 317216041, 558508476, 828919417, 837043944, 373071872, 413208632, 58005784, 53475677, 695493399, 913354089, 480216984, 520553320, 913264590, 56884446, 47157704, 75516531, 127664223, 327078476, 705449376};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 896565404, 584001868, 367826018, 887842897, 128116527, 167879376, 610109921, 447538995, 345386430, 8612412, 764755035, 903894905, 837531828, 454315330, 129483128, 103256811, 512321114, 182958804, 798750209, 278191554, 663175787, 171819880, 43972496, 720060232, 71493936};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> layout = {398572411, 677454754, 915652074, 309340605, 426536509, 352170293, 677166623, 314379405, 480286819, 697562350, 777005677, 927825814, 42948779, 785618088, 545097200, 799360035, 475666267, 851928882, 928843162, 578923078, 216766347, 111801965, 230189638, 494957900, 627494103, 402009518, 391446747, 200070686, 473503453, 510935773, 900311492, 872075863, 40906878, 668479917, 181416467, 467443386, 20650209, 711099441, 781822790, 353453379};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 133795544, 304126920, 196962906, 678892744, 103486954, 672629173, 383337977, 32330115, 104068602, 600104323, 996648431, 334258239, 95062222, 624142533, 736267756, 339025321, 824213219, 209771208, 849961093, 577041062, 81847070, 890867970, 98037330, 115779889, 210827707, 118687538};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> layout = {1, 1, 1, 472140916, 88057471, 256511666, 605936460, 392184390, 453474572, 137345555, 348187696, 978620096, 520683531, 233034162, 82688697, 120787853, 229682593, 416946935, 68366426, 706341477, 5731043, 259908098, 383071047, 215502250, 109869190, 960112108, 149865672, 853253511, 58149437, 118161912, 64081217, 29353326, 945041240, 909248065, 354010594, 885615062, 18276082, 959947053, 130315804, 471750653};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 302887100, 323008841, 711537660, 385575796, 296313045, 941220252, 655039083, 217195822, 500078081, 660770125, 477103920, 883149127, 876272374, 439489461, 695777587, 878654397, 145259324, 606443375, 996816308, 61856892, 635796701, 794373900, 971104956, 989807294, 679988961, 989381038, 802270698, 810304764, 313648042, 604596008, 141324614, 616535142};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 854627289, 223917892, 646598877, 509666371, 441113713, 146676957, 22952847, 918217632, 29826084, 899225221, 210223445, 578120022, 630395969, 355482768, 184563396, 627212277, 417339659, 672876448, 274102528, 240960967, 515200093, 954091488, 82858356, 169987142};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> layout = {1, 1, 1, 774583149, 758237217, 865557890, 702187996, 463615842, 720185179, 778622239, 110214719, 82367901, 72252304, 109408027, 105320748, 990469935, 139234110, 857062320, 53209731, 569870483, 487458288, 408692498, 754433879, 967186916, 826032157, 279826678, 241289443, 66993123, 795026771, 47897283, 149851478, 965013912, 517326238, 398874226, 739597061, 128079806, 264432116, 294301408, 591695648, 837133646};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 919501546, 145175950, 811318392, 877338645, 988162236, 803068854, 734400964, 41371967, 225455688, 74375604, 302580816, 979889566, 41562519, 128612972, 112232596, 135368314, 48122446, 907259366, 35781948};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 553108185, 596848149, 464386689, 681187990, 713796616, 611204449, 272883637, 550930261, 536644447, 827310354, 322948158, 534336748, 491145098, 52803155, 375015335, 146730303, 787204118, 268903653};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 571484469, 204591908, 608174944, 700097440, 316824503, 743543257, 748219886, 224083868, 779325204, 798710160, 948873496, 184949740, 248074660, 265776537, 866137729, 961871275, 876980985, 139021366, 365317887, 413625431, 818848071, 688266045, 947962178, 309993168, 741069199, 175493864};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 444397517, 828909460, 94885741, 15881985, 33501367, 555577036, 568495776, 202842221, 151636644, 169232013, 426926088, 930961847, 967942173, 228315935, 115911586, 216016832, 494092471, 834565666, 30404459, 371073455, 826103383};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 644951454, 83988389, 437693766, 807460973, 677573939, 613187630, 116700795, 910879959, 57585146, 945610254, 858282051, 73467130, 831627972, 413859086, 494479257, 34470192, 565495729, 663711270, 313912631, 348973927, 631653442};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 700186625, 36321036, 4483881, 730591083, 259910842, 830587264, 126313428, 897126079, 328055069, 62818168, 187336196, 135516041, 592908459, 800523825, 252216835, 503788417, 858108970, 50343440, 214586819, 784092451, 734487763, 628445904, 131088060, 621474306, 46457984, 794799329};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 278969122, 330131853, 565350125, 979155746, 218969240, 569834005, 709746829, 331396433, 252937620, 688576608, 81038863, 580992688, 751394775, 268375059, 716508729, 196819585, 68898883, 821241915, 700608001, 779524205, 871585355, 915194819, 416133007, 458589469, 396157074, 547221066, 80063775, 295131409, 342020394, 867967062};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 50615266, 108429794, 452661613, 269584505, 530780151, 14924793, 600980938, 783717770, 703501400, 682019800, 217226810, 307412526, 950394858, 933735538, 504232111, 871810093, 607493804, 57356463, 651334297, 331595510, 972551282};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> layout = {1, 1, 221224707, 467204721, 870248753, 516356116, 809225114, 590732166, 59435785, 282730981, 641347432, 20381931, 735392593, 910931936, 403678433, 750317385, 364429225, 39912554, 306335136, 898965377, 257139363, 613747661, 701876586, 43391252, 117979771, 573686678, 650885056, 175336234, 77537326, 982480565, 403867, 997520981, 625181895, 74144925, 464725701, 347946999, 590501040, 126467166, 938679165, 502453177};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 375351459, 997107090, 343474883, 631546243, 599940826, 560420460, 671458796, 906275961, 459385836, 781114511, 372539974, 13778773, 824505762, 490519744, 587465451, 327907169, 518372329, 517519128, 162904086, 518776195, 515040108};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> layout = {1, 1, 1, 1, 832282160, 136032979, 35938511, 958749326, 927228495, 390908039, 72980175, 359771442, 766259497, 70087265, 703246324, 250322091, 522544442, 116183135, 921780887, 281336755, 575568970, 555411749, 653876728, 589347743, 232433862, 996912823, 29329545, 560341031, 515285152, 546848672, 575761468, 886577698, 914405132, 216363799, 332015169, 746687291, 204913129, 367953680, 557952968, 132141623};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 491913064, 377637567, 553536759, 47675740, 627959657, 928597552, 163858874, 402256895, 62450658, 591944196, 957668643, 716327385, 33808290, 42618857, 565756560, 63137834, 602959887, 81041711, 462502857, 31237706, 820135760, 376907988, 247601504};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> layout = {1, 1, 1, 452514633, 372620960, 386580950, 584656255, 131482677, 17514092, 929085671, 361636595, 423567202, 976761410, 842112604, 204681106, 993136635, 96885850, 267131763, 585080830, 54554493, 983459148, 618889119, 97173349, 401732059, 534543304, 552649587, 335290121, 997046161, 583887292, 155425880, 226470500, 831488795, 160093160, 202582130, 136519779, 532714119, 589163080, 721176034, 516713148, 459193523};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> layout = {1, 1, 1, 1, 1, 735277077, 332055817, 572978697, 939958182, 325192451, 669864547, 207089944, 762789633, 576935391, 43065443, 234195103, 526625091, 444797501, 768738407, 79274677, 780087621, 765784567, 515678320, 788029853, 992255066, 199683466, 948123012, 47353548, 336203245, 480837131, 489032979, 909895630, 997550278, 948226501, 412673685, 728416371, 536019929, 744729501, 153911420, 475978110};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> layout = {1, 1, 535584406, 685227935, 400711356, 578649848, 919423038, 927336446, 875963701, 540677796, 859127474, 508567673, 158978714, 227322145, 296597525, 3750131, 279521962, 97236889, 51103678, 615725206, 578074019, 540136656, 378137187, 428140648, 340879509, 790810871, 9073370, 876899437, 388056723, 162984789, 205393899, 163011378, 986760754, 740978304, 848239312, 239988461, 172144503, 620178701, 19841258, 48108203};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 409192228, 172351561, 958807227, 705789752, 176101692, 90845541, 803026640, 227205369, 706570746, 233617010, 619858377, 84707933, 514274009, 960737885, 728035155, 523347379, 690153673, 968608230};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 131619607, 378125625, 341558578, 832375270, 618114085, 513703081, 305070323, 490471695, 414327635, 318443170, 221956777, 823519862, 490794731, 33280356, 381825966, 666896422, 124125896, 37368957, 894101790, 683212993, 123502319, 366476518, 620437277};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> layout = {1, 200988784, 13640057, 869884427, 169597013, 552488576, 470464701, 153732971, 930614200, 812023279, 986108240, 401244636, 178242711, 291178562, 891716330, 592570345, 609621732, 113673107, 268606559, 100416462, 999469814, 502948876, 619829235, 123595709, 540317832, 366447376, 659325053, 663820150, 732923894, 279762330, 154112829, 912654647, 480751113, 167752885, 635055425, 502864477, 720241460, 105520126, 656597447, 650855659};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> layout = {1, 1, 1, 52100295, 95786114, 786400600, 796332976, 540872810, 248538683, 762522434, 661995720, 201471496, 761992247, 164944595, 821300730, 738104307, 557778779, 187748105, 249945712, 74115280, 920671998, 529708041, 228228108, 685842997, 862975505, 395980993, 320898421, 365839981, 116222452, 278934898, 22437427, 619594463, 48994653, 517659464, 524211109, 144780766, 156576415, 320544084, 538169928, 405115097};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 606586592, 697575116, 217626594, 427887321, 288195775, 775405372, 468151778, 538141486, 849520651, 241340127, 920365878, 77748759, 927183123, 783341382, 326246103, 100597896, 1697714, 442468554, 379532793, 876651492, 62063016, 428527446, 246827307, 438790476};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 759334560, 963994490, 808518818, 694917429, 16676489, 415105410, 245008896, 86819434, 695509082, 385721022, 714741157, 163660859, 923862507, 416778159, 405000986, 696744736, 347043269, 184700460, 332602469, 673289371, 285298355, 334300182, 115757925, 664831148, 63468025, 30337292, 93358593, 310295332};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 713699053, 80978679, 335693997, 522217870, 628412459, 204886837, 789839631, 725937706, 144222622, 485348713, 111658728, 858963778, 501525923, 888037586, 275741936, 906526908, 584782322, 622785205, 91227368, 917384790, 148590927};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> layout = {1, 187105356, 945528227, 113794062, 564088802, 232419911, 724800536, 60979871, 87522511, 875646127, 169760475, 637192841, 797512818, 138477112, 145474318, 807396585, 484434917, 869052546, 694048563, 17456020, 480458418, 401188913, 941643840, 614089334, 328438359, 372040994, 544030759, 80735903, 146581513, 60179865, 521029894, 11187850, 247285220, 319074472, 124981911, 811374022, 551494383, 849782446, 872353892, 639016893, 577944924, 42114367, 128726085, 375457741, 33107830, 274200402, 35370677, 517542746, 995769299};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> layout = {1, 328744068, 130608152, 329158957, 942833402, 311562862, 701199950, 339380512, 244815116, 700297815, 399560377, 765845009, 711485664, 646845596, 84919481, 836467574, 310735969, 488930215, 686250019, 35606213, 127947107, 116711294, 930236931, 109189543, 492169034, 963344760, 235906296, 527539710, 480887505, 231675594, 109475301, 15886269, 560419662, 92599805, 197561577, 355769415, 404162666, 898761527, 695149926, 648977782, 599059341, 94710302, 267339142, 163061356, 594072250, 204774974, 999528929, 904808218, 693705188};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> layout = {674168646, 655006592, 723167712, 635874540, 147175625, 539028823, 871780835, 527231686, 19916327, 103456429, 489223339, 888318948, 516392442, 581823143, 85880524, 872161856, 838502160, 837158402, 419828133, 339996293, 288734094, 514538435, 607335435, 451795449, 108610684, 664626760, 451324377, 865935253, 210848300, 989619675, 511382387, 885016945, 497142618, 87066450, 373407837, 496834594, 626095273, 245188671, 24066280, 498527951, 201161451, 365805970, 239363250, 570070244, 947629112, 177760126, 294748451, 638647623, 14918527};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> layout = {1, 303652621, 81631370, 438495702, 755448069, 42758405, 103122461, 59288798, 908693657, 313970760, 901424824, 272592395, 51504057, 398567442, 359658845, 424911893, 895402035, 985754117, 522616915, 771984666, 484282067, 723778366, 137790635, 723645317, 146364961, 937936098, 901405442, 441113412, 429100073, 768840320, 155689995, 407743988, 72492940, 237321364, 846239689, 680457361, 280079768, 801878501, 592262510, 41289776, 115849261, 493687333, 313882171, 19869669, 744771126, 673541015, 297297913, 492689513, 511811483};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> layout = {996093549, 396209544, 107497517, 572255217, 542574505, 45433614, 326177010, 983687916, 327050038, 95017330, 139377910, 734794025, 20026621, 229215625, 433550065, 553000333, 361811744, 87944918, 145262842, 403101519, 56310530, 491466527, 569500041, 76180198, 88754004, 95557407, 373478110, 581443516, 607368889, 45909288, 698634046, 455978790, 442118832, 806131562, 28234006, 984693336, 704081527, 206927368, 968381251, 31131565, 154461049, 960275512, 618441941, 27004021, 42007488, 51992006, 432520706, 403819231, 139936923};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> layout = {48763804, 921766425, 228937142, 124944001, 10520429, 324494548, 350938462, 444480296, 931863437, 396847749, 143114341, 240358578, 838966580, 949245902, 121108935, 823659915, 505843781, 328036302, 644557517, 536975345, 335013702, 457349380, 7933637, 362017723, 351873219, 59925642, 794538428, 755692449, 52378916, 77354678, 267645902, 101142719, 999121103, 496583043, 78603071, 862157883, 673593942, 429541532, 159154530, 457973730, 826389281, 302268871, 698332307, 517872212, 104031124, 819441242, 194048479, 609874904, 147477543};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> layout = {335007597, 148471727, 7300237, 697025319, 500344945, 919742230, 344080098, 108553746, 824637498, 421434775, 376199647, 778296568, 273072229, 725299041, 856899639, 987746463, 398892982, 138957522, 146900993, 856866712, 817863154, 301686215, 407715370, 335735366, 405717338, 227156611, 529783844, 868108594, 227150506, 220906190, 867475193, 562158102, 221894268, 727291781, 111699772, 722239213, 647034011, 308296221, 683309310, 324187860, 729730995, 59508956, 102484427, 855319576, 637324348, 811900417, 843066038, 36217329, 950857939};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> layout = {1, 621237444, 144169596, 5832114, 956972809, 402403286, 232988724, 339273004, 270511879, 312655581, 412695546, 990503423, 874813682, 634589813, 717795204, 839029805, 209345377, 217345566, 147326025, 892654686, 541533425, 729573372, 804679993, 496534203, 584892947, 442004340, 308434620, 280475336, 330738021, 111808910, 122958718, 928854764, 733046353, 119644665, 934686877, 542535514, 522047950, 20191953, 734324869, 645076180, 332847533, 147020414, 635579603, 60177567, 781610227, 205891158, 899207371, 990955603, 275753075};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> layout = {1, 817286499, 628623119, 540806633, 166337053, 66032417, 835327325, 474771672, 346507752, 18581697, 439096933, 321982821, 947436460, 24659638, 294143838, 882123337, 567195151, 816191787, 902315289, 154036371, 313784319, 87679173, 301056785, 949363921, 147856739, 935183363, 7771430, 47064110, 778655317, 283524504, 946113857, 514781957, 953327354, 574736975, 908104942, 119664406, 640769391, 743432266, 446952430, 839793494, 762013962, 886049362, 14292667, 561966773, 910708999, 308436504, 296606461, 330420501, 124628290};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> layout = {290928960, 139117274, 785513656, 92809232, 286974012, 573213370, 100580661, 334038121, 351868686, 236621516, 132668329, 719166995, 189948869, 707405303, 627271936, 162129627, 200691045, 223220553, 609082056, 40484539, 837750866, 495131417, 54777205, 399717638, 258356768, 215730060, 696324099, 588777268, 192874701, 747762199, 73234139, 483803661, 886879472, 711264146, 576612892, 26369836, 284477515, 677193553, 360407956, 488862553, 913815068, 493076285, 208029547, 956280289, 52997939, 687817834, 118409915, 106205336, 911038386};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> layout = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> layout = {2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> layout = {5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> layout = {1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> layout = {999999951, 999999952, 999999953, 999999954, 999999955, 999999956, 999999957, 999999958, 999999959, 999999960, 999999961, 999999962, 999999963, 999999964, 999999965, 999999966, 999999967, 999999968, 999999969, 999999970, 999999971, 999999972, 999999973, 999999974, 999999975, 999999976, 999999977, 999999978, 999999979, 999999980, 999999981, 999999982, 999999983, 999999984, 999999985, 999999986, 999999987, 999999988, 999999989, 999999990, 999999991, 999999992, 999999993, 999999994, 999999995, 999999996, 999999997, 999999998, 999999999, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> layout = {1, 1, 1000000000, 1000000000, 1, 2, 1000000000, 1, 1, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> layout = {3, 1, 3, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> layout = {1, 1000000000, 1, 1, 1, 1000000000, 1, 1000000000, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> layout = {1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> layout = {1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> layout = {1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> layout = {3, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> layout = {2, 1, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> layout = {2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> layout = {2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> layout = {10, 1, 10};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> layout = {1, 2, 1, 10, 10};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> layout = {1, 1, 4, 1, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> layout = {1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> layout = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> layout = {1, 1, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> layout = {3, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> layout = {1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> layout = {1, 5, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> layout = {2, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> layout = {1, 2, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> layout = {1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> layout = {2, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> layout = {3, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> layout = {2, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> layout = {2, 1, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> layout = {2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> layout = {1, 1, 2, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> layout = {7, 1, 2, 6};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> layout = {5, 5, 1, 5, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> layout = {3, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> layout = {1, 1, 1, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> layout = {8, 1, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> layout = {3, 1, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> layout = {1, 2, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> layout = {1, 1, 3, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> layout = {3, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> layout = {1, 1, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> layout = {2, 2, 1, 2, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> layout = {1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> layout = {3, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> layout = {1, 1, 1, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> layout = {2, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> layout = {3, 1, 1, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> layout = {1, 3, 2, 2, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> layout = {2, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> layout = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> layout = {1, 2, 3123456};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> layout = {1, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> layout = {262236773, 208042610, 800207363, 428428950, 47718729, 793958356, 543227092, 255063702, 245922718, 448084511, 841298077, 50803248, 489249764, 634882133, 437249776, 192858939, 769723076, 17244080, 451954760, 998335073, 962932683, 107998841, 117154511, 343955363, 434512597, 123907814, 495496907, 546733314, 503129484, 176639951, 280148755, 367267899, 454227564, 981534503, 520949728, 114045555, 185760391, 671248907, 815949939, 909681830, 282187155, 589192792, 614643670, 338765782, 328686463, 295108507, 673893159, 736913846, 137660168, 555815228};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> layout = {1, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> layout = {3, 1, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> layout = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> layout = {3, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> layout = {1000000, 9, 8, 700000, 6, 5, 4, 3, 2, 1, 600};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> layout = {1, 5, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> layout = {1, 3, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> layout = {10, 10};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> layout = {10, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> layout = {2, 1000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> layout = {1, 1, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> layout = {2, 10};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> layout = {3, 1, 3, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> layout = {4, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> layout = {7, 4, 1, 6, 10};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> layout = {7, 1, 6, 1, 5, 1, 8};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> layout = {1010000, 91000, 81000, 7, 6, 5, 4, 3, 2, 1, 10, 10, 10, 100, 10, 10, 10, 10, 10, 1000, 1000000, 1, 10000000, 100000000, 10000, 1000000, 10000000, 10000, 1000, 1000, 1, 10000, 1000, 1000, 1000, 100, 1000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> layout = {3, 1, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> layout = {6, 6, 6};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> layout = {5, 5, 1, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> layout = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> layout = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> layout = {3, 5, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> layout = {3, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> layout = {2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> layout = {10, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> layout = {1, 1, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> layout = {1000000, 1000000, 3, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> layout = {10, 10, 10};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> layout = {5, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> layout = {5, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> layout = {1, 1, 3, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> layout = {1, 1, 2, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> layout = {1, 4, 4, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> layout = {5, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> layout = {2, 1, 1, 2, 1, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> layout = {1, 1, 1, 3, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> layout = {1, 1, 1, 1, 2, 1, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> layout = {1, 1, 4, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> layout = {43, 3, 4, 4, 3, 6, 3, 42, 2, 1, 12, 2, 1, 2, 3, 4, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> layout = {4, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> layout = {1, 2, 3, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> layout = {1, 1, 999999999, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> layout = {1, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> layout = {5, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> layout = {1, 2, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> layout = {1, 3, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> layout = {1, 4, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> layout = {2, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> layout = {2, 3, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> layout = {1, 1, 17, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> layout = {16, 1, 1, 1, 13414};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> layout = {1, 1, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> layout = {1, 1, 1, 100, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> layout = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1, 1000000000};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> layout = {2, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> layout = {2, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> layout = {3, 5, 2, 3, 1, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> layout = {1, 2, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> layout = {1, 5, 1, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> layout = {1110, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 114, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> layout = {2, 1, 8};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> layout = {1, 5, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> layout = {1, 1, 1, 1, 2, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> layout = {1, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> layout = {5, 5, 4, 6};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> layout = {1, 1, 5, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> layout = {2, 3, 3, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> layout = {1, 3, 1, 2, 2, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> layout = {1, 1, 1, 2, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> layout = {1, 1, 3, 1, 2, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> layout = {1, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> layout = {1, 1, 1, 1, 2, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> layout = {2, 3, 4, 5, 1, 2, 2, 2, 2, 1, 1, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> layout = {3, 4, 2, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> layout = {2, 2, 1, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> layout = {2, 1, 1, 1, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> layout = {5, 10, 15};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> layout = {3, 3, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> layout = {5, 1, 1, 1, 3, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> layout = {2, 100, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> layout = {1, 2, 5, 1, 3, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> layout = {1, 1, 1, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> layout = {5, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> layout = {1, 4, 1, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> layout = {1, 3, 3};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> layout = {2, 3, 4, 5};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> layout = {4, 4, 4, 4};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> layout = {3, 1, 1, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> layout = {87, 8, 687, 68, 76, 876, 8687, 6};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> layout = {1, 5, 8};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> layout = {1, 1, 1, 2, 1, 2};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Bob";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> layout = {2, 5, 1};
    OrderedNim* pObj = new OrderedNim();
    clock_t start = clock();
    string result = pObj->winner(layout);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=13904&pm=10190
********************************************************************************
#include <map> 
#include <set> 
#include <cmath> 
#include <queue> 
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cstdlib> 
#include <climits> 
#include <cstring> 
#include <cassert> 
#include <numeric> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include "float.h" 
#include <ctime> 
using namespace std; 
 
#define FOR(i,a,b) for (int i(a),_b(b); i <= _b; ++i) 
#define FORD(i,a,b) for (int i(a),_b(b); i >= _b; --i) 
#define REP(i,n) for (int i(0),_n(n); i < _n; ++i) 
#define REPD(i,n) for (int i((n)-1); i >= 0; --i) 
template<typename T> int size(const T& c) { return (int)c.size(); }  
template<typename T> T sqr(T x) { return x*x; } 
 
class OrderedNim { 
public: 
    string winner(vector <int> layout) { 
    int n = size(layout); 
    vector<bool> firstWins(n+1); 
    REPD(i, n)  
      layout[i] == 1 ? firstWins[i] = !firstWins[i+1] : firstWins[i] = true; 
    return firstWins[0] ? "Alice" : "Bob"; 
    } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.12 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/