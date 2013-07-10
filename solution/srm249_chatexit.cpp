/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4614
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

class ChatExit {
public:
    vector<int> leaveOrder(vector<string> numSeen);
};

vector<int> ChatExit::leaveOrder(vector<string> numSeen) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> numSeen = {"0 1 1", "2 0 0", "3 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> numSeen = {"0 1 1", "4 0 0", "3 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> numSeen = {"0 100 100 100 100 100", "100 0 100 100 100 100", "100 100 0 100 100 100", "100 100 100 0 100 100", "100 100 100 100 0 100", "100 100 100 100 100 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> numSeen = {"0 1 0 0", "1 0 0 0", "0 0 0 0", "0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 0, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> numSeen = {"0 1 1 0", "1 0 1 0", "0 0 0 0", "0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 0, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> numSeen = {"0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0", "0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> numSeen = {"0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> numSeen = {"0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 7, 0, 1, 2, 3, 4, 8};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> numSeen = {"0 1 1 1 1 1 1 1 1", "0 0 1 1 1 1 1 1 1", "0 0 0 1 1 1 1 1 1", "0 0 0 0 1 1 1 1 1", "0 0 0 0 0 1 1 1 1", "0 0 0 0 0 0 1 1 1", "0 0 0 0 0 0 0 1 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 6, 5, 4, 3, 2, 0, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> numSeen = {"0 1 1 1 1 1 1 1 1", "1 0 1 1 1 1 1 1 1", "0 0 0 1 1 1 1 1 1", "0 0 0 0 1 1 1 1 1", "0 0 0 0 0 1 1 1 1", "0 0 0 0 0 0 1 1 1", "0 0 0 0 0 0 0 1 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 6, 5, 4, 3, 2, 0, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> numSeen = {"0 1 1 1 1 1 1 1 1", "0 0 1 1 1 1 1 1 1", "0 0 0 1 1 1 1 1 1", "0 0 0 0 1 1 1 1 1", "0 0 0 0 0 1 1 1 1", "0 0 0 0 0 0 1 1 1", "0 0 0 0 0 0 0 1 1", "1 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> numSeen = {"0 1 1 1 1 1 1 1 1", "0 0 1 1 1 1 1 1 1", "0 1 0 1 1 1 1 1 1", "0 0 0 0 1 1 1 1 1", "0 0 0 0 0 1 1 1 1", "0 0 0 0 0 0 1 1 1", "0 0 0 0 0 0 0 1 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 6, 5, 4, 3, 0, 1, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> numSeen = {"0 0 1 1 1 1 1 1 1", "0 0 1 1 1 1 1 1 1", "1 1 0 1 1 1 1 1 1", "0 0 0 0 1 1 1 1 1", "0 0 0 0 0 1 1 1 1", "0 0 0 0 0 0 1 1 1", "0 0 0 0 0 0 0 1 1", "0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> numSeen = {"0 7 9 4 3 6 8 9 6 5 9 0 6 4 6 9 4 9 5 3 0 5 2 9 8", "5 0 4 0 2 8 8 2 6 7 5 6 6 7 3 3 7 0 9 8 3 6 6 7 0", "7 4 0 6 4 3 8 4 0 4 7 2 4 0 5 2 9 1 8 8 0 3 5 3 0", "3 7 4 0 9 2 6 3 4 1 8 6 4 8 8 2 5 2 9 2 4 8 0 5 1", "8 3 1 3 0 6 9 8 8 0 1 2 0 7 9 3 4 7 9 6 4 3 8 2 0", "3 4 5 5 5 0 0 0 2 9 7 6 5 2 1 9 9 7 7 1 6 4 6 6 7", "3 4 9 9 2 6 0 3 2 2 7 1 8 1 5 3 3 8 3 5 1 0 0 2 5", "2 6 0 8 4 7 3 0 4 7 9 5 1 7 9 3 8 7 1 4 4 1 7 4 8", "3 4 7 0 9 8 3 4 0 4 5 8 8 2 2 4 4 6 2 3 7 0 8 1 0", "7 6 6 6 8 2 0 3 0 0 3 6 6 1 5 5 6 2 2 9 5 1 6 0 9", "7 5 4 5 5 8 8 9 2 1 0 0 1 4 7 7 0 0 7 4 1 8 6 5 3", "9 6 9 4 9 8 5 1 5 3 4 0 3 6 7 7 0 4 1 6 6 0 2 1 9", "8 5 6 0 2 9 2 9 2 4 9 8 0 4 0 7 9 8 7 8 0 2 5 8 8", "0 5 5 3 1 5 3 1 7 4 3 6 5 0 0 6 2 7 1 5 9 7 8 0 5", "2 1 0 2 9 5 1 8 3 9 5 9 2 1 0 0 1 5 5 9 9 1 3 8 1", "1 0 2 8 1 0 9 9 6 5 4 7 5 4 6 0 8 9 2 1 2 5 6 3 5", "3 9 4 8 7 9 9 2 2 6 4 0 1 1 4 9 0 2 6 4 2 5 3 4 9", "7 7 7 0 6 5 3 6 4 8 5 3 7 5 3 4 6 0 5 2 7 6 4 5 1", "1 9 4 1 9 9 1 0 7 7 4 4 2 5 3 8 1 2 0 9 2 4 9 0 5", "3 7 0 9 4 2 0 6 1 6 1 3 9 4 4 9 6 3 0 0 2 1 8 1 9", "6 9 6 2 6 6 6 3 5 1 5 5 1 2 7 0 7 3 3 2 0 2 5 7 0", "4 6 4 7 3 5 5 2 5 4 6 7 2 7 9 4 4 2 8 4 1 0 4 0 1", "5 3 2 5 4 8 5 4 3 0 3 7 5 0 4 0 7 9 9 1 6 4 0 5 8", "1 0 2 5 8 3 8 1 9 3 0 2 8 2 6 3 4 6 3 6 3 3 4 0 7", "4 8 6 0 6 5 9 9 6 3 7 3 9 4 4 1 5 2 0 4 9 0 7 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> numSeen = {"0 7 6 0 1 2 5 4 3 9 2 4 6 0 9 6 5 9 1 3 9 6 6 8 5", "3 0 9 0 7 9 4 3 8 3 4 4 5 6 0 5 8 0 4 4 5 8 9 6 8", "8 3 0 9 6 5 3 2 3 2 7 5 3 4 7 5 0 2 1 7 4 4 9 2 0", "9 6 8 0 0 7 7 2 7 0 7 9 4 5 7 8 5 3 8 3 7 0 9 1 0", "7 0 6 1 0 7 8 6 1 6 6 2 2 5 8 0 9 2 1 1 9 9 8 0 3", "9 2 1 8 6 0 2 3 9 7 5 6 6 1 9 4 3 2 7 1 4 0 3 9 4", "8 1 6 2 6 3 0 5 2 4 4 0 0 5 4 0 9 2 1 4 4 1 4 6 0", "3 6 5 2 6 8 7 0 5 2 4 1 6 4 0 8 1 6 2 6 5 2 1 8 6", "9 7 1 9 4 7 6 2 0 7 0 0 3 8 1 9 9 3 9 2 8 4 7 0 3", "2 6 4 2 2 3 7 0 1 0 4 2 4 4 7 6 1 4 4 6 9 4 5 6 6", "5 1 5 1 4 9 0 1 0 1 0 7 1 9 1 9 0 1 1 1 8 8 2 7 6", "4 5 7 2 6 1 6 2 1 2 3 0 4 2 9 8 3 3 5 8 3 1 7 5 8", "5 7 3 0 4 6 0 0 9 0 2 2 0 4 8 1 0 1 4 0 3 6 6 6 8", "8 0 3 6 4 1 9 6 9 3 9 4 4 0 5 6 0 6 4 9 9 3 7 2 6", "2 9 6 2 8 6 0 5 6 2 5 7 3 1 0 8 9 8 3 3 4 3 3 4 1", "9 2 6 1 6 9 2 9 2 3 3 7 2 6 1 0 7 5 4 2 8 1 5 0 6", "2 4 6 9 5 8 0 8 9 2 2 6 9 4 2 8 0 2 0 7 9 3 3 3 6", "7 7 2 1 3 9 2 3 0 3 4 7 2 0 6 7 5 0 3 9 6 3 3 4 9", "4 6 9 8 6 9 4 6 4 7 9 5 0 4 2 6 1 9 0 5 8 0 4 3 1", "1 2 7 5 6 9 0 8 4 7 3 6 8 6 9 9 0 5 5 0 5 0 7 0 8", "4 0 2 5 6 6 1 9 0 8 8 0 5 0 9 4 9 7 7 2 0 5 9 3 3", "1 7 3 7 6 0 5 0 9 5 6 0 5 8 9 4 3 3 1 7 6 0 4 2 0", "6 1 1 3 8 3 6 4 6 4 4 1 2 4 4 1 9 6 1 0 1 7 0 4 5", "5 2 7 5 2 1 3 9 9 2 5 0 3 7 0 3 8 6 2 8 8 9 4 0 5", "3 0 6 4 8 3 0 7 2 0 0 6 7 8 4 8 5 9 2 2 6 9 8 5 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> numSeen = {"0 2 5 9 1 7 9 3 4 0 5 0 4 0 1 5 1 5 1 7 3 5 7 1 3", "3 0 5 1 3 5 3 5 6 0 4 2 2 7 2 8 1 2 8 6 9 6 3 7 0", "5 8 0 6 3 5 2 4 9 3 3 3 7 0 8 7 7 4 7 6 5 3 9 0 2", "9 5 5 0 0 6 7 0 8 5 5 9 9 4 3 4 2 5 3 7 9 3 2 2 6", "9 2 7 5 0 4 9 1 6 9 9 5 7 8 2 0 1 7 5 2 1 4 8 4 2", "0 9 9 2 0 0 6 1 4 6 7 2 5 2 3 1 0 0 9 7 0 7 3 7 6", "4 7 9 1 0 3 0 9 8 3 6 6 4 4 3 7 6 2 4 6 3 1 2 0 9", "1 5 9 8 5 1 0 0 6 4 4 5 9 6 8 6 2 4 0 2 0 7 5 7 9", "1 6 7 7 2 9 9 5 0 9 3 6 0 5 3 1 4 0 5 3 9 7 0 2 9", "0 9 2 6 9 6 8 9 3 0 2 1 3 7 0 0 8 0 3 2 1 8 7 8 6", "2 7 3 7 3 8 6 2 2 9 0 8 5 7 2 7 7 7 8 5 8 8 0 0 6", "5 2 9 9 6 7 0 5 6 4 6 0 1 6 0 5 5 7 9 4 4 5 0 6 4", "1 2 9 8 8 4 6 0 0 3 4 6 0 3 1 4 9 5 6 4 9 5 1 1 8", "6 4 7 8 9 5 2 9 6 8 5 4 5 0 3 7 1 6 8 0 9 0 6 0 8", "7 7 1 2 5 5 0 5 8 3 1 9 7 9 0 5 5 2 0 9 5 6 0 7 9", "3 8 3 1 5 6 0 1 0 6 1 1 0 1 4 0 7 1 8 0 8 4 7 3 3", "7 8 8 6 8 6 9 6 7 9 2 9 5 2 2 0 0 2 5 1 1 8 7 7 9", "6 5 7 7 4 4 3 6 9 8 8 5 6 5 9 0 4 0 7 7 0 4 0 9 8", "4 3 1 0 8 2 0 5 8 2 2 5 0 5 7 1 8 8 0 3 8 6 8 9 1", "0 9 7 5 0 3 3 2 0 7 8 9 7 6 3 8 7 4 8 0 9 3 7 2 3", "4 3 1 8 6 3 2 3 5 2 9 7 1 3 3 7 4 7 8 1 0 7 6 7 7", "7 1 2 3 6 6 1 5 7 0 8 8 6 3 9 2 6 8 2 1 4 0 6 5 5", "9 7 5 8 2 0 7 2 8 3 6 1 7 0 6 9 3 7 7 4 7 4 0 6 4", "1 5 5 1 2 5 0 4 9 3 8 9 6 9 9 1 0 3 3 3 8 6 2 0 6", "4 9 5 1 8 3 7 0 5 0 8 8 7 8 0 3 7 6 4 6 9 0 4 7 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> numSeen = {"0 1 5 4 7 7 5 5 3 3 8 1 6 6 4 3 8 7 3 7 6 7 3 5 2", "1 0 2 5 7 3 4 4 9 7 3 0 5 6 0 6 3 8 0 1 3 3 1 7 0", "3 3 0 1 1 1 1 4 5 9 3 9 8 4 0 1 3 6 3 1 0 0 6 4 4", "9 9 3 0 4 4 8 8 3 0 4 8 7 6 9 0 7 2 1 5 7 0 1 4 3", "9 8 5 1 0 5 6 8 9 0 4 8 1 5 9 1 0 9 0 9 1 8 2 3 8", "2 8 3 2 0 0 6 4 3 0 5 1 1 4 4 2 8 2 3 0 8 6 2 8 3", "8 4 0 9 9 9 0 6 6 8 9 7 4 7 3 6 3 7 5 5 9 5 4 5 0", "9 7 9 9 0 1 0 0 4 8 7 0 8 4 7 8 8 1 7 2 7 1 9 0 8", "1 4 3 2 1 0 5 5 0 4 2 2 7 2 0 3 9 2 4 6 3 6 9 9 7", "7 7 7 6 7 6 3 7 2 0 9 9 5 3 5 1 1 1 0 5 8 7 6 1 6", "7 9 0 2 6 9 0 6 4 3 0 2 1 6 7 6 0 1 6 0 2 6 5 2 4", "7 5 1 9 9 9 8 3 4 2 7 0 7 4 3 7 4 9 5 7 3 4 4 5 6", "0 4 5 5 3 0 5 7 9 4 2 1 0 7 5 0 2 0 1 7 6 3 0 8 1", "5 0 3 0 9 2 0 1 4 5 2 3 0 0 6 9 7 0 6 0 5 8 3 7 1", "0 6 8 9 4 4 1 9 9 9 8 0 5 2 0 6 2 2 4 6 9 3 2 5 8", "0 7 7 4 7 5 3 4 5 2 2 3 7 4 0 0 7 5 3 4 3 8 7 0 3", "3 5 4 9 3 5 0 1 3 2 6 9 7 2 2 6 0 8 3 3 2 3 6 9 3", "5 0 4 3 8 4 7 7 8 6 9 4 0 1 0 7 4 0 5 9 2 4 8 2 0", "7 6 2 2 4 3 2 4 1 5 8 2 5 4 8 3 1 5 0 7 9 5 8 3 0", "5 0 5 8 0 8 8 8 0 0 8 3 4 9 8 3 9 1 3 0 6 6 5 6 3", "4 8 9 5 6 8 1 1 2 8 0 7 2 8 1 9 6 8 1 7 0 3 5 1 5", "5 8 3 9 1 2 6 0 6 7 0 4 7 0 5 9 8 5 0 4 8 0 9 2 1", "0 8 9 8 5 8 5 9 5 5 5 9 2 4 8 3 2 5 8 0 2 3 0 2 3", "9 8 5 4 9 2 2 7 9 2 0 6 6 2 0 0 8 3 5 6 9 5 0 0 0", "3 3 8 5 8 5 8 6 2 6 3 0 7 6 0 4 8 1 6 7 2 2 7 3 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> numSeen = {"0 7 5 2 0 5 3 5 7 4 4 4 2 7 2 8 6 5 7 3 4 6 9 8 1", "7 0 9 6 5 1 8 6 1 7 7 9 8 9 0 5 2 1 7 3 5 0 2 4 4", "0 0 0 4 7 4 2 9 4 6 3 0 1 8 9 9 6 7 4 1 5 5 7 6 2", "9 0 4 0 0 5 8 8 8 0 4 5 7 9 2 2 1 1 5 6 2 6 6 4 2", "7 4 9 7 0 7 3 2 9 6 8 3 9 2 5 0 8 4 3 2 4 1 2 4 6", "3 0 6 0 9 0 5 1 6 8 7 2 4 8 1 0 9 6 4 0 6 4 5 3 7", "2 5 7 0 2 1 0 6 6 8 9 1 8 1 6 1 3 0 8 6 2 8 1 4 2", "8 0 8 2 7 1 3 0 3 2 9 4 5 9 7 5 1 1 2 0 6 5 5 7 7", "4 2 1 0 3 5 2 0 0 8 9 3 3 5 0 6 5 0 7 0 8 2 3 5 4", "2 2 3 9 2 3 2 3 9 0 6 5 5 9 4 7 1 5 9 1 6 8 4 9 6", "7 3 8 4 5 4 7 6 8 5 0 2 0 6 5 0 5 8 3 5 7 6 6 7 5", "2 3 4 1 1 6 8 9 0 1 7 0 9 2 9 3 5 5 0 0 3 9 6 8 4", "0 0 3 5 0 8 1 3 0 1 8 7 0 1 6 1 6 1 2 1 9 9 3 2 5", "5 4 6 1 7 3 6 5 8 5 0 9 4 0 2 8 4 1 8 1 0 2 3 9 7", "0 5 9 3 2 3 7 5 9 7 2 9 1 4 0 6 1 3 0 4 4 3 9 1 6", "5 3 0 4 1 6 2 9 6 7 1 4 4 5 8 0 6 3 9 9 7 5 0 0 4", "8 4 3 4 2 2 7 0 1 8 1 0 2 7 6 7 0 8 3 0 0 0 8 5 8", "9 2 3 0 6 5 8 7 3 9 9 9 3 5 5 2 9 0 4 9 8 9 3 4 5", "5 9 2 0 8 1 3 0 6 5 3 5 2 0 3 2 8 2 0 0 7 0 6 7 1", "3 8 0 6 0 2 9 0 3 6 9 7 7 6 9 8 6 5 2 0 8 9 1 9 4", "9 2 1 6 9 8 5 0 5 9 7 7 6 9 9 0 8 9 7 0 0 4 8 7 6", "6 2 3 9 4 5 4 3 8 7 0 0 3 5 9 0 3 0 3 1 8 0 6 4 7", "3 6 4 6 4 4 9 6 4 3 2 4 9 2 3 8 5 2 1 8 1 7 0 1 8", "8 4 3 6 7 5 8 9 5 2 0 2 8 8 1 3 9 4 1 8 8 9 7 0 7", "2 2 9 2 2 0 5 6 5 0 7 7 7 2 2 7 8 4 5 1 8 3 2 4 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> numSeen = {"0 0 6 2 4 3 7 0 1 9 0 6 0 6 5 5 8 0 6 9 3 0 6 5 6", "2 0 9 4 8 3 4 4 4 2 9 1 2 9 8 9 8 4 8 0 3 6 0 8 9", "4 9 0 7 0 1 8 9 3 0 2 2 0 6 4 7 1 8 4 4 0 6 6 0 2", "6 3 9 0 3 3 5 6 3 1 5 6 0 5 3 2 3 8 2 0 3 6 1 2 7", "5 1 5 2 0 6 5 9 1 5 7 2 2 9 3 0 6 6 0 0 2 2 6 7 3", "4 5 9 7 0 0 9 4 0 6 2 8 2 9 7 0 2 3 9 0 7 6 6 0 9", "9 0 4 7 8 9 0 3 5 8 3 2 3 1 2 9 8 0 2 0 6 2 0 9 5", "3 8 1 1 4 9 5 0 2 9 2 2 3 7 0 4 4 3 3 9 3 4 6 9 7", "6 6 8 2 4 2 8 8 0 8 8 6 6 2 7 6 0 3 2 8 1 9 6 2 1", "0 2 5 0 7 4 9 6 3 0 9 8 9 7 8 9 3 7 2 0 2 9 8 0 6", "3 3 2 3 2 0 5 3 8 8 0 2 2 6 8 2 8 7 1 5 8 5 7 6 2", "2 7 2 6 7 9 2 4 1 1 9 0 7 0 5 6 9 7 3 9 4 0 9 5 3", "1 1 8 8 6 7 6 7 5 5 0 5 0 2 6 0 1 1 5 8 9 7 5 0 3", "8 8 4 3 7 9 6 7 5 8 6 3 1 0 9 2 5 3 1 0 6 9 6 4 5", "9 7 3 0 1 1 4 5 1 4 4 5 1 0 0 8 9 8 7 6 3 8 2 0 0", "0 1 1 0 7 0 6 0 4 1 2 4 3 8 9 0 2 7 3 1 3 6 5 9 5", "9 2 6 3 5 4 8 3 5 7 0 7 2 2 2 6 0 5 5 8 7 4 3 6 3", "3 3 4 7 1 1 1 3 8 6 5 1 4 8 7 9 1 0 3 8 8 7 5 9 2", "1 6 7 0 4 4 6 9 2 5 6 7 2 1 5 6 7 1 0 5 4 3 5 8 5", "3 4 2 4 7 7 5 4 7 6 3 5 0 1 6 6 7 0 7 0 3 6 9 5 8", "3 1 4 9 5 5 5 9 0 1 8 6 5 2 2 5 1 3 8 1 0 8 7 5 6", "6 7 2 5 2 5 0 7 4 1 2 1 6 8 7 1 5 3 3 9 2 0 9 0 9", "2 1 9 6 1 5 9 3 9 8 7 2 0 1 2 1 7 1 1 5 5 6 0 4 3", "6 5 6 6 0 8 3 8 8 9 4 0 6 9 7 9 2 7 9 2 6 3 0 0 2", "0 9 4 6 9 3 9 0 0 0 8 8 8 7 1 9 0 1 0 7 0 9 4 9 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> numSeen = {"0 4 6 5 7 6 3 5 8 8 4 1 3 0 7 0 7 3 1 3 3 4 0 2 3", "8 0 5 5 4 0 0 1 1 9 7 8 1 3 8 3 4 4 3 4 2 3 9 0 5", "2 8 0 5 8 8 1 3 2 2 6 6 7 2 5 3 9 1 4 5 7 4 3 8 6", "2 9 7 0 5 8 0 6 2 9 9 5 4 5 7 3 2 2 5 6 5 1 1 6 0", "2 8 9 8 0 4 5 5 0 4 9 5 6 3 3 8 6 7 1 8 0 7 3 6 1", "0 8 5 6 2 0 4 4 1 0 4 9 6 2 6 6 7 9 2 1 4 2 6 1 8", "1 1 3 3 2 5 0 2 1 4 1 5 5 0 4 8 4 0 3 1 2 9 7 9 1", "3 2 9 6 1 8 9 0 3 7 6 3 1 2 8 2 3 7 6 4 0 9 0 6 6", "5 4 0 1 9 6 6 9 0 4 5 5 4 5 0 9 5 9 0 1 2 7 4 3 6", "5 3 3 5 6 2 3 9 5 0 9 5 0 3 0 2 8 6 5 6 4 4 1 5 6", "5 8 5 4 5 7 2 5 1 8 0 0 2 2 3 3 5 1 0 9 2 1 8 6 8", "9 1 7 9 7 9 4 7 4 4 1 0 5 7 1 1 1 8 3 6 6 8 4 8 0", "9 0 0 7 8 4 1 1 2 9 5 9 0 5 0 6 4 1 7 1 6 8 3 4 5", "0 0 8 9 5 0 6 8 9 8 1 6 6 0 9 7 6 3 5 7 0 9 1 5 4", "9 0 8 9 6 0 8 4 5 0 4 1 6 3 0 8 5 6 9 8 4 4 9 9 6", "5 0 5 5 5 1 0 1 7 9 7 0 0 0 8 0 6 6 6 4 6 3 1 8 1", "1 8 9 6 8 9 2 7 9 0 4 0 0 2 9 6 0 0 3 8 2 3 8 9 9", "9 9 3 6 2 6 8 7 8 4 1 4 8 5 8 3 3 0 6 5 2 1 8 0 3", "5 3 2 9 9 0 6 0 3 4 2 1 5 8 9 4 3 8 0 8 1 6 0 7 5", "1 6 8 7 8 2 0 6 5 6 5 9 3 6 6 7 1 7 4 0 8 4 8 4 6", "3 5 3 0 3 7 5 3 6 5 5 4 6 0 1 7 6 6 5 3 0 1 9 7 5", "1 3 9 6 3 1 5 8 7 3 6 2 4 5 2 3 7 7 7 8 2 0 9 4 9", "4 5 9 8 1 1 7 4 9 5 1 3 7 6 4 2 6 4 9 7 4 4 0 9 9", "5 2 4 7 3 8 3 1 1 3 8 4 6 8 3 6 1 4 0 1 4 8 6 0 6", "8 4 2 9 1 4 0 9 3 7 1 7 0 7 0 1 3 6 0 4 5 2 5 8 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> numSeen = {"0 7 9 7 2 4 8 6 1 8 2 6 2 0 7 5 0 9 0 3 6 0 5 6 8", "4 0 5 5 2 8 9 7 2 0 5 3 5 7 2 0 3 5 3 7 1 5 4 7 7", "5 2 0 2 5 1 4 1 6 9 6 9 1 3 8 0 4 4 4 9 0 0 9 9 3", "1 4 5 0 1 3 7 8 0 9 5 3 2 5 9 9 5 9 8 1 6 5 3 3 0", "8 8 5 9 0 8 8 0 7 5 2 4 2 7 5 4 2 6 6 3 6 5 3 4 4", "5 0 2 2 9 0 7 8 8 9 9 1 3 3 6 3 8 0 2 8 6 9 3 3 8", "7 3 8 2 4 7 0 0 2 3 6 6 0 3 9 8 0 1 2 8 1 6 3 9 1", "7 3 9 9 7 7 6 0 7 7 5 6 5 3 1 1 8 6 6 7 7 7 3 2 8", "4 8 4 9 4 3 3 7 0 1 9 0 6 9 9 2 3 5 1 3 7 2 9 6 0", "2 4 2 9 0 0 9 4 8 0 3 2 7 5 9 3 5 8 2 3 2 0 4 2 5", "8 3 8 7 8 9 8 3 3 6 0 4 0 6 2 4 9 5 8 5 1 5 4 4 8", "7 7 1 2 8 2 9 1 8 3 4 0 6 1 6 7 7 8 4 3 3 4 0 8 4", "8 8 1 4 5 8 9 3 0 0 8 8 0 9 1 8 2 9 1 8 4 2 9 7 5", "2 5 8 8 8 3 1 2 0 2 1 8 2 0 4 3 3 1 8 2 4 6 0 9 8", "1 7 1 7 7 8 9 6 1 2 9 7 5 8 0 8 9 9 3 1 4 3 4 9 0", "2 0 2 3 6 2 4 8 9 1 6 1 3 1 5 0 3 4 2 8 8 9 4 0 1", "0 4 2 2 3 6 3 8 4 6 0 2 9 0 5 1 0 4 3 7 6 0 5 1 5", "9 7 2 5 4 6 5 2 1 6 3 6 8 2 5 0 8 0 2 5 6 0 2 5 4", "8 0 5 8 8 1 4 5 4 6 6 4 0 1 6 4 9 5 0 1 6 3 9 6 0", "6 2 5 2 8 5 2 3 6 5 5 1 4 9 2 2 8 7 0 0 3 5 5 9 1", "7 7 6 6 1 8 8 4 3 7 2 9 7 8 4 9 3 1 3 3 0 8 8 4 8", "5 8 0 8 6 3 1 5 8 1 5 1 7 3 3 2 8 5 3 3 9 0 4 7 4", "3 1 6 2 1 6 3 6 1 9 5 2 3 9 5 4 7 8 9 5 3 4 0 5 9", "3 7 3 5 3 2 8 0 5 9 9 4 7 4 8 5 4 3 0 2 6 4 8 0 9", "8 7 3 5 8 3 3 6 1 5 3 5 6 6 8 3 9 8 0 0 7 3 5 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> numSeen = {"0 3 6 4 9 6 6 0 6 8 9 8 9 9 9 4 3 7 0 3 5 2 7 3 6", "3 0 8 8 5 4 1 8 1 7 4 5 4 5 7 7 3 8 4 0 0 9 0 3 6", "2 9 0 1 2 9 2 2 4 6 6 4 1 4 6 3 6 5 5 8 3 4 9 6 1", "6 5 0 0 3 6 4 3 6 0 2 4 5 9 6 9 0 9 1 7 2 6 8 4 3", "3 3 5 5 0 4 4 0 7 1 9 2 9 3 5 5 0 6 7 6 9 3 0 3 7", "6 7 9 0 9 0 6 3 3 0 3 6 6 3 2 9 5 2 6 0 0 1 0 8 5", "5 1 0 5 5 7 0 7 3 5 6 1 6 2 8 0 7 3 5 1 0 0 3 5 3", "4 1 5 7 5 9 3 0 3 2 1 7 2 3 3 4 9 8 3 9 1 8 0 2 7", "7 9 0 4 8 3 2 8 0 6 2 2 9 6 7 5 4 3 7 3 9 5 3 1 6", "7 5 5 3 7 9 1 4 0 0 2 4 3 4 6 5 1 1 8 2 5 6 1 8 2", "4 6 4 6 9 0 1 1 4 3 0 4 1 3 4 2 6 0 6 1 5 2 3 1 8", "6 4 1 5 7 3 3 1 6 8 2 0 7 1 9 7 4 9 1 2 0 6 9 7 4", "0 4 6 5 5 7 0 6 1 0 9 0 0 3 5 6 3 6 2 8 9 0 7 3 6", "2 0 9 6 2 7 6 9 7 4 5 5 9 0 3 9 1 0 8 3 3 1 8 8 6", "2 2 2 9 6 2 6 6 2 7 1 7 8 4 0 8 3 2 1 5 3 9 1 1 9", "9 9 2 2 1 8 8 2 6 6 3 6 3 3 5 0 6 1 2 6 7 1 4 3 4", "4 5 5 7 1 4 4 9 1 8 4 0 1 5 0 6 0 2 5 3 7 4 6 0 1", "4 0 4 8 5 8 1 5 6 0 3 7 0 8 2 1 7 0 5 6 2 7 9 4 9", "9 0 2 1 3 3 1 2 0 7 9 0 6 6 2 6 1 3 0 0 9 9 2 1 8", "5 7 0 7 3 7 8 9 2 5 6 9 2 0 9 0 3 7 1 0 7 6 8 4 5", "0 1 2 9 5 4 6 4 3 5 0 2 1 5 7 0 9 4 6 8 0 4 6 4 0", "0 2 3 4 7 5 0 6 5 7 9 1 5 8 0 4 6 3 8 3 8 0 5 3 6", "4 1 6 1 4 8 0 6 3 1 8 8 7 4 3 8 2 8 2 8 4 0 0 8 8", "4 0 0 7 4 8 8 0 7 2 2 8 0 4 6 8 2 0 5 6 7 8 6 0 3", "0 6 7 5 3 4 0 1 8 9 9 9 1 4 9 2 6 7 7 1 0 4 2 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 8 2 7 8 7 5 2 1 7 5 9 2 1 5 8 6 2 4 9 9 8 8 6 6", "1 0 0 6 8 1 9 8 6 9 9 2 3 4 8 3 0 6 1 7 7 3 4 7 2", "3 6 0 4 8 3 5 1 1 9 9 3 9 9 2 4 6 0 4 8 2 3 8 8 5", "2 1 7 0 1 2 9 5 5 7 1 7 1 2 3 5 1 1 3 2 6 2 1 3 3", "3 8 6 6 0 6 4 0 7 0 5 1 4 2 8 1 2 7 8 5 1 0 6 7 8", "2 0 2 2 4 0 5 2 6 0 7 6 4 0 6 4 5 2 6 2 0 8 8 1 4", "0 4 1 9 3 5 0 9 1 0 6 2 2 1 6 1 4 2 6 9 0 2 3 2 9", "7 2 0 3 3 0 5 0 1 3 1 0 5 3 9 8 3 0 9 6 7 0 7 5 0", "1 7 7 0 7 6 8 0 0 3 9 4 1 1 2 2 1 6 9 6 4 6 1 9 0", "6 5 9 3 3 6 7 9 1 0 1 7 0 9 0 8 4 2 0 2 5 3 1 6 6", "8 1 7 2 1 7 9 1 5 3 0 3 4 5 7 2 6 1 1 1 2 4 5 4 7", "0 2 6 7 2 2 8 9 1 8 4 0 3 5 5 4 7 1 7 2 3 0 1 1 9", "2 6 7 2 4 3 4 3 3 7 8 7 0 1 0 1 6 8 3 7 6 6 4 5 7", "4 8 1 6 0 5 4 3 4 4 0 9 6 0 0 1 3 2 7 8 5 1 1 9 4", "0 4 8 8 2 4 2 4 1 0 3 9 5 3 0 0 8 7 7 3 7 5 8 1 5", "1 0 4 8 9 6 5 1 3 5 7 2 0 0 8 0 0 5 0 7 6 1 9 0 5", "9 0 2 1 5 2 6 8 6 1 3 5 8 0 3 0 0 8 8 4 2 1 6 0 5", "9 1 0 2 3 1 7 3 4 1 9 2 1 4 7 8 4 0 0 9 7 8 4 3 9", "2 8 4 2 0 0 4 2 1 4 9 6 4 2 4 0 9 6 0 4 0 6 1 1 7", "2 8 9 0 5 3 0 3 6 0 5 6 1 8 5 2 9 6 6 0 9 1 8 3 2", "0 4 5 4 2 7 8 1 0 4 3 9 7 5 9 6 9 5 2 3 0 1 4 2 5", "2 1 6 1 5 1 1 9 7 4 4 8 7 7 7 7 1 3 9 2 0 0 0 5 5", "0 4 4 0 6 5 0 7 5 1 0 7 5 9 3 2 0 0 4 5 6 2 0 5 9", "4 7 4 8 2 1 7 9 9 9 8 6 5 9 6 9 8 5 6 6 8 7 7 0 4", "9 7 5 3 9 9 9 1 7 2 5 9 8 0 7 6 2 5 2 6 7 5 3 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> numSeen = {"0 5 9 4 9 8 3 2 6 0 5 7 0 7 3 9 5 4 9 1 8 9 4 9 2", "9 0 7 5 3 3 6 5 0 8 1 8 0 7 9 2 1 9 3 6 5 0 7 4 2", "5 8 0 0 4 9 4 1 4 6 0 3 4 7 1 8 4 3 0 2 8 1 5 4 1", "4 1 3 0 2 9 2 5 3 5 0 8 8 2 6 0 4 2 3 8 7 1 7 4 1", "8 2 4 8 0 8 2 8 5 7 1 1 1 8 5 1 5 3 4 8 3 9 6 8 8", "7 5 7 7 7 0 4 1 1 0 4 6 9 9 7 6 5 5 7 5 7 8 7 9 0", "5 1 5 0 5 1 0 4 5 2 9 1 4 9 2 3 1 4 1 6 7 6 9 1 3", "2 1 7 3 1 1 5 0 1 3 2 5 2 2 9 4 5 2 2 8 3 4 3 0 9", "4 5 4 8 2 4 9 8 0 7 2 2 6 2 5 6 9 9 3 7 1 9 0 6 7", "7 2 2 9 1 0 8 4 2 0 3 9 3 5 4 0 4 9 5 0 5 7 4 1 7", "0 8 9 6 9 4 0 9 8 4 0 8 2 2 6 1 8 8 4 2 4 1 5 9 5", "4 0 9 2 3 8 7 4 9 8 2 0 4 7 4 3 9 1 3 4 6 3 5 0 9", "6 6 9 2 4 2 6 5 3 6 8 5 0 5 4 0 0 1 7 1 6 7 6 4 8", "4 9 4 0 1 0 5 5 6 8 2 3 1 0 6 1 8 1 9 7 3 4 1 3 8", "1 6 8 2 2 3 2 8 0 2 7 1 7 1 0 0 9 3 9 5 4 0 9 8 9", "4 5 0 4 4 7 7 4 9 3 4 5 2 7 3 0 3 1 3 8 2 8 9 3 5", "7 9 6 0 3 4 2 2 3 8 3 7 6 9 5 1 0 8 5 7 3 5 5 3 3", "7 9 8 8 9 4 3 3 8 0 9 3 2 4 5 6 4 0 7 8 5 4 3 0 5", "0 2 3 2 9 3 8 8 4 0 1 8 6 1 6 5 9 1 0 1 3 9 9 6 3", "6 6 2 6 8 0 3 1 1 3 4 6 2 1 8 7 7 6 0 0 8 2 0 1 8", "7 0 6 4 4 2 5 7 1 9 3 0 8 6 4 2 6 5 8 9 0 7 6 8 9", "7 9 9 8 1 5 2 8 8 8 4 6 0 4 7 4 1 8 4 3 7 0 3 7 4", "8 6 8 4 4 7 2 8 5 7 4 2 2 9 5 0 8 7 5 1 8 0 0 8 2", "4 3 1 8 9 1 7 1 0 4 0 2 9 8 0 5 3 1 7 5 0 4 7 0 2", "0 1 1 0 7 4 1 9 4 5 9 9 3 6 8 1 4 2 9 6 0 8 1 8 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> numSeen = {"0 7 0 8 8 2 6 3 5 9 8 8 6 2 6 0 1 2 7 0 3 2 9 4 8", "6 0 9 7 6 3 2 0 2 1 9 7 7 4 4 3 9 8 7 6 6 1 3 3 0", "1 0 0 2 0 0 6 6 0 2 5 5 9 4 7 6 7 7 7 7 8 0 5 2 7", "2 2 2 0 5 5 3 4 0 2 6 9 1 5 1 5 1 8 5 8 6 8 8 0 4", "1 4 9 9 0 8 9 4 1 6 7 2 0 4 0 8 9 5 8 9 0 9 3 2 5", "3 5 5 5 7 0 3 0 3 6 6 6 5 2 4 6 8 8 3 6 5 1 2 7 7", "1 8 2 9 9 8 0 5 4 0 3 0 0 2 8 1 8 0 4 0 1 1 7 8 6", "5 1 3 4 8 1 5 0 1 3 0 0 9 4 2 1 3 6 5 4 6 9 0 2 3", "1 1 7 5 9 5 9 5 0 2 1 8 6 4 6 4 2 9 8 5 2 7 5 6 9", "8 5 1 1 5 1 5 4 5 0 1 8 3 7 6 6 4 0 1 1 0 9 1 2 3", "6 6 0 1 6 8 6 8 0 9 0 2 5 5 4 1 3 4 8 1 8 9 7 3 8", "1 9 6 5 7 0 4 6 3 5 1 0 1 6 7 9 6 9 3 8 3 2 4 2 3", "4 8 8 5 2 3 5 3 2 2 1 1 0 0 9 9 5 9 6 7 6 2 3 2 6", "1 8 5 5 1 8 4 5 8 6 9 4 9 0 1 1 7 6 0 7 5 2 7 7 4", "6 0 4 0 6 4 8 5 3 8 9 0 4 2 0 0 0 2 8 5 1 0 4 4 7", "7 8 3 6 0 7 9 5 9 6 2 9 4 6 0 0 8 8 4 2 9 7 5 1 5", "0 0 9 3 2 9 3 8 0 7 3 2 0 8 7 8 0 8 8 3 6 1 5 7 5", "9 5 1 2 1 9 8 1 7 4 2 6 8 6 0 7 8 0 1 5 9 6 7 7 6", "7 9 2 8 3 3 8 6 6 7 1 0 6 2 7 1 8 5 0 1 6 8 2 2 9", "9 6 0 6 3 6 7 2 2 9 2 5 0 9 7 1 2 1 6 0 3 2 1 5 1", "6 1 5 0 1 2 3 4 1 6 0 8 3 3 1 6 0 7 8 4 0 3 8 1 7", "2 5 3 8 5 8 3 2 5 6 3 6 8 6 0 6 5 1 3 2 1 0 1 6 2", "3 2 0 1 6 7 6 5 7 6 3 3 0 4 2 9 6 0 7 1 6 3 0 9 2", "2 6 8 3 3 9 1 5 8 5 8 2 9 7 5 7 1 1 9 2 5 5 5 0 3", "5 4 6 1 9 3 8 0 2 5 2 9 6 8 4 0 0 8 2 0 6 7 0 8 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> numSeen = {"0 3 0 6 9 9 8 8 0 8 2 3 0 0 2 9 0 1 8 3 8 5 1 1 2", "7 0 3 4 8 1 2 9 4 3 1 4 1 2 1 5 6 8 8 0 4 8 6 1 9", "9 3 0 3 3 1 4 7 6 2 2 9 5 4 7 6 4 3 5 8 7 4 8 5 0", "1 7 9 0 6 3 0 1 7 9 3 0 1 9 8 8 6 9 2 4 0 9 3 7 0", "5 1 1 5 0 5 3 1 5 8 6 5 9 1 9 3 3 2 5 1 9 0 9 1 3", "2 6 6 7 7 0 7 8 4 2 3 8 0 5 4 5 6 9 1 0 2 7 2 9 1", "0 6 0 5 1 7 0 5 7 8 1 3 0 8 1 7 3 7 5 1 9 1 0 8 6", "3 0 3 4 3 2 0 0 1 7 9 9 0 6 0 2 5 7 3 6 6 0 9 8 5", "9 5 3 5 2 0 2 0 0 6 6 5 2 5 5 5 5 9 8 9 4 9 7 7 3", "0 4 0 7 5 8 0 2 9 0 6 2 7 9 4 7 3 4 8 8 1 9 2 1 0", "2 4 5 9 8 1 2 8 7 8 0 7 9 2 5 9 7 0 2 7 8 9 0 4 1", "8 5 4 0 1 3 7 1 6 8 5 0 6 6 5 5 0 0 2 4 0 2 7 3 8", "6 6 1 1 6 7 7 7 1 5 6 1 0 5 8 5 4 5 1 7 3 2 9 6 4", "4 2 7 8 2 6 4 3 1 5 4 9 3 0 7 8 1 6 2 8 9 5 2 9 8", "2 1 2 9 0 0 3 3 6 6 9 3 5 5 0 6 8 1 4 2 0 4 7 5 4", "5 1 4 7 5 1 7 1 3 0 3 6 0 7 9 0 9 9 4 8 4 1 6 6 4", "7 9 5 1 5 2 6 4 2 9 0 3 8 6 4 8 0 6 4 4 5 3 4 1 3", "8 8 7 3 3 5 7 6 4 5 9 5 2 1 5 2 5 0 6 3 4 6 1 1 9", "8 7 6 0 4 2 5 5 1 7 1 1 0 6 7 0 6 2 0 0 6 0 8 3 9", "3 3 8 3 5 0 4 9 7 4 1 3 4 4 7 0 7 8 9 0 9 0 1 7 8", "4 3 5 2 3 5 7 9 6 1 5 7 5 3 6 4 0 2 1 1 0 3 4 7 1", "1 3 5 7 7 6 1 3 2 7 0 4 8 3 5 6 6 4 0 8 4 0 1 7 7", "9 7 6 7 5 8 1 0 8 1 1 9 7 9 4 4 5 7 0 1 2 9 0 3 1", "9 5 7 7 1 0 4 4 5 9 2 0 4 5 4 9 8 6 7 0 7 4 3 0 0", "4 2 3 1 0 1 3 5 8 6 0 9 8 3 2 8 2 5 0 6 7 4 2 3 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> numSeen = {"0 3 2 2 1 2 2 2 2 3 3 3 2 1 4 2 4 3 3 1 2 3 2 1 2", "3 0 2 5 1 4 3 5 7 6 7 5 5 4 7 5 6 5 8 1 3 9 3 1 6", "2 2 0 1 1 2 1 1 2 2 2 2 2 0 3 1 3 2 2 1 1 2 2 1 2", "3 6 2 0 1 5 3 6 7 7 7 5 6 6 9 6 6 5 9 1 3 9 3 1 7", "3 3 2 2 0 3 2 3 4 5 5 3 3 2 5 3 5 4 4 1 3 3 2 1 3", "3 6 2 5 1 0 3 5 7 7 7 5 5 5 8 6 6 5 9 1 3 9 3 1 7", "3 5 2 4 1 3 0 5 7 6 6 4 5 3 6 4 6 5 6 1 3 7 3 1 5", "3 6 2 5 1 5 3 0 7 9 9 5 8 8 9 9 6 7 9 1 3 9 3 1 7", "3 4 2 3 1 3 3 5 0 6 6 3 5 3 6 4 6 5 5 1 3 6 3 1 4", "3 6 2 5 1 5 3 7 7 0 9 5 8 8 9 9 6 7 9 1 3 9 3 1 7", "3 6 2 5 1 5 3 6 7 7 0 5 8 8 9 9 6 7 9 1 3 9 3 1 7", "3 5 2 4 1 4 3 5 7 6 6 0 5 3 7 4 6 5 7 1 3 8 3 1 6", "3 6 2 5 1 5 3 6 7 8 9 5 0 8 9 9 6 7 9 1 3 9 3 1 7", "3 6 2 5 1 5 3 6 7 7 9 5 7 0 9 8 6 6 9 1 3 9 3 1 7", "3 6 2 5 1 5 3 7 7 9 9 5 8 8 0 9 6 7 9 1 3 9 3 1 7", "3 6 2 5 1 5 3 9 7 9 9 5 8 8 9 0 6 7 9 1 3 9 3 1 7", "3 4 2 2 1 3 3 4 5 5 5 3 3 3 5 3 0 5 5 1 3 4 2 1 3", "3 6 2 5 1 5 3 6 7 9 9 5 8 8 9 9 6 0 9 1 3 9 3 1 7", "3 6 2 5 1 5 3 8 7 9 9 5 8 8 9 9 6 7 0 1 3 9 3 1 7", "1 1 1 0 0 0 0 1 1 0 1 0 1 0 1 0 1 1 0 0 1 1 1 1 1", "3 3 2 2 1 2 2 2 3 4 4 3 2 1 4 3 5 4 4 1 0 3 2 1 2", "3 6 2 5 1 5 3 7 7 9 9 5 8 8 9 9 6 7 9 1 3 0 3 1 7", "3 4 2 2 1 3 3 5 6 6 5 3 4 3 6 3 6 5 5 1 3 5 0 1 4", "2 2 2 1 0 1 0 1 1 1 1 1 1 0 2 0 2 2 1 1 1 2 2 0 1", "3 6 2 5 1 5 3 6 7 7 8 5 6 7 9 7 6 5 9 1 3 9 3 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 23, 2, 0, 20, 4, 16, 22, 8, 6, 11, 1, 5, 3, 24, 13, 10, 12, 17, 9, 14, 21, 18, 7, 15};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> numSeen = {"0 2 3 9 9 6 5 5 5 3 6 2 2 9 8 9 9 3 7 0 7 9 9 3 0", "5 0 3 7 6 3 4 5 5 3 5 2 2 5 4 6 5 3 5 0 1 3 7 3 0", "3 1 0 4 4 2 3 3 4 3 2 2 2 4 2 4 1 2 2 0 0 3 5 1 0", "9 2 3 0 9 5 5 5 5 3 6 2 2 9 8 9 8 3 7 0 7 8 9 3 0", "9 2 3 9 0 4 5 5 5 3 6 2 2 8 8 9 6 3 7 0 6 7 9 3 0", "9 2 3 9 9 0 5 5 5 3 6 2 2 9 8 9 9 3 7 0 7 9 9 3 0", "6 2 3 7 7 3 0 5 5 3 5 2 2 6 5 7 5 3 6 0 3 5 8 3 0", "4 1 3 5 6 3 3 0 5 3 3 2 2 4 3 5 3 3 3 0 1 3 5 2 0", "3 1 3 4 5 2 3 4 0 3 3 2 2 4 3 4 2 3 2 0 1 3 5 1 0", "3 1 2 3 3 1 2 1 3 0 1 2 2 3 1 3 1 1 1 0 0 2 3 0 0", "7 2 3 8 7 3 5 5 5 3 0 2 2 7 6 7 5 3 7 0 4 6 8 3 0", "2 1 1 3 2 1 2 0 2 3 1 0 2 3 1 2 0 0 1 0 0 1 2 0 0", "3 1 3 4 4 2 3 2 3 3 2 2 0 3 1 3 1 2 2 0 0 3 4 0 0", "9 2 3 9 9 7 5 5 5 3 6 2 2 0 8 9 9 3 7 0 7 9 9 3 0", "9 2 3 9 9 5 5 5 5 3 6 2 2 9 0 9 7 3 7 0 6 7 9 3 0", "8 2 3 9 8 4 5 5 5 3 6 2 2 8 7 0 6 3 7 0 5 7 9 3 0", "9 2 3 9 9 8 5 5 5 3 6 2 2 9 8 9 0 3 7 0 7 9 9 3 0", "4 2 3 6 6 3 3 5 5 3 4 2 2 4 3 5 4 0 4 0 1 3 6 2 0", "7 2 3 9 8 3 5 5 5 3 6 2 2 8 6 8 6 3 0 0 4 6 8 3 0", "1 0 1 1 1 0 0 0 1 1 0 0 0 1 1 0 0 0 1 0 0 0 0 0 0", "9 2 3 9 9 6 5 5 5 3 6 2 2 9 8 9 9 3 7 0 0 9 9 3 0", "9 2 3 9 9 6 5 5 5 3 6 2 2 9 8 9 9 3 7 0 7 0 9 3 0", "9 2 3 9 9 8 5 5 5 3 6 2 2 9 8 9 9 3 7 0 7 9 0 3 0", "5 2 3 7 7 3 4 5 5 3 5 2 2 5 4 7 5 3 6 0 2 4 7 0 0", "1 0 1 2 1 1 1 0 1 2 1 1 1 2 1 1 0 0 1 0 0 1 1 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 24, 11, 9, 12, 2, 8, 7, 17, 1, 23, 6, 10, 18, 15, 4, 14, 3, 0, 20, 21, 13, 5, 16, 22};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> numSeen = {"0 6 6 5 1 9 9 4 6 6 0 3 9 9 2 3 4 8 5 3 8 9 4 6 9", "8 0 6 4 1 7 8 4 5 5 0 3 7 9 2 3 4 5 5 3 8 9 4 6 9", "6 4 0 3 1 6 6 4 5 4 0 3 7 7 2 3 4 4 5 3 7 7 4 6 7", "9 6 6 0 1 9 9 4 6 9 0 3 9 9 2 3 4 9 5 3 8 9 4 6 9", "0 1 2 1 0 2 2 2 2 1 0 2 2 1 1 2 0 1 0 2 1 2 0 1 2", "9 6 6 5 1 0 9 4 6 5 0 3 9 9 2 3 4 7 5 3 8 9 4 6 9", "9 6 6 5 1 9 0 4 6 8 0 3 9 9 2 3 4 9 5 3 8 9 4 6 9", "3 2 4 2 1 4 3 0 2 1 0 3 5 3 2 3 3 2 3 3 4 4 2 4 3", "8 6 6 4 1 7 8 4 0 5 0 3 8 9 2 3 4 6 5 3 8 9 4 6 9", "9 6 6 5 1 9 9 4 6 0 0 3 9 9 2 3 4 9 5 3 8 9 4 6 9", "0 0 1 0 1 1 1 1 1 0 0 1 1 1 1 1 0 1 0 1 0 1 0 0 1", "1 2 3 1 1 4 3 3 2 1 0 0 3 2 2 2 2 2 1 3 3 4 1 3 3", "9 6 6 5 1 9 9 4 6 7 0 3 0 9 2 3 4 9 5 3 8 9 4 6 9", "9 6 6 5 1 8 9 4 6 5 0 3 9 0 2 3 4 7 5 3 8 9 4 6 9", "4 2 4 2 1 4 3 4 2 2 0 3 5 4 0 3 4 2 3 3 5 4 2 4 4", "2 2 3 1 1 4 3 3 2 1 0 3 4 3 2 0 2 2 2 3 4 4 2 4 3", "5 2 4 2 1 5 4 4 3 3 0 3 5 5 2 3 0 3 4 3 5 5 3 5 5", "9 6 6 5 1 9 9 4 6 9 0 3 9 9 2 3 4 0 5 3 8 9 4 6 9", "6 3 5 2 1 5 5 4 4 4 0 3 6 6 2 3 4 4 0 3 5 5 3 6 5", "0 1 3 1 1 3 3 3 2 1 0 2 3 2 2 2 1 2 1 0 2 3 0 2 3", "7 4 6 3 1 6 7 4 5 4 0 3 7 8 2 3 4 5 5 3 0 8 4 6 7", "9 6 6 5 1 7 9 4 6 5 0 3 8 9 2 3 4 7 5 3 8 0 4 6 9", "7 5 6 4 1 7 8 4 5 4 0 3 7 8 2 3 4 5 5 3 8 8 0 6 8", "6 4 6 3 1 6 5 4 5 4 0 3 7 7 2 3 4 4 5 3 6 6 3 0 6", "9 6 6 5 1 9 9 4 6 9 0 3 9 9 2 3 4 9 5 3 8 9 4 6 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 4, 19, 11, 15, 7, 14, 16, 18, 23, 2, 20, 22, 1, 8, 21, 13, 5, 0, 12, 6, 3, 9, 17, 24};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> numSeen = {"0 4 9 3 2 2 0 3 6 6 7 3 1 1 4 5 5 6 4 9 5 9 7 6 1", "5 0 9 3 2 3 0 4 7 7 8 3 2 1 5 6 5 6 4 9 5 9 7 6 1", "5 5 0 3 2 4 0 7 8 9 9 3 5 1 7 9 5 6 4 9 9 9 8 6 1", "3 3 5 0 2 1 0 1 4 4 4 3 0 1 2 4 5 5 4 5 2 5 2 2 1", "3 3 7 3 0 1 0 2 5 6 5 3 0 1 2 4 5 6 4 7 3 7 4 4 1", "5 5 9 3 2 0 0 5 8 8 8 3 3 1 6 6 5 6 4 9 6 9 8 6 1", "0 0 1 0 1 1 0 0 1 1 0 1 0 1 1 0 1 1 1 1 1 1 0 1 1", "5 5 9 3 2 4 0 0 8 9 9 3 5 1 7 9 5 6 4 9 8 9 8 6 1", "5 5 9 3 2 4 0 5 0 7 8 3 3 1 6 6 5 6 4 9 5 9 7 6 1", "5 5 9 3 2 4 0 7 8 0 9 3 5 1 8 9 5 6 4 9 9 9 8 6 1", "5 5 9 3 2 4 0 7 8 9 0 3 5 1 7 9 5 6 4 9 9 9 8 6 1", "0 1 2 1 2 1 0 0 2 2 2 0 0 1 2 1 3 3 3 2 1 3 1 1 1", "5 5 9 3 2 4 0 7 8 9 9 3 0 1 8 9 5 6 4 9 9 9 8 6 1", "0 1 1 1 2 1 0 0 1 2 1 2 0 0 1 0 2 2 2 2 1 2 0 1 1", "5 5 9 3 2 4 0 7 8 9 9 3 5 1 0 9 5 6 4 9 9 9 8 6 1", "5 5 9 3 2 4 0 7 8 9 9 3 5 1 8 0 5 6 4 9 9 9 8 6 1", "3 3 8 3 2 1 0 3 5 6 5 3 0 1 2 4 0 6 4 8 3 8 4 4 1", "3 3 6 3 2 1 0 1 4 5 5 3 0 1 2 4 5 0 4 6 2 6 3 3 1", "2 3 4 2 2 1 0 1 4 3 3 3 0 1 2 3 4 5 0 4 2 5 2 1 1", "4 3 9 3 2 2 0 3 6 6 7 3 1 1 3 5 5 6 4 0 4 9 6 6 1", "5 5 9 3 2 4 0 7 8 9 9 3 5 1 7 9 5 6 4 9 0 9 8 6 1", "3 3 9 3 2 2 0 3 5 6 6 3 0 1 3 4 5 6 4 9 4 0 5 5 1", "5 5 9 3 2 4 0 6 8 9 9 3 4 1 7 8 5 6 4 9 7 9 0 6 1", "5 5 9 3 2 4 0 6 8 9 8 3 4 1 6 7 5 6 4 9 6 9 8 0 1", "1 2 3 1 2 1 0 0 3 2 3 3 0 1 2 2 4 4 4 3 2 4 1 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 13, 11, 24, 18, 3, 17, 4, 16, 21, 19, 0, 1, 8, 5, 23, 22, 7, 2, 10, 20, 9, 12, 14, 15};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> numSeen = {"0 3 8 4 0 7 5 4 5 5 7 4 0 7 6 4 5 5 0 2 6 2 5 3 7", "8 0 9 4 0 9 7 9 5 9 9 4 0 9 6 4 5 8 0 2 9 2 7 3 9", "8 5 0 4 0 8 5 6 5 6 8 4 0 8 6 4 5 6 0 2 6 2 6 3 9", "6 3 6 0 0 5 4 4 3 3 5 4 0 5 3 4 5 3 0 2 3 2 4 3 5", "1 0 1 0 0 1 0 1 1 1 0 1 0 1 0 0 1 0 0 1 0 1 1 1 0", "8 6 9 4 0 0 6 6 5 6 9 4 0 8 6 4 5 7 0 2 7 2 7 3 9", "8 6 9 4 0 9 0 6 5 7 9 4 0 9 6 4 5 7 0 2 8 2 7 3 9", "8 9 9 4 0 9 7 0 5 9 9 4 0 9 6 4 5 8 0 2 9 2 7 3 9", "8 4 8 4 0 8 5 5 0 6 8 4 0 7 6 4 5 6 0 2 6 2 5 3 8", "8 9 9 4 0 9 7 9 5 0 9 4 0 9 6 4 5 8 0 2 9 2 7 3 9", "8 9 9 4 0 9 7 9 5 9 0 4 0 9 6 4 5 8 0 2 9 2 7 3 9", "4 3 5 2 0 4 4 3 2 2 3 0 0 4 2 3 4 2 0 2 2 2 3 3 3", "2 2 3 2 0 3 2 3 2 1 2 3 0 3 1 2 2 1 0 2 1 2 2 2 3", "8 8 9 4 0 9 7 9 5 8 9 4 0 0 6 4 5 8 0 2 9 2 7 3 9", "8 4 9 4 0 8 5 5 5 6 8 4 0 7 0 4 5 6 0 2 6 2 6 3 9", "7 3 7 4 0 6 4 4 5 4 7 4 0 7 5 0 5 4 0 2 5 2 5 3 7", "6 3 6 4 0 5 4 4 4 4 6 4 0 6 4 4 0 4 0 2 4 2 5 3 6", "8 7 9 4 0 9 7 8 5 7 9 4 0 9 6 4 5 0 0 2 9 2 7 3 9", "1 1 2 1 0 2 1 2 1 1 1 2 0 2 1 1 2 0 0 2 1 2 1 1 1", "1 2 2 2 0 3 1 3 1 1 1 2 0 3 1 1 2 1 0 0 1 2 2 2 2", "8 7 9 4 0 9 7 9 5 8 9 4 0 9 6 4 5 8 0 2 0 2 7 3 9", "3 3 4 2 0 3 3 3 2 2 2 4 0 4 1 2 3 2 0 2 2 0 2 2 3", "8 7 9 4 0 9 7 7 5 7 9 4 0 9 6 4 5 7 0 2 9 2 0 3 9", "5 3 6 3 0 5 4 3 3 2 4 4 0 4 3 4 5 3 0 2 2 2 3 0 4", "8 9 9 4 0 9 7 9 5 9 9 4 0 9 6 4 5 8 0 2 9 2 7 3 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 18, 19, 12, 21, 11, 23, 3, 16, 15, 0, 8, 14, 2, 5, 6, 22, 17, 20, 13, 1, 7, 9, 10, 24};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> numSeen = {"0 4 9 9 6 1 6 3 9 5 4 5 9 6 6 9 8 0 8 9 2 5 4 9 1", "2 0 3 5 2 1 4 2 4 1 4 3 4 2 5 2 3 0 3 2 2 2 4 1 1", "3 4 0 9 6 1 6 3 9 5 4 5 9 6 6 8 8 0 8 9 2 5 4 9 1", "5 4 9 0 6 1 6 3 9 5 4 5 9 6 6 9 8 0 8 9 2 5 4 9 1", "3 4 9 9 0 1 6 3 9 5 4 5 9 5 6 7 8 0 8 8 2 5 4 9 1", "1 2 0 2 1 0 3 2 3 1 2 1 3 0 2 1 1 0 2 1 1 0 2 1 1", "2 4 5 7 4 1 0 3 5 1 4 5 7 3 6 4 5 0 5 3 2 4 4 5 1", "2 4 3 6 2 1 5 0 5 1 4 4 5 3 5 2 3 0 3 2 2 2 4 2 1", "5 4 9 9 6 1 6 3 0 5 4 5 9 6 6 9 8 0 8 9 2 5 4 9 1", "3 4 8 9 6 1 6 3 7 0 4 5 9 3 6 6 8 0 8 6 2 5 4 8 1", "2 4 3 6 3 1 5 3 5 1 0 4 6 3 6 3 3 0 4 2 2 3 4 3 1", "3 4 6 8 5 1 6 3 6 2 4 0 8 3 6 5 7 0 7 4 2 5 4 6 1", "3 4 8 9 6 1 6 3 6 4 4 5 0 3 6 6 8 0 8 5 2 5 4 8 1", "4 4 9 9 6 1 6 3 9 5 4 5 9 0 6 9 8 0 8 9 2 5 4 9 1", "2 4 4 6 3 1 6 3 5 1 4 5 7 3 0 4 4 0 4 3 2 4 4 4 1", "5 4 9 9 6 1 6 3 9 5 4 5 9 6 6 0 8 0 8 9 2 5 4 9 1", "3 4 8 9 6 1 6 3 8 5 4 5 9 4 6 6 0 0 8 7 2 5 4 9 1", "0 1 0 1 0 1 1 0 1 1 1 1 1 0 1 1 0 0 0 0 1 0 1 0 0", "3 4 7 9 6 1 6 3 6 3 4 5 8 3 6 5 8 0 0 5 2 5 4 7 1", "5 4 9 9 6 1 6 3 9 5 4 5 9 6 6 9 8 0 8 0 2 5 4 9 1", "1 2 1 3 1 1 3 2 3 1 2 2 4 0 3 2 2 0 2 2 0 1 3 1 1", "2 4 5 7 5 1 6 3 6 2 4 5 7 3 6 4 6 0 6 3 2 0 4 6 1", "2 3 2 4 1 1 3 2 4 1 3 3 4 1 4 2 3 0 3 2 2 1 0 1 1", "3 4 8 9 6 1 6 3 8 5 4 5 9 4 6 7 8 0 8 8 2 5 4 0 1", "1 2 0 2 1 1 2 1 2 1 2 1 2 0 1 1 0 0 1 1 1 0 1 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 24, 5, 20, 22, 1, 7, 10, 14, 6, 21, 11, 18, 12, 9, 16, 23, 4, 2, 13, 0, 3, 8, 15, 19};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> numSeen = {"0 0 1 1 0 0 0 0 1 1 0 1 0 0 0 0 0 0 0 1 1 0 0 1 1", "1 0 5 2 8 4 3 9 9 3 0 8 7 9 6 4 9 8 9 9 8 4 7 2 6", "1 4 0 2 1 3 2 3 4 3 0 5 2 2 2 2 1 3 4 4 3 3 1 2 5", "1 2 3 0 1 3 1 2 3 2 0 3 0 1 1 2 1 2 2 4 3 2 1 2 4", "1 9 5 2 0 4 3 9 9 3 0 8 7 9 6 4 9 7 8 9 8 4 7 2 6", "1 6 5 2 3 0 2 6 5 3 0 7 4 5 4 3 2 4 5 5 4 4 3 2 6", "1 6 5 2 3 4 0 7 5 3 0 7 5 6 5 4 3 4 5 6 4 4 3 2 6", "1 9 5 2 8 4 3 0 9 3 0 8 7 9 6 4 9 9 9 9 8 4 7 2 6", "1 9 5 2 8 4 3 9 0 3 0 8 7 9 6 4 9 9 9 9 8 4 7 2 6", "1 3 4 2 1 3 1 3 4 0 0 4 1 1 2 2 1 2 3 4 3 3 1 2 4", "1 1 2 1 1 1 1 0 1 2 0 1 0 0 0 1 0 0 1 2 2 0 0 2 2", "1 7 5 2 4 4 3 8 5 3 0 0 6 7 5 4 4 5 5 6 4 4 4 2 6", "1 8 5 2 7 4 3 9 7 3 0 8 0 9 6 4 8 6 5 8 6 4 7 2 6", "1 9 5 2 8 4 3 9 9 3 0 8 7 0 6 4 9 9 9 9 8 4 7 2 6", "1 7 5 2 5 4 3 9 6 3 0 8 6 8 0 4 6 6 5 7 6 4 6 2 6", "1 7 5 2 4 4 3 9 5 3 0 8 6 8 5 0 5 6 5 6 5 4 5 2 6", "1 9 5 2 8 4 3 9 7 3 0 8 7 9 6 4 0 7 6 8 7 4 7 2 6", "1 9 5 2 8 4 3 9 9 3 0 8 7 9 6 4 9 0 9 9 8 4 7 2 6", "1 9 5 2 8 4 3 9 9 3 0 8 7 9 6 4 9 9 0 9 8 4 7 2 6", "1 9 5 2 8 4 3 9 8 3 0 8 7 9 6 4 9 7 7 0 8 4 7 2 6", "1 9 5 2 8 4 3 9 9 3 0 8 7 9 6 4 9 7 8 9 0 4 7 2 6", "1 5 5 2 2 3 2 4 5 3 0 6 2 3 2 2 1 3 4 5 4 0 2 2 5", "1 7 5 2 6 4 3 9 7 3 0 8 6 8 6 4 7 6 5 8 6 4 0 2 6", "1 2 2 2 1 2 1 1 2 2 0 2 0 1 1 1 1 1 1 3 3 1 1 0 3", "1 6 5 2 2 3 2 5 5 3 0 7 3 4 3 3 2 3 4 5 4 4 3 2 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 10, 23, 3, 9, 2, 21, 24, 5, 6, 11, 15, 14, 22, 12, 16, 19, 4, 20, 1, 7, 8, 13, 17, 18};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> numSeen = {"0 2 6 9 9 0 6 9 1 9 9 2 3 9 7 5 5 5 4 5 5 1 4 7 9", "3 0 2 2 1 0 1 0 1 3 0 2 2 3 2 2 2 3 2 2 3 1 1 0 2", "6 2 0 6 6 0 3 4 1 4 1 2 3 6 6 5 4 5 4 5 5 1 3 1 6", "8 2 6 0 9 0 6 8 1 9 5 2 3 8 7 5 5 5 4 5 5 1 4 4 9", "9 2 6 9 0 0 6 9 1 9 7 2 3 9 7 5 5 5 4 5 5 1 4 5 9", "2 1 0 2 0 0 0 0 0 2 0 1 1 1 0 0 1 2 1 1 1 1 0 0 0", "9 2 6 9 9 0 0 8 1 9 6 2 3 9 7 5 5 5 4 5 5 1 4 4 9", "9 2 6 9 9 0 6 0 1 9 9 2 3 9 7 5 5 5 4 5 5 1 4 7 9", "4 2 2 4 2 0 1 2 0 4 0 2 3 4 4 4 3 4 2 4 3 1 1 0 3", "9 2 6 9 9 0 6 9 1 0 7 2 3 9 7 5 5 5 4 5 5 1 4 6 9", "9 2 6 9 9 0 6 9 1 9 0 2 3 9 7 5 5 5 4 5 5 1 4 7 9", "3 1 1 2 1 0 0 0 0 3 0 0 1 2 1 1 2 2 1 1 2 1 1 0 1", "4 2 2 3 2 0 1 1 1 4 0 2 0 3 3 3 2 4 2 3 3 1 1 0 2", "9 2 6 9 9 0 6 9 1 9 9 2 3 0 7 5 5 5 4 5 5 1 4 7 9", "8 2 6 8 6 0 4 5 1 7 3 2 3 7 0 5 5 5 4 5 5 1 3 2 8", "6 2 5 6 5 0 2 4 1 4 0 2 3 5 6 0 4 5 3 5 5 1 3 0 5", "7 2 6 7 6 0 4 5 1 6 2 2 3 6 7 5 0 5 4 5 5 1 3 2 8", "5 2 4 6 4 0 2 3 1 4 0 2 3 5 5 5 3 0 3 5 4 1 2 0 4", "8 2 6 9 6 0 4 6 1 7 4 2 3 7 7 5 5 5 0 5 5 1 4 3 8", "5 2 3 5 3 0 2 3 1 4 0 2 3 5 4 4 3 4 3 0 3 1 2 0 4", "7 2 6 7 6 0 3 4 1 5 1 2 3 6 6 5 4 5 4 5 0 1 3 2 7", "1 1 0 1 0 0 0 0 0 1 0 0 0 1 0 0 1 1 1 1 1 0 0 0 0", "8 2 6 9 7 0 4 7 1 8 5 2 3 8 7 5 5 5 4 5 5 1 0 3 9", "9 2 6 9 9 0 6 9 1 9 8 2 3 9 7 5 5 5 4 5 5 1 4 0 9", "8 2 6 9 8 0 5 8 1 9 5 2 3 8 7 5 5 5 4 5 5 1 4 3 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 5, 11, 1, 12, 8, 19, 17, 15, 2, 20, 16, 14, 18, 22, 24, 3, 6, 4, 9, 23, 0, 7, 10, 13};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> numSeen = {"0 7 4 1 9 4 5 9 6 2 5 7 6 4 8 3 5 2 5 6 5 4 1 5 3", "8 0 4 1 9 5 5 9 6 2 6 8 6 4 9 3 6 2 5 6 5 4 1 6 3", "5 3 0 1 3 1 3 4 3 2 3 2 2 3 3 3 2 2 3 3 4 2 1 2 3", "3 2 1 0 1 0 1 2 1 2 2 1 0 1 2 1 1 1 1 0 1 0 1 0 2", "8 8 4 1 0 6 6 9 6 2 7 8 6 4 9 3 7 2 5 7 5 4 1 6 3", "8 8 4 1 9 0 8 9 6 2 9 8 6 4 9 3 9 2 5 8 5 4 1 6 3", "8 8 4 1 9 7 0 9 6 2 9 8 6 4 9 3 7 2 5 7 5 4 1 6 3", "8 8 4 1 9 5 5 0 6 2 7 8 6 4 9 3 7 2 5 7 5 4 1 6 3", "8 6 4 1 8 3 5 8 0 2 5 6 6 4 7 3 4 2 5 5 5 4 1 5 3", "2 1 1 1 1 0 1 1 1 0 1 1 0 0 1 0 1 1 0 0 0 0 1 0 2", "8 8 4 1 9 9 8 9 6 2 0 8 6 4 9 3 9 2 5 8 5 4 1 6 3", "8 8 4 1 9 7 7 9 6 2 8 0 6 4 9 3 7 2 5 7 5 4 1 6 3", "7 4 4 1 7 3 5 7 5 2 5 5 0 4 5 3 4 2 5 4 5 4 1 3 3", "6 3 4 1 4 1 4 5 3 2 3 3 3 0 4 3 2 2 4 3 5 2 1 2 3", "8 8 4 1 9 9 8 9 6 2 9 8 6 4 0 3 9 2 5 8 5 4 1 6 3", "4 3 2 1 2 0 2 4 1 2 2 1 1 1 3 0 1 2 3 1 3 0 1 1 3", "8 8 4 1 9 9 8 9 6 2 9 8 6 4 9 3 0 2 5 8 5 4 1 6 3", "4 2 2 1 1 0 2 3 1 2 2 1 1 1 2 2 1 0 2 0 2 0 1 1 3", "6 4 4 1 6 2 4 6 5 2 4 4 5 4 5 3 3 2 0 4 5 3 1 2 3", "8 8 4 1 9 8 8 9 6 2 9 8 6 4 9 3 8 2 5 0 5 4 1 6 3", "6 4 4 1 5 1 4 6 4 2 4 3 4 4 4 3 2 2 4 4 0 3 1 2 3", "8 5 4 1 7 3 5 8 6 2 5 6 6 4 6 3 4 2 5 5 5 0 1 4 3", "1 0 0 0 1 0 0 1 0 1 1 0 0 0 1 0 0 0 0 0 0 0 0 0 1", "8 7 4 1 9 5 5 9 6 2 5 7 6 4 9 3 5 2 5 6 5 4 1 0 3", "4 3 3 1 2 1 2 4 2 2 3 1 2 2 3 3 2 2 3 2 4 1 1 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 9, 3, 17, 15, 24, 2, 13, 20, 18, 12, 21, 8, 0, 23, 1, 7, 4, 11, 6, 19, 5, 10, 14, 16};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> numSeen = {"0 4 0 5 8 9 4 8 3 2 1 7 9 9 9 9 9 2 2 8 1 6 0 9 7", "2 0 0 3 3 2 1 4 2 1 1 3 2 3 3 3 6 2 2 2 1 1 0 3 6", "0 1 0 0 0 0 0 1 1 0 1 0 1 1 1 0 1 1 0 0 1 0 0 1 1", "4 4 0 0 6 5 3 4 2 2 1 4 2 4 5 3 7 2 2 4 1 3 0 6 7", "7 4 0 5 0 9 4 8 3 2 1 7 6 8 9 6 9 2 2 7 1 6 0 9 7", "9 4 0 5 8 0 4 8 3 2 1 7 9 9 9 9 9 2 2 8 1 6 0 9 7", "5 4 0 5 7 6 0 5 2 2 1 5 3 4 6 3 7 2 2 5 1 4 0 7 7", "8 4 0 5 8 9 4 0 3 2 1 7 7 9 9 7 9 2 2 8 1 6 0 9 7", "6 4 0 5 7 8 4 6 0 2 1 6 4 6 7 3 8 2 2 6 1 6 0 8 7", "5 4 0 5 7 7 4 6 2 0 1 5 3 5 7 3 8 2 2 6 1 5 0 7 7", "0 2 0 1 0 0 0 2 1 0 0 1 1 2 1 0 2 1 0 0 1 0 0 1 2", "9 4 0 5 8 9 4 8 3 2 1 0 8 9 9 8 9 2 2 8 1 6 0 9 7", "9 4 0 5 8 9 4 8 3 2 1 7 0 9 9 9 9 2 2 8 1 6 0 9 7", "9 4 0 5 8 9 4 8 3 2 1 7 9 0 9 8 9 2 2 8 1 6 0 9 7", "7 4 0 5 8 9 4 7 3 2 1 7 5 7 0 5 9 2 2 6 1 6 0 9 7", "9 4 0 5 8 9 4 8 3 2 1 7 9 9 9 0 9 2 2 8 1 6 0 9 7", "9 4 0 5 8 9 4 8 3 2 1 7 9 9 9 9 0 2 2 8 1 6 0 9 7", "0 3 0 2 1 1 1 3 1 0 1 2 1 3 2 2 4 0 1 0 1 0 0 2 4", "2 4 0 4 4 3 2 4 2 2 1 3 2 3 4 3 6 2 0 2 1 2 0 4 7", "7 4 0 5 8 9 4 8 3 2 1 7 7 8 9 7 9 2 2 0 1 6 0 9 7", "0 2 0 2 0 1 0 3 1 0 1 2 1 3 1 1 3 2 1 0 0 0 0 1 3", "7 4 0 5 8 9 4 6 3 2 1 6 4 7 8 4 9 2 2 6 1 0 0 9 7", "1 4 0 3 2 2 1 4 1 1 1 3 1 3 3 3 5 2 1 1 1 0 0 2 5", "9 4 0 5 8 9 4 8 3 2 1 7 9 9 9 9 9 2 2 8 1 6 0 0 7", "3 4 0 4 5 4 2 4 2 2 1 4 2 4 4 3 7 2 2 3 1 3 0 5 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 10, 20, 17, 22, 1, 18, 24, 3, 6, 9, 8, 21, 14, 4, 19, 7, 11, 13, 0, 5, 12, 15, 16, 23};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> numSeen = {"0 7 0 8 3 2 4 4 9 9 8 6 1 2 8 3 9 9 2 6 4 5 3 9 6", "9 0 0 9 3 2 4 4 9 9 8 6 1 2 9 3 9 9 2 7 4 5 3 9 6", "1 1 0 1 0 2 1 2 2 0 0 1 1 1 1 2 1 1 1 0 0 2 1 2 1", "9 7 0 0 3 2 4 4 9 9 8 6 1 2 9 3 9 9 2 9 4 5 3 9 6", "7 4 0 5 0 2 3 4 7 4 3 5 1 2 3 3 4 6 2 4 3 5 3 4 6", "6 4 0 5 2 0 3 4 7 4 2 4 1 2 3 3 3 5 2 3 3 5 3 4 5", "9 6 0 7 3 2 0 4 8 6 6 6 1 2 6 3 6 8 2 4 4 5 3 6 6", "3 2 0 3 1 2 2 0 4 2 0 1 1 2 3 3 2 1 2 1 2 4 3 2 4", "9 7 0 8 3 2 4 4 0 8 8 6 1 2 8 3 8 9 2 6 4 5 3 9 6", "9 7 0 9 3 2 4 4 9 0 8 6 1 2 9 3 9 9 2 9 4 5 3 9 6", "9 6 0 8 3 2 4 4 9 7 0 6 1 2 7 3 7 9 2 5 4 5 3 8 6", "8 5 0 5 3 2 3 4 7 4 4 0 1 2 4 3 5 7 2 4 4 5 3 5 6", "1 0 0 1 0 1 1 1 1 0 0 1 0 0 0 1 0 1 1 0 0 1 1 1 0", "4 2 0 4 1 2 2 4 5 4 1 3 1 0 3 3 3 3 2 1 2 5 3 4 5", "9 7 0 9 3 2 4 4 9 9 8 6 1 2 0 3 9 9 2 9 4 5 3 9 6", "4 2 0 3 1 2 2 4 5 3 0 2 1 2 3 0 3 2 2 1 2 4 3 3 4", "9 7 0 9 3 2 4 4 9 9 8 6 1 2 9 3 0 9 2 8 4 5 3 9 6", "9 7 0 9 3 2 4 4 9 9 8 6 1 2 9 3 9 0 2 9 4 5 3 9 6", "1 1 0 2 1 2 1 3 2 1 0 1 1 2 1 2 1 1 0 0 0 3 2 2 2", "9 7 0 9 3 2 4 4 9 9 8 6 1 2 9 3 9 9 2 0 4 5 3 9 6", "9 5 0 6 3 2 3 4 7 5 5 6 1 2 5 3 6 7 2 4 0 5 3 6 6", "5 3 0 4 2 2 3 4 6 4 1 3 1 2 3 3 3 4 2 2 2 0 3 4 5", "2 1 0 2 1 2 1 4 3 2 0 1 1 2 2 3 1 1 2 1 1 4 0 2 3", "9 7 0 9 3 2 4 4 9 9 8 6 1 2 9 3 9 9 2 9 4 5 3 0 6", "9 6 0 8 3 2 4 4 9 7 7 6 1 2 6 3 6 9 2 5 4 5 3 7 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 2, 18, 22, 7, 15, 13, 21, 5, 4, 11, 20, 6, 24, 10, 8, 0, 1, 16, 3, 9, 14, 17, 19, 23};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> numSeen = {"0 3 4 5 2 4 8 6 5 7 5 9 1 8 5 9 8 9 3 5 4 0 9 9 3", "3 0 1 2 1 2 1 1 1 2 1 3 1 3 2 3 3 3 2 1 1 0 1 3 1", "6 3 0 5 2 4 5 4 5 5 3 6 1 5 4 6 5 9 3 4 4 0 7 8 3", "9 3 4 0 2 4 9 7 9 9 6 9 1 9 5 9 9 9 3 6 4 0 9 9 3", "4 3 1 3 0 3 2 2 2 3 2 4 1 3 2 3 3 4 2 2 1 0 2 4 2", "5 3 3 3 2 0 3 3 3 4 2 4 1 4 3 5 3 6 2 2 3 0 4 6 3", "9 3 4 5 2 4 0 7 9 9 6 9 1 9 5 9 9 9 3 6 4 0 9 9 3", "9 3 4 5 2 4 9 0 6 7 6 9 1 9 5 9 9 9 3 6 4 0 9 9 3", "9 3 4 5 2 4 9 7 0 9 6 9 1 9 5 9 9 9 3 6 4 0 9 9 3", "9 3 4 5 2 4 9 7 9 0 6 9 1 9 5 9 9 9 3 6 4 0 9 9 3", "9 3 4 5 2 4 9 7 6 7 0 9 1 9 5 9 9 9 3 5 4 0 9 9 3", "9 3 4 5 2 4 9 7 8 8 6 0 1 9 5 9 9 9 3 6 4 0 9 9 3", "1 1 0 0 1 1 0 0 0 0 0 1 0 1 0 1 1 1 0 0 1 0 1 1 0", "9 3 4 5 2 4 9 7 9 9 6 9 1 0 5 9 9 9 3 6 4 0 9 9 3", "8 3 4 5 2 4 7 5 5 6 5 8 1 7 0 8 7 9 3 5 4 0 8 9 3", "9 3 4 5 2 4 9 7 7 8 6 9 1 9 5 0 9 9 3 6 4 0 9 9 3", "9 3 4 5 2 4 9 7 9 8 6 9 1 9 5 9 0 9 3 6 4 0 9 9 3", "9 3 4 6 2 4 9 7 9 9 6 9 1 9 5 9 9 0 3 6 4 0 9 9 3", "6 3 4 5 2 4 4 4 4 4 3 6 1 5 3 6 4 8 0 3 4 0 6 7 3", "9 3 4 5 2 4 9 7 6 7 6 9 1 9 5 9 9 9 3 0 4 0 9 9 3", "6 3 3 4 2 4 3 4 4 4 2 5 1 4 3 6 3 7 3 3 0 0 5 6 3", "2 2 1 1 1 2 1 1 0 1 1 2 1 2 1 2 2 2 1 1 1 0 1 2 0", "9 3 4 5 2 4 9 7 9 9 6 9 1 9 5 9 9 9 3 6 4 0 0 9 3", "7 3 4 5 2 4 6 4 5 6 4 7 1 6 5 7 6 9 3 4 4 0 8 0 3", "5 3 2 3 2 3 3 2 3 4 2 4 1 4 2 4 3 5 2 2 2 0 3 5 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 21, 1, 4, 24, 5, 20, 18, 2, 23, 14, 0, 10, 7, 19, 15, 11, 16, 6, 8, 9, 13, 22, 3, 17};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> numSeen = {"0 5 5 4 2 6 2 8 5 2 6 0 3 7 8 7 8 5 7 4 1 4 5 5 5", "7 0 6 4 2 8 2 9 5 2 7 0 3 9 8 8 9 8 8 4 1 6 7 7 5", "7 8 0 4 2 8 2 9 5 2 9 0 3 9 8 8 9 9 9 4 1 9 7 9 5", "4 5 4 0 2 4 2 4 2 2 3 0 3 5 5 4 5 4 4 3 1 0 5 3 4", "3 5 3 4 0 3 2 4 2 2 2 0 3 4 4 3 5 4 4 2 1 0 5 3 4", "7 8 6 4 2 0 2 9 5 2 7 0 3 8 8 8 9 7 8 4 1 6 6 6 5", "2 3 3 3 1 2 0 2 1 2 2 0 3 3 2 3 3 2 2 2 1 0 4 1 3", "7 8 9 4 2 8 2 0 5 2 9 0 3 9 8 8 9 9 9 4 1 9 7 9 5", "7 5 5 4 2 5 2 7 0 2 5 0 3 7 8 6 8 5 7 4 1 3 5 5 5", "2 2 3 2 1 2 2 1 0 0 1 0 2 2 2 2 3 2 1 2 1 0 3 1 2", "7 8 8 4 2 8 2 9 5 2 0 0 3 9 8 8 9 9 9 4 1 6 7 9 5", "1 0 1 1 0 0 0 0 0 1 0 0 0 1 0 0 1 0 0 1 1 0 1 0 1", "3 4 3 3 1 2 2 3 1 2 2 0 0 3 3 3 4 3 3 2 1 0 4 2 4", "7 8 6 4 2 8 2 9 5 2 8 0 3 0 8 8 9 9 9 4 1 6 7 8 5", "7 6 6 4 2 6 2 8 5 2 6 0 3 8 0 7 9 6 7 4 1 5 5 6 5", "7 7 6 4 2 7 2 8 5 2 7 0 3 8 8 0 9 7 8 4 1 6 5 6 5", "7 8 8 4 2 8 2 9 5 2 9 0 3 9 8 8 0 9 9 4 1 7 7 9 5", "7 8 9 4 2 8 2 9 5 2 9 0 3 9 8 8 9 0 9 4 1 9 7 9 5", "7 8 9 4 2 8 2 9 5 2 9 0 3 9 8 8 9 9 0 4 1 8 7 9 5", "5 5 4 4 2 4 2 5 3 2 4 0 3 6 6 4 6 4 5 0 1 1 5 3 5", "1 1 2 1 0 1 1 1 0 2 0 0 1 2 1 1 2 1 0 1 0 0 2 0 1", "7 8 9 4 2 8 2 9 5 2 9 0 3 9 8 8 9 9 9 4 1 0 7 9 5", "7 8 7 4 2 8 2 9 5 2 9 0 3 9 8 8 9 9 9 4 1 6 0 9 5", "7 8 9 4 2 8 2 9 5 2 9 0 3 9 8 8 9 9 9 4 1 8 7 0 5", "6 5 4 4 2 5 2 6 4 2 5 0 3 6 7 5 7 5 6 4 1 2 5 4 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 20, 9, 6, 12, 4, 3, 19, 24, 8, 0, 14, 15, 5, 1, 13, 22, 10, 16, 18, 23, 2, 7, 17, 21};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> numSeen = {"0 4 2 6 9 3 9 0 1 9 5 1 5 9 7 9 2 9 8 9 3 8 5 6 2", "4 0 2 5 5 3 3 0 1 4 3 1 2 4 4 5 2 6 3 4 3 5 3 2 1", "3 4 0 5 4 3 3 0 1 4 2 1 2 4 3 4 2 5 2 4 2 5 2 2 1", "6 4 2 0 9 3 7 0 1 7 5 1 5 8 7 9 2 7 5 8 3 7 5 5 2", "9 4 2 6 0 3 9 0 1 9 5 1 5 9 7 9 2 9 9 9 3 9 5 6 2", "2 3 1 4 3 0 3 0 1 4 2 1 1 4 2 4 2 4 2 3 1 5 2 2 1", "9 4 2 6 9 3 0 0 1 9 5 1 5 9 7 9 2 9 9 9 3 9 5 6 2", "1 1 0 2 2 1 1 0 1 2 1 1 0 1 1 2 1 1 1 1 0 2 1 1 0", "1 0 0 1 1 1 1 0 0 1 0 1 0 0 1 1 0 0 1 0 0 1 0 0 0", "9 4 2 6 9 3 9 0 1 0 5 1 5 9 7 9 2 9 9 9 3 9 5 6 2", "4 4 2 6 7 3 5 0 1 6 0 1 3 6 6 6 2 7 3 6 3 6 4 4 1", "1 1 0 3 3 2 1 0 1 3 1 0 1 2 2 3 2 2 1 2 1 3 1 1 1", "7 4 2 6 9 3 7 0 1 8 5 1 0 9 7 9 2 7 7 9 3 7 5 5 2", "7 4 2 6 9 3 8 0 1 9 5 1 5 0 7 9 2 8 8 9 3 8 5 6 2", "6 4 2 6 9 3 7 0 1 8 5 1 5 8 0 9 2 7 6 8 3 7 5 5 2", "9 4 2 6 9 3 9 0 1 9 5 1 5 9 7 0 2 9 9 9 3 9 5 6 2", "2 2 0 3 3 2 2 0 1 4 1 1 1 3 2 3 0 3 1 2 1 4 1 1 1", "9 4 2 6 9 3 9 0 1 9 5 1 5 9 7 9 2 0 8 9 3 8 5 6 2", "9 4 2 6 9 3 9 0 1 9 5 1 5 9 7 9 2 9 0 9 3 9 5 6 2", "8 4 2 6 9 3 9 0 1 9 5 1 5 9 7 9 2 8 8 0 3 8 5 6 2", "4 4 2 6 6 3 4 0 1 5 4 1 3 5 5 5 2 6 3 5 0 6 3 3 1", "9 4 2 6 9 3 9 0 1 9 5 1 5 9 7 9 2 9 8 9 3 0 5 6 2", "5 4 2 6 9 3 6 0 1 7 5 1 5 7 7 8 2 7 4 7 3 7 0 4 2", "8 4 2 6 9 3 9 0 1 9 5 1 5 9 7 9 2 9 8 9 3 8 5 0 2", "5 4 2 6 8 3 5 0 1 7 5 1 4 6 7 7 2 7 3 6 3 7 5 4 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 11, 16, 5, 2, 1, 20, 10, 24, 22, 3, 14, 12, 13, 19, 23, 0, 17, 21, 4, 6, 9, 15, 18};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> numSeen = {"0 7 7 1 5 9 6 3 0 5 4 4 3 5 8 6 7 6 6 1 4 1 0 7 4", "7 0 9 1 5 9 6 7 0 9 4 4 3 5 9 8 8 9 7 1 9 1 0 9 4", "7 9 0 1 5 9 6 7 0 9 4 4 3 5 9 8 8 9 7 1 9 1 0 9 4", "4 3 4 0 5 6 2 2 0 3 4 4 3 4 4 2 5 4 3 1 1 1 0 4 2", "4 4 4 1 0 6 2 3 0 4 4 4 3 5 5 2 5 5 4 1 2 1 0 4 3", "7 9 9 1 5 0 6 7 0 9 4 4 3 5 9 8 8 9 7 1 9 1 0 9 4", "7 9 8 1 5 9 0 4 0 6 4 4 3 5 9 7 8 8 7 1 4 1 0 9 4", "7 9 8 1 5 9 6 0 0 7 4 4 3 5 9 8 8 9 7 1 6 1 0 9 4", "2 2 2 0 2 2 1 1 0 1 2 2 3 2 1 1 3 3 2 1 1 1 0 2 1", "7 9 9 1 5 9 6 7 0 0 4 4 3 5 9 8 8 9 7 1 9 1 0 9 4", "6 6 5 1 5 7 4 3 0 4 0 4 3 5 6 4 6 5 5 1 3 1 0 6 4", "4 2 4 0 4 5 2 1 0 2 3 0 3 4 3 2 5 4 3 1 1 1 0 3 2", "2 2 3 0 2 3 1 1 0 1 2 3 0 3 2 1 4 3 2 1 1 1 0 2 1", "7 7 6 1 5 8 5 3 0 5 4 4 3 0 7 5 7 6 6 1 3 1 0 7 4", "7 9 8 1 5 9 6 7 0 8 4 4 3 5 0 8 8 9 7 1 6 1 0 9 4", "7 9 8 1 5 9 6 5 0 6 4 4 3 5 9 0 8 9 7 1 5 1 0 9 4", "7 8 7 1 5 9 6 4 0 5 4 4 3 5 8 6 0 7 7 1 4 1 0 8 4", "7 9 9 1 5 9 6 7 0 8 4 4 3 5 9 8 8 0 7 1 7 1 0 9 4", "7 9 8 1 5 9 6 6 0 6 4 4 3 5 9 8 8 9 0 1 6 1 0 9 4", "1 1 1 0 2 1 1 1 0 1 1 2 2 1 0 0 2 2 1 0 1 1 0 1 0", "7 9 9 1 5 9 6 7 0 9 4 4 3 5 9 8 8 9 7 1 0 1 0 9 4", "3 2 4 0 3 4 2 1 0 1 3 3 3 4 3 1 4 4 3 1 1 0 0 2 2", "1 0 0 0 1 1 1 0 0 0 0 1 1 1 0 0 1 1 1 1 1 1 0 0 0", "7 9 9 1 5 9 6 7 0 8 4 4 3 5 9 8 8 9 7 1 8 1 0 0 4", "5 5 4 1 5 7 3 3 0 4 4 4 3 5 6 3 5 5 4 1 2 1 0 5 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 19, 8, 12, 21, 11, 3, 4, 24, 10, 13, 0, 16, 6, 15, 18, 7, 14, 17, 23, 1, 2, 5, 9, 20};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> numSeen = {"0 7 9 8 9 5 6 5 2 3 7 6 1 4 1 9 9 7 3 8 2 1 1 9 8", "5 0 7 7 8 5 4 4 2 3 7 6 1 4 1 6 6 5 3 6 2 1 1 6 7", "7 7 0 8 9 5 6 5 2 3 7 6 1 4 1 9 9 7 3 7 2 1 1 9 8", "5 7 8 0 9 5 5 5 2 3 7 6 1 4 1 8 9 7 3 6 2 1 1 7 7", "8 7 9 8 0 5 6 5 2 3 7 6 1 4 1 9 9 7 3 8 2 1 1 9 8", "4 6 5 5 6 0 3 3 2 3 6 6 1 4 1 6 5 4 3 4 2 1 1 6 6", "6 7 9 8 9 5 0 5 2 3 7 6 1 4 1 8 9 7 3 6 2 1 1 8 8", "5 7 7 7 9 5 4 0 2 3 7 6 1 4 1 6 7 6 3 6 2 1 1 6 7", "1 2 2 2 3 2 0 1 0 1 2 3 1 2 1 2 2 0 3 2 1 1 1 2 3", "3 5 5 4 4 4 3 2 2 0 6 6 1 4 1 5 4 3 3 2 2 1 1 5 5", "4 7 6 6 7 5 4 4 2 3 0 6 1 4 1 6 6 5 3 5 2 1 1 6 7", "2 4 4 3 3 4 3 2 2 3 6 0 1 3 1 4 4 2 3 2 2 1 1 4 5", "0 0 1 0 1 0 0 0 1 1 1 0 0 1 0 1 0 0 1 1 0 1 0 0 0", "3 6 5 4 5 4 3 3 2 3 6 6 1 0 1 5 4 4 3 3 2 1 1 5 6", "2 3 4 3 3 4 2 1 2 2 5 5 1 2 0 3 3 1 3 2 2 1 1 3 4", "8 7 9 8 9 5 6 5 2 3 7 6 1 4 1 0 9 7 3 8 2 1 1 9 8", "8 7 9 8 9 5 6 5 2 3 7 6 1 4 1 9 0 7 3 8 2 1 1 9 8", "5 7 7 7 9 5 4 5 2 3 7 6 1 4 1 7 8 0 3 6 2 1 1 7 7", "2 3 3 3 3 4 2 1 2 1 4 5 1 2 1 2 2 0 0 2 2 1 1 2 4", "8 7 9 8 9 5 6 5 2 3 7 6 1 4 1 9 9 7 3 0 2 1 1 9 8", "2 3 3 2 3 3 1 1 2 1 3 4 1 2 1 2 2 0 3 2 0 1 1 2 3", "0 1 1 0 2 1 0 1 1 1 1 1 1 2 0 2 1 0 1 1 0 0 0 0 1", "1 2 1 1 3 2 0 1 1 1 1 2 1 2 0 2 1 0 2 2 1 1 0 1 2", "8 7 9 8 9 5 6 5 2 3 7 6 1 4 1 9 9 7 3 9 2 1 1 0 8", "5 7 9 8 9 5 5 5 2 3 7 6 1 4 1 8 9 7 3 6 2 1 1 7 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 21, 22, 8, 20, 18, 14, 11, 9, 13, 5, 10, 1, 7, 17, 3, 24, 6, 2, 0, 4, 15, 16, 19, 23};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> numSeen = {"0 11 11 7 8 2 10 14 7 11 2 5 15 10 16 11", "13 0 36 23 34 41 39 23 7 42 35 28 48 16 21 16", "13 41 0 23 36 41 66 23 7 47 35 37 84 16 21 16", "13 25 35 0 24 26 33 23 7 27 27 18 39 16 21 16", "13 41 48 23 0 41 54 23 7 47 35 37 73 16 21 16", "13 41 40 23 34 0 45 23 7 45 35 28 56 16 21 16", "13 41 60 23 36 41 0 23 7 47 35 37 84 16 21 16", "13 23 30 23 20 19 27 0 7 26 22 17 34 16 21 16", "9 2 4 3 8 1 3 6 0 6 1 2 7 6 8 7", "13 41 50 23 36 41 59 23 7 0 35 37 79 16 21 16", "13 34 35 23 29 32 36 23 7 35 0 22 48 16 21 16", "13 41 48 23 35 41 45 23 7 47 35 0 65 16 21 16", "13 41 52 23 36 41 66 23 7 47 35 37 0 16 21 16", "13 14 15 7 14 8 14 15 7 13 8 12 23 0 17 15", "13 23 21 15 20 18 23 22 7 19 21 15 30 16 0 16", "13 22 19 9 17 13 20 17 7 16 12 13 27 16 18 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 0, 13, 15, 14, 7, 3, 10, 1, 5, 11, 4, 9, 12, 2, 6};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> numSeen = {"0 59 4 41 55 63 33 25 40 43 67 2 24 22 19 18", "54 0 4 41 67 71 33 25 40 47 73 2 24 22 19 18", "7 9 0 6 10 12 8 2 9 10 17 2 7 15 8 12", "42 47 4 0 55 54 33 25 33 39 56 2 24 22 19 18", "54 66 4 41 0 71 33 25 40 54 77 2 24 22 19 18", "54 64 4 41 60 0 33 25 40 45 72 2 24 22 19 18", "26 32 4 30 45 44 0 22 29 32 45 2 24 22 19 18", "34 40 4 32 53 51 33 0 33 39 49 2 24 22 19 18", "48 53 4 41 55 60 33 25 0 39 61 2 24 22 19 18", "54 66 4 41 74 71 33 25 40 0 83 2 24 22 19 18", "54 66 4 41 74 71 33 25 40 63 0 2 24 22 19 18", "0 0 2 1 8 8 2 0 0 6 8 0 3 9 2 5", "24 26 4 24 37 35 24 13 27 29 37 2 0 22 19 18", "13 14 4 14 14 17 16 6 11 12 24 2 15 0 14 15", "22 22 4 20 31 27 24 13 18 20 32 2 23 22 0 18", "16 22 4 16 23 19 20 10 17 15 30 2 18 22 14 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 2, 13, 15, 14, 12, 6, 7, 3, 8, 0, 5, 1, 4, 9, 10};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> numSeen = {"0 46 23 31 46 15 75 7 65 40 6 68 14 52 38 33", "50 0 23 31 46 15 62 7 49 40 6 58 14 51 38 33", "31 30 0 19 18 15 25 7 16 7 6 19 7 21 17 13", "31 33 23 0 31 15 36 7 33 18 6 31 14 25 29 27", "42 44 23 31 0 15 51 7 45 35 6 46 14 42 38 33", "16 15 13 12 8 0 11 7 9 4 6 7 6 12 5 7", "68 46 23 31 46 15 0 7 67 40 6 80 14 52 38 33", "8 8 9 7 6 7 4 0 3 0 6 1 6 6 5 7", "68 46 23 31 46 15 83 7 0 40 6 75 14 52 38 33", "43 45 23 31 46 15 54 7 46 0 6 49 14 48 38 33", "23 23 17 19 12 15 17 7 10 6 0 14 6 17 12 12", "68 46 23 31 46 15 86 7 67 40 6 0 14 52 38 33", "31 30 23 24 26 15 33 7 24 13 6 25 0 22 26 18", "59 46 23 31 46 15 69 7 58 40 6 66 14 0 38 33", "39 39 23 31 43 15 48 7 41 30 6 40 14 35 0 33", "39 33 23 31 37 15 42 7 37 21 6 40 14 31 33 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 5, 10, 2, 12, 3, 15, 14, 4, 9, 1, 13, 0, 8, 6, 11};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> numSeen = {"0 64 7 47 35 63 45 46 20 20 77 18 48 9 21 6", "45 0 7 47 35 44 40 46 20 20 64 18 48 9 21 6", "11 13 0 7 5 5 8 8 6 2 10 11 16 2 9 6", "41 58 7 0 35 35 40 46 20 20 59 18 48 9 21 6", "31 48 7 36 0 24 34 38 20 20 47 18 46 9 21 6", "57 64 7 47 35 0 45 46 20 20 77 18 48 9 21 6", "46 64 7 47 35 48 0 46 20 20 68 18 48 9 21 6", "34 55 7 38 35 31 39 0 20 20 55 18 48 9 21 6", "27 37 7 26 20 20 21 22 0 14 40 18 36 9 21 6", "30 41 7 29 29 20 30 30 20 0 46 18 40 9 21 6", "51 64 7 47 35 56 45 46 20 20 0 18 48 9 21 6", "23 29 7 21 17 19 19 19 16 14 34 0 28 9 21 6", "32 54 7 36 35 26 35 43 20 20 49 18 0 9 21 6", "14 18 7 14 6 7 13 9 13 5 18 13 22 0 13 6", "20 23 7 16 12 12 16 15 15 13 26 14 28 9 0 6", "3 5 7 2 0 2 4 0 1 2 1 3 7 2 3 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 2, 13, 14, 11, 8, 9, 4, 12, 7, 3, 1, 6, 10, 0, 5};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> numSeen = {"0 15 27 26 34 17 38 28 39 35 38 28 36 3 45 20", "6 0 13 17 15 17 12 9 12 15 13 11 12 3 10 13", "31 15 0 26 43 17 41 32 48 42 38 28 40 3 49 20", "11 15 16 0 20 17 21 14 19 17 16 11 16 3 18 17", "31 15 31 26 0 17 49 38 57 43 38 28 47 3 57 20", "0 10 12 11 6 0 10 0 5 14 8 5 5 3 2 9", "31 15 31 26 52 17 0 43 64 72 38 28 70 3 69 20", "31 15 31 26 52 17 49 0 58 43 38 28 56 3 65 20", "31 15 31 26 52 17 55 43 0 47 38 28 57 3 65 20", "31 15 31 26 52 17 69 43 64 0 38 28 70 3 69 20", "30 15 27 26 34 17 35 19 32 26 0 28 27 3 40 20", "24 15 26 26 32 17 33 19 31 19 32 0 19 3 34 20", "31 15 31 26 52 17 66 43 64 64 38 28 0 3 69 20", "0 5 4 2 3 8 4 0 2 7 7 1 1 0 0 1", "31 15 31 26 52 17 60 43 64 56 38 28 64 3 0 20", "15 15 21 26 26 17 24 16 28 17 24 20 17 3 25 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 5, 1, 3, 15, 11, 10, 0, 2, 4, 7, 8, 14, 12, 6, 9};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> numSeen = {"0 60 23 42 27 29 42 60 4 18 1 70 52 72 53 17", "55 0 23 42 27 29 42 60 4 18 1 70 52 59 53 17", "20 20 0 31 23 19 17 25 4 18 1 35 20 21 33 17", "33 36 23 0 27 29 35 47 4 18 1 49 29 33 46 17", "29 28 23 37 0 28 23 34 4 18 1 43 21 25 42 17", "32 30 23 38 27 0 30 42 4 18 1 44 23 31 46 17", "48 47 23 42 27 29 0 60 4 18 1 62 45 52 53 17", "43 45 23 42 27 29 39 0 4 18 1 58 36 44 53 17", "5 6 12 16 16 11 7 12 0 9 1 15 3 5 16 13", "18 16 21 25 19 17 11 21 4 0 1 32 16 18 30 17", "4 2 7 7 9 9 5 6 3 5 0 7 2 2 8 9", "59 60 23 42 27 29 42 60 4 18 1 0 52 68 53 17", "54 54 23 42 27 29 42 60 4 18 1 70 0 57 53 17", "65 60 23 42 27 29 42 60 4 18 1 70 52 0 53 17", "41 37 23 42 27 29 36 52 4 18 1 57 30 38 0 17", "11 9 14 20 17 12 11 21 4 14 1 23 12 11 22 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 8, 15, 9, 2, 4, 5, 3, 14, 7, 6, 12, 1, 11, 0, 13};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> numSeen = {"0 17 18 16 16 12 20 20 2 7 5 11 3 23 28 14", "30 0 24 16 24 21 28 26 2 9 7 17 3 32 32 14", "30 18 0 16 28 31 41 39 2 21 21 24 3 36 50 23", "25 17 12 0 12 12 16 14 2 6 5 9 3 18 19 12", "30 18 25 16 0 28 33 31 2 12 16 18 3 36 41 21", "30 18 34 16 28 0 61 52 2 39 34 29 3 65 71 26", "30 18 34 16 28 46 0 45 2 31 34 29 3 59 70 26", "30 18 34 16 28 49 61 0 2 47 45 29 3 75 77 26", "9 0 4 4 6 4 6 2 0 4 3 5 2 8 7 2", "30 18 34 16 28 49 61 59 2 0 45 29 3 83 77 26", "30 18 34 16 28 49 61 55 2 43 0 29 3 72 77 26", "30 18 34 16 28 35 46 39 2 23 24 0 3 44 57 24", "18 9 6 7 11 8 11 8 2 6 4 8 0 11 12 8", "30 18 34 16 28 49 61 59 2 49 45 29 3 0 77 26", "30 18 34 16 28 49 61 54 2 39 41 29 3 68 0 26", "30 18 34 16 28 42 52 44 2 23 29 29 3 53 62 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 12, 3, 0, 1, 4, 2, 11, 15, 6, 5, 14, 10, 7, 9, 13};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> numSeen = {"0 21 5 17 30 24 40 37 37 28 24 17 25 7 5 26", "17 0 5 10 20 16 29 22 29 18 14 14 14 7 5 19", "7 8 0 6 3 6 7 7 9 2 0 0 1 3 4 4", "19 21 5 0 39 35 53 53 42 32 37 17 35 7 5 36", "19 21 5 39 0 52 63 53 42 32 57 17 59 7 5 47", "19 21 5 39 65 0 63 53 42 32 49 17 57 7 5 47", "19 21 5 39 49 44 0 53 42 32 43 17 45 7 5 45", "19 21 5 39 46 39 62 0 42 32 39 17 40 7 5 36", "19 21 5 34 38 29 44 52 0 32 28 17 35 7 5 35", "19 21 5 25 37 27 41 46 42 0 25 17 26 7 5 30", "19 21 5 39 75 52 63 53 42 32 0 17 59 7 5 47", "19 21 5 10 22 16 31 31 33 19 21 0 18 7 5 21", "19 21 5 39 67 52 63 53 42 32 52 17 0 7 5 47", "14 14 5 9 12 9 21 19 20 16 11 5 6 0 5 19", "14 10 5 7 8 8 14 10 16 9 7 3 4 5 0 10", "19 21 5 39 57 47 63 53 42 32 45 17 50 7 5 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 14, 13, 1, 11, 0, 9, 8, 3, 7, 6, 15, 5, 12, 4, 10};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> numSeen = {"0 36 23 14 9 43 40 19 36 19 28 24 36 32 30 7", "34 0 40 14 9 52 67 19 60 19 52 24 42 34 47 7", "34 51 0 14 9 52 74 19 64 19 55 24 49 34 47 7", "17 14 12 0 9 22 16 14 9 12 10 13 12 12 18 7", "5 3 2 1 0 9 6 4 6 6 3 7 1 1 9 7", "34 43 32 14 9 0 49 19 46 19 35 24 42 34 47 7", "34 51 55 14 9 52 0 19 65 19 55 24 53 34 47 7", "29 20 16 14 9 30 29 0 24 19 23 16 26 24 23 7", "34 51 55 14 9 52 85 19 0 19 55 24 53 34 47 7", "20 14 14 14 9 22 22 15 16 0 14 16 19 18 19 7", "34 51 46 14 9 52 67 19 61 19 0 24 47 34 47 7", "29 27 19 14 9 35 31 19 33 19 23 0 27 30 24 7", "34 51 55 14 9 52 76 19 64 19 55 24 0 34 47 7", "34 36 23 14 9 51 41 19 40 19 33 24 37 0 39 7", "34 43 32 14 9 52 58 19 52 19 44 24 42 34 0 7", "11 6 6 7 9 17 9 11 7 7 9 12 3 10 15 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 15, 3, 9, 7, 11, 0, 13, 5, 14, 1, 10, 2, 12, 6, 8};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> numSeen = {"0 36 22 30 32 17 51 2 49 33 50 15 24 32 26 42", "24 0 22 34 35 17 52 2 58 41 52 15 24 34 30 42", "17 22 0 20 25 17 35 2 33 23 36 15 24 19 16 33", "24 42 22 0 60 17 75 2 67 63 67 15 24 50 66 42", "24 42 22 63 0 17 75 2 67 63 67 15 24 50 57 42", "6 14 9 10 9 0 21 2 16 14 27 15 23 10 8 17", "24 42 22 59 60 17 0 2 67 63 67 15 24 50 48 42", "2 3 2 6 2 0 8 0 8 4 9 7 7 0 1 6", "24 42 22 42 44 17 59 2 0 50 56 15 24 43 32 42", "24 42 22 53 58 17 69 2 67 0 67 15 24 50 41 42", "24 42 22 51 51 17 67 2 67 63 0 15 24 50 34 42", "5 9 3 6 5 9 13 2 15 6 18 0 16 2 3 10", "12 22 16 11 17 17 28 2 25 15 31 15 0 11 10 25", "24 42 22 46 44 17 65 2 67 57 61 15 24 0 34 42", "24 42 22 66 60 17 75 2 67 63 67 15 24 50 0 42", "17 29 22 26 27 17 43 2 41 28 43 15 24 26 25 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 11, 5, 12, 2, 15, 0, 1, 8, 13, 10, 9, 6, 4, 3, 14};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> numSeen = {"0 11 52 30 67 66 4 47 19 59 19 29 52 7 43 28", "17 0 23 15 14 16 4 20 6 18 10 16 6 7 7 12", "39 11 0 30 53 48 4 47 19 49 19 29 37 7 38 28", "31 11 39 0 34 36 4 35 19 34 19 29 25 7 32 19", "69 11 52 30 0 70 4 47 19 59 19 29 52 7 43 28", "69 11 52 30 70 0 4 47 19 59 19 29 52 7 43 28", "9 9 8 3 6 9 0 6 3 9 4 6 0 3 1 2", "37 11 50 30 51 47 4 0 19 47 19 29 37 7 37 28", "29 11 30 23 27 33 4 27 0 30 19 29 18 7 26 17", "56 11 52 30 61 55 4 47 19 0 19 29 50 7 43 28", "22 11 30 22 18 22 4 26 10 27 0 25 10 7 12 14", "28 11 30 22 27 27 4 26 14 27 19 0 13 7 20 15", "63 11 52 30 61 63 4 47 19 59 19 29 0 7 43 28", "10 9 17 9 9 15 4 14 3 12 10 8 3 0 6 6", "47 11 52 30 61 48 4 47 19 51 19 29 44 7 0 28", "34 11 47 30 42 41 4 38 19 39 19 29 33 7 37 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 13, 1, 10, 11, 8, 3, 15, 7, 2, 14, 9, 12, 0, 4, 5};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> numSeen = {"0 42 29 49 19 49 33 52 48 15 44 5 30 7 34 27", "63 0 29 42 19 42 33 52 47 15 42 5 30 7 34 27", "55 38 0 37 19 36 33 48 32 15 37 5 30 7 34 27", "63 42 29 0 19 68 33 52 56 15 46 5 30 7 34 27", "26 16 14 9 0 9 18 26 21 15 8 5 15 7 31 17", "63 42 29 61 19 0 33 52 56 15 46 5 30 7 34 27", "44 31 29 24 19 26 0 40 27 15 25 5 30 7 34 22", "56 41 29 39 19 40 33 0 39 15 40 5 30 7 34 27", "63 42 29 55 19 63 33 52 0 15 46 5 30 7 34 27", "22 13 13 8 13 8 11 17 15 0 8 5 9 7 22 11", "63 42 29 51 19 54 33 52 51 15 0 5 30 7 34 27", "8 1 5 4 7 0 4 3 3 4 3 0 8 6 9 7", "42 27 27 16 19 17 24 36 27 15 18 5 0 7 34 19", "13 8 13 5 8 2 9 12 7 10 3 5 9 0 14 10", "35 20 19 12 19 17 24 29 25 15 12 5 24 7 0 18", "47 33 29 29 19 27 33 42 29 15 32 5 30 7 34 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 13, 9, 4, 14, 12, 6, 15, 2, 7, 1, 0, 10, 8, 3, 5};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> numSeen = {"0 5 20 11 23 22 29 33 25 33 26 37 28 22 19 10", "3 0 8 9 2 7 7 9 2 8 3 6 1 5 7 0", "20 5 0 11 6 14 10 24 7 19 17 22 18 17 16 10", "6 5 12 0 3 11 7 17 4 10 10 15 8 6 7 6", "38 5 20 11 0 22 56 39 50 46 46 70 66 22 39 10", "26 5 20 11 14 0 18 27 14 26 23 22 20 17 19 10", "38 5 20 11 50 22 0 39 43 46 46 67 66 22 39 10", "38 5 20 11 28 22 37 0 29 41 35 37 37 22 28 10", "38 5 20 11 62 22 56 39 0 46 46 70 66 22 39 10", "38 5 20 11 29 22 42 39 36 0 40 43 46 22 31 10", "38 5 20 11 37 22 45 39 36 46 0 52 55 22 37 10", "38 5 20 11 59 22 56 39 43 46 46 0 66 22 39 10", "38 5 20 11 42 22 54 39 42 46 46 58 0 22 39 10", "34 5 20 11 14 22 27 32 19 31 26 30 26 0 19 10", "38 5 20 11 38 22 53 39 40 46 46 58 59 22 0 10", "14 5 19 11 4 13 8 20 4 17 12 20 11 11 12 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 15, 2, 5, 13, 0, 7, 9, 10, 14, 12, 6, 11, 4, 8};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> numSeen = {"0 22 37 35 31 6 28 16 13 17 10 33 21 29 29 35", "37 0 40 35 45 6 28 16 34 50 10 41 38 46 39 37", "37 28 0 35 32 6 28 16 16 26 10 37 21 36 29 35", "31 22 32 0 31 6 28 16 7 14 10 30 21 25 26 28", "37 45 40 35 0 6 28 16 45 62 10 66 51 46 39 37", "5 0 8 6 8 0 8 4 1 2 4 8 1 1 2 5", "22 15 26 26 27 6 0 16 5 12 10 28 13 16 18 26", "13 8 17 19 18 6 20 0 4 10 10 24 7 14 13 18", "37 45 40 35 61 6 28 16 0 62 10 60 50 46 39 37", "37 45 40 35 54 6 28 16 40 0 10 51 45 46 39 37", "9 1 16 12 9 6 12 12 1 2 0 15 5 5 11 10", "37 45 40 35 71 6 28 16 45 62 10 0 51 46 39 37", "37 45 40 35 62 6 28 16 45 62 10 60 0 46 39 37", "37 39 40 35 44 6 28 16 25 41 10 41 31 0 33 37", "37 45 40 35 48 6 28 16 36 59 10 44 38 46 0 37", "37 37 40 35 39 6 28 16 23 35 10 37 22 42 31 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 7, 6, 3, 0, 2, 15, 13, 1, 14, 9, 8, 12, 4, 11};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> numSeen = {"0 32 31 24 35 13 18 47 6 46 37 45 8 13 18 28", "60 0 31 24 37 13 18 63 6 52 47 45 8 13 18 46", "43 24 0 24 26 13 18 41 6 40 35 45 8 13 18 24", "39 18 29 0 24 13 18 35 6 37 32 39 8 13 18 23", "60 39 31 24 0 13 18 47 6 49 41 45 8 13 18 28", "21 17 20 16 15 0 18 28 6 24 24 26 8 13 18 19", "30 17 29 19 20 13 0 29 6 32 29 35 8 13 18 21", "60 51 31 24 37 13 18 0 6 52 47 45 8 13 18 52", "0 0 8 3 2 3 1 9 0 6 2 7 5 1 7 0", "60 47 31 24 37 13 18 55 6 0 47 45 8 13 18 37", "60 42 31 24 37 13 18 51 6 50 0 45 8 13 18 37", "51 26 31 24 30 13 18 44 6 42 35 0 8 13 18 25", "5 1 9 6 6 4 8 18 6 6 8 9 0 2 12 3", "19 12 15 14 13 13 16 21 6 18 20 18 8 0 18 18", "12 4 10 6 9 12 13 20 6 10 15 12 8 5 0 9", "60 51 31 24 37 13 18 64 6 52 47 45 8 13 18 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 12, 14, 13, 5, 6, 3, 2, 11, 0, 4, 10, 9, 1, 7, 15};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> numSeen = {"0 22 44 45 40 5 15 45 36 8 17 64 65 27 51 35", "18 0 13 15 22 5 15 11 15 8 6 30 17 22 30 18", "47 22 0 31 40 5 15 42 33 8 17 57 54 27 51 35", "55 22 44 0 40 5 15 45 43 8 17 79 77 27 51 35", "41 22 41 28 0 5 15 42 33 8 17 51 47 27 51 35", "0 8 9 0 8 0 6 0 1 5 3 9 1 4 4 1", "8 17 9 1 13 5 0 9 6 6 3 16 8 10 12 8", "48 22 44 39 40 5 15 0 36 8 17 60 56 27 51 35", "55 22 44 46 40 5 15 45 0 8 17 73 69 27 51 35", "16 17 9 7 17 5 15 11 15 0 3 21 9 17 21 9", "29 22 26 21 34 5 15 22 18 8 0 33 27 27 39 27", "55 22 44 53 40 5 15 45 43 8 17 0 85 27 51 35", "55 22 44 53 40 5 15 45 43 8 17 83 0 27 51 35", "27 22 21 17 30 5 15 20 18 8 15 33 20 0 38 27", "39 22 32 25 37 5 15 35 28 8 17 43 42 27 0 35", "30 22 28 23 36 5 15 26 21 8 17 39 35 27 42 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6, 9, 1, 13, 10, 15, 14, 4, 2, 7, 0, 8, 3, 11, 12};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> numSeen = {"0 44 46 18 6 43 41 8 21 56 27 40 23 26 63 34", "61 0 46 18 6 43 56 8 21 70 27 52 23 26 66 55", "45 29 0 18 6 38 28 8 21 40 27 27 23 23 41 29", "25 20 26 0 6 22 18 8 12 23 16 10 23 14 19 18", "0 7 8 8 0 5 5 7 1 1 2 6 9 1 2 5", "46 34 46 18 6 0 30 8 21 48 27 32 23 23 50 32", "61 55 46 18 6 43 0 8 21 70 27 52 23 26 66 52", "7 7 13 17 6 13 8 0 1 9 8 9 16 7 2 10", "31 23 33 18 6 27 21 8 0 31 21 11 23 14 28 18", "61 50 46 18 6 43 51 8 21 0 27 52 23 26 66 44", "36 23 42 18 6 35 21 8 21 40 0 19 23 17 37 23", "61 49 46 18 6 43 45 8 21 61 27 0 23 26 66 44", "16 13 17 17 6 15 10 8 7 17 9 10 0 9 10 14", "53 43 46 18 6 43 35 8 21 55 27 34 23 0 55 34", "61 46 46 18 6 43 42 8 21 61 27 46 23 26 0 35", "61 59 46 18 6 43 56 8 21 70 27 52 23 26 66 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7, 12, 3, 8, 10, 2, 5, 13, 0, 14, 11, 9, 6, 1, 15};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> numSeen = {"0 45 26 45 17 11 11 22 9 8 22 22 21 26 32 27", "27 0 55 70 31 11 11 22 9 8 23 22 34 68 56 44", "27 89 0 70 31 11 11 22 9 8 23 22 34 68 56 44", "27 81 46 0 31 11 11 22 9 8 23 22 34 62 56 44", "27 68 37 52 0 11 11 22 9 8 23 22 34 47 47 36", "24 38 26 37 15 0 11 22 9 8 21 22 20 21 28 25", "24 30 17 30 11 6 0 22 9 8 17 22 18 14 21 17", "9 17 3 18 7 4 5 0 9 8 14 20 16 11 11 10", "6 8 1 12 7 3 5 13 0 8 10 12 9 9 10 4", "4 3 0 7 3 3 3 6 5 0 8 8 5 1 9 0", "27 51 28 46 22 11 11 22 9 8 0 22 26 34 37 28", "17 21 8 22 9 4 6 22 9 8 15 0 16 12 15 15", "27 59 33 48 23 11 11 22 9 8 23 22 0 41 42 29", "27 84 55 70 31 11 11 22 9 8 23 22 34 0 56 44", "27 72 40 61 31 11 11 22 9 8 23 22 34 50 0 40", "27 75 40 63 31 11 11 22 9 8 23 22 34 56 56 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 8, 7, 11, 6, 5, 0, 10, 12, 4, 14, 15, 3, 13, 1, 2};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> numSeen = {"0 23 57 37 29 20 25 30 75 45 3 18 74 46 10 42", "39 0 22 29 13 20 25 18 19 25 3 18 37 26 10 17", "72 23 0 37 29 20 25 30 68 45 3 18 74 46 10 42", "43 23 26 0 17 20 25 25 21 27 3 18 44 35 10 26", "55 23 47 37 0 20 25 30 45 42 3 18 70 46 10 42", "20 12 12 12 10 0 16 8 12 14 3 18 14 12 10 12", "32 15 22 24 13 20 0 12 18 21 3 18 28 23 10 16", "43 23 30 37 21 20 25 0 28 30 3 18 52 39 10 35", "77 23 57 37 29 20 25 30 0 45 3 18 74 46 10 42", "63 23 47 37 29 20 25 30 53 0 3 18 72 46 10 42", "6 7 4 7 3 4 2 0 2 4 0 5 4 0 3 8", "27 12 14 17 11 20 20 9 17 18 3 0 23 19 10 16", "72 23 51 37 29 20 25 30 61 45 3 18 0 46 10 42", "45 23 38 37 25 20 25 30 35 35 3 18 61 0 10 41", "12 12 11 8 6 11 8 8 9 5 3 14 11 9 0 8", "52 23 41 37 27 20 25 30 42 41 3 18 66 46 10 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 14, 5, 11, 6, 1, 3, 7, 13, 15, 4, 9, 12, 2, 0, 8};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> numSeen = {"0 34 31 19 25 6 27 14 0 28 11 21 17 31 36 15", "33 0 32 37 45 6 38 49 0 39 11 21 17 62 60 24", "33 42 0 19 34 6 35 23 0 28 11 21 17 35 45 22", "33 76 32 0 45 6 38 52 0 39 11 21 17 62 60 24", "33 69 32 36 0 6 38 41 0 39 11 21 17 50 58 24", "7 9 5 5 9 0 2 2 0 3 2 9 2 9 9 8", "33 51 32 20 34 6 0 31 0 34 11 21 17 42 46 23", "33 76 32 37 45 6 38 0 0 39 11 21 17 67 60 24", "7 17 9 7 9 6 7 4 0 12 7 15 7 9 12 8", "33 61 32 32 41 6 38 34 0 0 11 21 17 50 53 24", "16 27 20 14 19 6 18 12 0 24 0 21 16 21 26 11", "10 23 15 12 15 6 9 7 0 19 11 0 7 12 21 9", "25 33 24 18 21 6 19 13 0 25 11 21 0 30 32 13", "33 76 32 37 45 6 38 54 0 39 11 21 17 0 60 24", "33 71 32 36 45 6 38 41 0 39 11 21 17 55 0 24", "33 57 32 23 34 6 38 31 0 35 11 21 17 47 50 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 8, 11, 10, 12, 0, 2, 6, 15, 9, 4, 14, 1, 3, 7, 13};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> numSeen = {"0 52 41 20 27 25 38 51 58 7 2 59 71 48 51 10", "31 0 40 20 27 25 38 44 44 7 2 38 56 43 51 10", "49 52 0 20 27 25 38 51 53 7 2 49 65 45 51 10", "15 18 19 0 15 22 22 20 13 7 2 15 28 27 34 10", "17 34 29 20 0 25 30 29 23 7 2 24 38 32 48 10", "15 27 22 20 18 0 25 22 22 7 2 19 29 32 40 10", "23 46 36 20 27 25 0 39 35 7 2 31 51 36 51 10", "40 52 40 20 27 25 38 0 44 7 2 43 61 42 51 10", "54 52 41 20 27 25 38 51 0 7 2 53 67 46 51 10", "10 9 17 20 15 13 13 16 10 0 2 14 19 18 25 10", "0 1 5 6 6 0 2 8 5 2 0 6 8 9 9 1", "55 52 41 20 27 25 38 51 58 7 2 0 80 57 51 10", "55 52 41 20 27 25 38 51 58 7 2 65 0 54 51 10", "55 52 41 20 27 25 38 51 58 7 2 69 80 0 51 10", "17 39 29 20 27 25 32 37 31 7 2 29 45 33 0 10", "7 3 12 12 6 6 5 9 6 6 2 6 17 12 17 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 0 8 30 11 30 36 33 25 29 43 43 35 14 61 45", "8 0 8 11 10 3 11 12 14 4 14 14 10 9 13 9", "6 0 0 5 6 3 3 9 5 4 7 9 4 0 8 8", "32 0 8 0 11 22 29 32 25 27 32 32 24 14 47 37", "15 0 8 14 0 9 20 19 17 8 21 15 15 9 16 12", "33 0 8 30 11 0 36 32 25 28 36 32 31 14 47 41", "33 0 8 30 11 30 0 32 25 29 38 38 32 14 52 41", "28 0 8 27 11 17 26 0 25 24 31 27 21 14 38 35", "21 0 8 18 11 12 26 23 0 15 22 19 16 12 25 21", "35 0 8 30 11 30 36 32 25 0 55 52 39 14 66 48", "35 0 8 30 11 30 36 32 25 46 0 58 39 14 76 56", "35 0 8 30 11 30 36 32 25 46 74 0 39 14 76 56", "35 0 8 30 11 30 36 32 25 38 49 43 0 14 66 46", "21 0 8 23 11 17 26 27 25 18 28 23 16 0 34 27", "35 0 8 30 11 30 36 32 25 46 69 58 39 14 0 56", "35 0 8 30 11 30 36 32 25 46 64 56 39 14 71 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 34 32 25 53 24 55 55 1 59 22 52 48 21 6 32", "28 0 28 25 37 24 38 35 1 38 22 33 37 21 6 24", "29 34 0 25 39 24 38 37 1 42 22 33 42 21 6 29", "25 25 20 0 35 24 32 26 1 30 22 26 30 21 6 16", "52 34 32 25 0 24 59 55 1 64 22 71 50 21 6 32", "17 25 17 25 30 0 31 22 1 22 22 23 22 21 6 14", "52 34 32 25 60 24 0 55 1 64 22 56 49 21 6 32", "43 34 32 25 49 24 49 0 1 51 22 46 43 21 6 32", "3 4 0 7 9 6 4 1 0 6 6 3 8 8 4 7", "52 34 32 25 56 24 55 55 1 0 22 51 49 21 6 32", "17 17 14 23 22 20 23 20 1 20 0 16 13 21 6 14", "52 34 32 25 67 24 59 55 1 64 22 0 50 21 6 32", "52 34 32 25 66 24 59 55 1 64 22 65 0 21 6 32", "9 8 9 17 16 16 14 14 1 14 21 8 11 0 6 13", "5 4 7 12 12 8 9 9 1 13 12 4 11 17 0 10", "34 34 32 25 41 24 45 46 1 49 22 38 42 21 6 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> numSeen = {"0 9 39 33 41 9 25 21 35 16 34 56 51 41 17 37", "10 0 10 10 16 9 5 4 12 9 10 16 6 1 10 8", "40 9 0 33 49 9 25 21 52 16 45 64 56 41 17 46", "27 9 30 0 32 9 23 21 26 16 17 43 27 27 17 21", "40 9 47 33 0 9 25 21 44 16 41 58 56 41 17 37", "6 5 2 2 9 0 0 3 6 4 4 7 6 0 7 2", "28 9 37 33 33 9 0 21 27 16 21 47 36 35 17 24", "21 9 23 25 28 9 17 0 22 16 11 34 22 21 17 21", "40 9 48 33 49 9 25 21 0 16 59 74 72 41 18 50", "20 9 15 21 19 9 13 19 17 0 10 28 13 12 17 13", "40 9 48 33 49 9 25 21 60 16 0 75 81 41 17 50", "40 9 48 33 49 9 25 21 60 16 62 0 78 41 17 50", "40 9 48 33 49 9 25 21 60 16 62 75 0 41 17 50", "31 9 38 33 36 9 25 21 30 16 26 56 42 0 17 29", "17 9 14 12 17 9 5 10 16 15 10 22 12 4 0 9", "40 9 48 33 49 9 25 21 53 16 53 66 64 41 17 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> numSeen = {"0 6 13 6 10 11 9 11 5 6 12 13 4 4 10 9", "2 0 18 37 30 47 27 58 5 51 71 39 10 30 76 32", "2 6 0 12 10 16 16 19 5 12 20 13 4 5 18 14", "2 26 18 0 19 30 27 32 5 33 44 33 10 23 47 32", "2 33 18 37 0 47 27 46 5 42 65 39 10 30 61 32", "2 33 18 37 26 0 27 43 5 42 56 39 10 30 59 32", "2 20 18 20 13 23 0 24 5 24 29 25 10 16 31 24", "2 43 18 37 30 47 27 0 5 46 71 39 10 30 71 32", "0 6 4 5 3 9 2 2 0 5 9 5 4 3 1 6", "2 52 18 37 30 47 27 58 5 0 71 39 10 30 77 32", "2 38 18 37 30 47 27 53 5 45 0 39 10 30 62 32", "2 31 18 37 24 39 27 42 5 41 54 0 10 30 52 32", "2 12 18 19 11 18 18 20 5 19 24 21 0 14 22 16", "2 30 18 37 22 36 27 39 5 40 50 38 10 0 52 32", "2 45 18 37 30 47 27 58 5 49 71 39 10 30 0 32", "2 21 18 28 13 30 27 26 5 32 38 27 10 20 38 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> numSeen = {"0 61 37 11 47 39 7 40 2 71 46 14 60 31 44 23", "67 0 37 11 47 39 7 40 2 70 46 14 60 31 44 23", "34 28 0 11 28 29 7 25 2 27 39 14 27 10 27 23", "24 22 23 0 20 26 7 15 2 20 25 14 17 5 27 21", "47 51 37 11 0 39 7 40 2 46 46 14 45 26 40 23", "42 39 37 11 41 0 7 31 2 33 46 14 37 21 39 23", "9 9 12 4 15 8 0 6 2 11 11 14 8 3 11 5", "42 45 37 11 44 39 7 0 2 42 46 14 44 24 39 23", "0 1 6 3 9 3 0 4 0 5 8 8 1 1 6 4", "76 61 37 11 47 39 7 40 2 0 46 14 60 31 45 23", "40 35 37 11 35 33 7 31 2 30 0 14 32 13 36 23", "15 14 18 5 18 17 7 6 2 14 19 0 11 5 18 12", "64 61 37 11 47 39 7 40 2 68 46 14 0 31 44 23", "53 52 37 11 47 39 7 40 2 52 46 14 49 0 40 23", "60 53 37 11 47 39 7 40 2 59 46 14 56 31 0 23", "26 22 32 11 21 29 7 23 2 24 33 14 19 9 27 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> numSeen = {"0 72 14 48 24 38 10 68 50 47 27 3 50 37 31 16", "65 0 14 56 24 38 10 68 50 47 27 3 50 37 31 16", "17 27 0 14 23 15 10 26 14 14 24 3 14 20 22 16", "65 77 14 0 24 38 10 68 50 47 27 3 50 37 31 16", "25 41 14 14 0 25 10 43 26 24 25 3 32 32 31 16", "34 48 14 29 24 0 10 66 36 39 27 3 42 37 31 16", "13 13 3 12 11 7 0 13 9 8 13 3 7 11 14 16", "43 54 14 35 24 38 10 0 45 43 27 3 43 37 31 16", "62 65 14 47 24 38 10 68 0 47 27 3 50 37 31 16", "52 54 14 42 24 38 10 68 45 0 27 3 43 37 31 16", "26 41 14 18 24 27 10 50 27 27 0 3 32 33 31 16", "4 6 1 4 4 5 4 6 4 4 7 0 2 2 6 9", "57 59 14 47 24 38 10 68 45 47 27 3 0 37 31 16", "30 47 14 21 24 30 10 58 30 33 27 3 34 0 31 16", "18 36 14 15 23 24 10 34 23 22 25 3 23 26 0 16", "16 21 8 13 18 15 10 19 11 13 22 3 13 20 19 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> numSeen = {"0 10 9 9 6 17 12 5 13 7 7 7 5 7 16 6", "12 0 14 12 6 26 20 9 19 12 9 15 14 15 19 11", "12 17 0 20 6 48 44 45 39 47 27 16 38 50 31 44", "12 17 22 0 6 34 32 23 28 26 20 16 24 27 31 22", "9 8 2 9 0 8 6 0 7 1 0 4 2 0 9 6", "12 17 36 20 6 0 37 34 32 33 27 16 35 33 31 40", "12 17 37 20 6 48 0 35 35 38 27 16 36 35 31 41", "12 17 46 20 6 48 44 0 54 53 27 16 38 62 31 60", "12 17 46 20 6 48 44 58 0 53 27 16 38 62 31 60", "12 17 46 20 6 48 44 48 41 0 27 16 38 53 31 53", "12 17 29 20 6 41 32 32 32 30 0 16 30 28 31 31", "12 17 19 19 6 26 22 13 19 14 12 0 16 22 28 19", "12 17 43 20 6 48 44 41 35 44 27 16 0 44 31 41", "12 17 46 20 6 49 44 58 55 53 27 16 38 0 31 60", "12 17 21 20 6 26 25 14 20 20 12 16 21 27 0 22", "12 17 46 20 6 48 44 57 46 53 27 16 38 61 31 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> numSeen = {"0 30 13 76 50 58 11 5 65 40 40 28 42 34 7 28", "25 0 13 32 21 27 11 5 31 23 29 28 17 26 7 22", "21 18 0 19 14 23 11 5 21 12 21 26 8 11 7 17", "60 30 13 0 55 58 11 5 65 40 40 28 42 34 7 28", "60 30 13 76 0 58 11 5 65 40 40 28 42 34 7 28", "60 30 13 76 59 0 11 5 65 40 40 28 42 34 7 28", "12 15 10 17 5 16 0 5 20 9 17 19 8 10 7 16", "0 7 0 1 4 2 3 0 9 9 5 6 6 2 5 7", "56 30 13 67 41 55 11 5 0 40 40 28 42 34 7 28", "52 30 13 58 35 47 11 5 60 0 40 28 42 34 7 28", "35 30 13 45 29 38 11 5 46 35 0 28 33 34 8 28", "23 22 13 26 14 27 11 5 25 19 28 0 17 20 7 22", "44 30 13 50 29 45 11 5 53 37 40 28 0 34 7 28", "33 30 13 32 22 30 11 5 37 31 33 28 18 0 7 28", "8 12 1 8 5 9 6 5 11 9 12 10 8 2 0 12", "34 30 13 40 27 31 11 5 46 32 34 28 27 34 7 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> numSeen = {"0 70 51 75 56 34 55 26 7 53 42 2 12 58 14 14", "58 0 51 52 47 34 38 26 7 45 42 2 12 48 14 14", "56 61 0 46 38 34 36 26 7 43 42 2 12 41 14 14", "75 70 51 0 56 34 50 26 7 53 42 2 12 58 14 14", "73 70 51 69 0 34 50 26 7 53 42 2 12 59 14 14", "43 44 38 34 30 0 24 26 7 34 39 2 12 24 14 14", "78 70 51 75 56 34 0 26 7 53 42 2 12 58 14 14", "33 27 27 22 19 26 16 0 7 27 25 2 12 16 14 14", "24 23 18 22 15 21 14 23 0 23 22 2 12 14 14 14", "58 70 51 60 54 34 39 26 7 0 42 2 12 56 14 14", "49 53 43 41 30 34 27 26 7 38 0 2 12 33 14 14", "4 9 4 6 7 7 3 7 1 9 8 0 5 4 9 5", "37 35 33 25 25 29 17 26 7 31 30 2 0 21 14 14", "64 70 51 69 54 34 46 26 7 53 42 2 12 0 14 14", "11 11 4 9 9 11 8 15 1 10 10 2 5 6 0 11", "17 14 11 16 13 17 8 15 3 18 19 2 5 7 14 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 40 10 16 47 14 29 68 36 44 24 8 48 48 45 44", "33 0 10 16 23 14 29 43 28 28 24 8 31 44 31 30", "3 9 0 11 10 8 2 10 3 11 9 8 12 10 15 7", "11 16 10 0 13 9 10 19 9 11 16 8 16 16 16 9", "42 40 10 16 0 14 29 69 36 46 24 8 48 48 45 48", "15 19 10 16 18 0 17 28 16 19 22 8 18 24 17 18", "28 32 10 16 18 14 0 37 25 27 24 8 28 38 22 28", "42 40 10 16 51 14 29 0 36 61 24 8 55 48 45 56", "33 40 10 16 30 14 29 50 0 30 24 8 39 45 36 33", "42 40 10 16 51 14 29 79 36 0 24 8 53 48 45 56", "22 25 10 16 18 14 23 33 17 27 0 8 27 29 22 21", "2 2 9 4 8 8 1 3 3 7 2 0 3 8 6 2", "42 40 10 16 51 14 29 82 36 60 24 8 0 48 45 56", "34 40 10 16 39 14 29 54 36 39 24 8 39 0 39 37", "42 40 10 16 42 14 29 61 36 44 24 8 45 48 0 37", "42 40 10 16 51 14 29 72 36 52 24 8 52 48 45 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> numSeen = {"0 5 4 4 8 0 2 7 4 3 3 6 8 2 3 8", "1 0 33 48 17 32 25 8 41 24 17 35 60 47 53 70", "1 63 0 39 17 32 25 8 41 24 17 35 55 22 33 55", "1 83 33 0 17 32 25 8 41 24 17 36 60 46 53 70", "1 19 12 10 0 9 6 8 20 15 17 16 21 7 14 26", "1 69 33 40 17 0 25 8 41 24 17 35 56 28 34 61", "1 48 29 26 17 31 0 8 41 24 17 30 41 15 30 47", "1 11 10 8 11 1 5 0 12 11 11 10 16 2 6 17", "1 39 29 19 17 30 23 8 0 24 17 29 39 13 22 39", "1 30 24 18 17 21 14 8 34 0 17 25 30 12 16 30", "1 26 20 11 17 15 14 8 27 20 0 17 23 9 16 29", "2 54 29 34 17 31 25 8 41 24 17 0 50 20 30 54", "1 70 33 41 17 32 25 8 41 24 17 35 0 33 40 66", "1 86 33 48 17 32 25 8 41 24 17 35 60 0 53 70", "1 79 33 48 17 32 25 8 41 24 17 35 60 45 0 70", "1 72 33 45 17 32 25 8 41 24 17 35 60 41 49 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> numSeen = {"0 8 16 10 16 19 21 15 16 18 8 10 21 5 7 25", "19 0 31 19 23 30 24 26 18 25 20 18 38 5 7 31", "19 18 0 26 26 66 48 62 18 55 59 44 48 5 7 88", "19 18 45 0 26 40 34 34 18 37 37 33 46 5 7 44", "19 18 39 20 0 37 29 31 18 31 28 26 38 5 7 38", "19 18 64 26 26 0 48 59 18 55 59 44 48 5 7 77", "19 18 58 26 26 53 0 53 18 55 50 44 48 5 7 67", "19 18 68 26 26 66 48 0 18 55 59 44 48 5 7 85", "19 11 24 19 21 22 24 23 0 21 13 13 29 5 7 31", "19 18 53 26 26 47 42 37 18 0 43 43 48 5 7 56", "19 18 58 26 26 59 48 54 18 55 0 44 48 5 7 76", "19 18 53 26 26 47 48 45 18 55 50 0 48 5 7 63", "19 18 45 26 26 47 36 34 18 46 39 41 0 5 7 51", "6 7 5 0 4 6 4 3 7 8 3 3 8 0 6 8", "11 8 10 2 12 12 12 6 14 16 8 9 12 5 0 16", "19 18 76 26 26 66 48 61 18 55 59 44 48 5 7 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> numSeen = {"0 5 10 14 12 7 9 15 4 6 12 14 2 5 10 16", "4 0 3 9 7 3 0 7 0 1 8 7 1 3 3 9", "4 5 0 14 13 11 14 15 6 11 14 15 2 14 13 21", "4 5 13 0 23 24 21 56 41 36 47 50 5 64 38 52", "4 5 13 31 0 24 20 39 19 23 32 26 5 34 30 34", "4 5 13 22 23 0 20 32 11 17 27 23 5 27 24 29", "4 5 13 32 23 24 0 45 21 26 40 33 5 38 32 42", "4 5 13 42 23 24 21 0 35 34 42 47 5 57 38 52", "4 5 13 46 23 24 21 56 0 53 56 59 5 67 38 52", "4 5 13 46 23 24 21 56 59 0 57 59 5 67 38 52", "4 5 13 46 23 24 21 56 59 62 0 59 5 67 38 52", "4 5 13 46 23 24 21 56 54 48 52 0 5 67 38 53", "4 5 13 16 15 18 19 23 7 14 23 18 0 18 17 21", "4 5 13 46 23 24 21 56 50 43 49 58 5 0 38 52", "4 5 13 39 23 24 21 46 29 26 40 40 5 45 0 46", "4 5 13 41 23 24 21 53 30 27 41 47 5 54 38 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> numSeen = {"0 24 34 2 34 51 47 46 32 28 25 18 6 21 32 34", "22 0 31 2 30 42 35 28 20 28 25 18 6 13 24 26", "30 24 0 2 50 83 55 70 45 28 25 18 6 43 47 34", "6 7 1 0 2 9 4 8 3 4 5 9 3 0 7 2", "30 24 42 2 0 58 55 59 42 28 25 18 6 31 35 34", "30 24 58 2 50 0 55 70 45 28 25 18 6 42 46 34", "30 24 40 2 43 55 0 51 33 28 25 18 6 23 33 34", "30 24 56 2 50 75 55 0 45 28 25 18 6 42 46 34", "30 24 47 2 50 67 55 61 0 28 25 18 6 34 40 34", "19 20 22 2 22 38 32 20 14 0 25 18 6 12 22 21", "16 16 17 2 13 29 23 19 12 26 0 18 6 8 19 14", "12 7 9 2 8 15 6 9 3 13 11 0 6 6 7 5", "12 11 11 2 13 20 14 12 12 22 16 18 0 6 15 13", "30 24 50 2 50 67 55 61 45 28 25 18 6 0 40 34", "30 24 61 2 50 83 55 70 45 28 25 18 6 42 0 34", "27 24 31 2 30 43 38 37 24 28 25 18 6 14 29 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 29 21 37 25 18 24 15 21 15 21 8 2 24 14 27", "22 0 35 47 33 18 53 22 47 15 45 8 2 46 48 45", "22 57 0 47 33 18 68 22 54 15 61 8 2 46 56 45", "22 38 25 0 33 18 36 22 40 15 28 8 2 42 25 45", "22 32 22 38 0 18 29 21 26 15 23 8 2 33 19 36", "20 17 13 25 12 0 11 5 11 14 21 8 2 23 7 10", "22 57 42 47 33 18 0 22 55 15 55 8 2 46 56 45", "22 39 25 47 33 18 43 0 47 15 37 8 2 45 30 45", "22 57 41 47 33 18 65 22 0 15 49 8 2 46 56 45", "21 21 21 30 19 18 19 7 12 0 21 8 2 24 9 19", "22 57 50 47 33 18 68 22 54 15 0 8 2 46 56 45", "15 8 7 18 8 10 8 3 2 7 14 0 2 18 2 8", "8 0 7 9 6 5 6 2 2 3 8 7 0 9 1 6", "22 48 34 47 33 18 48 22 47 15 41 8 2 0 39 45", "22 57 37 47 33 18 60 22 51 15 49 8 2 46 0 45", "22 36 24 39 33 18 36 21 34 15 26 8 2 34 25 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 38 63 10 31 19 56 12 51 19 54 49 60 32 62 5", "32 0 35 10 31 19 35 12 34 19 46 34 38 32 41 5", "55 38 0 10 31 19 56 12 51 19 54 49 57 32 53 5", "6 13 9 0 8 6 14 9 9 14 16 7 10 13 12 5", "26 32 35 10 0 19 35 12 29 19 40 33 31 32 39 5", "19 22 30 10 24 0 25 12 21 19 27 23 29 26 35 5", "51 38 61 10 31 19 0 12 51 19 54 49 49 32 45 5", "11 15 22 10 19 10 22 0 18 19 24 21 20 25 26 5", "41 38 47 10 31 19 42 12 0 19 54 45 43 32 45 5", "6 15 17 10 12 7 17 11 17 0 17 12 15 22 19 5", "35 38 42 10 31 19 38 12 43 19 0 36 39 32 43 5", "47 38 52 10 31 19 51 12 51 19 54 0 44 32 45 5", "63 38 63 10 31 19 56 12 51 19 54 49 0 32 58 5", "26 25 30 10 31 19 30 12 21 19 31 24 31 0 35 5", "72 38 63 10 31 19 56 12 51 19 54 50 60 32 0 5", "0 5 3 9 5 0 7 4 6 9 8 1 4 7 8 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> numSeen = {"0 10 17 7 23 15 8 19 24 18 17 17 8 6 15 10", "5 0 29 7 63 48 23 55 70 46 23 54 46 12 35 10", "5 33 0 7 45 29 22 45 46 39 23 40 30 12 35 10", "2 3 2 0 9 5 2 9 8 7 7 9 0 5 5 7", "5 47 29 7 0 60 22 63 91 46 23 68 46 12 35 10", "5 47 29 7 70 0 22 63 82 46 23 61 46 12 35 10", "5 23 18 7 37 26 0 31 43 33 23 24 18 12 30 10", "5 47 29 7 65 55 22 0 73 46 23 56 46 12 35 10", "5 47 29 7 71 60 22 63 0 46 23 62 46 12 35 10", "5 37 29 7 50 38 22 52 55 0 23 49 39 12 35 10", "5 15 18 7 30 26 18 23 34 27 0 18 10 12 27 10", "5 47 29 7 76 60 22 63 91 46 23 0 46 12 35 10", "5 43 29 7 55 45 22 55 62 46 23 54 0 12 35 10", "5 14 18 7 24 17 14 19 26 19 22 18 9 0 21 10", "5 30 25 7 45 26 22 38 46 36 23 33 24 12 0 10", "5 4 8 7 18 12 2 18 16 11 11 14 0 6 11 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> numSeen = {"0 12 83 78 12 28 6 51 53 5 26 52 53 42 19 61", "16 0 18 10 11 13 6 12 15 5 22 15 15 12 8 10", "61 12 0 75 12 28 6 51 53 5 26 52 53 42 19 61", "61 12 83 0 12 28 6 51 53 5 26 52 53 42 19 61", "26 12 31 19 0 21 6 30 29 5 26 29 25 19 12 24", "34 12 43 36 12 0 6 32 46 5 26 39 32 33 19 31", "8 5 14 6 9 7 0 12 11 5 16 7 9 11 4 8", "59 12 70 62 12 28 6 0 53 5 26 52 53 42 19 59", "42 12 46 37 12 28 6 32 0 5 26 44 37 39 19 35", "3 4 7 5 9 3 3 7 6 0 7 5 5 7 2 8", "22 12 25 16 11 15 6 21 20 5 0 24 16 12 8 18", "51 13 54 51 12 28 6 39 53 5 26 0 47 42 19 51", "56 12 61 59 12 28 6 42 53 5 26 52 0 42 19 55", "49 12 51 46 12 28 6 39 53 5 26 50 44 0 19 42", "31 12 38 27 12 25 6 32 38 5 26 34 26 27 0 29", "61 12 75 67 12 28 6 51 53 5 26 52 53 42 19 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> numSeen = {"0 8 4 10 5 11 5 11 7 10 16 15 11 3 13 4", "11 0 54 17 32 50 20 53 32 22 70 34 62 3 15 53", "11 63 0 17 32 50 20 69 32 22 70 34 62 3 15 56", "11 11 9 0 8 19 7 14 14 14 20 22 19 3 13 6", "11 43 44 17 0 50 20 39 32 22 60 34 62 3 15 38", "11 42 42 17 25 0 20 35 32 22 60 34 60 3 15 31", "11 35 34 17 23 41 0 31 32 22 51 34 51 3 15 23", "11 63 61 17 32 50 20 0 32 22 70 34 62 3 15 56", "11 33 32 17 19 35 16 22 0 22 43 34 48 3 15 20", "11 17 12 17 11 20 8 15 21 0 24 27 26 3 13 9", "11 54 50 17 32 50 20 53 32 22 0 34 62 3 15 50", "11 28 23 17 18 31 16 19 27 22 38 0 40 3 15 19", "11 48 50 17 32 50 20 45 32 22 69 34 0 3 15 41", "5 0 4 7 3 4 3 9 5 1 9 7 7 0 9 1", "11 26 14 17 11 28 11 17 24 22 33 28 35 3 0 10", "11 64 60 17 32 50 20 60 32 22 70 34 62 3 15 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
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
    vector<string> numSeen = {"0 2 0", "2 0 0", "4 2 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> numSeen = {"0 0 0", "1 0 0", "2 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> numSeen = {"0 1 0", "1 0 0", "1 1 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> numSeen = {"0 0 0", "0 0 0", "1 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> numSeen = {"0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0 3", "2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 2 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 0, 1};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> numSeen = {"0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1", "0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> numSeen = {"0 1 0 0", "0 0 0 0", "0 0 0 0", "0 0 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 0, 1};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> numSeen = {"0 0 0", "5 0 0", "12 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> numSeen = {"0 0 0", "2 0 0", "1 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0, 1};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> numSeen = {"0 0 0", "5 0 1", "5 5 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> numSeen = {"0 2 0 0", "0 0 0 0", "0 2 0 0", "0 3 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1, 3};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> numSeen = {"0 0 0", "2 0 0", "3 0 0"};
    ChatExit* pObj = new ChatExit();
    clock_t start = clock();
    vector<int> result = pObj->leaveOrder(numSeen);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 2};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7459326&rd=7224&pm=4614
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
 
using namespace std;
 
vector<int> itokens(string s, string sep = " \n\r\t") {
  vector<int> res;
  int start, end = 0;
  while ((start = s.find_first_not_of(sep, end)) != string::npos) {
    end = s.find_first_of(sep, start);
    res.push_back(atoi(s.substr(start, end-start).c_str()));
  }
  return res;
}
 
class ChatExit {
public:
vector <int> leaveOrder(vector <string> numSeen) {
  vector<vector<int> > ns(numSeen.size());
  for (int i = 0; i < numSeen.size(); i++)
    ns[i] = itokens(numSeen[i]);
    
  for (int i = 0; i < ns.size(); i++) {
    for (int j = 0; j < ns.size(); j++)
      ns[i][i] >?= ns[j][i];
    ns[i].push_back(i);
  }
      
  sort(ns.begin(), ns.end());
  
  vector<int> order, e;
  
  for (int i = 0; i < ns.size(); i++) {
    int j;
    for (j = i+1; j < ns.size(); j++) {
      int k;
      for (k = 0; k < ns.size(); k++)
        if (ns[j][k] < ns[i][k]) break;
      if (k < ns.size()) break;
    }
    if (j < ns.size()) return e;
    order.push_back(ns[i][ns.size()]);
  }
        
  return order;
}
};
 
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/