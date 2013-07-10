/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11951
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

class BoardSplitting {
public:
    int minimumCuts(int desiredLength, int desiredCount, int actualLength);
};

int BoardSplitting::minimumCuts(int desiredLength, int desiredCount, int actualLength) {
    int ret;
    return ret;
}


int test0() {
    int desiredLength = 5;
    int desiredCount = 4;
    int actualLength = 4;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int desiredLength = 6;
    int desiredCount = 100;
    int actualLength = 3;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
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
    int desiredLength = 500;
    int desiredCount = 5;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int desiredLength = 314;
    int desiredCount = 159;
    int actualLength = 26;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int desiredLength = 1;
    int desiredCount = 1;
    int actualLength = 1;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int desiredLength = 1;
    int desiredCount = 1;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int desiredLength = 1;
    int desiredCount = 1000;
    int actualLength = 1;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int desiredLength = 1;
    int desiredCount = 1000;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int desiredLength = 1000;
    int desiredCount = 1;
    int actualLength = 1;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int desiredLength = 1000;
    int desiredCount = 1;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
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
    int desiredLength = 1000;
    int desiredCount = 1000;
    int actualLength = 1;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int desiredLength = 1000;
    int desiredCount = 1000;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int desiredLength = 778;
    int desiredCount = 887;
    int actualLength = 384;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 883;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int desiredLength = 336;
    int desiredCount = 794;
    int actualLength = 916;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 791;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int desiredLength = 650;
    int desiredCount = 493;
    int actualLength = 387;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 492;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int desiredLength = 28;
    int desiredCount = 363;
    int actualLength = 422;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int desiredLength = 764;
    int desiredCount = 60;
    int actualLength = 691;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int desiredLength = 427;
    int desiredCount = 541;
    int actualLength = 927;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 541;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int desiredLength = 212;
    int desiredCount = 737;
    int actualLength = 173;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 733;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int desiredLength = 430;
    int desiredCount = 568;
    int actualLength = 369;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 567;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int desiredLength = 863;
    int desiredCount = 531;
    int actualLength = 783;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 531;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int desiredLength = 136;
    int desiredCount = 68;
    int actualLength = 124;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int desiredLength = 23;
    int desiredCount = 803;
    int actualLength = 930;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 803;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int desiredLength = 168;
    int desiredCount = 70;
    int actualLength = 59;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int desiredLength = 12;
    int desiredCount = 457;
    int actualLength = 394;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 455;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int desiredLength = 374;
    int desiredCount = 230;
    int actualLength = 43;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int desiredLength = 785;
    int desiredCount = 920;
    int actualLength = 422;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 918;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int desiredLength = 325;
    int desiredCount = 199;
    int actualLength = 538;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 199;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int desiredLength = 414;
    int desiredCount = 371;
    int actualLength = 316;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 369;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int desiredLength = 981;
    int desiredCount = 92;
    int actualLength = 527;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int desiredLength = 863;
    int desiredCount = 874;
    int actualLength = 957;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 874;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int desiredLength = 282;
    int desiredCount = 997;
    int actualLength = 171;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int desiredLength = 926;
    int desiredCount = 926;
    int actualLength = 85;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 916;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int desiredLength = 337;
    int desiredCount = 337;
    int actualLength = 506;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 337;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int desiredLength = 730;
    int desiredCount = 730;
    int actualLength = 314;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 726;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int desiredLength = 125;
    int desiredCount = 125;
    int actualLength = 896;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int desiredLength = 546;
    int desiredCount = 546;
    int actualLength = 815;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 546;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int desiredLength = 435;
    int desiredCount = 435;
    int actualLength = 365;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 430;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int desiredLength = 751;
    int desiredCount = 751;
    int actualLength = 88;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 743;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int desiredLength = 277;
    int desiredCount = 277;
    int actualLength = 179;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 276;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int desiredLength = 789;
    int desiredCount = 404;
    int actualLength = 404;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int desiredLength = 652;
    int desiredCount = 400;
    int actualLength = 400;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int desiredLength = 933;
    int desiredCount = 677;
    int actualLength = 677;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 676;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int desiredLength = 369;
    int desiredCount = 13;
    int actualLength = 13;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int desiredLength = 227;
    int desiredCount = 95;
    int actualLength = 95;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int desiredLength = 540;
    int desiredCount = 571;
    int actualLength = 571;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 570;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int desiredLength = 435;
    int desiredCount = 468;
    int actualLength = 468;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int desiredLength = 602;
    int desiredCount = 903;
    int actualLength = 903;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 602;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int desiredLength = 318;
    int desiredCount = 493;
    int actualLength = 318;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int desiredLength = 757;
    int desiredCount = 302;
    int actualLength = 757;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int desiredLength = 287;
    int desiredCount = 442;
    int actualLength = 287;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int desiredLength = 690;
    int desiredCount = 445;
    int actualLength = 690;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int desiredLength = 441;
    int desiredCount = 730;
    int actualLength = 441;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int desiredLength = 118;
    int desiredCount = 98;
    int actualLength = 118;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int desiredLength = 482;
    int desiredCount = 676;
    int actualLength = 482;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int desiredLength = 928;
    int desiredCount = 568;
    int actualLength = 928;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int desiredLength = 498;
    int desiredCount = 498;
    int actualLength = 498;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int desiredLength = 354;
    int desiredCount = 354;
    int actualLength = 354;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int desiredLength = 587;
    int desiredCount = 587;
    int actualLength = 587;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int desiredLength = 966;
    int desiredCount = 966;
    int actualLength = 966;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int desiredLength = 307;
    int desiredCount = 307;
    int actualLength = 307;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int desiredLength = 3;
    int desiredCount = 4;
    int actualLength = 2;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int desiredLength = 2;
    int desiredCount = 3;
    int actualLength = 3;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int desiredLength = 978;
    int desiredCount = 999;
    int actualLength = 121;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 991;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int desiredLength = 2;
    int desiredCount = 10;
    int actualLength = 5;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int desiredLength = 7;
    int desiredCount = 9;
    int actualLength = 9;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int desiredLength = 5;
    int desiredCount = 7;
    int actualLength = 7;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int desiredLength = 2;
    int desiredCount = 7;
    int actualLength = 5;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int desiredLength = 3;
    int desiredCount = 8;
    int actualLength = 8;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int desiredLength = 3;
    int desiredCount = 5;
    int actualLength = 8;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int desiredLength = 12;
    int desiredCount = 6;
    int actualLength = 5;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int desiredLength = 3;
    int desiredCount = 10;
    int actualLength = 10;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int desiredLength = 314;
    int desiredCount = 154;
    int actualLength = 27;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int desiredLength = 6;
    int desiredCount = 3;
    int actualLength = 4;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int desiredLength = 3;
    int desiredCount = 1000;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int desiredLength = 3;
    int desiredCount = 60;
    int actualLength = 40;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int desiredLength = 4;
    int desiredCount = 13;
    int actualLength = 26;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int desiredLength = 31;
    int desiredCount = 511;
    int actualLength = 17;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 481;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int desiredLength = 315;
    int desiredCount = 159;
    int actualLength = 26;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int desiredLength = 7;
    int desiredCount = 3;
    int actualLength = 15;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int desiredLength = 24;
    int desiredCount = 159;
    int actualLength = 29;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int desiredLength = 20;
    int desiredCount = 3;
    int actualLength = 12;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int desiredLength = 48;
    int desiredCount = 1000;
    int actualLength = 500;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 992;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int desiredLength = 3;
    int desiredCount = 100;
    int actualLength = 4;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int desiredLength = 999;
    int desiredCount = 782;
    int actualLength = 567;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 745;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int desiredLength = 4;
    int desiredCount = 5;
    int actualLength = 5;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int desiredLength = 10;
    int desiredCount = 1;
    int actualLength = 3;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int desiredLength = 400;
    int desiredCount = 5;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int desiredLength = 10;
    int desiredCount = 6;
    int actualLength = 6;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int desiredLength = 4;
    int desiredCount = 3;
    int actualLength = 6;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int desiredLength = 153;
    int desiredCount = 586;
    int actualLength = 77;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 579;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int desiredLength = 4;
    int desiredCount = 6;
    int actualLength = 6;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int desiredLength = 998;
    int desiredCount = 999;
    int actualLength = 1000;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int desiredLength = 4;
    int desiredCount = 10;
    int actualLength = 5;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
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
    int desiredLength = 987;
    int desiredCount = 453;
    int actualLength = 566;
    BoardSplitting* pObj = new BoardSplitting();
    clock_t start = clock();
    int result = pObj->minimumCuts(desiredLength, desiredCount, actualLength);
    clock_t end = clock();
    delete pObj;
    int expected = 453;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22883555&rd=14736&pm=11951
********************************************************************************
#include <iostream>
#include <algorithm>
#include <limits>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <numeric>
#include <cmath>
#include <stack>
using namespace std;
 
#define forl(i, s, t) for(__typeof(s) i = s; i != t; i++)
 
class BoardSplitting {
public:
  int minimumCuts(int desiredLength, int desiredCount, int actualLength) {
    int cuts = 0;
    int rem = actualLength;
    
    while(desiredCount--) {
      while(rem < desiredLength) {
        rem += actualLength;
      }
      rem -= desiredLength;
      if(rem) cuts++;
    }
    
    return cuts;
  }
};

********************************************************************************
*******************************************************************************/