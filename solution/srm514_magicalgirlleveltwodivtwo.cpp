/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11477
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

class MagicalGirlLevelTwoDivTwo {
public:
    string isReachable(vector<int> jumpTypes, int x, int y);
};

string MagicalGirlLevelTwoDivTwo::isReachable(vector<int> jumpTypes, int x, int y) {
    string ret;
    return ret;
}


int test0() {
    vector<int> jumpTypes = {2};
    int x = 5;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> jumpTypes = {3};
    int x = 5;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> jumpTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = -30;
    int y = 27;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> jumpTypes = {29};
    int x = 29;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> jumpTypes = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int x = 29;
    int y = 30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> jumpTypes = {21, 23, 25, 27, 29};
    int x = -30;
    int y = 29;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> jumpTypes = {1, 9, 11, 19};
    int x = 6;
    int y = 7;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> jumpTypes = {7};
    int x = 7;
    int y = 8;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> jumpTypes = {9};
    int x = 9;
    int y = 10;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> jumpTypes = {13};
    int x = 13;
    int y = 14;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> jumpTypes = {1, 3, 9, 7, 5};
    int x = -30;
    int y = -29;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> jumpTypes = {29};
    int x = -7;
    int y = -16;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> jumpTypes = {23};
    int x = -4;
    int y = 9;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> jumpTypes = {3};
    int x = 16;
    int y = -17;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> jumpTypes = {1};
    int x = 7;
    int y = -30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> jumpTypes = {7, 3, 1, 5};
    int x = 17;
    int y = -6;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> jumpTypes = {1, 29};
    int x = 30;
    int y = 29;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> jumpTypes = {1, 29};
    int x = 30;
    int y = 30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> jumpTypes = {29, 1};
    int x = -30;
    int y = -30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> jumpTypes = {11, 15, 13, 28, 26, 29};
    int x = -26;
    int y = -3;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> jumpTypes = {16, 27, 23, 6, 13};
    int x = -25;
    int y = 26;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> jumpTypes = {14, 27, 2, 3};
    int x = -27;
    int y = 13;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> jumpTypes = {24, 17, 23};
    int x = 20;
    int y = -24;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> jumpTypes = {10, 2, 20};
    int x = -29;
    int y = 13;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> jumpTypes = {21, 26, 1};
    int x = -7;
    int y = 2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> jumpTypes = {30};
    int x = -6;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> jumpTypes = {27, 26, 24, 17, 7, 5, 25};
    int x = 6;
    int y = -1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> jumpTypes = {8, 20, 28};
    int x = -29;
    int y = 9;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> jumpTypes = {23, 20, 1};
    int x = 6;
    int y = -17;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> jumpTypes = {1, 26, 2, 4, 10, 7, 5};
    int x = 14;
    int y = -5;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> jumpTypes = {14};
    int x = 27;
    int y = 20;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> jumpTypes = {20, 10, 9, 29, 8};
    int x = -3;
    int y = 11;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> jumpTypes = {11};
    int x = -4;
    int y = 7;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> jumpTypes = {24, 28, 10, 14, 22, 16};
    int x = 3;
    int y = -5;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> jumpTypes = {26, 16, 12, 20, 13};
    int x = -2;
    int y = -19;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> jumpTypes = {8, 3, 29, 18, 14};
    int x = -17;
    int y = -4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> jumpTypes = {4, 15, 24};
    int x = -21;
    int y = -25;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> jumpTypes = {19};
    int x = -18;
    int y = -19;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> jumpTypes = {1, 13, 24, 16, 29, 14};
    int x = 25;
    int y = 6;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> jumpTypes = {5, 9, 12, 13};
    int x = 11;
    int y = 15;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> jumpTypes = {9, 14, 23, 15, 3, 8, 24, 18};
    int x = -24;
    int y = 11;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> jumpTypes = {11, 22};
    int x = 9;
    int y = 12;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> jumpTypes = {25, 8};
    int x = -21;
    int y = 29;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> jumpTypes = {21, 15, 20, 30, 3, 2, 23, 7, 18, 16};
    int x = -14;
    int y = -29;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> jumpTypes = {14, 29, 16, 8};
    int x = -18;
    int y = -28;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> jumpTypes = {24, 21, 17, 7};
    int x = -25;
    int y = 2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> jumpTypes = {30, 12, 10, 19, 15, 25};
    int x = 26;
    int y = 10;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> jumpTypes = {7, 18, 20, 3, 11, 29, 9, 5};
    int x = 9;
    int y = 9;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> jumpTypes = {27, 15, 23, 25, 4, 24, 9, 5};
    int x = 19;
    int y = -17;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> jumpTypes = {10};
    int x = 29;
    int y = 30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> jumpTypes = {7, 25, 6, 29, 30, 19, 18, 20};
    int x = 28;
    int y = -20;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> jumpTypes = {13, 20, 26, 28, 24, 10};
    int x = -30;
    int y = 8;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> jumpTypes = {27, 25, 1, 17, 20};
    int x = -12;
    int y = 14;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> jumpTypes = {4, 12, 17};
    int x = 30;
    int y = 3;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> jumpTypes = {22, 23, 25};
    int x = -10;
    int y = 22;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> jumpTypes = {19, 3, 12, 1, 13, 8, 22, 2, 16};
    int x = -4;
    int y = -8;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> jumpTypes = {14, 17, 26};
    int x = -4;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> jumpTypes = {20, 30, 19, 22, 25, 18, 8, 28};
    int x = -16;
    int y = 12;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> jumpTypes = {10, 20, 4, 9, 2, 1};
    int x = 10;
    int y = -8;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> jumpTypes = {3, 30, 24, 6, 27, 25, 23};
    int x = 6;
    int y = 8;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> jumpTypes = {12, 5, 18, 4, 25};
    int x = -18;
    int y = 29;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> jumpTypes = {7, 18, 1, 28, 4, 24, 29};
    int x = 17;
    int y = -11;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> jumpTypes = {3, 25, 23, 11, 29, 27, 24, 7, 15};
    int x = -14;
    int y = -2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> jumpTypes = {1, 5, 7, 20, 27};
    int x = -20;
    int y = -10;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> jumpTypes = {13, 5};
    int x = -13;
    int y = -22;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> jumpTypes = {16, 18, 2, 28, 26, 25};
    int x = -22;
    int y = 3;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> jumpTypes = {15, 22, 6, 20, 16};
    int x = 29;
    int y = -15;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> jumpTypes = {14, 18};
    int x = -3;
    int y = 20;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> jumpTypes = {8, 19};
    int x = 19;
    int y = 8;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> jumpTypes = {29};
    int x = 0;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> jumpTypes = {29};
    int x = 29;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> jumpTypes = {2};
    int x = 5;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> jumpTypes = {29, 30};
    int x = 1;
    int y = 2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> jumpTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = -30;
    int y = 27;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> jumpTypes = {3};
    int x = 5;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> jumpTypes = {23, 21, 18};
    int x = -29;
    int y = -12;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> jumpTypes = {3, 9, 12, 15, 21, 22, 24, 26, 28, 7};
    int x = 30;
    int y = 30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> jumpTypes = {1};
    int x = 5;
    int y = 5;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> jumpTypes = {2};
    int x = 0;
    int y = 2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> jumpTypes = {1};
    int x = 2;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> jumpTypes = {2};
    int x = 2;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> jumpTypes = {2};
    int x = 0;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> jumpTypes = {3};
    int x = 3;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> jumpTypes = {1, 2, 3};
    int x = 0;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> jumpTypes = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 29;
    int y = 27;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> jumpTypes = {3};
    int x = 8;
    int y = -2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> jumpTypes = {4};
    int x = 3;
    int y = 3;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> jumpTypes = {1};
    int x = 2;
    int y = 2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> jumpTypes = {3, 10};
    int x = 11;
    int y = 4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> jumpTypes = {27};
    int x = 1;
    int y = -1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> jumpTypes = {1, 29, 2};
    int x = 3;
    int y = 5;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> jumpTypes = {3, 7};
    int x = 6;
    int y = 14;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> jumpTypes = {22};
    int x = 1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> jumpTypes = {4};
    int x = -20;
    int y = 16;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> jumpTypes = {2, 3};
    int x = 5;
    int y = 3;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> jumpTypes = {10};
    int x = 2;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> jumpTypes = {1, 2};
    int x = -30;
    int y = -30;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> jumpTypes = {2, 3};
    int x = 4;
    int y = 3;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> jumpTypes = {2};
    int x = 6;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> jumpTypes = {8};
    int x = 9;
    int y = 11;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> jumpTypes = {3};
    int x = 5;
    int y = 7;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> jumpTypes = {4};
    int x = 1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> jumpTypes = {2};
    int x = 1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> jumpTypes = {2};
    int x = 5;
    int y = -4;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> jumpTypes = {1};
    int x = 0;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> jumpTypes = {3};
    int x = 3;
    int y = 9;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> jumpTypes = {3};
    int x = -1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> jumpTypes = {30};
    int x = 1;
    int y = 0;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> jumpTypes = {1};
    int x = 1;
    int y = 2;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> jumpTypes = {29};
    int x = -1;
    int y = 27;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> jumpTypes = {5, 3};
    int x = -1;
    int y = -1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> jumpTypes = {2};
    int x = -1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> jumpTypes = {1};
    int x = 30;
    int y = 27;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> jumpTypes = {3};
    int x = 1;
    int y = 1;
    MagicalGirlLevelTwoDivTwo* pObj = new MagicalGirlLevelTwoDivTwo();
    clock_t start = clock();
    string result = pObj->isReachable(jumpTypes, x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22786869&rd=14539&pm=11477
********************************************************************************
#line 5 "MagicalGirlLevelTwoDivTwo.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <strstream> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
 
class MagicalGirlLevelTwoDivTwo 
{ 
        public: 
        string isReachable(vector <int> jumpTypes, int x, int y) 
        { 
                int ji=0,ou=0; 
                for (vector<int>::iterator j=jumpTypes.begin();j!=jumpTypes.end();j++) 
          if (*j%2==0) ou=1; 
          else ji=1; 
        if (ou==1) return "YES"; 
        else if ((x+y)%2==0) return "YES"; 
        else return "NO"; 
        } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/