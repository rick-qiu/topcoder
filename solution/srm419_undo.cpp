/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10054
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

class Undo {
public:
    string getText(vector<string> commands, vector<int> time);
};

string Undo::getText(vector<string> commands, vector<int> time) {
    string ret;
    return ret;
}


int test0() {
    vector<string> commands = {"type a", "type b", "type c", "undo 3"};
    vector<int> time = {1, 2, 3, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> commands = {"type a", "type b", "undo 2", "undo 2"};
    vector<int> time = {1, 2, 3, 4};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> commands = {"type a", "undo 1", "undo 1"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10"};
    vector<int> time = {1, 2, 3, 1000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> commands = {"undo 1"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> commands = {"type a", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 49"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> commands = {"type a", "undo 1", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> commands = {"type a", "undo 1", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> commands = {"type a", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> commands = {"type a", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1", "undo 1"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> commands = {"type e", "type z", "type h", "type i", "type k", "type i", "type h", "type r", "type y", "type u", "type s", "type h", "type e", "type c", "type h", "type k", "type i"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ezhikihryushechki";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> commands = {"type i"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> commands = {"type d"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "d";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> commands = {"type g"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> commands = {"undo 1"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> commands = {"undo 1"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> commands = {"type w"};
    vector<int> time = {709};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> commands = {"type a"};
    vector<int> time = {162};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> commands = {"type y"};
    vector<int> time = {557};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> commands = {"undo 184"};
    vector<int> time = {431};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> commands = {"undo 235"};
    vector<int> time = {790};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> commands = {"type t"};
    vector<int> time = {129300153};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "t";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> commands = {"type s"};
    vector<int> time = {556203967};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "s";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> commands = {"type v"};
    vector<int> time = {576478126};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> commands = {"undo 929707708"};
    vector<int> time = {845404810};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> commands = {"type p"};
    vector<int> time = {545371077};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "p";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> commands = {"type l"};
    vector<int> time = {71188256};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> commands = {"type q"};
    vector<int> time = {264964176};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "q";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> commands = {"type n"};
    vector<int> time = {127273860};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "n";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> commands = {"type q"};
    vector<int> time = {552408809};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "q";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> commands = {"type m"};
    vector<int> time = {939884353};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "m";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> commands = {"type i", "type j"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ij";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> commands = {"type u", "undo 1"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> commands = {"type g", "type x"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "gx";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> commands = {"type n", "undo 1"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> commands = {"type u", "type o"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "uo";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> commands = {"type t", "type q"};
    vector<int> time = {3, 19};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "tq";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> commands = {"type m", "type m"};
    vector<int> time = {151, 182};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "mm";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> commands = {"type w", "undo 559"};
    vector<int> time = {146, 779};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "w";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> commands = {"undo 603", "type i"};
    vector<int> time = {844, 989};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "i";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> commands = {"type u", "type m"};
    vector<int> time = {79, 162};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "um";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> commands = {"type c", "type f"};
    vector<int> time = {428084459, 999572752};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "cf";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> commands = {"type m", "type n"};
    vector<int> time = {319910807, 960390214};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "mn";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> commands = {"undo 825618543", "type l"};
    vector<int> time = {164324038, 235147543};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> commands = {"undo 789294499", "undo 367777466"};
    vector<int> time = {36571142, 969085441};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> commands = {"type c", "type h"};
    vector<int> time = {83053244, 580269453};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ch";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> commands = {"type s", "type b"};
    vector<int> time = {449157849, 877712634};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "sb";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> commands = {"type c", "type c"};
    vector<int> time = {335010327, 795402386};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "cc";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> commands = {"type x", "type j"};
    vector<int> time = {320267400, 380905143};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "xj";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> commands = {"undo 133845870", "undo 737897709"};
    vector<int> time = {322773133, 540236808};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> commands = {"undo 159594969", "undo 962504047"};
    vector<int> time = {633156333, 759908179};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> commands = {"type f", "type i", "type g"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "fig";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> commands = {"type f", "type v", "type y"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "fvy";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> commands = {"undo 2", "type c", "undo 2"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> commands = {"undo 3", "undo 3", "type k"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "k";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> commands = {"type b", "type w", "undo 1"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> commands = {"type m", "type n", "type j"};
    vector<int> time = {409, 781, 931};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "mnj";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> commands = {"type p", "type p", "type x"};
    vector<int> time = {114, 642, 808};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ppx";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> commands = {"type g", "undo 688", "undo 826"};
    vector<int> time = {608, 806, 908};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> commands = {"undo 294", "undo 519", "undo 136"};
    vector<int> time = {1, 353, 863};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> commands = {"type f", "type m", "type v"};
    vector<int> time = {118, 203, 449};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "fmv";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> commands = {"type c", "type p", "type o"};
    vector<int> time = {382109170, 466130267, 479816363};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "cpo";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> commands = {"type m", "type k", "type y"};
    vector<int> time = {62427568, 742457490, 829873673};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "mky";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> commands = {"type e", "undo 465873346", "undo 248787200"};
    vector<int> time = {448086244, 771669996, 797057937};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> commands = {"undo 925311910", "undo 756946912", "undo 156758903"};
    vector<int> time = {198292286, 210871048, 350012866};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> commands = {"type d", "type r", "undo 831369157"};
    vector<int> time = {331930060, 832980154, 977388327};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> commands = {"type w", "type i", "type r"};
    vector<int> time = {148174444, 604459445, 895544254};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "wir";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> commands = {"type z", "type o", "type y"};
    vector<int> time = {5511227, 256786770, 744388637};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "zoy";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> commands = {"type s", "type e", "undo 420758490"};
    vector<int> time = {10436845, 220136252, 743899008};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "se";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> commands = {"undo 975175702", "undo 793015132", "undo 182477510"};
    vector<int> time = {594469261, 726984762, 774707152};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> commands = {"undo 341034307", "type d", "undo 992243612"};
    vector<int> time = {305499106, 632450708, 968604298};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> commands = {"type q", "type l", "type p", "type w", "type f"};
    vector<int> time = {1, 2, 3, 4, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "qlpwf";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> commands = {"type k", "type w", "type u", "type h", "type w"};
    vector<int> time = {1, 2, 3, 4, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "kwuhw";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> commands = {"type i", "undo 2", "undo 2", "undo 4", "undo 1"};
    vector<int> time = {1, 2, 3, 4, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> commands = {"undo 2", "type h", "undo 1", "undo 2", "undo 3"};
    vector<int> time = {1, 2, 3, 4, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> commands = {"undo 4", "undo 5", "undo 5", "undo 5", "undo 4"};
    vector<int> time = {1, 2, 3, 4, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> commands = {"type h", "type h", "type s", "type y", "type d"};
    vector<int> time = {23, 395, 540, 634, 651};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "hhsyd";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> commands = {"type s", "type z", "type d", "type c", "type t"};
    vector<int> time = {87, 244, 297, 649, 856};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "szdct";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> commands = {"undo 878", "type l", "undo 883", "type i", "undo 663"};
    vector<int> time = {54, 383, 637, 919, 925};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> commands = {"undo 764", "type i", "undo 406", "undo 995", "undo 856"};
    vector<int> time = {154, 320, 488, 660, 822};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> commands = {"type n", "type h", "type y", "type k", "type e"};
    vector<int> time = {136, 211, 289, 632, 875};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "nhyke";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> commands = {"type j", "type s", "type m", "type o", "type x"};
    vector<int> time = {182309487, 555622643, 571482213, 936336584, 980304117};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "jsmox";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> commands = {"type e", "type w", "type l", "type i", "type w"};
    vector<int> time = {155069522, 183076919, 253585532, 612196279, 717646992};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ewliw";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> commands = {"type d", "type m", "type e", "undo 485005384", "type q"};
    vector<int> time = {50455469, 189227564, 246200428, 464309976, 907963744};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "q";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> commands = {"undo 283326591", "undo 374661262", "undo 219236156", "type f", "undo 516026257"};
    vector<int> time = {65729082, 136646160, 214646796, 424512558, 983815634};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "f";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> commands = {"type j", "type o", "undo 62668486", "undo 365189199", "type q"};
    vector<int> time = {51911187, 113899767, 249549590, 447073549, 646436292};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "jq";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> commands = {"type t", "type j", "type v", "type k", "type j"};
    vector<int> time = {266827127, 520914516, 847521271, 855815245, 976935714};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "tjvkj";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> commands = {"type m", "type j", "type m", "type r", "type a"};
    vector<int> time = {158486597, 211305227, 360271372, 704909352, 937315153};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "mjmra";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> commands = {"undo 817641488", "type p", "type g", "type f", "type l"};
    vector<int> time = {115668140, 130012450, 198098790, 507375363, 906698980};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "pgfl";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> commands = {"undo 134588346", "undo 462673147", "undo 760039652", "undo 454178183", "undo 271036442"};
    vector<int> time = {261752873, 312704441, 325885010, 622549677, 624836822};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> commands = {"type f", "undo 353953230", "undo 451886688", "undo 520440406", "undo 782324867"};
    vector<int> time = {127541363, 169583012, 255108676, 259169028, 675292103};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> commands = {"type s", "type r", "type q", "type f", "type t", "type y", "type e", "type w", "type z", "type e"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "srqftyewze";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> commands = {"type t", "type t", "type b", "undo 5", "type a", "type o", "type g", "type h", "type b", "type m"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "aoghbm";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> commands = {"type n", "undo 7", "undo 6", "type b", "undo 3", "type v", "undo 9", "undo 5", "undo 1", "undo 7"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> commands = {"undo 2", "undo 8", "undo 10", "undo 2", "undo 9", "undo 9", "undo 5", "undo 1", "undo 9", "type l"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "l";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> commands = {"type m", "undo 9", "undo 4", "undo 9", "undo 4", "undo 5", "undo 7", "undo 9", "undo 4", "undo 5"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> commands = {"type y", "type o", "type h", "type w", "type i", "type w", "type w", "type a", "type r", "type f"};
    vector<int> time = {342, 367, 404, 424, 456, 551, 588, 711, 733, 928};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "yohwiwwarf";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> commands = {"type g", "type s", "type u", "type q", "type c", "type c", "type e", "type q", "type b", "type a"};
    vector<int> time = {45, 99, 241, 375, 407, 512, 554, 826, 852, 895};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "gsuqcceqba";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> commands = {"undo 517", "type g", "undo 877", "type z", "type s", "undo 751", "type y", "undo 540", "type s", "type o"};
    vector<int> time = {101, 115, 202, 342, 390, 503, 540, 600, 671, 981};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "so";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> commands = {"undo 45", "undo 701", "undo 455", "undo 65", "undo 230", "undo 237", "undo 460", "undo 597", "undo 678", "undo 51"};
    vector<int> time = {74, 328, 333, 509, 637, 699, 749, 795, 866, 930};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> commands = {"undo 954", "undo 568", "type e", "undo 543", "type p", "undo 145", "type o", "undo 176", "undo 31", "undo 475"};
    vector<int> time = {41, 229, 306, 442, 491, 576, 694, 765, 778, 862};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> commands = {"type e", "type s", "type b", "type w", "type y", "type s", "type r", "type w", "type e", "type h"};
    vector<int> time = {235959124, 247379309, 541487020, 561835118, 600717721, 705956919, 765831844, 793495684, 866375858, 954724037};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "esbwysrweh";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> commands = {"type x", "type n", "type w", "type o", "undo 818260188", "type b", "type o", "undo 143991676", "type k", "type m"};
    vector<int> time = {42660387, 49577098, 96471660, 330110591, 508798077, 640683148, 774201361, 833913886, 860143696, 982237432};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "bkm";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> commands = {"undo 638472115", "undo 140497302", "undo 435187310", "type j", "type m", "undo 519147714", "undo 740256766", "undo 578650209", "undo 879222510", "undo 401540733"};
    vector<int> time = {4433182, 100446237, 178972521, 572860594, 710740369, 789086058, 822650146, 844522930, 881664699, 922469661};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> commands = {"undo 213772074", "undo 779737852", "undo 26878266", "undo 869075790", "undo 166752088", "undo 865566053", "undo 327894873", "undo 377202906", "type j", "undo 580164007"};
    vector<int> time = {194451196, 201424463, 220614570, 255852516, 445075418, 547691847, 555262357, 578174855, 728602616, 825269210};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> commands = {"undo 959299346", "type h", "undo 336689688", "undo 659372137", "undo 241096969", "type n", "undo 99123835", "undo 968821576", "undo 61515390", "undo 429386150"};
    vector<int> time = {54355212, 212305176, 351454120, 393609119, 608705031, 673028825, 849144474, 957487337, 986346973, 993709690};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> commands = {"type b", "type c", "type e", "type t", "type m", "type h", "type p", "type b", "type d", "type g"};
    vector<int> time = {31170008, 66623909, 73773706, 207833264, 274860826, 351022811, 442135967, 574950163, 653091052, 781945587};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "bcetmhpbdg";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> commands = {"type f", "type r", "type f", "type v", "type k", "type g", "type c", "type h", "type s", "type f"};
    vector<int> time = {61951515, 141739334, 148723623, 178322218, 240931541, 332135809, 341603577, 487579622, 538266945, 683429406};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "frfvkgchsf";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> commands = {"type q", "type j", "undo 846861219", "type j", "undo 829047028", "undo 771625657", "type x", "undo 408496142", "type l", "undo 270296284"};
    vector<int> time = {26694774, 42947398, 134270450, 300334606, 396858183, 449747036, 775552926, 797878240, 815111475, 953442006};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> commands = {"undo 236448218", "undo 883037715", "undo 751116650", "undo 748327383", "type h", "undo 982235726", "undo 136257966", "undo 757797460", "undo 111027505", "undo 155005008"};
    vector<int> time = {477640407, 557837896, 601999710, 690226030, 692059096, 693424970, 770251533, 876455121, 881013282, 967938482};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> commands = {"undo 900221804", "undo 466024634", "type v", "type y", "undo 131388485", "undo 531477733", "undo 857332441", "undo 581331003", "undo 255580669", "undo 608012961"};
    vector<int> time = {3192561, 41593135, 125580709, 280960495, 318371691, 451571540, 805465374, 953424498, 970983601, 991605339};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "v";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> commands = {"type v", "type h", "type j", "type b", "type l", "type s", "type m", "type z", "type n", "type m", "type t", "type a", "type k", "type e", "type l", "type r", "type x", "type h", "type x", "type u"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "vhjblsmznmtakelrxhxu";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> commands = {"type g", "type z", "undo 8", "type n", "type x", "type y", "type d", "type t", "type r", "type r", "type r", "type k", "type b", "type g", "undo 13", "type q", "type q", "type a", "type s", "type r"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "gqqasr";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> commands = {"undo 19", "undo 10", "undo 13", "type q", "undo 10", "undo 3", "type k", "undo 10", "undo 17", "type n", "type o", "type i", "undo 17", "undo 11", "type p", "undo 6", "type t", "undo 13", "undo 4", "type z"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> commands = {"undo 2", "undo 17", "undo 10", "undo 12", "undo 4", "undo 12", "undo 19", "undo 15", "undo 13", "undo 19", "undo 18", "undo 1", "type d", "undo 19", "undo 3", "undo 9", "undo 16", "undo 9", "type t", "undo 14"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> commands = {"type n", "type y", "undo 7", "type v", "type f", "undo 16", "type o", "type v", "type a", "undo 20", "type l", "type x", "type z", "type h", "type o", "type g", "type h", "undo 18", "type e", "undo 10"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ova";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> commands = {"type w", "type h", "type o", "type h", "type x", "type j", "type c", "type w", "type h", "type c", "type u", "type k", "type r", "type y", "type b", "type n", "type w", "type a", "type y", "type x"};
    vector<int> time = {33, 212, 221, 222, 228, 280, 296, 314, 332, 377, 503, 530, 562, 604, 615, 641, 695, 814, 962, 973};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "whohxjcwhcukrybnwayx";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> commands = {"type j", "type w", "type t", "type l", "type t", "type r", "type b", "type o", "type u", "type x", "type j", "type m", "type e", "type x", "type y", "type a", "type i", "type w", "type c", "undo 427"};
    vector<int> time = {129, 292, 430, 451, 472, 534, 540, 550, 586, 589, 694, 712, 767, 780, 797, 813, 837, 963, 985, 989};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "jwtltrbo";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> commands = {"undo 845", "undo 720", "type z", "type r", "type g", "undo 712", "type q", "type k", "type t", "type k", "undo 673", "type p", "undo 859", "type j", "undo 385", "undo 841", "undo 853", "undo 945", "undo 623", "undo 108"};
    vector<int> time = {26, 42, 103, 126, 173, 195, 201, 223, 312, 517, 593, 601, 647, 739, 762, 768, 785, 817, 904, 988};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> commands = {"undo 368", "undo 615", "type x", "undo 694", "undo 153", "undo 843", "undo 424", "type t", "undo 58", "type t", "undo 568", "undo 466", "type l", "undo 38", "undo 699", "undo 728", "undo 615", "undo 456", "undo 983", "undo 131"};
    vector<int> time = {239, 315, 350, 395, 396, 419, 460, 462, 517, 561, 600, 638, 692, 694, 715, 760, 805, 871, 945, 953};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> commands = {"undo 662", "type z", "type x", "type g", "type p", "type n", "type q", "type x", "undo 127", "type v", "type w", "undo 872", "type f", "undo 268", "undo 334", "type y", "type m", "undo 802", "type a", "undo 828"};
    vector<int> time = {28, 87, 132, 157, 184, 224, 238, 454, 458, 527, 577, 623, 639, 708, 727, 774, 779, 835, 840, 959};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> commands = {"type d", "type p", "type t", "type o", "type r", "type p", "type h", "type r", "type v", "type b", "type z", "type u", "type g", "type j", "type t", "type h", "type d", "type j", "type x", "type i"};
    vector<int> time = {11535217, 25864113, 75659568, 239219278, 316380762, 535907876, 543997884, 566197841, 572797697, 621195556, 631190417, 632174196, 664865957, 773514520, 782849670, 837876123, 917738472, 959966068, 981217297, 986934723};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "dptorphrvbzugjthdjxi";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> commands = {"type z", "type f", "type h", "type u", "type m", "type y", "type a", "type s", "type r", "type v", "type d", "type l", "type y", "type i", "type r", "type t", "type b", "type w", "type o", "type n"};
    vector<int> time = {14698847, 25895966, 30923419, 84686611, 254840449, 375627030, 380605114, 381679036, 392542097, 437998312, 439036964, 456246819, 533851272, 615895761, 631169489, 636851257, 659479135, 799078308, 827061012, 997197665};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "zfhumyasrvdlyirtbwon";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> commands = {"undo 307345080", "type i", "type m", "undo 860645311", "undo 932471401", "type v", "type j", "undo 956902082", "type q", "undo 775991531", "type k", "type d", "undo 628225384", "type z", "type e", "type l", "undo 257831193", "undo 25167053", "type o", "type i"};
    vector<int> time = {28969196, 51298507, 143785204, 149228489, 157464340, 162144665, 177673472, 381804095, 425068319, 527304321, 536463316, 625729879, 682024482, 716059843, 765391244, 811391917, 873182347, 881849686, 894665193, 977807442};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "izeloi";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> commands = {"undo 774946957", "undo 120339313", "undo 329300060", "type y", "undo 56501792", "undo 364359052", "undo 39561658", "undo 168704633", "undo 375883497", "type x", "undo 978010105", "undo 87734114", "type c", "type d", "undo 949433290", "undo 361379627", "type z", "undo 889945753", "undo 422266387", "undo 204690430"};
    vector<int> time = {4062095, 178259475, 238316729, 257431024, 317611117, 362177864, 393333436, 468004886, 493202055, 586887950, 606618130, 614209398, 616174632, 643396238, 667332664, 699711589, 704289199, 785324433, 804338781, 861942771};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "cd";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> commands = {"undo 690866963", "undo 652808186", "type c", "undo 478600932", "undo 826503359", "undo 761721806", "type i", "type y", "type r", "type s", "undo 207043686", "type v", "undo 26594191", "type r", "undo 491508163", "type w", "type a", "type c", "type t", "undo 516145236"};
    vector<int> time = {14577978, 100134503, 144069310, 155418877, 211265427, 227069182, 278091631, 291576951, 298084740, 374897331, 419443658, 429037482, 432764562, 503056487, 522623680, 602843276, 650610926, 848081823, 868700042, 876509741};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "iyr";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> commands = {"type h", "type s", "type k", "type s", "type v", "type w", "type f", "type l", "type p", "type c", "type j", "type r", "type u", "type r", "type f", "type f", "type u", "type t", "type e", "type v"};
    vector<int> time = {12820165, 60387973, 67614302, 75124256, 146468853, 210425643, 225006811, 261003728, 289054790, 366882398, 381182182, 407945652, 424381808, 559766736, 564993400, 737694529, 754963812, 824812774, 841471664, 843652833};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "hsksvwflpcjrurffutev";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> commands = {"undo 624426772", "type e", "type l", "type r", "type z", "type t", "type w", "type v", "type r", "type b", "type e", "type h", "type b", "type s", "type d", "type t", "type w", "type m", "type s", "type v"};
    vector<int> time = {9049857, 31494708, 37135740, 62018610, 91034986, 153496125, 184989176, 350645170, 355670146, 363422055, 374154685, 413455663, 464048141, 502595827, 524970105, 698076477, 866272199, 890660137, 929837456, 957857307};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "elrztwvrbehbsdtwmsv";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> commands = {"type y", "undo 459188956", "undo 803930088", "undo 303698233", "type j", "type m", "type q", "undo 508200067", "type e", "type f", "undo 298100595", "type v", "type w", "type n", "type q", "undo 834331199", "type i", "type u", "type p", "undo 478535561"};
    vector<int> time = {3187875, 6209207, 28770358, 86816217, 104863149, 147833424, 156307814, 163640231, 165351797, 300376650, 460331252, 485995121, 609110852, 651028567, 676887811, 890771933, 909320078, 911791645, 930938908, 951225104};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "jmq";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> commands = {"undo 947614103", "undo 739637167", "type p", "undo 494706681", "undo 575354034", "undo 990789400", "undo 531471516", "undo 106124082", "type x", "undo 784735419", "undo 266226268", "undo 8567060", "undo 809896861", "undo 906492237", "undo 355401173", "undo 649379083", "undo 345743067", "undo 615246725", "undo 700916616", "undo 15676072"};
    vector<int> time = {58082483, 66614995, 84490057, 87336151, 221625595, 248142138, 261787288, 267229349, 275868572, 406512955, 456052682, 623251208, 652966541, 655486038, 656693851, 730036515, 806976476, 931353896, 969041575, 994197223};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> commands = {"type u", "undo 660429882", "undo 270555355", "undo 191858532", "undo 348055907", "undo 156997489", "undo 485247896", "undo 390728272", "undo 164847588", "undo 531415763", "undo 130331410", "undo 379144691", "undo 923786211", "undo 444394857", "undo 972016422", "type l", "undo 215051601", "undo 952635435", "undo 482839626", "undo 532443831"};
    vector<int> time = {59605308, 78242012, 106881771, 134123521, 269904974, 357184330, 486859295, 491468339, 508636522, 526439208, 531807884, 576731773, 821519280, 843481381, 913275515, 930968428, 934880249, 952920012, 965066705, 992305551};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> commands = {"type a", "type b", "undo 2", "undo 2"};
    vector<int> time = {1, 2, 3, 4};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> commands = {"type a", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 48"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> commands = {"type a", "type b", "type c", "undo 100000", "undo 100000000", "undo 1000000000"};
    vector<int> time = {1, 2, 3, 100000, 100000000, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> commands = {"type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 1000000000"};
    vector<int> time = {1, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000, 1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000, 20000000, 100000000, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> commands = {"type a", "type b", "type d", "undo 1000000000", "undo 999999999", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "type a", "type b", "type c", "undo 1", "undo 2", "undo 3", "type a", "type c", "type d", "type e", "undo 9", "undo 9", "undo 4", "undo 8", "undo 7", "undo 9", "undo 1", "undo 10", "undo 11", "undo 7", "undo 8", "undo 8", "type d", "type e", "undo 1", "type f", "undo 3", "undo 2", "undo 7", "undo 2", "undo 3", "type a", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "aabacd";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> commands = {"type a", "type b", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 49", "undo 50"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> commands = {"undo 5", "type a", "type b", "undo 1", "undo 13", "type c", "type d", "undo 1", "undo 999999"};
    vector<int> time = {5, 6, 7, 8, 9, 10, 11, 12, 100000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10"};
    vector<int> time = {1, 2, 3, 1000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> commands = {"type z", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100", "undo 100"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> commands = {"type x", "undo 1", "undo 2", "undo 3", "undo 4", "undo 5", "undo 6", "undo 7", "undo 8", "undo 9", "undo 10", "undo 11", "undo 12", "undo 13", "undo 14", "undo 15", "undo 16", "undo 17", "undo 18", "undo 19", "undo 20", "undo 21", "undo 22", "undo 23", "undo 24", "undo 25", "undo 26", "undo 27", "undo 28", "undo 29", "undo 30", "undo 31", "undo 32", "undo 33", "undo 34", "undo 35", "undo 36", "undo 37", "undo 38", "undo 39", "undo 40", "undo 41", "undo 42", "undo 43", "undo 44", "undo 45", "undo 46", "undo 47", "undo 48", "undo 49"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> commands = {"undo 1", "type a", "type b", "undo 2", "undo 7", "undo 1000000", "type z"};
    vector<int> time = {1, 5, 9, 11, 15, 100, 101};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> commands = {"type a", "type b", "type c", "type d", "type e", "undo 2", "undo 3", "type f", "undo 4"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "abcd";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> commands = {"type a", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> commands = {"type a", "type b", "type c", "undo 999"};
    vector<int> time = {1, 2, 3, 1000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> commands = {"type a", "undo 1", "undo 1"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10", "type p", "type k", "type z", "undo 1"};
    vector<int> time = {1, 5, 12, 15, 16, 17, 18, 19};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "apk";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> commands = {"type a", "type b", "type c", "type d", "type e", "type f", "undo 12"};
    vector<int> time = {1, 2, 5, 6, 8, 15, 20};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "abcd";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> commands = {"type a", "undo 10"};
    vector<int> time = {1, 5};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> commands = {"undo 5", "type a", "type b", "undo 1", "undo 13", "type c", "type d", "undo 1", "undo 1"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "cd";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> commands = {"type a", "type r", "undo 5", "undo 2", "type h"};
    vector<int> time = {1, 2, 3, 12, 13};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "h";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10"};
    vector<int> time = {1, 2, 3, 11};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> commands = {"type a", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 999999998"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 999999991, 999999992, 999999993, 999999994, 999999995, 999999996, 999999997, 999999998, 999999999, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> commands = {"type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 10"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> commands = {"type a", "undo 20"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> commands = {"type a", "type b", "undo 10"};
    vector<int> time = {1, 10, 15};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> commands = {"type a", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50", "undo 50"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> commands = {"undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000", "undo 1000000"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> commands = {"type a", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000", "undo 1000"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 21, 22, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 51, 52, 53, 54, 55, 56, 57, 58, 59, 61, 62};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> commands = {"type a", "type b", "type c", "undo 1000"};
    vector<int> time = {1, 2, 3, 4};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> commands = {"type a", "type r", "undo 5", "undo 2", "type h", "undo 2"};
    vector<int> time = {1, 2, 3, 12, 13, 14};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> commands = {"undo 1", "type z", "undo 1", "undo 1", "undo 1", "type y", "undo 1", "undo 1", "type a", "undo 1", "undo 1", "undo 2", "type c"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "yac";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> commands = {"type a", "undo 1", "undo 1", "undo 1"};
    vector<int> time = {1, 2, 3, 4};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> commands = {"type a", "type b", "type b", "type c", "undo 100000"};
    vector<int> time = {1, 2, 3, 5, 55};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> commands = {"type a", "undo 1000"};
    vector<int> time = {1, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> commands = {"type e", "type c", "type t", "undo 3", "type a", "undo 2", "type x", "undo 2"};
    vector<int> time = {1, 2, 5, 7, 9, 12, 13, 1000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ecax";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> commands = {"type c", "type u", "type s", "type t", "type o", "type p", "type w", "type a", "type a", "type w", "type w", "type q", "type d", "type o", "type o", "undo 5", "type a", "undo 7", "type o", "type a", "undo 8", "type o", "type p", "undo 3", "type q", "type x", "type l", "type l", "undo 2", "type w", "type x", "type l", "undo 3", "type w", "type q", "type x", "type l", "type o", "type p", "type o", "type w", "undo 2", "type s", "type w", "undo 1", "type o", "type a", "undo 1", "type q"};
    vector<int> time = {1, 2, 4, 5, 6, 8, 10, 11, 12, 13, 14, 16, 100, 105, 106, 107, 108, 109, 110, 111, 113, 1000, 1001, 1002, 1003, 1005, 1006, 1009, 1010, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2009, 2010, 2011, 2012, 2013, 2400, 2500, 2600, 3000, 3001, 3002, 3003, 3004};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "custopwaawwqdqxlwqxlopowswoq";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> commands = {"type a", "type b", "type c", "undo 12"};
    vector<int> time = {1, 2, 3, 14};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> commands = {"type a", "type b", "type c", "undo 61"};
    vector<int> time = {1, 2, 100, 150};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> commands = {"type a", "type b", "type c", "undo 3", "type d"};
    vector<int> time = {1, 2, 3, 5, 6};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ad";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> commands = {"type a", "undo 1", "type a", "undo 4", "undo 1", "undo 1000000000"};
    vector<int> time = {1, 2, 3, 5, 1000, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> commands = {"type a", "type b", "type c", "undo 123"};
    vector<int> time = {1, 2, 3, 123};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> commands = {"type a", "type b", "type c", "type d", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 11", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 11"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> commands = {"undo 1000000000"};
    vector<int> time = {1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10"};
    vector<int> time = {1, 2, 3, 12};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> commands = {"type a", "type b", "type c", "undo 3"};
    vector<int> time = {1, 2, 3, 4};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> commands = {"type o", "undo 1000000000", "undo 1000000000", "type a", "undo 1", "undo 2", "type b", "undo 1", "undo 2", "undo 40000", "undo 1", "undo 20", "type c"};
    vector<int> time = {1, 2, 3, 90000000, 90000001, 90000002, 900000003, 900000004, 900000005, 900000007, 990000000, 990000001, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> commands = {"type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500", "undo 500"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> commands = {"type a", "type b", "type c", "type a", "type b", "type c", "undo 12"};
    vector<int> time = {1, 2, 3, 5, 6, 7, 8};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> commands = {"type a", "type a", "type b", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "type a", "undo 5", "type a", "type a", "type a", "type a", "undo 10", "type a", "type a", "type a", "type a", "type a", "undo 20", "type a", "type a", "undo 2"};
    vector<int> time = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "aaba";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> commands = {"type a", "type b", "type c", "undo 75"};
    vector<int> time = {1, 2, 50, 100};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ab";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> commands = {"type a", "type b", "type c", "undo 8"};
    vector<int> time = {5, 7, 9, 10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10"};
    vector<int> time = {1, 2, 3, 4};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> commands = {"type c"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> commands = {"type a", "type b", "type c", "undo 2", "type z"};
    vector<int> time = {1, 2, 300000, 900000000, 999999999};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "abcz";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> commands = {"type b", "type c", "undo 1", "undo 2", "type a", "undo 1006"};
    vector<int> time = {1, 2, 3, 4, 5, 1010};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10"};
    vector<int> time = {1, 1997, 1998, 2000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> commands = {"type d", "type x", "undo 2"};
    vector<int> time = {1, 2, 3};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> commands = {"undo 1000000000"};
    vector<int> time = {10};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> commands = {"type a", "undo 10"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> commands = {"type a", "type b", "type c", "undo 1000000"};
    vector<int> time = {1, 9, 250000, 1000005};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> commands = {"type a", "undo 1"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> commands = {"type a", "type b", "type c", "undo 10", "undo 3", "type b", "undo 1000000000", "undo 1000000000", "undo 1000000000", "undo 1000000000", "type z", "type h"};
    vector<int> time = {1, 2, 3, 9, 20, 100, 101, 102, 1000, 9999, 99999999, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "zh";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> commands = {"undo 2"};
    vector<int> time = {1};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> commands = {"type a", "undo 100"};
    vector<int> time = {1, 2};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> commands = {"undo 100", "undo 200", "type a", "type b", "type b", "type a", "type a", "type b", "undo 4500", "type a", "type b", "type b", "type b", "type a", "type b", "type x", "type x", "type x", "type x", "type z", "undo 900000", "undo 1400000", "undo 3000000", "undo 6000000", "type h", "type y", "type l", "undo 27000000", "type t", "type o", "type p", "type c", "type o", "type d", "type e", "type r"};
    vector<int> time = {10, 30, 1000, 2000, 3000, 3009, 5000, 6000, 6500, 7000, 8000, 10000, 30000, 50000, 80000, 100000, 300000, 500000, 800000, 1300000, 2100000, 3400000, 5000000, 8000000, 10000000, 20000000, 30000000, 40000000, 50000000, 60000000, 70000000, 80000000, 90000000, 100000000, 110000000, 120000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "aabbbabxxxxzhtopcoder";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> commands = {"type a", "type b", "type a", "type b", "type a", "type b", "type a", "type b", "type a", "type b", "type a", "undo 10"};
    vector<int> time = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "ababab";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> commands = {"type a", "type a", "type a", "type a", "type a", "undo 1", "undo 17", "undo 1", "undo 3", "undo 5", "undo 7", "undo 9", "undo 11", "undo 13", "undo 15", "undo 17", "undo 19", "undo 21", "undo 23", "undo 25", "undo 27", "undo 29", "undo 31", "undo 33", "undo 35", "undo 37", "undo 39", "undo 41", "undo 43", "undo 45", "undo 47", "undo 51", "undo 100", "undo 102", "undo 104"};
    vector<int> time = {1, 10, 20, 30, 40, 50, 60, 70, 99999900, 99999901, 99999902, 99999903, 99999904, 99999907, 99999908, 99999909, 99999910, 99999911, 99999912, 99999913, 99999952, 99999953, 99999954, 99999955, 99999956, 99999957, 99999958, 99999961, 99999962, 99999963, 99999964, 99999965, 99999966, 99999967, 99999968};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaa";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> commands = {"undo 999999997", "undo 999999998", "undo 999999999"};
    vector<int> time = {999999998, 999999999, 1000000000};
    Undo* pObj = new Undo();
    clock_t start = clock();
    string result = pObj->getText(commands, time);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=13510&pm=10054
********************************************************************************
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
typedef long long ll; 
 
struct Undo  
{ 
  string getText(vector <string> commands, vector <int> time)  
  { 
    vector<string> ret(1,""); 
    vector<int> t(1,-1000000001); 
    REP(i,commands.sz) 
    { 
      istringstream inp(commands[i]); 
      string a, b; 
      inp >> a >> b; 
      t.pb(time[i]); 
      if(a == "type") 
        ret.pb(ret.back() + b); 
      else 
      { 
        int p = ret.sz-1; 
        while(t[p] >= time[i] - atoi(b.c_str())) --p; 
        ret.pb(ret[p]); 
      } 
    } 
    return ret.back(); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/