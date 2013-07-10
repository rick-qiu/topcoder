/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1609
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

class TickTick {
public:
    int count(vector<string> events);
};

int TickTick::count(vector<string> events) {
    int ret;
    return ret;
}


int test0() {
    vector<string> events = {".222", "00.223", "1.221", "4.220"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> events = {"4.220112", "4.221", "4.222", "4.223"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> events = {"1.12", "2.23", "3.36", "4.56", "42.11"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
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
    vector<string> events = {".00002"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> events = {"52.222", "52.22201", "52.22202", "53.4"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> events = {".0000001", ".0000002"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> events = {"9.000001", "9.000002"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> events = {"8.000002", "9.00003"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> events = {"95.33", "97.32", "97.96", "97.97", "98.31", "100.53", "101.52"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> events = {"95.33", "97.32", "97.96", "97.97", "98.31", "100.53", "101.54"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> events = {"9533.1", "9732.2", "9796.3", "9797.4", "9831.5", "10053.6", "10154.7"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> events = {"123456.3", "123456.4", "123456.5", "123456.6", "123456.7", "123456.8", "123457.1"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> events = {"123456.1", "123456.7"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> events = {"17.003", "17.3", "18.30001", "19.29999", "19.30002", "23.29", "24.2"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> events = {"9234.1", "23111.11", "25100.09"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> events = {".092341", "0.231111", ".2510009"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> events = {"17.1", "17.3", "18.30001", "19.29999"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> events = {".222", ".223", "1.221", "4.2213", "4.22145"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> events = {"3.2", "3.5", "3.8", "6.3", "6.4"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> events = {"3.5", "3.8", "4.4", "6.9", "7.2"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> events = {"3.5", "3.8", "4.4", "6.9", "7.6"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> events = {"3.5", "3.8", "4.4", "6.9", "7.85"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> events = {"3.6", "4.2", "6.8", "6.9000", "12.5", "13.4"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> events = {"3.6", "4.2", "6.8", "7.3000", "12.5", "13.4"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> events = {"0.000001", "0.000002"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> events = {"0.1", "0.2"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> events = {"0.5"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> events = {".000222", "0.000223", "1.000221", "4.000220"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> events = {".0000011", ".0000012"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> events = {".0000001", ".0000002"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> events = {"4.220112", "4.221", "4.222", "4.223", "4.567", "4.56701", "4.567012", "4.765", "4.7676", "5.0101", "5.1101", "15.5", "15.501", "15.555", "16.098"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> events = {".0000001", ".0000002", ".0000003", ".0000004"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> events = {"0.000001", "0.000002", "0.000003", "0.000004", "0.000005"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> events = {".0000001", ".0000002", ".0000003", ".0000004", ".0000005"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> events = {"0.123456", "0.123457"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> events = {".0000001", ".0000002", ".0000003"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> events = {"0.1", "0.2", "0.3", "0.4"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> events = {"3.1", "5.6", "8.9", "10.2"};
    TickTick* pObj = new TickTick();
    clock_t start = clock();
    int result = pObj->count(events);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=4690&pm=1609
********************************************************************************
#include<vector>
#include<string>
#include<set>
#include<map>
#include<list>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<queue>
#include<iterator>
 
#define q(x) #x
#define qq(x) #x[0]
 
#define fori(st, end) for (int i = ((int)(st)); i <= ((int)(end)); i++) 
#define forj(st, end) for (int j = ((int)(st)); j <= ((int)(end)); j++)
#define fork(st, end) for (int k = ((int)(st)); k <= ((int)(end)); k++)
#define forl(st, end) for (int l = ((int)(st)); l <= ((int)(end)); l++)
#define form(st, end) for (int m = ((int)(st)); m <= ((int)(end)); m++)
 
#define VECI  vector<int>
#define LISTI list<int>
 
#define VECS vector<string>
#define LISTS list<string>
 
#define VECD vector<double>
 
using namespace std;
typedef vector<int> veci;
typedef vector<double> vecd;
typedef vector<string> vecs;
typedef vector<char>   vecch;
typedef string str;
 
 
#define ITRI vector<int>::iterator
#define ITRS vector<string>::iterator
 
#define vp(vec, val) vec.push_back(val)    
#define vf(vec, val) find(vec.begin(), vec.end(), val)
#define vs(vec) sort(vec.begin(), vec.end())
#define ve(vec, val) (vf(vec, val) != vec.end())
#define va(vec) vec.begin(), vec.end()
#define vind(vec, val) (ve(vec, val) ? vf(vec, val) - vec.begin() : -1)
#define vins(vec, val) do { if (!ve(vec, val)) vp(vec, val); } while(0)
 
#define lint long long
 
#define ABS(x) ((x) > 0 ? (x) : -(x))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DIST(x, y) ABS((x)-(y))
 
typedef pair<int, int> PAIRI;
typedef pair<double, double> PAIRD;
 
typedef PAIRI pairi;
typedef PAIRD paird;
 
typedef pair< PAIRD, int > TRIPLEI;
 
#define mp(x, y) make_pair(x, y)
#define pq priority_queue
 
#include <sstream>
 
#define vall(v) v.begin(), v.end()
 
template<class T> 
vector<T> parsestr(string s, string delims = " ") {
   string s1;
   vector<T> ret;
   while (s != "") {
      while(delims.find(s[0]) != string::npos) s = s.erase(0, 1);
      while(delims.find(s[s.length()-1]) != string::npos)  s = s.erase(s.length()-1, 1);   
 
      int pos = s.find_first_of(delims);
      if (pos == string::npos) {
         s1 = s;
         s  = "";
      } else {
         s1 = s.substr(0, pos);
         s  = s.substr(pos+1, s.length());
      }
 
      T val;
      istringstream st(s1);
      st >> val;
      vp(ret, val);
   }
   return ret;
 
}
 
string toupper(string s) {
   string s1 = "";
   fori(0, s.size()-1) s1 += toupper(s[i]);
   return s1;
}
 
string tolower(string s) {
   string s1 = "";
   fori(0, s.size()-1) s1 += tolower(s[i]);
   return s1;
}
 
int gcd(int a, int b) {
  if (b > a) swap(a, b);
  if ((a%b)==0) return b;
  return gcd(b, a%b);
}
 
int lcm(int a, int b) {
  return (a*b)/gcd(a, b);
}
 
lint choose(int n, int k) {
  lint ret = 1;
  int x = n;
  int y = 1;
  while (x != n-k) {
    ret *= x;
    x--;
    while (y != k+1 && (ret % y) == 0)  {  ret /= y; y++; }
  }
  return ret;
}
 
#define USE_EXTRA 0
#if USE_EXTRA
void bfForVECS(const VECS &field, PAIRI st, const vector< PAIRI > &adj, char wall, map< PAIRI, int > &dists) {
   list< PAIRI >  t;
   t.push_back(st);
   while (!t.empty()) {
      PAIRI cur = t.front(); 
      t.pop_front();
      fori(0, adj.size()-1) {
         int nx = cur.first + adj[i].first;
         int ny = cur.second + adj[i].second;
         if (nx < 0 || ny <0 || nx >= field.size() || ny >= field[0].size()) continue;
         if (field[nx][ny] == wall) continue;
         if (dists.find(mp(nx, ny)) == dists.end()) {
            dists[mp(nx, ny)] = dists[cur]+1;
            vp(t, mp(nx, ny));
         }
      }
   }
   return;
}
 
template<class T>
double get_area(const pair< T, T> &p1, const pair< T, T> &p2, const pair<T, T> &p3) {
  return ((double)0.5)*(p1.first*p2.second-p2.first*p1.second +
  p2.first*p3.second-p3.first*p2.second+p3.first*p1.second-p1.first*p3.second);
}
  
template <class T> 
vector<pair< T, T> > get_chull(vector<pair< T, T > > &v) {
  vector<pair<T, T> > ret;
    
  vs(v);
  vp(ret, v[0]);
    
  pair< T, T> cur=v[0];
  while(1) {
    pair< T, T > p;  
    fori(0, v.size()-1) if (v[i]!=cur) {
      bool f=true;
        
    forj(0, v.size()-1) if (j!=i&&v[j]!=cur)
      if (get_area(cur, v[i], v[j])<0) { f=false; break; }
        
      if (f) {p=v[i]; break; }
    }
    if (p==v[0]) break;
    vp(ret, p);
    cur=p;
  }
  return ret;
}
 
#endif
 
class TickTick {
  public:
  int count(vector <string> events) {
    
// BEGIN CUT HERE
    static bool s_FirstTime = true; if (s_FirstTime) { s_FirstTime = false; run_test(-1); }
    // END CUT HERE
    vecd v;
    fori(0, events.size()-1) {
      istringstream st(events[i]);
      double x;
      st >> x;
      vp(v, x);
    }
 
set<string> u;
 
vecd a;
fori(0, v.size()-1) vp(a, v[i]-(int)v[i]);
vs(a);
int cnt=a.size();
fori(0, cnt-2) vp(a, (a[i]+a[i+1])/2);
vp(a, (a[a.size()-1]+1)/2);
 
fori(0, a.size()-1) {
  double aa = a[i];
  double prev = 0;  
  
 
  string s;
  forj(0, v.size()-1) 
  {
    if ((int)(v[j]-aa+1) == (int)(prev-aa+1)) s += 'S';
    else s += 'D';
    prev = v[j];
  }
//    cout << aa << " " << s << endl;
  u.insert(s);
}
 
return u.size();
    
  }
  
// BEGIN CUT HERE
  public:
  void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
  private:
  template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
  void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
  void test_case_0() { string Arr0[] = {".222","00.223","1.221","4.220"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(0, Arg1, count(Arg0)); }
  void test_case_1() { string Arr0[] = {"4.220112","4.221","4.222","4.223"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(1, Arg1, count(Arg0)); }
  void test_case_2() { string Arr0[] = {"123456.1","123456.7"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, count(Arg0)); }
 
// END CUT HERE
 
};
 
TickTick TickTick_obj;
 
extern  "C" void i_know_it_would_fail_but_at_least_i_can_try() {
  TickTick_obj.run_test(-1);
}
 
 
// Powered by PopsEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/