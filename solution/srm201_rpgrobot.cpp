/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2888
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

class RPGRobot {
public:
    vector<string> where(vector<string> map, string movements);
};

vector<string> RPGRobot::where(vector<string> map, string movements) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> map = {"* *", "| |", "*-*"};
    string movements = "N";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> map = {"* *-*", "| | |", "* * *", "| | |", "*-*-*"};
    string movements = "N;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,3"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> map = {"*-*-*", " ", "* * *", " ", "* * *"};
    string movements = "SWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "3,1"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> map = {"* *-* *", "| |", "* *-* *", "| |", "* *-* *"};
    string movements = "NSE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "1,3"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> map = {"* *-*", "| | |", "* * *", "| | |", "*-*-*"};
    string movements = "N;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3,3"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> map = {"*-*", "| |", "*-*"};
    string movements = "N";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> map = {"* * * *", " ", "*-*-*-*"};
    string movements = "NWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "3,1", "5,1"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> map = {"* *", " ", "*-*"};
    string movements = "NWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> map = {"* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *"};
    string movements = "NSWE";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "1,3", "1,5", "1,7", "1,9", "1,11", "1,13", "1,15", "1,17", "1,19", "1,21", "1,23", "1,25", "1,27", "1,29", "1,31", "1,33", "1,35", "1,37", "1,39", "1,41", "1,43", "1,45", "1,47", "3,1", "3,3", "3,5", "3,7", "3,9", "3,11", "3,13", "3,15", "3,17", "3,19", "3,21", "3,23", "3,25", "3,27", "3,29", "3,31", "3,33", "3,35", "3,37", "3,39", "3,41", "3,43", "3,45", "3,47", "5,1", "5,3", "5,5", "5,7", "5,9", "5,11", "5,13", "5,15", "5,17", "5,19", "5,21", "5,23", "5,25", "5,27", "5,29", "5,31", "5,33", "5,35", "5,37", "5,39", "5,41", "5,43", "5,45", "5,47", "7,1", "7,3", "7,5", "7,7", "7,9", "7,11", "7,13", "7,15", "7,17", "7,19", "7,21", "7,23", "7,25", "7,27", "7,29", "7,31", "7,33", "7,35", "7,37", "7,39", "7,41", "7,43", "7,45", "7,47", "9,1", "9,3", "9,5", "9,7", "9,9", "9,11", "9,13", "9,15", "9,17", "9,19", "9,21", "9,23", "9,25", "9,27", "9,29", "9,31", "9,33", "9,35", "9,37", "9,39", "9,41", "9,43", "9,45", "9,47", "11,1", "11,3", "11,5", "11,7", "11,9", "11,11", "11,13", "11,15", "11,17", "11,19", "11,21", "11,23", "11,25", "11,27", "11,29", "11,31", "11,33", "11,35", "11,37", "11,39", "11,41", "11,43", "11,45", "11,47", "13,1", "13,3", "13,5", "13,7", "13,9", "13,11", "13,13", "13,15", "13,17", "13,19", "13,21", "13,23", "13,25", "13,27", "13,29", "13,31", "13,33", "13,35", "13,37", "13,39", "13,41", "13,43", "13,45", "13,47", "15,1", "15,3", "15,5", "15,7", "15,9", "15,11", "15,13", "15,15", "15,17", "15,19", "15,21", "15,23", "15,25", "15,27", "15,29", "15,31", "15,33", "15,35", "15,37", "15,39", "15,41", "15,43", "15,45", "15,47", "17,1", "17,3", "17,5", "17,7", "17,9", "17,11", "17,13", "17,15", "17,17", "17,19", "17,21", "17,23", "17,25", "17,27", "17,29", "17,31", "17,33", "17,35", "17,37", "17,39", "17,41", "17,43", "17,45", "17,47", "19,1", "19,3", "19,5", "19,7", "19,9", "19,11", "19,13", "19,15", "19,17", "19,19", "19,21", "19,23", "19,25", "19,27", "19,29", "19,31", "19,33", "19,35", "19,37", "19,39", "19,41", "19,43", "19,45", "19,47", "21,1", "21,3", "21,5", "21,7", "21,9", "21,11", "21,13", "21,15", "21,17", "21,19", "21,21", "21,23", "21,25", "21,27", "21,29", "21,31", "21,33", "21,35", "21,37", "21,39", "21,41", "21,43", "21,45", "21,47", "23,1", "23,3", "23,5", "23,7", "23,9", "23,11", "23,13", "23,15", "23,17", "23,19", "23,21", "23,23", "23,25", "23,27", "23,29", "23,31", "23,33", "23,35", "23,37", "23,39", "23,41", "23,43", "23,45", "23,47", "25,1", "25,3", "25,5", "25,7", "25,9", "25,11", "25,13", "25,15", "25,17", "25,19", "25,21", "25,23", "25,25", "25,27", "25,29", "25,31", "25,33", "25,35", "25,37", "25,39", "25,41", "25,43", "25,45", "25,47", "27,1", "27,3", "27,5", "27,7", "27,9", "27,11", "27,13", "27,15", "27,17", "27,19", "27,21", "27,23", "27,25", "27,27", "27,29", "27,31", "27,33", "27,35", "27,37", "27,39", "27,41", "27,43", "27,45", "27,47", "29,1", "29,3", "29,5", "29,7", "29,9", "29,11", "29,13", "29,15", "29,17", "29,19", "29,21", "29,23", "29,25", "29,27", "29,29", "29,31", "29,33", "29,35", "29,37", "29,39", "29,41", "29,43", "29,45", "29,47", "31,1", "31,3", "31,5", "31,7", "31,9", "31,11", "31,13", "31,15", "31,17", "31,19", "31,21", "31,23", "31,25", "31,27", "31,29", "31,31", "31,33", "31,35", "31,37", "31,39", "31,41", "31,43", "31,45", "31,47", "33,1", "33,3", "33,5", "33,7", "33,9", "33,11", "33,13", "33,15", "33,17", "33,19", "33,21", "33,23", "33,25", "33,27", "33,29", "33,31", "33,33", "33,35", "33,37", "33,39", "33,41", "33,43", "33,45", "33,47", "35,1", "35,3", "35,5", "35,7", "35,9", "35,11", "35,13", "35,15", "35,17", "35,19", "35,21", "35,23", "35,25", "35,27", "35,29", "35,31", "35,33", "35,35", "35,37", "35,39", "35,41", "35,43", "35,45", "35,47", "37,1", "37,3", "37,5", "37,7", "37,9", "37,11", "37,13", "37,15", "37,17", "37,19", "37,21", "37,23", "37,25", "37,27", "37,29", "37,31", "37,33", "37,35", "37,37", "37,39", "37,41", "37,43", "37,45", "37,47", "39,1", "39,3", "39,5", "39,7", "39,9", "39,11", "39,13", "39,15", "39,17", "39,19", "39,21", "39,23", "39,25", "39,27", "39,29", "39,31", "39,33", "39,35", "39,37", "39,39", "39,41", "39,43", "39,45", "39,47", "41,1", "41,3", "41,5", "41,7", "41,9", "41,11", "41,13", "41,15", "41,17", "41,19", "41,21", "41,23", "41,25", "41,27", "41,29", "41,31", "41,33", "41,35", "41,37", "41,39", "41,41", "41,43", "41,45", "41,47", "43,1", "43,3", "43,5", "43,7", "43,9", "43,11", "43,13", "43,15", "43,17", "43,19", "43,21", "43,23", "43,25", "43,27", "43,29", "43,31", "43,33", "43,35", "43,37", "43,39", "43,41", "43,43", "43,45", "43,47", "45,1", "45,3", "45,5", "45,7", "45,9", "45,11", "45,13", "45,15", "45,17", "45,19", "45,21", "45,23", "45,25", "45,27", "45,29", "45,31", "45,33", "45,35", "45,37", "45,39", "45,41", "45,43", "45,45", "45,47", "47,1", "47,3", "47,5", "47,7", "47,9", "47,11", "47,13", "47,15", "47,17", "47,19", "47,21", "47,23", "47,25", "47,27", "47,29", "47,31", "47,33", "47,35", "47,37", "47,39", "47,41", "47,43", "47,45", "47,47"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> map = {"* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *"};
    string movements = "N";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> map = {"* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *", " ", "* * * * * * * * * * * * * * * * * * * * * * * * *"};
    string movements = "NSWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "1,3", "1,5", "3,1", "3,3", "3,5", "5,1", "5,3", "5,5", "7,1", "7,3", "7,5", "9,1", "9,3", "9,5", "11,1", "11,3", "11,5", "13,1", "13,3", "13,5", "15,1", "15,3", "15,5", "17,1", "17,3", "17,5", "19,1", "19,3", "19,5", "21,1", "21,3", "21,5", "23,1", "23,3", "23,5", "25,1", "25,3", "25,5", "27,1", "27,3", "27,5", "29,1", "29,3", "29,5", "31,1", "31,3", "31,5", "33,1", "33,3", "33,5", "35,1", "35,3", "35,5", "37,1", "37,3", "37,5", "39,1", "39,3", "39,5", "41,1", "41,3", "41,5", "43,1", "43,3", "43,5", "45,1", "45,3", "45,5", "47,1", "47,3", "47,5"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> map = {"*-* *-*-*-*-* *", "| | | | ", "* * *-* *-*-*-*"};
    string movements = "SE";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "7,1"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> map = {"* * *-* * * * *", " | | | |", "*-*-*-*-* *-*-*", "| | | ", "*-* *-* *-* * *", " | | | | |", "* * *-* * *-* *", "| | | |", "*-* * *-* * * *", " | | | |", "*-*-* *-* * * *", "| | | | | |", "* * *-*-*-* * *"};
    string movements = "NSWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7,5"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> map = {"* *-*-*-*", " | | | |", "*-*-*-*-*", " |", "*-* *-*-*", "| | | ", "* * *-*-*", "| | ", "* * * * *", "| |", "* * * *-*", " | | | |", "* * *-*-*", "| | | ", "*-*-*-* *", " | | ", "*-* *-* *", "| | | |", "*-* *-* *"};
    string movements = "SWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5,7"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> map = {"* * * *-* * * *-*-* * * * * *-* *", " | | | | | | ", "* * *-* * *-* * * * * * * * *-* *", "| | | | | | | | |", "* * *-*-* *-*-*-* * * * * * *-*-*", " | | | | | | | | |", "*-* *-* * *-*-* *-*-*-* * *-* *-*", " | | | | | | | | ", "*-*-* *-*-*-*-* *-*-*-* *-*-* * *", "| | | | | | | ", "*-*-* * * *-* *-*-* * * * *-*-* *", " | | | | | | | | | | | ", "*-* *-* * * *-* *-*-* *-* * *-*-*", " | | | | | | | | | | | ", "*-* * * *-* * *-*-*-* * * * * * *", "| | | | | | | | | ", "* *-*-*-*-*-* *-* * * *-* *-* *-*", " | | | | | | | | ", "* * *-*-*-* *-* *-*-*-*-*-*-*-*-*", "| | | | | | | | | |", "* *-* * *-* *-*-*-*-* * *-*-*-* *", " | | | | | | | | | | | ", "* *-*-*-*-* *-*-* *-* *-*-* * *-*", " | | | | | | | | | ", "*-*-*-* *-*-* * *-* *-* * * *-*-*", "| | | | | | | |", "* *-* * * *-*-* *-*-*-* *-* * *-*", " | | | | | | |", "*-* * * * * *-*-* * * * * *-* * *", "| | | | | | |", "* * *-*-* *-*-* * * *-*-* * * *-*", "| | | | | | | | | | | | | |", "*-* * *-* * * * * * *-* *-* *-*-*", " | | | | | | |", "*-* *-* *-* * * * *-* *-* *-*-*-*"};
    string movements = "NW;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,23"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> map = {"* * * * * * * * * * * * * * * * * * * * * * * *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " ", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *", " | | | | | | | | | | | | | | | | | | | | | | |", "* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *-* *"};
    string movements = "NSWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5,9", "5,13", "5,17", "5,21", "5,25", "5,29", "5,33", "5,37", "9,9", "9,13", "9,17", "9,21", "9,25", "9,29", "9,33", "9,37", "13,9", "13,13", "13,17", "13,21", "13,25", "13,29", "13,33", "13,37", "17,9", "17,13", "17,17", "17,21", "17,25", "17,29", "17,33", "17,37", "21,9", "21,13", "21,17", "21,21", "21,25", "21,29", "21,33", "21,37", "25,9", "25,13", "25,17", "25,21", "25,25", "25,29", "25,33", "25,37", "29,9", "29,13", "29,17", "29,21", "29,25", "29,29", "29,33", "29,37", "33,9", "33,13", "33,17", "33,21", "33,25", "33,29", "33,33", "33,37", "37,9", "37,13", "37,17", "37,21", "37,25", "37,29", "37,33", "37,37", "41,9", "41,13", "41,17", "41,21", "41,25", "41,29", "41,33", "41,37", "45,1", "45,5", "45,9", "45,13", "45,17", "45,21", "45,25", "45,29", "45,33", "45,37"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> map = {"*-*-* * * *-*-*-* * *-*-* * *-* *-* *-*-*-*", "| | | | | | | | | | | | | | |", "*-*-* * * * * *-*-* * * *-*-*-*-*-*-*-* * *", "| | | | | | ", "*-*-*-* * *-*-* *-* *-*-*-* *-* * * *-*-*-*", " | | | | | | | | | | | ", "* * * *-* * *-*-*-* *-* * * *-* *-*-* *-* *", "| | | | | | | | | | | ", "*-* *-*-*-* *-* *-*-* *-* * * *-*-*-*-*-*-*", "| | | | | | | | | | | | ", "*-* * *-*-* * * * * * * * * *-*-* * *-* *-*", " | | | | | | | | | | ", "* * * *-*-*-*-* *-*-* * *-*-* *-* *-* * * *", " | | | | | | | | | | ", "* * *-*-* *-* * *-* * * *-* * *-* *-*-* *-*", " | | | | | | | | | |", "* *-*-* *-*-*-*-* * *-* *-* *-* * * * *-* *"};
    string movements = "S";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"11,5", "17,15", "23,1", "29,11", "37,5", "39,1", "39,9", "41,1"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> map = {"* * * *-* * * *-*-* * * * * *-* *", " | | | | | | ", "* * *-* * *-* * * * * * * * *-* *", "| | | | | | | | |", "* * *-*-* *-*-*-* * * * * * *-*-*", " | | | | | | | | |", "*-* *-* * *-*-* *-*-*-* * *-* *-*", " | | | | | | | | ", "*-*-* *-*-*-*-* *-*-*-* *-*-* * *", "| | | | | | | ", "*-*-* * * *-* *-*-* * * * *-*-* *", " | | | | | | | | | | | ", "*-* *-* * * *-* *-*-* *-* * *-*-*", " | | | | | | | | | | | ", "*-* * * *-* * *-*-*-* * * * * * *", "| | | | | | | | | ", "* *-*-*-*-*-* *-* * * *-* *-* *-*", " | | | | | | | | ", "* * *-*-*-* *-* *-*-*-*-*-*-*-*-*", "| | | | | | | | | |", "* *-* * *-* *-*-*-*-* * *-*-*-* *", " | | | | | | | | | | | ", "* *-*-*-*-* *-*-* *-* *-*-* * *-*", " | | | | | | | | | ", "*-*-*-* *-*-* * *-* *-* * * *-*-*", "| | | | | | | |", "* *-* * * *-*-* *-*-*-* *-* * *-*", " | | | | | | |", "*-* * * * * *-*-* * * * * *-* * *", "| | | | | | |", "* * *-*-* *-*-* * * *-*-* * * *-*", "| | | | | | | | | | | | | |", "*-* * *-* * * * * * *-* *-* *-*-*", " | | | | | | |", "*-* *-* *-* * * * *-* *-* *-*-*-*"};
    string movements = "NW;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,23"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> map = {"* * * *", " ", "*-*-*-*"};
    string movements = "NWE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "3,1", "5,1"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> map = {"* *-*", "| | |", "* * *", "| | |", "*-*-*"};
    string movements = "N;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,3"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> map = {"* * *", " ", "* * *", " ", "* * *"};
    string movements = "NSWE";
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1,1", "1,3", "3,1", "3,3"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> map = {"* *-*", "| |", "*-*-*"};
    string movements = "NE;
    RPGRobot* pObj = new RPGRobot();
    clock_t start = clock();
    vector<string> result = pObj->where(map, movements);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5872&pm=2888
