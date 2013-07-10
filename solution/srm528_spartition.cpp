/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11634
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

class SPartition {
public:
    long getCount(string s);
};

long SPartition::getCount(string s) {
    long ret;
    return ret;
}


int test0() {
    string s = "oxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "oooxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "xoxxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "xo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "ooooxoox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "ooxxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "oo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "xx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "xo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "ox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "oxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "xxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "oxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "oooooooooooooooooooooooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 137846528820;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 35345263800;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "oxxooooooooooooooooooooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "oooooooooooooooooooooooooooooooooooooxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "ooxxooxxooxxooxxooxxooxxooxxooxxoooooxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 87420;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "xooooooooooooooooooxxoooooooooooooooooox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "xoooooooooooooooooooxooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "oooooooooooooooooooxooooooooooooooooooox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 695878;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "ooxxooxxooxxooxxooxxooxxooxxooxxooxxooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 8013698;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "ooxxooxxooxxooxxooxxooxxooxxooxxooxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 3526552;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "ooooxxoxoxooooxxoxoxooooxxoxoxooooxxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1339844;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "oooxoxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "oxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "xoxoxoxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "xooxoxoxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "oxooxooxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "xxxooxxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "xxoxoxoxoxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "xoxoxoxoxoxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "oxoxooxxxoxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "xo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "oxxxoxxxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "xoxxxooxxxxooxooxoxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "xxoxxxxxoxoxxxxoxxxxxxxxxxxxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "oxxxooxoooxoxxxoxxxoxxxooxxxxxxxoxoxxoxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "oxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "ooxoxoxoxxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "oxooxxoxooxxxoxxxxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "xoooooxoxoxoxoxooooxxoooxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "xxooxoxxooxoxxooxxoxoxxxooxxoxxoxoxxooxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 848600;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "xoxooxoxoxoxxxooxoxxooxoxxooxoxoxoxxoxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 409014;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "xxooooxoxoxxoxoxooxxooxoxooxooxoxxooxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2239122;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "xxoxooxxoxoxoxooxxooxoxxoxooxxxooxoxxxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 427276;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "ooxoxxoxoxooxxoxooxxoooxoxooxoxooxoxooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 796766;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "xoxoxoxoxoxoxoxoxoxoxxooxxooxxoxoxooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 406884;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "xoxxoxoxoxoxxoxooxoxxoxoxooxxooxoxoxooxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 265010;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "oxxoxxxxxxxxooooooxxooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 21280;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "xxxxooxooxoxoxooxxxxxoxxxoxxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 43652;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "xxxooxoooxxxoxoxoxoxoxxxoxxoxooxoxxxoxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 26350;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "xxxxxxxxxxxxxxoxxoxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 223080;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "xxxxoxxxxoxxxoxoxxxxxooxxxoxxxxxxxxxxoxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 9720;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "xxxxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2704156;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "xxxxxxxxxxxxxoxxxoxoxxxxxxoxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1666236;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "xxoxxxxxxxxxoxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 626159820;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "xxxxxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "xxxxxxxxxxxxxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 6864;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "xxxxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2704156;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "ooooooxxoooooooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 108166240;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "ooooooxxxxxxxxxooxxxxxooxxxxxxxxoooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 188176800;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "ooooooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 40;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "xxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 12870;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "xxxxxxxxoxxooxoxxxooxoox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2032;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "xxoxoxxxxxxxxxxxxxxxoxxoxxxoxooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1651104;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "ooxooooxoxxoxxoooxoxoxoxxxxxxxxxxxxxoooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2471040;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "xxxoxxxooxoxxxxxxxxxxxxxxxxxxxxxxxxxxoxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 120349800;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "oxoxoooooooooxoxoooooooooooxoooxooxxxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 26247120;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "oooxooxooooxxoxxooxooooxoooooxooooxooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1453864;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "xoxoooooooooooooooooooxxxxooooxooxxxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 53461668;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "oxxxoxxxoxooxxoxoxoxoxxooxxxoxoxooxoxxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 64168;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "xoxxoxxoxxxoxoxoxoxxoxooxoxooooxoxxxooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 785136;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "xoxxxoxoxxoxoxoxoxxoxoxoxooxxoooxxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 238704;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "oxoxoxxoxoxoooxxxoxoxooxxoxoxoxoxooxoxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 34800;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "xxxxooxoooxooxooxoxoxoxoxoooxxooooxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 4363154;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "oxoxxxxxoxxoxxoxoxoxoxoxoxxxoxoxooxxoooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1871746;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "xxxxxxooxxxoxoxooxoxooxxooxooxoxooxxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1720566;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "xxxxooooooooxooooxxxooxxxxoxooxxoooxoooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 7499712;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s = "xxxxooooxxxxooxxxxxxxxxxxxxxxxxxxoooxooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 85861152;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s = "ooooooxxxxooooxoxoxxooxxxxoooooxxoxooxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1398142;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s = "oooooxooooooooxoooxxxxxxxxxxxxxxoooooxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 7687680;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string s = "oxxoooxoxoxoxoxoxxxoxxoooxoxxoxxxooxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 5664;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s = "xxxooxoxoxooxoxxoxxoxxoooxooxoooooxoxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 35808;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string s = "xooxoxooxooxoxooxoxoxoxoxoxoxoxooxoxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 194350;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string s = "xoxxxooxxoxxxxooxxooxoxxoxooxooxxoxxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 88960;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s = "ooxxxoxooooooooooooooxoooxooxxooxxxoox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2326896;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string s = "ooxxxxxxooxxxxxxooooooooxxxoooxxxxxoxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 5394480;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string s = "ooxxooooooxxxxxxxooxxxooooooxxxxxoxoxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2016000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string s = "ooxxxxooxxxxxxxxxxxxxoxxoxxoxxxoooooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 3618160;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string s = "ooxxooooooooooooooooooooooooooooooooxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 14425929360;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string s = "oooxxxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 81930;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string s = "xxoxxooxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string s = "xxoxoooxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 359342;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string s = "xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1554752;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string s = "ooxxoooxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1477404;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string s = "ooooxooxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 477402;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string s = "xxxxoooxxoxxoxoxoxoxoxoxoxoxoxoxoxoxoxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 181966;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string s = "ooooooooooooooooooooooooooooooooooooooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 70690527600;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string s = "xxxxxxxxxxxxxxxxxxxxoooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 34134779536;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string s = "ooooooooooooooooooooooooooooooooooxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 46672124400;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string s = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 137846528820;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string s = "xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 695878;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string s = "ooooooooooooooooooooxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 34134779536;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string s = "ooooooooooooooooxxoooooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 18157819680;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string s = "oxoooxoooooxoooxoooooooooooxooxooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 5682996;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string s = "oxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string s = "ooxxxxooxxoooxxoxoxoxoxxxooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1711710;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string s = "xxxxoxxoxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 11597315760;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string s = "ooooooooooooooooooooxxoooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 17965673440;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string s = "xxxooxxxoooxoxooxooxxoooooxxoxxoxxoxooxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 71496;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string s = "xxooxxxxxxxxoxxxxxoxxxxxxxxxxxxxxxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 1826966204;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string s = "xoxxxxxoxoxxxxxxxoxxxxoxoxoxoxoxoxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2209704;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string s = "ooxxoxoxooxxoxoxooxxoxoxooxxoxoxooxxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 932162;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string s = "ooxoxooxooxoxoxooooxxxxooxxoxoxoxoxooxxo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 17336;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string s = "ooooooooooooooooooooooooooooooooooooooox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string s = "ooxxooooooooooooxoooxooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 2314751760;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string s = "xxxoox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string s = "oxooxxoxxxxxoooxxoxooxoooxxoooxxoxooxxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 210424;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string s = "oxoxoxoxoxoxxxxxoxoxoxoooooxoxoxoxoxoxox";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 52800;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string s = "xxxxxxxxxxooooooooxoxxooxxxxxoxxoxxooxoo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string s = "xoxooxxooooooooooxxooxxoxxxxoooxoxxxxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 240;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string s = "ooooxoxoxoxxxooxxoxoxoxoxoxxxxxxoooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 812220;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string s = "xxxxxxoooooooooooooooooooooooooooooooooo";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 46672124400;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string s = "ooooxxxxooooxxxxooooxxxxooooxxxxooooxxxx";
    SPartition* pObj = new SPartition();
    clock_t start = clock();
    long result = pObj->getCount(s);
    clock_t end = clock();
    delete pObj;
    long expected = 70297536;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14553&pm=11634
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
 
class SPartition {
public:
  long long getCount(string);
};
 
long long SPartition::getCount(string s) {
  int n = s.length(), i, c0 = 0, c1 = 0, a[55];
  for (i=0;i<n;i++) {
    if (s[i] == 'o') c0++;
    else c1++;
    a[i] = (s[i] == 'x');
  }
  if ((c0 & 1) || (c1 & 1)) return 0;
  int m = n/2, t, j, z[55];
  long long ans = 0, f[55][55];
  for (t=0;t<(1<<m);t++) {
    j = 0;
    for (i=0;i<m;i++) {
      if (t & (1 << i)) z[i] = 1;
      else z[i] = 0;
      j += z[i];
    }
    if (j != c1/2) continue;
    for (i=0;i<=m;i++)
      for (j=0;j<=m;j++) f[i][j] = 0;
    f[0][0] = 1;
    for (i=0;i<=m;i++)
      for (j=0;j<=m;j++) {
        if (i < m && a[i+j] == z[i]) f[i+1][j] += f[i][j];
        if (j < m && a[i+j] == z[j]) f[i][j+1] += f[i][j];
      }
    ans += f[m][m];
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/