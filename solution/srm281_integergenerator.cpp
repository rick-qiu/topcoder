/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5984
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

class IntegerGenerator {
public:
    string nextInteger(vector<int> allowed, string current);
};

string IntegerGenerator::nextInteger(vector<int> allowed, string current) {
    string ret;
    return ret;
}


int test0() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "16";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "17";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    string current = "16";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "18";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> allowed = {3, 5, 8};
    string current = "548";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> allowed = {5, 3, 4};
    string current = "033";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> allowed = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    string current = "999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5};
    string current = "0";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> allowed = {9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> allowed = {1, 9};
    string current = "1999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9111111111";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> allowed = {2, 1, 3};
    string current = "112";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "113";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> allowed = {5, 3, 4};
    string current = "303";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> allowed = {5, 3, 8};
    string current = "458";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> allowed = {};
    string current = "1";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> allowed = {};
    string current = "0";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> allowed = {};
    string current = "4444";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> allowed = {};
    string current = "84753";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> allowed = {0};
    string current = "0";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> allowed = {0};
    string current = "000";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> allowed = {0, 1};
    string current = "1000";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1001";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> allowed = {0, 9, 7, 5, 4, 8, 2, 1, 3};
    string current = "987983186";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> allowed = {5, 1, 8, 0, 9, 2, 6, 3, 7, 4};
    string current = "893713571";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "893713572";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> allowed = {4, 2, 5, 1, 6, 8, 7, 9, 3};
    string current = "1834295170";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> allowed = {9, 0, 7, 6, 3, 2, 4, 5, 1, 8};
    string current = "0987654321";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> allowed = {1};
    string current = "1";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> allowed = {1};
    string current = "111111111";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> allowed = {9, 4, 1, 0, 7, 3, 2, 8, 5, 6};
    string current = "399";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "400";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> allowed = {1, 3, 7};
    string current = "11";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "13";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> allowed = {3, 4};
    string current = "3344434444";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "3344443333";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> allowed = {0, 8};
    string current = "0808000000";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> allowed = {3, 7, 1};
    string current = "7331337713";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "7331337717";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> allowed = {9, 3, 5};
    string current = "5535555339";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "5535555353";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> allowed = {2, 5, 8, 6};
    string current = "5582625558";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "5582625562";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> allowed = {4, 3, 2, 9};
    string current = "3429293439";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "3429293442";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> allowed = {5, 6, 2, 8, 7};
    string current = "2275776628";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "2275776652";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> allowed = {6, 9, 3, 0, 2};
    string current = "9023366603";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9023366606";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> allowed = {1, 0, 3, 7, 8, 9};
    string current = "8109819170";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8109819171";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> allowed = {9, 3, 4, 1, 2, 0};
    string current = "0140192301";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> allowed = {2, 4, 7, 9, 8, 3, 0};
    string current = "7943788447";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "7943788448";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> allowed = {4, 6, 2, 5, 8, 7, 0};
    string current = "8706724265";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8706724266";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> allowed = {8, 6, 7, 5, 4, 2, 9, 1};
    string current = "8548441422";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8548441424";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> allowed = {9, 0, 1, 5, 3, 4, 6, 2};
    string current = "2210242206";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "2210242209";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> allowed = {3, 5, 6, 1, 7, 0, 2, 9, 8};
    string current = "5527276981";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "5527276982";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> allowed = {8, 6, 3, 4, 2, 9, 0, 5, 1};
    string current = "1099126551";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1099126552";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> allowed = {2, 8, 5, 9, 0, 3, 1, 4, 7, 6};
    string current = "2021708718";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "2021708719";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> allowed = {7, 5, 8, 3, 1, 4, 6, 0, 2, 9};
    string current = "3175987181";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "3175987182";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> allowed = {7, 0, 3, 2, 8, 4, 6, 5, 1, 9};
    string current = "1463207662";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1463207663";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> allowed = {6, 7, 8, 5, 9, 4, 0, 1, 2, 3};
    string current = "7227100332";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "7227100333";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> allowed = {6, 1, 7, 2, 4, 3, 8, 5, 0, 9};
    string current = "5709639115";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "5709639116";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> allowed = {3, 7, 0, 5, 4, 1, 9, 2, 6, 8};
    string current = "1842275803";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1842275804";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> allowed = {3, 7, 0, 8, 5, 1, 6, 2, 4, 9};
    string current = "3122037429";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "3122037430";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> allowed = {4, 8, 5, 0, 2, 6, 9, 1, 7, 3};
    string current = "9608337895";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9608337896";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> allowed = {8, 2, 3, 7, 6, 5, 0, 4, 9, 1};
    string current = "8960747306";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8960747307";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> allowed = {5, 4, 1, 8, 0, 7, 3, 9, 6, 2};
    string current = "1042279301";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1042279302";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> allowed = {5, 2, 1, 4, 3, 0, 9, 7, 8, 6};
    string current = "8961686285";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8961686286";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> allowed = {6, 4, 5, 3, 1, 8, 7, 9, 2, 0};
    string current = "8249165588";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8249165589";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> allowed = {7};
    string current = "777";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "7777";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> allowed = {1};
    string current = "1";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> allowed = {4, 6, 8};
    string current = "468";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "484";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> allowed = {9};
    string current = "99999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> allowed = {5, 3, 4};
    string current = "033";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> allowed = {1, 0};
    string current = "1111111111";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> allowed = {9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> allowed = {9, 0};
    string current = "999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9000000000";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> allowed = {0, 9, 8};
    string current = "9999999998";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> allowed = {1};
    string current = "1111111111";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> allowed = {1, 9};
    string current = "1999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9111111111";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> allowed = {1, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> allowed = {9};
    string current = "999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "4147483647";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "4147483648";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> allowed = {0, 9};
    string current = "999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9000000000";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> allowed = {9, 0};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "90000000000";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> allowed = {2};
    string current = "2222222222";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "22222222222";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> allowed = {8, 0};
    string current = "888888888";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8000000000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> allowed = {9, 1};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> allowed = {8, 9};
    string current = "123123";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> allowed = {0, 1};
    string current = "01";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> allowed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> allowed = {0, 2, 9};
    string current = "9";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> allowed = {1, 0};
    string current = "10";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "9999999998";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> allowed = {};
    string current = "231";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> allowed = {1, 2};
    string current = "222222222";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> allowed = {1, 2};
    string current = "2222222222";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> allowed = {1, 2};
    string current = "99999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> allowed = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    string current = "999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1000";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 8, 9};
    string current = "16";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "18";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> allowed = {0, 1};
    string current = "0";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> allowed = {3, 0};
    string current = "033";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> allowed = {7, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "77777777777";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> allowed = {0, 3, 4};
    string current = "033";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> allowed = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    string current = "000";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> allowed = {};
    string current = "123";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> allowed = {0, 1};
    string current = "0111";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> allowed = {2, 3, 0, 7, 5};
    string current = "7003277777";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "7003300000";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> allowed = {1, 2};
    string current = "22";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "111";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> allowed = {1};
    string current = "111111111";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1111111111";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> allowed = {0, 1};
    string current = "11110";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11111";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> allowed = {0, 1, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> allowed = {5, 3, 4, 0};
    string current = "033";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> allowed = {8};
    string current = "8888888888";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "88888888888";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "19";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> allowed = {0, 1};
    string current = "000";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> allowed = {8, 9};
    string current = "8888888888";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8888888889";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> allowed = {0, 1, 2};
    string current = "0011";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "01";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> allowed = {5, 4};
    string current = "10";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> allowed = {2, 3};
    string current = "33";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "222";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> allowed = {1, 2};
    string current = "122";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "211";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> allowed = {8, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "88888888888";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> allowed = {2, 1};
    string current = "2222222222";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111111";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> allowed = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    string current = "0001";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> allowed = {0, 1, 2};
    string current = "021";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> allowed = {1, 0, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    string current = "8888888888";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> allowed = {0, 3, 2, 4, 6, 1};
    string current = "16";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> allowed = {0, 2, 3, 4, 5};
    string current = "355";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "400";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5};
    string current = "12455";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "12500";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> allowed = {9, 8, 1};
    string current = "989";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "991";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> allowed = {0, 1, 2};
    string current = "01";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> allowed = {0, 1, 2, 3, 4};
    string current = "244";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "300";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> allowed = {8, 9};
    string current = "8999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9888";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "016";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> allowed = {9, 1, 2, 3, 4, 5, 6, 7, 8, 0};
    string current = "9999999998";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999999";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> allowed = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    string current = "01";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> allowed = {0};
    string current = "0000000000";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> allowed = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "1111";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> allowed = {0, 2};
    string current = "02";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "199";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "200";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> allowed = {};
    string current = "1";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> allowed = {0, 5};
    string current = "005";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> allowed = {1, 0};
    string current = "01";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> allowed = {5, 6, 9};
    string current = "9999999999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "55555555555";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> allowed = {8, 2};
    string current = "8888888888";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "22222222222";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> allowed = {1, 2};
    string current = "1222222222";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "2111111111";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> allowed = {2, 6, 3, 4, 1};
    string current = "13";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "14";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> allowed = {1, 2, 3, 7, 5};
    string current = "7532112357";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "7532112371";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "2199";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "2200";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "139";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "140";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> allowed = {2};
    string current = "2";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "22";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> allowed = {9, 8};
    string current = "8989898989";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "8989898998";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> allowed = {1, 0};
    string current = "20";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> allowed = {0, 1, 2, 3};
    string current = "01";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> allowed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    string current = "395999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "396000";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> allowed = {9, 0, 2};
    string current = "999";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "2000";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> allowed = {9, 1, 2, 3, 4, 5, 6, 7, 8, 0};
    string current = "00";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> allowed = {0, 1};
    string current = "001";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> allowed = {0};
    string current = "00";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID INPUT";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "10";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "11";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string current = "29";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "30";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> allowed = {1, 2, 3};
    string current = "123";
    IntegerGenerator* pObj = new IntegerGenerator();
    clock_t start = clock();
    string result = pObj->nextInteger(allowed, current);
    clock_t end = clock();
    delete pObj;
    string expected = "131";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=8078&pm=5984
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<int>::iterator vi_i;
typedef vector<string> vs;
typedef vector<string>::iterator vs_i;
typedef pair<int, int> pii;
 
template<class T>
void splitstr(const string &s, vector<T> &out)
{
    istringstream in(s);
    T tmp;
 
    out.clear();
    while (in >> tmp) out.push_back(tmp);
}
 
class IntegerGenerator
{
public:
    string nextInteger(vector <int> allowed, string current);
};
 
string IntegerGenerator::nextInteger(vector <int> allowed, string current)
{
    bool allow[10];
 
    memset(allow, 0, sizeof(allow));
    for (size_t i = 0; i < allowed.size(); i++)
        allow[allowed[i]] = true;
 
    vector<int> cur;
    cur.push_back(0);
    for (size_t i = 0; i < current.size(); i++)
    {
        cur.push_back(current[i] - '0');
        if (!allow[cur.back()]) return "INVALID INPUT";
    }
    if (current[0] == '0') return "INVALID INPUT";
 
    int p = cur.size() - 1;
    cur[p]++;
    while (true)
    {
        while (cur[p] < 10 && !allow[cur[p]]) cur[p]++;
        if (cur[p] < 10) break;
 
        cur[p] = 0;
        while (!allow[cur[p]]) cur[p]++;
        p--;
        cur[p]++;
    }
    while (cur.front() == 0) cur.erase(cur.begin());
 
    ostringstream o;
    for (size_t i = 0; i < cur.size(); i++)
        o << cur[i];
    return o.str();
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/