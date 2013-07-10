/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7420
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

class BusTrip {
public:
    int returnTime(int N, vector<string> buses);
};

int BusTrip::returnTime(int N, vector<string> buses) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    vector<string> buses = {"0 1 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 51;
    vector<string> buses = {"0 5 10 15 20 25 30 35 40 50"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 51;
    vector<string> buses = {"0 5 10 15 20 25 30 35 40 45 50"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 3;
    vector<string> buses = {"0 1 2", "2 1 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 5;
    vector<string> buses = {"0 1 2 3 4", "3 1 2 0", "4 1 2 3 0", "1 2 0 3 4", "4 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 7;
    vector<string> buses = {"5 0 2 4 1 6", "0 6 4 1", "5 4 1", "1 6 5 2 3", "1 0 3 2 5 6 4", "2 4 6", "2 0 1 4 6", "2 3 1 0", "5 6 0", "3 0 5 4 1 6", "0 4 3 5", "5 1 2 6", "6 0 2 5 4 1", "6 2 4", "5 2 3 1 4", "4 3 5 1", "5 3", "2 1", "1 6 3 2 5 0 4", "0 5 6 3 2 1", "0 6 5 1 4", "4 2", "4 1", "2 4 5 3 6 1 0", "3 4 2", "1 3 0 2 6", "3 0", "5 4 6", "4 0 2", "0 1 5 4 6 3 2", "4 5", "6 1 5 4 0", "3 0", "6 2 4 0", "0 3 1 4", "6 0 5 1 4 3", "6 2", "2 3", "6 1 4", "1 0 6 3", "2 5 4 3 6", "1 3 4", "1 4 6 5 3 0 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 8;
    vector<string> buses = {"6 5 4 2 0 3 7 1", "2 5 0", "4 3", "5 2 0 3 7 1 4", "7 3", "6 5", "3 5 4 0 1", "6 1 2 0 4", "1 3 7 0 6 4", "5 0 7", "5 2 6 1 7 0 3 4", "5 6 4 3 2 7 1 0", "5 2", "4 5 0 3 1 2", "2 1 4 5 0 7 6", "1 4 5 7 6 3", "4 5 3 2", "4 3", "3 2 5", "2 0 6 3 5", "3 4 7 2 6", "5 0 7", "6 3 1 5 4 7 0 2", "0 7 4", "4 1 2 6 5", "2 1 6 5 0 3 7", "3 4", "1 3 7 6 0", "0 7 1 5 4 6 2 3", "6 1 2 5 0 7 3", "5 4 0 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 7;
    vector<string> buses = {"2 0 4 6", "0 1 5", "0 6", "6 0 1", "1 3 6 2 4 0", "5 1 4 3 2", "0 6 3 2", "0 6 5 2 1", "1 6 0", "2 5 1 0 6 4 3", "2 5", "1 3 6 0", "3 2 0 6 1 5 4", "3 0 6 2", "4 3 0 5 1 2 6", "2 6 3 0 5 1", "4 6 2 0", "6 1 4 5 0", "0 4", "4 5 6 0 2", "5 0 1 6 4 3", "1 6 3", "5 3 2 4 6", "5 1 0 6 4 3", "5 1 4 2 3", "2 1 3", "4 3 2 1 0 6", "1 0 6 2", "2 3 0 6", "3 5 4", "2 1 5 3 0", "5 2 4 6 1 0 3", "2 4 6", "1 0 5 2", "4 1", "5 1", "6 5 0 3 4", "0 5", "5 2 1 0 6 4 3", "6 1 2 4 5 0 3", "4 1 0 2", "6 4 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 2;
    vector<string> buses = {"1 0", "0 1"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 2;
    vector<string> buses = {"0 1", "0 1"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
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
    int N = 6;
    vector<string> buses = {"4 5 0 1 2 3", "4 5 3 2 1", "2 3", "5 0", "5 2 3 1 0", "0 2 1 5 4 3", "3 4", "3 4 2 5", "4 3 1 2", "1 5 4 2 0", "1 2 4", "5 2 1 0", "2 0 5 4 1 3", "3 2 0 5", "2 1 5 4", "0 3 2 1 5 4", "2 0 1 4 5", "5 0 4", "0 2 5 4", "5 0 2 1", "4 5 3 1 2 0", "3 0", "4 0 1 5", "4 2", "1 0 4 3", "1 4 5 0 2 3", "4 5 1 3 2 0", "4 1", "2 3 0 5 4 1", "2 0 3 4 1 5", "0 3", "2 5 1", "0 3", "4 3", "3 4 0 1 5", "2 5 3 0", "4 5 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 3;
    vector<string> buses = {"0 2 1", "1 2 0", "1 0 2", "2 1 0", "2 0 1"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 5;
    vector<string> buses = {"4 3 1 0", "4 2 1 3 0", "2 1 4", "1 2 3 4", "3 2 0 4 1", "3 0 1 4", "2 1 4 3", "4 3 1", "2 3 1 4", "0 1 3", "4 2 0", "0 2 3 4 1", "3 1 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 5;
    vector<string> buses = {"3 1 2 0", "3 1 2 4", "1 2 0 3 4", "3 1 0", "4 1", "4 2 1", "1 3 0 4 2", "0 3 1 4 2", "4 1", "1 0 3 2", "4 1 0 2 3", "0 3", "2 1 4 0", "4 1 0 2 3", "3 1 4 2 0", "2 4 3", "0 4", "1 0", "0 4", "4 2 3 1", "3 1 0", "4 3 2 1", "2 1 0 4 3", "4 2", "1 2 0", "2 0 1 4", "1 0 3 2", "2 4 0 1", "3 4 1 0", "0 3 4", "1 0", "1 0 2 3", "0 3", "4 0 3", "4 1 3 0 2", "4 3 2", "3 4 0 1", "1 4 3 0 2", "2 4 0 3 1", "3 4 1 0", "2 4", "4 1 3 0", "0 4 1", "1 4 2 0 3", "0 4", "4 2 3 1 0", "2 0", "2 0 1", "3 4 0", "1 3 2 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 7;
    vector<string> buses = {"0 3 5 6 2 1", "6 5 0 3 2 1 4", "3 6 0 2", "3 1 4 6 0 5", "0 6 1 2 5 3 4", "5 2 4 0 1 3", "3 6 0", "3 6 5", "1 4 6 2", "5 1 0 6 2 4", "3 4 2 0 1 5 6", "3 4 5", "3 1 4", "0 1", "5 3 0 4 6 2 1", "2 3 4 1 0", "4 0 6", "3 0 1", "6 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 17;
    vector<string> buses = {"7 5", "7 0 16 1 8 10 4 12 2", "5 2", "13 7 15 1 10 12 14 8 2 6 5 9 3 4 11"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 9;
    vector<string> buses = {"0 6", "2 5 3", "3 1 2 0 4 8", "6 1 2 4", "4 8 2 7 0 5 6 1", "7 0 8 3 6", "4 1 6 5 2", "8 3 7 6 2 5 4", "3 5 7 1 4 2", "3 4 1", "8 5 3 0 7 1 4", "2 1 3 0 5 6 8 4 7", "4 5 0 2 7", "4 3 7", "6 4 7 8 3 0 2 5", "5 2 7 1 6 0 8 3 4", "7 8 3 0 1 6", "3 6 0 8 4 5 1 2", "0 7 1 4 6 3", "5 6 1 4 7 0", "4 0 1 3 8", "1 5 2 3", "4 8 5 3 0 1 6", "4 0 7 5 1 6"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 205;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 14;
    vector<string> buses = {"0 1 9 7 3 13 11 5 6 2 4 10", "4 6", "7 13 4 12 2 6 5 0", "11 1 13 8 12 0 9 10 7 2 3", "4 13 6 7 3 5", "2 11 10 6 4 9 13 7 8 12 5 0", "13 3 9", "8 0 9 13 6 5 11 4 12 1 7", "0 9 7 2 12", "4 6 9 10 2 0 12 3 7 1 13 8 11", "12 7 11 0 4", "0 2 10 12 5 7 4 1 13 8 9 6", "7 12 13 1 0 8 10", "10 1 9 6 7 11", "0 5 8 2 3 7", "0 9 6 8", "3 5 13 9 2", "12 6 8 13 5 3 9 2", "8 5 2 7", "3 13 7 2 12 0 4 10 9 6", "4 2", "2 4 5 10 3 9 11 8 1 12 13 7 6", "9 7 11 8 6 5 2 13", "0 5 4 12 2 13 10 6 11 7 1 9"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 5;
    vector<string> buses = {"2 3 4 1", "3 2 1 0", "0 1 3 2", "4 1 0 3", "1 0 3 2", "4 0 1 2 3", "4 3 1", "2 3 1 4", "4 2 1 0", "4 3 2", "1 3 4 0 2", "3 4 1 2", "0 3 2 4", "3 2 0", "4 0 2 3 1", "2 3 1 0 4", "0 2 4 3 1", "4 3 1 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 18;
    vector<string> buses = {"17 7", "13 17 11 5 7", "2 15", "3 12 17 10 4 0 7 16 14 8", "10 3 8 2 1 5 16 11 6 7 12 13 9 0 14 4 17", "8 0 13 2 11", "11 15 16 4 1 3 13 0 14 9 6 12 5 7", "0 4 14 9 7 5 13 1 12 2 16 6 17 10 3", "1 9 2 14 0 6 3 11 8 10", "11 3", "13 1 6 11 2 8 4 17 0 7 14 5", "2 9 11 14 8", "1 2 5 17 13", "15 9 2 11 5 4 10 3 7 0 12 6 1 17 16", "9 5 13 11 3 8 14 12 16 1 17 7 6 15 10", "2 17 10 11 8 15 0 7 14 13 9 1", "6 17 11 5 2 1 3 0 9 14 15 10 4 8", "13 12 4 5 14 16 17", "14 5 15 17 10 7 0 1 8 4 3 16 6 13 11 2", "13 15 4 0", "10 16 15 14 2 3 9 0 13 17 8 7 11 4 1 6", "17 13 2", "8 7 13", "1 5 7 9 4 16 10 11", "2 10 17 12 9 8 16 15 4 1", "14 15 16 1 17 12 9 3 7 13", "4 10 3 13"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 257;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 6;
    vector<string> buses = {"4 3 5 1 0 2", "3 1 4 2", "2 1 4", "4 5 3 2 0 1", "3 2 1 4 5", "3 2 5 0 1 4", "5 3 2", "5 0 1 3", "1 5 2", "2 5 3", "0 5 3 4 2", "5 3 4 0 2 1"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 23;
    vector<string> buses = {"9 15 16 21 19 13 3 8 14 6 5 1 2 22 4 20 12 0 18 11", "18 5 15 0 17 21 14 19 13 10 16 4 7 2 11 9 22 12 20", "0 20 15 22 8 5 16 19 6", "20 10 19 6 22 16 9 17 11 18 15 12 3 4 0 21 7 5 14", "5 7 16", "11 15 16 9 19 21 14 8 2 6 1 22 3 0 13 7 20 18 17 5", "13 1 0 14 12 7 8 5 3 17 18 11", "6 0 22 13 14 4", "15 18 9 16 5 3 6 13 19 12 7 10 17", "7 21 6 0 5 16 14 11", "12 20 3 1 19 15 14 18 13 16 4 9 2 11 6 17 0 21 22", "4 15 11 16 8 7 5 1 0 9 22 10 19 14 2 6 20", "13 17 11 20 1 19 16 9 14 5 15 22", "16 11 1 17", "17 18 3", "21 3 12 8 2 9 10 15 14 5 13", "22 8 18 17 7 1 6 19 11 20 16 12", "9 7 2 19 3 8 17 13 10 1 21 11 0 22 14 16 4 18", "15 6 8", "6 12 20 7 22", "4 1 10 14 8 16 18 9", "5 6 9 4 20 19 2 14", "6 2 11 13 10 15 1 14 20 0 7 12 21 19 5 16 4 17 18", "15 6 2 22 8 12 18 3 0 13 19 7 14 4 21 1 16 11 20 5", "17 11 2 16 1 22 21 6 7 10 14 9 5 15 4 12 0 3", "12 19 0 20 9 14 4", "11 9 15 10", "13 19 5 16 2 10 21 22 12 9 15 6 17 7 4 3 0 18", "14 6 8 13 3 15 2 4 5 18 1 0", "13 5 21 0 18 9 14 3 20 2", "2 6 0 7 20 3 5 1 9 13 16 21 17 15 11 22 12 8 14 10", "1 2 6 20 9 16 10 7 22 3 15 12 13 17 21 5 0 11 18 8", "15 8 6 10 9 21 12 20 18 14 22 4 13 7 2 5 0 3 19 1", "22 21 11 19 6 16 20 13 7 12 4 10 3 5 1 8 17 18 9 0", "4 0 13 10 17", "12 19 8 20 21 5 9 14 7 3 15 10 11 16 1 6 17 0 22", "13 6 3 19 2 16 15 1 14 0 12 17 9 10 22 7 4 18 11", "17 13 19 16 3 15 14 1 21 20 11", "19 8 5 0 16 9 13 2 21 20 17 1 6 10 11 12 18 15 14", "10 1 7 8 13 15 3 14 5 12 20 16 17 11", "3 17 1 7 14 9 10 19 13 20 21 11 2 5 8 6 16 4 18 0", "2 12 7 6 8 4 18 17 5", "15 12 14 0 9 2 10 17 20 3 5 19 8 7 13 22 6 18 1 16", "9 15 19 18 0 14 20 3 4 21 12 13", "0 6 16 2 7 11 21 20 8 22 9", "15 17 9 8 20 18 5 7 0 6 14 16 13 1 3 10 21 4 19 12", "8 1 9 17 15 20 16 13 7 18 10 14 11 12 0 3 2 4 21", "14 21 20 2 3", "1 3 4 14 11 5 15 6 20 10", "14 17 11 18 12 2 13 22 5"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 277;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 22;
    vector<string> buses = {"6 14 7 9 20 13 0 4 8 16 21 10 18 1 3 5 15 17", "1 20 11 16 6 5 9 8 14 17 2 7 3 19 12 18 21", "10 20 2 8 15 7 12 1 18 17 9", "8 5 12 3 7 11 19 0 10 4 13 2 9 18 14 20 6 21 15 16", "8 6 13 18 20 4 3 5 0 14 10 7 21", "19 12 14 10 0 3 21 13 2 20 15 9 6 7 4 5 8 16 11 18", "10 14 13 12 16 3 15 19 1 5 8", "10 0 2 7", "9 20", "13 15 21 3 7 10 14 4 19 20 1 18 9", "3 8 14 6 9 11 20", "1 16 15 9 21 14 18 12 19 3 5 20 10 2 0 6", "21 6 9 1 2 11 12 0 15 17", "21 3 8 6 18 17 1 16 12 4", "19 12 10 0 7 5 9 20 1 2 4 14 21 8 18 6 3 15 13 16", "4 17 19 3 9 6 1 5 12 20 7 16 0 2 11 15 10 18", "5 0 14 15 18 7 2 16 3 9 19 6 11 20 1 12 10 21 13", "18 4 0 2 9 1 10 6 13 11 3 20 19 21 5 8 17", "4 12 6 1 9 5 14 8 16 10 0 11 17 2 15 7 13 3", "18 1 12 0 5 7 19 8 15 20 10 4 11 3 9 16 13 21 14 6", "20 4 11 17 3 1 6 14 9", "4 1 11 18", "8 15 1 16 9 20 7 12 5 19 14 3 11 13 21 17 18 4 10", "7 21 14", "0 10 19 20 1 16 7 5 9 13 14 4 8 12 11", "21 6 2 14 20 5 10 12 19 4 16 0 15 17 3 7", "17 19 10 14 13 1 2 4 12 5 8 7 0 18 20 15 11 6 21", "19 13 5 8 11 10 21 18 1 12 14", "21 13 12 0 7 6 11 17 9 14", "10 11 5 14 2 20 21 15 16 6 7 12 3 0 17 4 19 1 8 9", "4 14 2 8 20 3 21 13 19 7 16 12 9 11 0 17 5 6 18 10", "10 13 2", "5 3 21 16 2 9 14 6 12 7 17 10 4 15 18 1 0 8 20", "12 5 14 2 17 1 19 15", "14 17", "19 2", "10 6 0 1 5 9 4 16 20 18 11 15 2 17 21 7 13 8 3 14", "16 20 8 7 3 9 1 18 11 14 17 12 21 5 2 10 6", "17 21 15 5 0 7 1 12 13 11 20 16 4 2 6 18 9 10 3 8", "6 13 4 11 5 9 0 19 10 20 18 12 21 8 17 1 15 7 3 16", "17 9 20 0 4 5 16 21 6 3 12 10 7 18 2 14 8 1 15 13", "16 1 8 9 21 17 4 6 3 11 18 5 12 10 19 2 0 20 13 14", "2 1 13 21 6 17 12 5 15 18 16 10 4 11 3", "5 16 6 11 1 18 21 14 15 4 20 12 9 19 17 0 8 10 13", "21 12 10 2 4 0 3 7 17 19 14", "16 11 19 10 2 6 17 5 7 9 0 20 15", "17 7 10 8 2 12 20 1 6 0 19 4", "10 12", "13 6 8 18", "12 13 0 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 744;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 11;
    vector<string> buses = {"10 2 4 7 1 5 6 0 9 3 8", "1 6 3 0 2", "0 3 4 7 6 10 2 9 5 1 8", "1 7 0 2 10 5 8 9 4 6", "5 4 7 0 2 1", "7 3 5 4 6 8 1 9 0 2 10", "1 6 4 8", "7 3 9 10 6 1 2 5 0", "2 3 6 1 8 0", "8 10 2 3 4 6 7 9 0 5", "8 0 2 10 3 4 5 7 9", "0 2 9 8 7 10 6 5 4 3", "7 9 6 10 8 3 0 1 4", "5 1 7 3 9", "4 1", "8 5", "7 1", "8 5 7", "0 3 4 9 8 5 6 7 2 10", "8 1 2 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 23;
    vector<string> buses = {"18 10 7 15 0 8 12", "21 22 5 16 18 17", "2 3 22 20 15 17 14 11", "15 0 22 14 16 21 1 12 5", "17 9 19 0 6 13 12 21 7 10 14 4 18 3 8", "21 14", "15 8 20 22", "17 4 19 13 18 5 2 22 12 6 10 0 15 16 21 7 9 1 3 8", "15 5 22 13 3 11", "6 16 5 4 8 2 13 14 19 22 12 18", "9 4 12 3 6 13 1 2 18 16 22 5 8", "9 3 16 7 14 18 5 12", "4 22 14 19 10 13 8 5 2 1 21", "17 8 6 9 3 2", "10 6 5 7 18 14 3 16 17 4 0 15 2 21 13 11 19 1 8 20", "2 0 7", "9 4 5 19 22 7 13 14 1 21 17 3 6 16 20", "1 9 0", "16 0 12 7 19 17 20 2 15", "6 0 19 8 7 1 15 11 3 12 18 5 13 22 9"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 23;
    vector<string> buses = {"15 22 14 1 0 6 3 20 10 18 11", "22 4 2 0 9 15 8"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 449;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 26;
    vector<string> buses = {"8 22 18 25 24 20 2 16 1 4 10 19", "8 11 0 1 13 21 23 24 25 20 14 3 16 4 6 12 17", "18 6 12 25 16 0 14 1 13 10 17 15 5 21 7 22 8 9 24", "18 6 9 2 8 22 4 0 16 24 5 3 11 13 19 17 14 20 7 21", "4 10 14 6 21 9 22 20 25 23 8 15 16 7 12 1 3 13 11", "2 3 21 17 22 11 19", "10 11 2 7 23 25 0 15 21", "16 11 15 0 14 5 12 24 6 13 1 19 3 8 20 2 9 18 21 7", "10 6 8 15 7 18 14 21 16 3 2 24 0 9", "22 13 18 9 0 3 11 16 25 5 10 21 24 8 7 14 4 23 2", "15 1 9 20 5 4 22 6 23 16 3 17 13 7 18 24 11 12 25", "14 25 19 13 1 16 24 17 10 18", "18 21 15 8 7 2 22 14 10 24 25 1 20 3 16 19 6 11", "13 16 2 17 19 5 23 7 9 25 6 8 18 24 3 21 11 4 1 10", "14 6 24 15 8 1 18 5 11 2 17 20 16 0 19 10 4 12 25", "1 8 9 14 3 11 19 21 13 15 0 7 4 20 25 16 6 2", "12 6 8 7 19 10 5 0 15 23 9 2 25 21 3 14 17 18 13", "3 9 22 6 2 24 0 16 15 14 5 18 19 12 8 13 1 20 23", "6 21 13 3 18 19 23 20 8 2 17 9", "22 16 10", "14 7 23 0 4 13 2 16 10 22 15 25 1 21", "16 24 1 19 25 0 18 12 6 13 15 23", "24 9 7 8", "23 4 19 6 8 9 12 7 3 22 24 25 0 18 17 2 20 13", "9 16 10 22 19 25 12 18 13 6 20 7 21 17 3 15 8 11 5", "10 22 18 7 17 21 16 8 0 23 5 2 6 4 25 9 3 14 12 20", "13 22 16", "10 6", "11 18 2 13 15 22 1 3 17 19 12 0 6", "20 11 9 23 24 2 18 4 0 8 14 5", "3 0 18 25 2 10 16 20 17 14 13 6 9 11 5 21 7 1 24 4", "5 10 0 11 24 15 16 18 6 2 13 21 17 8", "14 22 23 4 8 10 17 19 9 15 13 7 16 6 12 0 3", "10 3 2 20 6 22 12 8 19 1 15 13 21 18 16 24 23", "24 18 3 10 8 12 5 2 6", "18 25 8 9 20 19 12 22 16 21 3 6 13 23 24 10", "7 15 9", "19 6 0 15 20 17 8 23 10 12 13 7 3 9 5 1 21 18 25", "23 4 2 11 1 18 20 15 9 7 13 10 19 24 25 17 8 5", "10 9 11 22 25 19 23 6 1 3 4 15 21", "5 1 22 16 0 15", "25 15 19 2 18 0 22 17 10 14 16 9 20 6", "13 15 23 17 21 11 24 3 16 9 2 18 22", "5 17 11 7 18 2 0 1 9 24 4 8 21 10 14 25 23 12 15", "9 21 15 10 14 0 7 6 25", "0 25 11", "0 4 7 12 25 14 15 18 8 6 23 16 1 22 3 2 21 20 11", "16 23 21 19 8 17 25 3 15 22 10 2 1 5 11 13 6 18", "17 16 18 13 4 3 22 21 1 19 24 23 8", "0 1 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 281;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 17;
    vector<string> buses = {"16 3 1 9 6 7 10 5 4 8 2 11", "2 15 5 12 9", "2 8 0 16 10 7 4 3", "9 4 3 10 0 15 12 1 11 13 14", "6 8 4 13 0 7 9 10 11 12 2", "3 1 4 11 7 15 2 9 10 12 5 16 14 0 6", "15 5 2 8 1 13 4 11 16", "14 11 3 5 15 6 12 7 13 9", "6 4 16 1", "16 5 1 15 3 14 6 2 4 9", "16 8 5 6 13 3 14 10 1 0 7 9 4 12", "6 7 8 11 0 3 12 10 15 14 9 2 1 4 16", "8 15 13 12 14 16 11 1 10", "0 6 2 11 5 12 9", "3 2 14 16 12 4 0 8 13"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 17;
    vector<string> buses = {"3 7 5", "15 11 4 3 14 2 13 7", "8 0 1 2 9 3 4 6 14 10", "12 8 7 6 3 16 4 5 15 11 13", "4 10 12 15 6 16 14 8 9", "5 3 12 13 1 7 0 15 6 4 11 16 10 14 8 2", "1 5 4 15", "16 8 2 0 14 5 1 12 15 3 10 13", "5 11 14 0 3 15 6 2 9 4 13 7 1 10 8 12", "10 2 3 5 9 1 4 16 6", "16 9 12 15 8", "10 12", "6 3 8 4 16 2 5", "8 14 6 11 13 7 10 9 5", "12 3 10 11 1 8 16 2", "12 15 4 16 10", "15 14 10 8 12 16 4 2 1", "15 9 7 0 10 2 1 16 11 4 5", "10 0 9 11 16 15", "8 1 15 13 5 6 11 7 4 14 12 3", "7 0 9", "10 4 11 1 6 12 15 9 13 7 16 5 3 2 14 0 8", "5 12 0 13 11 16 9 4 2 15 6 14 7 8 3", "15 6 1 13 5 10 16 12 2 9 7 0 8 14 11", "7 13 3 15 16 14 1 11 10 12 9", "10 15 11 12 9 5 16 1 0 6 7 3 4", "14 3 13 0 15 10 9 2", "1 9 13 15 14 16 10 8 3 2 11 0 12 7 4", "4 13 8 15 1 11 2 0 5 7 12 10 3", "0 13 11 2 14 12 7 4 3 6 10 5 8 9 1 15", "8 15 1 7 14", "2 15 0 9 6 3 13 1 8", "15 8 13 1 0 9", "1 11"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 25;
    vector<string> buses = {"24 14 9 7 2", "21 4 18 24 7 1 2 11 8 9 14 16 5 17 13 23 19 15 22", "12 22 24 9 1 5 10 8 7 18 16 19 4 13 17", "14 5 17 9 23 7 16 22 10 4 6", "19 8 1 9 24 3 5 22 16 7 6 4 10 23 17 0 13 15", "2 16 10 13 14 1 11 20 0 24 22 23 19 4 18", "19 15 18 0", "15 9 22 5 20 8 23 14 24 18 21 6 13 19", "2 6 19 3 21 10 20 22 24 13 16 15 8 18 17 14 5", "19 10 1 7 5 11 21 8 14 0 17 23 12 2 3 16"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 12;
    vector<string> buses = {"5 6 11 3 10 9 4", "9 3", "5 3 0 4 10 1 2 8", "6 11 9 0 8 1 3 2 7 5 10", "8 6 0", "4 2 9 1 6 0 10 8 7 5 3", "8 6", "6 2 8 3 1 7", "3 1 11 7 4", "5 1 9 4 2 8", "3 8 4 7 2", "2 9 3 6", "8 0 4 6 7 11 9 5 10", "8 5 3 7 1 0 2 9 4", "11 4 6 10 8 5 9 1 2 3 0 7", "0 5", "2 9 3 5 6", "10 1 0 5 6 9 11 3 2 4 8", "11 2 1 9 8 0 10 3 7 4 5", "0 11 1 4 3 2 10 7 6", "1 8 5", "8 7 4 5 6 9", "6 0 11 8 3 10", "1 2 11 5 4 0 3 9 7 10 6 8", "4 5 3 0 6 11 1 8", "6 5 7 11 9", "4 3 0 6 1 9 2", "2 4 1", "4 5 11 1 0 3 10", "10 11 7", "10 9 6", "7 6 2 4 8 9 0 3 10", "8 0 1 10 6", "2 10 11", "5 9 0 8 10 3 11 7 6 4 1", "0 9 7 1 4 11 10 6 8 3 5", "5 3 8 9 11 2 10 7 4 0", "11 0 10 3 8", "11 5 4 10", "2 11 8 4", "9 8 10", "6 2 1 9 7 5 10 11 3 0 8", "5 7 4 9 3 8 10 2 11 0 1 6", "1 8 10 11 2 4", "6 5 9 10 2 8 11 4 0 3 1", "5 1 11 4 0 3 2 9 8 7"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 5;
    vector<string> buses = {"4 3 1 2", "2 3 1 0 4", "3 2 0 4 1", "0 2 1 4", "4 0 1 3 2", "4 3 1 2 0", "4 3 2 0 1", "3 4 0 2", "0 2 4 1", "2 0 4 3", "3 4 2", "2 4 0 1 3", "1 0 2 4 3", "4 1 2 3", "3 1 4 0", "4 1 3 0", "1 3 2 4 0", "2 3 4 1 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 27;
    vector<string> buses = {"25 24 10 18 8 16 14 11", "1 25 21 20 8 14 11 12 0 16 9 10 3 17 19", "18 25 9 4 3", "14 17 25 3 7 16 6 2 19 11 26 23 18 9 8 1 15 12", "13 16 1 26 10 22 3 11 12 23", "4 9 17 22 24 0 11 25 18 13 5 2", "17 0 11 15 7 1 8 26 12 18 3 22 23 10 25 16 6 5 9", "5 14 2 1 16 22 0 9 12", "26 17 2 18", "20 9 17 19 0 22 15 2 26 8 23 1 16 25 6 13 5 10 11", "24 10 19 25 15 8 6 11 18 0 7 26 21 20 5 12 2 9 3 4", "22 11 20 15 23 1 0 7 16 13 5 12 2 10 9 26 8 21", "22 20 19 23 9 26 17 18 24 8 13 14 21 6 16 10 11 25", "1 2 21 25 5 11 23 15 14", "25 21 1 2 17 11 13 19 6 4 24 14 18 5 3 8 20 0 26", "22 25 12", "24 6 22 13 9", "6 9 5 16 0 10 25", "6 25 19 13 21 17 26 3 1 11 9 16 12 20 4 23 5 7 18", "2 8 12 5 13 14 17 1 3", "16 24 10 26 13 21 17 25", "17 0 9 18 24 7 21 8 20 14 2 3 4 10 23 5 25 13 15", "6 11 19 25 14 17 15 13 23 22 0 24 20 3 1 9 21 5 18", "4 25 11 9 22 16 5 20 15 24 18 19 7", "12 18 21 11 13 24 14 22 8 23 16 2 20", "13 16 6 14 20 7 21 26 18 2 12 22 9 1 0 19 11 3 17", "26 13 6 14 22 17 11 23 5 16 8 3 0 21 25 24 1", "4 13 10 26 16 12 9 25 7 8 0 2 18 6 15 17 14 11 23", "1 13 17 7 5 2 16 20 9 6 26 25 0 21 22 15 11 14 24", "15 12 17 5 21 7 20 0 19 2 16 11 8 13 22 6 25 10 23", "2 23", "19 20 23 18 12 21 3 16 1 13 5 22 25 9 2 17 11 10 6", "9 20 11", "5 10 3 23 9 17 2 20 7 19 15 22 13 26 6 16 18", "26 13 1 0", "23 0 3 11 18 22 24 19 8 13 5 14 10 16 25 17 15 12", "20 6 2 1 18 17 19 9 14 21 4 5 15 10 8 16 11 3 24", "11 1 18 6 14 7 26 20 24", "8 13 1 12 16 19 4 26 0 14 3 6 23 10 24 15 25 7 22", "13 6 8 7 26 24 4 0 14 18 20 2 22 5 1 9 11", "0 5 16 2 13 26 19 6 12 9 21 15 7 3 18", "5 1 23 15 2 19", "2 12 13 23 11 5 4 24 21", "25 24 12 3 1 8 21 7 14 23 26 5 0 4 17 20 11", "12 23 6 1 3 8 4 13 9 26 11 21 20 19 15", "22 5 24 14 10 3 17 19 20 0 11 23 25 15 1 26 6 4 2", "19 7 23 22 8 20 11 1 16 2 13 25 24 0 15 26 18 6 3", "21 25 13 8 15 16 7 2 20 18", "19 11 0 9 10 5 26 15 24 22", "26 4 13 12 11 10 19 8 1 20 25"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 12;
    vector<string> buses = {"6 7 2 10 5 0", "6 3", "11 9 4 6 5", "10 2 3 11 5 6 0 4 9", "5 0 8 3 10 7 4", "7 1", "1 11 0 3 7 5 8 4 9 10 6 2", "3 7 9 2 11 4 10 6 8 1 5 0", "6 7 9 1 5 11 2 8", "11 8 6 7 0 2 4 1 9 3 5", "4 3 9", "0 9 7 3 10 8 6 4 1 2 11 5", "1 0 5", "8 9", "0 2 7", "0 4", "11 6 4 10 2", "5 2 9 0 3 10 8 6 1 11 7 4", "7 9 5 11", "0 8 6 2 7 11 4 9 10", "7 11 8 5 9", "9 6", "10 6 5 3 0 8", "4 0 2 7 11 9 1 8", "6 4 1 5", "8 9 3 5", "11 2 5 10 6 9 4 7 1 8 3 0", "4 8 2 1 11 9 0 5 7 6", "6 1 4 0", "10 8 3 4 0 6 1 2 11 7", "9 11 0 2", "1 9 4 10 11 6 2 7 3 8", "9 8 6", "7 9 10 11 4 8", "0 8", "0 10 7 11 3 5 6 8 9", "4 5 6 8 9 1 0", "0 7 8 6 10 3 5 2 11 9", "3 6 0 9 5 1", "8 7 4 5 0 6", "7 6 10", "4 1 8 3 10 2 6 5 7 9 0", "2 7", "10 2 6 0 4 7 11", "5 2 1 6 7 9 8 3 4 10", "6 10 7 1 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 12;
    vector<string> buses = {"3 5 7 11 2 1 4 0 8 6 10", "3 4 9 5", "9 1 7 4 11 0", "7 11 0 1 3 6 8 9", "4 2 5 0 10 9 11 6 1 7 8", "4 2 6", "7 1 11 10 9 2", "9 8 11 3 1", "2 9 7 0 1 11 4 8 3 5 10 6", "7 2 8 4 6 0 1 9 3", "6 10 3 4 0 1 9 7", "1 11 7 10", "0 4 9 5", "2 10 6 7", "0 2 1 6 8 4 10", "1 9 3 7", "10 5 11 3 7 4", "4 2 5 9 11 3 6 0", "0 11 10 3 7 8", "5 7 10 9 1 6 2 4 0 3 8 11", "11 1 8 2 5 4", "6 3", "0 4 3 8 11 10 1 7 2 5 6 9", "3 5 7 4 2 9 6 8 10"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 20;
    vector<string> buses = {"17 8 13 15", "2 3 19 17 18 4 9", "4 8 17 13 3 11 6 0 18 2 1 14", "12 3 19 15 9 8 18 6 17 7 16 5 4 0 10 14 2 13 1 11", "7 19 17 0", "8 16", "13 7 3 1 2 14 10 11 18", "19 8 1 6 16 14 15 13 5 11 12 0", "15 5 10 18 12 4 7 17 14 16 11 9 8 3 19 6", "13 19 5 4 18 8 2 10 15 12 7 9", "13 9 0 18 15 3", "6 17 14 7 19 18 15 12 11 13 0 5 3 4", "6 17 13 3 9 14 7 11 2 12 10 8 1", "10 6 17 16 11 19 5 13 9 12 3 15", "5 2 11 9 15 10 17 0", "19 16 5 14 2 1 17 12 3 9 4 18 7 10 8 6", "17 11 0 19", "9 13 6 0", "7 18 5 6 12 4 19 1 10 14 2 13", "11 2 19 17 7 15", "16 15", "10 12", "4 10 15 18 5 13 14 6 9 8 3", "13 0 19 11 10 15 1 9 7 6 16 18 12 5 3 4 8 14 2 17", "15 7 10 6 14 19 13 17"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 245;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 33;
    vector<string> buses = {"9 13 22 23 18 27 3 28 10 1 21", "8 9 19", "18 28 23 15 12 13 10 30 4 1 21 0 7 17 26 9 32 11", "4 28 20 1 30 17 31 8 15 5 2", "15 31 3 0 25 17 24 8 23 4 19 10 18 28 26 22 5 32", "21 29 4 9 13 31 23 32 25 18 8 2 14 17", "30 14 11 15", "7 4 2 3 32 30 25 12 28 13 5 20 18 10 23 19 17 31 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 373;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 10;
    vector<string> buses = {"2 9 0", "7 3 2 0 9 4 8 5 1 6", "8 1 9 6", "0 8 7 2 6 9 4 1 3", "0 1 6 3 7 8", "6 4", "3 6 1 5 9 2 8 4 7", "2 0 9 6 4", "6 7 8 9 4 5 2 3 0 1", "8 2 7 1 0 6 3", "1 4 2 7 6 0 5 3 8 9", "5 2 1", "6 9 4 5 7 8 1", "9 7 5 6 0 4 3 2 8 1", "7 8 5 6 0 3 4 9", "1 9 6 5 8 3", "1 5 6 8 7 0 4 9 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 41;
    vector<string> buses = {"14 27 13 4 32 37 17 3 40 24 34 25 29 31 8 12 7 0", "14 0 20 32 8 21 18 11 29 39 6 23 26 17 1 25 38 36", "16 24 10 15 34 25 2 6 13 8 39 7 19 35 14 11 40 21", "5 28 10 1 38 15 18 35 7 37 21 23 8 3 9 14 6 31 27", "9 15 20 39 6 4 1 17 5 32 21", "24 40 25 7 0 20 27 31 29 38 39 4 34 32 17 35 37 19", "6 17 12 15 13 37 27 36 21 9 29 38 4 18 14 40 24 1", "3 39 11 17 31 10 12 18 40 38", "26 12 8 5 22 3 29 1 30 14 33 37 9 39 10 21 25 0 16", "29 34 10 35 6 33 28 1 21 2 22 8 15 16 31 39 25 4", "4 26 0 36 10 37 25 28 24 9 8 6 31 30 20 11 32 5 35", "38 6 0 18 7 10 17 16 2 19 36 23 37 22 32 33 20", "20 19 2 4 13 7 32 16 11 18 26 25 33 31 34 21", "22 24 37 7", "22 10 5 4 39 20 3 2 23 36 18 26 1 0 24 21 33", "20 12 15 2 28 0 22 36 1 10 17 8 11 3 23 40 24 37", "28 26 16 27 32 40 10 18 25 33 8 35 7 17 6 15 29 36", "32 0 5 20 18 26 27 23 33 12 1 6 2 19 35 39 29 11", "4 29 19", "18 26 39 1 14 11 16 34 8 31 13 15 10 2 19 27 22 30", "29 12 11 28 14 31 16 27 30 22", "26 34 36 12 31 39 4 9 8 24 1 38 10 25 29 15"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 504;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 32;
    vector<string> buses = {"31 0 29 27 4 30", "21 18 12", "16 19 28 30 14 6 11 0 24 21", "25 3 20 24 6 21 4 9 18 16 15 12 1 27 11 7 22", "23 0 14 26 11 1", "20 29 23 15 12 26 7 8 28 1 16 27 22 2 3 4 6 19 31", "25 6 8 17 11 24", "18 14 25 7 16 31 21 19 23 3 10 8 20 4 29 9 24 11 1", "12 24 2 10 7 13 14 4 15 8", "9 30", "29 26 17 9 8", "23 30 19 15 9 4 20 26 13 5 3 17 25 31", "2 31 18 9 29 12 8 20 22 5 25 4 28 19 3 17 0 15 11", "17 23 31 20 8 22 6 10 27 24 29 5 4", "29 6 9 23 18 14 16 3 10 25", "29 25 19 8 13 11 12 17 23 6 28 7 22 27 31 5 3 9 15", "15 26 14 21", "6 10 11 26 17 4 23 14 3 8 30 16 25 9 1 7 31 20 18", "2 27 19 0 20 8 14 4 12 15 24 22 21 31 9 18 3 5 11", "15 10 27 25 9 2 26 30 31 22 29 14 17 16 0 21 28 24", "2 23 20 26 16 11 1 29 31 15 25 30 6 13 5 24 0 14 9", "17 22 11 30 23 25 4 6 1 28 3 29 0 24 13 5 20 8 26", "30 18 14 16 4 10", "3 14 7 2 30 28 17 27", "1 2 31 9 28 16 14 27 0 30 29 15 4 5 10 24 20 18 8", "12 17 8 13 15", "31 30 20 10 4 0 24 19 16 13 11 29 26 9 15 3 23 1 8", "1 15 14 25 29 20 24 31 16 0 28 7 12 2", "14 20 6 11 27 10 21 15 8 24 12 26 23 22 13 17 25 0", "3 10 16 23 24 20 18 19 7 22 6 2", "22 5 26 13 8 7 15 4 6 3 0 10 21 11 27 20 19 24 16"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 19;
    vector<string> buses = {"11 9 3 4 12 10 15 18", "14 3 7 13 12 6 8 11 10 16", "8 4 14 18 13 2 17 15 10 7 3 9 0 5 12 1 11", "7 9 2 3 5 14 4 8 11 18 10 15", "2 16", "11 10 17 14 12 15 8 0 4 2 5 9 13 7 16 1 6 3 18", "7 17 1 2 10 5 18 13 0 16 12 4 14 11 6", "7 8 2 13 5 10 18", "13 0 10 7 3 5 1 9 12 15 11 16 14 6 17", "5 9 12 4 11 6 0 17 18 3 8 10 14 16", "11 7 1 15 14 0 18 4 16 6 3 8", "5 8 16", "7 10 17 13 4 3 9 15 2 1 0 6 5", "15 5 6 7 3 0 11 10 12 8 2 16 18 17 9 14"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 8;
    vector<string> buses = {"7 5 0 2 1 3", "6 4 5 0 2 7 3 1", "4 0", "4 7 2", "5 3 2 7 1 4 0 6", "4 7 5 2 3 0 1", "6 4 7 1 3 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 43;
    vector<string> buses = {"32 10 19 13 17 22 33 37 28 35 12 42 38 27 14 4 34", "17 21 28 14 42 5 33 8 3 35 26 31 25 34 18 13 19 6", "39 10 30 1 41 20 32 38 5 11 34 6 7 8 15 19 37", "25 9 31 41 14 29 3 27 35 30 42 40 13 23", "13 4 8 21 16 7 39 22 19 29 27 3 33 2 31 32 34 35", "20 3 8 13 38 41 5", "30 24 23", "24 42 2 17 26 35 0 12", "25 34 5 11 28 13 1 21 7 19 40 38 23 12 42 0 35 37", "12 37 1 34 4 13 15 0 6 35 3 22 20 18", "27 39 3 20 22 33 5 8 18 21 6 42 31 30 17 12 37 28", "6 7 2 42 9 16 1 32 20 21 22 8 13 24 33 27 3 19 17", "7 39 4 18 15 17 8 3 20 2 0 27 32 36 25 11 1 24 28", "28 11 15 19 38 31 27 30 16 13 33 4 26 41 22 10 18", "21 23 37 29 18 25 27 36 30 8 28 20 42 38 6 11 26 4", "39 23 17 28 30 21 33 3 14 10 0 22 38 11 32 35 5 13", "42 33 39 2 5 17 3 37 25 0 21 20 24 31 26 40", "5 28 41 2 17 8 38 24 6 11 26 27 14 40 15 32 34 16", "11 3 15 39 17 0 24 25 4 23 37 33 22 8"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 35;
    vector<string> buses = {"26 23 16 9 25", "11 33 0 5 4 28 17 7 2 25 6 9 29 22 32 16 13 31 26", "3 1 14 29 25 2 31 30 22 21 12 10 8 20 4 9 23 11 34", "3 34 22 27 7 28 25 20 14 8 32 9 19 15 21 26 12", "24 15 16 11", "8 14 20 25 1 7 28 0 10 17 16", "24 12 6 29 32 21 9 15 14 19 23 2 11 16 34 7 1 27", "21 0 33 12 26 15 27 11 14 16 9 24 31 25 8 19 3 13", "30 27 18 4 31 5 6 8 22 15 29 33 7 23 1 9 17 10 32", "32 3 29 26 6 31 14 7 13 8 9 12 20 11 17 10 5 0 4", "28 34 24 30 27 0 16 14 4 15 33 17 23 3 22 12 8 10", "12 6 18 20", "24 30", "0 33 25 16 8 2 12 7 29 6 24 1 3 23 20 4 27 21 34", "21 27 3 10 32 18 34 8 33 30 16 19 5 17 15 1 14 7", "9 18 23 19 11 5 17 24 3 25 1 31 4 26 33 10 16 2 7", "12 15 26 13 33 30 7 24 27 5 3 31 28 20 14 16 32 0", "7 10 15 24 23 19", "20 4 29 30 10 2 18 26 15 21 1 12 17", "12 19 26 25 17 15 5 16 32 22 6 14 4 8 3 30 0 29 2", "13 23 33 0 5", "8 11 25 2 10 1 7 29 17 5 31 15 24 12 32 13 14 28 4", "0 32 16 10 30 13 20", "14 4 9 31 3 26 6 7 28 30 16 24 8 19 21 32 2 29 34", "22 1 11 2 6 24 29 30 0 4 21 10 17 18 13", "31 32 29 30 16 13 22 23 26 5 4 18 21 34 14 9 7 20", "17 5 24 2 28 7 25 13 1 19 3 10 33 20 14 12 32 30", "31 28 19 12", "20 12 27 0 8 16 19 10 7 5 11 15 34 23 26 14 25 4", "15 23 21 26 14 31 7 28 12 0 34 18 9 4 20 19 30 29", "15 7 3 10 2 28 26 11 34 12 4 1 33 5 13 16 27 8 6", "24 12 28 13 29 3 32 11 2 15 4 8 19 33 26 30 31 9", "29 7 4 27 8 23 13 25", "12 6 30 20 33 19 10 8 24 17 29 7 26 5 1 15 23 0 13", "21 10 6 9 5 18 22 23 1 25 27 29 30 13 0 31 19 34", "32 12 26 34 24 27 3 6 5 13 2 17 7 15 10 33 31 8 22", "13 33 28 23 11 3 17 30 19 8 29 14 15 20 22 21 5 34", "16 14 21 2 34 19 22 5 0 9 23", "1 24 25 30 34 15 23 12 3 26 16 11 28 8 18 31 32 10", "14 9 2 5 18 0 30 17 10 21 25 11 32 6 16 12 15 29 1", "10 18 2 27 22", "16 19 8 20 6 15 25 2 26 34 30 5 32 9 7 13 12 10 18", "9 22 34 32 3 15 33 6 18 5 7 2 11 14 8 16 19 17 0", "4 28 6", "7 11 20 23 0", "3 23 10 7 4 9 13 16 17 27 25 32 26 0 14 11 6 28 30", "28 2 17 1 13 12 10 33 9 27 18 0 14 22 5 4 34 23 21", "26 33 21 20 23 29 8 1 7 19 2 34 22 24 15 28 10 9", "8 23 21 19 5 11 22 15 3 28 17 29 31 20 12 27 34 0", "5 6 2 20 32 17 28 31 24 14 0 15 22 25 11 8 33 16"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 41;
    vector<string> buses = {"8 16 28 10 23 29 37 9 26 36 27 21 15 18 25 24 11", "12 3 34 18 28 31 17 35 29", "7 36 11 2 40 23 37 17 3 0 18 20 25", "17 31 29 16 40 22 21 0 25", "20 30 14 18", "6 7", "21 31 35 12 5 27 30 28 15 20 3", "13 1 31 33 39 26 27 11 12 17 7 29 28 15", "30 25 8 16 32 15 12 14 39 11 27 18 26 40 20 33 36", "30 3 13 27 32 34 26 29 8", "6 28 32 27 16 18 11 15 33 38 30 17 34 31 40 36 8 0", "24 40 2 11 28 4 36 16 8 39 21 13 1 23 18 26 10 14", "35 22 1 16 37 38 39 9 5 40 4 20 8 12 14 25 6 24 31", "1 7 8 28 12 4 2 6 0 19 37 23 29 30 34 9 15 11 16", "31 7 17 32 5 36 27 14 4 13 9 12 2 19 8 39 37 25 16", "32 38 4 26 2 7 40 14 36 22 12 0 39 13 16 9 33 37", "13 18 0 35 20 34 33 38 30 11 26 40 4 37 23 21 17", "22 15 30 34 7 28 10 3 25 39 18 24 40 9 33", "32 10 29 0 2 26 19 16 39 18 22 25 38 37 17 5 3 1", "17 4 33 15 19", "36 8 15 9 39 22 13 31 19 0 7 40 6 4 34 28 24 18 25", "20 12 4 32 17 22 28 39 18 6", "6 12 10 5 14 37 38 1 19 24 25 23 20 0 15 2 31 36", "7 17 29 30 26 10 33 21 16 8 23 32 22", "35 5 2 21 40 22 37 25 38 13 28 14 8", "1 29 24 11 36 25 32 27 38 5 9 15 28 37 23 35 31 14", "16 3 26 13 30 24 7 18 11 14 29 0 34 8 35 23 5 4 1", "13 24 38 30 7 10 23 25 26 17 37 31 3 2", "4 7 23 22 19 20 40 36 16 13 21 3 14 34 38 1 8 32 9", "23 37 27 26 7 34 29 31 20 39 9 25 30 17 2 22 5 14", "35 30 7 21 17 31 33 1 24 37 11 10 40 36 18 4 27 9", "27 18 2 15 40", "8 29 14 39 2 22 18 5 3 17 35 38 36 31 30 1 21 32", "22 0 37 7 32", "28 20 13 30 16 26 32 37 36 4 19 24 9 15 0 8 7 14", "15 1 6 29 3 11 23 27 2 0 28 30 21 14 31 20 39 24", "22 32 25 34 8 24 15 5 9 33 11 20 38 3 37 21 0 31", "28 15 1 14 22 40 20 3 6 9 21 34 23 2 36 35 11 33", "30 14 39 13 17 32 28 1 31 23 26 25 38 37 7 29 21", "1 27 30 6 26 22 29", "16 3 8 32 30 26 6 19 15 28 0 5 20 23 7 2 24 12 29", "30 16 24 22 34 18 4", "5 4 13 31", "2 40 29 26 35 12", "15 4 2 34 21 27 10 23 33 20 19 17 32 8 24 35 30 25", "5 17 32 13 2 15 24 21 31 11 3 7 14 25 20 9 34 4 23", "1 2 17 6 28 21 12 24 29 19 37 10 32 7 13 33 35 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 603;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 22;
    vector<string> buses = {"11 17 2 8 21 10 6 18 1 15 20 13 16 12 19 5 7 9 3 0", "20 15 14", "15 7 0 21 13 10 18 6 12 4 9 14 2 5 20", "9 19 17", "8 20 18 12 4 0", "12 8 17 5 1 3 10 14 11 0 21 20", "3 17 10 14 5 0", "4 12 21 17 18 14 19 13 10 3 5 9 8 2 1 20 0 15 16", "2 17 7 11 3 13 5 20 14 19 1 21 12 10 6 4 15 9 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 552;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 14;
    vector<string> buses = {"5 9 4", "13 8 7", "8 1 3", "1 12 3 4 10 5 6 13 0 8 7 2", "5 11 6 8", "1 9 2", "9 0 1 5 12 4", "0 1", "10 13", "11 0 6 7 9 1 2 10 8 5 13 12 3", "4 11 10 9 7 3 12 0 8 5 2 13", "11 7 1 13 12 0 8 6 10 5 4 2 3 9", "11 6 7 9 4 0", "4 2 6 7 8 11 10 0 12 5", "6 7 3 2 10 4 5", "13 5 4 11 7 9 2 8 1 10 6 3 0 12", "0 3 2 9 7 10 6 12 8 5 13", "7 13 5 2 1 11 3 8 4 12 6 10 0", "10 3 12 1 0 7 2 5 13 4 9 6 8 11", "10 4 11 12 1 6", "10 1", "7 10 6", "2 8 6 0 10 11 1", "12 8 11", "5 4 0 12 11 10 7 6 8 2", "10 3 11", "5 8 3 10 7 4", "5 9 13", "12 13 1", "12 7 3 6 8 9 13 4 10 5 1 2 0", "12 7 8 6 2 10 13 0 5 9 4 1 3 11", "6 13 2 4 12 5 0 1 10 7 8 3 11 9", "12 9 11 7 3 8", "1 5", "6 13 11 0 9 7 4 2 8 5 10 12", "12 13 4 8 11 6 5", "7 9 4 13 8 2 1 12 0 11 6 10", "9 11 7 5 3", "8 11 2 13 7 4 1 9 5 3 10", "10 4 9 11 13 1 7 5 2 12 0 3", "4 11 6 0 5 8 12 2 13 9 7 3 10", "0 10 5 4 7 6 1 11 2 12 13 9"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 27;
    vector<string> buses = {"12 17 10 1 18 15 26 8 24 11", "22 26 10 19 25 13 17 18 23 5 0 14 15 3 2 11 9 24", "4 6 12 13 23", "3 24 11 2 26 8 18 9 15 21 7 13 23 17 16 4 25 22 10", "17 5 22 0 6 10 9 3 26 12 2", "21 7 17 24 1 2 4 22 0 3 12 19 16 14 6 5 23", "23 8 18 10 14 21 25 5 13 12 9", "22 1 16 2 4 10 24 25 14 17 0 6 18 15 5 20 23 13 19", "22 0 17 6 21 8 16 15", "18 9 23 8 15 22 4 20 10 25 17 13 7 12 2 26 16 0 6", "13 10 8 26 22 3 24 12 6 19 7 2 21 0 14 11 15 9 17", "19 20 2 12 13 1 7 25 6 21 9 3 26 17 16 4 14 11 0", "4 8 15 2 5 19 11 7 1 22 16 25 9 20 0 3 24 18 13 6", "15 14 20 9 0 8 13 16 22 23 19 2 3 4", "14 18 6 1 3 21 22 24 8 0 16 4 26", "6 15 11 16 24 14 1", "0 2 12 26 20 16 3 1 22 14 8 7 5 6 25 4 15 18 24 9", "14 0 5 10 2 12 6 15 9 17 8 4 18 3", "0 21 11 26 18 20 23 8 24 16 6 5 2 15", "9 0 2 12 10 1 11 22 5 21 23 14 13 7 6 25 16 24 8", "16 9 12 21 6 20 5 2 26 25 17 7 8 23 1 18", "25 9 8 5 19 17 0 18 14 6 15 22 3 20 10 21 13 1 16", "16 9", "26 11 13 21 6 24 25 9 2 7 17 19 5 22 4", "23 5 26 14 12 2 16 15 0", "1 15 6 22 16 7 2 12 26 18 14 13 20 10", "0 3 11 17 15 13 23 4 5 25 19 18 1 7 22 12 8 16 14", "19 16 21", "7 9 26 0 16 5 6 11 4 8 3 13 10 14 19 25 23 22 20", "14 12 1 4 10 20 9 23 13 2 21 16", "25 14 24 12 2 0 15 9 20 8 19 22 7 6 23 3 17 5 16", "16 12 2 6", "19 18 16 6 5 13 7 11 15 22 23 20 25 2 12 4 9 10 3", "9 11 24 25 15 1 0 12 7 2 10 19 5 22 17 13 23 4 6 8", "17 25 26 13 14", "23 9 7 26 5 4 2 18 24 0 13 16 1 8 15 21 25 6 11 22"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 10;
    vector<string> buses = {"2 3 6 1", "7 6 2 0 8 3 4 5", "0 3 6 8 5 1 2", "1 3 9", "2 6 0 9 3 8 4 1", "8 0 9 3 6 1", "1 2 6 7", "1 2 3 9 8 0 6 5 7 4", "1 5 0 9 2", "2 1 9 7 3 5 4 0 8 6", "3 1 4", "0 1 2 8 4 5 9", "5 8 4 2 1 7 3 0 9", "3 2", "2 8", "1 2 5 4 8 3 0 6 9 7", "4 7 2 9 1", "3 7 5 8 1 6", "0 4", "3 8 7 6 2 4"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 175;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 24;
    vector<string> buses = {"13 18 22 10 20 4 1 17 23 5 9 7 16 11 21 12", "9 16 23 1 13 7 21 5 3 14 20 18 4 12 8 2 11 22 6 0", "13 6 11 3 16 15 23 12 18 2 17 5", "16 5 10 15 14 23 22 20 19", "20 1 9 14 15 5", "20 10 21 14 23 3 9 6 15 11 4 13 19 7 22 1 18 2 0", "21 10 13 3", "18 7 8 11 16 3 1", "16 17 20 15 9 21 8 1 5 18 6 10 23 14 3 0 13 11 22", "16 19 9 8 21 7", "8 14 12 20 2 16", "22 17 12 10 19 9 23 4 1 18 5 20 8 7 16 13 14 11", "4 12 1 5 18 11 7 16 3 9 8 10 2 15 23", "17 6 23 1 7 19 12 21 9 15 8", "22 19 15 20 6 10 16 23 17 12 0 3 13 11 7 4 18 14 9", "3 13 19 9 21 14 11 0 2 10 23", "7 21 18 17 0 9 4 19 14 3 8 15 20 1 5 6 16 22 10 12", "5 13 8 18 4 10 11 3 20", "2 5 10 3 12 7 18 19 9 0 20 17 16 4 14 13 1 15 23 8", "20 21 6 14 15 23 5 7 22 19 17 13 1 10 0 11 4 9 2", "17 14 19 22 15 18 3", "10 3 8 17 5 4 19 18 13 16 21 11 14 1 23 15 20 9 12", "18 6 13 22 11 9 20 4 3", "19 22 20 14 2 7 11 16 13 9 4 6", "10 15 19 11 12 16 6 17 3 22 7 23 4 5 8 2 14 20 21", "0 21 6 4 11 8 17 3 18 5 7 20 15 1 9 10", "19 4 13 16 22 11 5 20 0 18 15 1", "23 2 4 1 19 10 18 0 6 5 3 22 14 20 13 11 16", "14 4 23 0 2 3 22 13 16 15 10 1 12 6 19 9 20 21 17", "10 11 22", "15 11 8 19 14 18 4 22 21 6 17 10 12 13", "10 5 12 7 22", "18 6 16 21 22 14 1 13 3 10 19 4 7 2", "18 16 17 22 8 14 4 13 20 23 10 11 19 0 6 2 9 21 5", "7 20 4 14 16 3 15 6 1 2 23 8 13", "20 23 4 7", "18 6 20 3 13 17 19 9 4 16 15 8 14 22 0 2 23 7", "12 22 20 21 17 13 23 18", "2 9 12 15 23 1 18 14 7 17 8 13", "8 23 18 0 2 22 7 13 21", "3 0 16 8 18 20 12 7 23", "11 1 6 8 20 19 14 4 16 22 18 7 9", "6 20 14 3 22 19 21 12 18 11 9 7 17 10 13 15 5 0", "3 8 14 16 15 9 6 4 23 10 7", "22 4 7 8 12 1 0 10 17 15 5 6 3 11 18 2 19 13 16 21", "1 20 6 22 2 18 14 12 4 13", "16 11 18 15 4 8 10 12 1 2 19 23", "17 12 10 4", "4 15 18 6 2 1 3 9 11 7 20 5 10 0 8 16 21 22 17 13", "1 8 7 19 4 11 3 9 13 20 22 16"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 50;
    vector<string> buses = {"20 44 27 32 3 42 21 30 5 48 15 35 12 9 23 25 29 36", "35 11 44 33 36 48 17 7 29 12 49 16 8 31 43 15 3 37", "34 26 14 35 8 33 4 29 43 46 18 12 15 19 42 1 24 16", "10 18 13 6 26 22 40 2 7 0 42 12 17 37 19 30 39 23", "12 11 49 7 25 34 48", "25 28 17 21 2 1 40 44 7 18 32 42 33 15 4 16 45 38", "40 20 27 34 14 35 45 23 17 21 1 33 6 5 10 28 29 13", "4 19 41 10 31 15 2 25 5 21 14 43 18 17 48 39 0 3", "31 36 20 37 4 0 13 33 2 40", "29 49 11 0 27 26 10 34 22 38 28 36 3 15 46 7 14 45", "26 41 39 1 17 21 15 36 25 30 16 37 14 12", "1 10 35 32 30 25 7 6 29 2 34 16 14 38 23 27 45 40", "10 38 13 43 32 8 0 49 33 4 27 28 2 47 48 18", "2 31 39 30 42 9 33 7 35 38 43 18 1 32 28 45 19 21", "44 10 23 5 3 43 25 27 35 18 40 8 32 39 11 12 7 37", "17 37 4 22 10 31 32 42 7", "34 33 47 22 40 5 26 11 32 35 16 7 20 28 39 15 8 36", "24 33 23 29", "16 45 8 47 31 26 32 14", "3 47 9 26 22 11 45 24 43 40 14 42 30 18 49 25 19", "41 7 27 24 18 3 37 36 1 6 5 21 43 9 28 49 34 13 38", "44 4 17 21 41 26 24 49 14 37 7 22 20 11 33 2 46 31", "18 3 26 22 25 45 7 23 31 16 21 41 14 2 30 8 39", "12 7 40 43 24 36 26 29 28 42 10 11 30 27 6 47 49", "26 44 32 2 4 11 10 43 42 5 28 24 16 0 34 41 6 22", "35 21 26 42 29 30 45 32 39 37 23 0 31 41 28 4 17 5", "21 43 38", "25 9 11 17 30 31 24 1", "3 14 31 36 5 48 6 21 16 13 27 8 18 15 4 44 19 28", "4 23 45 24 44 25 5 38 48 2 37 39 13 36 8 28 29 12", "38 42 27 48 40 31 46 25 7 1 28 3 24 23 9 19 43 6 5", "17 20 47 37 41 33 1 18 44 16 43 21 34 31 38 12 5", "47 12 21 34 48 41 40 19 26", "25 34 21 41 37 4 17 3 23 31 8 14 35 46 28 45 32 40", "9 25 6 44 47 17 20 48 4 0", "26 27 11 5 2 39 43 34 32 16 14 48 19 42 15 3 33 18", "6 48 19 23 28 49 33 5 4 30 27 8 14 31 38 26 21 43", "28 8 32 42 13 37 9 43 19 1 25 22 11 26 4 15 31 24", "39 3 11 47 48 31 23 20 6 18 46 15 28 10 5 37 4 41", "36 10 16 30 23 29 0 20 9 32 41 7 12 1 8 2 33 46 15", "5 15 47 12 24 34 46 25 18 6 16 27 43 48 26 35 0 20", "12 49 31 6 14 2 7 27 16 22 32 47 24 19 5 3 43 42", "19 44 29 43 48 30 13 16 34 26 23 15 21 37 3 41 25", "4 0 22 48 32 18 12 19 15 2 5 38 29 9 35 42 45 47"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 767;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 7;
    vector<string> buses = {"6 4 5 1", "5 0 1", "1 5 0 4"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 49;
    vector<string> buses = {"48 20 31 43 37 34 11 41 44", "23 27 34 8 12 32 14 1 9 20 21 39 5 6 45 47 43 16", "7 9 32 34 16 47 43 22 6 33 14 23 20 12 1 17 18 3", "21 37 23 38 19 31 25 34 5 0 18 7 32 24 15 48 12 1", "47 12 18 32 17 6 41 3 45 48 1 9 37 15 29 35 30 44", "48 20 4 19 22 10 25 18 8 2 29 39 13 16 27 9 43 41", "7 46 25 45 16", "24 28 34 8 44 13 38 20 14 32 12 21 35 29 11 6 18 9", "35 45 30 26 32 38 2 25 42 6 27 13 48 22", "21 18 26 6 23 20 37 38 7 17 33 25 22 41 15 43 9 13", "12 41 2 42 9 46 45 11 40 32 13 43 1 37 18 33", "18 30 34 16 11 29 32 13 39 26 4 5 9 15 25", "44 37 0 1 40 21 3 45 14 18 5 33 47 28 30 23 4 27", "32 8", "9 38 7 19 46 27 17 14 45", "21 19 12 0 24 28 4 2 25 31 6 1 3 45 35 20 11 47 41", "11 40 46 9 29 47 6 34 23 33 35 28", "6 14 0 24 2 39 28 34 21 36 10 37 38 20 25 46 47 23", "9 28 44 15 24 30 18 13 23 22 26 0 37 6 43 34 14 2", "39 37 23 22 36 47 18 40 26 34 24 5 15 30 28 7 1 9", "8 22 27 48 35 25 2 36 26 6 31 12 5 19 45 4 21 40 7", "16 7 0 37 14 43 30 45 8 2 41 32 4 40 20 18 39 21 3", "11 32 5 6 19 3 27 1 7 15 40 20 23 14 10 41", "27 28", "14 6 42 34 22 40 4 10 29 44 3 35 28 43 16", "29 13 24 31 48 10 38 0 16 9 2 28 40 4 30 21 5 42", "9 43 18 34 17 26 46 48", "4 31 13 7 19 16 8 41 37 11 29 30 43 5 0 9 1 32 40", "20 48 22 38 33 23 10 1 31 0 32 16 35 19 26 5 42 46", "36 29 28 45 42 21 39 37 46 8 15 6 47", "31 12 3 24 43 1 44 8 42 33 46", "19 10 39 40 21 22 9 25 5 26 43 42 0 29 34", "0 42 12 27 34 8 18 30 32", "28 5 41 7 2 23 13 3 12 16 40 33 1 17 4 29 30 11 47", "5 8 43 41 29 3 15 38 44 18 47 23 21 2", "3 40 1 24 10 7 27 8 18 13 2 0 47 4 32 35 9 36 43", "37 43 47 3 44 1 25 34 15 45 46 17 23 9 18 13 38 33", "19 17 9 26 24 6 20 18 29 11 32 0 28 10 23 4 14 35", "34 2 32 46 38 18 11 45 31 28 42 5 40 6 23 14 19 29", "7 25 38 40 27 3 5 34 35 22 37 0 13 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 15;
    vector<string> buses = {"1 13 7 4 11 8 3 5 2 14 10 6 12 0 9", "10 14 1 2 6 7 4 5 3 8 11 12 0 9 13", "4 8 5 3 10 0 13 11 2 6 9 12 14 1 7", "4 0 8 12 3 13 10", "10 11 14 7 13", "9 13 11 4", "6 7 10 11 14 3 5 1 9 2 8 13 0 4 12", "12 14 7 5 13 11 10 3", "9 7 4 12 1 14", "12 0 4", "2 8 13 7 4 14 9 5 3 1 0 11 10", "8 2 4", "11 5 14 1 10 4 13 9 2 0 12 3 6", "9 14 10 2 12 13 4 11 6", "14 7 0 11", "13 7 2 5", "14 6 7 3 10 1", "10 4 9 2 7 1 5 8", "7 1 8 4 12 13 3 6 2 10 11 9 14", "6 5 13", "6 13 12 8 0 10 1", "10 2 6 14 8", "1 14 8 2 13 5 9 6 3 12 4 0 11 7"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 46;
    vector<string> buses = {"23 9 22 45 41 37 36 13 31 17 30 6 21 20 18 2 29 33", "31 30 10 24 15 4 28 44 37 42 34 11 20 26 39 2 14", "24 34 23 3 22 10 38 28 2 37 40 33 36 45 18 11 39 9", "0 18 32 19 27 7 1 20 5 17 37 28 33 15 2 3 43 24 42", "41 33 36 12 42 15 11 13 8 19 5 16 28 30 17 20 39", "15 18 0 38 8 29 31 14 40 16 35 3 23 20 26 39 10 28", "6 25 28 35 11 24 30 13 36 42 40 32 7 45 34 0 43 18", "27 13 37 0 19 35 25 28 9 2 22 38 39 34 44 21 4 3", "14 45 25 19 12 37 34 33 31 41 23 39 26 4 44 20 3", "23 0 22 1 11 17 7 6 27 41 40 15 43 31 33 38 18 5", "18 41 0 38 14 12 30 27 23 5 15", "25 11 13 15 6 35 0 34 27 30 1 36 38 20 32 18 9 12", "38 26 5 8 25 41 36 20 3 22 18 7 16 28 27 6 35", "31 38 3 7 18 1 0 12 10 16 37 43 24 11 5 35 36 17", "19 22 11 2 8 13 40 35", "36 33 11 32 41 45 38 9 42 13 21 8 23 20 44 12 24", "32 23 39 31 30 5 42 26 9 45 16 25 12 27 41 38 18", "32 45 27 33 30 5 19 16 7 8 42 40 1 34 44 3 31 21", "22 38 26 30 35 29 4 37 23 32 42 6 10 36 33 20 25", "25 2 19 36 13 27 45 23 26 38 24 39 5 40 7 10 14 43", "30 18 27 33 15 10 0 23 24 45 4 37", "9 7 22 13 1 33 37 28 8 6 19 42 0 45 35 40 5 31 38", "9 39 13 38 30 42 1 27 31 37 35 26 19 32 7 41 24 33", "4 3 40 27 17 11 41 44 0 32 18 1 26 12 22 28 42 14", "6 35 22 43 25 18 40 7 13 17 24 38 34 0 21 29 27", "14 44 4 5 0 12 7 35 21 25 13 30 11 19 43 15 45 18", "18 1 32 40 36 4 2 35 33 9 38", "17 13 36 27 12 25 6 9 40 18 37 26", "16 43 19 35 45 4 1 39 34 25 27 41 13 36 2 33 21 24", "10 17 9", "9 29 19 15 3 27 38 30 11 21 23 14 37 0 44 36 28 42", "12 45 38 5 43 13 3", "34 28 39 16 11 43 38 41 44 21 17 25 23 19 4 26 37", "37 36 9 31 1 40 19 20 7 4 45 6 28 34 2 41 42 10 33", "19 14 20 23", "33 31 14 43 2 34 3 23 19 18 39 28 36 6 10 16 45 20", "34 42 5 14 10 12 44 24 28 11 36 30 39 8 20 29 23", "25 13 34 26 44 31 36 18 3 33 30 6 12 29 15 0 35 23", "37 9 15 24 16 23 21 39 2 1 8 41 38 32 35 22 31 6", "40 42 14 44 41 8 12 26 31 17 6 1 24 34 19 45 37 32", "36 29 17 33 1 35 4 15 2 26 45 43 7 9 6 14 11 18 38", "19 10 35 22 41 38 30 13 6 45 32 4 40 15", "24 14 13 11 0 26 28 42 36 34 2 43 4", "15 28 27 4 10 13 5 26 22 44 2 25 17 18 8 31 32 19", "28 22 41 29 34 0 27 16 9 45 6 10 26 14 38 1 35 2 7", "20 35", "38 39 43 42 10 25", "17 12 8 37 42 24 41 7 13 32 22 29", "39 35 16 0 41 30 3 13 9 18 15 34 10 11 45 4 22 29", "0 30 22 20 3 39 41 4 14 2 29 43 33 17 1 6 15 31 18"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 692;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 28;
    vector<string> buses = {"20 1 16 25 23 21 14", "20 3 11 1 13 0 12 25 18 24 2 16 22 10 14 27 6 8 5"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 5;
    vector<string> buses = {"1 2 3 0", "0 3 1", "1 3 4 0 2", "4 1 3", "0 3 1", "4 1 0 2 3", "4 0 1 2 3", "3 0 1 4 2", "4 2", "4 1 3 2", "4 1", "2 0 3", "2 3 4", "2 4 1 3", "1 3 0", "3 2 4 0 1", "3 2", "3 0 2 4 1", "1 3 2", "3 4 0 2", "4 1 0 2 3", "2 1 0 4 3", "1 3 4", "3 1 2 4 0", "3 4 0 1 2", "0 3 1 2", "3 4", "2 3 4 0 1", "0 4 2", "2 0 4 3 1", "1 2 3 4 0", "3 4 0 2", "1 0 3 4", "1 3 2", "1 0 4 2 3", "2 3 4", "3 1 4", "1 0 2", "0 1 2 4", "0 1 3", "0 2 4 3 1"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
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
    int N = 9;
    vector<string> buses = {"4 5 1 2 7 8 6 3 0", "8 4 2 0 6 7", "7 1", "7 0 4 1", "2 6 8 5 0 7", "6 4 0 8 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 4;
    vector<string> buses = {"0 1 2", "0 1 3", "2 1 3 0", "3 1 2", "2 1 3", "2 1 0 3", "2 3 0 1", "1 0 2", "3 0 1", "0 2 1 3", "0 2 1", "2 1 3", "3 0 1 2", "3 1 0 2", "0 1 3", "3 0 1", "3 1 0 2", "2 1 3", "2 3 0 1", "1 3 0", "2 0 3 1", "0 1 3 2", "1 2 0", "3 2 1 0", "2 1", "2 3 1 0", "2 0", "0 1 2 3", "1 0", "3 0", "1 2", "1 0 3", "0 1 3", "2 1 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 27;
    vector<string> buses = {"10 15 20 9 0 19 1 5 3 12 11 23 4 18 8 21 6 26 14", "25 2 12 23 0 8 1 5 20 19 22 3 6 24 4 7 9 18", "11 24 13 14 12 19", "11 18 7 19 9 17 6 24 0 5 22 12 15 20 1 2 3 13 26", "26 19 18 9 8 23 2 15 17 25 4 5 16 20 12 24 10 3 11", "1 2 5 13 10 22 0", "24 10 4 9 12 14 6 20 3 17 22 21 25 19 18 0 7 13 15", "12 7 19 11 5 17 18 2 24 8 4 0 22 23 10 25 26 14 9"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 249;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 65;
    vector<string> buses = {"14 18 42 16 5 60 64 39 52 43 40 26 7 30 33 48 36", "53 21 40 32 64 10 5 35 9 55 2 19 37 50 60 36 1 11", "55 38 11 41 0 1 54 36 45 6", "18 30 13 43 23 42 52 27 61 26 7 9 36 37 22 17 5 63", "29 3 44 62 4 56 12", "49 58 47 15 61 36 64 59 26 35 19 1 7 54 28 29 25", "13 28 20 27 51 29 62 11 36 48 10 41 0 18 60 4 25", "16 2 12 10 19 24 55 5 14 52 62 54 11 50 31", "26 12 1 43 56 13 2 31 10 5 35 33 19 7 41 45 8 24", "64 32 54 60 6 24 25 12 33 61 27 56 37 36 43 44 9", "31 1 49 56", "38 9 5 37 3 45 2 57 42 17 47 27 10", "48 0 11 53 45 7 62 42 60 61 16 19 32 44 26 5 55 49", "14 33 58 63 52 50 56 18 12 59 45 31 32 16 47 21 62", "17 2 9 45 43 28 64 12 58 35 8 57 11 21 56 18 40 34", "18 59 43 31 23 33 61 5 16 3 54 40 10 15 11 4 27 25", "32 2 55 10 48 51 23 47 16 61 57 37 4 49 41 30 64", "47 35 58 50 24 16 42 6 41 27 49 38 44 19 10 30 2", "3 30 27 38 32 17 44 29 63 39 48 13 37 14 1 24 45", "52 29 18 59 58 6 37 51 60 38 13 0 61 3 63 45 57 14", "57 38 29 61 19 47 35 9 16 33 42 12 15 50 51 0 27", "60 30 5 35 48 25 47 33 15 40 23 18 44 62 52 21 58", "21 38 52 23 29 39 6 12 26 45 19 9 3 41 14 24 25 48", "39 45 59 35 55 24 33 22 2 28 56 44 13 50 16 60 53", "12 42 21 0 38 50 4 62 25 35 44 9 18 46 43 53 59 49", "55 64 6", "33 48 53 23 35 7 3 39 5 11 14 15 8 28 44 61 38 36", "2 16 15 28 31 13 43 32 46 64 52 0 5 4 44 48 6 33", "59 25 38 36 16 2 55 30 64 32 58 44 4 31 13 0 27 49", "55 35 12 46 24 45 9 54 42 52 2 50 6 31 19 34 25 57", "31 9 45 52 8 50 36 15 46 2 29 5 40 13 54 39 60 58", "59 20 23 4 62 60 41 57 30 47 42 50 44 51 0 12 2 37"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 33;
    vector<string> buses = {"24 2 21 16 17 20 10 11 30 15 22 27", "28 11 31 5", "4 14 25 24 17 31 0 13 26 30 3 11 29 7 9 23 27", "5 29 8 21 6 25 3 12", "15 6 0 20 31 12 29 17 5 22 9 23 1 32 26 14 13 24", "19 6 15 28 17 24 9 21 0 14 13 2 20 11 12 8 18 1 31", "18 6 26 24 27 32 30 14 29 17 19 8 28 23 12 25 11 2", "10 24 27 9 11 2 15 28 22 20 25 1 0 21 23 18 26 16", "4 24 20 32 7 13 22", "20 29 6 11 24 31 32 26 25 23 4 28 27 8 1 12 2 17", "25 4 22 13 10 18 26 19 17 3 2 15 31 21 32 8 29 7", "25 10 22 23 3 7 14 31 18 27 13 11 26 32 1 12 6 21", "13 3 21 16 9 32 26 28", "12 29 8 16 11 7 30 9 4 32 1 13 22 15 19 25 2 31 5", "9 30 3 31 18 15 7 13 1 20 26 0", "7 18 22 29 1 0 21 32 20 10 9 5 3 14 31 6 28 23 4", "30 19 3 20 28 13 22 6 31 32 18 0 26 25", "5 1 29 4 15 14 0 3 6 31 12 32 26 9 28 18 11 7 16", "24 22 17 2 7", "8 23 12 29 22 14 19 15 16 31 25 4 18 20 10 26 6 24", "32 5 11 19 22 9 7 14 23 30 15 20 2 13 27 10 12 0 1", "15 24 20 19 18 2 8 11", "14 31 7 12 13 9 3 17 22 15 21 1 29 2 28 5 10 23", "12 28 13", "17 14 20 7 2 28 27 16 19 31 15 10 3 21 13 12 9 5 0", "13 22 11 7 26 9 12 27", "3 2 4 6 32 13 30 5 25 21 24 8 23 31", "15 24 26 8 18 9 6 29 21 17 25 4 16 12", "6 5 28 27 12 23", "8 20 2 0 16 15 13 9 17 10 4 22 26 12 27 18 30 14", "25 0 15 14 29 12 1 5 27 11 31 10 32 18 2 3 6 22 30", "17 23 29 10 2 24 3 30 28 16 25 6 5 18 14 21 26 13"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 10;
    vector<string> buses = {"4 2 5 9", "4 8", "7 6 0 9", "7 2 3 0 4 9 5 1", "6 9 2 1 8 0 3", "5 0 1", "8 9 1 3", "3 6 2 4 9 7", "5 7 0 8 6 9 2 3 1", "0 5", "7 3 5 1 8 2 9 6 4", "3 5 8", "0 1 5 6 3 9 2 8 7 4", "0 7 4 1 3", "3 7 1 4 6 9 2 0 8 5", "2 3 8 0 9 6 5 7", "9 1 7", "5 2 8 3 4", "8 3 2", "7 5 3 0 4 1 2 9", "5 0 8 2 6 9", "8 0 6 9 5 2 1", "0 7 8 3 1 2 6 9", "5 1 8", "5 4 1", "5 1 6 7 4", "6 1 5 7 0 3 8 9", "2 1 8 4 3 0 9 5 6", "7 5", "5 8 6 1 9 3 7 4 2", "3 2 4 8 7 9 0 5 6 1", "6 8 9 1 2 5 3 4 7 0", "5 8 1 0", "8 1 2 7 9", "8 5 2 0 6 1 3 9 7 4", "0 9 7 6 1 8", "0 7 8 6 1 2", "1 7 9 5 8 2 4 0 3 6", "0 9 4"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 23;
    vector<string> buses = {"10 11 16 18 7 22 14 17 0 8", "17 5 13 10 0 6 1 22 21 20 19 7 12 11 8 18 14 3 2", "13 3 12 6 18 17", "1 16 0 4 21 20", "5 0 14 22 10 1 21 9 15 18 8 7 3 20 2", "20 3 11 19 6 0 18 8 1 7 9 10 22 13 16 12 21 2 5", "11 12 5 16 21 1 2 4 9 6 17 14 10 22 8 3 13 18 7", "18 1 13 20 19 17 15 4 22", "16 9 19 21 6 1 0 15 17 8 10", "6 5 16 12 10 18 22", "11 0", "18 12 5 19 10 21 15 11 20 17 16 7 9 0 13 1 8 3 2", "8 21 20 0 19", "6 13 10 18 3 2 22 15 17", "13 7 18 12 5 8 6 9 1 21 19 2", "3 16 22 0 4 14 11 5 6 20 8 21 2 9 12 15 17 10 1", "15 22 13 1 2 7 18 11 19 5 4 9 10 21 8 3 12 20 16 0", "21 0 1 19 16 18 12 14 10 6 4 17 5 2 9 3 20 13 22 7", "6 1 8 9 18 3 16 22 11 10 17 12", "16 8 13 10 2 1 0 7 18 15 20 6 14 12 22 17 11 9 3 4", "20 21 19 0 1 6 8 15 7", "16 3 19 6 0", "6 12 16 22 2", "0 14 2 3 20 12 8 22 1 18 17 6 21 10 15 5 11 13 7 4", "2 5 4 0 20 11 7 15 10", "4 5 0 8 18 14 21 17 6 10 3 9 2 1 13", "12 17 7 0 5 22 9 13", "5 0 22 14 4 21", "17 19 16 12 1 21 2", "2 11 15 21 6 9 7 16 10 18 3 19 17 1 8 12 22 20 13", "8 6 19 20 17 1 12 7 22 11 4 10 14 18", "9 22 6 1 12 14 15 7 3 13 4", "15 21 22 13 16 6 20 17 19 18 8 2 12 14 11", "21 14 16 1 20 19 8 5 3 13 4 6 9 12 2 0 10", "12 8 14 6 18 5 22 0 17 20 16 2 7 15 13", "0 18 1 22 15 19 17 3 20 12 13 8 5 9 14 21 2 6 7", "20 17 6 19 10 5 0 7 21 4 16 12 14", "9 22 15 16 4 3 19 10 17", "8 1 16 4 21 13 12 0 3 9 6 19 22 7 5 18 10 20 15 2", "17 13 12 1 10", "5 15 21 18 19 9 3 14 20 8 0 12", "15 10 18 21 3 9 17 20 12 7 22 1 0 16 5 8 19", "20 5 13 12 0 9 19 8 22 14 2 10 16 7 1 17 18", "5 1 14 7 17 21 3 19 22 12 16 15", "11 4 8 21 14 13 3 22 0 1 7 16 6 9 5 10 18 17 19 20", "15 13", "7 16 21 15 5 20 22 13 3 9 14 6 8 19 4 10 17", "15 18 17", "7 14 16 17 2 15 18 5", "19 7 21 3 13 5 4"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 67;
    vector<string> buses = {"25 4 5 12 44 60 50 11 42 28 18 37 41 66 32 23 24", "34 21 12 22 29 8 56 32 37 14 13 17 48 43 27 42 46", "3 15 63 36 21 34 39 51 54 56 12 57 62 30 64 26 22", "54 51 16 11 50 23 46 41 59 4 24 0 35 28 60 8 63 39", "14 42 45 30 65 23 24 66 40 55 28 10 43 33 44 61 54", "22 4 64 32 62 47 23 38 66 36 28 34 3 29 56 11 52", "61 63 36 53 24 28 65 32 27 26 2 33 7 16 1 45 29 17", "51 66 22 40 25 32 43 8 49 48 57 2 29 39 14 37 11 6", "24 62 52 11 45 28", "57 49 59 20 22 56 10 12 44 53 66 18 34 52 17 14 39", "3 21 1 31 54 59 37 9 35 62 55 29 22 48 32 53 30 50", "44 5 49 31 66 41 37 28 35 10 24 42 33 1 64 50 27", "47 54 2 19 6 48 57 64 33 41 58 60 28 36 37 17 27", "16 15 52 49 20 40 31 13 46 58 1 22 5 54 7 9 8 43", "19 56 17 31 48 18 42 57 30 15 58 21 51 13 66 36 8", "59 31 36 64 49 13 47 22 55 42 32 52 35 25 48 41 2", "5 49 57 12 52 8 63 34 45 56 16 25 50 31", "29 61 66 63 15 41 11 16 14 56 59 26 3 6 49 13 62", "50 56 27 65 30 43 21 22 38 24 66 15 19 18 9 11 14", "10 30 55 50 53 17 18 16 3 12 33 39 14 57 24 34 1", "38 8 66 11 31 28 57 22 43 47 10 37 42 50 23 61 52", "64 44 37 61 14 22 21 15 52 19 18 29 0 5 2 26 43 53", "5 55 35 12 18 27 20 61 0 34 29", "38 20 23 22 46 10 32 54 41 17 19 16 1 5 53 3 66 49", "65 4 12 11 37 32 57 45 10 25 52 34 43 31 21 5 20", "23 49 11 35 15 33 42 12 9 5 14 47 45 51 37 48 25", "34 61 58 32 55 60 33 51 2 18 49 9 43 27 10 12 21"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 35;
    vector<string> buses = {"22 8 15 0", "13 12 31 7 2 8 30 14 23 18 16", "26 19 23 25 9 28 4 32 7 33 8 27 16 10 3 30 13", "4 12 27 28 10 30", "9 20 18 10 23", "11 14 32 20 10 6 1 15 12 7 3 16 13 30 26 28 24 21", "6 21 5 7 26 34 29 19 28 22 2 18 32 15 16 4 8", "22 9 23 13 34 21 27 24 16 18 4 17 28 26 0 5 25 3", "6 27 9 13 4 22 10 24 29 32 12", "10 34 20 13 3 9 24 16 32 0", "22 0", "33 13 3 31 6 14 23 9 22 19 4 29 16 10 26 12 1 20 7", "2 10 21 3 12 1 24 9 30 34 8 11 20 19 27 5 33 28 7", "23 22 26 31 16 20 32 29 27 18 0 7 8 5 2 21", "15 14 33 9 8 6 20", "3 22 26 24 13 10 7 2 9 17 8 34 19 27 11 12 4 5 21", "23 27 34 26", "10 23", "6 23 22 7 2 25 15 16 27 28 20 12 18 30 11", "31 24 5 11 34 16 21 2 27 7 17 15 19 3 0 9 8 1 22"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 53;
    vector<string> buses = {"42 51 40 29 52 7 47 1 9 39 37 13 3 27 32", "33 26 1 29 49 41 30 35 19 5 16 44 15 40 43 23 7 12", "19 31 7 2 39 4 0 43 41 11 35 40 8 1 44 45 6 21 27", "28 1 47 25 16 15 31 42 44 13 40 17 20 9 34 41 39", "32 22 43 51 35 18 12 49 2 17 11 36 1 40 34 47 19", "37 13 52 12 43 34 39 23 50 41 17 28 35 46 29 49 30", "27 33 45 8 42 40 20 39 17 0 11 44 16 34 43 19 47 2", "38 27 10 18 48 45 28 31 17 24 16 41", "26 43 45 2 52 22 38 7 42 25 28 5 6 40", "9 3 27 34 52 28 11 44 30 4 17 8 26 45 22 48 33 7", "50 24 11 34 47 51 1 46 43 3 2 17 23 39 22 5 30 52", "7 47 10 5 30", "49 7 42 1 46 25 44 36 3 16 50 15 9 47 26 2 13 38", "17 12 33 32 44 49 41 18 28 29 13 35 45 20 0 51 24", "1 34 32 43 46 15 25 48 41 31 20 10 51 50 26 52 36", "8 42 31 41 34 14 44 26 21 23 15 19 27 3 7 6 28 39", "36 24 47 27 1 31 48 5 6 16 28 13 34 3", "0 52 23 3 37 6 17 16 27 13 32 28 12 22 47 10 38 2", "12 11 23 47 29 27 22 26 32 40 42 0 48 24 43 34 3", "25 12 21 24 43 37 51 14 42 9 34 50 13 16 10 17", "31 13 39 21 1 17 20 46 34 2 6 7 22 14 3 41 25 42", "35 2 21 12 17 14", "20 22 12 23 38 39 9 51 1 3 47 37", "17 37 31 6 10 5 23 49 52 2 34 21 3 7 15 45 24 26", "32 43 34 19 48 50 2 45 25 39 20 16", "5 13 40 11 43 9 45 20 14 26 51 17 10 32 16 37 4 8", "43 36 35 1 15 29 48 12 26 38 52 25 3 49 22 27 6 31", "0 35 40 39 47 18 24 3 29 34 26", "41 48 49 17", "28 51 36 23 9 3 31 43 22 41 16 20 12 39 17 11 33", "1 24 19 36 48 38 40 35 42 8 45 30 6 28 27", "31 29 22 26 24 9 15 40 21 2 28 51 48 42 14 41 43", "5 14 34 8 28 44 31 33 22 52 6 49 40 1 0 18 29 17", "3 39 26 31 40 19 1 15 4 37 48 10 9 46 33 11 38 32", "38 47 5 35 13 0 49 4 2 40 20 46", "16 26 51 13 48 25 8", "20 32 26 28 34 39 0 51 30 8 10 46 25 36 40 37 22", "30 3 39 51 36 12 35 9 5 26 48 38 0 13 44", "40 35 29 47 46 13 41 2 30 44 37 8 17 52 34 1 33 26", "52 21 28 5 19 50 51 29 27 22 14 38 6 12 25 23 35", "15 10 42 37 31 45 24", "45 7 34 0 17 35 40 14 49 4 46 51 20 3 48 29 2 5 18"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 890;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 28;
    vector<string> buses = {"10 11 0 12", "9 21 10 11 3 18 5", "13 12 3 27 0 25 14 11 1 21", "4 9", "10 22 23 17 13 8", "10 9 18 27 3 15 4 12 14 5 11 24 8 1 26 25 2 16 13"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 714;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 73;
    vector<string> buses = {"52 4 8 55 62 26 15 54 12 10 71 20 21 16 9 25 45 70", "59 25 6 72 42 63 22 43 47 10 27 24 23 29 36 68 71", "46 58 53 26 10 66 43 50 41 45 7 25 61 36 21 9 72", "25 57 37 59 8 62", "47 21 40 1 22 45 27 71 7 50 69 6 28 25 0 36 3 43", "41 69 70 39 65 47 37 54 63 31 60 56 5 7 53 43 26", "71 31 45 28 18 39 42 57 4 70 51 34 23 36 32 67 48", "70 35 62 31 0 53 56 54 10 12 22 27 50 64 52 5 29", "3 13 60 47 29 15 63 68 62 48 58 7 45 1 23 19 11 38", "70 54 61 7 36 41 9 48 12 17 27 20 46 23 8 38 10 44", "7 25 9 5 3 59 43 34 35 6 67 11 45 44 70 17 55 8 42", "12 68 26 56 55 6 7 57 22 49 51 70 67 59 21 34 71", "22 15 48 43 33 31", "34 71 19 45 64 62 63 26 23 27 18 13 4 54 28 25 35", "16 68 13 69 5 3 47 56 25 63 7 72 17 9 66 39 65 43", "18 3 62 8 20 11 40 33 10 53 55 37 44 22 70 25 19", "69 18 40 15 68 28 10 42 17 70 5 30 64 37 49 41 67", "34 36 55 39 5 11 69 40 4 13 67 65 20 38 2 19 68 54", "43 0 41 71 59 18 48 5 4 72 67 30 22 52 6 9 1 55 33", "49 60 18 12 33 27 52 13 68 67 58 21 62 38", "41 13 31 22 36 11 9 71 67 26 34 5 53 20 55 32 29", "26 1 2", "50 68 54 59 14 58 65 47 21 57 72 56 31 16 44 70 11", "34 51 43 0 56 52 63 5 26 24 23 37 29 48 3 55 61 14", "5 19 59 46 35 8 57 6 15 69 32 70 34 29 67 33 3 1", "27 50 59 28 47 11 8 49 31 9 34 54 0 40 44 24 12 38", "13 46 72 31 21 50 59 2 4 19 34 69 62 18 12 40 10 9", "43 19 61 20 44 65 58 39 26 7 17 12 69 35 63 27 16", "34 10 59 45 53 0 56 16 58 54 65", "53 46 55 29 48 36 25 18 10 5 20 61 13 1 44 43 37"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 40;
    vector<string> buses = {"36 26 35 4 12 10 31 25 29 17 3 0 23 20 39 15 13 8", "31 38 0 35 5 28 18 37 22 19 36 16 34 3 26 27 10 24", "36 19 10 38 30 0 13 27 32 4 24 20 21 18 11 17 33", "7 10 29 8 4 23 2 21", "14 13 16 31 26 3 1 23 27 7 8 18 21 17 29 20 36 15", "32 35", "32 1 39 36 5 29", "32 12 21", "36 8 5 6 0 17 29", "23 28 24 2 39 6 20 1 4 25 3 15 17 21 27 19 7 12", "32 19 13 3 1 26 23 12 30 18 20", "13 10 34 33 7 24 18 38 32 21 26 15 37 23 22 36 2", "12 20 36 35 24 29 7 22 4 14", "9 18 34 4 17", "16 14 31 2 9 6 21 33 12 18 13 20 1 24 38 15 37 30", "7 3 9 10 33 29 4 5 20 11 37 12 25 30 19 35 26 1 16", "19 9 18 5 2 26 24 38 16 3 22 10 11 35 31 28 25 17", "12 39 6 29 15 35 10 9 4 20 23 17 33 27 36 16 38 19", "28 36 19 3 18 20 22 17 33", "5 9 14 29 25 8 32 2 11 23 17 20 35 15 30 4 10 12", "35 0 4 29 3 21 24 8 7 15 12 6 11 32 5 14", "7 5 17 4 27 28 20 26 33 10 16 15", "9 16 14 29 3 31 37 30 8", "2 32 29 21 39 27 24 38 33 5 17 23 25 34 10 15 22", "39 36 37 11 29 22 16 34 33 28 35 1 4 19 10 5 23 21", "27 37 36 12 19 1 9 22 23 31 21 32 6 28 13 20 18 7", "34 0", "35 0 37 5 22 14 11 24 6 13 7 34 17 4 31 25 9 21 23", "5 33 35 31 17 36 27 29 0 8 10 16 28 1 23 22 14 24", "7 20 6 39", "19 15 10 11 17 34 26 25 2 16 12 0 23 39 14 28 4 21", "13 17 21 34 5 3 23 0 9 35 2 15", "13 10 11 37 5 12 31", "27 20 37 35 31 16 14 34 8 36 23 38 0 12 3 9 39 1 5", "31 39 28 35 12 7", "1 12 5 10 29 21 25 31 4 11 16 13 32 17 38 19 34 9", "26 1", "36 37 19 39 28", "32 38 2 13 20 24 1 11 31 26 37 33 18 3 0 7 10 29"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 77;
    vector<string> buses = {"46 50 47 16 25 52 65 48 14 10 11 26 5 57 12 62 54", "31 46 71 59 50 41 43 3 45 23 44 25 29 39 57 11 48", "36 74 67 0 60 33 6 8 75 57 22 59 42 26 3 69 41 55", "73 8 0 74 36 44 55 49 58 41 62 27 72 64 14 48 12", "57 25 71 43 3 65 50 9 28 5 60 49 10 8 36 32 63 40", "20 37 22 73 24 30 13 52 17 65 16 61 64 71 19 31 7", "41 20 6 27 45 17 69 38 15 24 25 34 47 22 39 26 37", "42 15 32 13 57 17 46 74 55 35 33 12 22 60 73 38 50", "61 8 59 74 63 26 43 3 4 67 46 31 30 69 38 20 56 54", "62 6 33 26 14 3 17 4 29 61 2 68 23 55 8 71 49 50", "45 31 50 3 43 10 41 40 66 71 48 61 51 21 53 39 18", "54 47 2 16 40 1 50 43 53 18 12 39 37 24 17 0 13 56", "8 34 50 6 20 70 4 66 57 41 58 11 72 65 62 23 74 33", "13 16 8 31 44 62 57 3 4 0 26 59 76 40 11 53 48 15", "13 9 15 56 76 16 66 19 20 33 25 69 57 0 14 52 45", "34 65 61 1 31 17 37 36 2 24 76 15 38 33 43 50 8 72", "41 1", "34 18 61 2 36 22 28 70 33 6 25 72 20 54 1 5 15 38", "27 74 31 19 57 47 13 10 18 39 24 34 60 54 52 41 37", "30 70 68 3 73 54 61 46 47 69 23 48 60 59 24 21 52", "28 47 10 22 3 7 49 5 37 4 56 50 66 75 76 39 17 55", "2 14 47 20 40 21 61 4 5 15 48 73 54 16 29 52 7 25", "13 45 34 2 24 28 47 27 4 64 32 74 30 53 42 33 37 1", "0 71 16 57 20 61 64 10 19 67 43 31 44 46 29 41 47", "32 27 11 41", "46 14 29 34 39 24 27 69 12", "34 2 73 54 53 62 32 14 36 43 20 10 65 9 37 66 60 7", "8 53 57 4 63 30 58 19 52 71 31 67 33 64 15 76 51", "64 75 52 14 50 69 48 63 35 38 65", "14 72 75 25 36 52 53 23 39 51 7 68 31 55 57 41 8", "74 27 34 44 69 40 63 37 58 2 26 48 21 7 24 41 75", "55 73 20 32 15 50 9 31 6 36 39 33 74 3 8 26 63 54", "9 11 47 31 45 4 14 33 64 0 13 66 76 42 37 39 7 15", "31 32 41 40 74 23 52 30 1 68 48 22 64 9 75 16 71", "71 56 29 66 31 23 48 0 7 76 53 69 35 46 72 59 20", "74 33 52 59 65 28 70 25 63 67 57 34 3", "12 20 51 43 19 59 17 31 9 3 30 41 10 16 61 2 63 7", "10 21 32 38 56 76 53 29 57 35 12 17 36 63 41 44 20", "9 70 38 2 62 20 57 55 6 22 52 11 14 5 30 39 44 46", "59 30 71 49 69 11 31 47 56 8 17 4 39 6 62 28 63 67", "54 42 74 59 25 36 16 4 27 48 30 43 8 7 12", "26 32 34 58 76 42 30 19 71 23 38 36 28 24 46 12 69", "58 5 50 36 0 8 1 14 67 16 10 17 25 69 42 32 51 11", "22 60 33 45 66 55 67 48 30 4 71 72 53 25 49 51 20", "37 34 54 24 29 39 48 9 57 8 72 53 6 44", "76 73 71 49 74 14 32 33 11 4 64 10 63 54 61 35 41"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 18;
    vector<string> buses = {"1 9 5 6 15 11 8 13 2 4 12 14 3 16", "17 14 7 9 11 3 2 4 6 10", "8 12 2 7 5 16 9 10 0 4", "7 5 17 4 9 15 2 8 11 16 14 3 12 0 10 13", "2 9 16 13 12 1 15 17 4 8 10 0 14 7 5 6 11 3", "12 14 16 13 4 15 6 8 5 11 9 2 1 3", "9 3 1 8 10 7 0 14", "15 14", "0 10 13 12 5 3 4 17 9 7", "2 8 0 4 15 1", "11 17", "17 9 6 15 3 13 16 7 11 2 1 4 10 5 14", "4 0 7 6 9 3 13 16 11 17 15 1 14", "3 17 0 16", "7 6 9 13 15 1 10 11 14 12 2 0 16 5", "7 0 9 11 13 8 10 6 1 14 5", "3 11 13 9 7 17 15", "14 0 6 15 16 9 2 5 10 1 3 12 11", "13 0 9 6 8 12 2 7 15 11 3", "16 15 6 2", "1 8 0 6 16 11 7 3 13 12 5", "1 11", "0 6 4 17 3 7 15 12 8 13 9 1 5 10 16", "3 14 17 15 16 8 10 12 6 7 2 5 11 1 4 0 9 13", "2 5 10 7 11 3 1 9 13", "13 7 4 16 0 1 17 6 2 9 8 11 3 15", "5 3 8 13 14 0 1 12 15 16", "13 0 17 14 10 3 1 8 11 7 5 9 2 12 4 16", "13 0 7", "12 0", "17 10 1 3 4 0 11", "1 16 15 9 11 6 4 10 13 5 17 8 0 7 12 2 3", "10 17 9 8 15 16 7 6 11 13 0 3 2 1 14 12", "13 1 15", "5 15 16", "5 0 9 3 6 12 16 17 14 7 13 1", "15 17 2 5 0 9 14 4 12 7 6 1 16"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 63;
    vector<string> buses = {"47 17 19 33 28 61 15 55 60 38 23 29 10 9 16 52 51", "18 42 22 10 49 28 47 12 33 17 32 34 31 15 20 24 35", "31 9 44 41 43 13 25 58 59 38 29 49 45 1 52 16 42", "18 41", "3 4 29 62 0 50 17 51 46 30 14 1 38 58 44 33 23 16", "2 34 37 47 56 26 6 33 38 32 44 41 45 39", "47 40 1 18 53 56 27 36 16 10 38 41 12 44 43 20 30", "48 47 28 52 18 34 58 1 32 24 30 53 51 55 7 62 14", "3 60 30 32 39 52 1 47 31 51 0 61 28 20 27 19 26 11", "9 48 34 59 2 7 39 3 57 5 10 4 35 20 15 22 6 56 25", "40 52 9 28 39 44 27 38 46 6 57 3", "27 5 15 34 19 0 11 60 13 53 22 57 33 32 49", "46 14 33 21 56 32 1 16 7 4 58 61 52 37 5 62 59 20", "55 37 59 50 27 26 7 46 28 57", "34 57 20", "11 13 2 37 20 30 50 58 16", "3 25 35 6 11 39 56 33 62 46 0 30 60 28 48", "25 21 13 7 29 38 60 55 45", "37 1 23 0 9 55 4 33 43 56 35 51 32 46 36 6 45 61", "0 1 43 54 20 9 46 62 57 58 56 14 15 10 18 21 32 7", "39 44 21 11 26 2 42 50 41 59 54 33 62 51 27 35 22", "24 16 12 20 21 2 4 56 51 31 40 5 42 58 45 14 17 13", "46 18 42 26 9 54 24 56 61 30 55 22 25 6 38 53 11", "10 53 52 13 46 45 6 60 36 43 15 22 62 29 21 12 14", "61 31 38 44 13 19 24 4 5 14 10 29 34 60 59 36 54", "26 32 54", "17 37 29 8 3 15 7 21 48 19 26"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 30;
    vector<string> buses = {"15 6 28 1 7 13 26 10 9 20 16 27 24 3 4 0 19 18 14", "12 23 15 20 22 29 4 21 24 0 8 17 3 7 9 6 14", "21 7 23 3 9 19 13 16 20 10 1 0 14 24 11 5", "20 8 18 25 5 2 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 573;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 33;
    vector<string> buses = {"9 13 22 23 18 27 3 0 10 1 21", "8 0 9 19", "18 28 23 15 12 13 10 30 4 1 21 0 7 17 26 9 32 11", "4 28 20 1 30 17 31 8 15 5 2", "15 31 3 0 25 17 24 8 23 4 19 10 18 28 26 22 5 20", "21 29 4 9 13 31 23 32 25 18 8 2 14 17", "30 14 11 15", "7 4 2 3 32 30 25 12 28 13 5 20 18 10 23 19 17 31 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 41;
    vector<string> buses = {"14 13 4 32 37 17 3 40 24 34 31 8 12 7 0 38", "14 0 20 32 8 21 18 11 29 39 6 23 26 17 1 25 38 36", "16 24 10 15 34 25 2 6 13 8 39 7 19 35 14 11 40 0", "5 28 10 1 38 15 18 35 7 37 21 23 8 3 9 14 6 31 27", "9 15 20 39 6 4 1 17 5 32 21", "24 40 25 7 0 20 27 31 29 38 39 4 34 32 17 35 37 19", "6 17 12 15 13 37 27 36 21 9 29 38 4 18 14 40 24 1", "3 39 11 17 31 10 12 18 40 38", "26 12 8 5 22 3 29 1 30 14 33 37 9 39 10 21 25 0 16", "29 34 10 35 6 33 28 1 21 2 22 8 15 16 31 39 25 4", "4 26 0 36 10 37 25 28 24 9 8 6 31 30 20 11 32 5 35", "38 6 0 18 7 10 17 16 2 19 36 23 37 22 32 33 20", "20 19 2 4 13 7 32 16 11 18 26 25 33 31 34 21", "22 24 37 7", "22 10 5 4 39 20 3 2 23 36 18 26 1 0 24 21 33", "20 12 15 2 28 0 22 36 1 10 17 8 11 3 23 40 24 14", "28 26 16 27 32 40 10 18 25 33 8 35 7 17 6 15 29 36", "32 0 5 20 18 26 27 23 33 12 1 6 2 19 39 29 11 17", "4 29 19", "18 26 39 1 14 11 16 34 8 31 13 15 10 2 19 27 22 30", "29 12 11 28 14 31 16 27 30 22", "26 34 36 12 31 39 4 9 8 24 1 38 10 25 29 15"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 504;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 43;
    vector<string> buses = {"32 10 19 17 22 33 37 28 35 12 42 38 27 14 4 34", "17 21 28 14 42 5 33 8 3 35 26 31 25 34 18 13 19 6", "39 10 30 1 41 20 32 38 5 11 34 6 7 8 15 19 37", "25 9 31 41 14 29 3 27 35 30 42 40 13 23", "13 4 8 21 16 7 39 22 19 29 27 3 33 2 31 32 34 35", "20 3 8 13 38 41 5", "30 24 23", "24 42 2 17 26 35 0 12", "25 34 5 11 28 13 1 21 7 19 40 38 23 12 42 0 35 37", "12 37 1 34 4 13 15 0 6 35 3 22 20 18", "27 39 3 20 22 33 5 8 18 21 6 42 31 30 17 12 37 28", "6 7 2 42 9 16 1 32 20 21 22 8 13 24 33 27 3 19 17", "7 39 4 18 15 17 8 3 20 2 0 27 32 36 25 11 1 24 28", "28 11 15 19 38 31 27 30 16 13 33 4 26 41 22 10 18", "21 23 37 29 18 25 27 36 30 8 28 20 42 38 6 11 26 4", "39 23 17 28 30 21 33 3 14 10 0 22 38 11 32 35 5 13", "42 33 39 2 5 17 3 37 25 0 21 20 24 31 26 40", "5 28 41 2 17 8 38 24 6 11 26 27 14 40 15 32 34 16", "11 3 15 39 17 0 24 25 4 23 37 33 22 8"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 859;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 41;
    vector<string> buses = {"8 16 28 10 23 29 37 9 26 36 27 21 15 18 25 24 11", "12 3 0 34 18 28 31 17 35 29", "7 36 11 2 40 23 37 17 3 0 18 20 25", "17 31 29 16 40 22 21 0 25", "20 30 14 18", "6 7", "21 31 35 12 5 27 30 28 15 20 3", "13 1 31 33 39 26 27 11 12 17 7 29 28 15", "30 25 8 16 32 15 12 14 39 11 27 18 26 40 20 33 36", "30 3 13 27 32 34 26 29 8", "6 28 32 27 16 18 11 15 33 38 30 17 34 31 40 36 8 0", "24 40 2 11 28 4 36 16 8 39 21 13 1 23 18 26 10 14", "35 22 1 16 37 38 39 9 5 40 4 20 8 12 14 25 6 24 31", "1 7 8 28 12 4 2 6 0 19 37 23 29 30 34 9 15 11 16", "31 7 17 32 5 36 27 14 4 13 9 12 2 19 8 39 37 25 16", "32 38 4 26 2 7 40 14 36 22 12 0 39 13 16 9 33 37", "13 18 0 35 20 34 33 38 30 11 26 40 4 37 23 21 17", "22 15 30 34 7 28 10 3 25 39 18 24 40 9 33", "32 10 29 0 2 26 19 16 39 18 22 25 38 37 17 5 1 34", "17 4 33 15 19", "36 8 15 9 39 22 13 31 19 0 7 40 6 4 34 28 24 18 25", "20 12 4 32 17 22 28 39 18 6", "6 12 10 5 14 37 38 1 19 24 25 23 20 0 15 2 36 26", "7 17 29 30 26 10 33 21 16 8 23 32 22", "35 5 2 21 40 22 37 25 38 13 28 14 8", "1 29 24 11 36 25 32 27 38 5 9 15 28 37 23 35 31 14", "16 3 26 13 30 24 7 18 11 14 29 0 34 8 35 23 5 4 1", "13 24 38 30 7 10 23 25 26 17 37 31 3 2", "4 7 23 22 19 20 40 36 16 13 21 3 14 34 38 1 8 32 9", "23 37 27 26 7 34 29 31 20 39 9 25 30 17 2 22 5 14", "35 30 7 21 17 31 33 1 24 37 11 10 40 36 18 4 27 9", "27 18 2 15 40", "8 29 14 39 2 22 18 5 3 17 35 38 36 31 30 1 21 32", "22 0 37 7 32", "28 20 13 30 16 26 32 37 36 4 19 24 9 15 0 8 14 31", "15 1 6 29 3 11 23 27 2 0 30 21 14 31 20 39 24 19", "22 32 25 34 8 24 15 5 9 33 11 20 38 3 37 21 0 31", "28 15 1 14 22 40 20 3 6 9 21 34 23 2 36 35 11 33", "30 14 39 13 17 32 28 1 31 23 26 25 38 37 7 29 21", "1 27 30 6 26 22 29", "16 3 8 32 30 26 6 19 15 28 0 5 20 23 7 2 24 12 29", "30 16 24 22 34 18 4", "5 4 13 31", "2 40 29 26 35 12", "15 4 2 34 21 27 10 23 33 20 19 17 32 8 24 35 30 25", "5 17 32 13 2 15 24 21 31 11 3 7 14 25 20 9 34 4 23", "1 2 17 6 28 21 12 24 29 19 37 10 32 7 13 33 35 3"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
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
    int N = 43;
    vector<string> buses = {"1 10 41 39 23 8 19 21 29 12 35 9 28 22 40 6 7", "0 19 38 13 16 15 24 3 7 29 2 42 30 32", "11 24 20 32 0 42 17 22 3 33 18 16", "37 19 29", "8 20 5 19 34 33 7 31 35 36 28 18 1 4 41 25 6 3 29", "31 40 27", "4 24 15 23 35 3 2", "4 11 33 28 6 19 23 20 21 15 16 1 9 14 8 34 40 27", "2 30 18 25 27 22 8 33 41 4 34 39 11 31 0 21 37 26", "40 24 42 5 7 0 38 31 26 21 29 28 14 3 13 10 34 35", "18 40 20 11 2", "25 6 31 37 42 27 21 8 7 29 12 38 23 9 2 16 41 30", "27 17 40 0 2 3 28 18 23 5 37 42 1 31 19 20 26 34 7", "42 22 11 33 37 26 32 17 18 10 31 16 0 23 28 40", "37 41 39 6 4 18 25 20 15 28 26 5 31 29 2 16 19 42", "40 21 18 38", "4 24 29 25 31 1 42", "34 37 27 9 26 13 29 8 15 22 33 11 19", "2 19 3 39 7 12 9 37 16 38 36 18 8 15 13 31 14 5 40", "18 15 22 16 39 31 7 40 3 21 11 2 38 42 5 34 37 41", "2 25 1 36", "22 27 9 38 42 24 20 4 23 0 6 25 37 1 39 28 32 33", "11 21 2 24 3 10 14 17 30 39 36 13 42 27 32 20 1 18", "37 4 22 40 28 0 27 32 10 14 34 8", "25 41 2 11 19 39 4 22 0", "19 33 39 38 21 5 16 3 18 14 30 34 25 37 9 11 1 2"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 716;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 50;
    vector<string> buses = {"20 44 27 32 3 42 21 30 5 15 35 23 25 29 36", "35 11 44 33 36 48 17 7 29 12 49 16 8 31 43 15 3 37", "34 26 14 35 8 33 4 29 43 46 18 12 15 19 42 1 24 16", "10 18 13 6 26 22 40 2 7 0 42 12 17 37 19 30 39 23", "12 11 49 7 25 34 48", "25 28 17 21 2 1 40 44 7 18 32 42 33 15 4 16 45 38", "40 20 27 34 14 35 45 23 17 21 1 33 6 5 10 28 29 13", "4 19 41 10 31 15 2 25 5 21 14 43 17 48 39 0 3 35", "31 36 20 37 4 0 13 33 2 40", "29 49 11 0 27 26 10 34 22 38 28 36 3 15 46 7 14 45", "26 41 39 1 17 21 15 36 25 30 16 37 14 12", "1 10 35 32 30 25 7 6 29 2 34 16 14 38 23 27 45 40", "10 38 13 43 32 8 0 49 33 4 27 28 2 47 48 18", "2 31 39 30 42 9 33 7 35 38 43 18 1 32 28 45 19 21", "44 10 23 5 3 43 25 27 35 18 40 8 32 39 11 12 7 37", "17 37 4 22 10 31 32 42 7", "34 33 47 22 40 5 26 11 32 35 16 7 20 28 39 15 8 36", "24 33 23 29", "16 45 8 47 31 26 32 14", "3 47 9 26 22 11 45 24 43 40 14 42 30 18 49 25 19", "41 7 27 24 18 3 37 36 1 6 5 21 43 9 28 49 34 13 38", "44 4 17 21 41 26 24 49 14 37 7 22 20 11 33 2 46 31", "18 3 26 22 25 45 7 23 31 16 21 41 14 2 30 8 39", "12 7 40 43 24 36 26 29 28 42 10 11 30 27 6 47 49", "26 44 32 2 4 11 10 43 42 5 28 24 16 0 41 6 22 13", "35 21 26 42 29 30 45 32 39 37 23 0 31 41 28 4 17 5", "21 43 38", "25 9 11 17 30 31 24 1", "3 14 31 36 5 48 6 21 16 13 27 8 18 15 4 44 19 28", "4 23 45 24 44 25 5 38 48 2 37 39 13 36 8 28 29 12", "38 42 27 48 40 31 46 25 7 1 28 3 24 23 9 19 43 6 5", "17 20 47 37 41 33 1 18 44 16 43 21 34 31 38 12 5", "47 12 21 34 48 41 40 19 26", "25 34 21 41 37 4 17 3 23 31 8 14 35 46 28 45 32 40", "9 25 6 44 47 17 20 48 4 0", "26 27 11 5 2 39 43 34 32 16 14 48 19 42 15 3 33 18", "6 48 19 23 28 49 33 5 4 30 27 8 14 31 38 26 21 43", "28 8 32 42 13 37 9 43 19 1 25 22 11 26 4 15 31 24", "39 3 11 47 48 31 23 20 6 18 46 15 28 10 5 37 4 41", "36 10 16 30 23 29 0 20 9 32 41 7 12 1 8 2 33 46 15", "5 15 47 12 24 34 46 25 18 6 16 27 43 48 26 35 0 20", "12 49 31 6 14 2 7 27 16 22 32 47 24 19 5 3 43 42", "19 44 29 43 48 30 13 16 34 26 23 15 21 37 3 41 25", "4 0 22 48 32 18 12 19 15 2 5 38 29 9 35 42 47 37"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 847;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 37;
    vector<string> buses = {"4 25 18 23 17 22 8 9 32 21", "0 3 6", "9 34 10 36 24 25 5 18 19 7 15 4 12 31 17 6 22", "34 7 2 31 3 19 35 29 33 8 6 27 9 15 23 17 25 21 24", "33 0 23 35 18 6 20 3 10 13 19 26 25 4 1 24 22", "21 27 1 11 31 15 30 12 20 35 33 34 18 17 16 29 36", "24 26 22 12 29 28 23 11 16 9 14 31 5 1 4 8 18 21", "0 15 9 10 4 11 19 12 24 34 5 36 16 7 13 25 17 3 30", "0 29 7 31 20 32 18 36 5 9 16 11 8 17 15 24 34 25 6", "3 12 19 28 23 29 20 9 16 27", "11 1", "1 4 23 22 20 29 12 25 3 35 16 2 10 14 5 9 6 34 31", "23 33 7 18 6 25 15 13 2 28 27 9 17 20 34 5", "28 5 15 29 25 11 21 3 24 31 7 32 8 27 16 30 13 36", "10 31 19 20 21 30 9 35 13 25 22 15 5 28 3 26 18 32", "20 7 22 26 0 24 11 5 2 1 23 29 31 10 19 25 34 4 27", "33 5 23 7 4 26 16 3 8 14 31 17 12 19 30 10 29 36", "35 20 10", "17 19 25 36 22 4 10 9 32 21 6 5 8 15 12 28 30 7 3", "8 25 5 11", "18 32 22 30 34 20 33 10 26 16 29 36 0 17", "16 27 30 25 35 13 1 17 26 33 12 24 18 2 31 4 19", "25 15 19 33 30 20 4 22 6 3 24 16 12 1 13 35 5 11"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 62;
    vector<string> buses = {"26 18 40 46 55 53 14 36 12 25 0 42 23", "27 53", "7 3 6 36 22 40 33 30 19 0 60 57 53", "51 61 34 11 31 39 46 12 27 24 48 19 49 36 52 54", "21 16 33 45 12 57 44 6 51 4 54 49 61 60 35 13", "51 35 12 32 59 29 13 47 40 57 9 38 21 34 43 31 33", "30 21 60 34 54 8 6 48 16 47 42 41 25 31 50 10 33", "57 18 3 41 59 32 33 39 55 25 17 1 30 35 21", "19 54 50 0 17 2 27 53 46 58 43 52 14 18 40 12 26", "19 29 43 38 61 57 3 40 60 10 44 47 27 12 11 53 54", "8 37 48 54 15 18 35 24 55 21 46 10 19 51 30 39 12", "61 22 1 34 28 2 37 27 41 10", "48 61 16 31 29 6 0 33 34 45 41 52 27 28 19 12 8", "16 42 21 49 54 18 0 12 6 61 4 23 22 55 10 15 26 17", "31 9 14 60 26 21 25 5 58 23 38 48 53 52 51 0 43 19", "60 6 29 54 36 39 31 1 23 61 38 18 37 10 25 0 9 47", "7 23 16 38 37 42 28", "6 35 3 27 4 53 40 57 49 32 43 41 18 44 30 5 25 1", "60 30 13 26 61 56 34 41 11 57 17 38 1 33 16 37 21", "61 41 49 26 29 17 25 57 42 34 45 3 58 40 52 23", "6 42 25 33 50 44 14 9 47 8 11 13 51 10 46 16 26 35", "48 27 47 59 56 1 6 10 52 12 29 46 22 15 13 21 18", "41 30 11 27 15 5 19 7 59 38 44 4 51 34 9 57 36", "54 56 26 4 34 0 8 20 60 59 43 49 24 42 53", "50 45 17 47 22 23 54 46 29 25 39 7 56 27 24 41 14", "20 12 48 55 44 32 4 50 49 60 51 56 33 14 16 1 0 47", "40 18 53 41 34 27 36 24 54 44 23 49 50 32 13 43 31", "59 19 13 14 12 23 40 3 54 31 29 60 1 61 24 57 22 0", "0 26 3 40 30 7 61 22 37 28 15 59 39 16 27 5 32 33", "31 53 40 20 14 18 15 24 54 28 41 55 11 52 37 49 38"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 760;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 100;
    vector<string> buses = {"81 33 58 36 26", "92 67 51 71 86 41", "36 2 33 9 72 34 65 91 99 88 13 49 78 4 31 20 66 94", "34 94 54 98 43 82 81 20 91 41 55 36 99 12 62 24 31", "31 87 90 78 94 26", "22 75", "84 31 44 22 43 17", "82 84 40 56 91 66 4 69 42 68", "23 90 42 48 98 19 61 7 63 54 74 31 67 56 50 94 13", "47 30 18 21", "69 45 30 25 65", "98 52 45 20 21 64 65 83 80 90 89 25 36 51 28", "63 78 68 86 41 33 14 77 4 54 9 16 79 24 42 49 0 36", "30 25 6 32 13 61 26 81 45 55 77 70 40 28 73 90 43", "72 67 49 95 34 91 56 92 88 22 4 14 79 3 25 90 23", "30 12 43 8 38 67 20 59 69 70 24 71 27 44 0 1 89 53", "15 28 54 70 44 45 11 4", "62 75 50 17", "7 3 36 93 81 0 39 43 1 66 92 72 94 37 98 20 79 86", "64 80 56 41 37 9 22 79 53 84 88 12 7 60 38 46 8 14", "43 81", "22 52 2 99 32 69 67 84 0 92 89 37 46 42 78", "63 38 98 18 39 29 97 57 33 23 19 86 96 92 58 68 45", "38 54 18 1 9 83 19 6 14", "51 8 69 11 50 77 24 70 5 62 67 76 58 22 89 36 47", "65 27 83 32 77 55 16 84 23 88 28 3 87 10 62 39 46", "99 30 95 11 21 26 84 58 65 37 83 96 79 69 20 98 24", "62 66 20 67 39 25 74 45 78 73 97 95 60 91 13 46 23", "54 40 74 67 69 65 6 73", "90 57 60 81 35 69 72 38 86 47 5 93 98 75 64 82 77", "5 24 35 31 1 23 49 84 77 66 45 53 97 43 51 78 15 6", "29 84 3 42 69 97 14 40 83 89 38 74 92 12 7 87 64", "79 29 18 47 63 1 90 94 38 28 36 41 67 25 31 66 12", "92 11 27 50 53 97 14", "26 28 17 80 44 21 55 94 51 98 65 59 27 25 20 43 71", "23 36 22", "84 44 76 64 66 92 36 77 49 60 52 2", "70 81 75 92", "52 30 31", "21 79 15", "85 66 48 68 23 83", "55 36 2 86 96 41 91 25", "48 82 35 32 11 41 45 16 23 7 2 22", "49 68 20 73 97 70 1 98 12 65 64 10 29 95 59 9 5 37", "94 65 25 85 4 77 99 60 35 37 66 20", "60 20 2 68 28 10 38 0 70 81 71 18 51 73 44 46 94", "38 1 88 95 6 93 84 65", "7 85 32 82 78 91 60 79 41 49 57 26 48 62 33 71 27", "21 36 79 60 98 30 7 47 59 95 2 91 71 96 16", "4 40 77 51 57 39 90 88 46 82 45 59 13 49 60 32 68"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 933;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 100;
    vector<string> buses = {"67 27 41 9 15 18 71 10 66 85 95 22 2 64 59 62 7 53", "36 37 62 2 44 68 64 86 30 48 54 28 10 56 11 29 22", "91 63 34 36 10 84 51 40 78 64 61 11 56 28 50 97 87", "6 5 76 84 13 89 65 63 11 9 61 94 78 29 69 7 64 38", "35 40 0 54 9 69 32 46 31 33 96 19 76 58 8 56 45 84", "54 99 95 98 37 86 58 83 97 46 2 29 96", "51 1 7 77 98 66 41 29 21 57 33 14 63 24 44 9 34 35", "45 65 95 25 14 11 86 58 0 16 18", "20 76 26 77 35 95 42 58 39 37 36 48 60 59 31 52 8", "60 83 20 57 74 78 93 92 38 44 30 76 19 65 14 41 62", "45 96 34 53 8 87", "59 67 16 84 17 24 8 27 85 37 44 86 94 83 45 75 62", "79 77 19 39 63 46 54 13 43 36 95 4 34 38 16 26 1", "31 51 41 83 36 78 58 44 47 85 21 90 70 2 18 89 34", "46 26 59 69", "1 36 5 15 3 13 44 82 34 97 74 88 79 53 48 41 24 9", "33 74 20 17 69 94 73 1 55 11 19 32 25 58 35 68 71", "10 12 11 65 68 23 21 97 7 42 9 32 16 96", "60 78 68 30 22 37 98 0 64 86 73 54 59 53 87 50 7 9", "21 53 81 50 61 1 4 82 7 23 87 46 96 29 48 98 16 83", "65 72 11 87 27 46 93 30 3 55 64 86 91 74 1 76 62", "92 5 51 35 98 58 71 48 93 16 8 55 17 3 94 31 30 84", "21 9 38 63 13 87 74 44 35 14 95 57 69 58", "90 42 88 44 83 52 4 71 8 86 38 2 75 15 33 72 85 16", "39 56 82 9 94 50 66 30 88 23 33 16 20 62 96 95 68", "78 43", "7 59 88 71 51 44 25 2 52 66 69 13 67 21 5 90 49 91"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 100;
    vector<string> buses = {"41 37 80 3 89 56 88 35 18 17 49 92 95 34 0 51 62", "73 60 90 69 26 7 96 79 68 83 72 78 21 80 57 12 38", "56 25 48 23 40 28", "61 74 52 82 79", "81 28 38 88 42 5 39 23 13", "39 91 20 24 46 75 16 40 43 30 78 18 3 12 93 42 66", "24 37 72 33 89 61 22", "0 45 76 64 17 53 63 1 65 89 33 36 23 92 75 61 21", "5 93 17 48 65 55 74 25 86 58 18 62 50 28 89 69 88", "90 12 0 51 59 17 47 87 71 75 48 10 67", "5 3 74 68 33 65 19 41 43 67 89 8", "54 3 49 45 55 5 18 30 95 21 42 8 52 33 66 12 56 14", "61 76 66 93 45 10 23 43 85 65 41 5 1 58 92 39 79", "70 19 85 81 41 46 62 23", "95 42", "16 39 88 64 97 87 52 3", "69 13 12 88 95 85 19 94 24 34 76 17 11", "98 21 2 44 36 31 45 0 92 53 38 58 34 64 28 78 41", "20 79 1 97 4 36 27 47 75 67 0 40 95 19"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 490;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 100;
    vector<string> buses = {"14 1 37", "42 60 59 83 31 1 73 52 22 18 72", "71 81 13 41 15 14 96 91 59 45 32", "63 99 79 32 8 43 86 91 64 10 92 1 71 19 39 20", "47 20 22 5", "80 25 4 55 23 8 83 33 67 36 22 30", "65 76 92 2 24 59 68 56 83 50 34", "8 1 68 13 94 47 85 93 46 91 99 97 69 14 4 43 84 72", "63 54 58 23 2", "88 57 41 80 94 86 47 87 13 51 71 7", "66 21 49 28 81 10 78 51 39 53 76 34 14 56 29 86 13", "88 38 63 32 75", "11 44 83 26 87 39 90 91 53", "31 16 77 9 54 88 21 25 45 57 66 64 8 52 85 18", "81 86 52 17 53 6 30 28 0 51 50 42 47", "47 79 85 74 32 20 3 1 87 62 44 0 17 71 95 83 89 12", "56 88 69", "47 61 68 91 82 4 97 17 15 18 95 41 63 29 23", "92 44 32 47 61", "0 92 70 39 18 86 29 66 6 64 49 67 10 56 46 45 13", "73 3 46 57 47 72 37 85 34 52", "76 92 30 34", "11 52 49 71 33 99 70 64 76 17", "61 56 46 47 62 74 65 76 21 41 5 96 49 67 34 88 38", "72 77 6 80 40", "26 16 22 51 50 61 15 74 18 11 78", "56 11 69 31", "73 60 71 18 6 12 34 3 77 90 36 62 21 51 83 56 57", "31 27 82 93 96 67 28 17 99 61 79 14 53 75 88", "69 80 73 76 72", "49 62 92 84 64 88 95 22 3 40 7 58", "14 62 29", "24 46 77 35 36 19 59 10 95 1 54"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 100;
    vector<string> buses = {"13 91 71 43 2 50 6 75 34 46", "68 46 29 14 12 54 69 98 85 90 47 11 72 76 27 18 1", "6 33 66 52 12 92 68 82 16 86 35 10 76 78", "66 46 83 88 14 79 34 97 3 21 59 6 72 29 54 93 62", "11 57 27 18 83 41 24 12 72 38 88 26 91 34 90 31 87", "46 21 62 32 98 54 42 34 84 77", "31 92 54 73 38 74 75 42 72 90 43 95 80 82 30 19 5", "86 11 88 43 67 30 92 56 29 13 6 93 85 33 71 81 82", "44 48 66 39 56 16", "44 19 86 94 77 76 46 48 49 41 97 87 15 3 28 79 42", "78 69 13 50 14 90", "11 89 30 5 59 61 87 14 96 82 37 67 75 23 33 48 46", "34 38 96 93 62 17 63 10 57 65 43 7 16 98 51 15 6", "51 25 77 24 94 12 83 91 36 10 40 45 96 86 82 97 92", "60 35 33 85 98 71 23 72 17 9 16 87 32 82 0 39 75", "84 20 87 55 72", "89 97 94 71 67 86 72 90 41 18 28 35 23 25 0 30 16", "6 73 93 34 89 70 48 54 22 85 37 12 29 80 31 14", "34 67 83 58 14 63 18 17 90 31 20 43 77 88 62 28 42", "62 80 86 97 99 35 20 37 6 3 31 33 92 77 17 83", "1 98 45 72 50 66 25 7 80 74 63 0 4 41 48 57 44 33", "45 78 97 29 30 44 85 72 68 61 40 58 26 76", "19 57 83 77 23 18 85 92 89 86 79 43 60 66 29", "98 33 88 75 29 41 93 66 44 96 87 68 20 10", "37 66 72 88 94 71 77 74 19 45 18 49 38 79 76 27 91", "92 37 5 89 30 29", "19 31 88 24 98 85 93 23 39 48 27 99 61 46 36 17 14", "87 4 70 24 96 97 13 48 19 23 51 52 91 85 64 56 1", "87 44 70 84 36 13 11 52 48", "24 61 75 4 69 76 55 30 31 88 19 43 7 93 33 85 82", "63 92 80 17 93 75 65", "34 50 13 7 62 21 19 70 41 35 86 98 71 24 45 65 20", "62 18 14 6 46 94 17 77 78 86 19 69 41 31 68 20 30", "93 1 54 49 9 16 79 37 71 75 68 45 96 33 88", "73 47 68 27 60 91 18 9 31 59 56 74 67 4 58 33 53", "97 76 98 89 48 70 35 37 24 44 12 31 50 30 72 29 75", "11 91 12 80 16", "67 79 30 21 53 83 50 82 27 89 38 58 81 13 61 97 93", "2 39 80 11 67 13 99 61 37 19 97 34 26 40 20 28 38", "16 52 35 37 31 10 5 90 58 61 89 67 32 45 68 1 13", "81 8 0 56 36 84 7 3 93 87 94 83 34 90 4 50 28 18", "18 68 97 10 45 86 67 58", "72 50 15 29 31 0 77 26 61 49 54 70 13 52 36 62 34", "57 99 33 44 71 46 2 18 42 38 80 0 83", "52 5 9 3 44 17 98 0 62 14 54 25 50 88 39 46 97", "88 14 75 21 25 68 72 31 60 52 17 4 20 71 48 82 61", "96 88 25 85 73 57 43 79 34 61 0 28 93 12 67 8 59"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 885;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 100;
    vector<string> buses = {"32 24 61 6 49 19 63 14 51 54 70 2 9 41 75 25 4 66", "62 57 19 87 69 53 59 95 92 97 11 15 28 80 14 0 89", "24 16 10 18 48 30 74 94 97 72 45 77 40 84 35 2 49", "44 34 42 2 83 16 7 29 75 13 43 99 33 78 76 39 31", "52 21 71 40 5 29 25 17 67 95 64 74 55 1 36 93 82", "34 82 38 86 80 68 94 16 98 69 64 30 97 0 79 17 65", "16 81 7 97 39 6 5 72 10 40 56 55 61 64 92 36 13 11", "15 41 8 61 16 24 43 36 39", "58 41 15 13 27 86 84 3 49 28 18 87", "74 1 99 58 84 9 38 30 42 7 50 75 19 80 12 81 13 88", "95 88 52 12 42 1 44 2 78 68 9 96 23 79 4 31 10 41", "13 44 38 8 18 96 0 55 29 32 99 93 24", "60 48 23 25 76 33 79 29 58 95 97 32 67 3 0 57 75", "0 42 41 50 57 46 47 69 8 43 25 7 11 21 29 71 88 36", "12 98 62 19 35 34 87 48", "31 53 44 54 99 11 45 3 15 9 98 77 43 4 74 57 37 19", "5 31 15 39 11 56 13 0 49 66 30 54 83 69 21 40 60"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 701;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 100;
    vector<string> buses = {"79 76 35 86 75 8 47 63 31 78 80 32 11 27 51 62 7", "58 77 76 50 98 17 92 64 21 51 99 48 49", "55 61 35 13 92 78 70 30 68 82 24 84 11 94 97 90 56", "25 95 28", "19 24 66 59 20 51 92 16 30 41 58 9 21 26 61 7 72", "30 1 94 66 42 77 39 28", "18 5 40 49 68 29 53 71 16 26 28 84 61 21 35 59 2", "11 40 54 2 13 36 63 58 59", "65 47 1 17 60 44 67 3 96 76 14 98 70 50 72 27 24", "55 75 7 47 61 28 87 33 82 51 11 74 19 21 17 78", "17 43 31 61 90 34 58 47 63 1 20 84 40 2 55 94 22", "23 52 10 9 11 58 44 68 26 6 98 67 38 0 47 62 99 90", "39 85 0 83 86 11 66 84 88 24 60 63 87 78 38 45 89", "77 63 18 89 13 4 97 8 75 43 17 84 42 40 49 24 64", "17 62 55 38 45 33 26", "49 35 79 5 88 41 1 82 92 83 37", "9 3 38 37 53 45 35 96 52 92 79 97", "11 93 6 10 63 81 89 60 39 80 48 97 71 46 92 72 52", "31 3 14 12 47 29 46 60 1 95 92 88 52 16 8 77", "56 77 66 32 68 17 19 60 38 62 78 90 69 53 96 35 15", "0 49 30 64 39 72 86 60 42 9 77 22 65 53 35 57 81", "72 66 16 47 80 38 57 59 48 61 37 43 97 88 93 24 13", "38 11 39 83 55 52 4 94 95 69 84 60 71 58 56 92 53", "18 13 12 95 68 17 69 60 86 33", "49 67", "33 74 82", "30 49 62 87 90 98 46 72 68 11 64 88 53 37 9 58 63", "38 70 21 27 79 72 51 41 33 42 98 66 1 61 30 87 4", "60 9 4 75 43 8 80 53 82 18 93 55 92 79 61 36 98 56", "29 54 61 46 83 27 20 90 64 65 94 71 77 89 57 12 37", "49 97 6 52 19 47 39 0 57 38 34 88 16 45 61 27 70", "96 12 1 88 73 41 48 74 5 17 34 37 0 40", "24 2 80 67 43 83 53 8 39 12 37 20 71 59", "49 76 35 13 79 74 97 32 53 87 99 45", "74 77 30 49 11 28 38 93 7 95", "94 77 36 17 35 20 83 97 61 5 50 2 69 85 29 74 72"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 100;
    vector<string> buses = {"11 92 90 82 89 42 41 37 70 5", "37 25 95 32 11 27 26 51 66 72 52 98 96 8 82 15 45", "19 60 6 53 75 38 72 23 63 91 36 69 58 9 70 71 48", "32 11 86 46 51 23 3 88 63 9 12 92 72 62 10 74 13", "58 3 41 96 29 51 53 65 80 78 19 84 23 92 66 85 77", "41 73 21 65 43 36 15 29 38 75 26 18 49 27 24 99 93", "3 77 80 2 43 17 39 52 24 50 16 54 36 21 71 13 60", "58 24 27", "8 45 89 93 62 94 4 54 56 73 59 40 30 65 50 36 96", "29 7 89 61 54 1 23 59 55 92 88 11 67 42 86 21 8 62", "35 54 63 74 29 82 18 55 32 15 88 10 62 43 81 33 30", "92 41 75 62 97 58 94 82 42 13 5 34 67 10 77 48 26", "67 18 43 94 24 40 70 36 82", "16 17 12 46 5 55 48 59 38 68 45 99 14 10 67 98 65", "27 42 98 9", "38 51 14 34 48 30 27 21 32 12 99 43", "58 83 26 21 3 43 25 74 35 40 18 81 36 48 16 49 7", "63 79 78 80 67 59 23 55 69 40 95 82 3 7 71 98 52", "6 60 82 23 30 3 66 57 32 45 59 63 95 51 88 97 80", "27 42 98 81 76 87 52 9 31 60 20 22 59 55 14 68 44", "90 91 46 83 13 8 45 6 18 5 28 76 30 74 55 85 57 51", "5 67 11 78", "92 94 76 84 62 58 48 31", "96 31 65 27 83 63 80 58 70 19 94 21 67 46 91 64 4", "53 90 76 20 16 36 71 39 52 46 13 6 14 89 47 48 33", "99 27 78 79 46 96 52 43 63 34 49 80 82", "69 29 59 89 23 40 27 84 97", "86 59 36 23 75 57 90 70 15 56 88 20 51 77 31 35 76", "71 27 70 51", "7 79 77 88 53 94 37 71 19 99 6 34 43 89 3 31 56 2", "48 64", "95 93 90 83 80 29 67 6 62 40 70 0 26 82 47 53 9 41", "7 18 39 37 17 4 36 50 73 34 6 80 14 76 20 10 44 72", "12 37 87 88 76 0 21 65 36 98 32 19 90 93", "72 84 3 71 77 5 7 29 61 70 24 43 26 75 94 2 33 53", "27 29 81 73 34 66", "53 94 71 27 18 24 25 30 93 80 43 15 28 52 39 40 32", "90 64", "44 34 9 88 54", "1 14 21 72 85 84 39 0 83 3 15 24 4 43 6 19 95 23", "77 35 99 12 54 71 27 83 22 81 53 61 48 73 57 84 89", "76 28 35 89 81 87 53 8 13 26 65 7 37 72 9 64 85 30", "50 66 65 43 7 22 63 10 59", "91 76 52 9 83 1 50 92 95 75 0 61 25 18 36 65 99", "87 97 90 72 23 11 80 13 79 43 38 63 89 30 94 71 34", "32 82 63 75 8 49 53", "28 45 35 32 56 0 26 21 30 20 64 37", "54 34 86 53 95 97 50 33 76 48 6 69 42 62 31 28 74", "72 61", "45 89 5 25 0 23 75 41 86 4 3 71 66 28 83 98 90 10"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 830;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 100;
    vector<string> buses = {"26 28 86 51 52 17 35 49 50 71 19 30 96 38 59 39 62", "11 22 6 36 15 35 24 42 50 59 95 84 9 60 13 77 16", "91 15 97 61 36 21 65 52 20 48 74 69 72 92 35 26", "98 85 9 32 94 79 23 54 35 22 8 12 97 68 86 26 15", "72 84 30 33 39 48", "45 26 29 41 86 3 38 91 10 74 75 84 25 59 47 14 98", "48 38 10 91 76 45 49 3 12 37 50 21 1 57 69 74 64", "74 38 77 86 1 87 67 65 85 53 27 52 7 30 64", "40 59 88 20 6 16 94 8 93 70", "84 45 79 83", "53 4 89 41 99 35 28", "60 57 33 93 2 62 19 34 3 76 98 14 67 23 71 82 12", "35 48 74 76 47 43 86 0 5 58 24", "1 61 73 18 68 25 82 21 76 29 2 99", "41 79 85 1 44 84 73 97 68 23 33 30 83 87 81 38 92", "38 0 63 78 76 98 44 57 24 13 21 75 4 17 90 18 55", "92 75 27 55 19 69 80 77 91 50 68 76 23 10 29 37 24", "72 3 28 26 20 50 74 35 29 96 40 68 30 49 6 71 5 48", "63 99 2 68 11 58 74 45 28 59 70 81 29 35 37 77 30", "9 65 8 39 30 61 22 32", "22 76 54 59 84 27 88 86 77 46 70 47 95 74 21 51 91", "57 19 25 97 40 94", "27 52 80 29 57 19 62 88 81 41 44 73 87 91 56 98 95", "17 46 74 14 64 72 44 1 84 32 28 51", "5 60 95 61 23", "41 84 53 40 2 16 69 25 82 13 72 75 23 60 31 73 45", "82 48 25 4 27 55 65 45 2 57 26 97 78 51 41 96 84", "13 70 64 81 11 51 29 87 5 50 72 97 10 93 44 38 16", "95 60 68 90 47 22 48 65 91 73 62 86 81 14 37 55 72", "87 89 81 73 44 13 30 56 26 24 42 35 75 28 51 47 38", "63 48 4 98 15 34 55 72 56 0 10 62 60 89 14 16 87", "19 13 42 84 22 68 1 80 32 67 87 14 55 63 50 86 48", "72 18 71 30", "60 97 72 50 38 45 15 33 55 56 65 62 25 34 47 68 41", "32 76 49 43 1 39 0 25 79 51 82 61 7 13 37 58 77 40", "10 48 74 7 85 6 26 70 61 38 50 53 87 27 66 91 32", "20 70 61 94 54 12 36 24 39 32 71 85 81 9 10 17 57", "30 9 27 31", "13 29 58 8", "29 87 58 91 67 30 60 28 1 39", "69 3 88 25 85 17 53 63 12 34 46 98 8 75 95 33 83", "90 51 84", "30 99 20 19 49 66", "10 27 72 20 33 73 36 0 45 48 85 56 57 60 18 80 55", "4 5 3 60 32 38 24 30 69 36 54 20 13 62 97 51 53 41", "37 49 85 29 77 87 25 7", "30 60 73 70 38 95 79 56 82 88", "38 75 22 35 68", "45 65 35 49 86 78 84 38 2 37", "45 98 55 3 54 39 69 26 1 83 11 32 58 85 37 19 5 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 772;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 100;
    vector<string> buses = {"43 21 42 73 54 66 46 30 13 53 0 91 25 89 86 34 55", "63 87 18 82 61 6 97 62", "89 51 16 82 62 5 21 17 63 43 50 38 53 46 9 39 3 59", "51 21 26 86 0 61 39 28 41 25 83 8 24 73 45 17 11", "79 40 47 10 46 51 14 88 6 70 94 76 28 7 72 5 93 11", "21 3 38 58 96 57 4 63 83 70 84 72 62 15 81 90 73", "82 6 4 68 38 93 1 45 50 81 17 77", "65 62 21 97 82 48 13", "35 94 29 14 66 85 58 62 11 10 45", "19 38 62 15 4 92 1 5 9 17 45 16 28 79 57 58 34 88", "45 37 54 74 35", "78 22 97 48 49 92", "21 91 18 58 65 3 37 9 86 26 82 74 7 44 67 55 73 56", "33 95 97 82 90 40 44 15 98 68", "69 99 88 68 17 83 93 28 82 53 10 43 18 37 94 62 86", "42 60 77 91 18 58 31 36", "18 9 36 7 20 65 77 25 73 39 62 47 61 52 46 23", "87 2 52 83 40 90 38 57 36 16 14 51 28 91 76 93 21", "98 51 80 12 28 52 91 8 31 72 9 64 33 22 5 58 18 34", "34 3 85 98 16 80 46 32 9 23 21 45 52 48 49 99 41", "81 73 18 59 49 1 31 68 20 77 9 28 54", "9 32 33 63 19 96 99", "48 40 18 65 91 57 52 14 50 75 74 62 92 39 54 68 29", "53 4 97 34 82 90 22 14", "27 23 96 48 63 79 10 92 21 36 94 34 78 70 73 59 55", "76 92 25 45 62 47 39 53 19 78 63 96 67 89 34 17 36", "85 15 20 14 71 99 5 84 88 82 38 47 29 61 33 67 22", "76 12 90 61 13 68 77 30 35 64 95 7 52 8 6 34 49 59", "95 37 31 14 9 80 68 50 43 3 19 11 64 71 26 48 30", "53 42 61 63 73 48 4 94 74 31 23 87 56 19 93 76 97", "81 37 24 65 63 13 48", "15 12 55 47 53 86 66 34 28 93 74 69 92 88", "12 10 17 41 53 2 67 36 60 86 93 65 61 58 78 15 33", "57 77 50 39 23 68 94 95 63 2", "13 98 40 85 72", "38 47 68 50 16 64 93 25 99 87 14 75 98 46 40 28 18", "57 93 52 74 41", "83 66 77 26 60 29 25", "89 43 60 34 78 93 42 41 72 86 64", "41 89", "5 59 54 78 95 22 2 14 27 70 8 91 34 71 35 23 13 89", "51 66 38 19 15 47 36 58 34 95 25 92 94 44 89 72 40", "80 31 59 60 20 88 72 85 71 7 13 10 29 9 58 62 11 4", "99 24 2 69 16 28 79 84 26 58 65 51 9 35 77 15 76", "77 65 40 29 80 63 15 8 27 3 96 68 28 35 51 31 72", "87 70 12 2 28 90 25 34 61 17 79 82 76 99 63 93 4", "67 36 17 31 41 86 54 19 56 84 93 70 3 90 7 21 47", "16 10 81 72 63", "29 62 47 58 63 83 30 7 6 4 82 44 42 80 37 19 38 14", "93 7 6 92 79 91 0 18 72 22 53 37 66 38 52 33 49 68"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 897;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 100;
    vector<string> buses = {"87 56 69 39 96 90 53 34 47 59 84 23 71 79 67 11 38", "87 74 71 43 82 75 16 59 70 60 90 26 51 48 56 61 27", "50 18 94 23 99 5 44", "33 74 59 60 43 37 92 23 71 86 26 65 12 47 68 85 97", "28 73 93 1 25 17 91 61 6 64 27 32 19 49 4 33 97 81", "75 46 23 34 71 91 40 70 9 81 94 73 4 76 56 38 32", "86 55 2 30 87 34 37 74 16 42 19 81 60 52 80 15 97", "24 41 20 61 82 89 14 76 7 26 36 75 53 83 78 31 19", "41 63 31 85 46 96 40 50 18 97 73 10 87 26 37 20 0", "57 41 18 7 28 93 50 66 60 21 72 1 64 27 75 25 23", "99 70 29 10 16 43 25 21 13 44 27 11 60 19 96 1 35", "32 11 69 99 75 72 38 87 62 52 84 22 44 4 49 42 8", "55 86 62 26 75 10 3 78 98 64 88 30 16 94 17 43 69", "6 51 93 63 46 8 77 40 35 65 26 80 66 87 36 95 5 89", "50 46 14 80 39 92 17 97 63 55 98 95 58 86 9 35 88", "49 2 25 70 38 44 31 43 27 32 51 29 19 33 86 48 5", "14 0 1 92 2 13 82 23 8 35 25 9 4 53 21 80 6 20 54", "43 74 46 61 88 50 52 3 78 6 14 73 72 92 10 68 9 15", "28 5 89 0 69 16 50 13 84 55 51 66 35 42 32 98 23", "71 58 33 22 46 1 17 38 89 62 90 49 41 80 75 30 39", "20 31 23 46 95", "43 87 26 89 73 36 62 40 49 54 83 98 76 10 9 19 88", "98 28 34 47 54 79 99 10 20 27 75 18 42 4 3 81 6 45", "15 98 36 14 34 79 10 9 67 20 99 58 51 18 48 87 85", "66 42 18 11 51 31 64 35 8 29 86 94 38 41 33 5 36", "98 63 36 66 83 80 59 57 19 71 82 95 47 74 64 72 15", "53 77 60 17 80 52 59 71 0 31 27 99 18 30 95 35 7", "99 18 6 86 89 71 38 60 72 94 66 16 98 9 58 13 67", "33 85 12 15 0 99 5 55 14 42 97 7 86 47 66 72 73 75", "57 80 47 61 84 35 8 64 99 26 5 97 22 74 37 50", "15 80 67 97 78 75 68 76 37 29 21 3 87 92 45 24 82", "77 36 8 20 44 71 73 47 45 7 60 66 93 95 80 58 1 13", "28 12 13 40 8 22 74 52 84 1 61 30 90 68 26 89 48", "33 68 81 3 39 41 56 88 42 72 82 96 13 83 9 89 4 1", "67 15 59 43 83 58 62", "87 30 71 66 43 95 82 72 96 40 62 46 69 36 93 25 73", "98 95 40 93 23 88 85 97 43 63 96 49 44 84 11 80 70", "63 35 1 71 65 60 50 23 31 51 47 10 73 87 18 33 62", "42 72 64 32 28 89 39 90", "68 88 83", "46 84 14 23 17 68 24 32 61 38 88 96 99 83 95 82 53", "31 56 13 14 53 76 45 96 35 81 85 97 65 0 7 27 43", "3 99 30 44 56 31 7 93 69 66 48 53 72 35 77 78 0 75", "94 93 9 60 2 64 46 12 61 13 65 19 47 53 22 86 10", "65 36 82 32 62 1 66 87 98 99 88 89 57 11 7 16 60", "38 41", "98 78 83 34 66 95 73 14 74 59 56 17 36 90 69 13 18", "93 66 82 34", "47 12 44 22 37 60", "65 36 85 45 78 89 92 13 51 47 8 66 43 11 30 28 69"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 100;
    vector<string> buses = {"0 10 30 45 60 46 39 31 20", "9 20 0 86"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 3;
    vector<string> buses = {"0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0", "0 1 2", "1 2 0", "2 1 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 25;
    vector<string> buses = {"24 14 9 7 2", "21 4 18 24 7 1 2 11 8 9 14 16 5 17 13 23 19 15 22", "12 22 24 9 1 5 10 8 7 18 16 19 4 13 17", "14 5 17 9 23 7 16 22 10 4 6", "19 8 1 9 24 3 5 22 16 7 6 4 10 23 17 0 13 15", "2 16 10 13 14 1 11 20 0 24 22 23 19 4 18", "19 15 18 0", "15 9 22 5 20 8 23 14 24 18 21 6 13 19", "2 6 19 3 21 10 20 22 24 13 16 15 8 18 17 14 5", "19 10 1 7 5 11 21 8 14 0 17 23 12 2 3 16"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 157;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 51;
    vector<string> buses = {"0 5 10 15 20 25 30", "0 3 5 8 13 15 18 22", "2 0 7 13 17 21 24 44 50"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 802;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 100;
    vector<string> buses = {"0 10 30 45 60 46 39 31 20", "9 20 0 86", "1 0 3 5 7 9", "46 47 48 49 50 51 52 53 54 55 56", "10 32", "30 60"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 100;
    vector<string> buses = {"50 99", "0 99"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 792;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 100;
    vector<string> buses = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 23 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 45 99 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 67 12 13 14 15 43 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 87 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 23 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 23 54 16 36 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 65 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 84 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 34 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 54 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 76 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 96 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 34 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 99 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 65 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 0"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 51;
    vector<string> buses = {"0 5 10 15 20 25 30 35 40 50"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 100;
    vector<string> buses = {"0 10 30 45 60 46 39 31 20", "9 20 0 86"};
    BusTrip* pObj = new BusTrip();
    clock_t start = clock();
    int result = pObj->returnTime(N, buses);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10663&pm=7420
********************************************************************************
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
 
//typedef long long __int64; 
 
const int maxn=1000+5; 
const int maxT=2000+5; 
 
int V[maxn][maxT]; 
 
class BusTrip 
{ 
public: 
  int returnTime(int n, vector <string> vs) 
  { 
    memset(V,255,sizeof(V)); 
    for (int i=0;i<vs.size();i++) 
    { 
      istringstream sin(vs[i]); 
      vector<int> L; 
      L.clear(); 
      int v; 
      while (sin>>v) 
        L.push_back(v); 
      int T=0,k=0; 
      while (T<=1000) 
      { 
        if (V[L[k]][T]==-1) 
          V[L[k]][T]=L[(k+1)%L.size()]; 
        T+=abs(L[(k+1)%L.size()]-L[k]); 
        k=(k+1)%L.size(); 
      } 
    } 
    int T=-1,pos=0; 
    bool first=false; 
    while (T<=1000) 
    { 
      if (first && pos==0) 
        return T; 
      T++; 
      if (V[pos][T]!=-1) 
      { 
        first=true; 
        int _pos=V[pos][T]; 
        T+=abs(pos-V[pos][T]); 
        pos=_pos; 
      } 
    } 
    return -1; 
  } 
};

********************************************************************************
*******************************************************************************/