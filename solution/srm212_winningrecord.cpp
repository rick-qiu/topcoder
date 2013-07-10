/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3003
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

class WinningRecord {
public:
    vector<int> getBestAndWorst(string games);
};

vector<int> WinningRecord::getBestAndWorst(string games) {
    vector<int> ret;
    return ret;
}


int test0() {
    string games = "WWWWWLLLLLLLLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 20};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string games = "WWWWWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string games = "LWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 3};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string games = "WLWLWLLWWLWLWWWWWWWLWLLLLLLLLLLLLWWLWLLWWWLLLWLWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 33};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string games = "LWWLWWLWWLLLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 12};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string games = "WWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string games = "LLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string games = "WLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string games = "LWL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string games = "WWWL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string games = "LLLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string games = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 50};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string games = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 50};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string games = "WWWWWWLWWWWWWLWWWWWWLWWWWWWLWWWWWWLWWWWWWLWWWWWWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 49};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string games = "WLWLLWLLLWLLLLWLLLLLWLLLLLLWLLLLLLLWLLLLLLLLWLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 44};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string games = "LWWLWWWLWWLLWWLWLWLWLLWLLLLWWLWLWWLLLWWLWLWLLWLWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 27};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string games = "LWLLLWLWLLLWWLWLWLWLWLLWLLLLLWWWLWWLLLWLLWLLWWLLWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 5};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string games = "WLWWLLLWWWWLWWLLWWWLLWLWLWWWWWWLLLLWLLLLLWWWWLWLLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string games = "LWWWWWWLLWWWWWLWLWWLLWLWLWLLLWLWLLLLLWLWLLWWLWLWWL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 42};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string games = "WWLLWWWWLWWLWWWLLWWWWWWWLWLWLLLWWWWWWWLWWWWWWWWLLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 4};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string games = "LWWWWWWLLWWLWWWWWWLLLLLLLLWWLLWWLLLWLLLWWLWWWWLWWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 39};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string games = "LWWLWWLWWLLLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 12};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string games = "WWLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string games = "LLWWWWWWWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 3};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string games = "WLWLWLLWWLWLWWWWWWWLWLLLLLLLLLLLLWWLWLLWWWLLLWLWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 33};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string games = "LLLLLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 12};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string games = "WWL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string games = "WLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string games = "WWLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string games = "LLLLLLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 13};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string games = "LLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string games = "WWWWWLLLLLLLLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 20};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string games = "LWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 3};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string games = "WWLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string games = "WWLLLLLLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 15};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string games = "WWLW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string games = "WLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 7};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string games = "WWWWWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 6};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string games = "WLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string games = "LLLLLLWLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLWWWWWW";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string games = "LLLLLLLLL";
    WinningRecord* pObj = new WinningRecord();
    clock_t start = clock();
    vector<int> result = pObj->getBestAndWorst(games);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 9};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=5858&pm=3003
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
#define si size()
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<char> vc;
typedef long long ii;
#define b2e(A) (A).begin(), (A).end()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define pb(x) push_back((x));
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{"; for (int i = 0; i < temp.si; i++) os << (i?", ":"") << temp[i]; os << "}";
  return os;
}
template<class S,class T>
ostream& operator << (ostream &os ,const pair<S,T> &a) {
  os << "(" << a.first << ", " << a.second << ")";
  return os;
}
ii gcd(ii a, ii b) {if (a<0&&b<0) return gcd(-a,-b); if (a==0) return b; if (b==0) return a; if (a > b) return gcd(b, a); if (!(b % a)) return a; return gcd(a, b % a);}
//int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
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
 
class WinningRecord {
  public:
  vector <int> getBestAndWorst(string games) {
    double best=0, worst=1;
    int BN=0,WN=0;    
    for (int i = 3; i <= games.si; i++) {
      int wc=0,lc=0;
      for (int j = 0; j < i; j++) {
        if (games[j] == 'W') wc++; else lc++;
      }
      double winratio = 1.0 * wc / (wc+lc);
      if (winratio - best >= -1e-9) {
        best = winratio;
        BN = i;
      } if (worst - winratio >= -1e-9) {
        worst = winratio;
        WN = i;
      }
    }
    int ret[] = {BN,WN};
    return vi(ret,ret+2);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/