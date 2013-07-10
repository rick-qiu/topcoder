/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3117
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

class TurntableService {
public:
    int calculateTime(vector<string> favorites);
};

int TurntableService::calculateTime(vector<string> favorites) {
    int ret;
    return ret;
}


int test0() {
    vector<string> favorites = {"0 2", "1", "0 1"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> favorites = {"0", "0", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> favorites = {"4", "1", "2", "3", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> favorites = {"0 004", "2 3", "0 01", "1 2 3 4", "1 1"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> favorites = {"1 2 3", "0 1 2", "0 1", "2 0000000000000000000000000000000000000000000002"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> favorites = {"2", "10", "12", "1", "5", "14", "7", "6", "13", "2", "9", "3", "11", "8", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> favorites = {"2", "10", "12", "1", "5", "14", "7", "6", "13", "9", "3", "11", "8", "0", "4"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 173;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> favorites = {"2 8", "10 7 0", "12 2", "1 6", "5 4", "14 9", "7 8 1", "6 11 14", "13 10", "9 13", "3 5", "11 1", "8 13 2", "0 3", "4 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> favorites = {"9", "1 2", "2 0 6", "7 4", "0 9 1 9 4", "3 0 3 2 0", "6 4 6 8 3", "3 4 9 6 7", "5 3", "2 2 1 3 9", "0 0 1 9"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> favorites = {"3", "8", "1 4 10 4 0", "2 5", "6 9 8", "4 12 11 13", "3 5", "2", "5 4 7", "11", "9", "10 3 1 9 7", "5 1", "7 7 8 9 6", "0 6"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> favorites = {"5 0", "12", "9 8", "12", "5", "3 1 9 7 5", "5 6 9", "8", "8 6 2 1", "0 6 11 5", "6", "10", "9 8", "11"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> favorites = {"6 6 11", "11 8 13", "0 0 12 6", "8 1 0 7 0", "8 2 4", "8", "8 5 13", "2 4", "6", "0 6 7 0", "9 13", "7 14 6 10 5", "14 1 14", "14 2 0 11", "9 9 4 5"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> favorites = {"3 7 10 2", "0", "1", "5 8 7 10 0", "8 0 3 9", "9 2", "10 11", "5 2 10 5", "4 11 12 12", "9 6", "0 5 3 5 7", "7 6", "12 4 9 4", "3 4"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> favorites = {"3 7", "0", "9 7", "5 8", "1", "14 12 10 1", "0 7", "3", "3 11 3 11", "3", "14 4", "3 1 3", "11 14 1 2", "11 12", "11 0 0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> favorites = {"10 9 0 3 9", "2 0 5 9 2", "0", "4 1 4 8 3", "4", "9", "3", "1 0 4 10 4", "7 9", "10 6 7 8 3", "7 9 10", "2 3 2 4 3"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> favorites = {"7 5 11", "4 10", "11 8", "11 8 11 7 0", "0 8 10 1 4", "2 3 2 0", "1 3 4", "10 4 11", "8 3", "11 8", "3 9", "8", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> favorites = {"9 4 1 13 11", "8", "14", "7 7", "13 14 9 7", "5 2 4 3", "1", "1 0", "6", "8", "9", "3 8 12 14", "8 4", "7 6", "6 0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> favorites = {"14 12", "13 10 12", "12 12", "11", "10", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> favorites = {"9", "12", "12", "6", "11", "13", "5", "5", "7", "8", "6", "3", "10", "3"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> favorites = {"1", "10", "8", "0", "9", "5", "2", "11", "14", "2", "1", "9", "7", "14", "1"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> favorites = {"0 1 2 3 4 5 6 7 10 11 12 14", "0 1 2 3 5 8 12", "0 1 2 3 4 5 7 8 11 12 13 14", "0 1 5 7 8 9 10 11 12 13 14", "2 3 5 6 7 10 12 13 14", "0 1 2 3 5 6 7 9 11 13 14", "0 1 2 4 5 6 7 8 10 12", "0 1 2 3 4 5 6 7 9 11 13", "0 1 3 7 8 9 10 11 13 14", "0 2 3 5 8 11 12", "1 2 3 4 5 6 7 9 11 13 14", "0 1 3 4 5 6 9 10 11 12 14", "0 2 7 10 12", "1 2 3 5 8 10 11 12 13 14", "3 8 9 10 11 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> favorites = {"1 2 7 9 12 13 14", "1 2 3 4 7 9 11 12 13 14", "3 5 8 10 11 12 13 14", "0 4 6 7 13 14", "2 4 6 7 9 10 11", "0 2 6 7 8 14", "1 3 4 7 8 11 12 14", "0 1 2 3 4 5 14", "2 6 8 9 11 13", "0 2 3 6 7 10 13", "1 2 3 8 9 11 13", "1 2 3 6 7 8 9 11 12 13 14", "0 1 3 4 6 9 10 13 14", "0 6 10 12 13", "1 2 3 6 8 9 13"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> favorites = {"1 2 7 9 12 13 14", "1 2 3 4 7 9 11 12 13 14", "3 5 8 10 11 12 13 14", "0 4 6 7 13 14", "2 4 6 7 9 10 11", "0 2 6 7 8 14", "1 3 4 7 8 11 12 14", "0 1 2 3 4 5 14", "2 6 8 9 11 13", "0 2 3 6 7 10 13", "1 2 3 8 9 11 13", "1 2 3 6 7 8 9 11 12 13 14", "0 1 3 4 6 9 10 13 14", "0 6 10 12 13", "1 2 3 6 8 9 13"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> favorites = {"1 2 3 4 5 6 7 8 10 12 14", "0 2 4 5 7 8 9 13", "0 1 2 3 4 5 6 7 9 10 11 12 14", "0 1 5 7 8 9 11 13 14", "1 4 5 6 9 10 13", "1 3 5 6 7 8 9 10 12 14", "0 5 7 8 9 13", "1 2 3 4 6 7 11 12 13", "0 6 7 8 10 11 12 14", "0 1 2 5 9 11 12 14", "0 3 5 8 10 11 12 13 14", "2 3 4 5 6 7 8 9 10 12 13 14", "0 1 2 3 4 7 8 9 10 13 14", "0 2 3 4 5 6 7 8 9 10 11 13 14", "0 1 4 5 6 7 8 9 11 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> favorites = {"2", "0", "11", "2", "13", "5", "13", "2", "14", "5", "6", "11", "6", "0", "7"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> favorites = {"4 7", "8 10", "2 10 14", "10", "6", "14", "2 9 13", "4 10 13", "6 8 12 13", "0 3 13", "5 6", "1", "1", "7 8 12 14", "4 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> favorites = {"4 7", "8 10", "2 10 14", "10", "6", "14", "2 9 13", "4 10 13", "6 8 12 13", "0 3 13", "5 6", "1", "1", "7 8 12 14", "4 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> favorites = {"1 8 10", "7 8 11", "7 10", "2 13", "8 12 13", "3 10 12", "2 12", "4 11 12", "0 1 8 11", "5 7 8 12", "5 9 11", "8 10", "0 13", "12 13 14", "1 3 11 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> favorites = {"2", "1 4 14", "5 8 13", "9", "8 11", "14", "4 7", "6", "2 4", "0", "5", "5 13", "5 8 11", "8", "4"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 141;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> favorites = {"1 3 5 11", "0 3 5 6 7 8 10 13 14", "0 1 3 8 9", "1 4 9", "10 14", "4 7 9 12 13", "8", "3 4 7", "8 14", "2 10", "2 7 12", "3 8 11", "0 2 6 14", "3 5 9", "1 5 9 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> favorites = {"0 2 5 8 14", "6 7", "0 1 4 5 8", "4 9 11 12", "5 13", "1 4 8 10", "10", "0 1 4 13", "3 11", "0 6 8 9", "7 14", "1 9", "3 4 11", "0 1 3 12", "3 4 6 9"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> favorites = {"1 2 10 12 14", "1 12", "0 2 3 4 5 6 9 13", "2 4 9 13", "0 2 4 6 8 9 10 13 14", "0 1 10 12 13", "3 4 5 7 9 13", "0 1 3 4 10 12 14", "2 5 8 10 12 13 14", "1 6 10", "1 7 12", "2 3 6 8 12", "7 14", "3 5 11 14", "2 8 10"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> favorites = {"1 4 5 7 8 9 11 12 13", "0 1 2 4 5 6 7 9 12 13", "1 4 5 6 8 9 10 11 12 13 14", "1 4 5 6 7 8 9 10 11 12 13 14", "1 2 3 4 5 6 8 10 12", "0 1 2 3 4 5 6 7 9 10 11 12", "2 4 5 10 12 13", "0 1 2 5 6 8 9 10 11 12 13 14", "0 6 7 8 9 10 11 12 13", "0 1 3 4 5 6 7 12 13", "2 3 4 5 8 9 10 11 13", "1 2 3 4 5 6 8 10 12 13 14", "0 1 2 3 4 5 9 10 12 13", "1 3 4 5 10 11 14", "0 4 5 6 9 10"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> favorites = {"11", "1 2 3 5 7 8 9 10", "0 2 3 4 5 8 9 13", "2 4 5 6 9 11", "1 5 7 8 9 11", "0 3 5 6", "1 3 4 5 6 9", "0 1 4 5 6 10 11 12 13", "4 8 9 10 12", "0 3 7 8 9 10", "1 6 9 12 13", "3 4 8 9 10 12 14", "6 7 8 9 12 14", "0 1 2 4 10 11 14", "0 2 5 9 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> favorites = {"2 3 4 5 6 7 8 10 13 14", "0 2 3 4 5 6 7 8 9 10 11 13 14", "0 3 4 6 7 8 10 11 12", "0 1 3 4 5 6 7 8 9 10 11 13 14", "0 1 2 3 4 5 7 8 9 10 11 12 13 14", "0 1 3 4 5 7 8 12 14", "0 1 4 5 6 7 9 10 11 12 13 14", "0 1 3 4 5 7 12 13 14", "0 1 3 4 6 7 8 10 11 12 13 14", "0 1 2 5 6 7 9 10 11 12 13 14", "0 1 2 3 5 6 7 9 11 13 14", "0 1 2 3 4 5 6 7 8 10 11 12 14", "0 1 4 5 6 8 10 12 13 14", "1 2 3 4 5 6 7 9 11 14", "0 1 2 6 11 12 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> favorites = {"2 4 8 10 11 12", "7 9", "2 3 4 5 6 7 8", "1 5 6 7 8 12 13 14", "6 7 10 12 14", "0 2 10 11", "4 9 11 12 13", "1 4 8 10 11 12 14", "3 6 12 13 14", "1 5 7 9 12", "0 3 7 8 9 11 12 13", "0 2 4 6 8 10 13", "0 1 4 5 9 10 11 12", "0 1 2 3 4 6 8 10 11 12", "3 4 5 6 9 10 11 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> favorites = {"0 1 2 6 13", "1 4 6 7 8 11 12 14", "0 1 2 3 5 6 8 13", "0 1 2 3 5 6 7 9 10 12 14", "2 3 4 8 13 14", "4 5 7 10 12", "0 3 4 7 8 10 11 13 14", "0 1 2 3 5 6 7 9 10 13 14", "0 3 5 6 7 8 9 11 12 13 14", "1 2 3 4 5 8 10 11", "2 4 8 9 10 14", "0 2 4 8 10 11 12 13 14", "0 1 2 3 6 9 10 11 12 13", "2 3 4 6 7 8 9 11 12", "1 2 3 5 7 8 9 10 11 12 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> favorites = {"0 1 2 3 4 5 6 7 8 9 10 11 13 14", "0 1 3 4 6 7 9 10 11 12 13 14", "0 1 3 5 6 7 8 9 10 12", "0 1 2 3 5 6 7 8 10 12 13 14", "0 1 3 4 8 9 12", "0 1 3 4 5 10 12 13", "0 3 4 7 8 9 11 12 13", "0 1 2 3 4 5 7 8 9 12 13", "0 1 2 4 5 8 9 11 14", "0 2 3 4 6 7 8 9 10 12 13 14", "0 2 3 4 5 6 7 9 11 12 13 14", "0 1 2 3 5 6 7 10", "0 4 5 6 7 9 10 11 12 14", "1 2 3 4 5 6 7 8 9 11 12 13 14", "0 2 4 6 7 8 9 10 11 12 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> favorites = {"8", "1 2 9 10 11 14", "1 6 10 14", "1 3 5 6 11 12", "7 8 10 12", "0 1 6 7 9", "1 5 6 9 11", "6 11", "6 10 12 13", "1 6", "10 11", "0 3 10", "2 9", "0 3 7 11 13", "2 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> favorites = {"1 2 3 5 8 10 14", "2 4 5 7 10 11 12 14", "0 1 2 3 5 6 9 10 14", "1 2 5 7 9 13 14", "1 2 5 6 9 10 11 12 13", "0 1 2 4 8 11 13 14", "0 8 9 10 12", "0 1 9 10", "6 8 9 11 13", "1 4 5 6 8 10 11", "6 7 8 12 13", "1 2 3 5 6 11 12", "1 3 4", "0 1 2 4 10 13", "0 4 5 7 10 11 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> favorites = {"10", "6 7 8 14", "1", "4 9", "0 4 8 13", "2 5 8 14", "1 3 9", "5 8", "1 2 4 9 10 12 14", "1 5 8 10 11", "4", "3 5 8 12", "0 2 5 11 12", "0 2 13", "1 4 10"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> favorites = {"1 2 5 6 8 9 10 11 12", "0 1 8 9 10 11 12", "2 3 4 6 10 11 12 14", "1 7 9 10 11", "2 3 7 12 13 14", "1 2 3 4 5 6 9", "1 2 3 4 7 9 10 14", "1 3 4 6 9 10 11 12", "0 2 6 7 10 11 14", "2 4 6 8 10 11", "0 4 5 7 10", "1 2 3 8 14", "5 11 12 13", "1 4 5 6 10 11 12 13", "0 2 4 13"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> favorites = {"1 2 3 5 6 7 9 10 11 12 13 14", "0 2 4 5 6 7 8 9 10 14", "1 2 3 4 5 6 8 9 12 13 14", "0 2 3 4 7 8 9 10 11 12 13 14", "0 1 2 4 5 6 7 8 9 10 11 12 13", "1 2 3 4 5 6 7 8 9 10 11 12 13", "0 1 2 4 5 7 8 9 10 13 14", "0 1 2 4 5 6 8 9 11 12 13 14", "0 1 3 4 5 6 9 11 13", "1 2 3 5 6 7 10 13 14", "0 3 5 6 7 8 9 10 12 14", "0 1 3 4 5 6 7 8 9 10 12 13", "0 1 3 4 5 7 11 12 13 14", "0 1 2 3 4 5 7 9 10 12", "0 4 5 6 7 8 10 13"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> favorites = {"2 3 4 7 10 12 13", "0 1 3 6 7 8 10 12 13 14", "0 1 2 3 6 7 8 10 13 14", "0 1 2 3 4 5 6 7 8 9 10 11 13 14", "1 3 4 5 9 10 11 12 13 14", "0 1 2 4 5 6 12 14", "0 1 2 4 5 6 7 10 11 12 13 14", "0 1 2 5 6 8 11 12 14", "0 2 4 5 6 7 9 10 11 12 13 14", "2 3 5 6 8 9 11 13 14", "0 1 2 3 4 6 8 9 11 12 13", "0 4 5 6 7 8 9 11 13", "0 1 2 4 5 6 7 8 11", "0 1 2 3 6 9 10 11 12 13 14", "1 4 8 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> favorites = {"0 2 8 10 11 13", "0 2 3 5 7 9 10 11", "4 7 9 10 12", "0 1 3 5 7", "2 3 5 6 7 11 14", "2 6 8 10 11 13", "2 6 11 12", "3 5 7 11 14", "1 4 6 9", "0 2 6 8 13", "0 2 3 4 6 7 8", "1 2 3 5 7 10 14", "0 2 3 4 8 11 12 13", "4 5 7 9 11", "2 3 6 8 10 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> favorites = {"0 2 3 5 6 9 10 11 12 13 14", "1 2 3 5 6 7 9 11 12 13", "1 4 6 8 9 10 11 12 14", "0 1 2 3 4 5 6 7 8 9 11 12 13 14", "0 1 2 3 4 6 7 8 9 10 11 12 14", "0 1 2 3 4 5 6 7 8 9 12 13 14", "0 1 2 3 4 5 7 10 11 12 13 14", "0 1 2 3 4 5 6 7 8 9 10 12 14", "0 1 2 3 4 7 9 10 11 13 14", "0 2 3 4 5 6 7 10 11 12 14", "0 2 3 4 5 6 7 8 9 10 13", "0 1 2 3 4 5 6 7 8 9 10 12", "0 1 2 3 4 5 6 7 8 10 11 12 13 14", "2 3 4 6 8 9 13 14", "1 2 3 4 6 8 11 12 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> favorites = {"2 4 9 10 11", "8", "0 1 12", "1 2 3 6 7 9 11 14", "0 1 2 3 7 8 9 12 13", "3 5 12 13", "2 3 7 13", "0 2 6 7 9 10 14", "0 7 8 14", "0 2 6 8 9 11", "1 7 9 12", "1 4 8 9", "3 6 7 8 9 11 12", "0 1 4 7 8", "1"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> favorites = {"3 5 8 10 13", "5 10 12 14", "1 2 3 4 5 9 10 11 12", "1 6 7 10 12", "1 3 8 9 11 12", "2 7 8 12 14", "1 5 7 13", "2 3 5 8 9 11 13", "0 7 8 9 12", "2 7 8 9 11 14", "0 1 4 7 10 11 13", "1 3 6 8 9 11 12", "0 6 7 12 14", "3 6 9 10 11 12 13", "0 1 3 11 12 13"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> favorites = {"0 1 2 5 6 7 8 9 11 13", "0 2 3 4 6 7 8 9 11 12 14", "0 2 3 5 6 7 8 11 13 14", "0 1 3 4 5 6 9 11 12 14", "1 2 3 4 5 6 7 9 14", "1 2 3 5 7 9 12 13", "1 2 3 4 5 7 8 9 10 11 13 14", "0 1 2 3 4 6 8 10 12 14", "3 4 5 6 8 9 10 11 14", "0 2 4 6 7 8 9 11 13 14", "1 3 5 6 7 8 10 11 13 14", "1 4 5 6 7 8 9 10 11 13 14", "4 5 6 7 8 9 10 11 12 13 14", "0 1 3 4 5 6 7 8 9 10 12", "0 1 3 4 5 6 7 8 9 10 11"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> favorites = {"0 1 2 3 5 6 7 8 9 10 11 14", "0 1 2 3 5 9 10 12 13 14", "2 3 5 8 9 10 12", "0 1 2 5 6 7 10 11", "1 5 9 10 12 14", "0 2 3 4 6 7 8 9 11 12 13", "0 2 3 5 7 10 12 14", "0 1 2 5 7 9 10 11 12 13 14", "0 1 4 5 7 8 11 12 13", "0 2 4 6 7 8 9 11 12 13 14", "1 2 3 4 7 8 10 11 12 13 14", "0 1 2 5 6 7 8 10 11 14", "0 1 2 5 6 7 11 13", "0 6 8 9 10 11 12", "0 1 3 4 5 6 9 10 11 12 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> favorites = {"1 2 3 4 7 8 9", "1 3 5 11 12 13", "0 1 4 10 11 12", "5 9 12 13", "1 2 3 5 8 11 12 13 14", "5 7 9 10 14", "0 3 5 13 14", "9 10 11 13 14", "1 2 8 11 12 14", "2 3 5 6 8 11 12 13 14", "2 3 6 10 11 13", "0 5 7 11", "2 3 4 6 8 9 11", "0 2 6 9 13 14", "2 11 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> favorites = {"1 3 4", "2 6 11", "2 3 4 12", "1 6 8", "0 8 10 14", "4 5 6 8", "3 6 8 10", "0 8 10 11 13 14", "1 4", "0 7 11 12 13", "13 14", "0", "1 3", "9 11 14", "0 2 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> favorites = {"1 2 4 5 6 7 9 10 11 12 13 14", "1 2 3 5 6 7 8 9 10 11 12 13 14", "0 1 3 5 7 9 10 11 12 13 14", "0 1 2 3 4 5 7 8 9 10 11 12 13", "0 1 2 3 4 5 6 7 8 9 10 11 12 14", "0 1 2 3 4 5 7 8 9 10 11 13 14", "0 2 3 4 5 6 7 8 9 11 12 13 14", "0 1 3 4 5 6 7 9 11 12 13 14", "1 2 4 5 6 7 8 9 10 11 12 14", "0 1 2 4 5 7 8 10 11 12 13 14", "0 1 2 3 4 5 7 9 10 11 12 13", "0 1 2 3 4 5 7 8 9 11 12 14", "1 2 3 4 5 6 9 10 11 12 13 14", "0 1 2 3 4 7 9 10 11 12 13 14", "1 2 4 5 6 7 9 11"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> favorites = {"0 1 2 3 7 8 9 10 12 13 14", "0 1 2 3 4 5 6 8 10 14", "0 1 2 3 4 5 6 9 10 11 12 13 14", "2 3 5 6 7 9 10 11 14", "0 1 2 3 4 5 6 7 8 10 14", "0 2 3 4 5 7 8 9 10 11 12 13 14", "0 1 3 4 5 7 9 10 12 13 14", "0 1 2 3 4 9 10 11 13 14", "0 1 2 3 5 6 8 9 10 11 12 13 14", "0 1 3 4 7 8 11 12 14", "0 1 3 5 7 9 10 13 14", "0 3 6 7 9 13", "0 1 2 3 4 5 6 8 9 11 12 13 14", "0 2 3 5 6 7 8 10 11 12 13 14", "0 1 3 4 5 6 9 10 11 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> favorites = {"7 8 11", "0 13", "1 5 9 14", "1 10", "0 9 11", "7 12 13 14", "1 5 8 10 11", "3 4 7 9 13", "0 2 8 10", "1 7 11 14", "3 8 10", "1 7 9 12 13", "2 7 8 9", "1 3 4 11 13 14", "5 6 8 11 12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> favorites = {"1 5 7 10 12", "1 3 5 6 8 9", "1 4 5 6 7 9 10 12 14", "0 2 5 6 13 14", "0 1 2 3 9 11 13", "1 2 5 10 13", "4 8 13", "0 2 4 5 8 10 12", "0 8 9 14", "0 1 3 7 8 11", "1 5 9 11", "2 3 7 12", "1 3 4 7 9 12 13 14", "0 1 3 4 5 7 11 14", "0 1 5 9 10 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> favorites = {"1 3 6 7 8 9 10 11 12 13 14", "0 1 2 3 4 6 7 8 11 12 13 14", "0 1 2 4 5 6 7 8 10 13", "0 2 8 10 11 12", "0 1 2 3 4 5 7 9 11 13", "0 1 2 3 4 5 7 8 9 10 12", "0 1 4 5 6 7 8 14", "0 1 3 5 6 7 8 9 12 13 14", "0 2 3 4 5 6 7 9 10 11", "0 4 6 7 8 9 11", "0 1 2 4 5 6 7 13", "0 1 2 3 5 6 7 8 9 10 11", "0 1 2 3 5 6 7 9 10 12 13 14", "0 2 5 7 8 9 12", "1 3 4 6 7 8 9 11 12 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> favorites = {"2 3 6 8 10 11 14", "0 1 2 3 4 6 7 11 13", "1 2 3 4 6 10 11 14", "0 1 2 4 5 8 9 10 14", "0 3 8 9 11 13", "0 1 2 6 13", "1 2 5 7 8 9 10 12", "0 2 6 12 14", "1 2 3 4 7 8 9 13 14", "0 1 2 4 6 7 9 12 14", "2 3 6 7 8 10 13 14", "0 2 5 8 9 10 12 14", "0 3 7 10 13 14", "0 3 4 5 8 9 11", "0 3 4 7 8 9 10 12 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> favorites = {"1 2 3 6 8 9 11 12 13", "0 2 4 8 9 10 11 13", "0 2 3 6 7 10 12 14", "2 3 4 6 7 8 11 12 13", "0 1 2 3 4 5 10 11 12 13 14", "2 4 5 9 10", "0 2 3 6 7 9 10 12 13", "0 1 2 5 7 11 12 13 14", "0 1 2 5 7 9 11 13 14", "0 1 3 4 8 9 10 11 13 14", "1 3 8 9 10 11 14", "0 1 2 3 5 6 10 11 12", "0 1 3 7 8 9 10 11 12 14", "0 1 2 6 7 9 11", "1 3 4 7 9"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> favorites = {"0 1 4 5 6 7 8 9 10 12 13", "0 1 2 3 4 7 8 13 14", "0 1 3 4 5 6 7 8 10 12 13", "1 2 3 5 6 7 8 9 11 12 13 14", "0 1 2 4 5 6 9 11 12 13", "3 5 6 8 9 10 12 13 14", "0 1 3 5 6 8 10 11 12 13 14", "1 2 3 4 5 6 9 10 11 12 13 14", "0 1 2 3 4 5 6 7 9 10 11 12 14", "1 2 3 4 5 6 7 8 9 10 11 13 14", "0 2 3 4 5 7 8 9 11 13", "2 3 4 5 6 7 8 9 11 12", "0 1 2 3 4 7 10 11 12 13", "0 1 3 4 5 6 8 9 10 12 13 14", "1 3 4 5 8 9 11"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> favorites = {"2 3 6 7 10 11 12", "0 1 2 3 4 5 6 8 9 10 11 13 14", "0 3 5 6 7 8 9 11 12", "1 2 3 4 6 7 9 10 11 12 13 14", "0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "0 1 2 3 4 6 7 8 9 10 14", "0 1 2 3 4 5 7 8 9 11 12 14", "0 1 2 3 4 5 6 8 9 11 12", "0 1 2 3 5 6 7 8 9 10 12 13 14", "0 1 2 3 6 9 10 11 12 14", "1 2 3 4 5 6 7 9 12 13 14", "1 3 4 5 6 7 8 9 10 11 12 13", "0 2 5 6 7 8 9 10 11 13 14", "2 3 7 8 9 10 11 12 13 14", "0 2 3 4 5 7 10 11 12 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> favorites = {"0 1 3 7 9 10", "0 1 2 5 7 8 9 10 13", "0 5 7 9 12", "0 4 11 13", "0 4 6 9 11", "0 1 2 3 4 5 6 8 11", "0 2 5 11 13", "0 1 2 3 4 5 7 13", "0 1 2 3 5 6 7 9 11 12 13", "1 2 6 7 10 11 12 14", "0 1 4 5 7 9 10 14", "0 2 5 6 7 10 13", "0 1 2 4 5 6 7 8 10 11 12", "1 2 4 6 9 10 11 12 13", "5 7 12 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> favorites = {"3 4 6 7 8 9 10 13 14", "0 2 3 7 10 11 12 13 14", "3 5 6 7 9 10 12 13 14", "0 1 2 3 5 6 7 8 9 10 11 12 13 14", "0 2 7 8 12 13 14", "0 1 2 3 4 6 7 9 11 12 13 14", "1 5 6 7 8 9 10 11 14", "1 2 3 4 5 8 10 11 13 14", "0 1 2 3 4 5 6 9 10 11 12 14", "1 2 3 6 7 9 10 11 12 14", "0 1 3 5 6 7 8 9 10 11 12 13 14", "0 2 3 4 5 7 8 9 11 13 14", "2 3 5 6 7 8 10 12 13 14", "1 2 5 6 7 8 9 10 12 13", "0 2 3 6 8 10 11 12 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> favorites = {"1 5 6 7 10 11 13 14", "0 1 2 3 4 5 6 7 8 10 11 12 14", "0 1 2 3 5 8 9 11 12", "0 5 6 7 8 10 11 12 14", "0 1 2 3 4 5 6 7 8 9 11 14", "0 3 4 5 6 8 13 14", "1 2 5 6 7 9 10 11 13 14", "0 1 2 4 5 9 11 12 13 14", "0 1 2 3 5 6 8 9 11 12 14", "0 3 4 6 7 8 9 10 11 12 13 14", "1 3 4 6 8 9 10 11 12 13 14", "0 2 3 4 5 6 8 9 11 13 14", "0 3 5 8 9 12", "0 1 4 5 8 9 10 11 13 14", "0 1 2 4 5 6 7 8 9 10 11 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> favorites = {"2 10", "2 3 10 14", "2 8 10 11", "3 6", "4 5 11 12 14", "11", "0 3 4", "7 11", "1 5 6 7 11", "10", "2 5 8 11 12", "0 12", "7 11 14", "8 12", "1 4 8 9 11 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> favorites = {"0 1 2 3 4 5 6 10 12 13 14", "0 3 4 6 7 8 9 10 12 14", "1 3 4 7 8 9 11 12 13 14", "2 3 5 6 8 10 11 13 14", "0 2 4 5 6 7 8 9 10 13", "1 2 3 4 6 9 10 11 14", "1 2 3 4 6 7 8 9 11 12 13 14", "1 3 6 9 10 11 12 14", "0 1 2 3 4 5 7 8 9 11 12 13 14", "1 3 4 6 7 8 9 11 12 13 14", "0 1 2 4 6 7 8 9 10 12 13 14", "0 3 5 6 8 9 12 13 14", "1 4 5 6 7 8 9 10 12 13", "0 1 2 4 6 7 8 9 12 13 14", "3 8 9 10"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> favorites = {"0 1 4 5 6 7 8 9 10 11 13 14", "0 2 4 6 7 8 9 10 12 13", "0 2 4 5 6 7 9 10 11 13", "0 1 4 5 6 8 11 12 13 14", "0 1 2 4 6 7 11 12 13 14", "0 1 2 3 4 6 7 8 10 11 12 13 14", "1 3 4 5 6 7 8 9 10 11 12", "2 3 4 6 7 8 10 11 13 14", "1 2 3 5 6 8 9 10 11 13 14", "0 1 3 4 5 10 11 12 13", "0 1 3 5 6 7 9 10 11 12 13 14", "0 2 3 4 7 8 9 13", "0 1 2 3 4 5 7 8 10 12 13 14", "0 2 3 4 5 6 9 10 11 13", "0 1 2 3 4 6 8 10 11 12 13"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> favorites = {"0 2 3 4 6 7 11 14", "1 3 4 6 7 8 9 10 12 13 14", "0 1 3 5 6 7 8 9 10 12 14", "0 2 3 4 6 7 8 9 10 11 12 13 14", "0 1 2 3 4 5 6 9 10 13 14", "0 1 2 3 4 5 6 8 9 10 12 13 14", "1 2 4 7 8 9 11 12", "1 2 3 4 6 7 9 10 13 14", "1 2 3 4 5 7 9 12 13 14", "0 1 2 4 5 6 7 9 11 12 14", "0 4 5 7 8 9 10 13 14", "1 2 3 4 5 7 8 9 10 11 13 14", "0 1 3 6 7 8 9 10 11 13", "0 1 2 3 4 5 6 7 8 11", "0 1 2 3 4 6 8 9 10 11 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> favorites = {"1 4 6 9 10 11", "1 5 7 8 12 13 14", "2 4 5 7 10 11", "6 8 9", "0 1 4 5 7 8 9 12 13", "2 4 5 8 9 10 13", "0 2 3 7 8 11 13", "2 5 6 10 11 12", "0 1 4 7 10 11 13 14", "2 3 7 10 11", "1 10", "2 4 5 9 13", "2 4 8 10", "0 7 9", "0 2 4 6 10 13 14"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> favorites = {"5", "6", "1 2 6", "1 6", "1 3 4", "0 1 4", "1 3"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> favorites = {"0 1", "3", "0 3", "0 1 6", "0 3 6", "0", "0 6"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> favorites = {"14", "13", "12", "11", "10", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> favorites = {"7", "6", "5", "4", "3", "2", "1", "0", "14", "13", "12", "11", "10", "9", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> favorites = {"2", "0", "7", "1", "4", "2", "9", "3", "12", "4", "1", "3", "6", "14", "7"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> favorites = {"2", "4", "7", "3", "8", "6", "1", "6", "0", "7", "4", "7", "3", "6", "11"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> favorites = {"2", "9", "1", "13", "1", "8", "0", "7", "0", "10", "14", "1", "3", "9", "12"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> favorites = {"2", "9", "9", "4", "10", "14", "9", "2", "4", "7", "10", "10", "1", "10", "4"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> favorites = {"2", "10", "14", "11", "0", "8", "12", "5", "13", "13", "5", "12", "12", "12", "6"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> favorites = {"2", "13", "7", "2", "4", "6", "1", "3", "11", "7", "2", "2", "6", "2", "7"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> favorites = {"2", "13", "7", "7", "3", "13", "9", "1", "4", "4", "11", "9", "4", "13", "5"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> favorites = {"2", "13", "7", "7", "11", "1", "14", "6", "14", "3", "8", "12", "7", "13", "2"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> favorites = {"4", "1", "3", "6", "3", "7", "2", "4", "2", "7", "3", "3", "3", "8", "4"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> favorites = {"4", "1", "3", "10", "14", "11", "9", "4", "4", "14", "4", "13", "10", "12", "7"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> favorites = {"4", "9", "13", "10", "3", "11", "8", "10", "3", "3", "10", "12", "9", "11", "4"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> favorites = {"4", "13", "10", "6", "9", "1", "4", "13", "8", "8", "5", "12", "14", "5", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> favorites = {"6", "1", "6", "2", "11", "2", "8", "3", "3", "10", "3", "1", "6", "11", "2"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> favorites = {"6", "3", "3", "12", "9", "13", "4", "4", "8", "8", "14", "3", "0", "9", "9"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> favorites = {"6", "3", "7", "7", "3", "3", "6", "10", "3", "6", "3", "5", "8", "5", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> favorites = {"6", "4", "6", "13", "5", "5", "13", "4", "6", "8", "3", "1", "6", "9", "1"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> favorites = {"6", "14", "12", "0", "9", "7", "13", "10", "12", "2", "6", "12", "12", "12", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> favorites = {"8", "0", "8", "6", "0", "7", "11", "7", "3", "6", "11", "9", "1", "5", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> favorites = {"8", "5", "11", "13", "7", "12", "3", "8", "10", "5", "10", "1", "10", "12", "5"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> favorites = {"8", "12", "9", "2", "5", "9", "6", "10", "10", "7", "0", "8", "3", "8", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> favorites = {"12", "0", "6", "11", "0", "12", "7", "2", "10", "12", "0", "9", "3", "13", "8"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> favorites = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> favorites = {"7", "9", "5", "0", "1", "2", "000000000014", "8", "4", "3", "6", "2", "00000000013", "00000000011", "000000012"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
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
    vector<string> favorites = {"5", "8", "14", "12", "10", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> favorites = {"0 1", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> favorites = {"0 1 2 5 6 8", "2 3 4 7 9 11", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7", "9 7"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> favorites = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> favorites = {"01", "1"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> favorites = {"0", "2", "2", "4", "0"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> favorites = {"0 004", "2 3", "0 01", "1 2 3 4", "1 1", "6 3 6", "6 8 9", "11", "13 14", "10 11 12 14", "1 14 13", "2 14", "13 3", "5 7 8", "6"};
    TurntableService* pObj = new TurntableService();
    clock_t start = clock();
    int result = pObj->calculateTime(favorites);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=5865&pm=3117
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
int memo[32768][16]; 
   
class TurntableService { 
  public: 
   
  int entree[15],n; 
   
  int go(int done, int pos) 
  { 
    if (done==(1<<n)-1) return 0; 
     
    int &best=memo[done][pos]; 
    if (best>=0) return best; 
    best=999999999; 
     
    for(int rot=0;rot<n;rot++) { 
      int rtime=0; 
      if (rot>0) rtime=1+(rot<?(n-rot)); 
      int npos=(pos+rot)%n; 
       
      int d=done; 
      for(int i=0;i<n;i++) { 
        int dish=(npos+i)%n; 
        if ((1<<dish)&entree[i]) 
          d|=(1<<i); 
      } 
      if (d!=done) { 
        int t=go(d,(pos+rot)%n)+rtime+15; 
        if (t<best) best=t; 
      }         
    } 
     
    return best; 
  } 
   
  int calculateTime(vector <string> favorites) { 
    n=favorites.size(); 
    for(int i=0;i<n;i++) { 
      int m=0,j; 
      istringstream ss(favorites[i]);       
      while (ss >> j) m |= (1<<j); 
      entree[i]=m; 
    } 
    memset(memo,-1,sizeof(memo)); 
    return go(0,0); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/