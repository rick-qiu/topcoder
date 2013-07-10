/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2341
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

class ScoringEfficiency {
public:
    double getPointsPerShot(vector<string> gameLog);
};

double ScoringEfficiency::getPointsPerShot(vector<string> gameLog) {
    double ret;
    return ret;
}


int test0() {
    vector<string> gameLog = {"Made 3 point field goal", "Missed 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> gameLog = {"Made free throw", "Missed free throw", "Missed free throw", "Missed free throw", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> gameLog = {"Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Missed free throw", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4545454545454546;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> gameLog = {"Made 2 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Made free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made free throw", "Made free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9565217391304348;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> gameLog = {"Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> gameLog = {"Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> gameLog = {"Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made 2 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made free throw", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.388235294117647;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made free throw", "Missed free throw", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Made free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed free throw", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed free throw", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0666666666666667;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> gameLog = {"Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.03125;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2222222222222223;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> gameLog = {"Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2903225806451613;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> gameLog = {"Missed free throw", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made free throw", "Made free throw", "Missed 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed free throw", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2839506172839505;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1578947368421053;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> gameLog = {"Missed free throw", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made free throw", "Made free throw", "Made free throw", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Made 2 point field goal", "Made free throw", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2285714285714286;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> gameLog = {"Made 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made free throw", "Missed 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.44;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> gameLog = {"Missed free throw", "Missed free throw", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8421052631578947;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> gameLog = {"Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.75;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> gameLog = {"Made free throw", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1891891891891893;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7407407407407407;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> gameLog = {"Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2380952380952381;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> gameLog = {"Made 2 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Missed free throw", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2771084337349397;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> gameLog = {"Missed free throw", "Missed free throw", "Made 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Made free throw", "Made 2 point field goal", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed free throw", "Made free throw", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made free throw", "Made 2 point field goal", "Missed free throw", "Made free throw", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3488372093023255;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> gameLog = {"Made free throw", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.88;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9041095890410958;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> gameLog = {"Missed free throw", "Missed 2 point field goal", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Made free throw", "Missed free throw", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1940298507462686;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> gameLog = {"Missed free throw", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Missed free throw", "Made 2 point field goal", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8888888888888888;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> gameLog = {"Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4285714285714286;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Made 2 point field goal", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Missed 3 point field goal", "Missed free throw", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4042553191489362;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> gameLog = {"Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0746268656716418;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> gameLog = {"Made 3 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made free throw", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made free throw", "Missed 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Made free throw", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0461538461538462;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> gameLog = {"Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made free throw", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3076923076923077;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> gameLog = {"Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> gameLog = {"Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made free throw", "Made 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> gameLog = {"Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> gameLog = {"Made free throw", "Made free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Made free throw", "Made free throw", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.380952380952381;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> gameLog = {"Made free throw", "Made free throw", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Made free throw", "Made free throw", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Made free throw", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Made 2 point field goal", "Made free throw", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made free throw", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2580645161290323;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> gameLog = {"Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> gameLog = {"Missed 3 point field goal", "Made free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> gameLog = {"Missed free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> gameLog = {"Missed 3 point field goal", "Made free throw", "Made 3 point field goal", "Made free throw", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made 3 point field goal", "Made free throw", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Made free throw", "Missed 2 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0980392156862746;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> gameLog = {"Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made free throw", "Made free throw", "Missed 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0303030303030303;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> gameLog = {"Missed 3 point field goal", "Missed free throw", "Made free throw", "Missed free throw", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Made free throw", "Missed free throw", "Made 3 point field goal", "Missed free throw", "Made free throw", "Made 3 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> gameLog = {"Made free throw", "Missed free throw", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed free throw", "Made free throw", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4324324324324325;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> gameLog = {"Made free throw", "Made free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Made free throw", "Missed free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Made free throw", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1951219512195121;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> gameLog = {"Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> gameLog = {"Made free throw", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made free throw", "Missed free throw", "Made 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1733333333333333;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> gameLog = {"Missed free throw", "Missed free throw", "Made free throw", "Missed free throw", "Made 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Made free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0769230769230769;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 3 point field goal", "Made free throw", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Missed free throw", "Made 2 point field goal", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.352112676056338;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> gameLog = {"Missed 3 point field goal", "Made free throw", "Missed 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9714285714285714;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> gameLog = {"Made 2 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed free throw", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0714285714285714;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> gameLog = {"Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made free throw", "Made 2 point field goal", "Made free throw", "Made 2 point field goal", "Made free throw", "Missed free throw", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0238095238095237;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> gameLog = {"Missed free throw", "Made 2 point field goal", "Made free throw", "Missed free throw", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Made 2 point field goal", "Made free throw", "Missed 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed free throw", "Made free throw", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2173913043478262;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> gameLog = {"Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> gameLog = {"Made 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Made 2 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0416666666666667;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> gameLog = {"Missed free throw", "Missed 3 point field goal", "Missed free throw", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Made free throw", "Made free throw", "Missed free throw", "Missed 3 point field goal", "Made free throw", "Made free throw", "Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made free throw", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Made 2 point field goal", "Made 2 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1594202898550725;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> gameLog = {"Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Missed free throw", "Missed 3 point field goal", "Made 2 point field goal", "Missed free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 2 point field goal", "Made 2 point field goal", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.975609756097561;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> gameLog = {"Made 2 point field goal", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made free throw", "Made 2 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Made free throw", "Missed free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed free throw", "Made 3 point field goal", "Missed 2 point field goal", "Made free throw", "Made free throw", "Made free throw", "Missed 2 point field goal", "Missed 2 point field goal", "Made free throw", "Made free throw", "Missed 2 point field goal", "Made free throw", "Missed 2 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8888888888888888;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> gameLog = {"Missed 2 point field goal", "Missed 3 point field goal", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> gameLog = {"Made 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> gameLog = {"Missed 2 point field goal", "Made 3 point field goal", "Missed free throw", "Missed 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made free throw", "Made free throw", "Made 3 point field goal", "Made free throw", "Missed free throw", "Made 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made free throw", "Made free throw", "Missed 3 point field goal", "Made free throw", "Missed free throw", "Made 3 point field goal", "Made free throw", "Missed 2 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Missed free throw", "Made 3 point field goal", "Made 2 point field goal", "Missed 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 2 point field goal", "Made 3 point field goal", "Made free throw", "Missed 3 point field goal"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.619047619047619;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> gameLog = {"Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Made 2 point field goal", "Missed 2 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Made 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Missed 3 point field goal", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Made free throw", "Missed free throw", "Missed free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4545454545454546;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> gameLog = {"Made free throw", "Missed free throw", "Missed free throw", "Missed free throw", "Made free throw"};
    ScoringEfficiency* pObj = new ScoringEfficiency();
    clock_t start = clock();
    double result = pObj->getPointsPerShot(gameLog);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287130&rd=4770&pm=2341
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <queue>
#include <climits>
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef long long ll;
 
char buffer[500];
string sval(int num)    { sprintf(buffer, "%d", num); return buffer; }
int    ival(string inp) { return atoi(inp.c_str()); }
float  fval(string inp) { return (float)atof(inp.c_str()); }
double dval(string inp) { return (double)atof(inp.c_str()); }
 
VS split(string inp, string sep) {
   VS ans;
   inp += sep;      // this is SO ugly...
   for (int i = 0, j = 0; i < inp.length(); i++)
      if (inp[i] == sep[0]) {
         ans.push_back(inp.substr(j, i - j));
         j = i + 1;
      }
   return ans;
}
 
// ****************************************** //
 
class ScoringEfficiency {
   public:
 
   double getPointsPerShot(vector <string> g) {
    /*
    - "Made 2 point field goal"
    - "Missed 2 point field goal"
    - "Made 3 point field goal"
    - "Missed 3 point field goal"
    - "Made free throw"
    - "Missed free throw"
    */
    int shots = 0, ft = 0;
    int points = 0;
    for (int i = 0; i < g.size(); i++) {
      VS tmp = split(g[i], " ");
      if (tmp[0] == "Made") {
        if (tmp[1] == "2") {
          shots++;
          points += 2;
        } else
        if (tmp[1] == "3") {
          shots++;
          points += 3;
        } else {
          points++;
          ft++;
        }
      } else {
        if (tmp[1] != "free") {
          shots++;
        } else {
          ft++;
        }
      }
    }
    return 1.0*points/(shots+0.5*ft);
   }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/