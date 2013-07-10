/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7252
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

class VolleyballTournament {
public:
    string reconstructResults(int wonMatches, int lostMatches, int wonSets, int lostSets);
};

string VolleyballTournament::reconstructResults(int wonMatches, int lostMatches, int wonSets, int lostSets) {
    string ret;
    return ret;
}


int test0() {
    int wonMatches = 3;
    int lostMatches = 3;
    int wonSets = 9;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int wonMatches = 0;
    int lostMatches = 3;
    int wonSets = 6;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int wonMatches = 3;
    int lostMatches = 0;
    int wonSets = 9;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 4;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-1";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int wonMatches = 1;
    int lostMatches = 0;
    int wonSets = 3;
    int lostSets = 0;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-0";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int wonMatches = 1;
    int lostMatches = 0;
    int wonSets = 3;
    int lostSets = 1;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int wonMatches = 1;
    int lostMatches = 0;
    int wonSets = 3;
    int lostSets = 2;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-2";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int wonMatches = 0;
    int lostMatches = 1;
    int wonSets = 0;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int wonMatches = 0;
    int lostMatches = 1;
    int wonSets = 1;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int wonMatches = 0;
    int lostMatches = 1;
    int wonSets = 2;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 3;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-0";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 3;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 3;
    int lostSets = 5;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-2";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 4;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-0";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 4;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-1";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 4;
    int lostSets = 5;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-2";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 5;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,3-0";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 5;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,3-1";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 5;
    int lostSets = 5;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,3-2";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 500;
    int lostSets = 500;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 300;
    int lostSets = 300;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 499;
    int lostSets = 499;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 300;
    int lostSets = 301;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int wonMatches = 41;
    int lostMatches = 1;
    int wonSets = 123;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int wonMatches = 1;
    int lostMatches = 50;
    int wonSets = 4;
    int lostSets = 150;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int wonMatches = 1;
    int lostMatches = 38;
    int wonSets = 31;
    int lostSets = 114;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int wonMatches = 6;
    int lostMatches = 1;
    int wonSets = 18;
    int lostSets = 14;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-1,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int wonMatches = 0;
    int lostMatches = 36;
    int wonSets = 72;
    int lostSets = 108;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int wonMatches = 10;
    int lostMatches = 1;
    int wonSets = 31;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int wonMatches = 100;
    int lostMatches = 1;
    int wonSets = 301;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int wonMatches = 26;
    int lostMatches = 1;
    int wonSets = 79;
    int lostSets = 5;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int wonMatches = 1;
    int lostMatches = 74;
    int wonSets = 150;
    int lostSets = 223;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int wonMatches = 1;
    int lostMatches = 33;
    int wonSets = 69;
    int lostSets = 100;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int wonMatches = 79;
    int lostMatches = 0;
    int wonSets = 237;
    int lostSets = 0;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int wonMatches = 56;
    int lostMatches = 1;
    int wonSets = 170;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int wonMatches = 76;
    int lostMatches = 1;
    int wonSets = 230;
    int lostSets = 53;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int wonMatches = 1;
    int lostMatches = 35;
    int wonSets = 72;
    int lostSets = 107;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int wonMatches = 78;
    int lostMatches = 0;
    int wonSets = 234;
    int lostSets = 156;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int wonMatches = 42;
    int lostMatches = 5;
    int wonSets = 126;
    int lostSets = 15;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int wonMatches = 3;
    int lostMatches = 9;
    int wonSets = 10;
    int lostSets = 27;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int wonMatches = 58;
    int lostMatches = 4;
    int wonSets = 174;
    int lostSets = 49;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int wonMatches = 1;
    int lostMatches = 61;
    int wonSets = 124;
    int lostSets = 183;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int wonMatches = 93;
    int lostMatches = 4;
    int wonSets = 279;
    int lostSets = 198;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int wonMatches = 6;
    int lostMatches = 44;
    int wonSets = 18;
    int lostSets = 133;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int wonMatches = 6;
    int lostMatches = 29;
    int wonSets = 19;
    int lostSets = 88;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int wonMatches = 3;
    int lostMatches = 86;
    int wonSets = 170;
    int lostSets = 259;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int wonMatches = 5;
    int lostMatches = 51;
    int wonSets = 116;
    int lostSets = 154;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int wonMatches = 3;
    int lostMatches = 4;
    int wonSets = 17;
    int lostSets = 13;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int wonMatches = 4;
    int lostMatches = 27;
    int wonSets = 12;
    int lostSets = 85;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int wonMatches = 4;
    int lostMatches = 23;
    int wonSets = 13;
    int lostSets = 74;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int wonMatches = 53;
    int lostMatches = 6;
    int wonSets = 165;
    int lostSets = 117;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int wonMatches = 4;
    int lostMatches = 5;
    int wonSets = 15;
    int lostSets = 22;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int wonMatches = 32;
    int lostMatches = 2;
    int wonSets = 98;
    int lostSets = 70;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int wonMatches = 16;
    int lostMatches = 6;
    int wonSets = 59;
    int lostSets = 18;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int wonMatches = 2;
    int lostMatches = 90;
    int wonSets = 7;
    int lostSets = 273;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-1,3-2";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int wonMatches = 15;
    int lostMatches = 6;
    int wonSets = 56;
    int lostSets = 27;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int wonMatches = 19;
    int lostMatches = 2;
    int wonSets = 60;
    int lostSets = 43;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int wonMatches = 76;
    int lostMatches = 2;
    int wonSets = 231;
    int lostSets = 158;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int wonMatches = 2;
    int lostMatches = 66;
    int wonSets = 6;
    int lostSets = 202;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int wonMatches = 3;
    int lostMatches = 67;
    int wonSets = 10;
    int lostSets = 207;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int wonMatches = 51;
    int lostMatches = 6;
    int wonSets = 165;
    int lostSets = 36;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int wonMatches = 5;
    int lostMatches = 8;
    int wonSets = 30;
    int lostSets = 34;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int wonMatches = 11;
    int lostMatches = 4;
    int wonSets = 41;
    int lostSets = 34;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int wonMatches = 4;
    int lostMatches = 2;
    int wonSets = 12;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int wonMatches = 4;
    int lostMatches = 2;
    int wonSets = 12;
    int lostSets = 7;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int wonMatches = 8;
    int lostMatches = 8;
    int wonSets = 24;
    int lostSets = 37;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int wonMatches = 1;
    int lostMatches = 4;
    int wonSets = 10;
    int lostSets = 12;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,3-0";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int wonMatches = 9;
    int lostMatches = 7;
    int wonSets = 27;
    int lostSets = 39;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int wonMatches = 1;
    int lostMatches = 7;
    int wonSets = 4;
    int lostSets = 21;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int wonMatches = 6;
    int lostMatches = 10;
    int wonSets = 19;
    int lostSets = 31;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int wonMatches = 7;
    int lostMatches = 6;
    int wonSets = 26;
    int lostSets = 19;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int wonMatches = 3;
    int lostMatches = 8;
    int wonSets = 10;
    int lostSets = 29;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-1,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int wonMatches = 10;
    int lostMatches = 3;
    int wonSets = 36;
    int lostSets = 10;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int wonMatches = 8;
    int lostMatches = 5;
    int wonSets = 31;
    int lostSets = 15;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int wonMatches = 2;
    int lostMatches = 3;
    int wonSets = 9;
    int lostSets = 10;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int wonMatches = 3;
    int lostMatches = 4;
    int wonSets = 12;
    int lostSets = 15;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int wonMatches = 2;
    int lostMatches = 10;
    int wonSets = 25;
    int lostSets = 32;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int wonMatches = 7;
    int lostMatches = 4;
    int wonSets = 29;
    int lostSets = 22;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int wonMatches = 9;
    int lostMatches = 10;
    int wonSets = 46;
    int lostSets = 30;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int wonMatches = 5;
    int lostMatches = 3;
    int wonSets = 20;
    int lostSets = 10;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int wonMatches = 7;
    int lostMatches = 9;
    int wonSets = 26;
    int lostSets = 40;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int wonMatches = 9;
    int lostMatches = 9;
    int wonSets = 44;
    int lostSets = 44;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int wonMatches = 1;
    int lostMatches = 1;
    int wonSets = 4;
    int lostSets = 5;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,3-2";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int wonMatches = 2;
    int lostMatches = 5;
    int wonSets = 6;
    int lostSets = 19;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int wonMatches = 2;
    int lostMatches = 9;
    int wonSets = 24;
    int lostSets = 28;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int wonMatches = 6;
    int lostMatches = 10;
    int wonSets = 21;
    int lostSets = 42;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int wonMatches = 8;
    int lostMatches = 2;
    int wonSets = 27;
    int lostSets = 22;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int wonMatches = 9;
    int lostMatches = 2;
    int wonSets = 31;
    int lostSets = 24;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int wonMatches = 83;
    int lostMatches = 75;
    int wonSets = 249;
    int lostSets = 225;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int wonMatches = 76;
    int lostMatches = 58;
    int wonSets = 228;
    int lostSets = 175;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int wonMatches = 29;
    int lostMatches = 93;
    int wonSets = 87;
    int lostSets = 326;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int wonMatches = 49;
    int lostMatches = 80;
    int wonSets = 306;
    int lostSets = 240;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int wonMatches = 6;
    int lostMatches = 65;
    int wonSets = 18;
    int lostSets = 207;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int wonMatches = 92;
    int lostMatches = 19;
    int wonSets = 277;
    int lostSets = 57;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int wonMatches = 15;
    int lostMatches = 49;
    int wonSets = 46;
    int lostSets = 148;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int wonMatches = 98;
    int lostMatches = 10;
    int wonSets = 295;
    int lostSets = 166;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int wonMatches = 58;
    int lostMatches = 63;
    int wonSets = 299;
    int lostSets = 190;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int wonMatches = 19;
    int lostMatches = 10;
    int wonSets = 58;
    int lostSets = 68;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int wonMatches = 43;
    int lostMatches = 27;
    int wonSets = 129;
    int lostSets = 99;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int wonMatches = 8;
    int lostMatches = 64;
    int wonSets = 139;
    int lostSets = 193;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int wonMatches = 87;
    int lostMatches = 74;
    int wonSets = 265;
    int lostSets = 377;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int wonMatches = 2;
    int lostMatches = 65;
    int wonSets = 52;
    int lostSets = 198;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int wonMatches = 68;
    int lostMatches = 12;
    int wonSets = 208;
    int lostSets = 172;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int wonMatches = 78;
    int lostMatches = 38;
    int wonSets = 234;
    int lostSets = 269;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int wonMatches = 81;
    int lostMatches = 19;
    int wonSets = 280;
    int lostSets = 58;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int wonMatches = 75;
    int lostMatches = 67;
    int wonSets = 358;
    int lostSets = 266;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int wonMatches = 13;
    int lostMatches = 55;
    int wonSets = 148;
    int lostSets = 190;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int wonMatches = 96;
    int lostMatches = 96;
    int wonSets = 479;
    int lostSets = 480;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int wonMatches = 92;
    int lostMatches = 4;
    int wonSets = 276;
    int lostSets = 196;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int wonMatches = 84;
    int lostMatches = 17;
    int wonSets = 253;
    int lostSets = 219;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int wonMatches = 68;
    int lostMatches = 19;
    int wonSets = 225;
    int lostSets = 193;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int wonMatches = 68;
    int lostMatches = 79;
    int wonSets = 361;
    int lostSets = 373;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int wonMatches = 13;
    int lostMatches = 82;
    int wonSets = 203;
    int lostSets = 272;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int wonMatches = 3;
    int lostMatches = 2;
    int wonSets = 9;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int wonMatches = 3;
    int lostMatches = 5;
    int wonSets = 18;
    int lostSets = 16;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int wonMatches = 0;
    int lostMatches = 2;
    int wonSets = 3;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int wonMatches = 2;
    int lostMatches = 0;
    int wonSets = 6;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-1,3-2";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int wonMatches = 3;
    int lostMatches = 0;
    int wonSets = 9;
    int lostSets = 5;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-1,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int wonMatches = 90;
    int lostMatches = 100;
    int wonSets = 469;
    int lostSets = 479;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int wonMatches = 100;
    int lostMatches = 3;
    int wonSets = 305;
    int lostSets = 10;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int wonMatches = 0;
    int lostMatches = 10;
    int wonSets = 19;
    int lostSets = 30;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int wonMatches = 1;
    int lostMatches = 2;
    int wonSets = 4;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,1-3,3-0";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int wonMatches = 4;
    int lostMatches = 4;
    int wonSets = 19;
    int lostSets = 19;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 500;
    int lostSets = 500;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int wonMatches = 3;
    int lostMatches = 3;
    int wonSets = 9;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int wonMatches = 0;
    int lostMatches = 3;
    int wonSets = 5;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int wonMatches = 1;
    int lostMatches = 4;
    int wonSets = 9;
    int lostSets = 13;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 301;
    int lostSets = 301;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,1-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int wonMatches = 2;
    int lostMatches = 3;
    int wonSets = 11;
    int lostSets = 12;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,3-1,3-2";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int wonMatches = 0;
    int lostMatches = 4;
    int wonSets = 1;
    int lostSets = 12;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,1-3";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int wonMatches = 2;
    int lostMatches = 2;
    int wonSets = 7;
    int lostSets = 7;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,1-3,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int wonMatches = 3;
    int lostMatches = 2;
    int wonSets = 12;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int wonMatches = 4;
    int lostMatches = 4;
    int wonSets = 13;
    int lostSets = 13;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,1-3,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int wonMatches = 2;
    int lostMatches = 0;
    int wonSets = 6;
    int lostSets = 1;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-0,3-1";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int wonMatches = 1;
    int lostMatches = 2;
    int wonSets = 6;
    int lostSets = 7;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-1";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int wonMatches = 4;
    int lostMatches = 0;
    int wonSets = 12;
    int lostSets = 1;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int wonMatches = 2;
    int lostMatches = 1;
    int wonSets = 6;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int wonMatches = 100;
    int lostMatches = 99;
    int wonSets = 497;
    int lostSets = 495;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int wonMatches = 0;
    int lostMatches = 3;
    int wonSets = 4;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int wonMatches = 80;
    int lostMatches = 2;
    int wonSets = 243;
    int lostSets = 7;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int wonMatches = 3;
    int lostMatches = 3;
    int wonSets = 9;
    int lostSets = 14;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,3-1,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int wonMatches = 1;
    int lostMatches = 4;
    int wonSets = 10;
    int lostSets = 13;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,3-1";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int wonMatches = 0;
    int lostMatches = 2;
    int wonSets = 1;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,1-3";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 500;
    int lostSets = 499;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int wonMatches = 2;
    int lostMatches = 2;
    int wonSets = 9;
    int lostSets = 10;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int wonMatches = 3;
    int lostMatches = 0;
    int wonSets = 9;
    int lostSets = 1;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int wonMatches = 3;
    int lostMatches = 2;
    int wonSets = 10;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,1-3,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 499;
    int lostSets = 499;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,2-3,3-1,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int wonMatches = 1;
    int lostMatches = 0;
    int wonSets = 3;
    int lostSets = 0;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-0";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int wonMatches = 3;
    int lostMatches = 3;
    int wonSets = 10;
    int lostSets = 10;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,1-3,3-0,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int wonMatches = 0;
    int lostMatches = 1;
    int wonSets = 2;
    int lostSets = 3;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int wonMatches = 3;
    int lostMatches = 4;
    int wonSets = 10;
    int lostSets = 17;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,1-3,3-1,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int wonMatches = 1;
    int lostMatches = 2;
    int wonSets = 4;
    int lostSets = 7;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,1-3,3-1";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int wonMatches = 2;
    int lostMatches = 4;
    int wonSets = 13;
    int lostSets = 13;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,2-3,3-0,3-1";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int wonMatches = 0;
    int lostMatches = 2;
    int wonSets = 2;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int wonMatches = 5;
    int lostMatches = 5;
    int wonSets = 15;
    int lostSets = 15;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int wonMatches = 100;
    int lostMatches = 100;
    int wonSets = 300;
    int lostSets = 300;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,0-3,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0,3-0";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int wonMatches = 1;
    int lostMatches = 2;
    int wonSets = 7;
    int lostSets = 8;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "2-3,2-3,3-2";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int wonMatches = 1;
    int lostMatches = 2;
    int wonSets = 6;
    int lostSets = 6;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-0";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int wonMatches = 100;
    int lostMatches = 1;
    int wonSets = 300;
    int lostSets = 201;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int wonMatches = 2;
    int lostMatches = 2;
    int wonSets = 9;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,3-1,3-2";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int wonMatches = 5;
    int lostMatches = 0;
    int wonSets = 15;
    int lostSets = 9;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-1,3-2,3-2,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int wonMatches = 0;
    int lostMatches = 4;
    int wonSets = 6;
    int lostSets = 12;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int wonMatches = 2;
    int lostMatches = 3;
    int wonSets = 10;
    int lostSets = 12;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUITY";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int wonMatches = 3;
    int lostMatches = 3;
    int wonSets = 14;
    int lostSets = 14;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "1-3,2-3,2-3,3-1,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int wonMatches = 3;
    int lostMatches = 1;
    int wonSets = 9;
    int lostSets = 8;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "0-3,3-1,3-2,3-2";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int wonMatches = 1;
    int lostMatches = 0;
    int wonSets = 3;
    int lostSets = 2;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-2";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int wonMatches = 2;
    int lostMatches = 0;
    int wonSets = 6;
    int lostSets = 4;
    VolleyballTournament* pObj = new VolleyballTournament();
    clock_t start = clock();
    string result = pObj->reconstructResults(wonMatches, lostMatches, wonSets, lostSets);
    clock_t end = clock();
    delete pObj;
    string expected = "3-2,3-2";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10668&pm=7252
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
class VolleyballTournament 
{ 
// Global 
 
// Functions 
public: 
  string reconstructResults(int wm, int lm, int ws, int ls) 
  { 
    string res; 
    int n; 
    ws -= 3 * wm; 
    ls -= 3 * lm; 
    if (ls >= 2 && ls <= 2 * wm - 2) 
      return "AMBIGUITY"; 
    if (ws >= 2 && ws <= 2 * lm - 2) 
      return "AMBIGUITY"; 
    if (ws <= 1) 
    { 
      for (int i = 0; i < lm - ws; ++i) 
        res += "0-3,"; 
      for (int i = 0; i < ws; ++i) 
        res += "1-3,"; 
    } 
    else 
    { 
      ws = 2 * lm - ws; 
      for (int i = 0; i < ws; ++i) 
        res += "1-3,"; 
      for (int i = 0; i < lm - ws; ++i) 
        res += "2-3,"; 
    } 
    if (ls <= 1) 
    { 
      for (int i = 0; i < wm - ls; ++i) 
        res += "3-0,"; 
      for (int i = 0; i < ls; ++i) 
        res += "3-1,"; 
    } 
    else 
    { 
      ls = 2 * wm - ls; 
      for (int i = 0; i < ls; ++i) 
        res += "3-1,"; 
      for (int i = 0; i < wm - ls; ++i) 
        res += "3-2,"; 
    } 
    res = res.substr(0, res.length() - 1); 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/