********************************************************************************
/*
 * Hey, stop reading this code right this instant!
 * You don't know what it could do to your fragile mind!
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
//#include <brains>  /* commented out to avoid compile error -- brains not found */
 
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
int dx[] = {-2,0,2,0}, dy[] = {0,2,0,-2};
int dx2[] = {-1,0,1,0}, dy2[] = {0,1,0,-1};
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
 struct pt
 {
   int first, second, x, y;
 };
 bool operator < (const pt &a, const pt &b) {
   if (a.x != b.x) return a.x < b.x;
   return a.y < b.y;
 }
 ostream& operator << (ostream &os , const pt &a) {
   os << "(" << a.first << ", " << a.second << ")";
   return os;
 }
map<char,int> dir;
vs m;
int R, C;
class RPGRobot {
  public:
  void cango(string dirs, vector<pt> &vp) {
    debug(dirs);
    for (int x = 0; x < vp.si; x++) {
      bool d[4] = {0,0,0,0}, e[4] = {0,0,0,0};
      for (int i = 0; i < dirs.si; i++) {
        e[dir[dirs[i]]] = 1;
      }
      for (int i = 0; i < 4; i++) {
        int tx = vp[x].first + dx2[i], ty = vp[x].second + dy2[i];
        if (tx < 0 || ty < 0 || tx >= R || ty >= C) {
          d[i] = e[i] = 1;
        }
        else if (m[tx][ty] == ' ') d[i] = 1;
      }
//      printf("%i %i %i %i %i %i %i %i\n", d[0],d[1],d[2],d[3],e[0],e[1],e[2],e[3]);
      for (int i = 0; i < 4; i++) {
        if (e[i] != d[i]) {
          vp.erase(vp.begin()+x);
          x--;
          goto done;
        }
      }
      done:;
    }
  }
  
