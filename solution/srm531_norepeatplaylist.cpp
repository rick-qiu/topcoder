/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11774
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

class NoRepeatPlaylist {
public:
    int numPlaylists(int N, int M, int P);
};

int NoRepeatPlaylist::numPlaylists(int N, int M, int P) {
    int ret;
    return ret;
}


int test0() {
    int N = 1;
    int M = 0;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 1;
    int M = 1;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 2;
    int M = 0;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 4;
    int M = 0;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    int M = 1;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
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
    int N = 50;
    int M = 5;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 222288991;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1;
    int M = 0;
    int P = 1;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 1;
    int M = 1;
    int P = 1;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
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
    int N = 1;
    int M = 0;
    int P = 2;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1;
    int M = 1;
    int P = 2;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 2;
    int M = 0;
    int P = 2;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 2;
    int M = 1;
    int P = 2;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 2;
    int M = 2;
    int P = 2;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
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
    int N = 1;
    int M = 0;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 1;
    int M = 1;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 2;
    int M = 0;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 2;
    int M = 1;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 2;
    int M = 2;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 3;
    int M = 0;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 3;
    int M = 1;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 3;
    int M = 2;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 3;
    int M = 3;
    int P = 3;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 1;
    int M = 0;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 1;
    int M = 1;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 2;
    int M = 0;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 2;
    int M = 1;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 2;
    int M = 2;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 3;
    int M = 0;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 3;
    int M = 1;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 3;
    int M = 2;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 3;
    int M = 3;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 4;
    int M = 0;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 4;
    int M = 1;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 4;
    int M = 2;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 4;
    int M = 3;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 4;
    int M = 4;
    int P = 4;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 47;
    int M = 47;
    int P = 47;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 846397273;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 47;
    int M = 46;
    int P = 47;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 846397273;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 47;
    int M = 47;
    int P = 48;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 1;
    int M = 0;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 1;
    int M = 1;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 2;
    int M = 0;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 976371283;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 2;
    int M = 1;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 2;
    int M = 2;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 3;
    int M = 0;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 956927880;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 3;
    int M = 1;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 964556918;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 3;
    int M = 2;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 3;
    int M = 3;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 100;
    int M = 0;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 437918130;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 100;
    int M = 100;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 437918130;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 42;
    int M = 20;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 917652623;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 35;
    int M = 4;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 241141251;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 70;
    int M = 33;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 113350320;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 79;
    int M = 78;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 472081547;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 63;
    int M = 16;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 791270589;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 6;
    int M = 5;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 720;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 82;
    int M = 61;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 443647325;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 62;
    int M = 50;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 362358782;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 96;
    int M = 11;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 22353827;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 28;
    int M = 13;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 491360085;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 92;
    int M = 3;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 635215935;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 3;
    int M = 1;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 964556918;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 14;
    int M = 6;
    int P = 93;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 137054740;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 16;
    int M = 5;
    int P = 17;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 122941672;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 31;
    int M = 19;
    int P = 48;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 654394566;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 37;
    int M = 0;
    int P = 39;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 834227218;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 52;
    int M = 22;
    int P = 68;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 35563645;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 14;
    int M = 6;
    int P = 95;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 282801414;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 20;
    int M = 12;
    int P = 23;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 353616274;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 62;
    int M = 25;
    int P = 65;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 762027972;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 11;
    int M = 11;
    int P = 54;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 38;
    int M = 36;
    int P = 45;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 601830705;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 60;
    int M = 15;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 228534218;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 99;
    int M = 3;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 989467997;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 37;
    int M = 7;
    int P = 97;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 945713644;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 50;
    int M = 30;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 226791857;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 53;
    int M = 3;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 177662748;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 50;
    int M = 23;
    int P = 81;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 885425071;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 49;
    int M = 7;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 437821697;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 5;
    int M = 5;
    int P = 5;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 80;
    int M = 8;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 467650474;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 100;
    int M = 25;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 437918130;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 64;
    int M = 33;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 910604984;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 40;
    int M = 15;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 553780149;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 25;
    int M = 13;
    int P = 60;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 23832333;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 88;
    int M = 5;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 638621416;
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
    int M = 1;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 437918130;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 50;
    int M = 10;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 663536800;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 10;
    int M = 10;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int M = 10;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 437918130;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 99;
    int M = 5;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 53044368;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 50;
    int M = 7;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 363575434;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 20;
    int M = 2;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 545911587;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 60;
    int M = 25;
    int P = 100;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 145208404;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 13;
    int M = 9;
    int P = 39;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 997218499;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 50;
    int M = 50;
    int P = 50;
    NoRepeatPlaylist* pObj = new NoRepeatPlaylist();
    clock_t start = clock();
    int result = pObj->numPlaylists(N, M, P);
    clock_t end = clock();
    delete pObj;
    int expected = 318608048;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=14724&pm=11774
********************************************************************************
#include <cstring>
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
 
#define forn(i, n) for (int i = 0; i < (int)(n); i++)
 
class NoRepeatPlaylist {
public:
  int numPlaylists(int, int, int);
};
 
const int MOD = (int)1e9 + 7;
 
const int maxN = 103;
 
typedef long long ll;
 
int f[maxN][maxN];
 
void add( int &a, int b, int k )
{
  a = (a + (ll)b * k) % MOD;
}
 
int NoRepeatPlaylist::numPlaylists(int N, int M, int P)
{
  memset(f, 0, sizeof(f));
  f[0][0] = 1;
  forn(i, P)
    forn(j, N + 1)
      if (f[i][j])
      {
        add(f[i + 1][j], f[i][j], j - min(M, i));
        add(f[i + 1][j + 1], f[i][j], N - j);
      }
  return f[P][N];
}

********************************************************************************
*******************************************************************************/