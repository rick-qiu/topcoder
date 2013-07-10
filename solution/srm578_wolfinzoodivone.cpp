/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12534
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

class WolfInZooDivOne {
public:
    int count(int N, vector<string> L, vector<string> R);
};

int WolfInZooDivOne::count(int N, vector<string> L, vector<string> R) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<string> L = {"0"};
    vector<string> R = {"4"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 5;
    vector<string> L = {"0 1"};
    vector<string> R = {"2 4"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 10;
    vector<string> L = {"0 4 2 7"};
    vector<string> R = {"3 9 5 9"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 100;
    vector<string> L = {"0 2 2 7 10 1", "3 16 22 30 33 38", " 42 44 49 51 57 60 62", " 65 69 72 74 77 7", "8 81 84 88 91 93 96"};
    vector<string> R = {"41 5 13 22 12 13 ", "33 41 80 47 40 ", "4", "8 96 57 66 ", "80 60 71 79", " 70 77 ", "99", " 83 85 93 88 89 97 97 98"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6419882;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1;
    vector<string> L = {"0"};
    vector<string> R = {"0"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 3;
    vector<string> L = {"1 0 1"};
    vector<string> R = {"2 2 1"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 6;
    vector<string> L = {"0 2 2 2 2 2"};
    vector<string> R = {"4 3 3 5 5 4"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 9;
    vector<string> L = {"3 0 2 4 2 0 3 5 7"};
    vector<string> R = {"4 5 3 6 5 0 8 7 7"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 12;
    vector<string> L = {"6 6 10 6 10 9 5 10 5 4 0 3"};
    vector<string> R = {"10 10 10 6 10 10 5 10 9 11 10 10"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 113;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 15;
    vector<string> L = {"14 6 7 3 3 11 7 14 5 10 0 11 2 9 12"};
    vector<string> R = {"14 14 14 8 14 13 10 14 6 13 2 12 2 9 14"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 553;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 18;
    vector<string> L = {"6 9 4 12 8 9 14 10 1 4 7 7 8 9 16 15 2 4"};
    vector<string> R = {"16 17 7 15 8 16 16 16 13 15 14 13 9 13 16 16 11 5"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 914;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 21;
    vector<string> L = {"5 7 12 11 7 8 2 17 14 0 7 11 8 19 20 11 14 4 20 1", "6 0"};
    vector<string> R = {"14 19 18 15 15 14 15 20 16 1 15 18 19 20 20 18 17", " 16 20 17 12"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1649;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 24;
    vector<string> L = {"23 17 21 14 12 0 20 6 23 3 18 7 12 3 12 19 18 7 1", " 12 6 8 11 0"};
    vector<string> R = {"23 23 21 15 22 5 21 20 23 20 18 21 22 5 19 21 19 ", "10 9 16 19 22 12 18"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1281;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 27;
    vector<string> L = {"3 2 3 10 18 6 12 21 11 13 13 10 12 9 13 11 14 0 2", " 7 14 16 15 23 5 21 21"};
    vector<string> R = {"15 24 17 26 20 15 20 22 14 13 13 22 17 23 13 20 1", "4 22 15 20 23 18 19 25 17 22 23"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 30;
    vector<string> L = {"2 3 10 4 9 22 19 27 27 13 26 9 29 4 12 12 6 29 20", " 26 4 9 11 14 16 11 18 27 18 27"};
    vector<string> R = {"4 28 11 21 11 26 24 29 29 22 26 17 29 7 15 20 26 ", "29 29 26 6 24 26 21 29 27 27 29 28 28"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 33;
    vector<string> L = {"23 24 1 25 7 3 10 15 18 16 1 3 10 2 12 22 11 7 25", " 19 19 29 4 9 30 20 0 1 15 30 29 7 7"};
    vector<string> R = {"32 30 30 31 17 25 23 31 19 16 12 28 32 8 19 31 31", " 26 28 20 21 29 28 10 30 21 31 7 29 30 31 10 21"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 827;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 36;
    vector<string> L = {"34 33 27 6 31 21 34 22 6 23 35 32 0 35 15 9 8 6 3", "0 33 23 33 8 5 35 10 6 15 30 4 0 19 21 7 24 30"};
    vector<string> R = {"35 34 30 8 34 34 34 23 16 25 35 35 9 35 21 20 11 ", "25 34 33 31 35 17 13 35 19 25 17 33 34 15 27 24 18", " 31 31"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6701;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 39;
    vector<string> L = {"11 38 16 26 14 29 30 31 18 38 10 38 38 0 3 2 1 2 ", "7 26 19 22 16 26 12 18 15 31 11 11 18 6 12 33 2 24", " 3 22 2"};
    vector<string> R = {"11 38 35 38 32 36 31 33 23 38 33 38 38 21 33 34 3", "3 32 8 26 25 34 17 33 13 36 31 36 29 29 35 11 38 3", "8 29 30 19 27 25"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3624;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 42;
    vector<string> L = {"4 18 30 36 22 38 10 36 26 3 38 38 7 0 34 3 9 34 3", "0 4 10 33 22 7 24 12 41 30 17 25 24 30 37 0 32 17 ", "38 28 16 23 34 27"};
    vector<string> R = {"8 20 36 36 40 41 15 37 27 39 39 40 29 41 39 37 15", " 37 32 38 39 34 36 12 24 24 41 38 39 25 31 34 40 2", "9 40 33 41 39 37 40 35 33"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 904;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 45;
    vector<string> L = {"42 28 17 37 34 27 4 7 21 7 8 19 11 13 0 29 31 12 ", "1 42 21 29 7 43 42 5 11 38 17 33 12 39 25 15 5 11 ", "38 6 16 9 4 11 2 28 39"};
    vector<string> R = {"42 34 42 44 37 30 30 29 33 31 10 34 27 24 32 36 4", "2 33 33 44 24 33 28 44 42 11 33 40 30 34 24 39 33 ", "42 7 38 39 9 26 15 19 30 15 43 41"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 18677;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 48;
    vector<string> L = {"23 39 20 37 13 32 15 10 6 44 13 19 29 37 20 38 44", " 5 36 12 22 19 6 16 0 0 9 34 21 21 23 38 44 46 33 ", "31 20 30 37 5 21 11 31 26 31 45 11 33"};
    vector<string> R = {"39 41 34 44 23 39 16 24 30 47 44 47 41 47 28 46 4", "7 21 45 31 27 24 36 18 43 46 16 44 31 35 35 41 45 ", "46 45 44 23 30 41 7 25 36 39 43 42 45 16 34"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1880;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 51;
    vector<string> L = {"46 4 33 31 19 18 16 16 17 8 22 17 26 7 16 28 48 4", "5 10 15 4 23 36 40 19 12 3 10 28 19 34 41 21 22 40", " 13 45 18 15 38 25 49 35 41 35 6 6 41 28 34 42"};
    vector<string> R = {"48 13 35 41 32 33 28 41 38 25 50 23 41 32 18 50 4", "8 49 24 25 50 28 47 45 50 39 29 18 47 48 40 44 30 ", "26 44 45 47 36 32 45 49 49 48 43 38 26 29 49 30 36", " 46"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15464;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 54;
    vector<string> L = {"17 50 45 16 17 42 9 15 29 39 49 1 26 33 2 46 1 43", " 0 36 26 35 38 47 48 53 32 10 19 51 2 9 53 16 41 9", " 6 4 19 21 8 12 36 8 39 32 23 26 47 25 10 37 17 18"};
    vector<string> R = {"53 50 51 29 43 42 18 46 48 50 49 38 53 38 11 46 3", "7 53 39 52 45 49 45 47 51 53 46 38 25 53 43 13 53 ", "43 51 10 32 52 20 47 28 44 51 31 52 42 27 29 47 49", " 17 39 30 28"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5240;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 57;
    vector<string> L = {"48 23 16 48 4 33 10 1 18 2 14 50 28 48 3 44 19 20", " 4 17 2 55 14 56 44 46 0 15 2 44 55 54 55 50 33 40", " 20 36 26 53 31 1 45 10 35 15 27 1 46 29 45 50 43 ", "52 27 21 0"};
    vector<string> R = {"52 30 36 51 32 56 37 46 51 45 27 55 28 51 11 45 5", "4 38 41 47 4 56 40 56 45 47 12 32 24 47 55 55 55 5", "4 52 52 35 45 52 56 36 12 50 56 56 32 30 1 54 33 5", "6 55 56 56 28 38 42"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 8813;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 60;
    vector<string> L = {"57 50 10 3 4 8 18 55 32 28 24 36 35 38 39 28 57 0", " 2 2 24 14 9 43 8 22 7 53 35 38 56 42 38 2 18 6 56", " 36 6 43 48 35 48 19 0 27 26 36 30 7 9 4 43 44 11 ", "16 56 19 59 53"};
    vector<string> R = {"58 58 53 24 42 19 35 55 46 45 55 59 43 52 49 56 5", "8 23 17 25 37 50 27 57 15 57 16 59 50 59 57 46 41 ", "22 26 55 59 52 8 43 50 35 52 42 56 42 36 43 43 38 ", "50 31 50 53 44 26 58 42 59 57"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7420;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 63;
    vector<string> L = {"15 44 58 16 40 38 24 28 36 8 35 46 50 41 18 26 27", " 58 26 13 46 8 44 25 43 57 23 57 38 50 45 39 15 31", " 13 55 23 52 21 46 27 38 55 36 58 29 22 15 48 26 5", " 24 33 56 48 12 25 19 47 28 22 33 21"};
    vector<string> R = {"24 50 62 17 48 44 59 59 42 56 36 53 59 43 58 41 4", "0 58 49 44 57 44 57 29 55 58 33 62 43 59 58 41 57 ", "44 51 61 38 56 56 55 53 51 62 55 60 50 36 57 53 32", " 6 61 58 60 59 22 39 32 58 45 33 42 51"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2388992;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 66;
    vector<string> L = {"29 48 45 52 35 24 24 53 5 54 0 50 14 23 61 1 39 6", "3 44 54 3 14 10 59 3 2 8 40 1 29 56 20 8 3 55 24 6", " 57 19 43 8 27 30 0 65 36 8 31 51 25 53 33 1 3 35 ", "45 6 25 12 6 11 46 54 62 65 20"};
    vector<string> R = {"45 55 50 55 62 38 26 53 48 64 17 54 14 35 63 24 6", "2 65 58 55 40 41 30 61 62 43 56 64 42 33 60 32 47 ", "47 63 64 32 65 47 49 23 43 49 4 65 38 26 34 51 47 ", "64 40 29 44 53 65 9 39 30 56 21 46 63 64 65 58"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 23645;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 69;
    vector<string> L = {"30 56 22 20 5 39 68 54 19 68 43 58 19 38 43 36 29", " 65 67 54 42 16 67 30 2 47 57 5 10 66 61 63 62 53 ", "60 57 44 32 23 65 66 13 18 65 59 19 35 26 37 33 41", " 12 64 50 61 59 61 54 25 10 18 4 15 8 44 10 26 63 ", "27"};
    vector<string> R = {"42 65 63 37 33 44 68 68 35 68 67 63 68 43 66 46 5", "4 66 67 61 55 36 67 45 51 49 57 10 68 68 64 66 65 ", "57 60 68 54 57 23 65 66 59 27 68 66 35 53 34 44 64", " 58 36 67 52 68 62 66 54 52 61 60 39 20 49 68 29 4", "4 68 33"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 53452;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 72;
    vector<string> L = {"12 32 64 20 54 38 31 39 29 29 4 49 33 33 34 3 69 ", "48 41 57 12 45 48 27 30 3 39 4 47 32 59 21 59 12 4", " 16 2 38 24 23 65 64 21 67 58 12 4 36 61 53 16 37 ", "43 0 7 35 17 71 48 44 22 48 9 56 36 1 69 10 4 63 4", "9 33"};
    vector<string> R = {"16 70 69 30 55 48 39 40 37 48 50 71 44 68 58 60 6", "9 63 44 68 23 66 55 49 57 52 65 28 70 58 65 31 66 ", "37 29 26 51 51 32 65 66 64 48 69 58 62 70 55 65 53", " 19 40 51 46 27 67 27 71 50 62 50 62 17 63 44 1 70", " 10 45 64 67 36"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 14408;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 75;
    vector<string> L = {"42 17 0 67 42 28 66 72 73 14 59 50 23 27 8 30 18 ", "29 31 64 2 54 21 69 51 12 49 49 9 56 73 41 35 23 5", "6 59 29 58 1 10 9 60 2 52 38 14 12 59 19 21 52 31 ", "7 25 11 29 63 39 19 59 23 68 54 44 42 58 25 31 6 1", "0 16 65 60 7 6"};
    vector<string> R = {"45 66 47 73 51 36 72 74 73 66 65 52 25 45 60 70 2", "2 64 58 70 60 69 63 71 67 74 67 59 70 58 74 65 43 ", "70 68 71 61 73 28 69 50 63 15 58 66 63 24 69 70 50", " 56 63 12 40 40 38 74 58 73 59 69 69 64 49 63 74 7", "1 46 20 39 37 67 73 61 12"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20291;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 78;
    vector<string> L = {"73 1 41 0 14 56 30 65 6 57 28 37 36 70 55 42 75 7", "6 56 2 72 10 0 27 22 12 29 33 15 60 23 76 49 53 6 ", "15 3 14 19 20 59 49 60 41 10 65 7 32 0 29 17 7 30 ", "31 11 48 41 28 43 23 23 45 35 10 75 74 15 53 60 70", " 10 68 49 35 55 41 4 13"};
    vector<string> R = {"73 22 61 37 76 71 50 66 75 68 68 38 52 71 55 75 7", "7 77 69 28 75 41 49 38 67 67 35 75 76 61 71 76 68 ", "69 26 64 30 60 25 77 69 70 61 41 59 69 22 54 53 71", " 34 8 73 47 77 62 46 49 50 72 65 62 36 41 76 74 22", " 58 69 71 22 73 69 58 73 56 57 33"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 17571;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 81;
    vector<string> L = {"72 39 15 5 7 56 18 2 13 64 4 13 74 63 47 10 34 77", " 7 36 75 22 61 26 14 57 3 31 44 17 54 41 8 43 24 4", "6 61 66 15 51 67 72 37 29 75 45 58 10 72 22 12 35 ", "4 17 30 50 29 30 50 54 69 32 10 8 50 9 51 64 28 9 ", "45 27 66 64 13 41 24 55 53 56 34"};
    vector<string> R = {"77 61 57 64 29 58 59 31 49 75 15 43 76 69 50 56 3", "9 77 58 53 79 65 71 42 45 69 43 66 58 41 77 54 72 ", "72 45 73 79 77 58 74 76 76 76 69 80 61 69 62 78 25", " 67 43 10 65 36 67 42 79 65 78 78 38 74 73 74 47 7", "5 68 34 60 67 68 79 66 77 59 80 65 80 74 46"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 145100;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 84;
    vector<string> L = {"82 30 33 7 58 5 20 44 55 26 10 39 39 33 26 18 6 3", " 54 66 37 14 24 59 66 30 48 2 1 54 71 44 41 81 42 ", "30 32 26 36 38 0 29 58 46 78 24 17 48 2 79 44 66 3", "5 36 18 81 9 8 30 33 69 24 6 50 24 27 21 83 83 60 ", "64 74 4 29 80 47 78 39 3 30 80 33 70 77"};
    vector<string> R = {"82 56 51 71 60 12 22 67 75 74 33 52 67 37 61 69 4", "6 56 63 77 75 41 44 62 70 62 68 2 77 57 71 63 73 8", "1 43 58 66 48 74 63 48 58 71 51 80 53 74 54 49 81 ", "72 72 81 43 80 83 42 22 76 73 73 57 29 71 69 31 33", " 83 83 72 82 79 43 74 80 70 80 52 58 52 82 43 76 8", "2"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 50309;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 87;
    vector<string> L = {"82 34 80 5 39 26 8 4 24 48 71 2 40 80 76 83 64 0 ", "59 42 17 25 57 27 70 41 72 17 61 5 48 50 63 62 73 ", "39 45 68 83 1 0 72 2 18 20 34 84 12 80 6 86 85 8 5", "0 24 2 51 66 75 64 44 27 66 8 70 68 50 51 49 26 50", " 61 51 81 61 50 43 51 84 26 43 0 39 11 17 7 44"};
    vector<string> R = {"86 74 82 84 55 49 57 82 83 52 72 59 78 82 82 85 7", "4 65 64 70 26 50 84 57 79 43 79 43 83 21 77 76 78 ", "63 81 83 51 77 85 10 35 73 74 65 85 53 85 17 81 49", " 86 86 66 76 30 9 81 86 85 78 71 71 79 40 71 69 59", " 56 69 66 59 66 84 85 74 52 75 75 85 77 67 52 44 7", "3 79 26 65"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 20110;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 90;
    vector<string> L = {"30 50 70 22 63 48 20 13 63 10 58 37 2 79 51 55 87", " 12 12 38 54 32 50 63 14 44 9 23 66 26 11 75 29 69", " 83 35 76 40 53 49 53 88 11 76 34 34 27 22 11 69 2", "1 76 79 55 54 82 35 58 87 53 65 2 51 2 49 51 54 53", " 7 77 89 44 88 58 73 11 34 6 22 65 89 19 49 26 9 3", "3 30 70 64 80"};
    vector<string> R = {"73 82 74 45 83 55 29 74 67 81 69 80 74 84 60 69 8", "9 45 25 61 85 71 51 68 30 84 38 78 78 43 69 77 89 ", "80 83 48 84 81 57 68 82 89 31 77 42 80 28 37 30 71", " 23 76 79 69 79 82 64 64 87 60 66 46 73 24 87 67 7", "5 64 50 88 89 49 88 84 76 26 75 35 57 74 89 40 71 ", "71 70 46 72 72 82 81"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 173716;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 93;
    vector<string> L = {"40 15 15 40 73 65 7 14 28 51 40 86 73 67 4 81 9 7", "2 84 60 17 83 84 24 87 19 15 43 61 47 79 82 64 67 ", "26 45 69 75 51 7 52 82 10 82 19 68 7 34 18 15 4 91", " 2 69 74 33 83 72 8 11 76 70 56 52 25 54 45 56 2 2", "2 15 74 3 64 48 48 28 26 38 37 19 90 6 64 70 83 13", " 8 46 34 17 34 44"};
    vector<string> R = {"72 32 67 86 73 84 45 74 46 80 80 86 78 71 82 82 8", "7 74 91 71 39 91 88 48 92 50 61 44 67 90 83 88 84 ", "72 90 50 80 75 71 69 89 88 62 91 39 89 38 77 85 66", " 62 91 16 77 75 47 86 87 87 87 88 75 60 86 45 80 4", "7 65 72 35 43 75 51 92 88 76 40 31 63 78 47 90 55 ", "77 82 90 55 46 82 60 31 43 65"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 160900;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 96;
    vector<string> L = {"25 84 62 8 19 40 18 79 26 68 17 49 3 31 73 3 92 4", "8 28 12 73 48 57 52 18 6 74 49 15 91 62 63 32 67 1", "8 43 61 1 16 2 16 61 8 93 51 41 18 29 64 92 92 84 ", "49 13 34 70 18 33 86 36 55 21 30 82 38 24 9 14 15 ", "43 50 17 63 6 79 54 81 4 54 91 20 55 40 31 13 9 86", " 84 65 41 73 22 84 10 16 4"};
    vector<string> R = {"75 95 91 31 25 92 42 86 47 68 18 89 57 91 91 77 9", "2 51 34 90 87 71 61 82 34 85 90 88 39 91 89 76 81 ", "83 53 86 81 69 25 9 52 73 76 94 74 47 60 31 66 93 ", "93 90 76 19 82 70 42 77 94 48 93 90 71 95 61 45 87", " 82 89 94 55 53 76 42 89 62 82 6 80 91 58 87 67 92", " 86 16 89 88 89 63 84 82 91 89 79 80"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 136246;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 99;
    vector<string> L = {"47 91 66 42 70 25 79 59 50 79 75 70 20 71 35 79 7", "6 34 38 35 1 80 3 79 27 50 92 0 66 8 95 66 79 33 1", "1 4 47 29 66 35 2 38 78 6 96 36 26 71 47 48 72 84 ", "51 9 92 54 87 48 76 36 45 0 1 73 28 34 10 27 42 83", " 44 28 59 13 91 60 17 26 79 59 90 51 3 77 56 16 66", " 53 24 8 1 81 15 10 63 80 7 9 30"};
    vector<string> R = {"93 97 90 43 71 93 80 59 73 94 87 77 71 93 41 79 8", "3 34 72 96 94 91 11 83 41 75 97 31 93 47 97 86 92 ", "51 61 35 48 85 66 97 29 83 97 68 96 58 34 84 47 70", " 89 94 83 32 92 58 97 98 88 47 68 26 59 96 97 59 8", "6 36 86 84 87 75 79 77 95 79 52 76 92 77 92 51 53 ", "96 64 76 77 90 71 47 39 82 21 93 89 93 79 10 74"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 32403;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 102;
    vector<string> L = {"0 82 57 61 9 24 14 76 62 101 15 77 43 68 24 15 16", " 15 66 78 49 53 82 29 72 62 9 74 5 9 7 89 70 71 58", " 35 29 10 35 3 75 34 19 78 29 88 80 72 15 83 69 73", " 50 77 0 62 26 16 13 31 25 53 7 2 43 55 48 9 30 1 ", "54 19 3 34 4 86 44 69 69 65 6 27 84 52 5 44 92 97 ", "59 14 89 0 86 41 32 55 99 69 38 4 47 2"};
    vector<string> R = {"57 98 94 101 91 78 53 82 66 101 30 89 71 71 44 55", " 30 73 92 91 84 72 91 39 75 68 99 96 52 53 29 94 9", "5 77 96 83 33 13 46 68 87 86 87 94 84 88 95 73 38 ", "84 88 95 91 84 95 74 41 71 29 84 83 85 76 76 58 55", " 57 44 73 13 59 21 38 97 58 95 75 78 100 100 48 97", " 87 57 48 50 94 101 66 74 101 77 88 99 33 69 99 82", " 42 43 56 79"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 23141;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 105;
    vector<string> L = {"38 92 100 98 93 93 30 91 84 74 36 91 24 20 10 2 6", "6 79 78 46 56 66 104 13 42 34 83 89 97 72 8 92 46 ", "49 43 35 48 25 48 33 51 8 75 16 60 36 4 51 27 50 8", "2 1 90 72 58 100 40 95 6 81 36 37 42 68 32 65 86 6", "5 5 23 86 60 55 84 10 39 13 69 80 88 85 11 74 42 2", "3 97 14 61 83 1 75 68 48 76 74 18 51 83 8 22 60 63", " 51 37 20"};
    vector<string> R = {"81 92 104 100 99 100 60 99 89 93 78 94 78 83 35 3", "8 85 82 84 79 81 99 104 83 91 62 83 94 101 74 101 ", "101 82 83 60 45 69 94 78 90 81 32 98 104 72 72 60 ", "95 31 78 85 43 93 95 76 100 44 104 39 85 82 57 103", " 92 73 86 102 91 52 29 86 91 98 91 24 55 99 100 94", " 96 96 31 88 102 90 101 100 71 97 5 88 96 78 87 83", " 66 56 92 84 38 73 75 51 95 62"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 147720;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 108;
    vector<string> L = {"40 75 5 82 49 75 70 34 75 63 33 64 88 15 69 72 2 ", "52 73 78 42 35 68 57 83 70 46 66 24 97 11 30 26 2 ", "51 2 21 87 63 91 98 57 7 67 17 85 28 61 65 100 67 ", "27 37 70 7 0 23 62 4 40 50 88 55 15 40 98 26 14 7 ", "72 102 54 57 83 26 69 61 15 61 68 15 46 33 95 60 1", "9 98 62 20 55 82 87 86 39 3 77 80 62 88 1 48 50 20", " 53 2 69 11 74"};
    vector<string> R = {"86 94 81 94 73 103 81 58 80 64 58 98 102 66 95 81", " 3 83 106 104 96 66 103 60 93 86 104 92 83 99 42 6", "3 104 80 89 87 103 94 102 101 104 57 100 90 80 107", " 90 105 106 107 87 44 41 86 25 100 102 99 68 99 74", " 89 80 64 85 102 71 43 12 105 103 102 63 89 27 100", " 92 88 90 75 79 105 95 96 75 55 106 62 64 96 90 93", " 91 101 84 103 103 104 106 11 107 74 29 60 21 95 7", "7 99"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 40057;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 111;
    vector<string> L = {"110 16 28 66 39 30 22 17 52 60 59 1 73 81 89 64 3", "4 6 49 60 101 70 2 37 52 5 52 18 2 70 20 64 33 73 ", "5 92 84 73 96 41 61 60 84 24 9 23 46 15 26 93 39 9", "1 57 13 64 63 63 103 18 109 100 47 89 98 81 51 36 ", "41 27 80 65 71 90 21 44 30 98 66 41 79 56 13 83 47", " 90 59 73 105 108 39 44 71 33 102 68 2 57 35 64 10", "2 64 65 89 97 39 79 86 48 3 32 63"};
    vector<string> R = {"110 89 88 83 67 92 96 60 71 91 61 82 93 90 94 81 ", "68 51 82 103 109 73 22 53 76 11 91 28 6 87 67 85 4", "9 76 101 110 97 81 105 101 66 101 91 25 22 93 87 2", "0 71 108 93 107 58 98 80 66 72 108 48 110 105 57 9", "8 98 89 91 37 99 62 89 77 103 107 71 65 63 107 79 ", "61 110 60 50 105 47 107 80 105 108 108 56 46 103 9", "4 106 88 104 107 62 96 105 80 84 104 110 74 94 110", " 79 17 102 91"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 168578;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 114;
    vector<string> L = {"42 29 88 60 105 26 97 47 65 32 35 67 1 70 31 12 2", "6 39 1 110 108 110 41 83 97 100 70 32 26 58 52 55 ", "6 41 25 0 73 100 70 55 46 108 62 110 26 68 104 18 ", "70 104 38 97 73 64 25 94 26 27 75 100 48 106 5 89 ", "64 111 47 51 77 7 99 60 35 96 73 13 81 93 65 64 26", " 53 19 37 113 111 45 40 65 108 111 73 7 0 97 89 76", " 9 101 77 105 98 31 89 8 88 113 56 21 29 40 65 2 3", "8"};
    vector<string> R = {"101 67 91 76 113 42 104 63 87 33 80 73 55 72 105 ", "61 64 44 38 110 109 110 88 97 105 110 92 103 33 58", " 103 63 70 87 98 99 110 108 90 63 89 112 73 110 55", " 90 109 23 96 105 58 99 113 90 30 100 52 83 83 102", " 84 113 110 105 106 113 97 105 106 76 100 104 65 9", "6 89 78 89 111 68 71 93 110 89 69 113 111 107 59 8", "4 111 111 86 20 97 112 103 76 10 104 84 112 99 67 ", "91 80 96 113 102 72 76 52 113 89 47"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 44591;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 117;
    vector<string> L = {"54 88 94 101 24 105 48 89 3 34 66 9 59 1 5 112 93", " 56 11 73 11 69 53 4 105 113 83 91 82 45 109 49 39", " 33 86 49 16 108 28 15 76 87 77 80 65 89 45 92 110", " 27 92 61 31 104 23 105 61 42 85 83 57 87 107 92 2", " 45 37 105 93 30 65 92 16 69 57 9 53 67 47 17 93 4", "7 58 6 43 94 9 23 115 111 8 42 2 47 108 19 113 46 ", "0 21 3 79 108 31 21 80 71 86 71 96 97 63 61 7 74 6", "9 83"};
    vector<string> R = {"77 108 109 113 27 107 51 111 97 41 70 40 87 8 76 ", "112 114 67 79 88 19 77 82 15 115 114 95 116 106 10", "2 111 73 57 73 106 74 20 114 42 55 97 87 83 108 10", "3 106 100 108 115 40 104 88 90 107 107 111 64 85 1", "11 106 62 104 116 112 9 98 51 106 108 100 91 92 21", " 89 101 86 82 112 52 35 112 75 101 104 52 102 85 4", "3 116 113 44 116 66 107 115 34 115 99 28 75 109 11", "3 108 90 54 83 76 95 87 108 102 100 62 105 114 72 ", "108"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 165671;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 120;
    vector<string> L = {"15 111 96 44 2 3 62 8 84 1 55 102 3 21 34 104 47 ", "115 54 119 77 3 110 50 24 61 111 7 55 68 110 42 10", "5 80 23 89 49 40 4 108 9 36 39 71 110 25 107 75 72", " 45 5 34 45 26 21 33 31 45 33 9 60 80 91 13 100 39", " 118 25 1 28 38 38 72 6 82 48 19 56 106 108 4 5 22", " 35 78 24 109 77 117 62 10 8 40 37 36 74 4 11 53 1", "11 36 59 106 83 62 81 27 95 97 43 106 72 54 117 10", "9 103 68 61 106 6"};
    vector<string> R = {"55 114 119 118 26 116 108 50 105 66 62 112 101 99", " 46 113 72 116 85 119 77 104 110 76 30 79 112 101 ", "56 78 115 98 111 103 85 112 80 90 47 110 99 99 76 ", "102 112 118 109 91 86 52 51 93 67 33 118 116 48 99", " 90 43 88 101 99 42 117 58 119 101 43 62 47 65 93 ", "27 107 119 86 83 115 108 73 103 37 54 114 83 118 9", "0 117 110 70 58 112 39 42 74 22 119 106 116 62 102", " 110 119 71 84 98 118 107 83 116 74 80 119 119 104", " 81 87 111 89"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 46592;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 123;
    vector<string> L = {"28 22 109 43 102 115 89 40 43 41 3 18 112 54 106 ", "119 91 96 120 79 56 44 95 1 24 48 89 49 17 33 93 1", "8 46 103 101 11 20 9 91 70 121 77 110 29 15 1 70 9", "2 54 24 99 24 88 5 28 93 89 91 13 122 99 26 74 86 ", "95 23 18 47 35 43 16 71 4 99 62 88 50 89 0 30 66 1", "22 0 14 98 12 32 113 16 90 8 45 117 85 58 83 35 22", " 94 26 64 67 32 62 120 118 6 36 118 98 46 50 29 66", " 88 60 122 51 90 0 85 45 81"};
    vector<string> R = {"58 35 120 82 119 116 113 49 78 74 9 109 119 114 1", "07 121 92 108 120 89 56 96 120 63 31 71 91 89 53 1", "13 120 106 102 112 113 32 46 16 95 110 121 89 114 ", "30 79 11 117 92 87 57 119 42 113 74 75 111 119 119", " 22 122 104 111 79 119 100 55 116 51 94 116 21 84 ", "31 119 75 95 107 117 62 122 114 122 60 22 117 84 8", "5 121 116 111 28 59 122 96 109 86 119 47 115 93 10", "2 70 106 87 122 119 14 108 119 103 105 66 65 99 11", "7 85 122 55 113 64 111 49 89"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 307849;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 126;
    vector<string> L = {"120 58 96 114 28 105 12 97 68 6 78 79 59 31 62 8 ", "112 29 13 86 108 70 62 75 113 31 5 112 124 47 120 ", "66 116 31 19 58 92 118 64 120 39 55 93 46 73 94 19", " 116 83 58 31 23 0 112 112 30 51 84 32 115 46 49 2", "2 51 24 95 41 30 107 28 49 45 61 29 39 103 122 46 ", "5 48 7 25 72 122 1 61 14 97 80 9 76 53 21 89 11 88", " 60 66 65 56 68 122 9 103 10 49 1 3 103 68 85 13 1", "03 107 26 60 110 4 123 43 96 62 114 3 125 74"};
    vector<string> R = {"123 76 103 122 102 113 119 108 70 89 97 86 115 10", "8 92 88 120 61 27 99 121 119 109 87 114 119 29 122", " 125 48 121 88 123 76 47 88 116 125 104 123 98 57 ", "113 121 78 109 24 116 84 122 87 72 36 119 119 50 5", "3 92 117 120 63 112 37 53 50 99 99 115 117 97 82 5", "4 68 64 85 103 122 63 9 82 72 117 76 125 44 105 49", " 105 120 81 113 111 46 120 47 107 118 121 119 81 1", "19 123 57 119 10 102 33 122 115 97 101 84 122 115 ", "96 81 120 82 123 103 120 117 117 115 125 100"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 249856;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 129;
    vector<string> L = {"20 123 41 90 98 115 10 83 42 59 25 116 106 38 51 ", "99 0 23 6 25 11 3 53 20 92 89 71 94 40 109 5 19 39", " 59 15 74 116 68 11 52 49 32 3 36 8 91 14 17 54 89", " 25 118 126 44 42 123 5 83 52 115 39 7 19 109 120 ", "91 20 16 84 128 79 87 121 66 119 11 52 83 61 109 1", "06 27 15 21 70 13 31 68 22 88 49 115 98 51 104 2 1", "21 127 81 69 78 18 12 82 30 65 55 62 119 43 28 100", " 83 45 16 4 42 60 89 69 109 57 30 1 125 91 28 58 1", "01"};
    vector<string> R = {"84 127 115 103 116 117 86 96 48 104 78 116 120 11", "3 106 124 40 47 34 36 78 83 89 62 116 106 105 95 6", "9 121 19 84 102 87 20 104 117 102 49 74 94 107 73 ", "63 46 127 36 79 83 95 102 121 126 72 99 125 102 10", "7 118 122 71 104 43 111 124 96 54 28 111 128 96 11", "0 128 72 119 120 76 120 65 119 128 78 82 76 126 66", " 47 107 97 101 84 122 117 81 122 17 122 128 118 11", "7 104 82 45 119 76 103 83 118 119 100 37 102 107 7", "1 54 69 45 83 99 117 114 60 91 48 127 128 118 79 1", "19"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 857554;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 132;
    vector<string> L = {"113 90 94 37 73 58 103 4 117 36 98 16 51 34 130 1", "13 36 127 19 109 76 26 92 51 33 58 54 86 66 39 114", " 62 98 59 113 20 12 4 59 91 39 55 106 127 42 101 3", "4 4 34 118 17 65 17 35 44 92 90 30 88 1 56 94 62 8", "4 52 9 125 87 55 101 43 24 112 15 103 117 9 25 80 ", "45 27 92 29 102 119 60 117 40 8 80 43 99 111 123 6", "6 70 63 95 41 36 69 13 1 14 95 118 67 116 73 35 11", "3 84 22 94 95 21 32 47 66 52 131 54 52 15 47 32 95", " 10 11 87 16 66"};
    vector<string> R = {"116 91 109 96 123 65 109 122 118 64 101 99 85 37 ", "131 126 72 128 96 110 98 103 117 88 82 88 101 131 ", "115 46 131 117 115 100 121 79 68 71 76 124 41 99 1", "24 129 81 131 75 109 130 125 66 81 123 62 89 119 9", "1 119 102 52 66 98 113 112 92 115 131 122 97 110 7", "1 102 112 31 117 120 37 82 114 47 101 116 46 112 1", "29 113 119 40 36 98 108 108 125 127 87 113 69 126 ", "76 63 118 58 91 82 130 122 111 130 90 57 129 115 4", "6 110 131 34 74 77 99 91 131 114 123 67 119 114 10", "8 65 27 91 41 97"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 228140;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 135;
    vector<string> L = {"38 7 72 101 82 87 7 61 24 10 17 58 119 118 77 24 ", "88 92 63 116 125 41 121 125 44 105 0 120 33 34 132", " 124 127 34 118 12 42 79 38 97 54 9 51 128 44 98 1", "18 65 40 35 114 39 89 114 54 78 55 74 107 44 66 13", "3 51 30 94 133 71 116 34 49 49 54 28 12 129 23 30 ", "63 58 109 69 8 126 6 116 67 76 17 12 67 94 65 50 7", "3 39 32 27 26 133 72 1 2 40 117 95 56 16 112 77 13", "4 34 11 51 34 110 34 84 91 83 36 27 66 1 35 131 10", "3 89 131 10 70 41 56 111 9 61"};
    vector<string> R = {"48 55 82 131 113 99 122 111 126 93 122 92 119 130", " 105 86 102 95 97 124 131 128 129 126 103 130 11 1", "24 57 41 134 131 131 103 134 20 78 134 117 130 127", " 122 103 134 72 111 127 75 132 120 129 109 101 130", " 64 104 102 129 113 54 103 134 79 67 102 134 96 12", "9 62 126 132 72 66 93 133 70 94 95 72 112 117 121 ", "130 6 130 114 134 96 59 82 125 82 93 111 59 70 85 ", "114 134 128 60 124 94 121 116 110 111 130 119 134 ", "45 115 88 129 114 35 118 123 121 69 105 74 89 46 1", "33 114 99 132 86 84 125 86 113 116 78"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 233158;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 138;
    vector<string> L = {"21 83 107 75 69 26 124 16 53 32 32 125 119 0 102 ", "132 54 65 53 26 52 66 105 134 84 68 49 89 84 23 71", " 17 3 108 56 123 77 33 72 10 4 28 86 65 91 70 12 8", "9 87 9 6 65 57 93 121 102 82 92 115 105 13 34 121 ", "3 134 111 7 44 37 106 0 0 80 98 49 21 46 94 16 128", " 117 10 49 45 112 67 106 11 84 55 126 79 103 76 30", " 114 35 60 1 3 109 31 35 17 120 8 89 72 61 82 44 1", "10 99 12 41 5 131 72 56 28 90 81 50 91 48 52 26 98", " 131 30 25 103 30 1 7 75 7 127"};
    vector<string> R = {"74 112 136 98 91 70 127 109 131 60 95 131 136 49 ", "137 136 115 71 78 97 73 99 132 134 123 116 109 107", " 137 52 112 111 92 112 133 129 84 48 113 132 93 81", " 115 128 114 135 114 92 89 73 26 68 114 134 127 12", "2 109 93 116 134 118 95 130 8 135 126 13 135 85 10", "7 55 95 95 109 131 78 92 96 25 137 132 51 53 97 11", "9 107 108 87 134 113 134 91 124 81 101 128 96 83 9", "6 79 109 81 111 132 122 75 111 133 130 112 92 110 ", "127 18 98 6 136 79 119 109 103 96 129 133 125 132 ", "135 123 131 112 106 117 45 126 120 104 15 132"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 84022;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 141;
    vector<string> L = {"11 81 72 55 39 71 100 98 132 29 20 84 15 140 4 11", "4 114 119 93 51 9 124 134 133 9 47 85 136 5 109 86", " 122 83 43 4 116 96 12 22 8 66 44 98 35 83 67 59 1", "13 108 93 57 140 104 14 3 33 116 38 140 138 106 38", " 57 132 75 29 67 110 58 129 38 55 37 30 129 42 139", " 57 124 1 98 131 49 25 113 31 117 8 40 25 65 61 95", " 135 100 18 100 113 54 114 74 29 24 74 124 96 19 5", "1 122 109 124 16 137 41 38 107 77 101 135 33 139 5", "2 19 113 34 108 30 134 51 28 46 94 41 82 129 59 15", " 135 111 54 43"};
    vector<string> R = {"124 81 83 82 138 118 131 100 140 42 79 100 92 140", " 121 133 138 123 107 73 106 134 137 134 89 47 91 1", "39 51 123 124 135 90 92 76 120 127 29 98 65 135 75", " 101 94 92 129 88 115 121 128 60 140 131 31 56 87 ", "136 132 140 138 117 92 112 139 121 33 91 123 109 1", "30 90 113 106 90 131 42 140 109 126 54 130 133 133", " 42 130 107 127 111 41 94 97 89 134 136 136 25 135", " 134 74 138 114 92 40 111 133 138 114 51 135 132 1", "34 50 137 90 117 131 81 119 137 71 139 64 108 121 ", "54 119 134 137 140 49 96 118 116 116 132 132 88 13", "9 111 61 112"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 597700;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 144;
    vector<string> L = {"50 53 85 142 100 9 5 143 33 138 0 33 56 34 20 128", " 25 13 138 37 88 143 119 37 81 79 104 142 39 55 25", " 123 25 106 29 19 141 102 42 135 8 52 78 9 75 13 9", "2 11 103 1 37 98 125 27 5 33 18 17 40 122 49 85 13", "3 92 22 133 79 121 54 50 51 142 106 106 71 50 48 2", "8 20 47 74 21 9 69 140 126 117 50 35 100 94 50 139", " 32 111 49 77 57 84 93 5 40 13 81 77 98 71 114 30 ", "29 98 37 122 39 33 16 91 30 4 13 54 63 99 70 72 43", " 41 37 69 29 27 23 84 2 141 137 1 130 103 138 126 ", "0 3 85"};
    vector<string> R = {"67 74 138 142 141 99 42 143 43 142 67 132 63 81 1", "08 143 120 40 139 119 141 143 123 115 84 127 114 1", "43 39 138 103 143 28 111 104 140 142 113 78 141 69", " 102 79 90 86 127 96 87 116 38 129 124 136 65 78 1", "40 86 139 130 128 81 118 142 128 40 135 141 122 11", "7 53 65 142 123 116 102 135 59 35 88 91 125 36 105", " 120 141 127 136 50 142 102 106 126 142 56 116 58 ", "79 94 87 114 100 99 47 87 129 125 96 138 84 138 12", "4 72 141 92 125 89 139 71 35 106 103 79 104 129 11", "1 122 93 134 112 37 117 51 130 121 142 139 106 143", " 122 140 131 97 112 112"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 185425;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 150;
    vector<string> L = {"146 102 131 147 109 36 19 12 149 72 53 95 44 119 ", "45 94 96 129 15 112 38 63 0 133 9 143 120 39 87 14", " 131 108 148 61 82 59 62 131 23 118 125 52 25 149 ", "14 91 2 94 128 146 106 86 86 74 43 116 124 30 90 8", "4 77 145 25 44 117 137 142 45 110 68 42 55 37 52 7", "3 42 63 70 98 37 83 5 112 6 93 84 18 43 98 126 125", " 49 78 88 95 56 147 98 52 2 3 132 148 51 129 14 3 ", "21 14 105 62 138 139 136 72 121 61 90 99 83 15 53 ", "103 23 111 11 135 118 89 44 76 28 110 18 19 85 66 ", "48 145 110 50 14 57 4 10 71 101 26 90 65"};
    vector<string> R = {"147 136 145 147 122 84 37 117 149 109 147 134 48 ", "122 144 114 127 141 46 136 60 141 16 146 131 147 1", "30 42 98 133 146 135 149 67 125 98 80 138 29 131 1", "25 84 92 149 88 146 117 114 149 147 143 133 113 13", "4 106 130 128 58 117 149 115 147 100 52 130 149 14", "8 85 124 72 105 143 62 91 125 145 71 145 128 62 94", " 69 145 71 114 132 100 79 112 137 126 61 109 123 9", "6 146 147 129 104 55 60 140 149 92 135 61 63 122 1", "12 109 78 144 141 147 98 125 138 136 118 130 50 71", " 139 102 119 107 139 138 93 63 76 32 148 58 107 90", " 81 92 147 125 104 42 57 51 13 140 144 58 146 149"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1006521;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 153;
    vector<string> L = {"70 42 63 16 134 60 37 114 75 92 10 46 108 60 79 1", "10 144 110 145 61 7 36 123 58 79 65 2 22 94 95 86 ", "34 71 38 78 136 98 106 5 101 129 92 43 65 116 97 3", "1 53 18 133 82 141 83 64 94 126 114 149 116 64 25 ", "45 59 5 14 142 8 69 122 83 15 24 54 130 93 42 12 1", "33 135 51 121 149 94 27 47 18 59 110 143 11 47 57 ", "120 93 138 51 32 141 69 2 118 122 67 54 60 34 143 ", "124 103 87 140 29 88 67 132 109 129 125 40 139 149", " 29 106 36 84 108 114 84 30 86 138 126 94 28 15 11", "1 52 139 107 136 31 31 144 20 94 96 39 131 42 23 1", "44 55 117"};
    vector<string> R = {"143 119 137 53 148 130 79 137 139 144 50 103 135 ", "68 152 141 144 110 148 86 99 115 125 122 93 65 152", " 37 95 103 90 60 95 66 116 141 141 135 151 102 139", " 125 81 146 125 151 40 55 83 151 119 148 151 97 12", "5 133 117 149 152 139 65 133 99 137 43 150 10 103 ", "138 148 146 84 117 144 126 140 94 147 146 92 131 1", "52 123 54 66 109 62 148 146 102 124 151 146 139 14", "2 129 138 141 109 10 152 147 87 148 68 124 144 151", " 117 133 143 139 117 87 147 128 147 126 148 144 14", "9 137 112 138 99 140 121 135 98 139 149 148 129 10", "0 38 147 115 140 144 144 83 86 144 149 115 111 99 ", "136 96 38 145 96 117"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 45908;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 156;
    vector<string> L = {"62 1 139 32 6 53 92 151 61 67 107 8 137 31 93 100", " 154 141 126 155 128 148 99 96 65 18 38 64 69 112 ", "102 41 139 68 67 27 136 154 58 3 114 140 71 77 0 1", "50 108 124 144 28 129 12 85 45 147 134 109 19 57 1", "24 39 79 83 84 84 46 102 94 129 132 56 66 28 11 97", " 15 23 116 103 66 15 122 108 37 21 108 98 36 144 5", "7 13 107 135 135 68 119 61 7 100 62 66 154 14 141 ", "30 96 125 119 150 11 95 41 59 101 27 155 76 53 11 ", "44 102 53 25 21 136 6 4 42 36 54 37 37 90 68 110 1", "30 86 21 47 28 94 103 99 39 93 63 94 109 29 132 8 ", "36 10 6 125 0"};
    vector<string> R = {"68 79 139 60 64 77 134 154 141 123 114 96 146 126", " 136 140 154 149 137 155 138 153 126 120 68 67 127", " 102 91 129 154 68 152 144 69 125 142 154 58 77 13", "4 144 86 103 92 155 144 146 152 81 153 79 124 49 1", "49 137 114 28 83 137 103 107 114 144 131 70 104 11", "2 148 153 132 124 90 64 123 82 78 151 111 66 148 1", "38 133 114 103 113 109 103 149 77 136 123 144 139 ", "86 140 150 133 151 75 152 154 40 144 137 119 149 1", "32 154 40 116 100 75 114 104 155 106 107 99 90 154", " 84 56 58 150 104 90 72 101 111 123 115 139 117 13", "5 142 125 150 151 54 142 121 102 134 150 150 103 1", "31 121 151 59 92 106 32 140 145"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 186357;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 159;
    vector<string> L = {"107 158 113 92 16 11 101 99 25 27 76 44 151 35 97", " 139 53 77 55 80 19 67 61 80 3 52 39 0 75 144 30 1", "53 1 69 31 67 130 54 136 142 85 30 58 6 78 76 153 ", "34 3 118 68 60 60 133 89 71 86 65 119 42 143 149 1", "57 93 80 134 158 126 85 88 50 42 8 82 82 105 37 84", " 137 73 106 151 18 77 57 92 48 69 89 43 102 72 92 ", "106 145 53 31 82 156 149 39 69 56 138 99 39 128 76", " 114 14 96 122 154 150 123 119 31 64 76 51 111 108", " 79 130 79 37 36 93 7 92 142 69 51 5 115 122 35 90", " 60 104 78 151 129 43 130 144 67 63 102 148 26 143", " 147 1 143 67 143 58 48"};
    vector<string> R = {"154 158 131 97 114 15 141 136 108 69 154 106 153 ", "51 134 148 61 143 58 118 153 133 133 80 58 107 96 ", "129 78 146 150 157 85 96 156 141 149 158 156 150 1", "48 155 67 50 125 126 158 38 38 134 140 93 71 133 1", "01 82 126 131 120 53 145 152 158 129 121 152 158 1", "31 137 132 60 109 40 128 86 155 143 88 144 125 112", " 155 85 140 154 146 84 130 158 54 151 146 103 110 ", "146 72 55 145 156 158 123 136 101 148 142 55 130 9", "0 158 73 134 155 158 156 142 158 109 145 150 90 13", "5 127 103 152 110 154 80 123 148 140 152 128 155 3", "0 130 135 94 132 97 130 125 151 137 157 148 150 12", "0 90 134 148 51 158 157 77 144 153 156 90 93"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 129049;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 162;
    vector<string> L = {"113 81 5 143 31 9 128 33 161 69 128 27 29 108 10 ", "158 9 134 66 37 5 105 108 26 154 11 44 3 34 142 75", " 20 4 1 127 9 82 30 87 5 96 156 66 70 152 66 85 15", "6 37 147 72 17 102 141 6 91 44 58 27 15 3 134 96 1", "35 151 87 109 159 9 66 89 85 102 33 13 47 119 83 1", "01 95 153 121 74 27 97 33 70 44 115 157 16 161 99 ", "8 87 45 137 24 80 38 157 152 94 88 39 119 112 39 4", "9 144 145 15 66 60 60 53 128 50 34 83 33 85 32 119", " 114 37 132 82 45 76 8 150 136 6 141 11 105 141 65", " 115 57 24 19 117 152 107 98 127 88 26 121 62 126 ", "105 62 6 2 0 118 52 141 44"};
    vector<string> R = {"114 83 149 154 69 22 157 64 161 104 143 141 84 10", "9 66 160 83 142 123 55 68 130 136 147 160 102 151 ", "159 57 144 110 43 141 74 145 34 82 115 119 51 126 ", "161 137 153 160 79 129 158 154 151 75 84 144 156 5", "6 154 135 129 155 126 53 139 143 146 155 132 137 1", "60 45 69 100 105 158 52 102 78 136 157 126 147 153", " 141 121 61 131 118 90 48 155 159 19 161 125 30 10", "4 117 160 43 87 109 157 154 127 106 89 120 126 127", " 100 153 149 103 66 137 81 107 142 150 73 151 65 9", "6 148 160 120 159 154 133 140 136 133 150 144 91 1", "45 86 143 155 130 156 126 134 70 154 158 158 144 1", "34 126 74 126 110 153 110 64 59 153 66 124 115 157", " 130"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 146648;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 165;
    vector<string> L = {"27 38 123 86 31 115 36 28 104 94 99 12 58 36 1 15", "1 23 95 116 92 79 63 103 80 59 132 44 75 61 134 67", " 161 117 153 52 51 145 35 76 0 20 111 133 33 163 6", "6 36 53 86 17 109 112 149 155 15 41 109 117 41 114", " 111 144 139 35 111 152 119 158 143 12 12 7 160 63", " 129 53 128 104 65 90 150 108 65 97 106 155 122 12", "1 114 116 137 55 74 124 60 50 22 128 121 30 117 16", "0 163 138 108 17 76 4 136 68 96 39 14 157 77 129 7", "3 44 60 140 124 88 164 11 64 94 64 140 56 42 122 6", "3 102 60 61 52 7 136 147 37 111 144 14 93 84 112 1", "7 117 37 53 4 27 11 49 143 28 21 140 101 36 119 13", "9 130 34 80"};
    vector<string> R = {"33 46 130 122 129 122 136 156 126 95 109 42 85 16", "2 151 158 117 114 147 92 83 91 161 88 143 133 96 1", "30 124 149 84 162 123 163 63 92 153 36 95 9 31 155", " 159 108 164 155 161 116 144 38 152 144 156 162 96", " 90 154 119 113 115 111 150 148 121 151 162 133 16", "0 159 74 48 115 164 77 149 155 134 143 124 105 151", " 145 90 134 116 156 150 140 124 155 139 72 82 139 ", "151 103 37 164 122 163 159 164 163 152 140 139 135", " 26 158 88 123 132 108 163 77 149 121 105 68 156 1", "60 104 164 52 147 127 135 142 88 44 156 77 135 64 ", "112 69 120 150 163 148 161 150 36 109 98 147 153 1", "42 142 78 92 49 139 83 161 67 117 152 145 125 143 ", "162 153 127 130"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 259698;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 168;
    vector<string> L = {"167 114 51 77 106 48 117 51 53 84 123 56 0 31 54 ", "22 97 14 72 135 162 127 8 42 9 7 17 153 45 103 6 1", "57 71 116 17 118 42 8 101 29 125 125 92 75 17 50 9", "9 85 12 38 17 24 150 30 125 58 21 2 5 136 8 109 92", " 54 95 87 163 12 98 136 4 42 69 14 153 83 121 126 ", "5 167 164 86 149 44 67 148 87 1 165 39 155 96 6 18", " 41 135 37 109 116 66 36 77 84 4 52 30 63 154 115 ", "106 42 85 17 64 45 67 41 150 53 151 18 136 101 113", " 152 159 163 56 101 0 14 11 163 29 91 98 128 16 11", "2 165 72 137 79 50 74 117 6 146 33 92 60 129 3 48 ", "54 156 123 160 77 120 145 150 89 14 75 72 32 99"};
    vector<string> R = {"167 143 142 98 121 58 129 102 73 85 137 157 146 4", "4 89 103 161 20 140 146 162 143 87 143 40 120 149 ", "159 143 138 72 159 128 133 24 141 116 12 145 162 1", "39 162 94 124 115 60 130 141 32 46 64 83 150 84 14", "0 111 30 156 90 150 119 137 136 84 122 97 167 95 1", "02 139 96 88 107 104 161 133 146 135 9 167 165 160", " 150 152 112 150 107 44 165 64 162 152 56 157 161 ", "146 57 144 162 129 50 108 104 167 141 66 65 164 12", "2 161 87 164 53 164 51 148 138 154 90 156 51 143 1", "50 117 165 159 165 99 129 27 154 49 167 147 138 16", "2 151 101 125 165 156 162 155 157 100 166 142 162 ", "92 95 82 156 148 163 101 161 153 166 151 152 153 1", "53 92 96 148 165 166 115"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 25140;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 183;
    vector<string> L = {"50 87 147 87 73 20 57 176 83 21 114 5 44 0 76 155", " 35 134 108 168 40 71 165 81 24 82 157 21 95 172 1", "80 114 96 110 161 27 149 131 118 135 123 73 103 56", " 21 84 44 107 58 5 86 82 159 128 94 43 102 149 126", " 12 140 20 66 62 122 171 133 160 139 124 5 53 85 2", "9 11 128 154 23 23 148 110 19 139 169 1 32 176 87 ", "59 103 125 27 171 3 145 112 44 62 154 90 176 117 6", "1 20 99 21 50 10 123 75 38 125 33 162 17 10 145 76", " 119 179 100 71 13 16 145 27 29 29 22 15 69 19 122", " 171 70 63 101 36 160 89 91 117 179 91 143 46 94 1", "53 36 39 129 38 104 123 65 163 1 81 80 159 6 162 1", "20 19 31 103 89 146 120 93 108 73 72 20 147 136 50", " 4 1 106 87 103 92"};
    vector<string> R = {"56 178 148 182 179 77 66 177 172 137 181 31 120 6", "9 78 165 40 138 173 174 123 166 174 182 56 144 162", " 28 177 181 180 159 106 139 167 69 174 142 141 175", " 182 112 139 138 84 119 167 177 82 113 129 158 182", " 148 116 131 146 170 156 129 164 104 75 140 163 17", "7 178 178 176 143 70 154 101 51 159 155 173 131 14", "1 154 154 182 147 182 12 58 176 98 115 137 143 179", " 181 120 163 171 177 129 176 104 182 182 71 177 15", "9 26 83 120 153 175 135 126 86 162 46 74 151 106 1", "34 180 167 168 139 39 162 49 148 154 160 162 117 1", "66 155 176 120 95 107 165 163 174 155 167 182 144 ", "148 178 151 159 86 162 134 77 148 175 159 163 151 ", "86 164 160 143 174 180 35 131 138 103 175 157 159 ", "122 119 138 55 172 159 182 151 130 164 97 141 117"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 216632;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 186;
    vector<string> L = {"60 89 96 161 164 127 55 46 153 17 174 131 40 64 5", "2 180 182 5 74 136 100 29 18 81 20 29 3 4 171 140 ", "135 39 35 123 144 53 134 174 117 71 60 63 174 144 ", "93 33 111 132 23 71 89 137 0 153 167 107 96 25 13 ", "1 160 96 41 57 80 60 15 34 85 68 163 61 174 50 24 ", "167 77 57 150 127 45 100 124 128 51 37 160 71 31 1", "15 16 177 150 31 164 22 82 2 163 100 98 116 9 148 ", "93 64 59 74 154 98 6 85 25 172 35 157 51 76 76 3 1", "04 52 7 167 112 103 163 67 79 31 84 52 155 172 141", " 51 34 104 171 80 10 67 49 142 77 20 122 33 70 77 ", "18 30 100 102 5 91 102 89 141 120 81 116 180 150 1", "35 112 43 99 94 176 180 93 165 101 67 184 107 65 7", " 170 80 98 111 105 55 36"};
    vector<string> R = {"176 132 159 163 170 169 175 156 159 85 183 172 11", "5 155 182 182 182 73 86 142 169 170 173 169 58 59 ", "123 38 179 152 157 79 182 176 152 132 179 175 121 ", "182 104 121 180 153 175 93 117 166 108 73 117 157 ", "92 165 175 166 124 171 158 66 180 153 43 91 120 12", "4 39 101 89 84 182 127 177 127 118 180 98 73 182 1", "55 108 133 160 129 185 142 173 77 134 118 78 183 1", "71 167 179 170 161 71 172 161 170 145 9 158 175 17", "0 91 83 185 113 170 120 119 177 125 166 75 97 119 ", "89 172 58 23 182 129 125 177 77 158 83 131 78 163 ", "176 177 120 66 184 185 158 117 100 96 154 104 169 ", "157 146 135 143 24 113 126 151 15 93 144 132 170 1", "69 98 117 182 157 170 151 114 161 182 182 182 112 ", "176 140 110 185 159 94 102 180 143 179 146 136 157", " 107"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 440320;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 189;
    vector<string> L = {"56 93 83 49 89 7 75 35 94 101 13 116 69 32 66 22 ", "33 3 119 113 20 143 184 19 143 6 154 188 148 106 8", "1 152 52 62 112 47 73 109 23 21 8 77 48 17 142 27 ", "5 148 177 151 24 64 44 75 171 108 126 158 85 87 13", "5 114 182 67 112 114 167 68 67 150 72 128 109 87 4", "5 162 131 55 54 57 73 120 151 77 86 101 115 44 22 ", "86 157 106 132 152 72 136 24 125 147 114 135 52 17", "0 130 14 58 109 183 48 166 66 38 77 147 124 155 94", " 110 58 69 181 73 14 77 58 87 122 39 6 13 67 117 6", "2 28 75 4 101 134 85 45 53 21 179 134 126 98 67 88", " 22 55 43 109 114 6 177 28 80 109 50 18 143 38 67 ", "37 117 125 118 30 6 18 130 146 81 129 64 55 126 12", "9 41 129 31 51 125 66 7 41 159 91 48"};
    vector<string> R = {"154 118 175 82 169 120 123 118 117 127 185 171 12", "5 91 146 131 45 8 164 172 86 169 185 62 179 14 186", " 188 148 154 128 164 99 170 179 106 127 112 142 81", " 109 95 170 139 168 158 182 166 188 169 94 84 97 1", "08 183 185 128 170 157 94 169 178 183 118 120 132 ", "174 126 155 178 111 188 135 115 76 181 153 170 185", " 59 119 147 164 93 92 133 170 87 134 134 182 106 1", "40 184 98 158 109 178 177 148 166 124 188 177 86 1", "57 133 186 122 183 122 142 101 186 134 177 123 173", " 176 71 181 182 53 152 124 98 170 75 128 145 101 1", "63 102 68 175 155 175 142 96 84 179 158 180 181 18", "1 130 70 172 80 175 52 139 115 72 179 170 97 147 1", "49 140 165 124 126 102 164 151 146 106 18 48 162 1", "86 89 148 77 160 178 176 184 174 39 61 169 183 132", " 166 181 128 81"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1822928;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 192;
    vector<string> L = {"80 52 32 18 139 34 158 116 132 78 137 139 14 158 ", "96 42 58 70 33 142 33 49 142 110 103 182 107 164 1", "42 176 39 69 1 57 44 38 31 183 41 176 48 122 183 1", "71 191 18 136 5 39 87 167 23 98 40 79 84 4 108 0 5", "4 168 8 138 137 133 113 124 120 79 107 158 162 14 ", "66 66 188 88 97 109 30 139 128 142 182 67 113 92 1", "91 22 19 181 44 179 162 112 134 126 6 169 69 52 12", "1 76 68 19 137 16 117 166 161 126 163 150 141 92 5", "9 3 132 54 135 38 63 123 57 149 145 10 31 87 37 3 ", "162 189 120 95 24 7 21 118 120 178 131 99 60 85 12", " 132 50 11 118 45 44 34 43 167 161 68 9 110 85 105", " 67 56 3 147 158 4 114 165 21 33 25 39 92 29 146 8", "5 154 73 167 140 66 70 100 191 188 87 182 46 161 6", "8 74"};
    vector<string> R = {"107 61 104 29 149 70 159 131 133 189 161 150 109 ", "185 135 92 85 170 93 183 44 58 156 129 160 183 140", " 170 185 185 128 180 144 168 136 172 119 183 102 1", "84 103 163 185 180 191 130 142 48 176 160 191 51 1", "39 156 165 183 116 171 48 172 169 129 159 169 144 ", "152 171 126 125 164 184 183 166 69 131 188 147 152", " 181 142 143 140 150 191 115 122 179 191 81 113 18", "8 77 190 175 191 153 156 70 174 179 77 182 153 112", " 128 141 189 136 180 169 167 173 170 148 139 133 8", "1 140 106 175 126 70 153 146 180 151 109 185 170 1", "35 145 183 190 124 148 189 109 181 191 161 191 175", " 123 180 156 31 144 125 159 119 181 116 183 169 17", "3 175 99 171 115 135 167 185 101 93 183 177 131 14", "3 187 87 181 25 55 154 88 156 163 173 106 172 164 ", "117 168 164 191 191 95 184 112 167 89 106"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 466676;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 195;
    vector<string> L = {"160 101 124 64 62 76 147 188 75 108 62 97 128 106", " 114 86 140 165 102 49 111 141 164 156 39 13 158 1", "05 26 27 168 77 27 94 36 156 75 72 174 49 146 105 ", "88 80 27 20 76 131 181 171 111 112 179 103 100 123", " 84 48 92 64 87 176 76 90 167 162 163 6 53 149 111", " 60 193 96 70 176 188 62 38 168 0 78 192 24 83 91 ", "83 180 192 117 119 180 152 2 108 35 68 193 148 45 ", "75 101 73 167 106 33 145 75 83 63 47 109 128 149 1", "52 60 120 46 72 188 65 112 113 154 93 68 166 155 1", "10 47 182 53 144 111 181 103 156 139 145 129 61 49", " 177 89 184 38 7 135 79 105 77 93 128 0 87 65 34 1", "60 34 42 103 150 134 134 102 175 70 171 119 126 94", " 192 91 54 47 87 148 165 88 12 122 22 72 121 71 24", " 100 177 58 70 68 13 175 133 42"};
    vector<string> R = {"184 143 163 64 143 164 187 193 183 119 71 176 190", " 159 114 168 152 167 183 192 158 181 187 181 138 4", "8 176 189 94 52 191 131 29 111 74 162 162 122 176 ", "68 152 110 127 190 158 104 140 183 192 194 139 138", " 186 151 164 167 130 98 165 142 193 188 106 101 17", "9 172 168 54 107 150 177 134 194 147 98 183 189 14", "6 95 190 30 99 194 79 138 146 146 194 194 158 142 ", "182 182 164 148 119 89 193 194 74 87 106 185 177 1", "22 135 159 97 193 87 151 161 167 185 173 176 162 7", "1 84 192 114 152 189 155 138 90 175 178 146 186 19", "2 178 169 125 185 158 180 168 154 134 104 98 184 1", "53 194 67 99 189 95 171 145 123 142 110 106 91 80 ", "190 51 194 139 153 149 160 106 186 85 172 126 170 ", "135 193 114 143 155 120 171 177 140 158 190 140 14", "7 161 194 45 130 189 91 91 126 103 193 161 176"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 740065;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 198;
    vector<string> L = {"145 119 103 174 85 166 188 114 13 56 123 95 127 7", "8 157 170 79 112 155 93 8 129 129 170 169 120 0 13", "1 142 95 11 24 81 14 110 56 140 173 11 137 26 56 1", "22 116 83 11 20 152 190 99 91 147 176 0 151 170 10", "3 147 173 79 58 152 186 188 95 151 46 99 50 37 180", " 13 183 119 142 159 83 78 165 174 57 42 39 125 171", " 145 31 146 61 145 51 73 144 90 83 138 102 159 184", " 23 133 165 191 4 149 107 106 28 121 11 18 125 48 ", "107 42 100 46 106 15 13 138 107 121 86 154 1 124 7", "4 183 26 42 180 131 1 51 104 102 22 172 188 63 37 ", "9 145 8 180 183 35 173 196 65 65 54 117 116 12 15 ", "29 153 103 195 3 170 74 7 110 78 138 149 107 146 8", "4 45 194 192 135 53 164 193 91 58 19 69 84 150 60 ", "14 161 27 83 38 142 172 123 175 52 150 105"};
    vector<string> R = {"169 189 136 195 182 182 188 196 24 194 142 103 15", "3 118 174 174 141 173 195 191 80 174 179 172 186 1", "26 100 134 157 120 53 76 129 124 158 62 164 185 13", "1 154 129 57 144 183 85 120 89 194 197 103 104 157", " 184 31 173 183 174 150 195 126 78 196 190 195 172", " 195 149 184 197 45 189 170 193 170 143 162 114 19", "1 195 193 105 57 182 180 197 160 69 174 135 187 88", " 155 191 158 191 144 133 187 196 53 186 180 192 33", " 188 192 123 116 136 109 88 146 77 148 75 135 167 ", "150 192 28 170 191 158 129 174 119 160 103 192 106", " 77 183 158 189 173 136 163 82 180 188 101 141 55 ", "190 190 195 191 48 194 197 66 136 143 196 196 78 9", "0 170 160 125 195 60 170 101 174 161 167 143 166 1", "64 193 160 141 196 193 135 65 196 194 195 181 79 1", "10 166 164 75 156 171 197 157 53 196 175 172 197 1", "31 159 190"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 86160;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 201;
    vector<string> L = {"125 73 127 163 83 32 89 41 52 61 188 96 53 136 13", "7 165 38 45 10 124 47 185 81 140 73 34 136 101 117", " 23 197 140 166 114 7 41 92 129 102 147 94 56 101 ", "39 199 42 183 125 119 17 51 106 106 158 57 148 187", " 36 94 32 110 155 13 13 119 21 110 164 146 166 88 ", "16 73 137 180 2 132 0 118 194 197 76 142 124 149 1", "09 33 139 154 144 60 113 147 187 126 91 42 14 101 ", "20 90 128 153 186 184 101 110 44 29 26 16 176 105 ", "8 200 119 4 110 91 131 195 187 50 136 86 134 110 1", "98 145 74 6 78 41 104 105 129 73 39 87 171 140 60 ", "111 92 29 18 6 159 182 190 123 34 183 140 90 2 69 ", "192 5 125 190 51 10 85 200 190 70 171 44 36 21 50 ", "198 81 200 88 114 31 5 152 74 37 35 159 54 26 22 2", "5 125 45 119 146 104 174 68 183 53 195 91 185 66"};
    vector<string> R = {"157 108 191 184 185 83 118 105 150 193 192 117 69", " 196 179 196 165 139 15 195 179 195 150 170 159 18", "6 136 112 179 40 198 196 199 191 45 163 160 162 14", "4 182 179 108 124 118 200 107 186 186 158 32 110 1", "27 151 180 180 189 198 188 147 57 191 169 49 133 1", "37 148 166 178 174 170 186 67 76 151 200 12 188 53", " 124 195 200 174 170 184 168 125 61 177 161 144 12", "3 193 168 199 172 95 90 39 109 32 95 160 157 189 1", "87 154 121 69 34 111 155 194 165 169 200 132 26 11", "8 174 172 198 189 61 137 182 173 196 200 180 197 8", "5 136 63 158 165 161 180 67 157 200 153 62 179 171", " 169 135 53 178 188 196 129 126 186 142 107 70 159", " 200 132 198 194 78 118 121 200 194 123 183 131 13", "6 49 89 200 139 200 162 135 146 192 156 75 134 40 ", "177 172 177 91 159 171 71 179 200 161 192 70 200 1", "49 198 191 188 93"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1979601;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 219;
    vector<string> L = {"195 85 159 56 76 30 50 120 4 129 64 150 174 15 19", "6 196 49 76 198 122 10 158 122 33 180 170 29 215 6", "7 106 101 89 78 130 77 151 142 114 21 171 95 36 15", "2 129 16 74 88 122 36 165 157 136 92 172 0 188 148", " 88 57 86 140 215 187 82 58 216 17 22 200 133 209 ", "130 134 202 144 48 25 34 89 24 130 11 166 114 24 1", "19 126 90 50 31 47 177 94 154 136 167 38 135 88 3 ", "167 108 14 128 78 192 214 3 179 133 174 191 40 182", " 68 171 3 181 16 35 185 13 34 64 118 48 214 116 53", " 30 7 156 54 164 189 24 214 141 181 90 194 168 55 ", "148 212 69 34 45 45 208 155 160 33 182 195 95 86 2", "3 48 140 168 180 96 60 78 98 109 69 172 104 58 199", " 77 157 175 198 193 75 21 195 106 165 147 10 116 1", "73 80 82 114 211 50 31 153 133 87 127 125 45 73 36", " 141 62 171 13 26 128 71 112 63 98 108 58 195 138 ", "143 81 154 207 52"};
    vector<string> R = {"197 89 169 126 182 76 203 190 77 152 90 208 207 2", "10 198 208 149 93 209 204 176 161 159 197 207 179 ", "215 218 163 137 196 170 113 130 155 185 172 125 11", "0 198 215 123 203 131 217 155 159 138 66 178 164 1", "58 146 174 184 196 164 110 96 111 198 218 203 181 ", "215 218 185 31 215 180 211 140 148 206 218 199 185", " 84 102 52 209 106 189 115 140 183 131 123 68 60 7", "0 215 154 193 198 216 215 194 175 7 181 124 209 15", "3 144 216 215 20 204 190 211 191 160 216 102 185 9", "6 195 75 218 198 81 124 70 186 95 218 148 147 46 4", "4 182 131 173 199 112 217 205 188 133 203 184 140 ", "167 214 201 118 127 185 209 218 171 207 209 205 18", "4 95 55 93 215 191 188 182 145 99 206 158 180 211 ", "214 199 214 111 166 196 214 215 196 77 203 119 179", " 187 94 218 200 101 163 125 215 73 116 192 157 169", " 150 127 187 82 80 196 78 178 31 148 182 127 214 1", "15 217 192 127 196 160 159 128 163 213 173"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 190570;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 222;
    vector<string> L = {"190 16 100 5 37 44 26 110 80 84 45 113 106 111 15", "3 180 120 106 126 27 13 114 190 177 26 54 125 82 7", "4 50 5 82 53 80 70 66 214 32 154 149 50 180 48 101", " 212 198 5 63 33 144 217 87 168 83 118 18 142 148 ", "30 22 212 4 108 84 115 89 98 203 211 149 97 169 15", "5 217 146 95 45 117 88 32 190 69 58 181 107 159 47", " 125 98 30 130 47 156 207 129 39 89 93 190 109 162", " 158 48 2 52 131 133 10 174 170 153 198 186 28 8 1", "2 181 207 94 32 131 219 185 156 108 52 78 106 63 8", "9 170 193 26 114 163 134 61 111 178 180 51 38 139 ", "22 108 63 28 66 15 113 118 210 143 103 110 160 159", " 39 153 77 71 137 134 158 40 40 115 50 56 49 169 1", "46 18 12 170 211 105 5 127 173 72 122 168 183 151 ", "54 208 23 71 110 75 162 98 34 11 215 59 44 220 121", " 142 106 160 101 205 218 125 174 165 36 154 72 100", " 68 47 205 71 216 66 200 175 216"};
    vector<string> R = {"193 170 209 70 52 194 171 123 124 152 221 186 144", " 199 158 208 124 198 221 207 219 163 201 204 79 12", "1 189 172 92 55 199 200 179 114 102 136 214 194 19", "2 217 154 197 101 124 221 199 24 164 129 194 221 1", "86 181 92 137 37 197 208 118 203 217 28 112 170 15", "9 206 128 203 211 206 166 180 185 221 200 188 190 ", "191 215 132 219 155 207 183 167 215 76 188 106 142", " 166 72 184 214 184 107 172 196 216 122 162 168 15", "3 50 203 144 184 101 216 216 181 220 201 56 202 14", "7 191 212 185 184 190 220 195 181 198 154 184 151 ", "189 193 178 221 199 171 221 145 209 123 219 186 11", "7 154 172 82 143 66 101 123 201 159 146 220 206 13", "9 128 180 174 72 187 184 155 221 221 165 166 109 1", "84 199 196 116 207 173 84 107 189 219 122 137 141 ", "181 89 149 200 213 172 74 218 47 102 204 76 163 10", "3 182 24 220 199 191 220 203 182 214 170 201 215 2", "19 173 213 173 203 196 188 115 90 48 219 165 219 1", "50 202 183 221"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1224988;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 225;
    vector<string> L = {"217 219 86 101 13 105 8 216 105 180 219 162 160 1", "28 90 73 85 136 130 144 21 196 36 158 209 40 174 1", "77 113 206 44 214 32 85 162 184 202 88 111 72 47 6", "3 201 148 129 84 59 174 119 138 137 6 160 2 2 200 ", "205 198 193 192 73 52 50 194 97 157 203 222 39 194", " 5 21 102 200 35 178 4 177 89 200 69 173 193 19 18", "7 113 102 169 29 40 10 202 91 165 47 173 82 158 63", " 139 196 96 89 139 95 149 154 216 139 181 191 138 ", "2 64 171 62 30 186 195 99 130 141 105 167 61 149 3", "8 200 115 155 29 194 83 138 190 57 88 68 135 190 1", "93 8 193 185 219 39 45 68 162 156 129 209 68 159 2", "18 184 85 28 187 27 112 6 158 193 110 104 13 215 1", "54 160 52 117 41 51 201 189 140 176 122 143 31 133", " 198 115 96 84 32 162 32 142 148 134 6 150 54 65 1", "17 8 49 170 164 117 39 220 223 176 154 218 104 71 ", "150 10 93 70 27 81 41 128 76 164 219 144 202 41 21", "0"};
    vector<string> R = {"223 219 102 162 66 128 110 219 164 208 222 217 22", "1 172 149 98 85 159 170 164 21 208 218 166 220 136", " 185 221 141 219 60 219 72 113 206 191 223 174 175", " 73 115 72 221 171 183 91 142 177 166 211 163 38 2", "00 172 170 222 224 203 218 217 222 61 135 210 137 ", "160 204 223 71 220 98 86 165 215 132 224 129 181 1", "29 216 224 178 209 21 194 170 102 200 160 55 141 2", "20 166 218 206 199 167 179 72 162 200 174 204 220 ", "138 185 184 218 214 203 205 142 153 83 203 218 49 ", "198 221 144 148 203 188 201 195 173 49 213 118 158", " 111 212 131 172 205 60 176 98 174 214 194 116 221", " 211 223 101 66 159 205 194 173 217 69 166 219 203", " 201 138 196 123 157 115 162 203 196 142 193 215 2", "16 193 154 222 135 98 206 223 207 191 215 205 135 ", "223 200 222 206 112 175 171 80 204 184 186 128 222", " 118 65 151 190 74 204 187 129 129 222 224 217 158", " 219 137 149 181 92 189 176 143 112 41 209 142 202", " 222 203 222 93 221"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3602536;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 228;
    vector<string> L = {"161 2 206 56 224 12 76 17 140 68 150 160 75 55 7 ", "34 86 226 33 22 108 152 11 216 173 161 74 67 13 13", "4 10 45 202 78 12 222 10 191 122 98 156 182 226 17", "3 49 204 207 113 113 116 205 63 17 219 14 62 109 5", "4 172 135 182 139 34 223 33 148 46 132 134 104 204", " 158 165 48 206 155 11 76 10 118 148 187 40 139 1 ", "129 84 207 190 176 120 96 72 163 184 147 33 108 11", "3 120 36 91 41 223 137 102 86 20 55 143 0 103 183 ", "36 60 86 130 42 210 193 15 14 221 107 26 125 49 18", "6 180 114 60 205 222 189 206 151 127 192 220 166 1", "21 57 224 183 102 96 95 110 12 156 44 79 13 175 17", "1 125 65 155 219 87 176 138 125 101 113 133 203 90", " 171 35 74 115 116 31 81 81 26 49 83 116 50 31 163", " 219 200 117 91 153 13 148 134 124 25 199 152 132 ", "212 53 175 33 181 143 173 119 36 155 47 51 210 198", " 198 166 195 193 138 131 71 209 197 9 69 224 21 19", "0 149 145 161 103"};
    vector<string> R = {"196 102 219 77 226 226 117 161 178 148 204 193 20", "0 74 60 147 95 227 73 56 197 194 14 222 200 193 21", "3 124 189 222 28 208 223 135 80 226 11 191 145 200", " 187 187 227 173 78 219 214 160 182 121 218 194 33", " 225 59 186 116 93 215 195 209 206 77 226 209 196 ", "107 154 172 225 207 189 187 79 223 186 12 179 218 ", "122 225 210 78 224 38 224 159 211 212 205 189 110 ", "172 186 206 184 205 119 187 121 126 121 225 225 18", "7 122 129 25 122 170 98 175 185 63 64 173 217 51 2", "15 199 47 44 222 151 112 222 59 206 220 193 190 21", "7 223 220 221 225 148 209 226 205 130 223 227 197 ", "172 150 212 187 75 192 110 222 128 212 202 158 223", " 172 220 107 205 173 186 212 179 209 206 179 181 1", "84 127 225 154 168 214 217 181 99 138 135 109 42 2", "05 219 202 154 136 180 164 203 224 210 82 215 161 ", "224 220 176 206 49 216 154 187 225 170 186 125 190", " 216 204 216 211 218 225 153 168 141 223 201 166 1", "02 227 86 199 189 175 177 209"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1140649;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 231;
    vector<string> L = {"181 18 120 50 62 1 168 24 89 183 195 203 22 109 5", "5 38 71 91 23 101 88 139 2 25 21 52 111 36 147 117", " 17 220 84 49 4 71 65 130 91 194 125 214 80 38 117", " 211 200 134 230 149 19 42 205 59 42 138 45 227 67", " 188 46 92 7 172 80 126 126 117 222 33 37 135 224 ", "21 21 80 46 208 175 128 222 183 144 202 218 147 16", "5 122 150 219 28 125 214 132 49 72 64 189 76 81 6 ", "43 42 124 120 211 65 33 215 230 14 111 93 91 114 7", " 114 144 108 59 60 214 39 125 85 151 38 224 28 151", " 18 197 68 176 209 52 20 149 112 170 158 150 139 1", "40 41 91 164 151 199 54 85 117 34 201 172 115 134 ", "155 203 210 180 135 116 117 49 139 142 131 34 45 3", "7 192 49 52 97 18 84 37 17 60 60 155 214 91 63 211", " 192 146 151 21 73 54 146 15 199 84 93 28 217 205 ", "66 41 41 153 133 11 66 220 181 119 156 213 79 75 1", "80 108 224 92 136 165 55 194 217 225 16 124 111 5 ", "41 107 93"};
    vector<string> R = {"203 133 219 56 129 107 168 220 193 197 210 210 42", " 173 230 171 168 103 159 209 143 190 12 162 24 120", " 174 181 215 212 142 230 119 97 217 181 161 199 21", "8 230 218 229 190 230 205 223 230 175 230 192 104 ", "95 219 161 104 219 117 230 91 211 153 138 46 202 2", "21 230 188 227 226 48 219 149 225 134 190 99 200 2", "17 229 196 230 210 147 230 220 159 189 193 157 225", " 184 131 227 207 111 159 150 201 146 196 29 141 14", "5 210 127 223 156 166 218 230 203 197 132 104 149 ", "185 124 168 150 103 93 230 186 145 203 217 120 227", " 170 191 143 207 127 220 217 213 54 210 116 213 17", "6 223 150 214 147 220 219 198 204 64 98 130 195 23", "0 179 180 153 183 219 212 217 224 159 157 154 222 ", "151 153 45 88 104 221 73 208 139 92 110 227 214 12", "6 137 223 227 118 222 216 199 217 188 150 157 94 1", "59 61 207 159 214 71 219 222 79 72 95 225 137 121 ", "71 221 218 192 181 225 177 201 225 133 225 159 180", " 229 198 209 223 228 138 183 173 126 56 219 179"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 733706;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 234;
    vector<string> L = {"224 170 216 87 12 155 95 57 56 123 178 106 66 169", " 198 50 169 114 215 211 25 21 79 61 28 4 101 66 15", "9 20 123 219 6 200 125 15 95 166 143 32 218 112 16", "7 166 140 118 32 164 155 115 76 212 183 137 126 80", " 158 108 49 78 38 100 231 101 196 179 207 136 183 ", "204 2 34 10 205 174 152 182 194 95 101 68 149 183 ", "120 87 61 222 83 155 2 92 83 224 189 81 61 159 185", " 159 190 207 164 7 71 143 188 184 210 91 91 47 195", " 43 13 184 224 44 80 155 22 38 88 142 62 55 149 22", "0 187 95 5 111 166 32 171 46 13 181 178 94 11 167 ", "224 98 29 113 218 49 71 59 65 94 121 83 223 139 16", "8 208 163 233 228 111 196 164 198 157 224 41 178 1", "78 37 182 45 178 221 85 192 225 231 73 1 76 62 125", " 65 126 75 58 145 131 150 151 184 225 107 166 218 ", "91 97 188 56 220 205 182 102 75 208 176 66 6 13 18", "4 98 224 186 27 57 38 184 154 155 159 128 224 197 ", "145 106 186 81 230 158 25 70 200 184"};
    vector<string> R = {"230 175 230 122 87 213 215 169 198 214 180 118 20", "5 174 222 176 228 187 226 219 138 233 181 153 118 ", "111 104 77 202 117 141 231 24 207 226 209 140 192 ", "154 32 232 203 185 179 149 168 140 184 189 163 91 ", "213 232 141 166 89 198 228 205 113 131 169 232 135", " 197 219 230 138 220 214 197 108 79 216 216 189 19", "2 213 219 143 149 216 203 142 206 73 223 224 206 1", "37 183 159 224 224 218 125 219 220 166 205 212 227", " 51 81 190 228 200 217 147 231 226 221 178 176 184", " 230 65 86 185 146 195 101 212 128 127 201 225 199", " 114 232 143 178 121 180 106 81 226 207 221 114 22", "6 226 227 109 221 229 205 143 163 160 167 203 152 ", "225 190 175 210 228 233 231 195 222 207 210 196 23", "0 151 233 222 125 202 208 179 224 143 205 227 232 ", "161 83 230 173 166 85 222 147 156 184 193 230 170 ", "184 226 140 183 231 109 146 224 138 222 217 187 14", "5 172 211 196 227 227 89 220 211 226 211 109 126 1", "24 226 231 192 190 147 227 218 207 115 203 195 233", " 173 152 118 223 222"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 194494;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 237;
    vector<string> L = {"230 106 229 8 181 59 181 138 186 79 115 39 216 11", " 205 217 31 206 115 104 233 210 210 67 54 161 228 ", "94 83 64 59 65 156 232 25 195 18 83 231 42 226 122", " 23 3 103 142 119 13 51 24 15 194 181 76 219 196 6", "7 59 164 200 13 126 22 187 213 93 4 105 205 156 45", " 30 108 53 201 207 231 150 42 209 178 147 89 47 91", " 182 154 219 66 154 100 102 9 11 148 85 133 51 204", " 88 207 50 172 222 5 180 164 158 151 53 63 215 209", " 138 71 150 236 134 182 209 142 61 75 57 103 212 8", "9 30 79 152 170 207 98 127 162 206 226 231 121 65 ", "83 78 108 10 24 145 151 60 201 75 190 8 174 188 11", "6 134 177 189 49 210 180 19 150 133 101 47 3 108 4", "3 196 36 8 219 76 187 23 64 69 40 186 73 100 30 61", " 71 197 7 102 200 154 78 142 67 163 151 220 115 73", " 123 10 64 211 108 69 18 120 157 77 157 171 161 23", " 216 143 235 120 20 78 8 33 8 14 81 227 62 211 181", " 200 198 20 215 77 112 213 69 220 105"};
    vector<string> R = {"230 158 230 235 223 110 231 205 197 190 117 121 2", "36 184 229 232 185 218 168 228 235 235 211 120 154", " 225 233 106 191 78 205 212 180 232 109 229 162 15", "1 233 67 231 122 161 64 187 227 139 171 233 77 66 ", "205 194 147 236 224 83 160 215 218 39 150 117 195 ", "213 196 12 134 222 202 138 156 197 181 224 224 233", " 202 212 210 186 216 133 191 169 221 180 224 109 2", "09 112 158 121 159 232 233 137 162 223 111 223 162", " 228 226 56 209 236 176 176 180 107 232 220 148 13", "3 167 236 199 216 218 190 64 226 236 154 230 171 3", "9 226 230 193 229 218 127 199 214 234 235 151 87 2", "32 190 131 132 202 205 209 146 217 234 195 195 229", " 210 197 175 209 232 160 224 202 119 219 139 215 1", "56 177 183 182 232 39 35 231 192 200 225 205 201 8", "7 202 143 139 51 160 101 215 82 179 206 200 201 21", "2 148 193 222 235 166 115 202 170 135 227 120 186 ", "69 134 169 204 173 216 170 24 221 196 235 211 91 8", "7 198 36 57 190 157 235 225 213 183 219 211 207 22", "4 160 161 224 210 233 146"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1024464;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 240;
    vector<string> L = {"161 213 232 235 10 236 174 93 105 135 80 14 43 15", "4 186 14 209 66 209 3 220 28 33 105 85 194 208 181", " 66 137 213 152 144 169 182 97 230 229 95 164 214 ", "226 106 104 173 16 186 35 167 142 9 199 82 206 18 ", "237 24 196 151 197 160 76 170 61 149 198 114 147 6", "8 136 138 239 205 53 48 160 68 150 101 8 109 61 10", "8 6 143 66 226 229 238 122 125 35 110 155 15 224 3", "0 110 113 193 111 222 234 196 157 114 44 123 169 1", "84 95 0 215 175 225 229 124 191 127 143 219 116 21", "9 2 79 201 65 86 24 81 44 181 25 69 27 226 147 201", " 167 8 209 24 73 218 31 6 168 14 208 3 168 2 118 9", "6 42 128 184 86 205 74 159 183 167 197 123 22 198 ", "126 132 118 72 158 62 106 50 50 39 177 199 211 211", " 175 215 38 153 238 50 167 144 209 12 164 143 148 ", "59 238 53 3 191 23 82 176 88 45 106 198 37 0 104 1", "3 202 26 185 237 164 215 17 27 233 91 129 72 84 12", "9 208 100 185 218 125 232 24 140 104 235 140 202 1", "54 134 170 11"};
    vector<string> R = {"192 234 237 238 27 239 192 235 124 222 231 151 13", "4 177 217 168 213 79 229 102 237 238 150 171 223 2", "05 209 225 173 178 230 219 229 221 217 223 230 231", " 98 225 224 227 179 231 238 58 197 211 203 154 144", " 232 204 224 161 237 92 200 166 211 212 82 199 224", " 206 215 140 150 205 185 147 239 224 130 218 175 1", "92 227 214 154 199 190 134 127 176 88 229 239 238 ", "204 189 51 161 185 32 236 39 163 121 231 170 234 2", "34 230 197 201 210 173 197 215 227 184 226 224 226", " 236 179 237 189 146 222 227 225 66 185 225 102 15", "3 199 198 188 236 204 144 46 228 191 223 217 62 21", "3 212 161 221 51 51 225 147 211 91 171 81 216 231 ", "185 220 186 94 230 110 206 190 202 207 147 60 220 ", "210 238 205 208 235 94 231 229 91 105 200 209 233 ", "211 183 227 123 234 239 97 210 208 210 173 168 223", " 179 68 238 73 73 236 57 157 185 171 231 209 230 1", "26 228 107 69 235 125 224 238 207 231 125 84 233 1", "80 135 164 100 210 224 152 210 232 138 236 155 143", " 124 237 235 202 226 188 179 114"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 195707;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 243;
    vector<string> L = {"79 197 54 144 69 23 68 242 205 184 5 97 168 201 6", " 23 42 78 104 219 240 38 178 90 92 199 122 67 59 5", "4 119 196 176 124 228 97 53 158 20 48 216 25 8 126", " 29 231 162 197 113 44 33 3 6 23 32 75 88 5 14 154", " 85 178 167 116 130 87 241 199 233 144 49 55 130 1", "30 83 124 82 123 173 92 115 136 23 12 93 156 172 1", "83 182 142 27 137 70 86 150 3 48 70 223 99 3 52 24", "1 200 13 164 112 37 212 170 235 187 60 189 80 141 ", "171 10 96 143 143 187 236 59 37 178 54 38 62 0 87 ", "6 128 49 144 189 42 102 152 70 187 31 40 63 168 22", "4 51 0 9 226 39 66 42 29 226 104 83 228 154 116 20", "7 240 134 207 203 163 106 235 150 233 79 206 37 20", "0 111 114 21 217 242 132 91 96 134 207 135 119 194", " 115 18 115 165 97 69 139 218 105 239 44 195 91 15", "8 202 198 210 178 70 239 94 150 107 85 76 47 241 5", "0 4 18 21 104 90 227 81 104 58 126 225 113 169 63 ", "190 83 34 142 226 165 131 83 124 91 98 223 43 215"};
    vector<string> R = {"81 230 105 220 78 91 201 242 228 217 20 150 228 2", "10 149 60 48 213 211 220 241 88 216 117 205 204 18", "9 152 218 189 206 198 234 228 241 98 74 219 32 168", " 225 99 98 144 115 240 191 229 219 63 217 199 136 ", "160 96 226 140 194 55 208 177 220 184 202 203 134 ", "241 240 242 145 197 152 183 133 148 158 91 175 229", " 149 150 217 83 27 141 160 200 199 187 200 176 226", " 213 172 236 20 193 127 230 117 115 78 241 220 67 ", "179 172 119 225 227 238 199 143 230 220 223 202 91", " 168 183 145 203 241 73 94 237 236 57 170 88 231 3", "1 241 68 239 189 77 206 204 196 209 133 129 157 23", "5 238 185 56 91 226 242 204 218 193 240 238 122 24", "0 171 120 225 240 216 234 213 185 202 235 231 235 ", "131 221 223 213 218 129 104 226 242 240 128 199 22", "7 223 220 133 218 139 123 124 165 220 151 233 237 ", "182 239 185 239 160 220 209 221 233 222 166 242 19", "1 216 163 236 146 204 241 119 109 50 27 203 199 24", "0 195 107 142 220 242 184 232 116 208 118 222 224 ", "230 173 176 92 149 225 230 233 110 226"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1504240;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 246;
    vector<string> L = {"80 240 191 101 24 223 125 61 189 97 4 176 54 180 ", "28 133 244 177 12 147 138 80 134 81 57 118 1 75 85", " 147 154 168 131 183 83 151 32 140 184 195 4 87 13", "7 167 128 208 29 34 33 180 24 137 39 221 98 138 13", "0 202 207 1 123 186 59 206 210 145 203 237 213 118", " 62 61 44 162 140 69 73 9 216 139 101 123 152 39 1", "66 243 163 16 62 190 167 198 159 134 108 242 51 52", " 243 204 200 115 231 234 23 158 66 210 178 73 76 2", "23 153 146 226 208 34 112 1 239 122 241 196 163 26", " 167 158 200 133 106 49 85 65 78 58 235 92 162 124", " 151 1 233 84 148 31 117 235 19 214 216 152 95 162", " 217 29 172 181 237 75 155 213 183 122 233 79 69 2", "4 134 114 149 194 52 106 42 232 234 209 14 85 217 ", "127 22 58 223 118 54 63 176 2 206 228 212 71 207 1", "46 217 233 158 14 188 159 113 81 60 96 134 43 159 ", "80 46 103 90 23 169 46 38 13 145 130 183 244 223 2", "8 148 10 34 230 184 239 53 58 235 24 199 17 196 10", "1 142 46 76 183 56 58 64 3 144"};
    vector<string> R = {"238 245 231 232 211 230 130 127 195 152 17 244 62", " 186 175 133 244 189 89 171 193 170 213 219 233 20", "9 76 149 91 149 183 224 162 236 205 226 95 194 236", " 196 202 188 154 198 165 242 222 96 125 222 96 180", " 241 233 166 149 220 224 214 150 229 234 183 228 2", "33 169 226 245 217 174 154 219 130 236 244 149 210", " 144 221 193 148 218 221 174 236 243 208 186 193 2", "01 231 200 173 204 116 243 92 185 245 242 234 142 ", "243 237 235 214 202 236 183 233 100 235 200 215 22", "6 221 236 146 84 244 130 242 244 221 236 179 230 2", "23 161 119 116 129 209 85 156 244 111 208 146 244 ", "38 235 192 218 234 156 235 230 226 220 227 111 166", " 239 158 214 230 244 116 184 228 220 152 242 170 8", "3 170 242 202 164 235 231 197 173 235 243 214 40 1", "05 239 135 63 213 236 243 228 83 215 216 223 242 2", "35 113 216 179 239 234 171 194 225 211 198 108 67 ", "119 189 73 207 160 241 193 237 230 210 137 132 152", " 146 201 192 245 229 128 180 10 216 243 213 244 16", "5 105 239 126 229 72 212 164 203 226 192 211 225 6", "2 240 42 177"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2250658;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 249;
    vector<string> L = {"102 80 220 236 1 141 105 115 146 35 126 76 178 10", " 34 221 99 71 224 94 175 245 46 56 68 6 235 138 15", "7 112 26 135 122 171 224 44 129 60 177 4 54 120 63", " 202 227 165 31 41 239 71 21 142 180 113 150 111 2", "25 217 120 24 57 122 166 170 171 40 122 146 178 16", "2 247 209 18 225 19 108 77 116 148 169 9 90 164 24", "6 110 236 197 177 184 109 161 219 122 41 118 7 242", " 198 134 112 21 6 34 123 107 114 4 204 136 196 51 ", "183 114 90 159 242 4 202 33 134 170 94 122 132 183", " 247 206 12 14 85 110 138 242 114 199 86 202 130 9", "8 244 33 241 161 208 205 16 18 32 124 132 76 9 222", " 230 214 211 43 191 142 43 105 190 42 177 158 117 ", "109 29 6 79 210 212 121 222 172 54 127 185 20 213 ", "213 70 77 107 205 106 106 72 235 25 34 79 88 191 6", "4 74 63 126 86 102 44 113 84 204 242 128 46 93 177", " 170 223 221 247 105 124 142 63 218 182 133 32 232", " 142 110 240 86 216 193 243 123 175 58 183 111 57 ", "59 227 100 29 149 119 179 215 203 199 18 153 127 8", "1"};
    vector<string> R = {"133 136 230 239 52 172 111 191 148 211 173 222 23", "7 80 84 246 182 218 240 99 220 245 207 108 135 128", " 248 225 180 199 144 165 168 243 240 122 161 81 19", "3 92 115 149 177 242 236 232 224 203 244 198 178 2", "17 232 209 178 119 228 242 188 90 247 221 220 212 ", "185 217 150 209 230 224 248 224 135 247 184 205 11", "4 185 161 215 198 165 205 246 166 242 199 215 239 ", "181 231 235 241 48 154 132 243 215 160 153 109 247", " 173 215 164 182 213 248 172 231 178 206 209 110 2", "17 243 178 217 150 140 191 201 193 237 189 248 230", " 147 192 103 213 223 242 161 218 204 235 167 183 2", "44 228 248 216 228 205 19 188 198 202 203 225 140 ", "244 231 219 242 51 204 181 215 211 196 229 183 181", " 189 187 166 87 156 212 238 160 230 185 166 237 22", "3 144 246 217 231 248 151 237 112 209 175 238 156 ", "145 80 149 206 110 226 202 177 245 168 172 175 171", " 242 244 231 131 111 205 191 233 229 248 215 141 2", "26 122 225 218 138 81 239 152 126 242 138 248 193 ", "246 213 232 199 229 125 127 156 244 158 237 184 18", "8 182 230 211 236 149 241 166 132"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 613644;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 252;
    vector<string> L = {"115 50 0 204 18 140 14 60 76 204 63 236 90 145 13", "7 130 67 70 244 161 62 159 128 184 190 129 157 44 ", "152 207 251 142 13 43 98 20 185 114 191 14 197 145", " 243 76 140 243 194 192 212 170 233 129 105 18 144", " 79 76 139 53 14 47 181 2 231 196 240 50 19 18 85 ", "196 56 203 90 219 75 155 214 84 33 158 20 147 244 ", "118 250 163 1 5 232 237 115 84 102 78 196 137 207 ", "65 5 172 3 123 126 199 24 29 57 165 47 52 192 25 1", "67 130 131 174 51 129 140 58 207 40 123 104 118 24", "2 7 136 21 71 62 46 13 239 162 25 129 155 129 232 ", "244 107 73 78 27 236 206 162 203 100 185 116 185 1", "81 100 46 15 213 14 203 19 91 57 174 210 111 108 1", "41 29 142 186 82 63 155 218 103 170 57 169 165 53 ", "128 84 245 119 133 150 82 225 57 201 187 56 136 15", "3 101 143 247 172 251 66 242 167 241 42 136 54 47 ", "53 114 19 101 45 141 55 73 48 20 176 249 73 63 194", " 164 15 77 61 21 81 220 79 193 43 40 63 162 247 15", "7 164 147 47 232 61 100 215 82 89 184 108 242 137"};
    vector<string> R = {"179 99 126 207 63 221 88 220 178 214 158 250 227 ", "217 179 216 99 160 247 183 142 251 131 234 218 244", " 203 161 173 241 251 151 125 67 158 130 242 230 22", "9 87 235 185 245 164 214 245 209 198 222 223 250 2", "23 224 200 164 91 118 187 103 243 241 185 76 231 2", "31 244 76 53 170 249 240 115 226 141 241 228 180 2", "32 131 240 208 169 224 244 200 251 245 121 50 235 ", "246 164 109 187 91 231 233 229 224 23 242 23 250 2", "50 231 187 216 179 229 139 228 201 143 220 204 220", " 239 217 152 153 225 222 164 240 119 200 243 26 15", "9 119 112 211 191 182 247 191 140 168 237 225 251 ", "245 250 219 231 121 240 231 184 243 189 228 177 20", "7 229 214 202 109 224 67 246 226 125 181 244 226 1", "34 172 146 81 238 250 168 182 226 233 133 231 85 2", "34 172 172 140 157 248 124 235 186 176 232 187 203", " 243 191 235 164 205 239 251 239 251 102 250 234 2", "42 71 166 114 210 163 126 125 243 117 244 237 189 ", "68 77 233 249 78 66 244 226 247 88 77 123 157 236 ", "198 232 220 98 68 228 249 202 217 192 101 236 175 ", "170 249 124 230 222 143 250 230"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2161715;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 255;
    vector<string> L = {"76 51 125 23 63 65 38 56 163 16 57 90 71 245 98 1", "83 114 26 121 27 60 187 174 165 140 198 35 213 240", " 36 105 58 229 66 124 130 58 167 21 227 156 174 12", "5 246 141 173 67 141 58 33 112 42 4 169 22 8 171 2", "39 112 234 108 185 214 34 124 199 65 118 195 76 43", " 233 186 5 251 128 181 84 95 141 38 221 25 27 137 ", "131 78 118 10 205 81 13 18 15 92 250 85 211 216 19", " 14 120 16 68 110 235 112 134 139 234 190 217 60 9", "5 213 233 182 145 219 90 229 87 5 232 178 132 82 2", "10 213 52 216 53 218 183 136 75 105 59 130 211 7 1", "18 108 242 222 250 88 85 70 227 37 124 2 11 127 10", "8 146 7 213 30 5 135 240 121 254 224 1 187 31 218 ", "82 122 216 11 250 190 92 84 42 222 74 90 252 14 42", " 250 237 205 240 19 81 183 23 57 106 78 238 31 19 ", "190 87 200 253 217 241 209 11 147 115 101 56 220 1", "85 173 38 177 189 207 67 151 145 193 0 240 245 148", " 180 238 67 249 13 241 171 28 45 165 10 17 216 59 ", "217 136 87 119 243 119 222 129 55 213 186 169 65 2", "02 125"};
    vector<string> R = {"124 87 148 178 129 165 120 74 211 42 127 112 241 ", "245 250 252 156 161 236 228 91 192 236 217 159 207", " 249 238 248 150 197 168 239 108 248 171 231 169 2", "04 245 161 254 219 251 226 183 236 217 134 59 145 ", "88 22 187 172 98 190 239 195 242 177 227 243 129 2", "13 252 229 249 215 135 139 243 233 146 254 242 190", " 112 241 173 50 235 148 150 148 164 158 227 65 207", " 228 169 107 29 216 252 179 242 253 48 136 227 149", " 229 169 253 237 234 164 240 225 226 185 168 239 2", "52 238 190 224 235 254 162 169 236 211 212 161 213", " 240 191 240 89 240 219 140 229 146 65 144 218 38 ", "250 225 251 239 251 91 213 73 247 217 130 59 148 2", "26 191 215 155 226 107 148 157 243 189 254 242 94 ", "228 84 223 146 133 241 67 254 227 235 240 198 230 ", "244 164 253 130 164 250 248 225 248 220 169 203 15", "3 242 117 228 253 145 107 230 240 248 253 231 243 ", "210 55 154 189 152 60 238 225 197 64 203 197 213 9", "0 209 179 218 153 249 249 182 186 246 94 250 252 2", "41 200 192 46 240 77 130 241 221 242 143 114 242 2", "51 216 248 139 116 214 208 210 252 231 173"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1268310;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 258;
    vector<string> L = {"148 200 198 238 120 69 94 128 110 23 21 149 241 4", "2 57 193 1 199 128 208 188 73 53 105 25 181 257 10", "2 73 102 147 71 235 117 227 100 228 111 159 189 21", "0 124 29 128 47 47 227 193 183 122 121 221 153 132", " 88 139 155 122 243 175 33 123 45 70 204 55 245 42", " 26 252 138 101 68 39 214 90 72 90 224 14 184 196 ", "26 65 242 112 72 35 185 131 9 227 81 163 107 89 16", "1 24 1 147 250 106 100 245 137 97 24 54 149 209 61", " 150 251 141 138 200 157 99 109 168 194 3 101 187 ", "113 42 221 218 110 131 17 191 87 9 251 62 249 238 ", "9 87 237 39 82 129 17 96 115 202 116 198 52 177 16", "0 245 237 228 152 19 219 37 216 194 54 36 14 125 1", "61 0 146 152 23 182 172 241 195 196 57 240 16 187 ", "85 152 32 130 233 150 86 134 105 155 149 41 46 144", " 151 24 5 69 67 103 2 187 5 137 189 52 132 162 88 ", "158 54 178 47 254 200 143 226 253 52 204 24 194 15", " 227 117 156 113 83 53 72 104 145 171 200 245 208 ", "158 12 239 53 13 6 83 236 9 194 225 6 135 152 249 ", "106 116 210 52 235 104 15"};
    vector<string> R = {"183 209 241 249 220 257 229 131 252 219 45 178 24", "7 188 80 194 59 238 234 220 209 207 83 124 196 234", " 257 155 153 219 168 180 246 249 250 122 254 250 1", "79 257 241 210 214 246 138 241 234 214 234 234 215", " 257 199 148 149 229 171 221 243 181 229 193 55 21", "1 208 197 252 98 219 256 252 232 242 226 224 217 1", "21 122 227 194 252 207 128 143 243 206 201 72 210 ", "201 117 227 190 229 112 246 253 30 24 174 251 228 ", "146 254 169 112 173 176 163 213 128 192 252 177 23", "3 242 207 228 159 208 241 193 240 252 144 45 238 2", "38 139 243 114 253 162 193 254 249 251 245 120 253", " 250 127 95 145 220 104 214 209 175 246 184 186 19", "9 246 241 251 169 86 236 250 232 223 239 140 157 1", "78 254 116 254 231 148 252 177 256 215 212 66 245 ", "162 221 200 179 116 243 243 212 245 189 143 173 25", "2 188 250 242 224 59 20 73 238 231 202 208 129 238", " 221 83 161 203 194 251 213 187 92 257 257 190 229", " 256 107 229 203 195 93 248 165 257 222 106 94 246", " 133 149 187 243 257 214 177 57 245 109 27 76 182 ", "252 150 239 256 41 180 235 255 239 236 238 141 246", " 161 74"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1880008;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 261;
    vector<string> L = {"43 123 181 91 57 29 169 207 105 221 111 27 193 25", "6 185 138 130 88 7 229 75 92 154 188 256 42 236 23", "9 217 1 137 27 81 170 184 200 141 181 218 259 84 2", "07 241 30 29 89 120 199 133 30 121 23 21 202 157 2", "9 143 114 145 141 186 148 27 126 166 248 163 212 2", "39 132 238 70 30 42 143 114 175 31 63 51 221 42 21", "6 91 137 220 234 116 242 199 49 15 154 61 66 1 32 ", "258 12 74 159 219 98 190 173 98 114 153 140 29 218", " 163 195 176 215 111 39 249 171 231 102 88 80 67 5", "5 92 243 26 5 111 205 10 173 155 157 57 100 77 126", " 198 90 160 235 193 59 174 103 103 198 236 246 159", " 64 146 49 230 95 143 257 89 225 134 244 135 238 2", "16 221 227 61 191 87 99 77 250 256 164 26 133 202 ", "51 125 103 189 85 226 144 228 41 238 63 47 253 133", " 160 227 70 3 71 77 162 197 2 117 160 43 10 147 85", " 8 114 131 33 201 149 236 215 187 184 63 84 212 47", " 59 116 48 191 76 129 129 228 23 192 27 122 32 236", " 92 219 22 86 144 29 117 111 121 145 96 129 104 53", " 3 44 41 254 211 246 127 13 70 151 199"};
    vector<string> R = {"115 156 218 152 239 73 242 220 217 226 113 122 25", "7 257 248 164 214 260 259 231 78 95 243 215 256 25", "4 254 257 260 205 198 105 107 240 243 208 198 204 ", "247 259 143 249 249 102 85 203 218 246 177 144 236", " 65 121 221 189 87 172 122 145 231 249 183 50 136 ", "233 251 230 241 241 143 252 130 47 147 257 156 238", " 228 256 253 258 128 249 166 170 238 259 124 251 2", "16 255 28 174 179 213 40 162 258 212 122 246 252 1", "78 236 206 232 186 192 198 170 253 221 250 200 216", " 176 215 256 219 236 226 158 233 74 253 213 252 23", "5 172 247 259 169 187 246 196 98 115 150 181 200 1", "44 218 247 259 59 254 251 195 235 256 258 210 167 ", "209 65 240 100 158 257 99 242 179 254 139 258 254 ", "260 235 214 230 90 105 115 252 259 239 56 142 251 ", "55 254 148 253 111 259 260 248 199 250 148 192 258", " 196 238 256 134 211 99 246 181 255 65 226 168 153", " 113 236 214 251 143 207 102 207 223 238 229 221 2", "59 108 227 215 69 83 206 114 231 103 228 221 250 2", "29 224 97 216 147 253 129 238 40 177 209 105 235 1", "48 195 205 228 129 228 150 185 250 69 256 227 257 ", "129 31 96 218 247"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 332474;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 264;
    vector<string> L = {"84 91 97 19 4 135 135 238 258 262 40 24 32 231 19", "8 214 261 261 228 176 146 206 146 54 164 164 246 1", "15 123 65 162 41 150 56 13 37 170 175 8 142 58 196", " 218 5 142 115 198 129 142 179 34 124 32 15 250 10", "5 13 108 174 132 26 25 243 251 104 231 70 128 256 ", "147 249 184 6 227 122 175 115 57 151 171 119 110 1", "79 257 174 80 253 112 166 257 188 168 226 36 161 1", "13 237 161 251 6 202 36 32 146 18 250 200 93 112 2", "06 107 246 20 71 166 161 220 250 230 55 190 62 143", " 78 248 45 22 228 13 208 11 118 127 85 100 15 206 ", "193 143 116 47 47 2 138 102 116 97 22 202 110 44 2", "58 54 61 261 129 100 137 153 156 58 248 262 64 208", " 19 1 255 230 24 80 89 256 0 61 43 140 73 17 110 1", "46 50 15 73 2 48 215 209 151 9 187 6 187 200 87 19", "1 25 100 72 228 227 20 188 143 55 101 150 49 91 87", " 56 260 215 212 5 263 166 130 65 101 215 41 256 17", "7 74 38 40 21 27 87 262 55 163 254 46 179 252 18 1", "77 144 238 96 43 142 54 236 88 110 180 211 128 22 ", "217 245 78 52 182 61 181 101 82 33 10 93"};
    vector<string> R = {"241 259 123 80 65 242 256 246 262 262 137 169 215", " 237 242 224 261 261 259 208 255 219 256 103 250 2", "61 252 181 166 113 181 238 176 77 233 238 186 204 ", "81 261 126 204 229 177 142 209 210 257 223 199 253", " 205 58 165 261 153 157 248 184 194 213 218 251 26", "1 148 233 171 187 259 243 253 256 64 259 259 217 1", "56 205 151 226 142 262 217 257 249 178 259 248 211", " 259 247 193 236 129 228 206 243 162 251 138 230 2", "04 141 215 183 256 238 130 195 256 213 253 41 216 ", "217 162 255 263 236 158 214 166 148 187 258 78 170", " 255 235 239 92 174 241 138 261 161 216 203 256 23", "6 92 195 242 167 225 255 113 105 219 139 51 262 18", "0 115 261 140 177 254 260 220 113 251 263 118 222 ", "231 134 262 239 37 149 122 262 45 129 239 163 157 ", "163 127 149 147 254 78 18 260 230 239 158 186 204 ", "123 227 237 112 235 69 131 256 257 234 45 237 214 ", "83 113 180 128 234 246 208 262 260 259 247 263 231", " 207 116 138 217 221 259 181 200 185 179 104 188 2", "13 262 74 247 258 182 246 256 53 222 163 249 261 1", "16 170 241 237 239 133 209 253 155 33 229 249 116 ", "206 209 82 195 135 112 224 95 139"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1076782;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 279;
    vector<string> L = {"47 11 153 32 257 162 109 195 268 260 130 62 166 1", "40 221 135 124 157 141 126 77 277 259 154 2 30 6 9", "6 263 199 126 210 130 179 155 89 196 103 244 36 25", "2 143 40 109 155 82 234 240 133 70 191 143 108 226", " 205 51 201 139 258 35 188 244 51 184 215 139 150 ", "95 111 140 228 110 34 165 223 78 204 138 274 180 8", "9 76 98 24 244 259 200 100 35 75 163 27 191 265 17", "2 25 190 43 29 188 133 96 14 240 31 2 219 50 162 1", "09 54 113 36 163 267 176 29 139 124 97 26 155 38 1", "44 113 42 186 215 14 69 256 70 233 167 217 196 67 ", "128 113 229 39 241 55 5 162 211 216 16 40 148 180 ", "66 176 240 120 25 30 222 213 209 141 148 69 130 96", " 93 32 262 80 143 120 114 152 121 5 200 110 274 12", "3 209 85 256 198 272 119 20 154 5 119 98 111 124 2", "76 251 135 57 108 8 175 126 274 178 181 179 157 76", " 139 30 239 34 134 168 185 133 69 111 104 142 101 ", "5 252 127 184 186 78 122 187 244 103 165 236 10 14", "5 69 108 210 38 69 236 62 106 205 236 14 166 269 1", "67 73 31 260 10 98 141 267 208 184 150 120 11 125 ", "73 110 224 116 32 200 10 152 251 262 41 144 1 28 1", "21 29 86 34 105"};
    vector<string> R = {"158 201 188 40 277 216 136 256 276 261 167 159 25", "7 193 237 254 206 237 186 267 112 277 271 271 130 ", "241 71 206 268 235 138 230 180 252 264 127 243 221", " 258 93 263 207 60 170 206 245 254 265 266 274 239", " 173 189 227 270 252 212 164 270 269 190 278 67 26", "7 263 224 166 180 273 261 246 233 180 228 246 278 ", "262 144 275 217 227 181 104 37 268 262 254 253 50 ", "123 236 49 274 271 275 179 202 48 262 239 153 129 ", "259 254 149 202 247 230 252 120 239 133 72 265 274", " 183 266 201 165 202 249 227 132 245 118 48 187 26", "5 113 183 262 159 265 194 236 219 104 248 155 236 ", "239 261 104 75 250 256 257 224 232 158 226 149 188", " 255 275 112 195 245 231 256 232 266 264 196 218 1", "92 213 275 189 191 153 245 243 121 23 256 159 278 ", "205 266 113 263 245 275 265 205 205 63 187 183 193", " 237 276 259 171 227 145 184 199 262 278 276 190 2", "78 193 111 267 104 258 242 237 183 270 235 88 170 ", "246 243 168 249 277 186 251 269 137 216 275 263 18", "6 228 255 65 159 186 233 271 121 119 240 265 244 2", "14 253 124 262 271 219 226 170 262 17 171 216 277 ", "224 271 215 242 268 166 135 261 244 210 205 244 22", "3 242 259 263 167 274 59 72 182 94 159 202 267"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1861026;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 282;
    vector<string> L = {"77 156 167 162 242 48 266 147 33 231 115 154 135 ", "40 85 163 82 144 121 168 116 203 197 257 264 264 7", "1 180 106 103 199 0 33 115 71 100 281 92 216 7 65 ", "176 50 112 40 199 201 228 97 146 222 56 106 63 181", " 169 260 27 7 242 29 65 144 61 140 205 63 181 242 ", "121 23 4 201 118 239 162 72 228 164 65 84 157 75 1", "80 31 92 201 42 130 178 18 13 57 223 115 179 45 11", "9 111 40 61 138 246 140 231 45 243 107 94 281 126 ", "61 264 47 120 255 279 216 198 145 28 127 244 65 78", " 250 103 74 261 227 74 146 152 171 139 70 112 239 ", "8 270 165 12 134 81 35 157 269 203 27 180 79 52 27", "8 214 228 15 188 239 140 9 204 31 272 262 12 142 1", "93 103 257 9 158 231 276 130 136 189 242 38 197 16", " 76 261 5 207 254 168 54 82 131 4 22 94 174 12 87 ", "155 198 15 173 218 131 102 25 112 69 18 272 227 81", " 6 195 193 38 6 122 96 80 99 72 113 156 82 167 154", " 240 81 227 34 82 227 255 221 237 29 203 156 261 1", "31 38 252 209 170 51 195 36 76 6 88 77 85 59 11 18", "1 182 208 161 241 16 199 130 117 148 190 169 149 1", "92 11 34 114 178 269 116 218 15 187 4 150 139 76 1", "79 204 44"};
    vector<string> R = {"133 263 190 251 264 103 277 184 170 234 116 160 2", "80 59 139 182 119 196 172 232 137 209 258 268 271 ", "264 276 252 196 154 204 77 170 141 147 268 281 149", " 252 235 267 211 70 240 197 237 242 277 257 197 23", "9 226 194 245 214 200 267 175 57 264 161 186 233 1", "92 206 240 116 258 261 149 205 110 264 224 267 175", " 143 239 276 160 162 204 154 206 70 225 261 109 28", "1 195 145 278 156 231 179 190 163 130 122 57 115 1", "66 251 244 268 69 261 179 203 281 240 72 277 106 1", "51 280 281 260 254 209 72 228 274 224 176 273 133 ", "266 281 247 256 277 171 215 261 234 217 253 214 27", "0 236 223 144 149 154 266 272 235 66 208 271 125 2", "80 239 264 277 209 262 154 230 233 196 280 276 28 ", "184 202 149 274 96 202 237 279 208 212 278 274 249", " 245 241 189 270 236 248 275 268 149 109 263 39 22", "6 281 239 240 208 233 223 193 251 254 276 119 64 2", "04 120 268 275 249 100 118 228 255 254 70 172 270 ", "86 224 174 217 228 101 237 274 250 143 251 161 269", " 242 265 255 258 188 224 219 269 270 176 276 210 1", "71 281 241 176 204 100 99 96 103 226 184 245 277 2", "09 176 278 187 245 256 123 252 275 198 228 238 111", " 132 133 182 276 227 274 91 257 228 238 183 109 18", "9 257 276"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 911786;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 285;
    vector<string> L = {"80 169 83 191 140 101 85 175 5 3 154 208 158 244 ", "218 60 46 124 265 117 45 190 51 245 264 279 143 14", "9 203 139 70 159 208 208 270 28 30 125 34 230 155 ", "103 7 59 206 47 158 5 215 244 185 14 81 87 9 104 1", "5 233 29 211 268 224 70 186 253 255 275 94 48 131 ", "153 173 264 221 43 156 270 178 198 50 20 89 182 21", "1 206 244 204 82 138 63 98 167 185 200 268 166 53 ", "250 187 280 177 205 31 176 187 211 44 195 173 105 ", "237 13 279 237 269 42 206 74 275 76 8 240 55 32 18", "6 58 113 14 55 92 87 114 225 193 212 181 33 136 73", " 120 204 25 133 226 284 17 172 267 127 111 249 107", " 257 244 181 146 266 167 159 235 180 74 59 57 118 ", "147 211 44 175 137 198 275 279 158 0 265 92 228 19", "2 89 277 174 270 192 216 133 193 180 189 284 83 81", " 123 186 197 227 196 185 232 263 116 16 217 128 22", "5 50 215 239 247 157 77 151 103 78 35 204 205 129 ", "111 150 67 278 112 272 210 259 49 268 80 74 38 127", " 209 240 234 135 85 144 6 87 77 5 172 130 189 78 2", "31 29 115 200 269 278 84 277 183 6 273 122 44 67 1", "09 238 99 154 245 98 100 180 116 222 21 17 275 189", " 283 23 270 164 258 0 274 206 181 6 220"};
    vector<string> R = {"232 283 260 269 257 251 168 222 141 74 284 236 22", "9 272 233 245 270 219 271 191 108 259 260 275 271 ", "282 171 215 249 232 232 225 283 269 283 116 124 26", "3 79 233 189 193 218 205 223 203 180 237 255 252 2", "40 176 100 215 140 209 87 258 128 255 270 248 234 ", "192 259 265 277 144 55 203 209 223 279 229 83 204 ", "282 233 231 245 85 256 269 217 263 279 243 167 258", " 109 281 184 257 204 284 262 206 278 275 282 207 2", "84 154 272 274 233 86 217 223 280 247 260 282 260 ", "274 131 215 144 280 103 179 264 167 153 221 62 228", " 188 163 117 171 171 230 255 218 263 34 225 113 23", "3 273 237 253 268 284 62 204 277 255 168 259 215 2", "79 245 234 222 282 189 230 281 262 207 109 101 149", " 219 257 155 183 247 225 281 282 254 46 270 270 27", "1 248 148 279 197 280 242 233 255 283 253 195 284 ", "274 140 147 281 276 253 222 281 256 283 123 133 26", "0 173 230 92 262 271 248 266 273 198 116 124 124 2", "19 284 179 193 213 273 278 117 276 265 279 168 280", " 178 227 77 223 211 244 260 276 185 275 79 105 221", " 119 178 216 219 130 266 77 181 215 276 280 90 277", " 207 142 281 220 240 174 176 264 254 190 273 228 2", "59 256 189 227 191 60 275 249 283 162 281 241 263 ", "83 278 274 242 147 263"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7038686;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 288;
    vector<string> L = {"258 237 252 227 34 83 196 205 201 179 248 23 135 ", "279 13 239 131 60 84 49 69 263 13 101 211 243 194 ", "33 56 263 142 264 181 216 186 71 271 108 60 166 15", "1 190 120 225 14 137 256 31 210 223 54 274 85 5 55", " 29 127 178 6 46 144 123 158 92 164 90 207 200 126", " 124 57 251 257 216 37 131 111 249 268 186 23 59 1", "36 69 213 49 22 154 13 234 31 11 67 9 57 276 47 14", "3 80 254 72 196 4 43 234 226 96 210 222 107 16 214", " 230 13 267 247 100 140 146 45 26 181 197 95 218 2", "43 239 61 121 119 241 281 194 181 158 175 70 82 95", " 117 3 143 230 180 148 285 266 162 87 101 24 183 2", "41 267 211 90 208 76 219 260 135 100 220 167 48 15", " 210 46 182 131 264 141 283 11 253 135 207 261 277", " 20 210 131 206 251 233 73 285 282 173 287 215 96 ", "19 221 235 224 259 17 23 128 131 55 260 64 39 38 2", "10 129 92 252 55 26 62 238 44 1 88 250 137 21 61 2", "8 152 85 40 106 194 47 77 32 65 247 210 36 188 30 ", "15 75 7 214 44 63 275 102 103 249 154 129 275 225 ", "10 33 78 2 101 37 91 29 135 248 126 15 127 170 162", " 187 180 269 272 90 64 173 150 151 87 186 80 105 2", "59 267 64 225 248 127 257 161 146 209"};
    vector<string> R = {"276 260 280 245 167 211 283 248 208 221 275 151 2", "06 282 121 262 251 216 115 219 228 281 146 156 281", " 243 213 49 195 263 251 270 278 240 247 168 271 11", "0 232 237 215 267 185 279 218 146 260 145 278 265 ", "185 285 220 230 278 276 230 271 93 142 147 230 170", " 221 193 202 245 261 250 229 241 275 266 243 177 2", "37 238 249 273 254 264 167 273 164 286 88 195 213 ", "50 258 159 28 80 121 214 278 278 165 264 278 147 1", "98 7 188 255 233 238 241 237 148 71 233 272 27 278", " 284 198 179 170 118 103 270 279 179 264 266 263 1", "39 147 239 287 284 203 268 175 197 157 274 215 187", " 156 226 287 222 197 286 275 285 148 156 242 204 2", "57 279 268 281 255 257 231 276 204 236 253 249 257", " 35 248 187 265 272 284 180 283 60 261 227 264 276", " 286 70 226 212 239 260 268 111 285 284 198 287 27", "3 100 235 278 251 272 281 171 232 193 212 199 281 ", "66 139 208 283 137 181 275 161 54 245 264 282 76 1", "77 254 193 57 125 81 236 180 101 144 238 151 92 46", " 260 254 275 144 214 138 189 188 41 274 221 131 28", "2 220 129 269 237 286 284 251 242 142 221 126 272 ", "243 232 187 256 282 250 161 213 233 174 261 227 27", "5 281 140 221 190 279 216 157 212 183 226 267 277 ", "252 268 272 243 265 269 247 232"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7431250;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 291;
    vector<string> L = {"133 59 91 168 255 41 48 192 196 279 257 247 65 17", "1 22 97 210 199 157 245 47 163 213 147 279 134 9 6", "8 41 9 249 172 53 66 243 176 256 24 161 272 268 18", " 186 95 290 248 54 110 169 268 220 269 230 41 141 ", "180 269 77 8 157 166 52 107 247 118 23 206 257 27 ", "19 289 50 247 242 230 72 182 102 152 90 287 242 99", " 9 22 85 33 30 94 146 83 93 210 73 187 83 252 12 5", "3 2 19 227 187 13 60 8 126 265 70 246 276 256 120 ", "116 155 138 168 210 176 65 95 113 207 138 203 8 13", "1 108 193 237 178 77 221 134 278 51 138 95 122 20 ", "81 189 225 14 133 11 275 229 14 203 151 209 180 22", " 62 252 190 251 74 90 226 156 0 198 29 266 63 50 1", "19 106 249 278 3 191 75 3 107 181 26 212 279 22 14", "6 238 265 198 70 104 104 202 219 16 176 239 148 6 ", "142 161 23 186 167 218 193 93 22 106 46 68 170 148", " 269 101 9 95 243 80 142 91 93 245 207 28 117 98 1", "46 229 4 250 100 121 23 71 249 31 28 134 5 268 76 ", "140 74 171 106 285 223 167 278 119 213 36 165 81 7", "9 85 275 208 88 25 178 166 186 63 54 206 2 32 79 7", "4 234 42 265 249 226 85 241 91 287 180 288 35 189 ", "91 67 210 233 59 279 171 246 276 50"};
    vector<string> R = {"260 267 241 286 276 183 118 241 241 282 274 284 1", "47 259 95 252 254 266 230 262 89 192 249 201 285 2", "24 241 271 187 152 274 257 182 110 252 251 278 165", " 176 287 286 117 243 239 290 269 259 158 275 281 2", "28 280 248 290 158 184 278 278 118 243 255 229 198", " 283 152 77 219 263 92 263 289 76 263 253 242 201 ", "196 109 253 107 290 276 119 205 175 184 109 34 104", " 173 231 203 210 172 231 193 253 141 206 110 207 2", "62 210 117 194 93 217 269 76 290 277 259 241 175 2", "11 234 176 228 183 114 199 208 247 231 278 122 184", " 144 204 272 223 273 223 136 278 65 275 173 271 20", "9 101 240 231 231 138 138 284 232 18 210 174 227 2", "15 100 176 264 246 269 250 277 230 277 204 259 257", " 285 173 153 208 128 267 279 239 242 130 132 151 1", "89 166 289 285 154 277 268 266 210 156 125 288 283", " 285 253 274 288 163 255 160 236 251 276 191 222 2", "11 146 209 107 183 201 235 230 278 108 187 246 283", " 89 182 174 182 267 243 223 287 180 233 265 85 272", " 254 227 158 88 249 64 202 205 11 274 97 165 211 2", "84 178 288 259 214 286 273 235 138 212 171 164 273", " 279 260 153 252 264 252 274 278 243 247 39 238 22", "9 166 272 104 287 283 261 97 256 175 290 204 290 9", "2 277 210 87 257 253 203 290 216 279 280 223"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1074413;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 294;
    vector<string> L = {"115 124 105 93 257 53 146 207 53 107 163 158 238 ", "95 188 226 115 102 289 84 274 122 52 66 99 231 135", " 106 68 154 56 252 131 102 287 260 208 132 37 247 ", "108 36 121 57 60 111 79 55 193 261 271 277 7 261 3", "9 193 136 285 134 283 246 234 79 192 222 63 283 92", " 103 101 290 172 178 155 219 22 93 78 133 56 291 1", "61 139 102 76 47 220 106 180 261 106 292 156 215 8", "8 268 88 145 1 171 42 115 70 243 117 172 109 20 26", "0 201 45 147 212 209 139 206 60 19 231 125 154 115", " 46 183 122 158 26 253 9 252 177 218 191 186 71 29", "0 286 111 280 80 38 67 11 0 199 214 178 160 54 215", " 63 213 54 57 199 149 175 25 50 49 267 210 36 136 ", "207 46 173 156 97 183 293 154 234 274 150 74 61 13", "3 122 90 86 30 76 135 252 112 186 90 63 133 243 12", "6 273 219 236 163 125 189 41 151 77 49 270 278 53 ", "234 219 12 64 223 103 239 129 138 122 196 36 281 1", "85 67 139 130 40 218 48 124 237 149 76 259 12 32 1", "14 162 11 135 46 92 214 264 58 30 233 248 107 1 14", "5 230 265 111 67 161 199 37 291 63 227 159 70 3 2 ", "89 227 39 55 154 191 97 62 2 78 187 74 5 22 187 20", "1 85 190 41 144 19 278 44 75 105 38 144 19 226 52 ", "145 251 153"};
    vector<string> R = {"209 259 224 261 272 208 205 229 246 273 260 238 2", "51 175 292 265 177 211 293 185 277 137 291 176 218", " 261 233 253 219 158 125 284 276 236 288 268 243 1", "80 144 251 169 52 248 151 146 139 134 288 205 291 ", "272 280 79 263 132 215 203 290 207 291 292 273 152", " 264 253 249 289 290 202 156 292 260 197 224 270 2", "19 240 170 153 133 292 189 223 255 209 233 261 202", " 236 282 256 292 219 224 151 278 280 202 265 178 1", "81 123 292 243 146 197 254 30 284 226 268 199 229 ", "291 267 290 134 229 279 277 171 280 214 290 169 25", "2 220 268 167 272 219 248 232 187 236 290 287 240 ", "283 208 245 284 55 136 289 289 199 187 209 221 244", " 216 223 149 274 182 275 107 67 250 271 273 200 22", "2 232 154 275 171 128 266 293 195 290 288 163 182 ", "279 270 126 212 157 266 148 208 254 251 270 132 99", " 172 245 160 284 230 245 228 139 202 218 286 256 8", "9 288 284 228 269 275 155 197 233 133 267 282 192 ", "176 234 201 283 239 186 142 286 264 227 251 264 26", "2 217 187 268 164 54 214 242 268 176 230 119 239 2", "81 216 246 238 268 287 103 160 262 290 114 138 273", " 233 252 292 82 263 267 135 194 155 128 273 124 26", "3 201 195 155 255 83 173 250 220 47 90 265 232 152", " 275 216 216 188 284 209 187 108 78 182 46 281 82 ", "152 273 169"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1963682;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 297;
    vector<string> L = {"48 171 11 171 5 205 141 285 10 260 39 199 160 131", " 272 251 117 156 175 285 94 15 238 98 52 90 150 47", " 215 192 122 255 130 43 66 140 128 22 226 101 182 ", "174 82 115 161 10 151 198 198 207 102 11 265 277 2", "8 23 197 293 222 202 2 289 215 257 70 234 294 232 ", "68 281 173 281 149 179 245 52 149 77 261 226 246 2", "73 106 250 88 201 43 10 19 4 203 227 70 88 98 260 ", "194 66 170 121 246 71 56 215 47 50 198 79 273 166 ", "129 197 209 147 219 7 74 265 60 163 248 158 134 24", "6 212 90 81 152 77 138 61 39 223 259 178 90 9 139 ", "136 189 123 150 183 289 185 89 36 258 176 135 242 ", "123 127 263 145 238 264 23 42 72 42 111 55 36 199 ", "89 191 158 175 42 196 164 227 95 272 266 131 89 21", "1 243 98 7 249 122 100 47 161 195 110 185 29 263 2", "77 51 261 143 127 8 287 1 107 249 171 27 273 126 2", "73 227 170 30 88 5 193 173 143 246 36 205 213 284 ", "285 120 268 50 250 289 226 230 21 45 26 173 282 21", "8 109 197 14 283 98 168 7 139 89 249 286 289 97 1 ", "131 186 148 106 206 257 286 69 202 97 134 168 261 ", "264 124 285 22 19 29 171 165 88 3 145 126 256 235 ", "120 278 124 108 250 25 127 233 52 257 289 104 55 2", "68 219 218 276 121 30 86 44 179"};
    vector<string> R = {"271 251 197 173 208 258 200 285 139 295 289 249 2", "10 206 285 251 228 280 247 286 277 40 265 122 77 1", "49 295 68 235 211 240 296 221 256 170 215 144 211 ", "267 171 259 236 127 146 252 33 290 222 293 279 141", " 93 279 289 82 40 242 293 226 210 47 296 227 266 2", "95 264 296 265 173 288 263 294 254 194 272 55 177 ", "152 265 279 292 290 178 256 137 295 273 250 66 149", " 278 251 240 165 186 279 278 197 205 234 260 285 1", "78 256 228 217 284 162 274 293 144 283 245 200 261", " 257 148 289 132 199 269 199 242 256 271 157 221 2", "42 109 195 115 276 266 290 208 237 214 247 174 277", " 262 224 246 292 246 183 237 280 181 197 293 270 2", "75 289 189 273 286 140 225 88 260 137 200 214 223 ", "206 217 264 270 84 294 279 264 103 279 278 270 247", " 214 245 127 217 267 198 277 191 273 282 225 267 2", "35 264 295 55 277 198 173 289 287 238 192 267 181 ", "254 282 132 280 285 239 218 206 163 209 296 245 25", "2 283 256 227 290 286 217 278 79 283 294 238 245 2", "4 67 173 240 295 271 199 259 187 284 155 237 269 1", "69 91 277 292 292 171 282 261 235 196 291 247 265 ", "293 69 218 143 268 200 280 293 236 285 100 64 99 2", "25 171 245 197 275 203 272 287 246 286 184 120 284", " 232 246 269 159 267 295 132 148 274 287 244 291 2", "70 75 129 194 296"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 638940;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 300;
    vector<string> L = {"197 228 156 38 190 299 132 18 291 161 41 154 18 1", "1 107 2 125 277 266 17 224 248 186 189 61 181 1 15", "0 253 0 12 174 140 92 43 227 136 163 173 269 69 3 ", "83 285 147 73 62 106 94 218 202 51 234 269 44 206 ", "223 86 155 102 262 248 280 77 30 205 166 230 26 47", " 256 186 111 133 122 257 81 120 63 147 225 158 287", " 141 234 246 279 187 279 81 91 139 59 20 16 40 106", " 257 257 258 76 182 159 199 283 254 3 63 145 135 2", "65 12 243 57 276 180 31 194 66 229 125 102 257 241", " 180 21 30 289 219 256 209 39 172 295 216 72 253 1", "1 291 121 74 272 294 275 169 45 12 183 81 77 264 6", "5 143 184 254 213 52 81 228 246 299 232 233 31 32 ", "213 275 110 255 205 38 79 77 263 5 105 178 134 190", " 4 154 114 273 276 160 169 197 0 252 62 77 30 206 ", "253 120 233 266 175 156 273 48 97 235 26 92 29 239", " 275 158 224 110 237 91 189 298 202 204 16 272 289", " 271 172 259 170 197 132 297 188 136 240 113 181 2", "71 122 80 202 249 289 286 173 171 115 242 130 262 ", "165 7 46 68 111 0 124 168 69 135 115 178 33 187 19", "9 112 297 92 26 208 93 131 107 127 169 143 209 10 ", "116 279 294 228 185 187 291 67 74 192 213 132 73 2", " 41 170 185 172 137 235 76 188 281 45 116 66 10"};
    vector<string> R = {"256 229 241 104 212 299 215 97 296 236 116 161 12", "3 156 266 42 177 296 286 143 243 257 264 293 249 2", "77 97 180 261 127 98 293 145 113 132 290 160 235 2", "08 278 247 286 143 297 268 284 273 165 187 219 242", " 214 266 297 259 295 289 275 226 175 281 256 281 2", "72 255 289 248 290 181 249 297 258 232 219 123 268", " 87 188 225 167 259 164 299 222 287 262 280 252 28", "9 275 213 287 280 69 74 188 145 261 290 293 177 25", "2 284 268 287 279 295 136 224 286 295 67 267 162 2", "79 288 148 238 224 245 182 144 277 270 293 140 136", " 291 226 257 252 117 254 299 218 218 292 181 296 2", "38 171 298 298 276 184 145 155 213 140 237 293 216", " 164 249 270 225 261 156 250 280 299 292 256 277 1", "85 236 286 226 281 259 73 293 193 281 35 234 258 1", "63 298 252 260 183 281 279 228 198 254 144 266 88 ", "182 185 265 254 275 289 268 178 214 299 149 138 24", "3 86 273 166 293 284 210 249 258 299 193 244 298 2", "97 260 123 279 290 278 294 259 170 286 179 297 295", " 157 279 262 255 292 158 204 293 283 289 287 247 2", "41 298 242 211 273 230 141 180 79 177 109 274 244 ", "165 215 185 222 79 232 219 243 299 138 107 240 214", " 209 200 299 258 224 268 68 149 290 298 283 210 29", "2 296 225 280 213 296 132 217 177 282 228 214 225 ", "265 264 206 257 295 50 290 224 120"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 522392;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 300;
    vector<string> L = {"184 213 148 137 268 13 270 9 26 129 293 283 76 16", "7 101 145 237 193 1 282 253 108 189 164 175 266 24", " 87 132 223 207 162 226 135 215 159 144 54 235 17 ", "262 273 98 1 88 233 112 160 166 185 43 9 145 273 7", "8 48 172 185 197 193 278 173 121 172 261 158 8 118", " 271 268 23 266 278 253 6 220 256 104 212 164 15 5", "6 284 132 82 51 6 143 295 297 28 189 66 139 270 17", " 133 43 48 248 293 144 162 127 5 19 66 183 92 182 ", "92 170 280 212 198 90 262"};
    vector<string> R = {"266 233 162 279 284 208 270 106 108 249 297 299 2", "79 215 259 166 295 212 262 291 298 267 206 288 197", " 289 215 177 298 234 225 195 297 223 219 189 184 1", "71 286 107 264 298 260 190 107 238 154 264 281 276", " 75 282 211 289 196 203 284 237 288 272 288 287 29", "4 207 287 244 115 276 298 292 52 277 287 271 271 2", "70 259 222 228 215 275 151 299 152 211 297 9 287 2", "95 299 55 292 147 266 273 37 135 90 140 295 297 22", "3 229 202 13 288 198 218 243 201 204 261 285 279 2", "97 292 276"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1669730;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 300;
    vector<string> L = {"75 207 157 274 211 285 284 26 105 32 6 294 0 285 ", "45 128 240 41 183 151 271 140 111 154 286 262 146 ", "174 142 111 111 14 176 116 107 119 202 47 121 111 ", "251 40 264 140 100 183 212 17 90 297 107 212 139 1", "13 143 164 203 145 33 220 121 286 242 91 167 198 3", "1 7 94 169 35 5 229 38 88 83 163 143 158 98 248 22", "0 54 192 93 65 220 182 13 134 30 45 79 53 248 76 1", "85 253 218 5 106 49 187 9 128 243 94 45 176 102 27", "3 286 261 257 40 151 33 19 72 53 97 191 201 202 44", " 51 184 138 200 23 1 93 83 42 214 190 135 214 282 ", "239 169 203 15 186 37 199 106 217 13 62 185 143 26", "2 227 76 191 13 234 150 298 173 101"};
    vector<string> R = {"278 278 189 274 268 288 288 64 151 254 229 296 16", "6 287 86 217 275 205 259 201 299 296 133 263 293 2", "82 231 241 238 287 204 252 294 121 175 265 284 297", " 298 171 262 106 288 208 124 239 242 54 112 299 27", "4 269 296 170 241 174 280 234 232 245 297 287 279 ", "209 176 222 258 241 153 187 60 294 244 176 181 290", " 168 156 249 157 257 223 58 245 179 183 286 220 17", "7 176 187 114 218 141 299 128 271 284 248 28 185 6", "0 279 200 275 295 179 124 238 213 276 287 297 261 ", "181 168 218 67 109 274 289 288 218 246 253 103 299", " 233 291 64 172 229 142 142 278 268 285 223 298 29", "0 240 222 219 186 107 207 253 287 76 276 217 170 2", "81 286 182 198 19 268 280 299 255 166"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 719018;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 300;
    vector<string> L = {"265 222 105 143 165 186 6 125 277 48 239 71 239 6", "5 195 171 188 108 63 163 256"};
    vector<string> R = {"285 288 278 296 205 221 71 241 298 109 281 198 24", "0 67 227 247 299 175 100 237 277"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 855594832;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 300;
    vector<string> L = {"202 111 4 270 114 173 152 131 214 141 274 90 199 ", "16 91 233 260 175 293 95 177 108 297 270 66 251 22", "1 90 254 211 80 299 252 279 122 260 163 275 262 27", "9 143 67 287 217 194 168 136 40 266 290 273 226 90", " 125 120 15 76 61 106 283 140 274 53 181 55 246 20", "4 157 128 286 176 60 249 82 165 287 185 191 166 23", "3 178 143 172 50 102 128 254 115 276 95 65 177 236", " 57 85 233 215 111 130 141 282 201 273 176 250 79 ", "156 294 238 259 195 147 54 54 204 179 136 244 281 ", "280 271 16 249 86 168 87 239 262 59 270 38 285 168", " 276 278 25 50 246 206 201 104 56 70 139 105 46 22", " 74 218 259 105 271 83 94 293 150 74 107 186 52 19", "7 225 187 264 255 135 16 108 202 182 124 251 274 2", "86 229 96 255 152 81 152 28 237 114 206 8 7 68 44 ", "165 288 272 271 281 91 216 266 0 280 175 238 264 1", "01 37 78 41 287 65 46 298 122 294 298 261 223 136 ", "273 181 58 146 185 281 33 173 85 63 7 203 101 104 ", "2 65 152 161 244 251 213 60 133 178"};
    vector<string> R = {"217 237 4 291 247 264 185 190 214 141 280 95 228 ", "168 260 249 278 187 299 184 210 132 297 295 281 29", "4 264 286 275 255 148 299 289 292 241 288 183 277 ", "297 281 266 148 299 297 269 295 263 71 266 296 295", " 275 117 270 237 98 85 157 135 296 156 274 215 246", " 87 292 257 202 147 288 276 243 265 135 226 287 29", "8 260 187 283 246 151 207 296 200 146 258 196 297 ", "260 72 206 264 153 137 282 263 209 244 150 295 269", " 287 253 263 194 292 294 239 266 287 278 84 76 206", " 287 171 287 298 299 273 128 279 125 257 171 271 2", "98 266 277 239 285 205 284 285 269 128 260 244 264", " 107 118 279 252 187 200 108 207 269 259 121 293 2", "21 167 298 181 238 187 291 127 292 259 195 266 294", " 251 237 110 209 191 167 293 281 297 299 162 289 2", "69 259 184 134 277 250 291 270 20 275 282 297 297 ", "285 295 293 184 227 273 110 292 246 296 292 177 59", " 154 46 292 173 262 299 205 296 298 268 251 147 27", "9 208 121 199 217 282 73 265 267 215 254 256 264 1", "08 137 142 217 180 282 278 299 68 225 179"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 5822692;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 300;
    vector<string> L = {"123 147 242 105 71 283 29 20 31 101 39 165 177 17", "8 275 67 113 284 3 48 220 29 244 188 190 3 159 174", " 189 32 30 298 288 222 183 32 149 86 3 279 135 73 ", "36 187 7 25 81 177 120 255 8 109 213 209 273 201 2", "76 259 2 70 242 231 255 57 111 83 28 60 129 72 212", " 184 69 273 246 79 83 264 119 233 239 150 111 139 ", "138 21 287 40 92 65 64 144 2 63 38 244 270 47 228 ", "88 134 107 66 0 0 67 161 122 21 162 206 42 156 0 9", "6 37 81 82 294 128 155 13 248 129 166 228 51 47 19", "6 29 109 266 195 82 235 105 30 238 2 45 83 77 125 ", "68 82"};
    vector<string> R = {"291 264 245 289 280 294 201 280 37 156 219 166 18", "7 258 296 144 129 294 171 292 291 231 253 237 190 ", "22 292 184 192 211 123 298 289 297 235 121 245 255", " 19 293 181 237 101 230 80 173 127 226 248 296 189", " 199 240 284 298 281 282 262 128 248 283 241 285 1", "84 210 130 299 248 271 254 297 227 260 294 297 103", " 229 283 193 245 275 203 180 184 216 174 290 239 1", "87 258 288 146 133 270 65 274 286 112 265 184 276 ", "292 178 162 240 128 225 281 141 277 230 296 190 33", " 220 155 83 163 299 155 204 74 297 167 224 237 115", " 50 248 164 263 280 284 145 287 287 128 242 293 52", " 113 134 245 139 165"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 144572;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 300;
    vector<string> L = {"226 45 73 242 79 60 70 65 299 100 202 285 187 270", " 12 116 172 204 83 223 27 94 282 220 204 55 265 29", "2 234 242 144 35 258 248 193 29 68 32 46 293 85 18", "3 298 100 2 292 238 29 258 4 163 91 141 168 42 64 ", "214 105 144 207 26 271 45 262 150 165 274 135 258 ", "30 162 33 23 245 214 9 111 187 9"};
    vector<string> R = {"284 172 75 276 217 294 291 105 299 297 280 293 24", "5 280 118 256 257 261 216 298 198 211 290 240 222 ", "61 288 293 272 245 186 105 261 273 290 240 280 163", " 179 297 278 198 299 251 233 296 249 39 268 131 18", "8 112 263 233 132 190 219 160 265 258 194 283 53 2", "76 263 171 283 200 259 101 206 234 292 256 273 278", " 193 256 140"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7446792;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 300;
    vector<string> L = {"95 79 26 70 52 231 57 57 39 101 53 166 82 68 30 4", "8 176 81 126 208 11 40 130 153 234 71 55 68 62 186", " 189 142 235 71 67 139 278 163 60 94 119 99 71 75 ", "266 49 73 38 250 267 146 274 193 22 86 15 246 98 2", "95 253 203 261 281 97 205 252 220 55 176 33 259 22", "7 252 206 168 49 7 292 172 13 75 121 298 167 233 7", "1 157 148 88 178 211 232 177 285 12 181 184 204 11", " 22 36 120 169 10 111 50 27 124 192 242 206"};
    vector<string> R = {"98 245 113 110 271 252 257 114 155 167 298 258 98", " 180 250 163 274 152 142 284 260 252 130 262 287 2", "14 248 215 256 212 258 273 267 294 240 281 292 239", " 192 171 182 220 137 78 280 126 155 60 271 276 233", " 289 254 61 227 204 293 164 295 295 295 278 282 10", "7 217 294 265 277 242 191 285 256 281 233 229 148 ", "22 295 248 131 125 255 299 245 267 130 257 204 120", " 288 225 287 232 288 60 244 250 289 194 207 86 121", " 271 94 241 106 129 174 275 252 277"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 768118777;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 300;
    vector<string> L = {"170 180 56 213 23 269 201 261 22 159 3 88 161 172", " 236 75 236 274 170 144 172 230 218 127 79 241 278", " 47 267 205 86 23 57 49 98 165 262 53 70 13 229 13", "9 18 155 167 210 251 5 100 49 234 241 23 122 12 13", "9 246 154 204 230 56 244 245 89 132 68 41 23 94 17", "2 57 220 65 146 65 269 189 255 114 272 222 241 188", " 7 199 237 193 204 231 62 163 155 292 173 79 58 18", " 97 263 82 92 181 58 186 8 224 132 35 251 69 260 2", "02 200 93 158 243 276 196 199 89 78 201 115 177 26", "6 103 165 36 112 225 36 189 108 183 104 30 196"};
    vector<string> R = {"230 289 264 249 271 278 254 291 74 287 282 294 25", "4 248 297 128 287 275 217 298 241 231 220 286 214 ", "267 297 234 277 223 161 50 272 208 183 211 286 298", " 233 287 252 212 31 285 222 238 276 75 180 247 235", " 284 78 132 188 179 254 283 244 248 176 290 287 24", "0 292 220 245 31 119 291 222 224 218 216 166 277 2", "24 263 232 286 279 296 265 247 201 288 253 267 292", " 137 278 197 298 213 272 257 150 245 264 252 130 2", "22 212 279 161 226 270 286 262 202 282 263 262 224", " 257 259 296 265 231 177 120 281 169 184 279 109 2", "44 161 267 229 185 223 241 287 218 151 297"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4728912;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 300;
    vector<string> L = {"278 169 158 165 1 70 171 184 252 90 142 195 220 2", "33 46 95 142 43 173 14 246 42 17 98 19 93 149 253 ", "123 191 139 5 89 266 88 179 258 141 174 98 43 289 ", "228 267 233 177 206 182 67 91 101 182 245 92 26 13", "3 53 24 59 119 223 88 128 268 155 59 281 248 67 99", " 266 202 155 195 120 217 273 128 232 238 173 147 4", "3 68 69 217 288 35 185 245 0 297 143 217 221 117 2", "80 105 95 41 186 104 153 54 34 29 83 100 117 82 27", "4 83 125 157 263 188 31 44 229 7 51 259 9 125 223 ", "14 128 31 198 283 85 44 245 247 11 75 16 25 207 57", " 126 210 32 123 235 177 85 120 35 224 9 257 294 82", " 211 268 1 183 277 213"};
    vector<string> R = {"289 169 247 267 62 277 284 263 262 219 227 230 27", "5 267 251 215 286 196 228 289 249 181 115 118 244 ", "235 242 267 164 278 209 243 107 268 266 251 291 22", "8 209 98 257 291 254 276 286 177 237 192 234 107 1", "10 216 284 203 189 265 106 178 271 169 295 112 236", " 292 254 65 294 283 189 195 298 290 280 211 198 27", "0 289 217 245 255 209 156 59 234 286 247 293 194 1", "95 270 197 298 159 278 256 167 295 171 96 102 285 ", "296 185 94 99 156 292 237 166 158 279 247 130 237 ", "293 268 223 299 291 61 195 270 58 143 293 72 138 1", "84 270 295 270 133 293 263 179 124 122 31 247 167 ", "219 289 217 154 257 196 220 182 203 270 224 283 29", "5 85 246 280 60 229 292 266"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 974497;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 300;
    vector<string> L = {"277 222 4 139 53 64 254 203 41 38 181 65 233 42 1", "41 223 186 143 256 244 276 44 172 282 137 127 38 2", "60 113 29 165 218 239 70 213 275 21 141 33 260 281", " 22 156 8 4 89 287 230 80 227 271 296 132 255 231 ", "196 198 141 282 173 169 154 293 27 231 284 237 145", " 155 122 244 109 220 192 172 78 284 67 40 55 227 1", "09 87 276 229 233 169 84 53 264 84 184 169 241 115", " 85 108 2 207 270 57 135 222 155 18 193 155 38 296", " 1 183"};
    vector<string> R = {"290 254 147 234 82 157 274 221 233 72 220 279 243", " 212 265 273 247 260 267 264 285 181 251 287 148 2", "19 131 292 164 258 202 220 249 266 217 288 277 245", " 236 296 296 42 249 87 73 288 293 280 111 232 282 ", "296 284 258 293 233 251 283 295 252 259 266 296 23", "5 243 284 256 272 231 264 297 280 294 272 195 117 ", "299 111 153 102 257 161 219 290 256 250 187 298 16", "7 293 129 248 245 242 124 201 296 133 261 298 91 2", "14 279 287 279 291 208 136 296 83 250"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 23851938;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 300;
    vector<string> L = {"157 258 103 240 255 135 81 282 171 158 232 171 46", " 13 144 232 6 9 161 96 191 38 256 43 179 21 206 10", "7 132 106"};
    vector<string> R = {"252 271 231 264 262 192 95 297 281 255 264 259 27", "5 191 194 286 63 147 230 175 245 205 259 298 188 1", "49 253 149 180 199"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 870780288;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 300;
    vector<string> L = {"194 87 202 258 231 150 208 255 90 184 50 222 231 ", "193 261 189 157 186 8 261 291 60 180 49 140 87 178", " 164 39 8 237 235 57 235 188 276 188 8 46 4 68 61 ", "75 77 102 4 166 13 270 203 238 210 168 43 143 270 ", "283 85 23 1 128 147 66 254 268 102 166 213 125 45 ", "54 148 236 165 279 99 106 155 254 48 184 133 189 0", " 137 33 279 281 25 224 215 21 279 152 48 287 50 6 ", "210 65 174 263 76 131 274 58 229 147 292 187 154 2", "67 20 133 269 256 185 183 185 30 288 268 133 205 2", "11 145 16 84 56 206 167 228 254 180 217 299 175 26", "8 17 62 122 17 56 86"};
    vector<string> R = {"220 142 276 260 234 209 258 284 159 265 164 254 2", "58 216 291 220 162 221 79 275 294 165 218 126 264 ", "136 225 197 108 176 285 254 159 285 238 292 189 32", " 99 26 75 68 160 168 184 170 226 215 299 277 252 2", "49 201 216 188 278 284 197 281 201 210 205 284 262", " 299 119 251 294 159 265 141 176 285 170 280 139 2", "49 266 294 265 279 256 252 140 218 68 291 281 191 ", "254 219 218 298 246 108 292 51 180 266 183 198 283", " 201 182 288 247 249 266 293 187 207 285 45 196 27", "3 263 284 284 205 133 292 292 245 256 240 160 83 2", "38 75 289 251 231 254 260 245 299 290 291 294 177 ", "202 243 60 294"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12516638;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 300;
    vector<string> L = {"287 126 102 25 196 299 140 175 5 97 185 179 167 7", "7 259 64 159 159 25 269 88 30 134 28 75 140 183 22", "6 184 243 284 172 147 286 119 75 292 135 242 8 70 ", "89 247 89 252 38 224 36 221 253 254 240 206 4 35 2", "98 13 173 133 282 53 183 179 234 285 63 197 27 8 2", "35 201 11 275 78 206 258 22 12 141 158 123 198 165", " 233 13 166 115 274 58 101 241 23 144 142 7 241 20", " 101 256 43 120 283 291 202 155 273 88 21 33 122 2", "62 60 258 42 256 252 222 199 104 133 82 162 113 19", "5 285 47 49 121 91 56 117 259 100 14 93 149 89 249", " 219 21 6 156 96 107 86 158 218 244 286 250 133 16", "8 243 79 141 120 114 201 37 210 50 29 189 114 4 53", " 87 107 187 86 108 41 118 93 294 133 20 283 222 28", " 283 276 227 128 173 197 94 24 66 21 139 275 140 2", "01 49 91 251 42 235 50 73 3 29 136 180 46 34 277 6", " 49 100 132 97 268 79 47 260 216 98 78 253 72 140 ", "57 184 164 30 147 213 81 61 208 170 289 206 273 28", " 190 106 14 210 120 30 226 108 193 43 183 232 24 1", "23 27 252 198 130 103 263 63 104 249 97 61 243 98 ", "282 42 0 261 203 97 296 193 205 26 24 258 69 222 1", "3 47 143 237 66 27 90 60 286 197 207 220 265 8 127", " 195"};
    vector<string> R = {"297 164 285 244 227 299 220 200 270 291 298 222 2", "80 131 274 286 238 285 160 276 222 260 278 256 104", " 285 234 295 224 267 285 218 249 293 120 204 296 2", "71 245 12 170 247 293 107 281 38 284 105 280 290 2", "98 251 273 252 252 299 199 202 157 298 137 268 200", " 274 299 78 251 133 249 252 202 76 280 115 255 287", " 265 176 216 278 255 267 247 258 185 280 155 293 2", "97 258 291 276 262 234 86 271 224 187 260 189 211 ", "296 295 231 222 283 287 215 122 153 278 131 258 13", "1 271 253 261 206 217 155 85 192 143 252 295 168 1", "22 162 234 210 123 273 125 273 104 206 208 276 253", " 70 262 167 129 135 189 298 222 283 296 285 144 23", "7 268 98 182 245 151 293 293 246 257 47 289 296 23", " 61 110 166 241 220 148 44 127 215 295 281 38 287 ", "230 159 284 276 231 262 221 287 195 153 238 179 20", "1 279 286 261 57 218 252 236 273 219 147 189 269 2", "65 259 73 281 277 75 103 282 287 215 278 226 298 2", "94 222 273 124 289 88 213 91 299 244 47 215 264 24", "3 161 285 290 294 206 296 90 206 193 36 257 209 15", "5 236 254 215 102 246 254 65 228 180 266 227 215 2", "00 298 273 195 286 246 254 244 290 287 112 172 279", " 258 176 299 259 210 85 258 290 157 241 275 74 188", " 275 212 159 162 115 296 297 214 291 267 248 189 2", "94"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1304870;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 300;
    vector<string> L = {"278 1 60 288 182 163 94 202 39 97 29 18 236 25 26", "8 95 57 222 201 16 50 87 152 28 293 277 142 176 18", "5 39 251 106 57 252 210 209 194 296 130 19 99 293 ", "169 93 48 285 289 136 117 257 151 44 66 201 155 92", " 238 102 220 166 79 70 157 136 9 62 193 218 88 170", " 232 260 157 156 171 259 162 270 9 291 68 85 111 2", "13 37 222 219 169 129 262 116 6 40 265 93 283 89 2", "32 71 132 222 298 178 199 188 24 284 84 219 48 242", " 139 100 86 288 214 18 13 204 252 43 262 137 264 2", "51 9 39 246 10 51 162 119 91 276 25 102 261 299 23", "7 238 86 198 253 250 236 184 182 96 184 185 180 13", "2 232 128 295 217 3 257 154 122 298 1 11 114 288 1", " 271 37 100 256 290 109 16 29 7 102 195 151 243 27", "8 84 297 288 6 79 113 167 265 251 244 31 117 51 27", "3 38 119 260 277 215 181 139 152 203 208 207 279 3", "9 181 145 222 229 53 4 73 1 186 63 108 256 133 178", " 193 57 255 102 173 205 220 270 122 216 233 188 40", " 287 80 64 134 107 198 272 200 269 0 223 6 78 207 ", "113 251 49 87 49 127 75 85 175 229 173 294 54 81 5", "1 19 187 72 67 113 156 231 251 297 28 67 122 195 2", "76 169 27 40 70 36 276 40 176 175 140 194 244"};
    vector<string> R = {"297 284 140 291 295 270 215 224 274 264 205 24 25", "4 115 275 169 175 262 209 145 282 103 285 81 297 2", "98 236 183 228 67 260 186 137 284 293 258 282 299 ", "187 164 128 297 208 234 58 292 293 225 181 261 177", " 76 115 210 263 129 295 134 254 279 200 95 161 236", " 203 292 263 269 294 193 287 291 245 188 275 262 2", "18 284 193 294 155 155 117 287 101 268 255 177 267", " 299 272 55 140 266 265 299 218 286 167 249 259 29", "8 227 271 216 82 288 269 277 267 243 154 268 200 2", "90 226 253 146 226 272 116 271 164 268 282 231 153", " 248 134 157 167 198 259 280 130 122 280 299 299 2", "63 112 271 269 252 264 246 232 228 191 239 254 220", " 278 196 296 241 248 280 253 132 299 236 24 173 29", "5 110 291 48 102 270 290 170 127 211 218 219 203 2", "89 283 288 98 298 290 195 184 238 191 267 295 267 ", "78 288 72 292 159 282 277 295 280 212 226 235 230 ", "259 270 284 150 246 245 249 289 176 245 116 126 21", "8 88 196 266 271 200 244 74 287 135 200 260 230 28", "8 157 238 258 260 272 299 253 141 158 240 247 295 ", "277 278 157 292 148 157 254 243 278 167 155 291 14", "8 268 256 194 285 270 297 295 132 270 83 241 224 2", "42 232 244 267 273 299 251 253 127 268 283 253 167", " 95 274 157 290 270 232 216 162 216 283"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1545628;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 300;
    vector<string> L = {"217 55 215 186 210 33 21 182 21 34 295 169 82 52 ", "235 56 273 38 216 68 49 175 112 177 176 224 226 13", "2 291 122 279 213 83 193 96 215 255 15 281 220 112", " 142 72 214 92 173 123 177 232 229 45 232 39 73 11", "2 234 192 80 100 45 20 247 39 18 22 102 173 92 202", " 46 262 160 77 244 187 269 249 139 24 177 155 265 ", "204 248 147 280 77 80 252 142 147 294 26 5 142 130", " 96 195 143 16 47 10 73 123 18 148"};
    vector<string> R = {"233 69 267 237 292 127 85 265 248 76 299 286 122 ", "184 257 296 293 228 219 243 105 216 204 228 204 26", "5 268 291 293 190 285 244 87 219 183 217 297 23 29", "4 285 205 239 219 276 97 266 222 199 252 243 87 24", "1 110 113 230 289 237 292 108 239 258 271 117 296 ", "41 149 257 144 287 297 277 198 81 281 237 272 275 ", "232 257 266 252 281 250 297 188 281 170 181 277 26", "5 247 298 225 112 200 238 202 209 262 189 182 214 ", "109 171 195 170"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 147494272;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 300;
    vector<string> L = {"14 257 270 181 296 84 127 117 242 41 62 25 140 98", " 271 95 108 299 71 59 32 285 60 153 15 242 141 65 ", "287 143 184 262 215 231 1 286 298 68 161 72 38 133", " 169 226 223 150 198 264 265 89 27 197 180 252 32 ", "124 93 249 141 59 117 28 248 197 238 208 240 116 1", "94 226 277 253 39 109 248 103 33 24 79 235 91 258 ", "271 24 286 155 288 129 83 290 32 289 66 265 66 102", " 66 158 277 99 4 257 299 166 222 70 11 226 256 73 ", "10 121 168 152 212 144 248 157 220 207 58 254 81 1", "55 269 58 111 244 20 79 60 269 294 115 49 86 193 6", "9"};
    vector<string> R = {"24 284 284 203 297 85 298 192 288 132 211 30 217 ", "142 284 261 167 299 266 154 50 286 280 161 27 276 ", "178 299 290 154 186 278 291 256 271 293 299 96 293", " 103 135 174 252 291 244 285 284 296 274 221 83 23", "5 247 285 88 247 205 290 142 289 180 252 291 289 2", "94 284 264 220 261 230 294 282 133 189 266 220 209", " 129 211 279 191 291 292 84 294 266 289 195 259 29", "5 62 289 275 277 95 127 277 190 297 260 268 282 29", "9 291 255 98 35 275 283 258 237 235 293 267 279 20", "1 296 265 267 209 268 284 206 272 271 176 212 279 ", "280 187 93 297 295 181 95 218 285 268"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1785482;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 300;
    vector<string> L = {"121 7 241 127 7 142 294 259 197 52 267 181 107 93", " 247 195 191 78 231 171 58 153 123 158 237 177 34 ", "275 22 71 237 288 83 111 223 296 5 190 243 77 206 ", "166 123 157 45 181 115 217 210 203 191 138 161 249", " 14 63 57 62 37 108 199 172 103 166 72 265 69 286 ", "47 212 156 107 198 173 7 97 45 148 13 210 111 44 1", "17 69 265 195 131 51 89 238 211 7 290 41 274 251 4", "7 129 170 219 253 64 109 163 212 164 42 227 283 74", " 31 38 284 25 149"};
    vector<string> R = {"165 244 258 227 204 285 295 273 205 189 268 270 1", "69 199 296 287 228 172 267 200 198 221 201 269 241", " 212 165 289 47 120 285 298 176 273 279 296 223 25", "4 296 275 256 240 135 240 243 209 174 245 218 267 ", "226 162 172 286 81 192 141 177 204 181 299 286 155", " 262 291 296 278 287 118 265 274 274 216 268 187 2", "91 211 152 128 210 270 243 233 120 279 223 142 95 ", "254 258 259 31 297 125 292 285 59 224 281 231 297 ", "218 188 197 252 234 248 235 290 274 219 89 284 199", " 299"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 200836128;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 300;
    vector<string> L = {"280 226 71 251 224 233 46 194 11 79 10 0 110 76 2", "78 212 25 226 286 168 291 175 46 147 221 255 113 5", "0 126 72 154 83 299 124 124 298 240 65 68 116 162 ", "165 35 230 293 5 151 71 186 223 94 285 282 4 273 2", "49 296 168 188 215 130 199 47 83 107 137 44 27 111", " 9 236 222 265 63 77 255 162 61 81 114 65 119 40 1", "90 24 8 5 228 166 156 117 228 77 210 239 66 70 60 ", "121 91 7 214 20 224 118 294 231 258 254 188 215 23", "7 36 68 135 165 105 67 216 168 197 184 16 220 64 1", "41 54 92 48 219 240 292 263 257 98 17 139 78 188 2", "08 152 176 261 102 118 85 290 19 237 21 92 112 32 ", "43 203 188 288 98 186 67 298 135 190 38 192 207 26", "8 133 172 195 147 20 294 115 95 202 286 212 26 150", " 163 128 42 223 97 115 8 157 153 123 0 210 290 184", " 274 3 195 178 53 103 98 141 221 18 180 261 76"};
    vector<string> R = {"280 283 73 299 279 286 193 276 85 148 124 159 173", " 227 282 254 120 258 289 173 295 269 203 262 265 2", "81 180 136 183 92 181 145 299 153 212 299 285 79 2", "00 219 215 212 244 232 298 254 296 277 195 238 113", " 295 290 83 274 260 299 229 228 236 180 271 240 27", "6 159 251 104 281 230 169 291 237 267 91 195 263 2", "61 186 180 292 274 237 288 269 92 205 23 287 201 2", "80 249 235 255 233 290 196 98 299 196 91 241 230 1", "10 233 147 299 281 262 271 235 228 284 127 80 211 ", "245 245 280 262 265 210 248 126 242 114 230 222 16", "0 269 230 263 294 272 283 243 78 291 108 241 291 2", "69 196 294 142 299 198 290 213 267 27 92 201 287 2", "72 291 196 295 244 234 67 298 220 294 59 272 297 2", "70 226 225 226 165 153 298 128 280 292 295 290 57 ", "174 174 287 239 271 132 226 223 223 187 294 114 29", "1 291 247 289 247 210 258 271 145 205 231 262 112 ", "213 297 171"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1810006;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 300;
    vector<string> L = {"281 234 118 173 202 73 67 99 205 111 162 150 273 ", "110 111 104 213 153 152 235 210 197 49 132 3 163 2", "03 118 101 220 247 200 143 157 156 264 64 65 291 1", "81 227 154 151 84 39 6 195 254 51 10 86 99 5 37 24", "2 28 96 70 200 155 149 75 243 79 232 78 229 127 25", "6 6 135 59 126 84 293 269 262 4 289 130 280 217 53", " 167 19 93 159 161 256 68 202 20 224 277 243 150 2", "50 220 123 237 162 220 288 212 141 91 284 58 211 9", "1 201 288 92 42 198 188 267 55 205 27 129 76 216 2", "63 220 40 100 187 64 110 97 16 262 235 180 298 207", " 145 199 93 237 76 39 260 14 195 50 251 25 59 241 ", "294 226 131 144 214 177 241 83 28 244 167 213 15 2", "65 64 11 142 197 71 127 291 202 276 140 139 43 221", " 265 264 171 169 119 185 63 171 22 172 215 208 208", " 264 196 281 278 196 246 294 92 112 151 243 108 22", "9 20 103 107 62 174 77 158 40 111 161 215 265 190 ", "123 251 288"};
    vector<string> R = {"292 249 288 258 288 92 229 127 238 128 246 169 28", "0 141 267 107 274 276 210 275 290 262 229 197 149 ", "204 251 232 222 298 273 226 150 267 214 278 126 13", "3 296 238 295 162 254 145 63 266 220 279 114 202 2", "16 152 11 71 253 285 98 190 270 177 179 126 274 17", "0 296 268 240 135 270 88 230 229 210 217 295 285 2", "71 69 289 181 282 221 273 169 139 118 231 247 258 ", "258 208 287 263 283 275 176 296 240 251 243 291 28", "4 295 233 168 133 291 205 259 245 287 293 171 285 ", "239 225 274 287 275 250 136 242 229 294 279 175 19", "0 299 219 200 185 187 271 278 185 299 293 278 281 ", "96 253 172 274 290 154 276 102 277 120 244 253 295", " 275 167 214 267 183 266 272 93 288 202 259 237 28", "8 125 71 270 246 248 133 295 226 282 172 200 187 2", "23 273 277 232 180 221 243 288 181 101 254 276 236", " 232 292 203 284 281 249 298 294 282 136 206 290 2", "44 279 286 239 227 79 207 237 207 167 143 200 276 ", "283 215 235 298 292"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 37019464;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 300;
    vector<string> L = {"31 199 267 154 111 49 131 267 72 90 80 112 5 32 1", "10 140 121 59 256 280 265 296 118 14 257 46 282 53", " 73 41 226 230 207 251 259 255 198 271 129 224 297", " 64 213 169 218 132 155 180 89 249 132 258 108 175", " 60 56 256 131 264 230 37 108 278 18 38 141 51 88 ", "26 168 69 52 38 259 27 129 215 277 209 86 0 217 24", "5 28 92 126 185 177 127 103 173 175 132 37 236 20 ", "76 21 214 288 298 60 288 22 2 157 200 283 50 142 1", "45 193 174 190 109 224 15 28 167 0 234 25 156 124 ", "70 242 209 244 39 159 102 29 284 102 248 200 142 6", "8 44 255 70 99 161 75 254 142 121 102 196 126 5 22", "8 44 123 196 26 12 271 36 20 22 197 261 188 232 14", "3 38 14 263 96 219 58"};
    vector<string> R = {"214 258 291 247 236 108 142 297 120 211 91 246 16", "3 89 189 238 265 257 299 282 291 296 290 129 287 1", "84 289 77 288 71 237 260 210 284 281 272 270 288 1", "44 243 298 286 233 286 228 153 168 262 117 299 198", " 266 236 267 275 115 267 296 295 278 216 115 289 8", "1 225 172 155 283 60 231 165 138 102 266 119 223 2", "96 286 268 123 293 290 246 146 245 194 198 291 176", " 142 201 211 287 114 282 84 215 208 232 294 298 19", "4 298 66 234 244 272 298 133 192 293 217 183 215 2", "51 277 63 219 235 216 235 101 162 188 84 295 219 2", "95 277 256 232 204 290 220 294 272 269 238 296 282", " 250 275 177 93 279 170 294 251 296 252 39 292 92 ", "287 278 231 252 273 284 229 91 268 287 220 257 169", " 138 14 285 127 238 203"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 395512;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 300;
    vector<string> L = {"104 178 243 246 63 44 284 14 59 223 91 158 61 91 ", "13 120 192 260 184 259 33 225 197 64 129 131 134 1", "87 106 86"};
    vector<string> R = {"222 255 281 266 261 109 289 289 293 231 162 266 9", "3 179 299 288 248 285 282 286 222 234 266 202 237 ", "182 249 199 296 111"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 338567168;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 300;
    vector<string> L = {"256 292 243 204 10 166 158 78 189 186 179 33 260 ", "280 203 241 194 163 289 5 289 258 280 293 24 245 2", "60 286 4 193 221 168 23 50 117 230 141 174 31 243 ", "51 31 288 137 196 14 174 98 49 28 59 52 167 266 24", " 104 294 75 249 264 260 164 10 266 3 25 72 55 221 ", "159 120 113 120 229 19 244 224 186 15 38 251 130 1", "29 80 183 119 284 78 85 16 83 33 31 159 216 159 67", " 81 79 138 209 112 19 166 249 252 239 25 129 93 14", "5 284 195 21 190 211 151 131 272 265"};
    vector<string> R = {"292 298 260 256 54 268 238 90 245 221 182 65 270 ", "290 278 291 216 270 289 18 299 260 287 298 164 261", " 299 291 208 229 233 226 40 85 282 296 172 195 210", " 246 130 126 295 224 206 269 264 296 244 243 254 2", "72 176 266 73 150 296 177 274 272 282 207 58 290 2", "02 156 109 57 242 286 169 192 249 251 52 285 237 2", "57 95 84 259 243 249 263 209 216 298 199 101 146 2", "36 211 188 264 292 191 158 234 189 209 269 148 180", " 238 287 270 268 137 224 279 172 291 274 70 215 29", "0 209 155 296 294"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 86021896;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 300;
    vector<string> L = {"118 57 294 184 294 29 278 260 36 173 221 263 122 ", "112 270 22 23 66 228 2 1 9 139 148 274 45 223 198 ", "46 158 36 30 220 45 75 125 153 31 145 225 208 16 2", "78 62 28 31 155 58 217 67 279 18 226 228 95 198 25", "9 220 50 189 156 267 263 156 222 223 217 30 97 19 ", "109"};
    vector<string> R = {"265 202 299 194 299 197 290 269 155 284 251 295 1", "22 125 272 179 165 170 260 235 291 299 169 272 279", " 61 236 251 173 219 177 280 263 136 283 167 291 41", " 257 233 258 173 279 288 98 106 279 260 292 123 28", "7 73 275 297 288 229 288 283 221 235 236 288 289 2", "79 280 287 298 181 148 103 196"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 128390;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 300;
    vector<string> L = {"252 215 106 270 107 296 284 6 155 50 263 215 270 ", "206 168 2 110 93 75 174 270 19 248 60 128 133 159 ", "108 44 141 85 281 15 113 139 207 222 12 80 278 205", " 127 16 193 155 190 73 283 23 120 225 177 58 9 288", " 283 151 52 216 209 227 284 284 29 126 75 211 182 ", "161 98 269 62 36 267 299 224 169 118 105 22 257 72", " 6 253 173 6 77 73 278 16 291 13 94 262 260 201 72", " 115 25 74 147 249 147 240 259 255 1 17 1 59 175 1", "63 4 281 220 275 267 61 209 209 17 242 204 271 137", " 85 228 65 289 54 97 200 51 196 68 291 217 214 288", " 15 232 194 167 100 78"};
    vector<string> R = {"284 262 123 295 224 298 290 266 285 265 286 250 2", "79 254 277 167 195 236 260 230 291 76 274 228 148 ", "226 255 238 231 161 224 288 45 161 144 297 296 104", " 81 282 275 285 298 254 187 270 245 285 268 243 23", "9 201 291 149 291 299 211 209 237 246 297 292 292 ", "292 185 157 219 287 161 182 271 209 73 292 299 292", " 281 131 175 52 282 194 204 285 202 31 105 238 294", " 235 293 52 295 262 297 288 248 189 290 131 190 29", "2 208 250 278 286 30 289 63 246 189 172 265 291 25", "3 293 269 296 243 259 226 287 279 284 172 275 270 ", "181 296 173 182 235 246 224 209 299 251 225 293 24", "3 274 289 238 281 273"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2013168;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 300;
    vector<string> L = {"209 19 125 95 13 186 206 24 238 94 51 127 138 171", " 15 258 183 47 122 211 98 282 7 212 288 33 55 198 ", "180 291 12 53 19 159 127 295 93 138 52 144 155 55 ", "109 114 97 42 287 200 278 159 254 75 6 9 76 285 23", "5 91 278 237 128 98 210 203 293 244 77 282 87 83 6", "4 115 159 156 254 214 172 170 24 163 10 107 177 12", "4 281 211 24 115 69 94 40 71 182 273 60 108 105 22", "4 168 221 67 6 124 228 171 299 112 203 37 263 6 28", "0 71 207 96 227 164 221 15 194 64 110 155 219 91 5", "1 71 20 288 239 115 117 114 297 21 263 240"};
    vector<string> R = {"212 257 139 170 170 214 234 239 275 144 62 145 14", "1 190 217 276 228 149 217 214 168 288 251 215 298 ", "222 130 274 219 293 88 218 43 185 252 299 280 174 ", "208 298 213 193 247 146 149 241 297 236 278 231 27", "3 167 208 295 110 293 262 203 279 296 287 137 224 ", "241 297 244 207 284 134 162 97 141 178 283 273 238", " 274 209 118 250 80 224 193 193 284 238 32 149 173", " 215 68 99 287 292 82 190 162 295 180 283 261 258 ", "222 277 279 299 283 223 109 297 195 288 287 287 27", "8 289 230 241 216 209 194 208 233 275 258 183 239 ", "168 295 253 288 207 207 298 240 292 241"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 28808768;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 300;
    vector<string> L = {"158 96 221 26 234 261 103 113 22 134 274 102 66 2", "60 266 161 176 41 172 232 86 254 158 294 228 163 2", "00 278 5 124 137 58 267 200 203 295 13 152 199 203", " 205 170 6 80 39 49 49 7 214 243 75 18 201 231 86 ", "188 6 195 161 90 164 84 144 134 118 120 281 172 27", "7 268 47 127 241 170 280 5 140 222 24 280 147 50 2", "38 157 130 297 235 268 69 240 51 245 62 294 154 27", "9 72 277 155 258 215 236 67 45 73 259 236 36 88 23", "4 30 9 69 11 270 57 124 195 32 263 97 269 153 68 2", "59 123 27 121 106 36 167 233 243 256 273 267 168 1", "46 29 126 85 6 25 137 295 0 272 232 171 26 151 277", " 293 221 125 102 5 85 199 231 126 271 111 213 223 ", "69 278 208 22 185 243 177 228 87 98 79 174 277 254", " 66 5 110"};
    vector<string> R = {"288 285 298 202 259 262 272 225 238 165 286 230 7", "5 283 273 218 255 117 291 266 122 267 262 299 261 ", "183 233 291 143 141 152 165 299 230 251 298 38 232", " 249 296 207 267 247 184 183 56 194 271 235 244 16", "4 18 228 294 90 292 162 224 191 144 183 225 194 21", "6 269 230 295 204 291 284 125 165 285 220 287 174 ", "296 264 236 290 220 274 264 197 143 297 290 271 19", "4 292 70 296 102 296 246 287 263 286 249 258 242 2", "41 138 96 193 289 294 132 278 251 214 47 122 151 2", "93 114 224 286 111 269 98 286 161 111 277 247 226 ", "175 244 237 222 273 282 266 289 295 183 291 181 15", "2 159 187 273 180 296 242 290 286 242 65 245 287 2", "94 252 257 254 287 89 214 264 266 273 247 217 272 ", "223 295 214 221 225 298 285 235 120 299 121 177 27", "8 290 247 263 169"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 971143;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 300;
    vector<string> L = {"218 166 203 155 143 151 30 267 167 89 115 248 7 1", "82 230 136 31 129 84 114 199 276 291 93 236 162 27", "8 149 274 171 219 34 77 71 29 10 153 4 274 180 2 2", "63 275 111 253 165 206 279 209 6 233 74 82 257 16 ", "50 193 42 185 4 277 3 282 122 6 34 291 223 126 161", " 117 299 74 279 105 214 14 283 78 125 15 53 143 23", "4 256 79 14 82 225 232 230 42 64 29 71 279 62 137 ", "206 281 97 205 222 76 293 155 120 89 35 128 268 5 ", "47 91 68 55 46 146 153 117 121 291 133 208 281"};
    vector<string> R = {"232 254 254 254 235 273 214 287 248 283 249 271 1", "8 207 233 249 77 282 110 177 268 293 291 213 295 2", "52 288 219 279 177 284 164 97 217 141 34 231 41 28", "8 221 211 268 278 215 284 182 294 286 210 293 238 ", "202 226 295 274 72 292 215 267 75 294 61 291 234 2", "95 47 291 252 194 232 179 299 200 284 153 270 163 ", "293 214 268 170 83 190 294 295 234 60 217 239 298 ", "266 157 218 85 278 279 192 281 209 288 221 233 247", " 209 299 198 190 100 76 145 279 244 100 98 275 137", " 241 204 200 207 251 298 166 222 281"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4361120;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 300;
    vector<string> L = {"39 81 52 119 17 179 1 102 185 102 9 147 61 153 11", "1 62 75 168 260 50 100 229 112 31 282 195 187 23 1", "08 6 81 269 96 78 273 175 123 295 49 2 118 70 27 1", "5 263 237 169 289 27 85 115 228 180 45 57 236 75 2", "07 158 267 219 209 174 217 140 134 135 43 229 15 2", "93 248 123 114 147 124 60 40 298 269 0 223 194 26 ", "119 52 175 77 6 240 114 132 20 288 232 262 192 254", " 124 186 280 240 212 101 102 72 34 219 16 215 129 ", "54 223 264 261 155 92 102 8 13 262 201 9 44 155 20", " 140 62 93 133 258 177 231 269 240 282 226 263 12 ", "26 111 154 30 66 151 260 65 69 286 30 211 88 106 2", "61 13 41 86 104 72 172 114 220 93 63 57 59 279 126", " 51 150 172 4 43 251 210 62 274 195 248 220 16 110", " 161 92 287 112 216 221 204 215 201 111 68 76 238 ", "220 61 90 8 142 26 294 82 10 143 256 133 186 29 14", "6 261 123 127 11 63 23 54 27 41 11 32 68 110 16 21", "4 31 260 14 284 14 88 79 299 119 297 54 182 37 26 ", "234 202 137 164 11"};
    vector<string> R = {"177 101 220 295 265 200 51 147 265 236 53 273 255", " 267 194 64 261 221 292 206 248 287 281 146 284 22", "6 218 241 186 187 144 296 138 249 279 250 240 295 ", "54 269 257 176 93 294 287 288 248 298 140 212 287 ", "298 286 47 72 257 102 258 259 286 249 274 274 261 ", "203 145 295 116 297 40 295 254 218 204 228 261 217", " 258 299 298 117 278 276 188 287 241 196 196 81 25", "8 115 271 106 294 272 276 221 258 198 270 294 255 ", "236 278 288 93 137 261 111 286 187 82 236 294 272 ", "283 275 227 167 98 277 205 204 256 258 274 249 71 ", "156 266 298 208 254 270 295 289 266 295 171 234 19", "5 177 174 207 167 286 148 117 295 146 266 203 236 ", "276 224 186 273 123 135 179 220 271 105 173 225 87", " 291 126 262 212 224 28 90 262 240 280 295 241 250", " 273 207 119 193 231 296 276 218 255 223 237 201 2", "31 70 190 269 230 225 94 69 273 166 294 144 273 21", "4 276 214 255 139 236 299 280 224 78 260 105 80 22", "9 151 33 152 157 157 124 277 136 290 281 289 44 16", "9 232 299 133 299 116 205 259 182 239 279 237 235 ", "237"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2178474;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 300;
    vector<string> L = {"6 102 255 24 120 210 56 29"};
    vector<string> R = {"167 145 290 172 192 226 154 65"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 75802875;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 300;
    vector<string> L = {"176 298 204 72 146 194 61 216 27 79"};
    vector<string> R = {"177 298 217 135 177 216 115 238 87 272"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 573289479;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 300;
    vector<string> L = {"236 92 171 213 159 188 274 102 92 283 246 41 106 ", "235 48 280 144 193 218 56 267 90 18 33 230 269 177", " 128 252 197 156 240 155 91 42 28 94 164 126 295 2", "05 69 30 180 139 299 198 69 159 162 250 67 122 247", " 172 202 261 258 195 145 261 262 72 275 78 287 72 ", "215 37 181 46 119 229 192 218 101 186 143 235 204 ", "194 224 254 88 280 197 157 58 191 211 230 67 131 1", "62 144 274 46 43 10 234 64 177 212 146 16 24 41 20", "0 226 299 71 86 113 51 63 259 266 192 172 278 178 ", "159 112 157 142 268 297 206 259 184 52 29 103 214 ", "79 130 239 200 207 34 0 170 76 124 62 72 222 50 17", "1 201 262 163 117 86 215 182 154 13 281 187 115 87", " 178 117 171 263 115 292 224 299 145 198 146 215 1", "16 12 100 57 126 144 295 294 251 129 176 14 202 89", " 141 78 212 264 242 163 81 167 6 290 234 208 286 1", "32 32 13 32 235 88 21 132 102 55 119 174 130 277 2", "81 126 86 148 94 124 78 199 201 31 138 11 287 203 ", "41 28 88 165 122 128 12 91 54 151 178 145 112 206 ", "35 20 235 122 206 182 53 185 167 107 143 287 161 2", "74 43 97 210 48 22 208 267 156 191 115 220 255 204", " 63 54 143 189 30"};
    vector<string> R = {"264 209 286 259 290 203 298 175 264 283 254 125 2", "98 260 270 288 236 266 263 60 283 235 101 150 283 ", "276 280 291 252 237 271 244 157 206 172 236 106 27", "6 298 299 234 186 49 233 246 299 236 110 299 277 2", "93 161 154 255 191 219 294 272 278 186 280 291 111", " 286 174 289 237 269 249 196 238 218 262 269 287 2", "10 257 216 286 213 247 287 279 292 287 286 241 284", " 261 256 264 272 157 221 148 280 178 247 263 271 1", "26 237 255 162 101 127 86 234 278 299 101 205 121 ", "107 82 279 284 243 276 288 299 250 225 274 178 283", " 298 293 270 219 228 64 262 248 110 142 268 270 29", "7 181 19 236 153 266 225 232 283 242 232 293 271 2", "74 191 176 261 291 192 164 282 236 278 130 236 231", " 188 298 181 299 251 299 205 250 170 256 187 154 2", "46 203 131 296 296 294 278 257 188 242 246 172 165", " 97 294 298 285 279 280 243 93 293 272 270 286 292", " 251 207 251 278 136 78 253 190 106 180 237 143 29", "3 288 136 203 186 158 155 128 264 238 181 149 99 2", "90 274 127 35 179 220 221 296 50 149 253 281 298 2", "15 201 277 194 292 239 285 277 186 253 264 188 109", " 150 292 271 280 210 200 235 121 24 275 296 168 22", "1 279 232 263 299 166 274 150 209 88"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 15374597;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 300;
    vector<string> L = {"174 9 170 241 43 180 175 105 118 236 66 289 26 29", " 274 293 14 80 15 185 289 170 230 285 221 188 38 3", "5 147 280 250 62 202 139 30 97 248 45 90 205 276 2", "6 158 224 122 218 65 239 99 132 123 134 42 57 106 ", "282 31 63 145 83 126 278 4 158 125 164 204 254 151", " 289 97 16 201 2 113 243 226 41 149 216 241 30 243", " 281 55 54 173 19 79 9 73 135 269 69 43 44 299 24 ", "108 50 255 69 148 230 31 52 105 274 138 222 237 58", " 167 20 77 220 172 206 213 293 156 223 6 111 82 14", "3 6 75 235 127 225 165 13 18 197 25 228 232 217 16", "0 229 119 236 116 188 223 181 140 20 241 92 245 7 ", "175 116 4 164 225 103 76 262 157 169 226 89 163 61", " 84 233 178 0 270 93 130 102 69 164 38 17 236 66 1", "82 217 72 86 118 125 187 270 189 75 255 183 283 43", " 19 118 227 177 196 128 14 135 10 210 205 0 133 25", "8 256 216 113 277 59 193 134 217 199"};
    vector<string> R = {"195 294 193 291 69 281 227 177 123 258 130 296 11", "3 295 299 299 159 145 138 216 294 232 283 297 271 ", "267 51 75 187 287 294 174 244 208 170 183 294 219 ", "96 284 292 191 249 226 233 295 70 241 289 203 202 ", "169 174 100 291 296 148 209 282 272 179 279 168 16", "5 294 202 286 277 268 295 114 35 280 160 150 297 2", "36 254 214 225 281 156 296 294 259 88 273 156 236 ", "288 206 137 283 230 174 272 299 224 225 195 262 14", "6 226 262 299 119 296 276 296 267 295 63 263 48 28", "9 244 260 227 236 299 209 282 239 274 254 299 228 ", "171 236 170 291 275 250 216 232 25 278 238 275 287", " 285 222 286 264 249 296 196 197 40 244 166 253 17", "2 284 250 174 200 282 246 163 290 290 213 249 228 ", "286 166 197 298 260 160 294 224 273 208 288 166 26", "7 172 255 191 208 281 275 184 141 294 240 289 202 ", "85 258 276 295 270 142 217 284 216 199 177 123 281", " 186 266 246 249 240 260 266 254 292 298 217 278 1", "96 218 272"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 288438;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 300;
    vector<string> L = {"105 26 239 8 82 20 72 100 22 24 262 244 139 279 1", "07 178 206 155 26 209 123 210 190 283 253 173 53 2", "87 208 151 225 172 1 111 138 125 12 274 281 146 22", "7 41 216 286 157 20 97 161 27 131 47 50 6 17 182 2", "45 25 261 270 196 88 24 169 287 174 229 186 126 99", " 252 252 236 77 120 196 280 95 204 173 261 199 68 ", "71 81 253 2 108 132 211 171 90 280 231 131 292 54 ", "8 111 90 234 97 64 141 128 274 121 199 168 248 114"};
    vector<string> R = {"149 218 275 30 190 28 98 218 287 240 262 254 229 ", "290 251 204 269 289 28 222 224 257 275 289 267 261", " 290 299 292 233 271 270 251 238 281 125 104 297 2", "85 199 229 293 292 292 163 211 111 292 70 165 219 ", "188 26 182 291 257 267 274 277 283 288 27 299 287 ", "187 297 288 246 244 284 290 275 110 208 252 283 19", "2 247 291 299 274 235 295 121 296 242 120 174 246 ", "217 227 299 277 219 297 63 188 288 184 287 197 289", " 258 270 285 231 288 283 262 204"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 3296656;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 300;
    vector<string> L = {"258 160 256 123 95 230 20 207 193 265 166 113 177", " 262 177 178 163 14 158"};
    vector<string> R = {"266 166 278 166 222 278 73 237 267 291 209 190 20", "3 263 212 207 231 78 163"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 684573990;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 300;
    vector<string> L = {"38 281 158 39 149 122 19 185 199 240 283 57 204 2", "70 275 17 102 133 253 107 218 45 131 40 253 286 6 ", "49 67 248 75 50 182 248 23 60"};
    vector<string> R = {"220 288 166 199 240 138 21 215 288 256 290 224 20", "6 290 281 119 243 290 291 110 292 219 258 203 284 ", "295 152 50 230 288 98 89 258 295 31 262"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 708770846;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 300;
    vector<string> L = {"294 59"};
    vector<string> R = {"295 139"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 283690028;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 300;
    vector<string> L = {"78 232 165 224 102 171 254 100 174 60 101 107 50 ", "249 260 109 36 13 132 6 58 199 145 207 138 125 199", " 1 97 232 44 268 16 179 132 236 17 116 78 291 148 ", "93 20 93 288 76 50 254 93 176 173 277 267 137 4 26", "5 221 201 216 157 142 172 297 233 6 148 176 111 97", " 179 135 124 210 73 106 36 161 68 124 57 124 137 1", "96 155 275 284 284 71 207 64 30 93 144 127 273 36 ", "79 265 120 250 206 220 183 134 114 280 190 239 284", " 267 239 285 184 94 40 227 264 57 174 145 202 270 ", "157 235 241 269 203 143 221 152 104 247 2 212"};
    vector<string> R = {"85 296 201 293 150 274 279 222 279 134 165 190 26", "6 268 277 234 49 94 184 6 267 249 207 229 288 248 ", "239 211 123 232 218 279 75 247 296 257 207 161 111", " 299 193 278 161 227 295 188 92 286 154 185 220 27", "8 287 189 191 265 261 218 240 246 194 297 299 295 ", "245 257 274 190 270 261 230 163 251 175 127 89 184", " 69 158 218 258 226 225 233 276 284 294 112 229 26", "4 201 113 250 262 292 136 218 283 192 275 212 236 ", "295 285 169 293 279 260 293 286 246 287 257 201 11", "0 276 281 204 216 260 276 284 158 282 290 285 227 ", "234 239 248 267 256 2 230"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 62504584;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 300;
    vector<string> L = {"152 130 31 148 115 130 175 115 276 40 268 214 122", " 211 155 153 299 143 2 90 180 289 262 291 61 160 1", "2 296 138 193 243 280 163 230 147 197 207 108 54 1", "41 269 161 111 76 191 86 90 109 201 127 83 200 71 ", "174 116 53 64 275 92 17 15 128 40 299 161 279 130 ", "56 230 56 292 135 235 208 231 65 241 38 145 123 10", " 141 73 136 123 80 136 278 254 186 54 181 237 238 ", "37 270 38 163 95 291 244 183 19 286 223 277 210 43", " 211 137 71 16 137 254 298 198 89 39 210 95 185 82", " 220 32 98 97 144 175 50 104 283 75 75 159 32 53 1", "20 13 209 178 25 173 90 122 7 204 18 277 242 70 97", " 84 5 231 296 98 236 128 147 288 223 219 173 57 22", "0 166 106 123 261 273 81 196 210 119 3 240 175"};
    vector<string> R = {"200 260 293 278 159 175 245 135 281 129 293 252 1", "32 220 192 265 299 220 261 114 227 292 276 296 80 ", "165 218 298 233 222 246 293 172 294 281 225 254 18", "1 61 227 299 169 262 238 252 178 195 239 294 157 2", "64 218 275 190 186 76 95 279 248 165 88 190 112 29", "9 261 290 192 102 239 240 298 207 250 210 281 219 ", "267 292 275 235 250 261 155 298 232 140 263 297 25", "7 233 60 185 243 289 45 278 209 256 233 297 262 21", "0 161 287 254 279 285 97 227 284 79 247 220 256 29", "8 253 254 189 221 179 290 279 253 254 270 231 222 ", "255 257 227 296 257 156 273 283 196 230 182 247 23", "0 248 206 297 138 185 249 100 285 285 161 285 236 ", "126 275 298 177 296 149 241 292 230 266 268 186 28", "1 221 219 195 296 294 123 218 231 244 299 287 271"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 220388;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 300;
    vector<string> L = {"221 184 103 93 128 275 74 138 39 281 297 250 141 ", "113 182 144 157 284 101 199 203 231 128 165 35 153", " 41 153 81 20 148 283 219 267 104 291 135 101 209 ", "93 67 181 123 71 230 30 239 126 275 115 186 4 222 ", "293 167 108 168 200 45 32 74 48 233 198 73 49 59 6", "7 43 68 202 263 259 3 227 135 197 218 53 31 168 28", "8 158 277 4 35 171 277 207 51 132 64 256 152 10 96", " 227 3 100 255 256 209 165 1 268 150 67 182 44 26 ", "213 213 97 227 222 273 290 248 264 272 99 10 50 29", "6 20 258 71 138 67 251 189 55 110 65 66 225 247 17", "2 265 293 116 55 249 215 284 93 81 57 273 218 93 1", "00 112 16"};
    vector<string> R = {"256 190 222 118 149 277 198 269 286 296 299 294 1", "48 192 206 185 295 290 140 254 267 270 267 293 280", " 224 129 293 152 114 263 297 272 285 133 294 223 2", "92 278 180 211 238 225 158 277 138 252 168 284 184", " 285 48 264 298 221 238 194 284 262 287 269 148 23", "3 260 243 94 230 77 211 176 230 281 262 23 289 138", " 259 289 243 87 257 290 205 284 61 217 233 282 270", " 206 161 133 297 181 181 268 251 130 182 271 268 2", "25 277 102 282 260 75 285 231 276 231 253 143 231 ", "262 296 295 268 279 299 110 121 143 298 176 270 23", "1 146 210 256 218 90 289 101 130 236 298 245 268 2", "96 246 108 263 270 285 196 246 288 277 268 159 271", " 138 261"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 65049114;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 300;
    vector<string> L = {"201 227 155 48 123 250 132 252 58 89 275 135 191 ", "182 11 37 233 159 285 185 45 67 266 83 245 201 176", " 106 273 38 267 163 142 133 114 191 222 121 96 186", " 17 132 86 206 44 112 57 275 126 16 203 194 135 4 ", "3 231 278 162 294 140 198 227 135 44 124 196 154 1", "64 204 33 135 97 210 116 282 169 81 190 57"};
    vector<string> R = {"287 256 270 231 132 293 155 260 152 237 297 282 2", "65 255 52 161 248 222 292 210 86 256 296 132 297 2", "76 265 280 296 183 269 190 274 248 298 298 283 287", " 260 191 232 283 245 287 76 202 257 278 254 51 221", " 258 289 222 255 272 292 281 295 243 208 243 189 2", "46 247 285 225 221 235 163 197 117 298 258 299 210", " 189 257 111"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 91568368;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 300;
    vector<string> L = {"47 288 270 283 109 8 213 33 257 272 113 214 270 3", "4"};
    vector<string> R = {"140 293 287 287 199 205 256 290 283 288 135 276 2", "76 116"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 13174562;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 300;
    vector<string> L = {"57 174 188 17 60 102 26 194 35 35 131 82 173 54 1", "58 82 178 57 175 53 44 74 264 179 44 84 141 204 19", "7 243 271 38 120 13 36 9 267 248 282 12 217 296 26", "4 188 270 293 66 122 52 292 148 250 241 230 261 20", "8 70 28"};
    vector<string> R = {"98 222 198 145 120 232 151 201 250 148 151 162 27", "1 72 180 187 222 258 230 64 253 220 283 181 53 260", " 195 288 286 275 276 179 134 72 44 200 271 280 285", " 101 247 296 276 196 272 298 146 134 282 297 203 2", "72 249 262 278 247 285 73"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 508246512;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 300;
    vector<string> L = {"252 284 299 130 220 63 178 148 127 30 74 154 108 ", "19 155 184 193 239 194 245 237 26 2 132 267 147 16", "6 233 155 219 243 8 285 3 22 246"};
    vector<string> R = {"264 293 299 138 295 256 221 257 292 126 293 262 1", "44 34 266 233 219 295 204 285 277 137 65 166 276 2", "25 198 249 155 259 284 176 290 241 133 283"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 511391680;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 300;
    vector<string> L = {"182 93 170 182 284 117 64 52 208 21 211 271 82 10", "0 231 3 139 155 20 293 14 50 154 23 100 266 65 157", " 120 6 219 58 275 66 249 37 289 69 54 65 66 130 15", "8 252 107 0 81 87 175 206 171 73 199 180 107 224 2", "47 158 264 95 116 177 195 54 28 101 282 240 108 17", "4 58 48 0 159 299 134 44 14 137 41 119 27 47 195 1", "21 197 9 292 133 246 241 9 214 189 267 196 105 288", " 257 121 125 199 244 198 115 154 125 199 259 256 9", "5 146 165 274 60 23 209 57 233 253 164 130 115 147", " 171 13 20 297 121 280 73 283 256 70 108 223 108 9", "8 51 61 239 29 144 198 140 119 160 204 208 33 115 ", "254 120 103 265 89 147 161 62 289 5 195 297 218 11", "4 185 138 259 30 221 79 170 259 234 227 120 264"};
    vector<string> R = {"254 257 277 257 292 191 129 159 276 34 247 299 86", " 275 236 159 229 297 83 296 68 84 257 125 179 293 ", "270 268 222 38 287 119 295 286 264 283 290 83 144 ", "156 150 133 251 272 142 127 296 261 179 261 289 28", "1 292 271 156 272 268 220 274 152 289 232 221 77 1", "16 262 289 284 179 244 185 274 82 166 299 237 158 ", "132 273 157 189 79 87 204 166 230 38 294 293 299 2", "86 162 220 194 271 262 262 299 282 288 278 242 276", " 258 119 242 236 292 277 287 243 146 244 275 77 23", "6 269 70 259 255 212 251 211 299 206 232 225 299 2", "94 298 148 284 256 222 145 252 121 150 156 240 249", " 87 187 213 217 246 167 218 244 241 212 268 244 11", "9 270 272 154 245 128 293 81 262 299 287 257 299 2", "49 287 188 221 159 279 282 243 261 286 284"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 8363028;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 300;
    vector<string> L = {"8 167 17 49 64 277 241 197 46 186 83 256 20 206 1", "5 206 208 55 19 169 55 236 248 76 157 6 164 154 91", " 114 0 251 224 262 82 2 70 243 210 107 241 244 183", " 261 105 116 212 180 146 170 66 295 89 123 41 6 13", "5 116 36 141 116 291 294 128 181 272 232 5 50 2 27", "2 13 2 146 236 242 207 26 281 135 191 177 190 172 ", "298 139 117 271 202 197 292 97 72 269 201 161 197 ", "287 10 43 20 210 108 280 40 293 163 198 187 169 42", " 178 66 241 224 189 239 185 6 228 185 0 292 42 45 ", "77 111 39 168 150 88 289 0 69 90 291 67 297 211 15", "5 76 133 251 17 13 94 128 290 115 23 120 18 151 10", "8 219 288 35 118 44 223 256 296 256 143 96 259 170", " 181 80 119 141 94 167 293 286 98 284 176 68 212 2", "57 111 44 205 198 67 258 172 47 200 35 78 72 177 1", "06 263 288 177 260 175 146 299 210 191 195 248 36 ", "39 19 64 206 19 12 41 113 210 234 119 83 90 168 69", " 220 209 258 5 14 100 209 267 15 222 186 92 57 148", " 22 252 279 63 35 213 179 33 223 269 2 41 63 242 1", "44 234 54 248 17 292 175 82 24 234"};
    vector<string> R = {"297 289 243 155 227 297 282 285 281 284 278 285 1", "01 281 162 217 277 145 82 266 193 294 272 158 277 ", "31 181 193 231 282 106 287 294 284 123 73 103 265 ", "222 237 244 268 256 295 254 149 242 294 219 278 21", "8 295 191 171 194 217 255 289 120 192 297 298 298 ", "236 271 294 256 246 126 55 296 265 84 170 265 270 ", "215 109 292 210 292 236 246 187 299 270 177 277 29", "5 219 295 118 126 284 215 197 249 289 194 198 131 ", "270 130 299 176 293 248 277 217 285 158 251 126 24", "4 280 246 299 296 259 246 217 267 292 108 115 190 ", "220 196 207 249 242 291 248 261 225 299 130 297 24", "6 298 160 169 295 40 145 257 294 290 261 227 155 6", "8 264 285 235 298 241 168 136 288 295 298 267 246 ", "244 267 213 224 82 146 233 167 177 294 287 170 299", " 218 282 298 294 244 223 237 221 121 285 250 249 2", "72 92 184 142 198 154 299 293 291 287 190 271 299 ", "212 208 214 262 287 213 73 274 213 197 243 72 233 ", "224 290 256 195 219 204 168 292 231 265 178 225 24", "1 230 294 114 286 282 146 108 258 70 285 293 78 29", "2 227 196 295 279 295 211 73 225 270 257 276 201 2", "82 228 294 233 282 89 275"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 318287;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 300;
    vector<string> L = {"145 126 203 193 269 79 215 146 210 81 113 135 58 ", "135 173 265 256 166 158 244 42 143 196 22 29 114 4", "0 296 259 227 84 279 160 264 72 102 277 104 244 29", "9 50 176 113 183 82 190 39 24 295 149 72 285 177 2", "69 175 266 182 84 27 81 117 88 293 53 25 51 106 10", "4 170 222 285 287 67 291 294 69 214 70 116 70 23 2", "34 298 129 252 15 82 230 296 249 237 120 271 113 1", "58 111 220 3 189 233 210 250 92 80 94 159 265 282 ", "184 129 89 283 231 83 145 103 212 124 138 24 192 8", "7 25 33 190 159 224 293 157 280 145 136 283 59 94 ", "11"};
    vector<string> R = {"225 198 275 214 279 290 223 156 286 133 136 249 1", "24 182 246 267 292 170 268 257 109 271 273 223 181", " 122 224 297 277 284 231 290 201 298 285 265 286 2", "03 279 299 154 228 299 244 209 290 200 199 297 267", " 280 290 207 293 273 266 261 264 299 108 213 293 2", "98 59 262 228 111 195 284 233 286 299 222 297 295 ", "248 263 237 227 288 33 250 298 227 285 104 122 250", " 297 249 248 271 273 141 176 279 260 278 297 282 2", "94 260 283 167 97 207 291 287 210 191 280 293 233 ", "156 184 234 279 125 241 159 238 280 204 33 208 284", " 250 295 285 288 252 158 289 164 98 30"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1920464;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 300;
    vector<string> L = {"297 15 251 298 98 37 195 186 82 39 223 142 195 14", "1 19 150 94 261 179 98 6 17 277 117 269 287 257 12", "4 160 37 96 284 298 48 262 286 80 76 161 200 293 6", "6 261 52 98 173 117 141 187 166 246 280 266 28 226", " 141 97 76 211 230 220"};
    vector<string> R = {"297 224 268 298 117 218 278 287 231 165 223 222 2", "64 205 284 161 250 262 255 241 294 190 298 201 278", " 295 297 161 246 89 224 291 299 212 264 291 261 25", "8 211 200 296 155 261 205 239 226 158 204 207 230 ", "284 294 289 242 281 150 172 273 266 246 230"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 52755200;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 300;
    vector<string> L = {"150 207 61 237 232 213 101 291 263 83 282 94 215 ", "62 0 209 121 179 264 124 143 188 41 129 45 130 256", " 76 35 183 20 13 183 51 70 275 232 5 242 201 168 7", "0 102 93 206 245 218 37 114 168 138 66 281 84 15 2", "14 98 181 285 10 116 278 205 297 90 112 283 184 12", "0 233 279 265 172 9 48 253 214 115 155 231 3 141 9", "0 98 27 45 147 279 68 147 165 220 48 130 132 279 7", "6 292 203 101 1 278 180 124 47 177 66 56 281 254 7", "9 234 39 172 89 132 12 111 22 95 170 294 142 114 2", "70 269 193 62 181 13 80 167 22 169 10 283 190 3 21", "9 186 233 169 170 208 87 11 186 88 88 226 153 5 12", "2 190 211 7"};
    vector<string> R = {"250 246 80 296 273 289 265 293 285 169 295 288 24", "0 199 105 277 178 189 265 156 222 260 240 184 288 ", "194 288 197 241 202 129 23 249 188 244 298 239 89 ", "296 203 296 231 167 235 291 266 270 96 137 280 151", " 266 299 137 81 231 229 209 288 214 253 291 266 29", "8 298 176 295 194 196 287 289 279 263 9 138 260 26", "4 206 188 255 127 196 272 262 173 245 173 292 243 ", "275 199 267 84 215 158 294 109 292 276 148 151 288", " 192 165 188 240 109 216 299 266 104 293 282 242 2", "83 253 62 271 192 140 268 299 178 171 275 291 290 ", "125 211 128 150 197 263 299 262 294 265 171 271 23", "2 254 274 295 232 156 37 292 289 175 287 219 170 2", "11 236 259 145"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4671004;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 300;
    vector<string> L = {"179 15 132 64 63 17 188 138 252 113 254 11 299 29", "9 84 255 60 101 35 4 260 199 217 0 247 115 104 214", " 279 240 26 44 165 46 266"};
    vector<string> R = {"234 149 213 212 69 39 283 192 276 212 284 99 299 ", "299 198 277 283 159 218 85 286 232 292 59 257 224 ", "247 250 293 297 78 105 203 297 270"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 66594768;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 300;
    vector<string> L = {"220 72 2 221 150 194 27 56 267 176 73 48 104 291 ", "166 237 192 131 97 133 45 284 98 37 158 5 228 168 ", "96 222 158 82 128 1 261 30 136 169 168 12 113 262 ", "42 116 4 263 268 145 77 26 170 182 27 217 11 229 2", "28 207 120 137 219 208 64 207 57 231 257 228 97 5 ", "69 173 172 92 81 188 173 83 4 238 177 265 47 178 1", "53 82 110 189 245 242 231 80 21 144 121 256 236 19", " 164 294 237 203 53 175 115 210 9 285 297 49 295 2", "59 3 15 215 134 28 42 269 155 35 106 106 131 141 2", "08 286 230 158 76 51 83 108 275 164 21 23 200 165 ", "260 109 202 155 223 24 165 199 252 2 140 126 251 3", "0 3 151 71 253 286 150 219 163 102 271 55 200 174 ", "254 9 173 119"};
    vector<string> R = {"291 72 236 253 223 220 228 144 275 231 220 121 11", "3 291 238 296 231 290 278 241 292 286 231 162 223 ", "222 259 231 258 264 280 296 252 181 264 83 191 282", " 182 138 176 289 57 262 187 265 297 159 158 276 20", "6 228 230 225 259 259 286 250 156 257 245 239 208 ", "234 169 264 269 233 257 220 101 257 280 277 284 29", "5 202 265 144 273 183 289 108 232 179 197 215 274 ", "279 249 239 136 275 240 249 274 258 25 193 295 276", " 211 114 241 124 294 74 297 297 131 297 283 103 20", "2 218 135 293 283 279 270 139 183 154 273 239 253 ", "294 254 243 152 162 270 221 299 242 205 108 292 29", "6 261 215 206 162 262 132 226 240 264 8 156 178 29", "6 296 140 221 261 270 287 180 239 295 176 293 97 2", "87 198 280 241 255 293"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 7261170;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 300;
    vector<string> L = {"242 179 65 17 46 233 53 18 14 132 285 46 185 233 ", "64 30 14 25 123 216 62 137 80 269 198 126 199 126 ", "146 268 86 74 145 62 261 3 198 27 295 239 51 253 1", "97 166 1 38 102 207 36 15 279 194 266 151 267 160 ", "286 286 210 56 273 30 51 30 124 31 101 59 184 103 ", "284 107 13 261 250 45 92 1 184 75 77 234 156 111 1", "44 47 105 243 73 69 229 274 95 243 146 297 64 46 3", "6 163 246 208 179 254 149 15 149 62 3 207 240 139 ", "299 290 222 164 221 139 245 51 143 257 71 287 175 ", "211 63 172 64 263 289 205 112 171 111 246 141 21 1", "56 129 231 226 216 212 105 290 190 9 142 226 193 7", " 141 185 186 191 157 227 190 214 1 145 106 286 56 ", "216 48 88 164 244 51 0 283 28 229 30 108 254 81 27", "2 27 209 266 229 134 149 22 77 128 85 267 158 286 ", "269 22 135 157 72 250 238 140 117 189 183 37 285 1", "34 153 186 119 82 160 31 96 257 240 167 220 282 45", " 173 292 149 121 227 236 216 12 162 180 231 112 20", "4 48 161 147 201 287 276 182 239 53 106 168 203 12", " 192 180 127 247 85 210 236 272 263 13 284 180 72 ", "125 239 203 117 199 259 232 153 132 73 49 152 263 ", "54 159 249 288 48 211 186 210 200 173 124 114 283 ", "181 267 145 135 181 141 30 242 235 206"};
    vector<string> R = {"247 209 266 87 93 289 266 160 262 160 296 101 227", " 266 280 226 168 78 245 278 92 152 242 273 202 255", " 277 163 183 291 177 245 202 279 279 8 239 48 298 ", "245 252 278 262 213 25 198 194 296 198 263 298 272", " 273 274 268 276 296 290 267 229 274 202 162 273 1", "57 197 256 96 284 225 286 298 277 276 286 286 273 ", "182 192 273 278 291 173 142 277 65 273 278 225 69 ", "238 288 114 291 153 297 211 278 109 266 250 264 27", "1 281 183 190 193 169 115 278 298 160 299 291 282 ", "245 251 155 272 127 169 289 266 294 199 273 190 28", "9 82 296 294 295 178 272 289 278 185 293 175 289 2", "82 287 297 270 182 297 235 245 192 258 281 296 242", " 187 268 202 163 271 266 234 26 234 285 289 207 28", "0 177 111 293 266 130 117 289 80 247 289 179 270 1", "36 273 71 219 267 258 159 152 264 253 130 151 285 ", "211 287 299 151 248 180 149 274 242 175 163 294 29", "5 267 288 167 207 259 175 87 205 83 297 275 253 20", "4 226 288 162 292 293 184 202 242 274 261 91 223 2", "66 290 194 294 210 161 188 252 295 277 224 252 61 ", "247 252 226 290 208 216 276 295 297 260 294 285 28", "5 255 284 254 233 153 290 285 194 251 284 278 157 ", "247 150 208 274 292 293 198 271 292 164 240 190 29", "6 279 279 132 196 283 260 275 219 206 203 220 285 ", "270 278 251"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 1211006;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 300;
    vector<string> L = {"67 74 229 6 178 226 54 1 64 126 118 20 126 36 9 1", "08 81 239 40 39 182 78 195 3 32 74 204 48 293 2 12", "9 214 114 298 256 35 207 113 130 106 47 145 191 44", " 190 115 272 181 107 68 88 270 5 18 28 299 176 52 ", "11 140 184 85 275 264 291 18 232 132 78 242 274 21", "3 116 89 127 190 294 26 7 80 197 247 86 261 104 97", " 208 71 50 146 296 144 155 87 235 196 136 130 143 ", "255 138 120 239 223 60 294 189 196 262 159 280 192", " 62 152 259 57 89 25 132 145 230 252 108 106 278 2", "55 240 112 4 200 98 218 177 17 67 223 211 124 258 ", "96 134 71 288 172 277 48 249 127 256 91 278 3 75 1", "2 109 28 283 119 47 256 261 200 117 228 117 299 16", "6 123 30 7 222 146 251 230 142 80 266 121 96 99 17", "0 198 184 116 218 249 258 105 244 237 220 38 161 1", "39 210 218 92 165 200 187 288 169 57 162 141 138 5", "3 14 186 117 30 194 256 97 33 74 242 200 194 58 61", " 22 112 78 34 4 167 81 234 277 68 69 154 268 212 5", "6 99 77 116 48 111 168 245 261 76 223 139 28 270 1", "54 223 271 145 76 56 36 169 288 238 205 160 1 293 ", "247 276 232"};
    vector<string> R = {"173 118 277 258 218 230 114 200 111 237 150 41 23", "1 196 18 255 174 246 148 241 243 86 234 43 55 275 ", "266 173 296 213 259 290 149 299 266 240 278 229 19", "7 146 291 228 249 205 225 213 285 251 282 294 236 ", "288 38 212 209 299 192 161 289 286 188 244 283 270", " 296 52 294 281 146 261 274 269 262 119 174 275 29", "6 240 136 115 290 248 192 293 297 208 220 241 257 ", "165 296 238 270 236 256 295 246 203 238 281 153 15", "5 263 229 237 295 242 206 267 188 297 262 142 241 ", "276 189 210 71 251 246 294 288 233 256 287 298 259", " 140 44 222 259 218 208 250 243 269 222 264 280 24", "0 275 124 295 234 294 171 250 145 258 236 287 223 ", "120 50 281 201 285 217 84 275 270 252 146 299 187 ", "299 246 171 51 129 269 175 255 292 171 158 298 293", " 146 133 278 288 295 251 219 249 262 190 260 237 2", "50 110 179 277 216 236 110 270 234 214 288 292 107", " 257 190 281 270 85 227 265 31 265 260 128 62 284 ", "288 219 207 176 269 200 285 287 164 96 186 121 269", " 286 266 233 210 274 274 283 190 200 246 171 245 2", "19 284 296 163 267 201 83 289 236 298 276 158 163 ", "167 185 294 294 284 224 295 168 299 299 294 238"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2894880;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 300;
    vector<string> L = {"265 77 117 288 219 228 147 190 260 152 10 295 156", " 15 246 19 99 15 261 279 11 44 226 203 165 150 70 ", "25 249 156 262 197 129 189 144 270 190 43 151 23 1", "33 156 231 269 299 187 62 234 12 230 122 207 184 1", "80 45 208 13 62 97 206 268 277 235 8 153 211 36 28", "1 73 43 117 276 169 127 69 195 173 228 295 284 211", " 60 202 263 161 233 12 24 26 119 271 252 291 2 178", " 160 82 245 76 129 24 216 50 9 287 44 149 110 252 ", "3 16 294 49 132 292 153 35 151 133 17 125 37 252 2", "50 298 245 275 208 116 18 275 172 261 96 226 296 1", "52 36 182 5 216 198 183 156 14 245 135 137 39 183 ", "16 171 59 133 221 245 154 197 123 79 175 82 227 12", "5 25 274 148 32 236 88 33 130 5 237 201 132 93 285", " 192 139 113 289 229 96 163 135 139 245 67 37 96 8", "0 51 31 172"};
    vector<string> R = {"272 131 198 291 262 256 216 224 261 260 133 297 1", "64 156 279 206 248 20 265 296 56 45 257 209 258 27", "6 96 31 275 237 285 250 182 208 216 280 255 100 22", "1 266 216 293 280 293 299 236 123 281 223 260 288 ", "272 204 296 242 220 80 255 262 214 292 284 255 74 ", "269 254 213 287 295 294 237 289 264 221 203 250 27", "1 242 298 288 252 276 235 278 180 281 137 63 90 24", "2 290 292 291 255 294 217 176 258 108 277 134 267 ", "173 128 287 148 207 162 252 61 132 299 257 205 292", " 282 281 221 239 267 195 58 254 255 299 292 291 26", "9 156 145 285 239 275 139 275 299 226 295 262 141 ", "292 201 283 192 257 253 246 249 76 272 76 186 298 ", "187 290 259 169 242 193 272 193 170 253 164 27 281", " 276 217 269 199 294 237 156 286 231 178 183 293 2", "38 200 274 295 256 262 246 249 211 265 151 99 220 ", "180 294 278 273"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6223828;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 300;
    vector<string> L = {"136 241 8 148 268 235 122 161 224 59 91 24 146 50", " 246 9 213 130 299 158 138 286 212 54 171 93 257 5", "2 197 17 183 136 167 125 180 182 113 299 111 43 13", "4 129 147 78 234 23 32 114 282 81 257 290 99 196 1", "23 125 100 192 21 23 251 17 62 195 8 133 132 159 1", "63 191 250 266 100 172 170 136 239 132 235 120 34 ", "181 189 227 230 0 197 60 217 249 35 73 224 237 242", " 28 236 62 151 215 150 227 48 285 77 199 107 173 6", "5 161 223 236 103 87 119 135 141 225 118 14 209 27", "3 296 87 241 289 51 200 138 160 173 157 105 229 28", "2 116 180 53 175 195 6 137 203 244 28 172 62 268 2", "28 271 278 222 112 78 208 95 116 296 296 66 198 16", "2 161 293 141 60 82 270 165 249 39 166 238 259 107", " 26 135 264 104 0 266 146 65 28 99 111 170 207 31 ", "218 55 98 83 121 194 172 236 154 16 187 114 105 10", "1 249 298 235 275 105 124 178 187 161 85 98 47 228", " 259 194 157 246 22 92 52 26 222 46 249 13 20 259 ", "73 272 221 75 82 137 69 113 40 77 52 249 194 269 2", "60 253 257 297 87 52 109 285 68 264 48 270 96 136 ", "287 43 58 263 48 30 278 190 8 190 167 222 212 43 1", "20"};
    vector<string> R = {"213 242 216 221 286 245 224 209 295 125 215 276 2", "62 241 299 62 229 213 299 269 146 290 272 246 234 ", "121 257 54 256 22 282 285 244 254 206 299 196 299 ", "139 154 242 272 240 167 271 171 140 152 299 128 26", "7 292 165 228 193 231 276 296 152 60 293 116 127 2", "20 102 263 275 212 187 298 253 276 253 179 220 254", " 289 284 283 135 235 217 253 296 267 251 243 98 27", "6 263 271 217 246 257 258 225 264 182 153 233 211 ", "299 92 294 281 243 202 180 86 290 252 261 235 101 ", "155 273 285 258 136 106 259 277 296 278 289 289 19", "6 216 158 292 198 158 128 292 291 292 211 153 176 ", "195 260 152 276 284 173 172 295 296 248 297 289 22", "3 261 108 243 243 235 298 298 172 244 277 232 294 ", "164 158 244 272 168 266 41 244 248 273 270 228 194", " 294 134 289 287 179 133 90 124 149 233 240 234 23", "8 165 206 297 238 218 175 283 159 251 272 120 226 ", "117 263 298 246 293 141 281 251 288 294 222 218 64", " 232 264 288 250 276 137 272 196 155 244 212 263 2", "95 46 260 170 297 239 228 281 153 113 213 86 288 8", "4 274 281 291 264 280 298 299 248 116 282 293 238 ", "287 98 284 184 278 298 150 263 280 174 182 282 296", " 231 249 201 299 215 59 275"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 291695;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 300;
    vector<string> L = {"43 158 55 204 12 38 203 271 282 196 45 57 256 107", " 276 169 56 256 227 199 68 243 298 245 17 12 208 1", "90 204 272 230 65 138 35 87 48 48 99 132 273 54 51", " 213 49 233 167 118 120 103 138 156 215 25 142 193", " 157 186 240 65 251 112 180 149 45 227 224 37 64 1", "58 128 260 30 256"};
    vector<string> R = {"72 285 131 283 276 146 224 285 282 292 186 159 27", "4 153 285 217 85 275 260 243 244 261 298 297 294 1", "71 276 263 256 295 265 244 151 177 155 99 226 266 ", "271 284 276 297 249 172 270 227 254 149 283 148 27", "1 255 275 180 294 269 195 251 194 271 118 224 291 ", "153 246 284 282 263 252 128 266 237 259"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 798111225;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 300;
    vector<string> L = {"163 246 7 242 157 246 23 218 161 48 223 202 268 5", "2 194 44 25 10 172 100 260 144 36 87 126 235 98 16", "7 121 112 52 204 286 204 36 99 257 7 29 4 155 210 ", "177 180 121 174 225 41 34 243 210 198 72 146 116"};
    vector<string> R = {"192 270 269 259 259 289 293 273 209 112 276 248 2", "74 82 246 120 138 33 235 238 298 148 234 118 279 2", "87 127 288 126 173 177 237 289 282 258 223 298 78 ", "203 254 156 219 258 205 238 194 276 171 92 289 223", " 202 104 164 228"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 45076864;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 300;
    vector<string> L = {"42"};
    vector<string> R = {"215"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 920254956;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 300;
    vector<string> L = {"114 217 232 8 24 260 17 93 37 246 139 23 1 227 17", "2 176 31 225 297 246 284 234 124 85 100 67 164 1 6", "3 55 220 46 124 113 182 45 168 134 47 67 227 261 3", " 234 278 269 254 15 260 38 58 257 120 208 17 150 5", "5 55 42 12 17 206 179 168 1 208 158 41 27 199 227 ", "181 288 160 160 102 228 139 53 206 171 170 262 212", " 204 145 36 109 106 0 147 122 262 17 222 140 1 271", " 141 59 59 62 229 128 45 104 189 204 167 84 30 170", " 47 193 91 240 129 293 277 281 154 82 242 26 69 68", " 199 35 82 262 33 52 289 143 145 160 24 272 62 16 ", "217 250 192 240 67 133 192 177 143 179 99 160 93 1", "65 229 238 210 204 142 57 290 255 47 100 86 112 27", "2 122 32 200 230 248 95 14 168 101 88 101 62 105 3", "6 49 11 148 192 38 230 223 43 69 51 180 239 83 186", " 42 52 24 299 285 144 209 208 76 97 23 201 223 30 ", "232 232 278 118 199 251 292 279 239 74 130 297 243", " 282 80 102 164 29 10 5 248 287 79 188 143 158 81 ", "280 23 29 296 263 14 250 164 109 9 276 217 124 201", " 277 129 153 74 126 267 89 243 16 65 264 210 158 1", "30 125 203 74 81 247 296 170 62 186 27 270 177 123", " 279 43 258 128"};
    vector<string> R = {"258 254 263 96 158 275 257 128 173 270 233 176 12", "8 289 194 233 93 264 297 260 292 262 239 143 144 1", "07 208 100 95 289 236 257 182 182 235 141 174 208 ", "262 276 286 293 260 245 294 273 266 264 269 258 22", "8 285 282 227 233 286 251 89 194 61 240 293 298 21", "5 186 238 229 118 195 244 233 200 294 199 194 280 ", "285 298 224 267 293 191 264 283 243 263 78 154 271", " 123 260 244 272 72 285 229 70 279 296 178 157 276", " 256 206 207 194 207 224 174 299 150 230 263 206 1", "79 246 137 294 277 283 157 116 248 107 268 299 224", " 231 243 291 181 254 298 168 171 166 187 281 118 2", "97 233 290 250 258 236 205 213 222 184 275 287 195", " 271 218 299 291 242 219 244 191 292 298 236 210 8", "9 195 272 128 57 220 284 278 259 73 236 193 113 28", "0 150 274 156 160 109 171 224 40 239 279 223 105 2", "04 298 290 208 232 164 124 252 299 290 222 281 241", " 265 257 49 297 271 267 266 236 286 218 226 259 29", "3 284 287 138 256 298 248 292 170 160 174 110 260 ", "236 264 287 282 230 183 204 103 299 178 54 299 289", " 131 252 190 205 266 282 278 133 249 294 172 200 2", "54 201 287 171 275 185 190 296 291 292 203 128 218", " 146 137 283 299 194 231 263 288 278 197 268 286 7", "0 299 145"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 625569;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 300;
    vector<string> L = {"135 180 160 95 265 26 49 256 197 294 88 78 128 47", " 222 217 280 173 296 181 26 292 147 127 27 243 156", " 65 80 65 136 13 163 272 154 266 231 107 85 67 107", " 215 184 297 256 74 191 214 145 71 24 15 225 212 2", "6 5 192 108 50 183 12 170 28 193 105 105 234 290 1", "44 205 146 131 195 160 275 74 215 137 297 160 282 ", "218 123 104 124 81 86 119 160 261 131 57 91 135 35", " 131 92 118 97 258 189 52 272 232 24 241 38 22 154", " 253 130 161 26 297 156 148 216 139 10 97 47 228 1", "29 115 103 136 251 62 13 29 298 45 271 139 162 259", " 119 188 86 52 101 193 64 91 274 248 99 160 125 26", "7 193 205 40 133 265 17 21 175 212 216 129 191 162", " 69 35 76 88 65 179 107 176 132 272 231 74 52 201 ", "127 50 26 114 144 256 296 103 252 61 5 4 240 105 8", "0 180"};
    vector<string> R = {"159 191 160 144 278 280 52 270 202 296 132 277 16", "2 275 231 219 290 232 297 284 105 292 148 284 201 ", "270 159 287 214 294 288 219 168 289 193 299 288 20", "2 203 219 260 279 253 297 290 290 198 297 258 117 ", "284 253 227 243 149 245 220 281 205 277 26 270 146", " 290 291 188 258 294 191 207 250 194 243 209 294 1", "09 222 289 298 210 286 260 238 202 180 242 169 291", " 234 289 276 280 286 147 257 264 172 156 116 274 2", "25 97 276 297 203 274 55 221 211 283 242 249 41 29", "8 252 239 265 197 161 295 177 240 226 206 225 297 ", "266 251 83 272 299 100 274 250 257 276 154 287 161", " 108 294 240 238 183 282 269 277 276 238 279 256 2", "51 71 211 274 272 53 296 271 216 146 233 206 212 2", "61 93 116 104 228 253 225 250 282 290 83 172 239 1", "63 81 204 274 249 286 299 181 283 187 147 105 280 ", "225 285 239"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 57593568;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 300;
    vector<string> L = {"100 14 148 283 144 258 190 122 82 25 146 215 162 ", "254 80 82 189 128 15 153 171 152 226 244 113 41 90", " 128 193 15 83 61 275 117 193 100 123 295 67 100 1", "4 220 18 287 283 227 270 255 236 91 106 7 213 197 ", "145 163 190 144 279 294 55 107 224 154 193 141 178", " 230 168 200 2 207 278 106 240 54 40 295 261 44 5 ", "18 291 84 234 278 57 219 177 234 76 113 23 196 242", " 156 34 98 104 21 166 117 154 180 249 283 233 261 ", "169 191 247 191 190 12 60 265 88 168 279 236 102 1", "12 66 13 119 30 142 120 243 56 56 134 226 73 156 2", "5 143 228 155 64 261 298 103 157 219 277 1 133 119", " 166 118 199 208 4 193 220 83 52 28 208 263 227 13", "6 223 7 57 250 103 63 182 244 105 191 238 221 0 28", "5 3 237 260 189 278 208 42 288 39 291 241 210 281 ", "41 175 270 149 93 220 157 113 18 15 227 35 142 204", " 55 152 244 167 79 148 56 186 212 1 40 30 218 36 2", "3 153 81 103 284 54 207 271 165 122 144 114 120 18", "7 1 8 38 39 104 187 200 75 229 222 249 9 95 208 2 ", "244 192 190 11 83 0"};
    vector<string> R = {"226 250 180 297 298 289 294 145 171 161 237 246 1", "79 289 276 274 278 280 199 154 279 289 296 296 205", " 190 171 225 256 71 297 231 297 216 228 220 197 29", "6 75 178 109 236 143 291 285 267 282 288 267 150 1", "93 201 236 289 216 201 255 151 281 296 177 193 251", " 297 294 203 276 275 216 220 230 248 282 151 254 2", "76 155 296 278 187 289 249 293 198 253 289 227 262", " 188 255 252 154 131 202 290 244 147 159 147 81 24", "9 257 215 295 256 292 265 262 271 273 275 229 245 ", "219 235 270 218 197 298 238 179 176 266 87 280 234", " 292 184 243 224 157 180 230 266 254 168 229 299 2", "25 85 294 299 236 185 297 287 276 146 211 254 249 ", "224 271 207 247 236 291 150 197 231 280 296 226 22", "7 188 147 283 133 110 269 263 168 208 298 242 229 ", "296 72 244 273 283 286 230 141 288 57 297 296 290 ", "292 108 199 290 151 115 263 207 269 287 256 243 28", "1 146 241 73 201 255 273 91 237 299 186 224 67 48 ", "261 254 271 162 159 168 132 295 163 271 296 291 13", "4 218 277 229 198 48 38 127 269 275 249 285 232 26", "3 288 279 234 207 208 52 292 271 272 155 138 177"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 356979;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 300;
    vector<string> L = {"211 137 47 203 34 86 230 112 238 68 135 288 238 2", " 262 233 212 47 7 153 222 109 122 283 269 83 272 2", "22 293 132 29 15 48 109 279 13 127 249 52 193 18 2", "89 295 21 10 208 132 293 284 175 9 81 246 64 94 27", "3 19 162 94 78 58 290 104 250 83 295 94 132 48 210", " 216 38 265 166 269 122 269 7 60 196 2 64 61 200 3", "2 153 25 239 38 228 232 33 241 209 178 153 50 137 ", "109 233 260 155 82 280 211 106 2 130 4 187 252 9 2", "31 227 238 117 166 40 299 221 222 109 260 42 166 8", "0 225 60 255 169 45 81 238 128 202 145 228 112 88 ", "46 35 45 193 114 232 170 100 279"};
    vector<string> R = {"261 267 62 280 128 137 298 209 264 185 266 293 29", "9 134 271 295 252 294 134 239 234 214 278 296 280 ", "130 277 287 299 296 54 278 165 155 291 179 141 274", " 231 204 261 293 298 83 200 249 155 298 287 271 28", "2 213 253 77 165 278 237 189 190 242 182 292 245 2", "95 164 295 198 226 65 251 287 238 277 272 295 131 ", "296 112 74 244 157 79 155 237 73 169 292 259 85 29", "1 232 140 253 268 275 258 59 295 160 245 274 271 2", "32 293 236 252 171 289 99 191 287 95 263 299 247 2", "64 254 106 299 239 267 277 280 114 262 118 284 273", " 299 279 183 164 273 261 255 281 264 243 161 138 1", "43 119 225 130 250 256 223 286"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 12898372;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 300;
    vector<string> L = {"14 86 283 291 268 190 183 145 247 89 141 163 110 ", "79 265 224 169 159 140 166 47 127 145 188 10 41 34", " 103 39 131 284 124 123 165 107 272 203 189 222 15", " 67 116 206 192 192 212 165 278 98 125 21 86 133 1", "34 282 28 114 31 147 165 5 60 273 128 92 61 190 28", "2 288 217 251 73 84 282 56 80 133 246 77 252 211 6", "9 82 109 119 83 25 144 206 147 159 140 127 199 193", " 98 166 153 83 244 295 122 43 246 245 266 109 276 ", "98 208 297 293 54 154 33 17 202 211 146 46 14 198 ", "262 119 46 191 124 223 3 33 235 116 4 24 1 94 264 ", "255 17 235 166 50 228 201 203 250 144 266 99 21 21", "0 118 49 99 148 143 35 92 128 89 105 95 126 277 30", " 107 187 96 161 133 96 3 262 30 121 117 97 18 291"};
    vector<string> R = {"157 209 294 291 282 256 215 152 266 217 236 269 2", "53 147 281 257 185 193 224 246 123 200 172 252 100", " 48 55 252 222 163 294 243 228 179 197 285 279 293", " 265 99 236 179 207 229 211 261 200 279 276 188 74", " 214 223 182 294 276 283 50 242 189 280 78 293 264", " 299 98 272 296 299 244 258 123 134 283 153 184 25", "7 259 294 267 264 287 295 211 160 198 202 197 288 ", "154 253 264 261 259 234 99 289 173 114 244 295 163", " 144 257 293 277 178 277 119 288 297 297 257 155 2", "59 39 230 217 227 124 100 295 263 128 185 273 234 ", "299 74 250 247 275 136 212 245 226 293 288 80 276 ", "262 199 263 263 276 260 175 277 190 204 267 299 15", "9 109 273 275 131 202 219 207 207 266 201 283 246 ", "253 208 179 224 192 104 222 295 248 147 155 166 10", "5 299"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 2392112;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 300;
    vector<string> L = {"275 63 229 67 106 89 65 114 273 280 271 281 199 8", " 228 136 30 26 104 51 270 23 242 262 117 35 119 28", "9 299 87 297 69 67 93 78 20 14 245 154 49 211 152 ", "93 274 80 130 103 6 156 39 87 30 294 130 156 73 40", " 30 273 243 49 198 48 293 235 19 105 220 297 25 18", "3 123 221 149 56 280 285 160 77 98 106 41 68 65 29", "4 291 147 111 128 80 220 134 40 271 107 169 94 108", " 178 105 85 115 101 160 100 166 257 88 111 24 241 ", "278 293 143 71 154 200 299 188 186 115 282 289 103", " 182 73 141 24 180 283 177 273 186 128 58 146 45 1", "69 56 234 154 40 292 23 106 49 137 32 268 5 161 57", " 287 139 77 222 36 290 27 170 162 289 7 237 85 269", " 116 99 62 60 188 63 221 182 139 72 20 107 34 236 ", "194 80 159 187 297 216 259 50 30 295 160 165 48 14", "8 203 95 63 288 258 220 275 134 75 290 238 232 217", " 193 105 276 167 158 20 70 206 104 67 199 203 296 ", "266 99 264 174 199 17 143 77 0 243 96 154 35 35 22", "9 156 260 249 289 236 36 280 89 11 144 59 258 64 1", "06 260 72 274 230 218 298 226"};
    vector<string> R = {"284 108 275 255 179 119 253 237 299 288 280 290 2", "87 135 274 218 91 30 255 278 285 43 263 270 219 72", " 295 289 299 220 298 213 155 256 187 182 14 287 23", "1 119 235 171 279 290 254 271 281 174 255 155 249 ", "134 299 161 177 231 178 33 291 259 146 281 175 293", " 246 173 273 290 297 218 200 196 262 241 266 292 2", "86 215 208 240 171 178 242 143 299 294 279 175 243", " 150 258 293 200 294 123 195 233 133 261 242 212 2", "23 250 211 163 256 287 190 234 118 266 283 297 164", " 83 288 299 299 216 264 236 285 299 201 291 145 24", "5 74 228 288 235 282 226 238 64 199 290 224 269 24", "1 219 79 296 153 238 210 166 172 299 139 202 73 28", "7 201 108 226 296 297 188 274 278 297 180 249 267 ", "282 220 153 249 73 292 269 290 225 144 114 278 241", " 79 268 235 221 231 233 298 235 259 101 32 295 247", " 220 223 270 255 204 234 296 264 261 285 240 286 2", "94 241 258 263 267 293 276 275 158 20 119 229 105 ", "299 224 256 298 267 160 268 256 215 85 180 142 10 ", "249 299 260 294 269 277 263 262 258 293 265 67 282", " 298 208 174 197 296 131 213 261 109 284 250 262 2", "98 247"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 18865664;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 300;
    vector<string> L = {"62 24 99 250 161 296 20 172 165 279 0 108 71 57 6", "0 289 180 85 273 165 54 67 110 180 267 284 272 242", " 89 208 244 279 263 109 126 225 285 54 105 162 81 ", "36 0 206 137 292 177 124 249 1 122 218 78 162 12 8", " 29 4 235 6 101 71 141 256 164 277 117 189 74 241 ", "38 217 213 241 117 158 129 29 71 175 215 26 66 65 ", "43 169 110 36 240 182 10 150 188 299 14 229 66 50 ", "201 253 279 6 79 177 40 25 225 274 288 254 68 169 ", "279 80 87 211 61 231 293 211 141 80 116 243 189 27", "9 93 176 240 259 153 98 96 246"};
    vector<string> R = {"103 167 174 298 189 297 71 185 220 290 290 223 16", "3 110 298 289 208 89 280 223 240 234 112 184 267 2", "96 287 299 109 260 257 281 295 126 294 235 299 71 ", "194 252 171 234 168 217 150 294 291 196 297 191 29", "6 276 161 268 18 279 169 99 296 254 119 103 276 28", "2 201 293 183 227 199 293 246 224 270 250 160 173 ", "295 47 104 233 215 107 119 158 268 223 209 231 294", " 243 29 243 259 299 156 232 70 101 250 260 291 252", " 286 205 208 135 236 293 290 255 204 187 293 175 2", "85 289 65 296 295 231 219 280 183 282 238 298 257 ", "296 294 284 212 104 157 295"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 365906;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 300;
    vector<string> L = {"131 161 107 267 59 259 136 235 45 69 59 238 117 2", "64 299 181 115 76 252 243 98 165 170 227 165 70 10", "6 114 231 72 71 31 50 14 245 262 170 255 157 257 6", "0 126 22 138 245 153 296 177 43 242 93 121 292 239", " 274 276 96 23 295 76 141 290 184 105 267 136 180 ", "138 76 233 247 232 31 85 256 266 258 85 201 35 79 ", "13 175 221 121 61 234 206 275 49 31 117 22 95 284 ", "188 227 36 113 198 178 117 275 20 228 98 158 282 4", "7 42 230 129 14 90 58 235 97 222 117 114 288 182 8", "1 111 120 101 164 286 256 36 132 122 239 41 18 103", " 40 7 26 274 252 151 172 248 299 41 22 135"};
    vector<string> R = {"261 269 229 293 273 269 144 256 187 110 68 238 17", "5 291 299 183 237 229 274 264 181 211 290 252 198 ", "157 284 166 255 262 257 215 260 55 270 289 207 261", " 276 269 215 213 138 223 269 215 298 228 223 266 1", "87 231 295 272 288 297 184 166 295 239 196 292 298", " 133 270 178 259 192 189 263 269 236 190 204 288 2", "66 276 136 232 80 113 108 289 223 218 98 290 249 2", "85 178 64 169 189 106 292 286 251 291 164 251 215 ", "156 297 70 271 273 218 299 176 70 244 233 225 98 2", "68 249 204 253 148 274 297 266 259 174 142 222 239", " 298 284 94 297 196 274 293 19 292 66 49 238 287 2", "72 299 253 285 299 143 131 249"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 895332473;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 300;
    vector<string> L = {"86 57 254 85 74 228 155 145 116 159 280 122 58 10", "7 283 211 35 18 273 241 165 163 222 178 86 67 35 1", "08 258 232 123 38 148 109 21 198 137 267 167 261 3", "5 280 17 87 291 109 166 269 130 267 2 147 59 287 2", "15 88 114 230 30 187 256 106 144 208 125 290 187 2", "81 214 65 24 124 18 214 182 51 185 53 68 193 151 6", "5 203 136 256 86 93 58 266 156 212 12 134 121 174 ", "97 209 164 206 104 237 1 255 37 238 250 104 243 52", " 287 56 293 169 131 23 18 210 220 38 170 210 174 1", "62 276 19 164 262 296 33 127 177 212 213 286 5 110", " 142 179 273 109 265 111 72 184 268 261 277 265 15", " 20 166 207 60 159 135 176 61 18 151 290 114 291 1", "89 205 156 144 270 43 193 283 170 199 286 262"};
    vector<string> R = {"215 158 271 170 74 286 186 150 128 169 288 253 12", "2 150 293 253 91 225 280 287 279 173 266 188 147 1", "80 225 174 273 236 233 217 184 208 73 201 210 278 ", "225 295 182 280 94 288 292 274 179 274 229 272 213", " 211 127 288 229 221 287 266 199 252 260 192 173 2", "40 194 298 235 282 265 140 38 237 274 245 279 188 ", "197 226 260 292 154 266 256 196 295 153 197 135 28", "1 284 232 297 261 212 183 107 221 260 289 231 278 ", "172 283 150 256 295 225 282 151 297 237 298 187 15", "3 291 67 238 227 278 252 250 233 220 280 48 169 27", "2 297 261 269 245 241 253 297 93 153 143 295 283 1", "22 267 223 272 202 280 286 283 268 107 133 213 225", " 97 212 182 251 124 259 283 291 181 292 262 271 22", "4 174 294 160 243 297 180 252 287 269"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 4055448;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 300;
    vector<string> L = {"240 132 13 54 0 137 117 136 70 221 251 126 108 2 ", "187 61 188 6 221 247 294 176 255 146 22 57 113 175", " 254 151 185 280 238 168 62 18 72 120 112 164 62 1", "30 199 217 238 257 54 72 17 249 154 103 253 100 25", "1 245 34 240 273 284 179 5 288 0 281 270 188 5 183", " 15 152 284 69 90 292 130 35 183 71 226 62 298 280", " 212 188 118 184 151 176 195 289 278 112 292 192 8", "4 182 182 299 294 17 162 47 211 191 144 43 158 129", " 147 20 138 250 269 170 69 51 135 299 105 112 258"};
    vector<string> R = {"270 146 134 224 297 290 118 230 70 236 269 259 29", "0 37 222 168 267 174 233 278 294 222 262 165 251 1", "23 279 284 286 220 239 292 293 191 135 149 106 229", " 244 222 84 188 247 223 273 258 179 173 162 293 25", "3 226 283 160 294 290 281 289 295 295 259 286 288 ", "75 290 289 196 217 295 261 272 285 71 243 298 178 ", "39 294 209 228 293 298 283 222 278 236 185 222 217", " 238 295 282 280 297 203 207 188 291 299 297 204 2", "23 72 292 214 243 213 220 194 172 259 273 253 291 ", "212 161 155 163 299 209 220 292"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 178178;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 300;
    vector<string> L = {"241 194 59 290 167 177 276 253 56 56 115 260 42 1", "35 140 188 167 145 236 290 219"};
    vector<string> R = {"283 256 88 299 211 270 282 292 262 212 215 266 59", " 246 143 293 252 265 249 294 256"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 492150293;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 100;
    vector<string> L = {"0 2 2 7 10 1", "3 16 22 30 33 38", " 42 44 49 51 57 60 62", " 65 69 72 74 77 7", "8 81 84 88 91 93 96"};
    vector<string> R = {"41 5 13 22 12 13 ", "33 41 80 47 40 ", "4", "8 96 57 66 ", "80 60 71 79", " 70 77 ", "99", " 83 85 93 88 89 97 97 98"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 6419882;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 300;
    vector<string> L = {"0 ", "1 2 3 4 5 6 7 8 9 10 ", "11 12 13 14 15 16 17 18 19 20 ", "21 22 23 24 25 26 27 28 29 30 ", "31 32 33 34 35 36 37 38 39 40 ", "41 42 43 44 45 46 47 48 49 50 ", "51 52 53 54 55 56 57 58 59 60 ", "61 62 63 64 65 66 67 68 69 70 ", "71 72 73 74 75 76 77 78 79 80 ", "81 82 83 84 85 86 87 88 89 90 ", "91 92 93 94 95 96 97 98 99 100 ", "101 102 103 104 105 106 107 108 109 110 ", "111 112 113 114 115 116 117 118 119 120 ", "121 122 123 124 125 126 127 128 129 130 ", "131 132 133 134 135 136 137 138 139 140 ", "141 142 143 144 145 146 147 148 149 150 ", "151 152 153 154 155 156 157 158 159 160 ", "161 162 163 164 165 166 167 168 169 170 ", "171 172 173 174 175 176 177 178 179 180 ", "181 182 183 184 185 186 187 188 189 190 ", "191 192 193 194 195 196 197 198 199 200 ", "201 202 203 204 205 206 207 208 209 210 ", "211 212 213 214 215 216 217 218 219 220 ", "221 222 223 224 225 226 227 228 229 230 ", "231 232 233 234 235 236 237 238 239 240 ", "241 242 243 244 245 246 247 248 249 250 ", "251 252 253 254 255 256 257 258 259 260 ", "261 262 263 264 265 266 267 268 269 270 ", "271 272 273 274 275 276 277 278 279 280 ", "281 282 283 284 285 286 287 288 289 290 ", "291 292 293 294 295 296 297"};
    vector<string> R = {"0 ", "1 2 3 4 5 6 7 8 9 10 ", "11 12 13 14 15 16 17 18 19 20 ", "21 22 23 24 25 26 27 28 29 30 ", "31 32 33 34 35 36 37 38 39 40 ", "41 42 43 44 45 46 47 48 49 50 ", "51 52 53 54 55 56 57 58 59 60 ", "61 62 63 64 65 66 67 68 69 70 ", "71 72 73 74 75 76 77 78 79 80 ", "81 82 83 84 85 86 87 88 89 90 ", "91 92 93 94 95 96 97 98 99 100 ", "101 102 103 104 105 106 107 108 109 110 ", "111 112 113 114 115 116 117 118 119 120 ", "121 122 123 124 125 126 127 128 129 130 ", "131 132 133 134 135 136 137 138 139 140 ", "141 142 143 144 145 146 147 148 149 150 ", "151 152 153 154 155 156 157 158 159 160 ", "161 162 163 164 165 166 167 168 169 170 ", "171 172 173 174 175 176 177 178 179 180 ", "181 182 183 184 185 186 187 188 189 190 ", "191 192 193 194 195 196 197 198 199 200 ", "201 202 203 204 205 206 207 208 209 210 ", "211 212 213 214 215 216 217 218 219 220 ", "221 222 223 224 225 226 227 228 229 230 ", "231 232 233 234 235 236 237 238 239 240 ", "241 242 243 244 245 246 247 248 249 250 ", "251 252 253 254 255 256 257 258 259 260 ", "261 262 263 264 265 266 267 268 269 270 ", "271 272 273 274 275 276 277 278 279 280 ", "281 282 283 284 285 286 287 288 289 290 ", "291 292 293 294 295 296 297"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 322050759;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 300;
    vector<string> L = {"0 2 2 7 10 1", "3 16 22 30 33 38", " 42 44 49 51 57 60 62", " 65 69 72 74 77 7", "8 81 84 88 91 93 96 50"};
    vector<string> R = {"41 5 13 22 12 13 ", "33 41 80 47 40 ", "4", "8 96 57 66 ", "80 60 71 79", " 70 77 ", "99", " 83 85 93 88 89 97 97 98 299"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 502665130;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 300;
    vector<string> L = {"1 1"};
    vector<string> R = {"30 3"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 164201801;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 300;
    vector<string> L = {"1"};
    vector<string> R = {"2"};
    WolfInZooDivOne* pObj = new WolfInZooDivOne();
    clock_t start = clock();
    int result = pObj->count(N, L, R);
    clock_t end = clock();
    delete pObj;
    int expected = 322050759;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15498&pm=12534
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
 
class WolfInZooDivOne {
public:
  int count(int, vector <string>, vector <string>);
};
 
const int md = 1000000007;
 
int f[333][333];
bool have[333][333];
int lft[333], rght[333];
 
int WolfInZooDivOne::count(int n, vector <string> L, vector <string> R) {
  int m;
  {
    stringstream ss;
    int sz = L.size();
    for (int i=0;i<sz;i++) ss << L[i];
    m = 0;
    while (ss >> lft[m]) m++;
  }
  {
    stringstream ss;
    int sz = R.size();
    for (int i=0;i<sz;i++) ss << R[i];
    m = 0;
    while (ss >> rght[m]) m++;
  }
  for (int i=0;i<=n;i++)
    for (int j=i;j<=n;j++) have[i][j] = false;
  for (int q=0;q<m;q++)
    for (int i=lft[q]+1;i<=rght[q]+1;i++)
      for (int j=i;j<=rght[q]+1;j++) have[i][j] = true;
  memset(f, 0, sizeof(f));
  f[0][0] = 1;
  int ans = 0;
  for (int i=0;i<=n;i++)
    for (int j=i;j<=n;j++) {
      ans = (ans+f[i][j]) % md;
      for (int k=j+1;k<=n;k++)
        if (!have[i][k]) {
          f[j][k] += f[i][j];
          if (f[j][k] >= md) f[j][k] -= md;
        }
    }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/