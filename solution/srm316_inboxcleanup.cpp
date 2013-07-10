/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6619
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

class InboxCleanup {
public:
    int fewestClicks(string messages, int low, int high);
};

int InboxCleanup::fewestClicks(string messages, int low, int high) {
    int ret;
    return ret;
}


int test0() {
    string messages = "..........";
    int low = 5;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string messages = ".D.D.DD.D.";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string messages = "...D..DDDDDD...D.DD..";
    int low = 3;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string messages = "D.";
    int low = 1;
    int high = 2;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
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
    string messages = "....D";
    int low = 1;
    int high = 2;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string messages = "DDD.D";
    int low = 1;
    int high = 3;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string messages = "D.D.D";
    int low = 1;
    int high = 2;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string messages = ".D..DD.D";
    int low = 3;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string messages = "DDD.DD.D";
    int low = 1;
    int high = 2;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string messages = "DD.D..DD";
    int low = 1;
    int high = 4;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string messages = "DD..D....";
    int low = 5;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string messages = "..D.D...DD";
    int low = 9;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string messages = "......D..D.DD.";
    int low = 5;
    int high = 11;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string messages = "DDDD...D.D.DD..";
    int low = 1;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string messages = "DD...D.DDD.D...";
    int low = 7;
    int high = 12;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string messages = "...DDDDDDDDD...";
    int low = 2;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string messages = "D.....D..D.D.D.";
    int low = 3;
    int high = 14;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string messages = "DDD..D....D.D..D.DD";
    int low = 9;
    int high = 9;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string messages = ".DD.D.DDD.DD.D.D.DD";
    int low = 9;
    int high = 12;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string messages = "D..D...DD.DDDDDD.D..";
    int low = 19;
    int high = 19;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string messages = "..DD.DD.....D.D..D..";
    int low = 8;
    int high = 16;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string messages = ".D...D....DDD...D...";
    int low = 9;
    int high = 13;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string messages = "D..DD...DDD.DDDD.D.D..DD.";
    int low = 8;
    int high = 20;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string messages = "DD.D..DD.DD.D..DDDD.DDDD.";
    int low = 19;
    int high = 25;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string messages = "D..D..D..D.D.DDDDD...DDD.";
    int low = 9;
    int high = 9;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
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
    string messages = "D...D...DDD.D..D.DD...DD.";
    int low = 14;
    int high = 16;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string messages = "D....DD.D.DD......DD.DDD.";
    int low = 6;
    int high = 17;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string messages = "D.D..D..DD.DDDD.D.DDD.DDDD..";
    int low = 3;
    int high = 11;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string messages = ".D.D...DDD..DD...D.DD....D..DD";
    int low = 15;
    int high = 29;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string messages = "D..D...D.D.DD..D..DDD.DDD.D...";
    int low = 4;
    int high = 27;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string messages = "DDD......DDDDD....D.D.D.D..D..";
    int low = 16;
    int high = 26;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string messages = ".DD.D.D.DDD...D.D.D.D...DD.D..";
    int low = 17;
    int high = 25;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string messages = "D.DDDDD..D.D.DDDDDDD..DD.....DD.";
    int low = 16;
    int high = 20;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string messages = "DDD.D.D..DDDDDD...DD..DDD.D..D.D..";
    int low = 4;
    int high = 29;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string messages = "DDD..DD...D.D.DD...D..DDD..D.DD.DD";
    int low = 3;
    int high = 20;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string messages = "..DD.D.DDDD..DD.DDDDD.D.DDDDD...DD";
    int low = 19;
    int high = 22;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string messages = "..D.D...DD.DDD.D.DD...DDD....DDDD..";
    int low = 5;
    int high = 13;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string messages = "D.DDD...D.DDD.D.D...DD...D.DDDDD.DDD.DD";
    int low = 19;
    int high = 22;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string messages = "DDDD....D.....DD...D.DD.D.DD..DDD..D..D";
    int low = 12;
    int high = 28;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string messages = "DD..D..DD......DD.D..DDD..D.......DD..D";
    int low = 15;
    int high = 16;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string messages = "DDD.....DD....D.D.D...DDD......DD.D.D.D";
    int low = 11;
    int high = 29;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string messages = "D..D...DDD.D.DDDDD..DD.D..D.D..DDDDDD.D";
    int low = 10;
    int high = 22;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string messages = "D.DDDD.D....D....DDDDD..D.D..DD.D.DD....D";
    int low = 40;
    int high = 41;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string messages = "DDDD.D.D..DD...DD.D.DD.....DD...D.D.DD.D.D";
    int low = 11;
    int high = 28;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string messages = "D....DDD....D...D...D..D.D.D...D.DD.D..D....";
    int low = 14;
    int high = 15;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string messages = "..DDD..D.....D....DD.D.D.D.D..DD.D...D.DD.D.";
    int low = 16;
    int high = 21;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string messages = "...D.DDDDDD...D.D.D.DD.D.DD.D.D.D...DDDDD.D.";
    int low = 20;
    int high = 42;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string messages = "...DD.D......D..DDDDDDDDD..DD..D.D.DDDD...D.....D.";
    int low = 3;
    int high = 33;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string messages = "D....D...D.DDDDD..D.D..D...D.D.DD...D.D...D.D...D.";
    int low = 2;
    int high = 17;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string messages = "D.D.D.D....D...D..DDD.D..D.D.D.DD.DD.D.D.DDDD...D.";
    int low = 10;
    int high = 44;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string messages = "..DDDDDD....D.DD...D.DDDDDDD.....D..D.D.D......D.D";
    int low = 16;
    int high = 18;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string messages = "DD....DD.D.DDDD..D.....D..D.DD....D....D.D..DDDDDD";
    int low = 29;
    int high = 43;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string messages = ".DD.DD...DD..D..DDDD..D.D...DDD.DD..D.DDDDD.D.....";
    int low = 10;
    int high = 19;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string messages = "DD....D.DD.D...DDD..DD...D.D...D.D....D..D..D.DD.D";
    int low = 22;
    int high = 46;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string messages = "...D.D.DDDD..DD.DD..DD..DDD..D...DDD..DD..DDDDD...";
    int low = 2;
    int high = 38;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string messages = ".DD..DDDDD....DDD.DD.DDD..D..D...DDDDDD.DD...DD...";
    int low = 6;
    int high = 29;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string messages = ".DD.DDD.DD..D.DDDD..D..D..D.DD.D.D....DDDDD.DDDD..";
    int low = 4;
    int high = 32;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string messages = "D.DD.DD..DD.DD..D.DD.D....D..D..D.D.D.DD.....D..DD";
    int low = 37;
    int high = 50;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string messages = ".DDDD..DDD..D.D.D.D.DDDD.D...D..D..DDDDD.DDDDD.DDD";
    int low = 5;
    int high = 35;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string messages = "DD.D...DD...DD.D.D..DDDDDD.DD..D..DDD.D...D.D.D...";
    int low = 3;
    int high = 48;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string messages = "....D...DD.D..DD.D.D.D.DD..D.D.D.....D...DDDDD.DDD";
    int low = 12;
    int high = 42;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string messages = ".DDDD.DD....DD..D.DD.D..D.D...DDD.DDD.D..DD.D.DDD.";
    int low = 13;
    int high = 16;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string messages = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    int low = 6;
    int high = 12;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string messages = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string messages = "..................................................";
    int low = 50;
    int high = 50;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string messages = "..................................................";
    int low = 1;
    int high = 50;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string messages = "DDD.........................";
    int low = 1;
    int high = 3;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string messages = "DDDD.D.D..DD...DD...D......D....D.........";
    int low = 1;
    int high = 4;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string messages = "..................................................";
    int low = 1;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string messages = "D";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string messages = ".";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
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
    string messages = "DDDDD.....DDDDD.....DDDD";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string messages = "DDDDDD";
    int low = 4;
    int high = 4;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string messages = "......DDDD.";
    int low = 6;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string messages = "..........";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string messages = "..............................DDDDD";
    int low = 15;
    int high = 15;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string messages = "DDDDDDDD.";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string messages = "..........DDDDD";
    int low = 10;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string messages = "..........DDDD";
    int low = 10;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string messages = "DDD.....................DDD";
    int low = 1;
    int high = 4;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string messages = "........DDDD";
    int low = 8;
    int high = 8;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string messages = ".......DDD";
    int low = 7;
    int high = 7;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string messages = "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string messages = "DDDDD.....DDDDD.....DDDDD.....DDDDD.....DDD";
    int low = 1;
    int high = 43;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string messages = ".......DDD";
    int low = 1;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string messages = ".....DDD";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string messages = "..................";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string messages = "DDDD.DDD..DD....DDD...DD..D......DDDDD";
    int low = 1;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string messages = "DDDDDDD";
    int low = 4;
    int high = 4;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string messages = "......DDDD";
    int low = 6;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string messages = "DDDD....";
    int low = 8;
    int high = 8;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string messages = "....";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string messages = "DD";
    int low = 1;
    int high = 1;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string messages = ".................................................";
    int low = 5;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string messages = ".............";
    int low = 5;
    int high = 13;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string messages = "........DDDDD..";
    int low = 8;
    int high = 8;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string messages = ".D.";
    int low = 2;
    int high = 2;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string messages = "....DDD";
    int low = 4;
    int high = 4;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string messages = "...DDD...";
    int low = 1;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string messages = "DDDDDDDDD";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string messages = "...DD";
    int low = 3;
    int high = 3;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string messages = "DDDDDDDDDDDDD";
    int low = 10;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string messages = "DDDDDDDDD";
    int low = 3;
    int high = 3;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string messages = ".....DDD.";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string messages = "D.D..D..DD.DDDD.D.DDD.DDDD..";
    int low = 3;
    int high = 11;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string messages = "DDDDDDDD";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string messages = "DD...DDD";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string messages = "DDDDDDDDDDDDDDDDDD.................DDD";
    int low = 1;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string messages = "DDDDD";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string messages = "......................";
    int low = 5;
    int high = 5;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string messages = "........................................";
    int low = 3;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string messages = "DDD.........................";
    int low = 1;
    int high = 3;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string messages = "...D..DDDD.D...D.D";
    int low = 6;
    int high = 6;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string messages = "........DDDDDDD........D.D.D.D";
    int low = 19;
    int high = 20;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string messages = "...D..DDDDDD...D.DD..";
    int low = 3;
    int high = 10;
    InboxCleanup* pObj = new InboxCleanup();
    clock_t start = clock();
    int result = pObj->fewestClicks(messages, low, high);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15485957&rd=9996&pm=6619
********************************************************************************
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
#define FOR(I, L, R) for (typeof((L)) I = (L), TMP_##I = (R); I < TMP_##I; ++I)
#define FORE(I, L, R) for (typeof((L)) I = (L), TMP_##I = (R); I != TMP_##I; ++I)
#define FOREACH(I, C) FORE(I, (C).begin(), (C).end())
 
class InboxCleanup {
public:
  int fewestClicks(string messages, int low, int high);
};
 
int InboxCleanup::fewestClicks(string messages, int low, int high)
{
  int res = 12345678;
  int n = messages.size();
  FOR(k, low, high+1) {
    int p = (n+k-1) / k;
    int cur = p-1;
    FOR(i, 0, p) {
      string s = messages.substr(k*i, k);
      int zle = 0;
      FOREACH(it, s) if (*it == 'D') zle++;
      int jak = zle <? s.size() - zle + 1;
      if (zle > 0) jak++;
      cur += jak;
    }
    res <?= cur;
  }
  return res;
}
 
// Powered by MBMagic 0.12
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/