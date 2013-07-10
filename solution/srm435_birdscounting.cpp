/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10243
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

class BirdsCounting {
public:
    double computeProbability(int birdsNumber, int caughtPerDay, int daysNumber, int birdsMarked);
};

double BirdsCounting::computeProbability(int birdsNumber, int caughtPerDay, int daysNumber, int birdsMarked) {
    double ret;
    return ret;
}


int test0() {
    int birdsNumber = 3;
    int caughtPerDay = 1;
    int daysNumber = 2;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int birdsNumber = 9;
    int caughtPerDay = 3;
    int daysNumber = 4;
    int birdsMarked = 7;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42061467444120504;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int birdsNumber = 3;
    int caughtPerDay = 1;
    int daysNumber = 5;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012345679012345678;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int birdsNumber = 13;
    int caughtPerDay = 1;
    int daysNumber = 2;
    int birdsMarked = 0;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int birdsNumber = 8;
    int caughtPerDay = 3;
    int daysNumber = 3;
    int birdsMarked = 7;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2582908163265306;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int birdsNumber = 5;
    int caughtPerDay = 1;
    int daysNumber = 5;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0016000000000000005;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int birdsNumber = 6;
    int caughtPerDay = 3;
    int daysNumber = 3;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0025000000000000005;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int birdsNumber = 3;
    int caughtPerDay = 2;
    int daysNumber = 2;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int birdsNumber = 15;
    int caughtPerDay = 3;
    int daysNumber = 3;
    int birdsMarked = 6;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1562130177514793;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int birdsNumber = 5;
    int caughtPerDay = 1;
    int daysNumber = 3;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04000000000000001;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 15;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06345877232851325;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int birdsNumber = 4;
    int caughtPerDay = 4;
    int daysNumber = 1;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int birdsNumber = 4;
    int caughtPerDay = 2;
    int daysNumber = 2;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int birdsNumber = 4;
    int caughtPerDay = 2;
    int daysNumber = 3;
    int birdsMarked = 4;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5277777777777778;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int birdsNumber = 5;
    int caughtPerDay = 1;
    int daysNumber = 2;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int birdsNumber = 20;
    int caughtPerDay = 18;
    int daysNumber = 1;
    int birdsMarked = 18;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int birdsNumber = 11;
    int caughtPerDay = 3;
    int daysNumber = 3;
    int birdsMarked = 6;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3023691460055096;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int birdsNumber = 1;
    int caughtPerDay = 1;
    int daysNumber = 1;
    int birdsMarked = 0;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int birdsNumber = 8;
    int caughtPerDay = 4;
    int daysNumber = 2;
    int birdsMarked = 8;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014285714285714285;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int birdsNumber = 7;
    int caughtPerDay = 5;
    int daysNumber = 5;
    int birdsMarked = 7;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9866773617988389;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int birdsNumber = 1;
    int caughtPerDay = 1;
    int daysNumber = 1;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int birdsNumber = 9;
    int caughtPerDay = 1;
    int daysNumber = 4;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07681755829903977;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int birdsNumber = 12;
    int caughtPerDay = 12;
    int daysNumber = 3;
    int birdsMarked = 12;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int birdsNumber = 8;
    int caughtPerDay = 1;
    int daysNumber = 5;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.205078125;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int birdsNumber = 7;
    int caughtPerDay = 3;
    int daysNumber = 4;
    int birdsMarked = 4;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005877551020408162;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int birdsNumber = 7;
    int caughtPerDay = 4;
    int daysNumber = 3;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05877551020408163;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int birdsNumber = 5;
    int caughtPerDay = 3;
    int daysNumber = 2;
    int birdsMarked = 4;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int birdsNumber = 16;
    int caughtPerDay = 4;
    int daysNumber = 3;
    int birdsMarked = 10;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2984784446322908;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int birdsNumber = 3;
    int caughtPerDay = 3;
    int daysNumber = 5;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int birdsNumber = 3;
    int caughtPerDay = 2;
    int daysNumber = 5;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012345679012345678;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int birdsNumber = 9;
    int caughtPerDay = 8;
    int daysNumber = 4;
    int birdsMarked = 8;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013717421124828531;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int birdsNumber = 3;
    int caughtPerDay = 1;
    int daysNumber = 4;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4444444444444444;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int birdsNumber = 4;
    int caughtPerDay = 2;
    int daysNumber = 3;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.027777777777777776;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int birdsNumber = 7;
    int caughtPerDay = 5;
    int daysNumber = 3;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0022675736961451243;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int birdsNumber = 4;
    int caughtPerDay = 1;
    int daysNumber = 4;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015625;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int birdsNumber = 18;
    int caughtPerDay = 4;
    int daysNumber = 3;
    int birdsMarked = 6;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017104532444786194;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int birdsNumber = 4;
    int caughtPerDay = 1;
    int daysNumber = 3;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.375;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int birdsNumber = 20;
    int caughtPerDay = 1;
    int daysNumber = 3;
    int birdsMarked = 14;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int birdsNumber = 10;
    int caughtPerDay = 1;
    int daysNumber = 5;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3024;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int birdsNumber = 9;
    int caughtPerDay = 5;
    int daysNumber = 4;
    int birdsMarked = 8;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2969041820137814;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int birdsNumber = 20;
    int caughtPerDay = 8;
    int daysNumber = 5;
    int birdsMarked = 16;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.031148695128343194;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int birdsNumber = 19;
    int caughtPerDay = 9;
    int daysNumber = 3;
    int birdsMarked = 18;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11357185172124559;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int birdsNumber = 17;
    int caughtPerDay = 9;
    int daysNumber = 5;
    int birdsMarked = 14;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002369967909006005;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int birdsNumber = 4;
    int caughtPerDay = 3;
    int daysNumber = 4;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015625;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int birdsNumber = 12;
    int caughtPerDay = 9;
    int daysNumber = 3;
    int birdsMarked = 11;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.17516528925619834;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int birdsNumber = 16;
    int caughtPerDay = 3;
    int daysNumber = 4;
    int birdsMarked = 12;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006839923469387754;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int birdsNumber = 9;
    int caughtPerDay = 4;
    int daysNumber = 3;
    int birdsMarked = 9;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09448223733938019;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int birdsNumber = 10;
    int caughtPerDay = 8;
    int daysNumber = 3;
    int birdsMarked = 8;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 4.938271604938272E-4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int birdsNumber = 7;
    int caughtPerDay = 3;
    int daysNumber = 5;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037940191586838805;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int birdsNumber = 14;
    int caughtPerDay = 8;
    int daysNumber = 3;
    int birdsMarked = 11;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04744284464564186;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int birdsNumber = 12;
    int caughtPerDay = 9;
    int daysNumber = 5;
    int birdsMarked = 11;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011693138276074039;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int birdsNumber = 18;
    int caughtPerDay = 8;
    int daysNumber = 5;
    int birdsMarked = 14;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0037659812026760746;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int birdsNumber = 11;
    int caughtPerDay = 5;
    int daysNumber = 3;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 4.685069620134555E-6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int birdsNumber = 3;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037037037037037035;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int birdsNumber = 2;
    int caughtPerDay = 2;
    int daysNumber = 3;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int birdsNumber = 1;
    int caughtPerDay = 1;
    int daysNumber = 4;
    int birdsMarked = 1;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int birdsNumber = 7;
    int caughtPerDay = 1;
    int daysNumber = 5;
    int birdsMarked = 2;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03748438150770512;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int birdsNumber = 15;
    int caughtPerDay = 5;
    int daysNumber = 3;
    int birdsMarked = 13;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.031087793325555564;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int birdsNumber = 10;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 3;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002282578875171468;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int birdsNumber = 8;
    int caughtPerDay = 6;
    int daysNumber = 4;
    int birdsMarked = 6;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 4.55539358600583E-5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 14;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010553063029764668;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 13;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 9.294088086285515E-4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 15;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06345877232851325;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 17;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3482456585678702;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 18;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28512030286393125;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int birdsNumber = 19;
    int caughtPerDay = 7;
    int daysNumber = 5;
    int birdsMarked = 19;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08655292058346278;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int birdsNumber = 10;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 4;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05008504801097394;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int birdsNumber = 10;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 5;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2654814814814815;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int birdsNumber = 10;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 6;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4332510288065844;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int birdsNumber = 10;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 7;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22123456790123455;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int birdsNumber = 10;
    int caughtPerDay = 2;
    int daysNumber = 4;
    int birdsMarked = 8;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02765432098765432;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int birdsNumber = 17;
    int caughtPerDay = 9;
    int daysNumber = 5;
    int birdsMarked = 16;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29923666251305214;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int birdsNumber = 17;
    int caughtPerDay = 9;
    int daysNumber = 5;
    int birdsMarked = 17;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6554514923169341;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 13;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00678008576246766;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 14;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.039847279126155724;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 15;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13483311440416074;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 16;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.26541624621090926;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 17;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30035494805367574;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 18;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18722122247037307;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 19;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05807073960941394;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int birdsNumber = 20;
    int caughtPerDay = 6;
    int daysNumber = 5;
    int birdsMarked = 20;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006799696517512649;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int birdsNumber = 20;
    int caughtPerDay = 2;
    int daysNumber = 5;
    int birdsMarked = 16;
    BirdsCounting* pObj = new BirdsCounting();
    clock_t start = clock();
    double result = pObj->computeProbability(birdsNumber, caughtPerDay, daysNumber, birdsMarked);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22728556&rd=13697&pm=10243
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
 
class BirdsCounting {
public:
  double computeProbability(int, int, int, int);
};
 
double BirdsCounting::computeProbability(int num, int per, int day, int bird) {
   double c[21][21], f[21][21];
   memset(c,0,sizeof(c));
   memset(f,0,sizeof(f));
   
  c[0][0]=1;
  for (int i=1; i<=num; i++)
  {
    c[i][0]=1;
    for (int j=1; j<=i; j++)
      c[i][j]=c[i-1][j]+c[i-1][j-1];
  }
  f[0][0]=1;
  for (int i=0; i<day; i++)
    for (int j=0; j<=num; j++)
      if (f[i][j]>0)
        for (int k=0; k<=per; k++)
          f[i+1][j+k]+=f[i][j]*(c[num-j][k]*c[j][per-k]/c[num][per]);
  return f[day][bird];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/