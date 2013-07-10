/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2999
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

class grafixGlobs {
public:
    vector<int> execute(vector<string> commands, int sel);
};

vector<int> grafixGlobs::execute(vector<string> commands, int sel) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> commands = {"make arc", "make arc", "make circle", "merge 1 0", "merge 2 1", "split 2"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> commands = {"make arc", "make arc", "make circle", "merge 1 0", "merge 2 1", "split 2"};
    int sel = 1;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> commands = {"make arc", "make arc", "make circle", "merge 1 0", "merge 2 1", "split 2"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> commands = {"make arc", "make arc", "make circle", "merge 1 0", "merge 2 1", "split 2"};
    int sel = 4;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> commands = {"make polygon", "make polygon", "make arc", "make circle", "make circle", "delete 3", "make polygon", "make arc", "make arc", "merge 1 3", "merge 1 4", "merge 2 1", "make arc", "make arc", "make circle", "make circle", "merge 6 5", "split 6", "merge 2 1"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> commands = {"make arc", "delete 0", "make polygon", "make polygon", "merge 0 1", "make arc", "make circle", "make arc", "merge 2 1", "make polygon", "merge 1 3", "make polygon", "make polygon", "make circle", "merge 4 5", "make circle", "make arc", "make circle", "merge 6 7", "make circle", "make circle", "make polygon", "merge 3 9", "merge 8 7", "make polygon", "make arc", "merge 9 5", "make circle", "make circle", "split 7", "merge 7 10", "make circle", "merge 5 10", "make polygon", "make polygon", "merge 10 11", "make circle", "make circle", "make arc", "make polygon", "merge 11 13", "make polygon", "make polygon", "make circle", "make arc", "make polygon", "make arc", "make polygon", "merge 18 16", "make circle"};
    int sel = 19;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> commands = {"make circle", "make polygon", "delete 1", "make polygon", "make polygon", "split 1", "make polygon", "make circle", "merge 0 3", "make circle", "split 2", "merge 3 2", "make polygon", "merge 2 1", "make arc", "make polygon", "merge 1 5", "make circle", "merge 5 4", "make arc", "make arc", "merge 6 4", "make arc", "make polygon", "merge 7 4", "make arc", "make arc", "merge 8 4", "make arc", "make polygon", "merge 9 4", "make circle", "make arc", "make polygon", "merge 4 10", "make polygon", "make polygon", "merge 11 10", "make arc", "merge 10 12", "make polygon", "make polygon", "make circle", "make arc", "delete 15", "make polygon", "delete 12", "merge 13 14", "make circle", "merge 12 15"};
    int sel = 102;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> commands = {"make arc", "make polygon", "merge 0 1", "make polygon", "make polygon", "make arc", "make polygon", "make polygon", "merge 4 5", "make polygon", "merge 3 2", "merge 1 5", "make polygon", "make circle", "merge 2 5", "make circle", "make circle", "make polygon", "merge 7 6", "split 5", "make circle", "merge 5 6", "make polygon", "make arc", "merge 6 8", "make circle", "make arc", "merge 8 9", "make circle", "make arc", "merge 9 10", "make arc", "make circle", "delete 11", "delete 10", "make polygon", "make arc", "merge 11 10", "make circle", "make circle", "make arc", "merge 10 13", "make polygon", "merge 13 12", "make circle", "make circle", "make circle", "delete 14", "make arc", "make arc"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> commands = {"make arc", "make polygon", "make arc", "make polygon", "merge 2 0", "make arc", "merge 3 1", "make arc", "merge 0 1", "make arc", "make arc", "merge 4 1", "make polygon", "make arc", "make polygon", "make circle", "make polygon", "merge 6 8", "merge 1 7", "make arc", "make arc", "make polygon", "make circle", "merge 9 5", "make circle", "merge 5 10", "make arc", "merge 7 8", "make circle", "split 10", "split 10", "merge 8 10", "make arc", "make polygon", "merge 10 11", "make circle", "make circle", "merge 12 11", "make circle", "make polygon", "make polygon", "merge 13 11", "make circle", "make arc", "make polygon", "make polygon", "merge 11 15", "make circle", "make circle", "make arc"};
    int sel = 17;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> commands = {"make arc", "make polygon", "make circle", "merge 0 1", "make polygon", "make circle", "merge 2 3", "make arc", "make circle", "merge 3 1", "make circle", "merge 1 4", "make polygon", "make circle", "merge 4 5", "make circle", "make circle", "make arc", "merge 6 5", "make polygon", "merge 7 5", "make arc", "make polygon", "split 8", "merge 8 5", "make polygon", "make arc", "make arc", "merge 9 5", "make polygon", "make circle", "make circle", "merge 11 12", "make circle", "make arc", "make arc", "merge 5 14", "merge 13 12", "make arc", "delete 10", "make arc", "make arc", "make circle", "make arc", "merge 14 12", "merge 10 16", "make polygon", "make polygon", "make arc", "merge 16 15"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> commands = {"make circle", "make arc", "make arc", "merge 2 1", "make arc", "merge 1 0", "make polygon", "make arc", "merge 3 0", "make polygon", "make arc", "make circle", "merge 5 4", "make arc", "merge 4 0", "make circle", "make arc", "merge 6 0", "make polygon", "make polygon", "merge 0 7", "make arc", "make circle", "delete 8", "make arc", "merge 8 7", "make circle", "make arc", "merge 7 9", "make arc", "make polygon", "merge 10 9", "make polygon", "make circle", "make arc", "make polygon", "make circle", "make circle", "make circle", "delete 9", "merge 13 11", "merge 15 16", "make arc", "merge 12 9", "make circle", "merge 14 9", "make polygon", "make circle", "merge 11 9", "make polygon"};
    int sel = 9;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> commands = {"make circle", "make polygon", "merge 0 1", "make arc", "make circle", "split 2", "make arc", "merge 3 1", "make arc", "make arc", "make circle", "make arc", "make circle", "merge 5 1", "delete 2", "merge 7 4", "delete 6", "make polygon", "make circle", "make circle", "make circle", "merge 1 2", "split 4", "merge 2 6", "make circle", "make circle", "make polygon", "make polygon", "merge 4 9", "merge 6 8", "make polygon", "split 8", "make arc", "merge 9 8", "make polygon", "make arc", "make arc", "merge 11 10", "make circle", "make arc", "make circle", "make arc", "split 13", "merge 14 12", "make arc", "make arc", "make circle", "make circle", "make circle", "merge 13 18"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> commands = {"make polygon", "make polygon", "make circle", "merge 1 0", "make circle", "merge 0 2", "make polygon", "make arc", "make arc", "make circle", "make polygon", "make polygon", "merge 2 4", "make circle", "merge 6 5", "make circle", "merge 7 4", "make arc", "make polygon", "make arc", "make arc", "merge 5 10", "make circle", "merge 9 10", "merge 4 8", "make polygon", "merge 3 8", "make arc", "make arc", "merge 8 10", "make circle", "make arc", "make polygon", "make arc", "make polygon", "merge 11 12", "make circle", "merge 12 13", "merge 10 14", "make polygon", "make circle", "make circle", "make circle", "split 15", "merge 13 14", "make polygon", "merge 14 15", "make circle", "merge 16 15", "make circle"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> commands = {"make polygon", "make circle", "make circle", "make circle", "merge 0 2", "make arc", "merge 3 2", "make polygon", "make circle", "make arc", "merge 5 2", "merge 4 1", "make polygon", "make polygon", "make circle", "merge 1 2", "make circle", "merge 6 2", "make polygon", "make circle", "delete 2", "make arc", "make circle", "merge 2 8", "make polygon", "merge 8 7", "make arc", "make polygon", "merge 7 9", "make polygon", "make arc", "make arc", "merge 11 10", "make polygon", "make circle", "merge 10 12", "make polygon", "make arc", "merge 13 12", "make polygon", "merge 12 9", "make arc", "make polygon", "make circle", "merge 14 9", "make arc", "merge 9 15", "make arc", "make circle", "merge 16 15"};
    int sel = 162;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
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
    vector<string> commands = {"make circle", "make circle", "merge 0 1", "make circle", "make arc", "merge 2 1", "make polygon", "make circle", "merge 3 1", "make arc", "make polygon", "merge 1 4", "make polygon", "delete 4", "make polygon", "make circle", "delete 5", "make circle", "make arc", "merge 6 4", "delete 5", "make arc", "make arc", "make arc", "make arc", "make arc", "make circle", "split 7", "merge 7 5", "make circle", "merge 4 5", "make circle", "make arc", "merge 10 9", "merge 5 8", "make arc", "make circle", "merge 8 11", "make polygon", "make arc", "merge 9 12", "make polygon", "make arc", "make polygon", "merge 12 11", "make circle", "make polygon", "merge 13 14", "merge 15 11", "make circle"};
    int sel = 11;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> commands = {"make polygon", "make circle", "make circle", "make arc", "split 0", "make polygon", "merge 2 3", "merge 4 1", "make polygon", "make polygon", "make polygon", "make arc", "merge 1 6", "merge 5 3", "make circle", "merge 3 0", "make arc", "make circle", "make arc", "merge 6 7", "make circle", "make circle", "make polygon", "merge 8 7", "merge 0 9", "make circle", "make polygon", "make arc", "merge 9 10", "make arc", "merge 10 7", "make arc", "make circle", "make arc", "make arc", "make polygon", "merge 12 14", "merge 11 13", "make arc", "split 7", "merge 7 13", "make circle", "make arc", "split 14", "make circle", "merge 14 15", "make arc", "merge 15 13", "make circle", "make arc"};
    int sel = 16;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> commands = {"make arc", "make circle", "split 0", "make circle", "merge 1 2", "make arc", "make polygon", "make circle", "merge 0 4", "merge 3 2", "make polygon", "make arc", "make arc", "make polygon", "make polygon", "merge 7 6", "merge 4 2", "make polygon", "merge 2 5", "make polygon", "make arc", "merge 6 5", "make arc", "make circle", "make polygon", "merge 5 9", "make arc", "merge 8 9", "make arc", "make arc", "make polygon", "merge 10 9", "make circle", "merge 11 9", "make arc", "make arc", "make circle", "make polygon", "merge 13 14", "merge 12 9", "make arc", "make arc", "merge 9 14", "make polygon", "make circle", "make polygon", "make circle", "make arc", "delete 17", "make circle"};
    int sel = 17;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> commands = {"make arc", "make polygon", "make polygon", "make arc", "merge 3 0", "merge 1 2", "make polygon", "make polygon", "make circle", "delete 0", "merge 4 2", "make arc", "make arc", "make arc", "merge 2 0", "make circle", "merge 0 5", "make polygon", "make arc", "make polygon", "merge 6 7", "make circle", "merge 7 5", "make arc", "make arc", "make polygon", "merge 8 9", "make arc", "make arc", "delete 9", "make circle", "merge 10 9", "make circle", "merge 9 5", "make polygon", "make polygon", "merge 11 5", "make polygon", "delete 5", "make polygon", "make circle", "merge 5 12", "make circle", "make circle", "merge 12 13", "make polygon", "make arc", "merge 13 14", "make circle", "make polygon"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> commands = {"make arc", "make circle", "merge 0 1", "make circle", "make arc", "merge 2 1", "make polygon", "make arc", "make circle", "make arc", "merge 3 5", "make circle", "delete 5", "merge 1 4", "make circle", "make circle", "merge 5 4", "make polygon", "split 4", "make circle", "merge 4 6", "make circle", "make circle", "make polygon", "make arc", "merge 7 9", "merge 6 8", "make polygon", "make polygon", "merge 9 8", "make circle", "make polygon", "make arc", "make polygon", "merge 8 12", "merge 11 10", "make polygon", "make circle", "merge 10 12", "make polygon", "make polygon", "make circle", "make circle", "merge 13 14", "merge 15 12", "make polygon", "make circle", "merge 14 12", "make polygon", "make polygon"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> commands = {"make polygon", "make polygon", "make polygon", "merge 0 2", "make circle", "merge 2 1", "make arc", "make arc", "merge 3 1", "make polygon", "make polygon", "make circle", "merge 4 1", "make circle", "make arc", "split 6", "make circle", "merge 5 6", "make arc", "merge 1 6", "make polygon", "merge 7 6", "make circle", "make polygon", "delete 6", "make arc", "split 6", "merge 8 6", "make polygon", "make circle", "merge 6 9", "make circle", "make arc", "merge 9 10", "make polygon", "make arc", "merge 11 10", "make arc", "make circle", "make circle", "merge 12 10", "make arc", "make circle", "merge 13 14", "delete 10", "make circle", "make arc", "make polygon", "make polygon", "make circle"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> commands = {"make circle", "make polygon", "make circle", "merge 1 2", "make arc", "make polygon", "make polygon", "merge 2 3", "merge 0 4", "make circle", "make circle", "make circle", "make arc", "merge 6 3", "merge 5 4", "make polygon", "make polygon", "make circle", "merge 7 3", "make polygon", "merge 4 3", "make circle", "make arc", "merge 3 8", "make arc", "make arc", "merge 8 9", "make polygon", "make circle", "merge 9 10", "make arc", "make polygon", "merge 11 10", "make polygon", "make polygon", "merge 10 12", "make polygon", "make polygon", "merge 12 13", "make polygon", "make circle", "make circle", "merge 14 13", "make polygon", "make polygon", "merge 16 13", "make polygon", "split 15", "merge 15 13", "make polygon"};
    int sel = 13;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> commands = {"make arc", "make polygon", "make circle", "merge 0 2", "make circle", "merge 2 1", "make polygon", "make polygon", "merge 3 1", "make circle", "make polygon", "merge 4 1", "make arc", "make polygon", "make circle", "split 6", "make polygon", "make polygon", "make polygon", "merge 6 8", "merge 7 5", "make circle", "merge 1 5", "make polygon", "merge 9 5", "make polygon", "make polygon", "make circle", "merge 8 5", "make circle", "merge 10 5", "make arc", "make arc", "make circle", "merge 11 12", "make polygon", "merge 12 5", "make circle", "make polygon", "make circle", "make circle", "merge 13 14", "make polygon", "make polygon", "merge 5 16", "make circle", "merge 15 14", "make arc", "merge 14 16", "make polygon"};
    int sel = 16;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> commands = {"make polygon", "make polygon", "merge 0 1", "make arc", "make arc", "merge 1 2", "make polygon", "make arc", "make arc", "merge 3 4", "delete 2", "make arc", "make circle", "make arc", "make circle", "split 5", "merge 2 6", "make circle", "merge 4 5", "make arc", "make polygon", "make arc", "make polygon", "make circle", "merge 9 8", "merge 6 7", "make circle", "merge 10 7", "make circle", "merge 7 5", "make polygon", "make polygon", "make circle", "merge 8 11", "make polygon", "make polygon", "make arc", "make polygon", "make arc", "make polygon", "merge 13 15", "make polygon", "split 5", "make circle", "make polygon", "merge 5 16", "merge 15 14", "make polygon", "merge 17 11", "make polygon"};
    int sel = 18;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> commands = {"make polygon", "make polygon", "make circle", "delete 2", "merge 0 1", "make polygon", "make circle", "split 2", "merge 1 2", "make circle", "make polygon", "make circle", "merge 4 3", "make circle", "merge 3 2", "make arc", "make circle", "merge 2 5", "make polygon", "make polygon", "merge 6 5", "make circle", "make polygon", "merge 5 7", "make circle", "make polygon", "merge 7 8", "make polygon", "make circle", "merge 9 8", "make arc", "make polygon", "merge 8 10", "make polygon", "make arc", "merge 10 11", "make polygon", "make arc", "make polygon", "delete 12", "make circle", "merge 11 12", "make arc", "split 13", "delete 13", "make circle", "merge 13 12", "make polygon", "make polygon", "merge 12 14"};
    int sel = 116;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
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
    vector<string> commands = {"make circle", "make circle", "merge 1 0", "make circle", "make circle", "merge 0 2", "make circle", "make circle", "merge 3 2", "make arc", "make arc", "merge 4 2", "make circle", "split 2", "make circle", "merge 2 5", "make circle", "make polygon", "merge 5 6", "make arc", "make polygon", "merge 7 6", "make circle", "make polygon", "merge 8 6", "make polygon", "make polygon", "merge 9 6", "make polygon", "make arc", "make arc", "merge 11 6", "make polygon", "merge 10 6", "make arc", "make polygon", "make circle", "make polygon", "make circle", "make arc", "merge 6 15", "delete 13", "make polygon", "merge 16 14", "split 12", "make circle", "make polygon", "merge 13 15", "make circle", "make arc"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> commands = {"make arc", "make polygon", "merge 0 1", "make arc", "make arc", "merge 1 2", "make polygon", "make polygon", "merge 2 3", "make circle", "make circle", "make circle", "merge 3 4", "make arc", "merge 5 4", "make polygon", "make circle", "merge 4 6", "make polygon", "make circle", "merge 6 7", "make arc", "make polygon", "delete 8", "make circle", "merge 7 8", "make circle", "make arc", "merge 9 8", "make arc", "make arc", "make arc", "merge 10 8", "make circle", "make polygon", "merge 12 11", "make arc", "merge 11 8", "make polygon", "make arc", "make arc", "merge 13 8", "delete 14", "make arc", "make polygon", "merge 14 8", "make polygon", "make polygon", "make arc", "merge 8 15"};
    int sel = 16;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> commands = {"make arc", "make polygon", "merge 0 1", "make polygon", "make polygon", "make arc", "merge 1 3", "make arc", "merge 3 2", "make polygon", "make arc", "merge 4 2", "make arc", "split 2", "make polygon", "make polygon", "make polygon", "merge 5 7", "merge 6 2", "make circle", "make polygon", "make arc", "merge 8 2", "make circle", "make circle", "make arc", "merge 2 9", "make circle", "make arc", "merge 7 9", "make circle", "make arc", "make polygon", "merge 13 9", "split 12", "make circle", "delete 10", "merge 12 9", "split 11", "delete 9", "make circle", "make arc", "merge 10 9", "make circle", "make circle", "merge 9 11", "make arc", "make arc", "merge 14 11", "make polygon"};
    int sel = 11;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> commands = {"make circle", "make arc", "merge 0 1", "make polygon", "make circle", "merge 2 1", "make circle", "split 1", "make polygon", "merge 1 3", "make circle", "make polygon", "merge 4 3", "make circle", "make polygon", "make circle", "merge 5 6", "make polygon", "merge 3 6", "make circle", "make circle", "make arc", "make polygon", "make circle", "split 7", "merge 7 6", "make polygon", "merge 8 9", "merge 10 6", "make arc", "make polygon", "delete 9", "make circle", "merge 6 9", "make polygon", "split 9", "make circle", "merge 11 9", "make polygon", "make circle", "make polygon", "make polygon", "merge 13 14", "split 9", "make arc", "make circle", "make polygon", "merge 15 12", "make arc", "merge 9 14"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> commands = {"make circle", "make polygon", "merge 0 1", "make polygon", "make arc", "make arc", "make arc", "merge 2 1", "merge 3 4", "make circle", "make arc", "make polygon", "make polygon", "merge 6 4", "merge 1 5", "make circle", "make circle", "make circle", "merge 7 5", "make circle", "merge 5 4", "make circle", "make arc", "make arc", "make arc", "merge 10 9", "merge 4 8", "make polygon", "make polygon", "delete 9", "make circle", "make circle", "make polygon", "merge 9 8", "make arc", "make polygon", "make circle", "make arc", "make circle", "delete 14", "merge 13 8", "merge 15 16", "merge 11 12", "make circle", "make circle", "merge 12 8", "make arc", "make circle", "merge 14 8", "make polygon"};
    int sel = 8;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> commands = {"make circle", "make arc", "make circle", "merge 0 2", "make circle", "make arc", "merge 1 3", "make arc", "merge 2 3", "make circle", "make circle", "split 4", "merge 3 4", "make arc", "make polygon", "delete 4", "delete 5", "make polygon", "make circle", "delete 5", "make circle", "merge 4 5", "make arc", "make circle", "merge 5 6", "make arc", "make polygon", "make circle", "make arc", "merge 6 7", "delete 9", "make circle", "make circle", "merge 9 8", "make polygon", "make circle", "make circle", "make polygon", "merge 7 11", "merge 10 12", "make arc", "merge 11 8", "make polygon", "make circle", "make arc", "merge 8 13", "make polygon", "make circle", "merge 13 14", "make polygon"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> commands = {"make circle", "make polygon", "merge 1 0", "make arc", "make polygon", "make polygon", "merge 0 2", "make polygon", "make circle", "make arc", "delete 5", "merge 4 2", "make polygon", "make polygon", "split 2", "make circle", "make polygon", "merge 3 6", "merge 2 5", "make circle", "merge 7 5", "make polygon", "make arc", "merge 5 6", "make circle", "make polygon", "split 8", "make circle", "make polygon", "merge 9 6", "make arc", "make circle", "merge 10 8", "make polygon", "make arc", "make circle", "merge 8 13", "make arc", "merge 12 11", "merge 13 6", "make arc", "make circle", "make arc", "merge 14 6", "split 11", "make polygon", "make polygon", "merge 11 15", "make polygon", "make circle"};
    int sel = 16;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> commands = {"make polygon", "make circle", "make arc", "make arc", "merge 3 2", "make arc", "make polygon", "make polygon", "merge 0 5", "merge 2 1", "make polygon", "merge 1 4", "make polygon", "make circle", "delete 4", "make polygon", "make circle", "split 4", "merge 5 6", "make arc", "make polygon", "merge 6 4", "make polygon", "make polygon", "merge 8 7", "make arc", "make polygon", "delete 4", "merge 7 9", "make arc", "make polygon", "merge 9 4", "make polygon", "make arc", "merge 10 4", "make circle", "make polygon", "merge 11 4", "make polygon", "make circle", "make arc", "make polygon", "make arc", "merge 4 13", "delete 15", "make arc", "split 14", "merge 13 14", "make arc", "make arc"};
    int sel = 14;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> commands = {"make arc", "make arc", "make arc", "merge 0 1", "make polygon", "make arc", "delete 3", "delete 1", "delete 2", "make arc", "delete 1", "make circle", "make arc", "merge 2 1", "make polygon", "make arc", "make polygon", "merge 1 3", "make polygon", "merge 4 3", "make circle", "make polygon", "split 3", "make circle", "make polygon", "merge 6 3", "make circle", "merge 3 7", "delete 5", "make circle", "make polygon", "split 5", "split 5", "delete 7", "make polygon", "merge 5 7", "make circle", "make polygon", "split 7", "make arc", "make arc", "merge 9 7", "make polygon", "make arc", "merge 11 7", "make polygon", "merge 7 8", "make polygon", "make circle", "merge 10 12"};
    int sel = 8;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> commands = {"make circle", "make circle", "merge 1 0", "make circle", "make polygon", "merge 2 0", "make circle", "make arc", "make arc", "merge 4 3", "delete 0", "make circle", "make polygon", "make circle", "delete 0", "make polygon", "make circle", "make polygon", "merge 5 7", "merge 0 3", "make arc", "merge 6 3", "make arc", "make arc", "make polygon", "split 8", "delete 7", "merge 3 8", "make arc", "make polygon", "merge 8 7", "make polygon", "make polygon", "merge 9 7", "make arc", "make circle", "merge 10 7", "make arc", "make circle", "merge 7 11", "make arc", "make arc", "merge 12 11", "make arc", "make arc", "merge 11 13", "make arc", "make polygon", "delete 13", "make circle"};
    int sel = 13;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> commands = {"make arc", "make circle", "make polygon", "merge 2 0", "make polygon", "merge 1 0", "make polygon", "make polygon", "merge 3 0", "make polygon", "make circle", "merge 4 0", "make arc", "make polygon", "merge 0 5", "make polygon", "make polygon", "merge 5 6", "make arc", "make circle", "make circle", "merge 7 6", "make circle", "merge 8 6", "make circle", "make polygon", "merge 9 6", "make polygon", "make circle", "make circle", "make circle", "merge 12 10", "merge 11 6", "make polygon", "make polygon", "make arc", "merge 10 6", "make arc", "merge 13 6", "make circle", "make arc", "make polygon", "make circle", "merge 14 6", "make circle", "merge 6 16", "make polygon", "make arc", "delete 16", "merge 15 17"};
    int sel = 43;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> commands = {"make circle", "make polygon", "merge 0 1", "make arc", "make circle", "merge 2 1", "make polygon", "make circle", "make arc", "merge 3 4", "make polygon", "merge 1 4", "make polygon", "split 4", "make circle", "merge 5 4", "make circle", "delete 4", "make polygon", "delete 4", "make circle", "make circle", "merge 6 4", "make arc", "make polygon", "merge 4 7", "make arc", "make circle", "merge 8 7", "make circle", "make polygon", "merge 9 7", "make circle", "make circle", "split 10", "merge 7 10", "make arc", "make polygon", "merge 10 11", "make polygon", "make polygon", "make arc", "make circle", "merge 11 12", "merge 13 14", "make arc", "make polygon", "make arc", "merge 12 15", "make polygon"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> commands = {"make arc", "make circle", "make polygon", "make arc", "make polygon", "merge 0 2", "delete 4", "merge 1 3", "make polygon", "make circle", "merge 2 3", "make circle", "make polygon", "make arc", "delete 3", "merge 4 5", "make arc", "split 3", "make arc", "merge 3 5", "make arc", "make polygon", "merge 6 5", "make polygon", "make arc", "merge 7 5", "make arc", "make circle", "merge 8 5", "make arc", "make circle", "merge 5 9", "make arc", "make circle", "make circle", "make polygon", "merge 11 9", "merge 10 12", "make arc", "make arc", "merge 12 9", "make polygon", "make arc", "merge 9 13", "make circle", "make polygon", "merge 14 13", "make circle", "make circle", "merge 15 13"};
    int sel = 19;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> commands = {"make circle", "make arc", "split 1", "make polygon", "merge 0 2", "make circle", "make circle", "make circle", "make circle", "merge 3 5", "make circle", "delete 2", "merge 4 1", "make circle", "delete 5", "make arc", "make circle", "merge 2 1", "make circle", "make arc", "make circle", "make circle", "merge 7 6", "merge 8 1", "make arc", "delete 5", "make polygon", "split 5", "merge 1 5", "make arc", "make arc", "merge 5 6", "make arc", "make circle", "make arc", "split 6", "make circle", "make polygon", "merge 11 9", "merge 10 12", "make circle", "delete 9", "make polygon", "merge 9 6", "make arc", "make polygon", "merge 6 12", "make circle", "make polygon", "merge 12 13"};
    int sel = 123;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> commands = {"make polygon", "make circle", "make polygon", "merge 2 0", "make arc", "make circle", "merge 0 3", "make polygon", "make arc", "merge 3 1", "make arc", "make arc", "split 1", "merge 5 4", "make circle", "merge 1 4", "make polygon", "make circle", "merge 6 4", "make circle", "make polygon", "merge 4 7", "make circle", "make polygon", "merge 7 8", "make circle", "make polygon", "make polygon", "make arc", "merge 8 9", "merge 10 11", "make arc", "make circle", "merge 9 11", "make circle", "make circle", "make arc", "merge 13 12", "make circle", "merge 12 11", "make circle", "make polygon", "make circle", "merge 11 14", "make circle", "merge 14 15", "make arc", "make arc", "make polygon", "make arc"};
    int sel = 17;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> commands = {"make circle", "make circle", "make circle", "make polygon", "merge 3 1", "make circle", "merge 2 0", "make polygon", "make circle", "make circle", "make arc", "split 1", "merge 6 5", "merge 4 1", "make arc", "make arc", "merge 1 5", "make polygon", "make circle", "merge 5 0", "make circle", "merge 0 7", "make arc", "make arc", "merge 8 7", "make arc", "make polygon", "merge 9 7", "make arc", "make polygon", "make circle", "make polygon", "make polygon", "merge 13 11", "merge 7 12", "make polygon", "make circle", "merge 11 10", "make polygon", "split 12", "merge 12 10", "make arc", "make arc", "make arc", "merge 15 10", "make polygon", "merge 10 14", "make arc", "make polygon", "split 16"};
    int sel = 16;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> commands = {"make arc", "make arc", "merge 1 0", "make polygon", "make arc", "make polygon", "make circle", "merge 4 0", "merge 2 3", "make polygon", "make circle", "make arc", "make arc", "merge 6 3", "merge 5 0", "make arc", "make circle", "make arc", "merge 0 7", "make polygon", "merge 7 3", "make polygon", "make polygon", "make circle", "merge 8 3", "make circle", "merge 9 3", "make arc", "make circle", "make circle", "merge 11 3", "delete 10", "make polygon", "make polygon", "merge 3 10", "make polygon", "make arc", "merge 10 12", "make arc", "make arc", "merge 12 13", "make polygon", "make circle", "make polygon", "merge 15 14", "make arc", "merge 13 14", "make arc", "make arc", "merge 16 14"};
    int sel = 82;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> commands = {"make arc", "make polygon", "merge 0 1", "make circle", "make arc", "merge 2 1", "make arc", "make circle", "merge 3 1", "make circle", "make circle", "merge 4 1", "make circle", "make circle", "make arc", "make polygon", "make circle", "make polygon", "merge 8 5", "split 7", "make polygon", "make arc", "merge 1 10", "make arc", "merge 5 10", "merge 7 6", "make circle", "split 9", "delete 9", "make polygon", "make circle", "merge 6 9", "make polygon", "merge 9 10", "make polygon", "make circle", "merge 11 10", "make arc", "make circle", "merge 10 12", "make arc", "make arc", "make polygon", "make polygon", "merge 13 12", "delete 15", "make circle", "make circle", "merge 12 15", "make arc"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> commands = {"make circle", "make polygon", "merge 1 0", "make polygon", "make polygon", "merge 0 2", "make polygon", "make circle", "make polygon", "merge 3 4", "make circle", "merge 2 4", "make polygon", "make arc", "make arc", "make polygon", "merge 7 5", "make arc", "merge 4 5", "make circle", "make polygon", "make circle", "merge 8 6", "make polygon", "merge 6 9", "make polygon", "merge 9 5", "make circle", "delete 5", "make circle", "make polygon", "split 5", "merge 5 10", "make circle", "make circle", "make circle", "merge 12 10", "make circle", "split 10", "merge 11 10", "make polygon", "make polygon", "make circle", "merge 10 13", "make arc", "merge 14 13", "make circle", "make polygon", "merge 15 13", "make arc"};
    int sel = 13;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> commands = {"make arc", "delete 0", "make polygon", "make circle", "make polygon", "make arc", "make circle", "make polygon", "make polygon", "merge 2 1", "merge 5 4", "merge 3 6", "make polygon", "merge 1 0", "make circle", "make arc", "merge 0 4", "make polygon", "make circle", "merge 6 4", "make arc", "make circle", "merge 4 7", "make circle", "make circle", "make polygon", "make circle", "make arc", "make polygon", "merge 11 7", "make polygon", "merge 10 8", "make polygon", "merge 7 12", "make circle", "merge 9 12", "make circle", "merge 8 12", "make circle", "make circle", "make circle", "merge 13 14", "make polygon", "merge 14 12", "make arc", "make polygon", "make polygon", "make arc", "make circle", "merge 17 18"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> commands = {"make circle", "make arc", "make polygon", "make arc", "make polygon", "merge 3 2", "make polygon", "merge 0 1", "merge 4 2", "make circle", "make arc", "make polygon", "make arc", "merge 1 2", "merge 6 5", "make arc", "make arc", "merge 5 2", "make arc", "make polygon", "merge 7 2", "make polygon", "make arc", "make polygon", "merge 8 2", "make polygon", "merge 9 2", "make circle", "make arc", "merge 2 10", "make arc", "make arc", "make polygon", "make polygon", "merge 13 11", "make circle", "make polygon", "make polygon", "make arc", "make circle", "make polygon", "make circle", "make circle", "merge 19 16", "merge 15 14", "split 18", "merge 11 10", "make polygon", "merge 10 20", "make arc"};
    int sel = 14;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> commands = {"make polygon", "make polygon", "merge 0 1", "make circle", "make circle", "split 1", "make circle", "make circle", "merge 2 4", "merge 1 3", "make arc", "make polygon", "merge 3 4", "make polygon", "make arc", "split 4", "merge 5 4", "make polygon", "make polygon", "make circle", "merge 6 7", "make polygon", "make arc", "merge 8 4", "make circle", "make polygon", "merge 9 7", "make circle", "merge 4 7", "make arc", "make circle", "make polygon", "merge 11 10", "make circle", "merge 10 7", "make arc", "make arc", "merge 12 7", "make circle", "make circle", "merge 7 13", "make arc", "make circle", "make circle", "make polygon", "merge 14 13", "make arc", "merge 13 15", "make polygon", "merge 15 16"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> commands = {"make circle", "split 0", "make arc", "merge 0 1", "make polygon", "split 1", "make circle", "merge 1 2", "make polygon", "make polygon", "delete 3", "make polygon", "merge 3 2", "make circle", "make arc", "merge 4 2", "make circle", "make circle", "make polygon", "merge 2 5", "make arc", "merge 6 5", "make arc", "make circle", "merge 5 7", "make circle", "make arc", "merge 7 8", "make arc", "make circle", "make polygon", "merge 8 9", "make polygon", "merge 10 9", "make polygon", "make polygon", "merge 9 11", "make circle", "make circle", "merge 11 12", "make polygon", "make polygon", "make polygon", "merge 14 12", "make arc", "make polygon", "merge 13 12", "make arc", "merge 15 12", "make polygon"};
    int sel = 12;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> commands = {"make polygon", "make circle", "make circle", "make polygon", "merge 2 1", "make circle", "make circle", "make polygon", "make arc", "make polygon", "merge 7 5", "make arc", "merge 4 6", "merge 5 0", "make polygon", "delete 0", "merge 1 3", "make circle", "make circle", "make circle", "merge 6 0", "make circle", "merge 0 3", "make arc", "make arc", "make arc", "split 3", "merge 3 9", "make polygon", "make circle", "make arc", "make arc", "make polygon", "merge 8 10", "merge 12 9", "split 13", "merge 9 11", "make arc", "make circle", "make circle", "merge 10 13", "make arc", "make circle", "merge 11 13", "split 14", "make circle", "merge 13 14", "make arc", "make circle", "make arc"};
    int sel = 15;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> commands = {"make circle", "make circle", "make arc", "merge 0 2", "make arc", "merge 1 2", "make polygon", "make polygon", "make arc", "make circle", "make circle", "merge 2 5", "merge 3 6", "make circle", "merge 5 4", "make arc", "make polygon", "merge 4 6", "make polygon", "make circle", "merge 6 7", "make circle", "make circle", "make arc", "make circle", "merge 8 9", "merge 7 10", "make polygon", "make arc", "make arc", "merge 11 9", "make arc", "make circle", "split 9", "merge 12 9", "make arc", "merge 9 10", "make polygon", "make arc", "make circle", "merge 10 14", "make circle", "split 13", "merge 14 13", "make polygon", "make polygon", "merge 15 13", "make polygon", "make circle", "merge 13 16"};
    int sel = 6;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> commands = {"make polygon", "make circle", "merge 1 0", "make circle", "make circle", "merge 0 2", "make circle", "make polygon", "merge 2 3", "make arc", "make polygon", "split 3", "merge 4 3", "make polygon", "make polygon", "merge 3 5", "make circle", "make circle", "merge 6 5", "make arc", "make arc", "merge 7 5", "make polygon", "make circle", "split 8", "make arc", "split 8", "merge 8 9", "make circle", "make polygon", "merge 10 5", "make arc", "merge 9 5", "make polygon", "make arc", "merge 11 5", "make circle", "make circle", "merge 5 12", "make polygon", "make polygon", "merge 12 13", "make arc", "split 13", "make arc", "make circle", "make circle", "merge 14 13", "make arc", "make circle"};
    int sel = 16;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> commands = {"make polygon", "make circle", "make polygon", "merge 0 1", "merge 2 0", "split 2"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> commands = {"make circle", "make circle", "make arc", "merge 2 1", "delete 0", "split 2", "delete 0", "make polygon"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> commands = {"make circle", "make circle", "make arc", "merge 2 1", "delete 0", "split 2", "delete 0", "make polygon"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> commands = {"make arc"};
    int sel = 999;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> commands = {"make polygon", "make polygon", "make arc", "make circle", "make circle", "delete 3", "make polygon", "make arc", "make arc", "merge 1 3", "merge 1 4", "merge 2 1", "make arc", "make arc", "make circle", "make circle", "merge 6 5", "split 6", "merge 2 1"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> commands = {"make polygon", "make polygon", "make arc", "make circle", "make circle", "delete 3", "make polygon", "make arc", "make arc", "merge 1 3", "merge 1 4", "merge 2 1", "make arc", "make arc", "make circle", "make circle", "merge 6 5", "split 6", "merge 2 1"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 2};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> commands = {"make polygon", "make circle", "make polygon", "merge 0 1", "merge 2 0", "split 2"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> commands = {"make circle", "make circle", "make arc", "merge 2 1", "delete 0", "split 2", "delete 0", "make polygon"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> commands = {"make polygon", "make circle", "make polygon", "merge 0 1", "merge 2 0", "split 2"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> commands = {"make arc", "split 0"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> commands = {"make polygon", "make circle", "make polygon", "split 0"};
    int sel = 3;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> commands = {"make arc", "make arc", "split 0"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> commands = {"make arc", "make circle", "make polygon", "merge 0 1", "split 0"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> commands = {"make polygon", "make circle", "make arc", "merge 1 2", "split 1"};
    int sel = 1;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> commands = {"make polygon", "make circle", "make polygon", "make arc", "make arc", "make polygon", "make circle", "merge 2 5", "merge 2 6", "split 2"};
    int sel = 2;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> commands = {"make circle", "split 0"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> commands = {"make arc"};
    int sel = 999;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
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
    vector<string> commands = {"make arc", "make polygon", "make circle", "merge 0 2", "split 0"};
    int sel = 0;
    grafixGlobs* pObj = new grafixGlobs();
    clock_t start = clock();
    vector<int> result = pObj->execute(commands, sel);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8358583&rd=5857&pm=2999
********************************************************************************
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <queue>
#include <set>
 
using namespace std;
 
// TYPEDEFS and CONSTANTS
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef pair<int, int> PII, Point;
 
typedef long double ld;
typedef long long ll;
typedef signed long long i64;
typedef unsigned long long u64;
 
const ld Pi=3.14159265358979323846;
const ld EPSILON = 1e-12;
const int INF = 0x7fffffff;
 
 
// MACROS
 
#define Pn cout<<endl;
#define Pr(x) cout<<#x"="<<(x)<<" ";
#define Prn(x) cout<<#x"="<<(x)<<endl;
#define Prt(x) cout<<#x"="<<(x?"true":"false")<<" ";
#define Prtn(x) cout<<#x"="<<(x?"true":"false")<<" "<<endl;
#define PRINT(x) cout<<#x"={ ";copy(x.begin(),x.end(),ostream_iterator<__typeof(*x.begin())>(cout," "));cout<<"}"<<endl;
 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define REPD(i,n) for(int i=(n)-1;i>=0;--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
template <class T> void SWAP(T &x, T &y) {T z=x; x=y; y=z;}
 
#define PB push_back
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define SORT(x) stable_sort(ALL(x))
#define SUM(x) accumulate(ALL(x),0)
#define COUNT(x,y) count(ALL(x),y)
 
 
 
class grafixGlobs { 
    public: 
    vector <int> execute(vector <string> commands, int sel) 
    { 
    int nc  =  commands.size();
    string tc;
    string obj;
    int tid1, tid2;
    bool inUse[10000];
    int nO[10000][3];
    REP(i, 10000) nO[i][0]  =  nO[i][1]  =  nO[i][2]  =  0;
    REP(i, 10000) inUse[i]=false;
    REP(i, nc) {
      stringstream bla(commands[i]);
      bla>>tc;
      if(tc=="make") {
        bla>>obj;
        REP(k, 10000) {
          if(!inUse[k]) {
            inUse[k]  =  true;
            nO[k][0]  =  nO[k][1]  =  nO[k][2]  =  0;
            if(obj=="polygon") {
              nO[k][2]=1;
            }else if(obj=="circle") {
              nO[k][1]=1;
            }else if(obj=="arc") {
              nO[k][0]=1;
            }
            break;
          }
        }
      }
      else if(tc=="merge") {
        bla>>tid1>>tid2;
        nO[tid1][0]+=nO[tid2][0];
        nO[tid1][1]+=nO[tid2][1];
        nO[tid1][2]+=nO[tid2][2];
        inUse[tid2]  =  false;
      } else if(tc=="delete") {
        bla >> tid1;
        inUse[tid1]  =  false;
      } else if(tc=="split") {
        bla>>tid1;
        int t0  =  nO[tid1][0];
        int t1  =  nO[tid1][1];
        int t2  =  nO[tid1][2];
        inUse[tid1]  =  false;
        nO[tid1][0]  =  nO[tid1][1]  =  nO[tid1][2]  =  0;
        int k=0;
        while(t0>0) {
          while(inUse[k]) ++k;
          inUse[k]  =  true;
          nO[k][0]  =  1;
          nO[k][1]  =  0;
          nO[k][2]  =  0;
          --t0;
        }
        while(t1>0) {
          while(inUse[k]) ++k;
          inUse[k]  =  true;
          nO[k][0]  =  0;
          nO[k][1]  =  1;
          nO[k][2]  =  0;
          --t1;
        }
        while(t2>0) {
          while(inUse[k]) ++k;
          inUse[k]  =  true;
          nO[k][0]  =  0;
          nO[k][1]  =  0;
          nO[k][2]  =  1;
          --t2;
        }
      }
    }
    vector<int> res;
    if(inUse[sel]) {
        res.PB(nO[sel][0]);
        res.PB(nO[sel][1]);
        res.PB(nO[sel][2]);
    }
    return res;
    } 
    
 
    }; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/