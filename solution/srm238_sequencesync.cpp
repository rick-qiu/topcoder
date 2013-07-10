/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4506
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

class SequenceSync {
public:
    int getLength(vector<string> transitions);
};

int SequenceSync::getLength(vector<string> transitions) {
    int ret;
    return ret;
}


int test0() {
    vector<string> transitions = {"1 1 1 1", "1 1 1 2", "0 2 2 2"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> transitions = {"1 1 1 1", "2 2 2 2", "3 3 3 3", "0 0 0 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
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
    vector<string> transitions = {"0 0 0 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> transitions = {"1 1 1 0", "2 2 2 1", "3 3 3 2", "4 4 4 3", "5 5 5 5", "6 6 6 6", "7 7 7 0", "0 0 0 8", "8 8 8 8", "9 9 9 8"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> transitions = {"0 0 0 0", "1 1 1 1", "2 2 2 2", "3 3 3 3", "4 4 4 4", "5 5 5 5", "6 6 6 6", "7 7 7 7", "8 8 8 8", "9 9 9 9", "10 10 10 10", "11 11 11 11", "12 12 12 12", "13 13 13 13", "14 14 14 14", "15 15 15 15", "16 16 16 16", "17 17 17 17", "18 18 18 18", "19 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
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
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "11 10 10 10", "12 11 11 11", "13 12 12 12", "14 13 13 13", "15 14 14 14", "16 15 15 15", "17 16 16 16", "18 17 17 17", "0 0 0 19", "19 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> transitions = {"0 0 0 0", "1 1 1 1", "2 2 2 2", "3 3 3 3", "4 4 4 4", "5 5 5 5", "6 6 6 6", "7 7 7 7", "8 8 8 8", "9 9 9 9", "10 10 10 10", "11 11 11 11", "12 12 12 12", "13 13 13 13", "14 14 14 14", "15 15 15 15", "16 16 16 16", "17 17 17 17", "19 19 19 19", "18 18 18 18"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "0 0 3 3"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "11 10 10 10", "12 11 11 11", "13 12 12 12", "14 13 13 13", "15 14 14 14", "16 15 15 15", "17 16 16 16", "18 17 17 17", "19 18 18 18", "0 0 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> transitions = {"1 0 1 0", "2 1 2 1", "3 2 3 2", "4 3 4 3", "5 4 5 4", "6 5 6 5", "7 6 7 6", "8 7 8 7", "9 8 9 8", "10 9 10 9", "11 10 11 10", "12 11 12 11", "13 12 13 12", "14 13 14 13", "15 14 15 14", "16 15 16 15", "17 16 17 16", "18 17 18 17", "19 18 19 18", "0 0 0 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> transitions = {"10 0 1 0", "2 1 2 1", "3 2 3 2", "4 3 4 3", "5 4 5 4", "6 5 6 5", "7 6 7 6", "8 7 8 7", "9 8 9 8", "10 9 10 9", "11 10 11 10", "12 11 12 11", "13 12 13 12", "14 13 14 13", "15 14 15 14", "16 15 16 15", "17 16 17 16", "18 17 18 17", "19 18 19 18", "0 0 0 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "11 10 10 10", "12 11 11 11", "13 12 12 12", "14 13 13 13", "15 14 14 14", "16 15 15 15", "17 16 16 16", "18 17 17 17", "19 18 18 18", "0 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "11 10 10 10", "12 11 11 11", "13 12 12 12", "14 13 13 13", "15 14 14 14", "16 15 15 15", "17 16 16 16", "18 17 17 17", "19 18 18 18", "18 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "0 0 19 19", "11 11 10 11", "12 12 11 12", "13 13 12 13", "14 14 13 14", "15 15 14 15", "16 16 15 16", "17 17 16 17", "18 18 17 18", "19 19 18 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "0 0 10 10", "11 11 19 19", "12 12 11 12", "13 13 12 13", "14 14 13 14", "15 15 14 15", "16 16 15 16", "17 17 16 17", "18 18 17 18", "19 19 18 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> transitions = {"1 0 0 0", "2 1 1 1", "3 2 2 2", "4 3 3 3", "5 4 4 4", "6 5 5 5", "7 6 6 6", "8 7 7 7", "9 8 8 8", "10 9 9 9", "0 0 10 10", "11 0 19 19", "12 12 11 12", "13 13 12 13", "14 14 13 14", "15 15 14 15", "16 16 15 16", "17 17 16 17", "18 18 17 18", "19 19 18 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> transitions = {"7 8 0 0", "8 14 1 1", "13 2 2 2", "5 5 3 3", "14 11 4 4", "18 16 5 5", "12 13 6 6", "9 1 7 7", "2 8 8 8", "18 3 9 9", "4 17 10 10", "8 17 11 11", "7 3 12 12", "15 7 13 13", "1 12 14 14", "3 19 15 15", "18 1 16 16", "1 8 17 17", "14 18 18 18", "9 9 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> transitions = {"17 11 0 0", "16 0 1 1", "6 2 2 2", "14 12 3 3", "15 4 4 4", "4 12 5 5", "14 17 6 6", "19 13 7 7", "9 17 8 8", "5 3 9 9", "8 16 10 10", "0 8 11 11", "13 1 12 12", "7 3 13 13", "2 6 14 14", "1 16 15 15", "8 14 16 16", "18 9 17 17", "0 1 18 18", "14 8 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> transitions = {"18 17 0 0", "17 6 1 1", "19 0 2 2", "15 6 3 3", "7 0 4 4", "4 10 5 5", "7 3 6 6", "18 12 7 7", "6 14 8 8", "10 9 9 9", "3 4 10 10", "0 7 11 11", "8 9 12 12", "3 9 13 13", "9 8 14 14", "8 18 15 15", "8 3 16 16", "14 5 17 17", "17 17 18 18", "14 0 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> transitions = {"10 4 0 0", "5 7 1 1", "6 6 2 2", "13 14 3 3", "12 9 4 4", "19 15 5 5", "19 16 6 6", "9 19 7 7", "1 0 8 8", "11 18 9 9", "13 6 10 10", "19 14 11 11", "17 8 12 12", "15 3 13 13", "8 17 14 14", "12 4 15 15", "14 12 16 16", "7 3 17 17", "2 12 18 18", "18 1 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> transitions = {"7 0 0 0", "1 2 1 1", "15 3 2 2", "7 15 3 3", "0 7 4 4", "7 11 5 5", "11 1 6 6", "2 1 7 7", "13 16 8 8", "17 17 9 9", "11 11 10 10", "0 9 11 11", "12 10 12 12", "9 17 13 13", "8 4 14 14", "10 7 15 15", "10 17 16 16", "3 19 17 17", "9 13 18 18", "10 15 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> transitions = {"8 11 0 0", "2 19 1 1", "8 4 2 2", "10 5 3 3", "18 6 4 4", "7 7 5 5", "2 15 6 6", "15 9 7 7", "6 5 8 8", "8 0 9 9", "11 15 10 10", "11 12 11 11", "5 18 12 12", "8 13 13 13", "10 13 14 14", "5 8 15 15", "8 6 16 16", "2 19 17 17", "18 6 18 18", "10 6 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> transitions = {"4 1 0 0", "17 2 1 1", "6 0 2 2", "17 6 3 3", "8 8 4 4", "2 13 5 5", "16 17 6 6", "6 8 7 7", "14 6 8 8", "3 1 9 9", "3 10 10 10", "18 16 11 11", "8 15 12 12", "0 11 13 13", "19 4 14 14", "11 14 15 15", "15 5 16 16", "1 7 17 17", "16 10 18 18", "13 15 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> transitions = {"13 9 0 0", "11 3 1 1", "9 3 2 2", "5 13 3 3", "14 6 4 4", "8 19 5 5", "9 13 6 6", "7 7 7 7", "10 3 8 8", "3 10 9 9", "5 9 10 10", "17 7 11 11", "18 1 12 12", "2 15 13 13", "1 0 14 14", "17 13 15 15", "12 2 16 16", "4 12 17 17", "16 1 18 18", "19 5 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> transitions = {"15 10 0 0", "17 2 1 1", "13 19 2 2", "19 0 3 3", "10 16 4 4", "13 15 5 5", "14 19 6 6", "3 4 7 7", "4 14 8 8", "12 11 9 9", "5 0 10 10", "11 11 11 11", "2 17 12 12", "8 16 13 13", "15 14 14 14", "7 13 15 15", "18 13 16 16", "17 9 17 17", "16 5 18 18", "1 18 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> transitions = {"15 11 0 0", "2 12 1 1", "1 14 2 2", "18 5 3 3", "13 7 4 4", "4 17 5 5", "3 0 6 6", "14 8 7 7", "1 7 8 8", "11 9 9 9", "15 6 10 10", "9 16 11 11", "9 14 12 12", "10 11 13 13", "7 1 14 14", "4 2 15 15", "3 3 16 16", "14 14 17 17", "4 1 18 18", "17 11 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> transitions = {"18 6 0 0", "9 5 1 1", "19 0 2 2", "18 0 3 3", "12 10 4 4", "8 14 5 5", "6 1 6 6", "17 19 7 7", "4 18 8 8", "11 8 9 9", "5 10 10 10", "17 3 11 11", "12 19 12 12", "18 6 13 13", "18 2 14 14", "11 13 15 15", "1 6 16 16", "9 5 17 17", "14 8 18 18", "16 11 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> transitions = {"17 15 0 0", "6 14 1 1", "1 10 2 2", "10 2 3 3", "11 19 4 4", "8 14 5 5", "0 18 6 6", "13 7 7 7", "1 6 8 8", "18 3 9 9", "4 1 10 10", "3 0 11 11", "12 18 12 12", "2 2 13 13", "11 5 14 14", "15 11 15 15", "11 9 16 16", "18 5 17 17", "14 6 18 18", "2 15 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> transitions = {"19 7 0 0", "18 12 1 1", "14 12 2 2", "13 1 3 3", "1 11 4 4", "11 1 5 5", "10 18 6 6", "15 1 7 7", "17 15 8 8", "15 13 9 9", "9 7 10 10", "2 19 11 11", "0 9 12 12", "7 11 13 13", "3 18 14 14", "5 16 15 15", "10 6 16 16", "2 15 17 17", "16 8 18 18", "19 11 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> transitions = {"1 4 0 0", "5 1 1 1", "10 11 2 2", "17 9 3 3", "9 16 4 4", "14 5 5 5", "12 18 6 6", "15 10 7 7", "14 11 8 8", "4 0 9 9", "0 14 10 10", "0 18 11 11", "2 2 12 12", "17 3 13 13", "3 14 14 14", "11 2 15 15", "2 9 16 16", "11 4 17 17", "14 18 18 18", "2 12 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> transitions = {"0 11 0 0", "12 17 1 1", "12 15 2 2", "14 1 3 3", "5 0 4 4", "13 19 5 5", "11 5 6 6", "17 19 7 7", "15 8 8 8", "2 16 9 9", "9 12 10 10", "14 18 11 11", "13 7 12 12", "6 11 13 13", "17 17 14 14", "16 0 15 15", "3 12 16 16", "12 10 17 17", "8 15 18 18", "10 11 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> transitions = {"4 18 0 0", "18 7 1 1", "17 13 2 2", "6 12 3 3", "14 18 4 4", "19 11 5 5", "0 15 6 6", "10 19 7 7", "11 6 8 8", "3 8 9 9", "12 4 10 10", "1 2 11 11", "5 14 12 12", "4 9 13 13", "6 15 14 14", "5 5 15 15", "13 14 16 16", "7 13 17 17", "7 5 18 18", "11 14 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> transitions = {"7 2 0 0", "4 13 1 1", "12 15 2 2", "15 1 3 3", "13 7 4 4", "10 15 5 5", "3 16 6 6", "18 3 7 7", "12 16 8 8", "14 4 9 9", "5 3 10 10", "14 9 11 11", "0 4 12 12", "3 2 13 13", "6 10 14 14", "19 8 15 15", "2 11 16 16", "3 13 17 17", "5 5 18 18", "8 14 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> transitions = {"6 9 0 0", "2 7 1 1", "12 13 2 2", "7 12 3 3", "9 2 4 4", "15 8 5 5", "6 10 6 6", "2 9 7 7", "3 11 8 8", "14 6 9 9", "10 8 10 10", "6 5 11 11", "13 14 12 12", "18 4 13 13", "16 17 14 14", "2 14 15 15", "0 17 16 16", "7 4 17 17", "1 2 18 18", "13 3 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> transitions = {"17 6 0 0", "4 15 1 1", "1 3 2 2", "12 16 3 3", "7 1 4 4", "10 8 5 5", "0 12 6 6", "3 1 7 7", "6 19 8 8", "14 7 9 9", "11 6 10 10", "16 0 11 11", "9 0 12 12", "3 12 13 13", "13 11 14 14", "2 4 15 15", "6 5 16 16", "3 11 17 17", "15 10 18 18", "5 3 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> transitions = {"7 7 0 0", "0 19 1 1", "10 3 2 2", "4 18 3 3", "2 1 4 4", "11 7 5 5", "14 16 6 6", "6 14 7 7", "16 12 8 8", "9 2 9 9", "4 0 10 10", "17 9 11 11", "1 16 12 12", "17 11 13 13", "18 6 14 14", "6 6 15 15", "15 2 16 16", "1 4 17 17", "8 8 18 18", "7 13 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> transitions = {"16 16 0 0", "16 3 1 1", "0 0 2 2", "13 19 3 3", "14 6 4 4", "0 13 5 5", "11 17 6 6", "11 9 7 7", "6 4 8 8", "10 2 9 9", "8 10 10 10", "5 5 11 11", "8 5 12 12", "7 18 13 13", "19 17 14 14", "9 12 15 15", "15 1 16 16", "19 7 17 17", "14 3 18 18", "16 6 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> transitions = {"18 14 0 0", "9 9 1 1", "14 3 2 2", "3 12 3 3", "16 18 4 4", "15 1 5 5", "16 10 6 6", "7 13 7 7", "14 15 8 8", "18 5 9 9", "7 2 10 10", "5 7 11 11", "17 5 12 12", "18 6 13 13", "13 5 14 14", "2 7 15 15", "17 1 16 16", "16 18 17 17", "6 11 18 18", "5 4 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> transitions = {"1 9 0 0", "18 18 1 1", "2 17 2 2", "9 17 3 3", "9 19 4 4", "2 14 5 5", "15 18 6 6", "5 1 7 7", "16 2 8 8", "6 12 9 9", "17 16 10 10", "6 2 11 11", "8 17 12 12", "6 12 13 13", "10 10 14 14", "1 8 15 15", "10 6 16 16", "12 10 17 17", "6 13 18 18", "2 14 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> transitions = {"2 0 0 0", "11 12 1 1", "12 7 2 2", "12 10 3 3", "5 13 4 4", "11 12 5 5", "12 6 6 6", "0 6 7 7", "11 9 8 8", "10 19 9 9", "7 13 10 10", "0 8 11 11", "8 15 12 12", "18 5 13 13", "6 10 14 14", "7 1 15 15", "2 5 16 16", "4 0 17 17", "8 9 18 18", "16 11 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> transitions = {"4 3 0 0", "9 10 1 1", "11 15 2 2", "4 9 3 3", "1 14 4 4", "10 11 5 5", "12 12 6 6", "0 17 7 7", "13 11 8 8", "4 5 9 9", "10 13 10 10", "4 18 11 11", "4 4 12 12", "12 10 13 13", "8 4 14 14", "7 15 15 15", "9 3 16 16", "5 14 17 17", "15 11 18 18", "12 6 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> transitions = {"6 18 0 0", "4 15 1 1", "0 10 2 2", "19 6 3 3", "16 8 4 4", "14 0 5 5", "12 0 6 6", "18 2 7 7", "17 14 8 8", "14 19 9 9", "6 8 10 10", "2 3 11 11", "7 13 12 12", "15 8 13 13", "9 8 14 14", "2 17 15 15", "0 18 16 16", "3 12 17 17", "13 7 18 18", "1 6 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> transitions = {"0 7 0 0", "12 3 1 1", "14 8 2 2", "2 18 3 3", "6 17 4 4", "0 5 5 5", "15 5 6 6", "6 2 7 7", "9 4 8 8", "1 12 9 9", "8 7 10 10", "17 5 11 11", "8 1 12 12", "16 10 13 13", "5 9 14 14", "15 2 15 15", "3 4 16 16", "18 4 17 17", "12 10 18 18", "12 17 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> transitions = {"3 14 0 0", "7 17 1 1", "6 12 2 2", "12 6 3 3", "0 3 4 4", "14 9 5 5", "9 17 6 6", "4 2 7 7", "4 4 8 8", "17 13 9 9", "6 1 10 10", "11 2 11 11", "4 14 12 12", "14 4 13 13", "1 19 14 14", "5 18 15 15", "18 19 16 16", "15 10 17 17", "4 9 18 18", "5 7 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> transitions = {"5 6 0 0", "5 16 1 1", "19 11 2 2", "8 13 3 3", "17 8 4 4", "17 1 5 5", "12 18 6 6", "11 2 7 7", "2 14 8 8", "11 5 9 9", "8 15 10 10", "10 16 11 11", "2 15 12 12", "11 19 13 13", "14 18 14 14", "6 8 15 15", "7 1 16 16", "9 17 17 17", "0 10 18 18", "16 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> transitions = {"12 15 0 0", "13 11 1 1", "10 11 2 2", "2 1 3 3", "17 7 4 4", "5 6 5 5", "2 15 6 6", "5 1 7 7", "13 5 8 8", "4 16 9 9", "19 14 10 10", "11 18 11 11", "15 12 12 12", "3 5 13 13", "12 7 14 14", "18 3 15 15", "16 15 16 16", "0 4 17 17", "14 16 18 18", "16 7 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> transitions = {"15 4 0 0", "10 6 1 1", "7 8 2 2", "2 8 3 3", "10 15 4 4", "6 10 5 5", "14 10 6 6", "9 5 7 7", "13 11 8 8", "10 17 9 9", "6 8 10 10", "2 13 11 11", "5 9 12 12", "4 18 13 13", "15 4 14 14", "9 14 15 15", "6 15 16 16", "12 5 17 17", "8 13 18 18", "7 3 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> transitions = {"14 0 0 0", "11 12 1 1", "11 12 2 2", "7 13 3 3", "0 9 4 4", "1 10 5 5", "3 16 6 6", "6 9 7 7", "7 4 8 8", "18 14 9 9", "13 16 10 10", "12 16 11 11", "16 3 12 12", "2 1 13 13", "19 8 14 14", "1 18 15 15", "9 11 16 16", "5 6 17 17", "6 17 18 18", "0 18 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> transitions = {"4 19 0 0", "16 4 1 1", "2 4 2 2", "15 6 3 3", "13 10 4 4", "12 2 5 5", "19 15 6 6", "15 16 7 7", "19 15 8 8", "14 14 9 9", "15 5 10 10", "17 11 11 11", "19 4 12 12", "11 19 13 13", "4 12 14 14", "14 9 15 15", "7 11 16 16", "8 1 17 17", "11 15 18 18", "9 2 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> transitions = {"13 4 0 0", "2 19 1 1", "9 10 2 2", "11 9 3 3", "14 2 4 4", "6 14 5 5", "6 8 6 6", "19 5 7 7", "4 15 8 8", "2 8 9 9", "14 10 10 10", "12 10 11 11", "12 12 12 12", "18 6 13 13", "8 16 14 14", "9 8 15 15", "3 0 16 16", "5 6 17 17", "3 8 18 18", "15 1 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> transitions = {"9 18 0 0", "3 3 1 1", "6 5 2 2", "19 17 3 3", "2 8 4 4", "14 13 5 5", "13 3 6 6", "8 11 7 7", "0 2 8 8", "11 19 9 9", "11 17 10 10", "13 7 11 11", "1 2 12 12", "7 8 13 13", "19 6 14 14", "5 13 15 15", "13 5 16 16", "2 7 17 17", "15 17 18 18", "8 0 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> transitions = {"11 9 0 0", "16 10 1 1", "2 11 2 2", "0 6 3 3", "9 7 4 4", "7 14 5 5", "3 10 6 6", "16 13 7 7", "19 13 8 8", "12 17 9 9", "8 11 10 10", "6 3 11 11", "8 15 12 12", "2 13 13 13", "6 15 14 14", "2 1 15 15", "5 15 16 16", "11 0 17 17", "4 1 18 18", "19 7 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> transitions = {"16 0 0 0", "7 8 1 1", "1 18 2 2", "17 16 3 3", "18 11 4 4", "13 18 5 5", "18 1 6 6", "11 1 7 7", "9 5 8 8", "10 10 9 9", "1 7 10 10", "3 6 11 11", "17 17 12 12", "4 12 13 13", "10 12 14 14", "0 0 15 15", "15 18 16 16", "19 10 17 17", "0 13 18 18", "7 11 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> transitions = {"15 18 0 0", "4 12 1 1", "4 5 2 2", "12 6 3 3", "1 17 4 4", "6 0 5 5", "2 11 6 6", "9 15 7 7", "17 1 8 8", "4 19 9 9", "16 14 10 10", "11 15 11 11", "11 14 12 12", "13 3 13 13", "18 1 14 14", "1 11 15 15", "16 11 16 16", "14 13 17 17", "0 19 18 18", "8 18 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> transitions = {"2 6 0 0", "7 8 1 1", "17 13 2 2", "19 7 3 3", "10 0 4 4", "1 7 5 5", "12 9 6 6", "13 1 7 7", "3 5 8 8", "6 6 9 9", "11 17 10 10", "15 5 11 11", "10 11 12 12", "8 16 13 13", "9 15 14 14", "6 15 15 15", "7 2 16 16", "8 3 17 17", "19 12 18 18", "5 8 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> transitions = {"6 18 0 0", "18 0 1 1", "1 12 2 2", "15 4 3 3", "10 7 4 4", "9 19 5 5", "8 6 6 6", "3 15 7 7", "11 7 8 8", "0 17 9 9", "5 11 10 10", "12 1 11 11", "18 2 12 12", "16 18 13 13", "5 15 14 14", "19 8 15 15", "4 19 16 16", "9 0 17 17", "6 10 18 18", "7 13 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> transitions = {"10 17 8 3", "13 11 18 14", "15 0 18 13", "11 3 3 2", "17 8 0 10", "2 6 5 9", "17 15 6 19", "3 10 6 14", "8 14 5 9", "13 15 10 5", "0 4 17 10", "19 6 15 15", "19 9 16 1", "0 18 4 10", "7 2 19 6", "3 0 14 15", "16 4 1 7", "17 19 2 8", "8 9 7 8", "9 16 11 18"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> transitions = {"6 13 11 7", "0 8 8 9", "19 5 4 17", "5 3 16 13", "12 15 6 7", "14 6 19 6", "7 0 19 0", "1 19 0 6", "8 17 14 6", "18 11 15 18", "9 12 13 16", "8 5 7 4", "10 8 3 2", "7 7 15 16", "17 11 18 15", "4 18 1 12", "0 16 17 11", "19 14 18 18", "3 15 3 18", "16 12 6 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> transitions = {"10 14 7 7", "19 6 2 14", "2 17 19 8", "19 0 5 17", "12 18 9 5", "4 3 18 10", "7 8 1 19", "9 7 0 4", "12 19 16 10", "8 6 7 0", "15 13 6 17", "13 3 15 14", "15 1 19 7", "17 13 1 14", "1 0 19 18", "4 9 4 1", "6 5 17 4", "6 19 4 3", "0 14 6 16", "3 16 15 13"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> transitions = {"10 15 1 5", "14 8 8 2", "11 7 15 9", "17 18 2 10", "4 18 3 10", "1 8 16 3", "17 4 3 0", "7 8 4 2", "13 1 13 3", "19 8 19 17", "13 13 6 5", "15 6 6 4", "11 2 10 11", "1 3 5 13", "8 0 15 14", "3 12 4 7", "6 19 6 8", "18 11 3 8", "4 15 15 9", "12 6 11 16"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> transitions = {"12 9 12 8", "13 19 5 14", "3 0 17 3", "6 6 4 14", "14 16 3 1", "18 15 15 8", "9 12 9 2", "14 15 14 5", "0 18 9 6", "18 17 13 13", "14 0 5 15", "16 1 8 12", "16 11 19 7", "4 13 1 17", "11 3 11 9", "14 2 12 6", "6 13 16 11", "5 17 10 15", "12 2 1 7", "19 19 3 3"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> transitions = {"19 8 3 2", "11 0 14 0", "2 10 14 17", "18 0 18 16", "18 9 12 3", "2 18 2 8", "12 4 3 14", "15 6 8 0", "8 7 0 13", "10 5 15 2", "14 4 13 18", "19 15 5 4", "14 19 4 8", "18 2 19 19", "17 13 13 8", "7 6 12 12", "7 11 16 11", "6 13 14 3", "3 4 18 10", "7 5 8 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> transitions = {"10 1 14 10", "1 16 3 12", "10 13 18 5", "3 3 6 6", "5 6 13 18", "11 6 11 3", "8 11 12 1", "4 19 13 14", "10 10 9 16", "17 16 6 8", "6 19 0 5", "16 2 7 12", "4 14 6 17", "19 7 8 5", "6 4 11 0", "16 0 11 16", "19 13 17 7", "14 19 7 4", "12 3 17 6", "11 8 5 9"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> transitions = {"10 13 4 12", "17 13 17 17", "6 19 14 14", "12 1 16 12", "16 1 12 13", "9 6 19 8", "15 5 6 10", "16 6 4 10", "1 12 16 5", "9 12 19 12", "11 16 6 10", "15 19 17 8", "2 18 1 0", "2 18 5 14", "14 3 5 15", "4 19 5 9", "17 0 4 14", "6 15 8 1", "7 5 6 16", "18 1 1 2"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> transitions = {"13 15 17 4", "7 14 10 0", "6 19 9 8", "13 3 10 19", "4 5 16 16", "7 4 12 4", "18 19 12 19", "15 11 9 3", "14 11 6 2", "19 5 5 6", "10 3 1 1", "5 17 8 17", "4 7 7 16", "8 5 8 13", "16 0 3 14", "14 1 11 6", "17 8 19 4", "19 1 2 5", "8 6 18 8", "12 1 2 17"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> transitions = {"10 18 18 2", "1 10 14 0", "6 11 4 15", "17 16 17 19", "12 3 8 17", "0 14 5 0", "16 13 7 5", "19 2 15 14", "16 11 4 10", "7 16 4 4", "2 7 9 9", "15 17 12 13", "1 8 11 10", "4 9 5 14", "4 4 4 8", "17 11 5 12", "14 8 10 9", "9 5 0 13", "17 4 6 16", "10 19 6 3"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> transitions = {"16 4 9 10", "2 14 0 4", "10 9 17 2", "13 19 2 19", "3 0 3 8", "6 11 7 14", "7 4 18 17", "7 2 13 16", "5 14 16 6", "11 4 11 5", "17 5 9 3", "4 1 1 1", "5 18 5 12", "11 13 14 4", "3 5 19 18", "11 7 15 10", "19 12 14 4", "3 7 2 7", "4 8 11 19", "14 11 11 3"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> transitions = {"2 3 8 6", "10 6 7 13", "19 14 5 15", "14 11 0 14", "6 15 3 1", "0 16 19 4", "19 13 10 17", "10 18 17 14", "7 5 16 16", "15 8 19 12", "9 19 15 10", "11 10 11 9", "4 1 18 7", "2 18 17 19", "16 0 0 1", "17 1 4 12", "3 4 1 15", "8 7 5 9", "5 14 19 16", "7 18 14 13"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> transitions = {"5 9 17 13", "18 7 11 3", "2 11 0 18", "1 16 18 16", "0 18 6 17", "17 19 3 15", "19 14 14 6", "8 4 4 17", "10 6 16 2", "16 1 2 9", "0 0 7 7", "9 13 1 4", "15 11 12 17", "8 12 15 0", "19 0 5 0", "14 6 13 5", "7 7 2 5", "1 17 15 6", "15 5 9 9", "0 6 3 15"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> transitions = {"1 1 1 0", "2 2 2 1", "3 3 3 2", "4 4 4 3", "5 5 5 5", "6 6 6 6", "7 7 7 0", "0 0 0 8", "9 9 9 8", "10 10 10 10", "11 11 11 11", "12 12 12 12", "13 13 13 13", "14 14 14 14", "14 14 14 14", "14 14 14 14", "14 14 14 14", "14 14 14 14", "14 14 14 14", "9 9 9 8"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> transitions = {"0 0 0 0", "19 19 1 0", "19 19 1 2", "19 19 2 3", "19 19 3 4", "19 4 5 5", "19 5 6 6", "19 6 7 7", "19 7 8 8", "19 8 9 9", "19 9 10 10", "10 11 11 11", "11 12 12 12", "12 13 13 13", "13 14 14 14", "14 15 15 15", "15 16 16 16", "16 17 17 17", "17 18 18 18", "18 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> transitions = {"1 1 1 0", "2 2 2 1", "3 3 3 2", "4 4 4 3", "5 5 5 5", "6 6 6 6", "7 7 7 0", "0 0 0 8", "8 8 8 8", "9 9 9 8", "1 5 2 6", "10 15 18 12", "11 11 11 13", "14 14 14 19", "12 19 1 0", "19 18 17 16", "13 15 4 5", "6 8 9 11", "13 15 17 19", "11 7 6 2"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> transitions = {"0 1 2 3", "1 2 3 4", "2 3 4 5", "3 4 5 6", "4 5 6 7", "5 6 7 8", "6 7 8 9", "7 8 9 0", "0 2 1 3", "1 3 2 4", "2 4 3 5", "3 5 4 6", "4 6 5 7", "5 7 6 8", "6 8 7 9", "7 9 8 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> transitions = {"1 1 1 0", "2 2 2 2", "3 3 3 3", "4 4 4 4", "5 5 5 5", "6 6 6 6", "7 7 7 7", "8 8 8 8", "9 9 9 9", "10 10 10 10", "11 11 11 11", "12 12 12 12", "13 13 13 13", "14 14 14 14", "15 15 15 15", "16 16 16 16", "17 17 17 18", "18 18 18 17", "19 19 19 19", "0 0 0 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> transitions = {"0 0 0 1", "1 1 2 1", "2 2 2 3", "4 3 3 3", "4 5 4 4", "5 5 5 6", "6 7 6 6", "7 7 7 8", "9 8 8 8", "9 10 9 9", "10 10 10 11", "11 11 11 12", "12 13 12 12", "13 13 14 13", "15 14 14 14", "15 15 16 15", "17 16 16 16", "17 18 17 17", "18 19 18 18", "19 19 19 19"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> transitions = {"1 1 1 0", "2 2 2 1", "3 3 3 2", "4 4 4 3", "5 5 5 5", "2 6 1 4", "1 7 3 0", "3 0 6 8", "6 8 2 1", "3 9 7 8", "4 1 3 9", "1 2 2 1", "3 2 3 2", "4 4 3 3", "5 5 5 4", "5 6 6 6", "7 6 7 0", "0 0 7 8", "1 3 4 8", "9 2 6 8"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> transitions = {"1 1 1 0", "2 2 2 1", "3 3 3 2", "4 4 4 3", "5 5 5 4", "6 6 6 5", "7 7 7 6", "8 8 8 7", "9 9 9 8", "10 10 10 9", "11 11 11 10", "12 12 12 11", "13 13 13 12", "14 14 14 13", "15 15 15 14", "16 16 16 15", "17 17 17 16", "18 18 18 17", "19 19 19 18", "0 0 0 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> transitions = {"0 0 0 0", "1 1 1 1", "2 2 2 2", "3 3 3 3", "4 4 4 4", "5 5 5 5", "6 6 6 6", "7 7 7 7", "8 8 8 9", "9 9 9 10", "10 10 10 11", "11 12 13 10", "12 12 12 12", "10 9 8 7", "14 14 14 14", "15 16 14 15", "17 18 12 15", "16 18 12 10", "18 18 18 18"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> transitions = {"0 0 0 0"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> transitions = {"0 1 2 0", "1 3 5 7", "2 4 6 8", "1 3 5 7", "2 4 6 8", "1 3 5 7", "2 4 6 8", "1 3 5 7", "2 4 6 0", "2 4 6 8", "1 3 5 7"};
    SequenceSync* pObj = new SequenceSync();
    clock_t start = clock();
    int result = pObj->getLength(transitions);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=6537&pm=4506
********************************************************************************
// another fine solution by misof
#include <algorithm>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define CLEAR(t) memset((t),0,sizeof(t))
typedef vector<int> VI;
vector<string> split( const string& s, const string& delim =" " ) { vector<string> res; string t; for ( unsigned int i = 0 ; i != s.size() ; i++ ) { if ( delim.find( s[i] ) != string::npos ) { if ( !t.empty() ) { res.push_back( t ); t = ""; } } else { t += s[i]; } } if ( !t.empty() ) { res.push_back(t); } return res; }
vector<int> splitInt( const string& s, const string& delim =" " ) { vector<string> tok = split( s, delim ); vector<int> res; for ( unsigned int i = 0 ; i != tok.size(); i++ ) res.push_back( atoi( tok[i].c_str() ) ); return res; }
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int kam[24][4];
int N;
 
int bol[1234567];
 
int wt(int x) { int res=0; while (x) { if (x%2) res++; x/=2; } return res; }
 
class SequenceSync {
public:
  int getLength(vector <string> transitions) {
    N = transitions.size();
    REP(i,N) {
      VI V = splitInt( transitions[i] );
      REP(j,4) kam[i][j] = V[j];
    }
 
    if (N==1) return 0;
 
    CLEAR(bol);
    bol[ (1<<N) -1 ] = 1;
 
    queue<int> Q;
    Q.push( (1<<N) - 1);
 
    while (!Q.empty()) {
      int kde = Q.front();
      Q.pop();
 
      REP(s,4) {
        int next = 0;
        REP(i,N) if (kde & (1<<i)) next |= 1<<kam[i][s];
        if (bol[next]) continue;
        bol[next]=bol[kde]+1;
        if (wt(next)==1) return bol[next]-1;
        Q.push(next);
      }
    }
    
    return -1;
  }
 
 
};
// Unused code automatically removed, but the UCR still sucks
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/