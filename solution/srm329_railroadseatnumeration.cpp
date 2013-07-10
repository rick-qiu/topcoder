/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7243
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

class RailroadSeatNumeration {
public:
    string getInternational(vector<int> tickets);
};

string RailroadSeatNumeration::getInternational(vector<int> tickets) {
    string ret;
    return ret;
}


int test0() {
    vector<int> tickets = {1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> tickets = {11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> tickets = {45};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> tickets = {5, 7, 6};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "21 24 23";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> tickets = {21, 24, 23};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> tickets = {44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "44";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> tickets = {36, 3, 19, 20, 5};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 14 54 56 21";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> tickets = {8, 28};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "26 76";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> tickets = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 13 14 16 21 23 24 26 31 33 34 36 41 43 44 46 51 53 54 56 61 63 64 66 71 73 74 76 81 83 84 86 91 93 94 96";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> tickets = {11, 13, 14, 16, 21, 23, 24, 26, 31, 33, 34, 36, 41, 43, 44, 46, 51, 53, 54, 56, 61, 63, 64, 66, 71, 73, 74, 76, 81, 83, 84, 86, 91, 93, 94, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 13 14 16 21 23 24 26 31 33 34 36 41 43 44 46 51 53 54 56 61 63 64 66 71 73 74 76 81 83 84 86 91 93 94 96";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> tickets = {16, 26};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> tickets = {1, 24, 2, 13, 11, 32, 27, 28, 12, 22, 15, 19, 26, 34, 14, 10, 23, 5, 18};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 66 13 41 34 86 74 76 36 63 44 54 73 93 43 33 64 21 53";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> tickets = {11, 66, 13, 41, 34, 86, 74, 76, 36, 54, 63, 44, 73, 43, 53, 33, 93, 64, 21};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 66 13 41 34 86 74 76 36 54 63 44 73 43 53 33 93 64 21";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> tickets = {2};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "13";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> tickets = {87};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> tickets = {86};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "86";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> tickets = {100};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> tickets = {2, 92};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> tickets = {42, 58, 21, 52, 53, 76, 43};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> tickets = {16, 4, 22, 9, 15, 25};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "46 16 63 31 44 71";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> tickets = {16, 14, 11, 13, 53, 26, 44, 24};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "16 14 11 13 53 26 44 24";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> tickets = {16, 14, 11, 13, 52, 26, 44, 24};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> tickets = {22, 33};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "63 91";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> tickets = {22, 44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> tickets = {22, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "63 34";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> tickets = {33, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> tickets = {17, 51};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> tickets = {11, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 76";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> tickets = {10};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "33";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> tickets = {2, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "13 34";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> tickets = {36, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "36 46";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> tickets = {44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "44";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> tickets = {8, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> tickets = {11, 91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 91";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> tickets = {1, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 34";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> tickets = {11, 44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 44";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> tickets = {1, 44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> tickets = {41};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "41";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> tickets = {8, 91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> tickets = {56};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "56";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> tickets = {96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> tickets = {36};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> tickets = {6};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "23";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> tickets = {41, 61, 44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "41 61 44";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> tickets = {35, 91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> tickets = {10, 91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> tickets = {54, 12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> tickets = {54};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "54";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> tickets = {11, 100};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> tickets = {31, 41, 33, 84, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "31 41 33 84 76";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> tickets = {41, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "41 96";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> tickets = {11, 45};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> tickets = {10, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "33 34";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> tickets = {13, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "13 76";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> tickets = {21, 8};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "61 26";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> tickets = {36, 64};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "36 64";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> tickets = {12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "36";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> tickets = {91, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "91 11";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> tickets = {91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "91";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> tickets = {11, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 96";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> tickets = {96, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 11";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> tickets = {13, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "41 11";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> tickets = {11, 41};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 41";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> tickets = {11, 48};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> tickets = {22};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "63";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> tickets = {91, 93};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "91 93";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> tickets = {1, 2, 3, 33, 36, 67};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> tickets = {11, 21, 31, 51};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 21 31 51";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> tickets = {81, 83, 84, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "81 83 84 96";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> tickets = {100, 99};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> tickets = {46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "46";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> tickets = {22, 44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> tickets = {11, 37};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> tickets = {81};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "81";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> tickets = {1, 81};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> tickets = {24, 37};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> tickets = {37};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> tickets = {1, 2, 3, 36};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 13 14 96";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> tickets = {16, 5};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "46 21";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> tickets = {1, 2, 3, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> tickets = {96, 35};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> tickets = {11, 86};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 86";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> tickets = {11, 43};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 43";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> tickets = {43, 12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> tickets = {3, 71};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> tickets = {29};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "81";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> tickets = {100};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> tickets = {91, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> tickets = {96, 21};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 21";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> tickets = {39};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> tickets = {21, 24, 23, 45};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> tickets = {34, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "34 96";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> tickets = {51, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "51 11";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> tickets = {94, 74, 64};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "94 74 64";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> tickets = {11, 99};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> tickets = {56, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> tickets = {44, 6};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> tickets = {46, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "46 11";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> tickets = {13, 93};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "13 93";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> tickets = {41, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> tickets = {1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> tickets = {91, 5, 15, 35, 21};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> tickets = {1, 41};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> tickets = {43};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "43";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> tickets = {6, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> tickets = {1, 13};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 41";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> tickets = {23, 73};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "23 73";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> tickets = {38};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> tickets = {76, 83, 94};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "76 83 94";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> tickets = {11, 12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "34 36";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> tickets = {14, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "43 11";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> tickets = {8, 28, 11, 45};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> tickets = {71, 73, 74, 76, 81, 83, 84, 86};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "71 73 74 76 81 83 84 86";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> tickets = {93};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "93";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> tickets = {33, 93};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "33 93";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> tickets = {21, 24, 37};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> tickets = {41, 43, 44, 12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> tickets = {9, 10, 11, 12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "31 33 34 36";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> tickets = {28, 9, 5, 10};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "76 31 21 33";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> tickets = {36, 9, 8};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 31 26";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> tickets = {41, 9};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> tickets = {33, 43};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "33 43";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> tickets = {16, 14, 5};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "46 43 21";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> tickets = {11, 23, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 23 46";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> tickets = {76, 26};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "76 26";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> tickets = {44, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "44 46";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> tickets = {31, 61};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "31 61";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> tickets = {11, 91, 93, 94, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 91 93 94 96";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> tickets = {86};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "86";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> tickets = {21, 24, 23, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "21 24 23 76";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> tickets = {95};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> tickets = {94, 35};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> tickets = {44, 15, 99};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> tickets = {36, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 11";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> tickets = {13, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "13 46";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> tickets = {42};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> tickets = {12, 44};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> tickets = {12, 44, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> tickets = {13, 14, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "13 14 96";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> tickets = {96, 23};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 23";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> tickets = {8, 28};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "26 76";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> tickets = {4, 76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> tickets = {1, 12, 8, 73, 65};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> tickets = {8, 28, 36, 86};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> tickets = {24, 51};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "24 51";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> tickets = {24, 56};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "24 56";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> tickets = {43, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "43 46";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> tickets = {21, 22, 23, 24};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "61 63 64 66";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> tickets = {8, 54};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> tickets = {1, 11, 37};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> tickets = {11, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 46";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> tickets = {36, 11, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 34 11";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> tickets = {33, 1, 11};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "91 11 34";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> tickets = {96, 23, 54};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "96 23 54";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> tickets = {12, 36, 1, 2, 15};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "36 96 11 13 44";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> tickets = {35};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "94";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> tickets = {11, 21, 31, 41};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 21 31 41";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> tickets = {11, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "34 11";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> tickets = {11, 31, 41};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "11 31 41";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> tickets = {11, 22, 91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> tickets = {24, 22};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "66 63";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> tickets = {16};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> tickets = {1, 11, 55, 46};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> tickets = {11, 35};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "34 94";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> tickets = {91, 93, 94, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "91 93 94 96";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> tickets = {5};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "21";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> tickets = {13, 20};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "41 56";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> tickets = {13, 91, 1};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> tickets = {44, 12};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> tickets = {12, 13};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "36 41";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> tickets = {76};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "76";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> tickets = {94};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "94";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> tickets = {9, 46, 100};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> tickets = {9, 91};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> tickets = {1, 96};
    RailroadSeatNumeration* pObj = new RailroadSeatNumeration();
    clock_t start = clock();
    string result = pObj->getInternational(tickets);
    clock_t end = clock();
    delete pObj;
    string expected = "BAD DATA";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14946025&rd=10009&pm=7243
********************************************************************************
#include <algorithm> 
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
#include <iterator> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <string> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
const int MAXN = 100; 
const int inf = 1000000000; 
const double eps = 1e-8; 
const double PI = 3.1415926535897932384626433832795; 
 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef long double ld; 
typedef vector<ld> vd; 
typedef pair<int,int> pii; 
typedef vector<pii> vp; 
typedef queue<int> qi; 
typedef queue<pii> qp; 
typedef map<string,int> msi; 
typedef map<string,string> mss; 
typedef long long ll; 
 
#define MP make_pair 
 
const int num[4] = {1, 3, 4, 6}; 
 
class RailroadSeatNumeration 
 { 
   bool canbeDom(int n) 
   { 
     return n >= 1 && n <= 36; 
   } 
   bool canbeInt(int n) 
   { 
     if(n <= 0 || n >= 100) 
       return false; 
     int a = n / 10; 
     int b = n % 10; 
     return a >= 1 && a <= 9 && (b == 1 || b == 3 || b == 4 || b == 6); 
   } 
   int toInter(int n) 
   { 
     n--; 
     int a = n / 4; 
     int b = n % 4; 
     return (a + 1) * 10 + num[b]; 
   } 
  public: 
  string getInternational(vector <int> tickets)  
  { 
    string result; 
    bool dom = true; 
    bool inter = true; 
    for(int i = 0; i < tickets.size(); i++) 
    { 
      if(!canbeDom(tickets[i])) 
        dom = false; 
      if(!canbeInt(tickets[i])) 
        inter = false; 
    } 
    if(dom && inter) 
      return "AMBIGUOUS"; 
    if(!dom && !inter) 
      return "BAD DATA"; 
    if(dom) 
    { 
      ostringstream o; 
      for(int i = 0; i < tickets.size(); i++) 
        o << " " << toInter(tickets[i]); 
      return o.str().substr(1); 
    } 
    else 
    { 
      ostringstream o; 
      for(int i = 0; i < tickets.size(); i++) 
        o << " " << tickets[i]; 
      return o.str().substr(1); 
    } 
    return result; 
  } 
   
 
}; 
 
 
 
     
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/