  void mv(char d, vector<pt> &vp) {
    int D = dir[d];
    for (int i = 0; i < vp.si; i++) {
      vp[i].first += dx[D];
      vp[i].second += dy[D];
    }
  }
  
  vector <string> where(vector <string> mp, string movements) {
    dir['N'] = 0; dir['E'] = 1; dir['S'] = 2; dir['W'] = 3;
    m = mp;
    R = mp.si, C = mp[0].si;
    vector<pt> vp;
    for (int i = 1; i < mp.si; i += 2)
    for (int j = 1; j < mp[0].si; j += 2)
    if (mp[i][j] == ' ') {
      pt temp = {i,j,i,j};
      vp.pb(temp);
    }
    for (int i = 0; i < movements.si; i++) if (movements[i] == ',') movements[i] = ' ';
    stringstream S(movements);
    vs move; string v; while (S >> v) move.pb(v);
    cango(move[0],vp);
//    debug(vp);
    for (int i = 1; i < move.si; i += 2) {
      mv(move[i][0], vp);
//      debug(vp);
      cango(move[i+1],vp);
//      debug(vp);
    }
    for (int i = 0; i < vp.si; i++) {
      swap(vp[i].x, vp[i].y);
    }
    s(vp);
    vs ret;
    for (int i = 0; i < vp.si; i++) {
      char buf[100]; sprintf(buf, "%i,%i", vp[i].x, vp[i].y);
      ret.push_back(string(buf));
    }
    return ret;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/