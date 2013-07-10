/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11496
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

class SRMIntermissionPhase {
public:
    int countWays(vector<int> points, vector<string> description);
};

int SRMIntermissionPhase::countWays(vector<int> points, vector<string> description) {
    int ret;
    return ret;
}


int test0() {
    vector<int> points = {25000, 50000, 100000};
    vector<string> description = {"YNN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 25000;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> points = {30000, 60000, 90000};
    vector<string> description = {"NYN", "NYN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 799969993;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> points = {25000, 45000, 110000};
    vector<string> description = {"NNN", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> points = {25600, 51200, 102400};
    vector<string> description = {"NYY", "YNY", "YYY", "YNN", "YYN", "NNY", "NYN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 867560805;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> points = {25000, 45000, 90000};
    vector<string> description = {"YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 999291257;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
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
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 406554591;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> points = {25825, 57183, 96726};
    vector<string> description = {"YYN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 476750968;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> points = {26406, 56734, 106724};
    vector<string> description = {"NNY", "YNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 469502309;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> points = {25021, 55144, 97044};
    vector<string> description = {"NYY", "NYN", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 54008456;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> points = {26488, 46109, 97112};
    vector<string> description = {"NYY", "NYN", "YNN", "NNY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 829089233;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> points = {26803, 52189, 95975};
    vector<string> description = {"NYY", "YNY", "NYN", "YNN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 131965753;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> points = {26471, 49498, 92670};
    vector<string> description = {"NNY", "NYN", "NYY", "YNN", "NNY", "YYN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 525097248;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> points = {29404, 48960, 90453};
    vector<string> description = {"YNN", "NNY", "YYY", "NYN", "YNY", "YYN", "NYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 80020569;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> points = {25575, 57034, 101292};
    vector<string> description = {"YNN", "NNY", "NNY", "YYN", "YYY", "YNY", "YNY", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 264452930;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> points = {25154, 46646, 101268};
    vector<string> description = {"YYN", "NNY", "NNY", "YNN", "YNY", "YNY", "YNY", "NYY", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 490656534;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> points = {25275, 46180, 108685};
    vector<string> description = {"NYN", "NYY", "NNY", "NYN", "NYY", "YNN", "YYN", "YNN", "NYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 557585086;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> points = {27019, 51679, 99255};
    vector<string> description = {"NYY", "YNN", "YYY", "NYY", "NYN", "YNN", "NYY", "YNN", "NYN", "YNN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 581352091;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> points = {26738, 52723, 107896};
    vector<string> description = {"NYN", "NYY", "YNN", "NNY", "NYN", "YYY", "YNN", "YYN", "YNN", "YNN", "NYY", "YNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 621782235;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> points = {27667, 46855, 98053};
    vector<string> description = {"NNN", "YNN", "YNY", "NNY", "YYN", "NNY", "NYN", "YNY", "YNN", "NYY", "NNY", "YNY", "NYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
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
    vector<int> points = {28222, 52374, 91085};
    vector<string> description = {"YNN", "NNY", "NYY", "NNY", "YNN", "NYN", "YNN", "YYY", "NNY", "YYN", "YYY", "NYN", "NYY", "NNY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 695416133;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> points = {25427, 57062, 95581};
    vector<string> description = {"YYN", "YNN", "YYN", "NYN", "NYN", "NNY", "NNY", "NYY", "NYY", "NNY", "NYN", "NYN", "NNY", "YNY", "NNY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 774344459;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> points = {28167, 53441, 106710};
    vector<string> description = {"NNY", "NYN", "YYY", "NYY", "YNN", "NYY", "NYN", "NYY", "YYY", "YYN", "YNN", "YNN", "NYY", "NYN", "NYN", "YYN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 242066034;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> points = {27735, 48263, 102484};
    vector<string> description = {"YYY", "YYY", "NYY", "NYN", "YYY", "NNN", "YYN", "NNY", "YNY", "NYN", "NYN", "NNY", "YNN", "YNY", "YNY", "NYY", "NNY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> points = {29489, 54514, 94843};
    vector<string> description = {"NYN", "YNN", "YYN", "NYY", "YNY", "NYN", "YNN", "YNY", "YYY", "NYY", "YYN", "YNY", "YNN", "NNY", "YYY", "YNY", "NNY", "NYN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 728546474;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> points = {27268, 48881, 92683};
    vector<string> description = {"YNN", "NYN", "YYN", "NNY", "NYN", "NYN", "NNN", "YYY", "NNN", "NYY", "NNY", "YNN", "YNY", "NYY", "NNY", "YYN", "NYN", "NYY", "YNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
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
    vector<int> points = {29018, 46800, 92729};
    vector<string> description = {"YYY", "YNY", "NYN", "YNY", "YYY", "YYN", "YYY", "NYY", "YYY", "NNY", "NYN", "YYN", "NYN", "NYN", "NNY", "YYY", "YNN", "YYN", "NNY", "NNY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 285868678;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> points = {25600, 51200, 102400};
    vector<string> description = {"NYY", "YNY", "YYY", "YNN", "YYN", "NNY", "NYN", "NNY", "NYN", "NNY", "NYN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 406123230;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 406554591;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> points = {25600, 51200, 102402};
    vector<string> description = {"NYY", "YNY", "YYY", "YNN", "YYN", "NNY", "NYN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 815987873;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YNY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "NYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 820593981;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> points = {30000, 60000, 98888};
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "NYY", "NYY", "NYY", "YYY", "YYY", "NNY", "NNY", "NNY", "NYN", "NYN", "NNY", "NYN", "NYN", "NNY", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 294932411;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> points = {25600, 51200, 102400};
    vector<string> description = {"NYY", "YNY", "YYY", "YNN", "YYN", "NNY", "NYN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 867560805;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> points = {25600, 51200, 102400};
    vector<string> description = {"NYY", "YNY", "YYY", "YNN", "YYN", "NNN", "NYN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> points = {28000, 47000, 95000};
    vector<string> description = {"NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY", "NYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 215334087;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> points = {30000, 52599, 100255};
    vector<string> description = {"YYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 118152490;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 572020046;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 998614007;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> points = {30000, 60000, 110000};
    vector<string> description = {"YYY", "YYY", "YYY", "NYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYN", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 800286985;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> points = {25000, 50000, 100000};
    vector<string> description = {"YNN", "NNN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
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
    vector<int> points = {25600, 51200, 102400};
    vector<string> description = {"NYY", "YNY", "YYY", "YNN", "YYN", "NNY", "NNN", "NNN"};
    SRMIntermissionPhase* pObj = new SRMIntermissionPhase();
    clock_t start = clock();
    int result = pObj->countWays(points, description);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653720&rd=14545&pm=11496
********************************************************************************
#include <stdio.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
using namespace std;
 
const int mmod = 1000000007;
 
int prev[300000] = {0};
int next[300000] = {0};
int prev2[300000] = {0};
int next2[300000] = {0};
 
class SRMIntermissionPhase
{
  public:
  int countWays(vector <int> points, vector <string> description)
  {
    int n = description.size();
    prev[299999] = 1;
    for (int i=0; i<n; i++) {
      for (int j=0; j<300000; j++) prev2[j] = 0;
      prev2[0] = 1;
      for (int idx=0; idx<3; idx++) if (description[i][idx] == 'Y') {
        for (int j=0; j<300000; j++) next2[j] = 0;
        long long tot = 0;
        for (int j=0; j<300000; j++) {
          if (j-1>=0) tot += prev2[j-1];
          if (j-points[idx]-1>=0) tot -= prev2[j-points[idx]-1];
          next2[j] = tot % mmod;
        }
        for (int j=0; j<300000; j++) prev2[j] = next2[j];
      }
      printf("%d %d\n", prev2[0], prev2[1]);
      long long tot = 0;
      for (int j=299999; j>=0; j--) {
        next[j] = ((tot % mmod) * prev2[j]) % mmod;
        tot += prev[j];
      }
      for (int j=0; j<300000; j++) prev[j] = next[j];
    }
    int res = 0;
    for (int i=0; i<300000; i++)
      res = (res + prev[i]) % mmod;
    return res;
  };
};

********************************************************************************
*******************************************************************************/