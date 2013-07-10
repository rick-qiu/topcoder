/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11033
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

class TheBoardingDivTwo {
public:
    int find(vector<int> pattern, int boardingTime);
};

int TheBoardingDivTwo::find(vector<int> pattern, int boardingTime) {
    int ret;
    return ret;
}


int test0() {
    vector<int> pattern = {-1, -1};
    int boardingTime = 100;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
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
    vector<int> pattern = {-1, 2, -1};
    int boardingTime = 222;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> pattern = {2, 1, 3, 5, 4, 6};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 198;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> pattern = {-1, -1};
    int boardingTime = 110;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1};
    int boardingTime = 52;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> pattern = {-1, -1, -1, -1};
    int boardingTime = 98;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
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
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 157;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1};
    int boardingTime = 158;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> pattern = {-1, -1};
    int boardingTime = 151;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> pattern = {-1, -1, -1, -1, -1};
    int boardingTime = 156;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> pattern = {-1, -1};
    int boardingTime = 151;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
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
    vector<int> pattern = {-1, -1, -1, -1};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 158;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1};
    int boardingTime = 157;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> pattern = {-1, -1, -1, -1};
    int boardingTime = 154;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> pattern = {-1, -1, -1, -1, -1};
    int boardingTime = 157;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> pattern = {-1, -1, -1, -1, -1};
    int boardingTime = 153;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> pattern = {-1, -1, -1};
    int boardingTime = 151;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> pattern = {-1, 5, 2, 4, 3, -1};
    int boardingTime = 159;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> pattern = {4, -1, -1, 3};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> pattern = {-1, -1, 4, 2};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
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
    vector<int> pattern = {-1, 4, -1, 1, -1, -1, 5};
    int boardingTime = 160;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> pattern = {-1, 2, 3, 4, 5, -1};
    int boardingTime = 159;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> pattern = {1, -1, -1, -1};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> pattern = {1, -1, -1, -1, 5, -1, -1, 8};
    int boardingTime = 160;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> pattern = {-1, 2, -1, -1, -1, -1};
    int boardingTime = 155;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> pattern = {1, -1, -1, 4, 5, -1};
    int boardingTime = 159;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> pattern = {-1, -1, 3, -1, 5, -1};
    int boardingTime = 158;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> pattern = {-1, -1, -1, -1, 8, 2, -1, -1};
    int boardingTime = 157;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
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
    vector<int> pattern = {-1, -1, 5, -1, -1, 1, 8, -1};
    int boardingTime = 160;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 157;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> pattern = {-1, -1, -1, -1, 8, -1, -1, -1};
    int boardingTime = 156;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, 3, -1};
    int boardingTime = 160;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> pattern = {1, 2, 3, 4, 5, 6, 7, 8};
    int boardingTime = 222;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> pattern = {1, 2, 3, 4, 5, 6, 7, 8};
    int boardingTime = 82;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> pattern = {5, 3, 6, 4, 8, 2, 1, 7};
    int boardingTime = 222;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> pattern = {1, 2, 3, 4, 5, 6, 7, 8};
    int boardingTime = 81;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
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
    vector<int> pattern = {-1, 2, 3, 4, 5, -1, -1, 8};
    int boardingTime = 157;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> pattern = {-1, -1, 3, -1, -1, 6, 7, 8};
    int boardingTime = 162;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> pattern = {-1, 2, -1, 4, -1, 6, 7, -1};
    int boardingTime = 163;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> pattern = {1, 2, -1, -1, 5, 6, -1, -1};
    int boardingTime = 161;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> pattern = {-1, -1, 3, -1, -1, 6, -1, 8};
    int boardingTime = 159;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> pattern = {-1, -1, 3, -1, 5, 6, -1, -1};
    int boardingTime = 156;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> pattern = {1, 2, -1, 4, 5, -1, -1, -1};
    int boardingTime = 160;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 222;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> pattern = {-1, -1};
    int boardingTime = 100;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 198;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> pattern = {-1, 2, -1};
    int boardingTime = 222;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> pattern = {-1, -1, -1, -1, -1, -1, -1, -1};
    int boardingTime = 148;
    TheBoardingDivTwo* pObj = new TheBoardingDivTwo();
    clock_t start = clock();
    int result = pObj->find(pattern, boardingTime);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22836418&rd=14158&pm=11033
********************************************************************************
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
 
using namespace std;
 
class TheBoardingDivTwo
{
  public:
  int find(vector <int> p, int t)
  {
    int n = p.size();
    
    set<int> pass;
    for(int i = 1; i <= (int)p.size(); i++)
      pass.insert(i);
    
    vector<int> ind;
    for(int i = 0; i < (int)p.size(); i++)
      if(p[i] != -1)
        pass.erase(p[i]);
      else
        ind.push_back(i);
    vector<int> q(pass.begin(), pass.end());
    
    int lim = 1;
    for(int i = 1; i <= (int)q.size(); i++)
      lim *= i;
    
    int res = 0;
    for(int i = 0; i < lim; i++)
    {
      for(int j = 0; j < (int)q.size(); j++)
        p[ind[j]] = q[j];
      
      int m = 0;
      vector<int> pc(p);
      pc.resize(pc.size() * 2, 0);
      vector<int> cnt(pc.size(), 74);
      bool notyet = true;
      while(notyet)
      {
        for(int i = (int)pc.size() - 1; i >= 0; i--)
          if(i + 1 < n + pc[i] && pc[i + 1] == 0)
          {
            pc[i + 1] = pc[i];
            pc[i] = 0;
          }
          else if(i + 1 == n + pc[i])
          {
            if(cnt[i] > 0) cnt[i]--;
            else pc[i] = 0;
          }
      
        m++;
        notyet = false;
        for(int i = 0; i < (int)pc.size(); i++)
          if(pc[i]) notyet = true;
      }
      
      --m;
      cout << m << endl;
      if(m <= t) res++;
      
      next_permutation(q.begin(), q.end());
    }
    
    return res;
  }
};

********************************************************************************
*******************************************************************************/