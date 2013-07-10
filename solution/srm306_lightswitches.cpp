/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6407
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

class LightSwitches {
public:
    long countPossibleConfigurations(vector<string> switches);
};

long LightSwitches::countPossibleConfigurations(vector<string> switches) {
    long ret;
    return ret;
}


int test0() {
    vector<string> switches = {"YYN", "NNY", "YYY", "NNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> switches = {"NNNNYYYNYYNYYYYYNYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> switches = {"YNNNN", "NYNNN", "NNYNN", "NNNYN", "NNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> switches = {"NYNYNYN", "YNYNYNY", "YYNNNYN", "NNNYNYN", "YYYYYNN", "YNNNNYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> switches = {"YYYY", "YNYN", "NYNY", "NNNN", "YNYN", "NYNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> switches = {"NNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> switches = {"NNY", "NYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> switches = {"NNNNNNNNNYNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYYNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> switches = {"NNNY", "NNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
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
    vector<string> switches = {"YYN", "NYN", "YYN", "YNN", "YYN", "YNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> switches = {"NYY", "NNY", "YNN", "YNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> switches = {"NNYNNNNNNNNN", "NNYNNNNNNNNN", "NNNNNNNNNNNN", "NNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> switches = {"NNNNNYNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> switches = {"YYNNNNNNNNYNNNNNNNNNNNYNYN", "NYNNNNNNNNYNNNNNNNNNNNYNNN", "YNNNNNNNNNNNNNNNNNNNNNYNNN", "NYNNNNNNNNYNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNYNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> switches = {"NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNN", "NNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNYNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
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
    vector<string> switches = {"NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
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
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> switches = {"NNYNNY", "NNYNNY", "NNYNNN", "NNNNNN", "NNNNNN", "NNNNNY", "NNNNNN", "NNNNNY", "NNNNNN", "NNYNNN", "NNYNNY", "NNNNNY", "NNNNNN", "NNYNNY", "NNNNNN", "NNYNNY", "NNNNNY", "NNYNNY", "NNYNNY", "NNNNNY", "NNNNNY", "NNNNNY", "NNYNNN", "NNYNNN", "NNYNNY", "NNNNNN", "NNNNNN", "NNYNNY", "NNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> switches = {"N", "N", "Y", "Y", "N", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "Y", "N", "N", "Y", "N", "N", "Y", "Y", "N", "Y", "Y"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> switches = {"NNYYYN", "YYYYNY", "NNNNYN", "YYNNYY", "NNYNNN", "NYYNYN", "YNYNYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> switches = {"NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNYN", "NNNNNNNNYN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNNN", "NNNNNNNNYN", "NNNNNNNNNN", "NNNNNNNNYN", "NNNNNNNNNN", "NNNNNNNNYN", "NNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> switches = {"NNNYNNNNNNNYNNNNYNYNNNYYNN", "NNNNNYNNNYNYNNNNYNYYNYYNNN", "NNNNNYNNYNNNNNNNYNYYNYYNNN", "NNNYNNNNNNNYNNNNYYNYNYNNNN", "NNNYNNNNNYNYNYNNYNNNNNYNNN", "NNNYNNNNYNNNNYNNYYNYNYYNNN", "NNNYNNNNNYNYNYNNNYNNNNYYNN", "NNNNNYNNYNNNNYNNNYNYNNYNNN", "NNNNNNNNNYNYNYNNNNYYNYYNNN", "NNNNNYNNYNNYNYNNNYNNNYYNNN", "NNNNNNNNYYNYNYNNYNNNNYNYNN", "NNNYNNNNNNNYNYNNYNNNNNNYNN", "NNNYNYNNNNNYNNNNYYYNNNYYNN", "NNNYNNNNNNNYNYNNYYYYNNNNNN", "NNNNNNNNYNNNNYNNYYNYNNYYNN", "NNNNNYNNNYNNNNNNNNNNNNNYNN", "NNNYNNNNNYNNNYNNNNYNNYNNNN", "NNNYNYNNYYNYNYNNNYYYNYYNNN", "NNNNNYNNYYNYNYNNNNNNNYNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8192;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> switches = {"NYYNNNNYNNYNNNYYYNY", "YYYNNYNYYYNNNYYNNYY", "YNNNNYNYYNNNYNYNNNN", "NYNYYYYNNNNNYNYNNYY", "NNNYNYYYYYYYNNYYYNY", "NNNNNNYYYNNYNYNNYYN", "NYNYYYNNNNYYYYNYNYY", "NYNNNYNYYYYYNYNYNNY", "NNYNYNYNYNNYNNYNYNN", "NYYYYYNNYNNYYYYYNNN", "YYYNYYNYNYYYYNYNNYY", "YYNYYYNYNNNNYNYNNYY", "YYNYNNNYYYNNYNYNNYN", "NYNNYNYYYYYYNYYNNYN", "YNNNNNNNNNYYYNYNNNN", "NYYNYYYYNYYNNYNNYYY", "NYYYNYYYYNNNYNYNYYN", "YYYNYYYNNYNNNYNYNNN", "YYNNYNNNNNYYNNYNYYY", "YNYYNNYYYNYYYYNYYYY", "NNNNNYYNNYYYYYNYYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 524288;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> switches = {"NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> switches = {"NNYNNYYNNYNYNNNNNYNNNNNNNNYNNNNNNYNNNNNNNNNNNNY", "NYNNNYYNNYNYYNYYNYNYNYNNNNYYNNNNNNNYNNNNNNNNNNY", "NYNNNYYNYYNYNNNYNYNYNYNNNNNYNNNNNYNYNNNNNNNNNNY", "NYYNNNNNYNNYYNYYNNNNNNNNNNYYNNNNNYNNNNNNNNNNNNN", "NNNNNYYNNYNYNNYNNYNYYYNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNYNYYNYYNYNYNYNYNNNYNNNNNYNYNNNNNNNNNNY", "NYNNNYYNYNNYYNNYNYNYNYNYNNNYNNNNNYNNNNNNNNNNNNN", "NNNNNNYNNNNYYNNNNYNYNYNYNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNYYNNYNYNNYNYYYNYNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNYYNNYNNYNNNNYNNYNNYNNYNNNNNNYNNNNNNNNNNNNY", "NYYNNYNNNNNNNNYYNYNNYYNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNYNNNYNYNNNYNNNNYNNNNNNYNNNNNYNYNNNNNNNNNNY", "NNYNNYYNNNNYNNNYNNNYYNNYNNNNNNNNNYNNNNNNNNNNNNN", "NYNNNNNNNNNYYNNNNYNYYNNNNNYNNNNNNYNYNNNNNNNNNNN", "NYYNNNYNYNNNNNNNNYNYYNNYNNNNNNNNNNNYNNNNNNNNNNN", "NNYNNNYNNNNYYNYYNNNYNNNYNNNNNNNNNYNYNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNYNNNYNYNNYYNNNNNYNNNNNNNNNNNNY", "NYYNNYNNYYNYYNNYNYNNYNNYNNNYNNNNNNNYNNNNNNNNNNY", "NYNNNNYNNNNYYNYYNYNNYNNNNNNNNNNNNYNYNNNNNNNNNNN", "NYYNNYNNYYNYYNYYNNNYYNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNYNNNYNYNNNYNNYNNNYYNNNNNYYNNNNNNNNNNNNNNNNNNN", "NNNNNYYNYNNNNNYYNNNNNYNNNNNYNNNNNYNNNNNNNNNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> switches = {"NNNNNYNNYNNNNNNNYNNYNNNYYNNNNNNNYNN", "NNNNNNNYNNNNNNNNNNNNYNNNNNNNYNNNYNN", "NYNNNYNNYNYNNNNNNYNNNYNYNNNNYNYNNNN", "NYNNNNNNYNYNNNNNYYNYYNNNYNNNYNNNNNN", "NYNNNNYYNNNNNNNNNNNNYYNYYNNNNNYNYNN", "NYNNNNYNNNNNNNNNNNNNNYNYYNNNNNNNNNN", "NYNNNYYNNNNNNNNNNNNNYNNNNNNNYNYNNNN", "NYNNNNYNYNNNNNNNNYNYYNNNNNNNYNYNYNN", "NNNNNNNNYNYYNNNNYYNYYYNNYNNNNNNNNNN", "NYNNNYYNNNNYNNNNNNNYYYNNYNNNYNNNNNN", "NNNNNYNNNNNNNNNNNYNNYYNNNNNNNNNNYNN", "NYNNNNNYYNYNNNNNYNNYNNNNYNNNNNYNYNN", "NNNNNNNYYNYYNNNNYYNYYYNYNNNNNNYNYNN", "NYNNNYYNYNYYNNNNYYNYYYNYNNNNNNYNNNN", "NYNNNNNYYNNNNNNNYNNYYYNYYNNNYNNNNNN", "NNNNNNYNYNYNNNNNYYNYNNNNNNNNNNYNNNN", "NNNNNNYYYNYYNNNNNNNYNYNYNNNNYNYNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 131072;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNYNNYNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> switches = {"YNNYNNNYNNNNYNNNNYNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNYNNNNYNNYNYNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNYYYNNYNNNNYNNYNNNNNNYNNNYNYNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNYNYNNYNYYNNYNYNNNNNNYNNNNNNNNNYNNNN", "NNNYYNNYNNNNNNNNNNNNYNYYNNNNNNNNNNNYNNNNNNNNNYNNNN", "YNNNYNNYNNNNNNNYNNNNYNNYNNYNYNYNNNNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNYNYNNNNYYNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNYYNNNNNNNNNNNNYNNNNYYNNNNNNNNNNNYNNNNNNNNNYNNNN", "YNNNYNNNNNNNYNNYNYNNNNNNNNNNYNYNNNNYNNNNNNNNNNNNNN", "YNYYNNNYNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNYNNYNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNYNNNNNNNYNYNNNNNYNNNNNNNNNNNYNNNNNNNNNYNNNN", "YNYNYNNYNNNNNNNYNYNNYNNNNNYNYNYNNNNYNNNNNNNNNNNNNN", "YNYNYNNYNNNNNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNYNNNN", "NNYYYNNYNNNNYNNNNYNNYNNNNNYNYNYNNNNYNNNNNNNNNYNNNN", "NNNNYNNNNNNNYNNNNNNNNNYNNNNNNNYNNNNYNNNNNNNNNNNNNN", "NNYYNNNNNNNNNNNYNNNNYNYNNNYNYNYNNNNNNNNNNNNNNYNNNN", "NNYNNNNNNNNNYNNYNYNNNNYNNNNNYNYNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNYNYNNNNNNNYNNNNYNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNYNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> switches = {"NNNNYNYNYNNYNNNNNNYYNNNYNNYYNYNYYYYYNNNNNYNNYYYNNN", "NNNNYNNNYNNYNNNNNNYNNNYNNNYNYNYYNNNYNNYNNYNNYYYNNN", "NNNNYNYNYYNNNNNNYNYNNNYNNNYYYNYNNNYYNNNNNYYNNNNNNN", "NNNNYNYNNNNNYNNNNNYYNNYNNNNNNNNNYYNNNNNNNNYNYNYNNN", "NNNNNNNNNYNYYNNNNNNNNNYNNNYNYYNNYYNNNNYNNYNNYYYNNN", "NNNNNNYNNYNNYNNNYNYNNNYYNYYYNYNNYNNNNNYNNNNNNNNNNN", "NNNNYNYNYYNNNNNNYNNYNNYNNNYNYYYNNYYNNNNNNNNNNYYYNN", "NNNNYNYNYYNYYNNNNNYNNNNYNYNNYNYNYYYNNNYNNYNNNNYNNN", "NNNNYNYNNYNYYNNNNNNYNNYNNNNYYNNNNNYNNNYNNYYNNNYYNN", "NNNNNNYNYYNYYNNNYNYYNNNYNYNNYYYNNNYYNNNNNNNNNYNYNN", "NNNNYNNNNNNYNNNNNNNNNNNNNNYYYYNNNYYYNNYNNYYNYYNNNN", "NNNNYNYNNNNNNNNNYNYNNNYNNYYYYYYNYYYYNNYNNNYNNYYYNN", "NNNNYNYNYYNYNNNNYNYNNNYNNNNNYNNYYYYNNNNNNNNNYYNYNN", "NNNNYNYNNYNNYNNNNNNYNNYYNNNYNYNNYYNNNNYNNNNNNNNNNN", "NNNNNNYNNNNNNNNNYNNNNNNNNNNYYYNYYNYNNNYNNYYNNYNNNN", "NNNNYNNNYYNYYNNNNNYYNNNNNNNNYNYYNYNNNNYNNYYNNNYNNN", "NNNNNNNNNNNNNNNNNNNYNNYNNNNNYNNYYYYYNNYNNNYNYYNNNN", "NNNNNNNNYYNNYNNNYNYYNNNNNNNNNYNYNYYNNNNNNNNNYNNNNN", "NNNNNNYNYYNYYNNNYNNYNNNYNYYNYYNNYNNNNNYNNYYNYYNYNN", "NNNNNNNNYNNNNNNNNNYNNNYYNYNYNNNYYYYNNNYNNYYNYYYNNN", "NNNNYNYNNYNNNNNNNNNYNNNNNNNYNYNYYYNYNNYNNNNNYYYYNN", "NNNNYNNNYNNYNNNNNNNNNNYNNNYNYYNNNNYNNNNNNNNNYYYNNN", "NNNNYNNNYNNNYNNNYNNNNNNNNNNNNYNYNNNYNNNNNYYNNYYYNN", "NNNNYNYNYNNNNNNNNNYYNNYYNNNYYNYNNYNYNNYNNNNNNYNNNN", "NNNNYNYNNYNNNNNNNNNNNNNNNYYYNYNNYNNYNNYNNNYNYYYYNN", "NNNNNNYNNYNYYNNNNNNNNNYYNYNYNNYYNNYYNNYNNNNNNYNNNN", "NNNNNNYNNNNYNNNNYNYYNNYYNYYNNYNYYNNNNNYNNYNNYNNYNN", "NNNNYNNNYYNYYNNNNNYNNNYYNNNYNNNYNYYYNNYNNYNNYNYNNN", "NNNNNNYNYNNYNNNNYNNNNNNYNYNYYYYNYYYYNNYNNNYNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 536870912;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> switches = {"N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N", "N"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> switches = {"NNYYN", "NNYYN", "NNYNN", "NNYYY", "YNYNN", "YNNNY", "YNYNY", "YNYNY", "YNYYY", "YNNNY", "YNNNY", "YNYYN", "NNYNY", "YNNNY", "NNYNN", "NNYYN", "YNYYY", "YNNNY", "NNYNY", "YNNNN", "YNNYN", "NNYYN", "YNNNN", "YNNNN", "NNYYN", "NNYNY", "NNYNN", "NNNNN", "NNYNN", "YNNYN", "YNYNN", "YNYYY", "NNNYY", "NNYNN", "YNNNY", "YNYNN", "NNNYN", "NNNYY", "NNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> switches = {"NYNNNY", "NNYNYN", "YYYNYN", "NNNNYN", "YNNNNY", "YYNNNY", "YYNYYN", "YNNYNN", "YNNNYY", "YNNYYY", "NNYYNY", "NYNYNN", "NNYNNN", "NYYNNY", "NNNNYN", "YYYYYN", "NNYYNY", "NNNYNY", "NNYYYY", "YYYYNY", "YYNNNY", "NYNNYN", "YNNYYY", "YNYYYY", "NNNNYN", "YYNYNY", "NNYNNN", "YYNNNY", "YYNYNN", "YYNYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> switches = {"NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNYNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> switches = {"NYNNNNYNNNNYNNNNNNNYNYNYNNN", "YNNNNNNNNNNNNNNNNNNYNYYNYNN", "YYNNNNNNYNNYNNNNNNYYNNNYNNN", "YNNNNNYNYNYYNNYNNNNNNYNNYNY", "YYNNNNNNYNNYNNNNNNNYNYYNNYY", "YNNNNNNNYNYNNNNNNNYYNYNYYYN", "YYNNNNYNNNYNNNNNNNNYNYNNNYY", "YNNNNNYNYNNYNNYNNNNNNYYYYYN", "YNNNNNNNYNNYYNNNNNNYNNYNNNY", "YNNNNNYNYNNNYNNNNNYYNNYNYNY", "NNNNNNYNYNNNYNYNNNYYNYNNNNY", "NYNNNNYNNNNYNNYNNNYYNNNNNNY", "YNNNNNNNNNNYYNNNNNNNNYYNNNY", "YYNNNNNNYNYNNNNNNNYYNYYNNNY", "NYNNNNYNYNNNNNNNNNYNNNYNNNN", "NYNNNNNNYNNYNNYNNNYNNYNYNNY", "NNNNNNYNNNNNYNYNNNNNNYYYYNN", "YYNNNNNNYNYYNNNNNNYYNYNNYYY", "NYNNNNNNNNNNYNNNNNYYNNNNYNY", "NNNNNNYNYNYNYNYNNNNNNNYNYNY", "NYNNNNYNNNYYNNNNNNNNNYYNNYY", "NNNNNNNNYNYYYNNNNNNYNNYYNYN", "NYNNNNYNYNYYNNNNNNYNNNNNNNN", "YNNNNNYNNNNNNNNNNNYYNNNNNYN", "NYNNNNNNNNYYYNNNNNYYNYNYNYN", "YYNNNNNNNNNNNNNNNNNYNNNNNNY", "NNNNNNYNYNYNNNNNNNNYNYYNNNN", "NNNNNNNNYNYNNNNNNNNYNYYYNNN", "YNNNNNYNYNYYYNYNNNNYNNYYYYY", "YNNNNNNNYNNYNNNNNNYNNYNNYYN", "YNNNNNYNYNYNNNNNNNYNNYNYNYN", "YNNNNNYNNNNYNNYNNNNNNNYNYNY", "NNNNNNNNYNNYNNNNNNNYNYYYYNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 65536;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> switches = {"NNYYYNNNNNYNNNNYNYYNYN", "NYNYYYYNYYNNNNYNYNYYNY", "YYYNYYNNNNNNYNNYYNYYYY", "YNNYYYYNYNNYNNYYNYNYNN", "NNYNNNNNYNNYNYNNNNYYYY", "NNNNYYNNNYNNNNYNYNNYYY", "NNYYYYYNYYYYYYYYNNYNNY", "NNYNNNYYNYNNYNNYYYYNYN", "NNYNYNYYYYYYNNNYYYNNNN", "NYNYNNYNYNYYNYYYYNNYNN", "NNYYYNNNNYYNNNYYNYNYNY", "YNYNYNNNYNNNYNNYYYNNNN", "NYNNNYYYNNNNNYNNNYYNNN", "NNYNYYNYNNNYYNYNNYNNYN", "NYYYYYYNYYYYNYNNNYYYYY", "YNNNNNNYNNNYYYYNYYNYYN", "YNYNYYNYNNNYYYNNYYYNNN", "NYYYNYNNYNYYNNYNNNYYYN", "NYNNYYYYNYYNNNNYYYNNYN", "NYNYYYYNNNNYYNYYYNYNYY", "NNNNYNNYNYNYNNNNNYYNNY", "YNNNYYYNNNNNYNNYYNNNNN", "NNYYNYYNNYYNYYYNYNYNYY", "NNNNYNNYYYNNNNNYNNNYYY", "YNYYYYYNYNNYYNNNNYYYNN", "YYNNYYNNNYNYNNYYYNYYYN", "NNNNNYNNYNNYYYNNYYYNYN", "YYYYNNYNNNNYNNNNYYNYYN", "YYNYYNNYYNNNNYYYYNYYNY", "NNNNNNNYNYNYNNYYYYNYNN", "YNNYNNYNNNNNYYYYYNNNYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4194304;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYNNNNNNNNNNNNNNNNNNNNNNYNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> switches = {"NNNNNYNYNYYNYNNNNYYNNYNYYYNNNYYYNNYNYNYYNNNNYY", "NNNNNNYNNYYNNYNNNNYNNYYNNYNNNYNYNNNNYNNYNNNNYY", "NNNNNNYYNYYNYNNNNYNNYYNYNNNNYYNNNNYNNNYYNNNNYY", "NNNNNNNNNYYNYNNNNNNNNNNNNYYNNYYNNNYNYNYNNNYNYY", "NNNNNYYYNNYNYYNNNNNNNYNYYYNNYNNYNNNNNNNNNNNNNN", "NNNNNNYYNNNNNNNNNYNNYNNYNNYNYNYNNNYNYNYYNNYNNN", "NNNNNYNNNNYNNNNNNYYNNNYNNNYNYYNNNNYNYNNYNNYNYN", "NNNNNYYYNNNNYYNNNNNNYNNYYNNNYYYYNNYNNNNNNNNNYY", "NNNNNNYYNYYNYNNNNNNNNNYYNNYNNNNYNNYNNNYYNNNNYN", "NNNNNYYNNNNNYNNNNNYNYYNNNNNNYYYNNNYNNNYYNNNNYN", "NNNNNNNNNNNNYNNNNNYNNYNYYYNNNYNYNNYNNNYNNNYNYN", "NNNNNYNYNNYNNNNNNNYNYYNYNNNNYNNNNNNNNNYYNNYNYY", "NNNNNYYNNNYNNYNNNNNNNYYYNYNNNNYNNNNNNNNYNNNNYN", "NNNNNNNNNYNNYYNNNYNNYNNNYNYNNYYNNNYNYNYYNNYNNN", "NNNNNNNNNNYNNNNNNYYNNYNYNYYNNYYNNNNNYNYYNNYNNN", "NNNNNNYYNNNNNNNNNNYNNYYYNYYNNNNNNNNNYNYYNNYNYN", "NNNNNYNNNYNNNNNNNYNNYYNYYNNNNYYYNNYNNNNNNNYNYY", "NNNNNYNNNYNNYYNNNYNNNNNYYNYNYYYNNNYNYNYYNNYNYN", "NNNNNYNNNNYNNYNNNNYNNYYNYNYNNYYNNNYNNNYNNNYNNN", "NNNNNYYYNYYNYNNNNYNNNYNNYNYNYYNYNNYNNNNYNNNNNN", "NNNNNYYNNYYNYNNNNYNNNNNYYNYNNYYYNNNNNNNNNNYNYY", "NNNNNYYYNNNNYNNNNNYNYYNNYNNNYNYYNNYNYNYYNNNNNY", "NNNNNYYYNYNNYYNNNNYNNNNNNYYNNNNNNNYNNNNNNNYNYY", "NNNNNYYNNYNNYNNNNYYNYNNYYYNNNNYNNNYNYNNYNNYNYN", "NNNNNNNNNNYNYNNNNYYNYNNYNNNNNYNNNNYNNNYYNNYNYY", "NNNNNYNYNYNNYYNNNYNNNYYNNYNNNNYYNNNNNNNNNNYNYY", "NNNNNNYYNNYNNYNNNYNNYNNYYNYNNNNYNNNNYNNYNNYNYN", "NNNNNYYYNNYNYNNNNYYNYNNYYNYNNNYNNNNNYNYYNNNNYN", "NNNNNYYNNYNNYNNNNYNNNYNNNNNNYNNYNNYNNNNYNNNNYN", "NNNNNNYYNYNNYNNNNNNNYNNNYYNNYYYYNNNNNNNNNNYNNN", "NNNNNYYYNNNNNNNNNYYNNYYNNNYNNNYYNNNNNNYYNNNNYN", "NNNNNYYYNNNNYYNNNNYNNYYNNYNNNYYYNNNNNNYNNNNNYY", "NNNNNYYNNNNNNNNNNNNNNYNYYNNNYYYYNNNNNNNNNNNNNY", "NNNNNYNNNNYNNNNNNYYNYNNYNNYNYNYYNNNNNNYYNNYNYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 134217728;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> switches = {"NNYYNNNYNYNYNNNYYNYNYYNNYYYNYNNYYYNNYNNYYN", "YYYNNYYYNYNYNYYNNYYNYYYYYYNNYNYNYNYNNNNYYY", "YNNNYYYYYNNNNNNNNNYYNNNNYNNYYYYNNYNNYNYNYN", "NNYYNNYYNYYNNYYNNNYNNYYNYYYYYYYYNNNYNYYNYN", "YNNYNYYNNNNYYYNYNYNYYYYYNYNNYYNYYYNNYYYNNY", "NNYNNYNNNYYNYYNYYYNYYNYYNNNNNNNYYNYNNYYYNY", "NNYNYNYNYYNYYNNYNNNYNYYYYYYYNYYYYYNNNNNNYN", "NYNNYNYNNYYYYYYYNNYNYYNYYYNYNNNNNNNNNYNNNN", "NNYYNYNYNYNNYYYYNYNYYYNYNNNYYNYYYYYNNNNYYY", "NNNYNNYNYNYNYYNNYNYNYNYYNNYYYYNYNYYYYNYYYY", "NNYYNYNYNNYNYNYNYNYNYNNNNYNNNYNYYYNNYYNYNN", "NNNNYNNYYNNNNNNYNNNNYNNNYYYNNNYYNYYNNNYYYN", "YYYYNNYNYNNNNYNYYNYNNNNNNYNYYNNNYNNNYNNNYY", "YYYNYYYNYNNYYYNYYYYYYNYYNYYYNNYNYYNNNNYNYN", "YNNYYNYNYYNNNYYNYYYNYNYNYNNYYNNNYYYYNYNNYY", "YNNNYYNNYNNYYYNYYNYYNYYNNNNNYNYNYYYNNYNYYY", "NNYYNYYNYYNNNYNYYNNNNNNYNYNYNNYYYYYNNYYNYY", "NNNYYYYNNNYNYNNNYYYYYNYYNNYNYNNNNYNYYNYYNY", "YNNYYNYYYYYNYYYNYYNNYYNYNYYYYYNNNNYYYNNYYY", "YYYYYYYNNNNNYYNNYYYNYYYYYYNNNNNYYYNNNNYYYY", "NYNNNYYNYNYNYNYNYNYYNYYNNNYNYYYYNYYNNNYNNY", "YNNNYYNNYNYNYNNNNNYNYYNNNNNYNNNYYYYYNYNNNN", "YNYYYYNNNYYYNYNYNNNYNNYNYYNYNYNNNNYNYYYYNY", "YYNYYYYYNYNYNYYNNYYYNYYNNNNNNNYNNYYYNNYYNN", "NYNNYYNNYNNNNNNYYNYNNYNNNNNNNYNNYYYYYNNYYN", "YNYYYNNNNNNNYYYYYNYNNYNYNNYYYYNNYYNYYYNNYN", "YYNYYYYYNYNNYNYYYYYYNNNYNYYYNNNYNNNNYYNYNY", "YNNYNYYYYNNYYNYNYNYNNYNYNYNYYNYYYYYNNYNNYY", "NNYNYYNYNYNYYNNNNNNNNYYYNYYYNNYNNNNNNYNYYN", "NNNYNYYYYYNYNNNYNNNYNNYNYNYYNNNYNYYNNYYYYY", "NNYNYNYNYYYNNYNNYYYYNYYYNNNYNYYYNYNYNYNYYN", "NNNYNYNNYYNNYNYNNNYNYYNNNYYNNYYYNNNNYNNNNN", "YNNNNYYNYYYNYYYYNNNYNYYYYNNYYYNNNYNNYYNNNY", "NYYYYYYNYYNYNYYYNYNNYYNNNYYNNYNYYNYYYYNNNN", "NNYYNYNNNYYYNYNYNYNYYYNYYYYYYNYNYNNYNYNNNY", "YYNNNYYYYNNNNNNYNNNYNYNYNYYYNNYYNYNNYYNNNY", "NYNYYNYYNNNYNNNYNYYNNYNNYNNNYYNYNNYNYNNNNY", "NNYYYNNNNYNNYNNNYYYNYYNNNYNYYYYNNNNNYNNNYN", "YNNYNYYNNNNYNYYNYYNYYNYYNNYNNYYYNNNNNNNNYY", "NYNNNNYNYNYNNYNYNYYYYNNYNNYYNYYNYNNNNYNNNN", "NYYNYNYNNNYYYNYNNNYNYYNYYNYYNYYYYYYNNYYNYN", "NNYYNYYNYYNYNYNYYNYNNNNYNYYNNYNNNNYYYNNNYY", "NYNNNNNYYNYNNNNNNNNNNNNNNNNYYNYNNYNNYYYYYY", "YYNNNYNNNNYNYYYNYYYYNYNNNYNYNYYNYYNYYYYNYN", "YYYYYNYYNNNYYYNYYNYYYYYNNNNYYNYYNNNYYNYNYN", "NYYNNYYYNNNYYNYYNNNYNYYYNYNNNYYYYYYYYYYNYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4398046511104;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> switches = {"YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNYNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNYNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNYNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNYNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNYNNNNNNNNN", "YYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNYNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> switches = {"YYYNNNNNNYYNNYNNNNYNNNNNNYNNYNYNNNNNYYYNNNNNNNYYNN", "NYNNNYNNYNYNNNNNNNNYNNNYYYNNNYYYYNNYYNNNNNYNNNNYNN", "YYYNNNNNYNYNYNNNNNNYYNNYNYNNNNNNNNNNYNYNNNYNYNYYNN", "YYYNYYNNYYNNYYNNNNNNYYNYNYNNYNYYNNNYNNNNNNNNNNYYNN", "YYYNNYNNYNNNYYNNNNNNYNNNNYNNNYNNYYNYNNYNNNYNYNYYNN", "YYNNNYNNNNNNYNNNNNYNNYNNYYNNYNYNNYNYYNYNNNNNYNNYNN", "NYYYNNNNNYYNYNNNNNNNNNNYNYNNYNNNYNNYNYNNNNNNNNYYNN", "NNYNYNNNYNYNYYNNNNNNYNNNYYNNYYYYNNNYNYYNNNNNNNYNNN", "NYYYYYNNNYYNYYNNNNYYYNNYNYNNYNYYNNNYNYNNNNNNYNNYNN", "NNYYNNNNYYYNYNNNNNYNYNNNNNNNNNYNYNNNNYNNNNNNNNYNNN", "NYYYYYNNYNNNYYNNNNNYNYNYYNNNYNYYNNNYNNNNNNNNYNNYNN", "NYYYNNNNYNNNNNNNNNNYYNNYYYNNNYNYYNNYNNYNNNYNYNYNNN", "NNYNYYNNNNYNYYNNNNYNNNNNYYNNNNNNNYNYNYNNNNNNYNYNNN", "NYNNNNNNNNNNYNNNNNNYYNNNYYNNYYYNYNNYNNYNNNYNNNYYNN", "NYYNNNNNYNYNNYNNNNYNYNNYNYNNYYNNNNNYYYNNNNNNYNNYNN", "YYYYNNNNYNYNNYNNNNNYYNNNNYNNYNNNYNNYNYYNNNYNYNNYNN", "YYNNYNNNYNNNYYNNNNYNYNNNNYNNNYYYNYNYYNNNNNYNNNNNNN", "YYNNNNNNNYYNNYNNNNNNNYNNNNNNYYNNYYNYYNYNNNYNYNNYNN", "NNYNYNNNNYNNYNNNNNNYYNNNYNNNNNNNYNNNNNYNNNYNNNNYNN", "YYYNYYNNYNNNYNNNNNNYYYNYNNNNNYYNNNNNYNYNNNYNNNYYNN", "YNYNYNNNNNNNYNNNNNYYYYNYYNNNNYNYYYNNNYNNNNNNNNYYNN", "NNYNNYNNNNYNNNNNNNNNNNNNYNNNYNYYYNNYNNYNNNYNNNYYNN", "YNYYYYNNYYYNNYNNNNNYYNNYNNNNNNNYYNNNNYYNNNNNNNYNNN", "NNNNYNNNNYNNNYNNNNYYYYNYNNNNNYNNNNNYYNNNNNNNYNNYNN", "YNYNYNNNNYNNYYNNNNYNYYNNNYNNYNYNYYNYYNYNNNYNYNYNNN", "YNYNYNNNNYYNYNNNNNYYNNNYYNNNYNNYNNNYYNYNNNYNNNYNNN", "YNYYYNNNNYYNYNNNNNNNNNNNNYNNYNNNYNNNNYNNNNYNYNNNNN", "NNYNYYNNYYYNNYNNNNNNYNNNYYNNYNNNYNNNYYNNNNNNYNYYNN", "NYYNNYNNNYNNNNNNNNYNNYNYYNNNNNYYNYNNNYYNNNNNYNYYNN", "NYNYNNNNYYYNYNNNNNYYNNNYNNNNYYYNNNNNNYNNNNNNYNYNNN", "NNYYNNNNYNNNYNNNNNNNYNNNNYNNYNYNNYNYNYNNNNYNYNNYNN", "YNNNYNNNNNYNNYNNNNYYNNNNYNNNYNNNNNNNNYYNNNNNYNNNNN", "NYNNNNNNYYYNNYNNNNYNYYNNNNNNNYYYNNNYYNYNNNYNNNYNNN", "YYYYNNNNNNNNYNNNNNNNYNNNNYNNNNNYYYNNYNYNNNYNYNNYNN", "YNNYNYNNYNNNYYNNNNYNNYNNNYNNNNYNYNNYYNYNNNNNYNYYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4294967296;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> switches = {"YNYYNNNNNYYYNYNNNYNNYNYYYNYNNYNYYNNNNNNYNNNYYNYNYN", "NNYNNYNYYYNNNNNNNYYNNNNNYNYNNNNNNNNNNNNYNNNYNNYNYN", "NNNNNYNYYNNNNYNNYNYYNNNNNNNNNNNYYNNNNNNNNNNNYNYNNN", "NNYNNNYNYYNYNNNNYNNYNYYNYNYNYYNYNNNNNNNYNNNYNNYNNN", "NNYNNYNNYNYNNNNNNNNNNYYYNNYNYNNYYNNNNNNNNNNYYNNNYN", "NNNNNNNNNYNNNYNNYYYNYNYYYNNNYYNYYNNNNNNNNNNYYNYNYN", "YNNNNNYYYYNYNYNNYYNYNNYNNNYNYNNNNNNNNNNYNNNNYNNNYN", "YNYNNNNYYYYNNNNNNNNYNNNYYNYNNYNNNNNNNNNNNNNNYNYNYN", "YNYYNNYYYYYYNYNNNNYNNYNNYNNNNYNYYNNNNNNYNNNYYNYNYN", "NNNNNNYNNYYNNNNNYNNNYNYNNNYNNNNYNNNNNNNYNNNYYNYNYN", "NNYNNNYNYNYYNYNNYYYNYNYNNNYNYNNNNNNNNNNYNNNYNNNNNN", "YNYNNNNYNNYYNNNNYNYYNYYNYNYNNNNNYNNNNNNNNNNYYNYNNN", "YNYNNNNYNNNNNNNNYNYNNNYYNNNNYYNYNNNNNNNNNNNNNNYNYN", "YNNYNYNYNNYNNNNNNYNYNNYNYNYNYYNNYNNNNNNYNNNYNNYNNN", "NNNNNNYNNYYNNYNNYNYYNNNYYNNNNNNNNNNNNNNNNNNNYNYNNN", "NNYNNYNYNNNYNYNNYNNNYYNYYNYNYYNNNNNNNNNNNNNNNNNNNN", "YNYNNYYNYYNYNYNNNNNNYNNNYNNNYYNYYNNNNNNYNNNYNNYNNN", "NNNYNYNYNYYYNNNNNNNNNYYNNNNNYYNNYNNNNNNNNNNNNNNNNN", "NNYYNYYNYYYNNYNNNYNNYNYNNNNNNYNYYNNNNNNNNNNYYNYNYN", "NNYYNNNYYNNNNYNNYYNYNNNNNNYNYYNNYNNNNNNNNNNYYNNNYN", "NNYYNNNYNNNNNYNNNNNYNYYYYNNNNNNNYNNNNNNNNNNYNNNNNN", "YNYYNNNNNYYYNNNNYYNNYNNYNNYNNNNYYNNNNNNYNNNNNNNNNN", "NNNYNNYYNYNNNYNNYYYYNYYNYNYNYNNNYNNNNNNNNNNNYNNNYN", "YNYNNYNYYYNNNNNNYNNYNYYYYNNNNNNYNNNNNNNNNNNNYNYNNN", "NNNNNYNNNNNYNNNNNNNYYNYNYNNNNYNYYNNNNNNYNNNNYNNNYN", "NNNNNNYYYYYNNYNNNNYNNNNNNNYNNNNNYNNNNNNYNNNNYNNNYN", "NNNNNNYYYYYYNNNNNYNYYNNYYNNNYYNYYNNNNNNYNNNYYNYNNN", "YNNYNYYNYYNNNYNNNNNYYNNNYNNNYNNNYNNNNNNYNNNNYNYNNN", "NNNNNYYNYNYNNYNNYYYNYYYNNNYNYYNYYNNNNNNYNNNYNNYNNN", "NNNYNNYNYYNNNYNNYYYYNNNYNNYNNYNYYNNNNNNNNNNNNNYNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> switches = {"NNNN", "YNNN", "YNNN", "YNNN", "YNNN", "NNNN", "NNNN", "NNNN", "YNNN", "NNNN", "NNNN", "NNNN", "NNNN", "YNNN", "NNNN", "YNNN", "NNNN", "YNNN", "NNNN", "YNNN", "NNNN", "YNNN", "NNNN", "NNNN", "NNNN", "YNNN", "YNNN", "NNNN", "YNNN", "YNNN", "NNNN", "YNNN", "NNNN", "YNNN", "YNNN", "YNNN", "YNNN", "YNNN", "NNNN", "YNNN", "YNNN", "YNNN", "YNNN", "NNNN", "YNNN", "YNNN", "NNNN", "YNNN", "NNNN", "YNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> switches = {"NYNYN", "NYNNY", "NNNNN", "NYNNY", "NYNNY", "NNNYN", "NNNNN", "NNNYN", "NYNYN", "NNNNN", "NNNNY", "NYNNN", "NYNYY", "NYNNY", "NYNNY", "NNNYN", "NNNNN", "NYNYN", "NNNNY", "NYNNY", "NYNNY", "NYNNN", "NYNYY", "NYNYN", "NYNNY", "NYNYY", "NNNYN", "NNNNY", "NNNNY", "NYNYY", "NNNYN", "NYNYN", "NNNNN", "NNNNY", "NNNNY", "NNNYY", "NNNYY", "NNNYY", "NNNNN", "NNNYN", "NYNYY", "NYNYY", "NNNNY", "NNNNY", "NYNYN", "NNNYY", "NNNNN", "NNNNY", "NNNNY", "NNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> switches = {"YYNN", "YYNY", "NYYY", "YNNY", "NYNN", "NYYY", "NYYN", "YNYY", "NNNY", "NYNN", "NYNN", "YYNY", "NNYY", "NNYY", "YYNN", "NYNN", "NYNY", "YYYY", "YNNN", "YYYN", "NYNY", "NYYY", "YYYN", "YYNN", "YYNN", "NYYY", "NYYY", "NYYN", "NYNY", "YNNY", "NYYY", "YYYY", "NYYY", "YNNN", "NNYY", "YYNY", "YYNN", "NYNY", "YNYN", "YYNY", "NYYN", "NYYN", "NYNY", "YNYN", "YNYN", "YYNY", "NYYN", "NNYY", "YNYN", "NYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> switches = {"NYYNNNNNNNNYNNNNNNNYNNYNYNYN", "NYNNYNNNNYNNNNNNNNNYNNYYYYYN", "NNYNYNNNNYNNNNNNNNNNNNNYNNYN", "NYNNNNNNNYNYNNNNNNNYNNYNNYYN", "NYYNNNNNNYNYNNNNNNNNNNYNYYYN", "NYNNYNNNNNNNNNNNNNNNNNYYYNNN", "NYNNYNNNNNNYNNNNNNNNNNNNYYNN", "NYNNNNNNNNNYNNNNNNNNNNYNNNNN", "NYNNYNNNNYNYNNNNNNNYNNNNNYYN", "NYYNNNNNNNNNNNNNNNNYNNNYYNNN", "NNYNYNNNNYNNNNNNNNNYNNYYNNYN", "NYNNNNNNNYNNNNNNNNNNNNNYYNNN", "NNNNYNNNNNNYNNNNNNNYNNNNNYNN", "NYYNYNNNNYNYNNNNNNNNNNYNNNNN", "NYYNNNNNNNNNNNNNNNNYNNNNYNYN", "NNNNNNNNNYNNNNNNNNNYNNYYYYNN", "NYNNNNNNNNNYNNNNNNNNNNYNNYNN", "NNNNYNNNNYNNNNNNNNNNNNNNNYYN", "NNYNNNNNNYNYNNNNNNNNNNYNYYYN", "NYYNYNNNNYNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNYNNNNNNNYNNYNNYNN", "NNYNNNNNNYNNNNNNNNNNNNYNNYYN", "NYNNNNNNNNNYNNNNNNNNNNNNYYNN", "NYNNNNNNNYNYNNNNNNNYNNYNNNNN", "NNNNNNNNNYNYNNNNNNNYNNNNYYNN", "NNYNNNNNNNNYNNNNNNNYNNYNNYNN", "NNNNNNNNNNNNNNNNNNNYNNYYYNYN", "NYYNYNNNNNNYNNNNNNNYNNNNNNYN", "NYNNNNNNNYNNNNNNNNNYNNYNYNYN", "NYNNYNNNNYNNNNNNNNNYNNYNNNYN", "NYYNNNNNNYNNNNNNNNNNNNNYYNYN", "NYNNYNNNNYNYNNNNNNNYNNYNNNNN", "NNYNYNNNNYNYNNNNNNNYNNYYYYNN", "NYNNYNNNNYNYNNNNNNNNNNYNNNNN", "NYYNNNNNNYNNNNNNNNNNNNYYYNYN", "NYNNYNNNNNNYNNNNNNNYNNYYYYNN", "NNNNYNNNNYNNNNNNNNNYNNYYYNYN", "NYNNNNNNNYNYNNNNNNNYNNYNYNNN", "NNYNYNNNNYNNNNNNNNNNNNNNYYNN", "NYNNYNNNNYNYNNNNNNNNNNNYYYYN", "NNYNYNNNNYNYNNNNNNNNNNNYNNNN", "NNYNYNNNNYNNNNNNNNNYNNYNNNYN", "NYYNNNNNNYNYNNNNNNNYNNYNYYNN", "NYNNYNNNNYNYNNNNNNNNNNNYYNYN", "NYNNNNNNNYNYNNNNNNNYNNYNYNYN", "NNNNNNNNNNNNNNNNNNNYNNNNYYYN", "NYYNNNNNNYNNNNNNNNNYNNYNNNNN", "NNNNNNNNNNNYNNNNNNNYNNYNNYNN", "NYYNNNNNNYNYNNNNNNNYNNYYYYNN", "NNNNYNNNNNNYNNNNNNNYNNNNNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> switches = {"NNNNYNYNNYNNYNYYYYNNNN", "NNNNNNYNNYYYYNNNNNNNNN", "NNNNYNNNNYNNYNNNYNNYNN", "NNNNYNYNYNNYYYYNYYNYNN", "NNNNNNNNNYNNNYNNYYNYNN", "NNNNNNNNNYNYNYYNNNNNNN", "NNNNYNNNYYYNNNNYYNNYNN", "NNNNYNYNNNNYYNNYNYNNNN", "NNNNNNYNYYYNNNYNYNNNNN", "NNNNYNYNYNYYNYNNYYNNNN", "NNNNYNNNYYYYYNYYYNNNNN", "NNNNYNYNNNNYNNNNNNNYNN", "NNNNNNNNYYNYYYNYYNNNNN", "NNNNYNYNNYNYYNYYNYNNNN", "NNNNYNNNYYNNNNNYYNNNNN", "NNNNYNNNNYNYNYNNNNNNNN", "NNNNNNNNYNYNNNYYYYNYNN", "NNNNYNNNYNNYYYYYYYNNNN", "NNNNNNNNYNYNNNNNYYNNNN", "NNNNNNNNYYNNNYNYNNNYNN", "NNNNYNYNYYYNNNYYYNNNNN", "NNNNNNYNYYNNYNNYYNNYNN", "NNNNYNNNYYYYYYYYNNNYNN", "NNNNYNNNYYNYYNYNYYNYNN", "NNNNNNYNNYYYNNYYNNNYNN", "NNNNNNNNYYNYNNYYYYNYNN", "NNNNYNNNYYYNYNNNNYNNNN", "NNNNNNNNYNNNYYYNYNNYNN", "NNNNYNNNYYYYYYYNNNNNNN", "NNNNNNNNYNYYNNYYYYNYNN", "NNNNYNNNNNNYYNNNYNNNNN", "NNNNNNYNNYNYYYNNNNNYNN", "NNNNYNYNNNYNYNNNYYNYNN", "NNNNYNYNYYNNYNYNNNNNNN", "NNNNYNYNYYNNYYNYYNNYNN", "NNNNNNNNYYYYNYNYNNNYNN", "NNNNNNNNYNYYNYNYNNNNNN", "NNNNYNNNYNYYYYYNNYNNNN", "NNNNNNYNNNYNYNNNYNNNNN", "NNNNYNYNNYYYNYYNNYNYNN", "NNNNYNNNYNYNNYNNNNNNNN", "NNNNYNNNYYNNNYNNYNNNNN", "NNNNNNYNYYYYNNNYNNNNNN", "NNNNYNNNYNNYYYNYNYNNNN", "NNNNNNYNNNNNYNNYYNNNNN", "NNNNYNYNYYNNYNYNYYNNNN", "NNNNNNYNYYYYYYNYNYNYNN", "NNNNYNYNYYNYNNNYYYNYNN", "NNNNYNNNNYYYYNNYNYNNNN", "NNNNYNNNNYNYNNYNYNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8192;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> switches = {"YYYYYYYYNYNYYN", "NNYNNYYYNNNNYY", "NNNNNNYNYNYNNN", "NNYYYYYYYNYYYY", "YYYYNNNNYYNYYY", "NYYNYNYYYYNYYN", "NNYNYNYNNNNNYY", "NNNYNYYYNYYYNN", "NYYYYYYNNYYYNY", "YYYNYYYNNYYYYN", "NNYNYNYYNYYNNN", "NNYYYNYNYYYNNN", "NYNYNYYNNYNNYY", "NNYYNNYNNNYNYN", "NNNYNNNNNYNYNN", "YYYYNYNYYNYNYN", "YNYNNNYNYYYNNY", "NYYNYYNNNYYYNY", "NNNYYYNYNYNYNN", "NYYYNNNYYYYNYN", "NNYYYYYNYYYNYN", "YNYNNYYNNNNNYN", "YNNYNYYNYYYNYN", "NNNNNNYNYYYNYY", "YNYYYYYYNYYYYN", "YYYYYYNYYNYYNY", "YNYNNNYNYYYNYN", "YNNNNNNNYNNNYN", "YNYNYYNYYNYNNN", "YYYNYYYNNYNNNY", "NYYNNNNNNYYYYY", "YYNNYYYNNNNNYN", "YNYYYYYYYYNYNN", "YNYYNYNNYNNNNY", "YYNNYYNYYNNNYN", "YNNYYYNYNNNNYN", "NNNYYNYYNNYNYN", "YYNYNYNNNNNYNY", "NNNYNNNYNNNYNY", "YNYYYNNYYYYNNY", "YNYNNNYYYNNNYY", "NYYNYNNYYNNYNN", "NNNNNYYNNNNYYY", "YNYNNYYNYYYNNY", "YYNYYYYYYYYYNN", "YYYNYYYYNNYNYY", "NYYNYYNYYYYNNN", "NYYYYNYYYYYNNN", "YYNNNNYYYYYYNN", "YYNYYYYNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNYNNNYNNNNYNNNN", "NNNNNNYNNYNNNYYNNYNNNYNNNNYNNNN", "NNNNNNNNYYNNNYNNNNNNNYNNNNYNNNN", "NNNNNNYNYYNNNNYNNYNYNNNNNNYNNNN", "NNNNNNNNYYNNNNNNNNNYNYNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNYNYNNNNNNNNN", "NNNNNNNNYNNNNYNNNYNYNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNNYNYNNNNNNNNN", "NNNNNNNNYYNNNNYNNYNYNNNNNNNNNNN", "NNNNNNYNYYNNNNNNNYNNNYNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNYNYNNNNYNNNN", "NNNNNNNNYYNNNNYNNNNNNYNNNNNNNNN", "NNNNNNNNNYNNNYNNNYNYNNNNNNNNNNN", "NNNNNNYNYNNNNYNNNYNYNNNNNNNNNNN", "NNNNNNNNYYNNNNYNNNNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNYNNNN", "NNNNNNYNNNNNNYYNNYNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNYNNNNYNNNN", "NNNNNNYNYYNNNYNNNYNNNYNNNNNNNNN", "NNNNNNYNYYNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNYNNNYNNNYNNNYNNNNYNNNN", "NNNNNNYNYNNNNYNNNYNYNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNYNNNNNNNNYNNNN", "NNNNNNYNNYNNNYYNNYNNNYNNNNNNNNN", "NNNNNNNNYNNNNYNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNYNNNYNNNNNYNYNNNNYNNNN", "NNNNNNYNYYNNNYYNNNNNNNNNNNNNNNN", "NNNNNNYNNYNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNYNNYNNNYYNNYNNNYNNNNNNNNN", "NNNNNNNNYNNNNYNNNNNNNNNNNNYNNNN", "NNNNNNYNNNNNNYYNNYNNNNNNNNYNNNN", "NNNNNNNNNNNNNYYNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNYNYNNNNYNNNN", "NNNNNNYNNNNNNYNNNYNNNYNNNNNNNNN", "NNNNNNYNYYNNNYNNNNNYNYNNNNNNNNN", "NNNNNNNNNYNNNNYNNYNNNYNNNNNNNNN", "NNNNNNYNYNNNNNNNNYNNNNNNNNYNNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNNYNNNN", "NNNNNNYNYNNNNNYNNNNYNYNNNNNNNNN", "NNNNNNYNNYNNNNYNNNNYNYNNNNNNNNN", "NNNNNNNNYYNNNNYNNNNYNNNNNNYNNNN", "NNNNNNNNNYNNNYYNNNNYNNNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNYNNNNYYNNYNNNYNNNNYNNNN", "NNNNNNNNYYNNNNYNNNNNNYNNNNYNNNN", "NNNNNNNNYYNNNNNNNYNYNYNNNNNNNNN", "NNNNNNNNYYNNNNNNNNNYNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> switches = {"YYNNYYNYNYNNYYYNYNYNNYNYYYYYNYNN", "NYYYNYNNYYNNNYYYYNNYYNNYNYNNYYYN", "NNNYYNNYNNYNYYYNYYYNYYNNYYNYYYYY", "YNYYYYNNNNNNNYNNNNNYYNNYNNYNYYNN", "YNYNYNNYNYYNNYYNNYNYNNNNYNYNYYYY", "YYNNYNNNNYYNYYYYNNYYYYNYNNYNYNYN", "YNNYNYNYNNNNNYYYNYNNNNNYNNYYNYNY", "NNNNYNNYYNYNYNNNNNYYYYNNYNYYYYYN", "NNNYYYNNYNYNNYNYNYNYYNNYYNNYNYYN", "YYYYYYNYYNNNYYYNNYYNNNNYNYNYNYNN", "YYNNNYNYNYYNNYNNNNYNYNNYNNYNYNYY", "YYNYNNNYNYYNYYNNYNNYYNNNNYYYNNYY", "YNNNNNNNYNYNNNNNYNNNYYNYNNNYNNNY", "NYNNYNNYNYNNNNYNNYNNYNNYYYNYYNNY", "NYYYNYNYYYNNYYNNYNYNYNNYNNYNNNYN", "NYYNNNNYYNYNNYYNYNYYNYNYYNYNNYNN", "NNNNNNNYNNNNYYYNNYYYYNNNYYNYNYNY", "YYYYNYNYYYNNNNYNYYYYYNNNNNNYYNYY", "YNNNNNNYYNNNNNYNYNYYNNNYNNNYNYYN", "YYNNNNNNNNYNYYNNNYNNNYNNYNNNNNYN", "NNYNYNNNYNNNYNNNYNNYYYNNNNYYYNNN", "YNNYYNNNNYNNNYYNNNYNYYNYYNYNYYYN", "NNYNNNNNNNNNYNYNNYNYNYNNNYYNYYYN", "NYNYYNNYYYYNNNYNNNYYNNNNYYYNYYNY", "NYNYNYNNYYNNYNNNNYNYYYNNYYNYYYNY", "NNYNNYNYNYYNNNYYYNYYNYNNNYYYNNNY", "YYNYYNNNYNYNYYYYYNYNNYNYNNYNYYYN", "NYYYYYNYNNYNNNNYNYNYYYNNNNYNNNYN", "YYYNYNNNYNYNYYYNYNNNNYNYYNYNNYNY", "YYNNYNNNNYYNYYNNYNYNYNNNNNNYYYYY", "YNNNNNNYNNNNNNYYYNNNYNNNNYYYNYYY", "NYNNNYNYYNYNYNNNNNNYYYNYYYNYNYNN", "YNNNYYNYNNYNNNNYYNYNYNNYYYYNNYYY", "NNNNYYNNNNNNNYYNNYNNNNNYYNNNNNYY", "NYNNYYNNNNNNNYNYNNYYNNNNYYYNNYYN", "YNNNNYNYNNNNNNNYNYYNNNNNNYNNNNYY", "NYNNNNNYNYNNYNYYNYNNNNNYYNYNYNYN", "YNNYNNNYNYYNNNNNNYYNNNNNNNYYYNNN", "NYNNNYNNYNNNYYYNYYYYNYNNNNNNNNYN", "YNNNNYNYYNYNYYYNYNYYYYNNYYNNNNNN", "YYYNYYNNYNYNNNYYNYYYNNNYNNYYYNNN", "NNYNNYNYNNYNYNYNNNNNNNNNYNYNYYYY", "NNNNYNNYNNYNNNYYYNNYYYNYNNNNNYNN", "NNNYNNNYNYNNNNNNNYNNNYNYNYNNNNYY", "YNYYYYNYYYYNNYYYYYNYYYNYYYYYNYNY", "NYYYNNNYNYNNNNYYNYNNNNNNNYNNNNYY", "YYYNYYNNYYNNYNNYYNNYNNNNNNNNNYNY", "YNYYYNNNYYYNYNNNNYNYNNNNYNYNYNYY", "YNNYNYNYNNNNYYNYNNYYYYNYNNYYYYNN", "NYYYYNNYYNYNYYNYNNNYNYNYNNYYYYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 536870912;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> switches = {"NYYYNNNYYNYYNYNNNNNYYYNNNNYNYYYYNY", "NNYYNNNNYYYNNYNYYNNYYNYYYNNYYYNYYN", "NYNYNYNNNNNYNNYYNNNNNNNNYYNYYYYNNN", "NYNYYYYNNNYNNYNYNNYYYNNNNNYYYNNYYN", "YYYNYYYYYYNYYNNNYNNNYYYYYYYYNYNYNY", "YNYYYNNYNYYYYYYNNNYYNNYNYYNYYYNYYN", "NYNNYNYNNYYNNNYNYYNYYYNNYYNYYNYNNN", "NYNYNYYNYYYYNNNYNNYNYYYNYNNYNYNNYN", "YNYYYNYNYYNNYNYYYYNNYYNNYNYYNNYNNY", "NYNYYNYNYNYYNNYYYYYYYNNYNYNNNYYYNY", "NYNNYNYNYYYYNYNYYNYNNYNYYYNNNNYNYN", "YNYNNYNYNYNNNYNYYYNNYNNNYYYNNYYYNY", "NYYYNYNYNYYNYNNYNNYNYYYNYYYNYYNNNY", "YNYYNYNNNNNNNYYNYYNNNNYNNNNNNNNNNY", "YYNNNYNYYYYNNNYNYYYYNNYYYYYYYYYYNN", "YNNNYNYNNNYYNNNNNNNNNYYYNNNNNNYNNY", "NYYYYNNYYYNNNYYNYYNNNYNYYYNYYYNNYN", "YNYYNYYNNNNYYNYNYYYNNNYYYNNNYNNYNN", "NYYYYNYYNNNNNYNNYYYNNYNYYYNYNNYNNN", "YYYYYNYNYYNYYYYYYNYYNNYYNNYNYYNNNN", "NNNNYYNNYNNYNYNYNYNYNYNNNYNNYYNNYN", "YNYYYNNNNNYYNYYNYYYNYNNNNYYNYYYNYY", "NYNNYYYNYYYYNYYNNNNNNYYYNYYYNYYNYY", "YNYNNNYNNNNYNYYYNNYNNNNNNYYNNNYNNN", "NYYNYYYYNYYNYYYNNNYYNNYYNNNNNNNNNY", "YNNNYYYNNNNNYNNNYNYNNNNYYYYNYYYYNN", "YNYNNYYNYNYNNYYYNYYYYYYNNYNNNYNNYN", "YYNYNYNNYNYNNNYYNNNYYNNNNYYYYNYNNY", "YYYNYNYYNNNYYYNNYYNNYNNNNYNNYYNYNY", "NYNNNNNYYYNYNNNNYYNNNNNYNNNNNNNNNY", "NYNYNNYYYNYNNYNYNNNNNNYNYNYYYNNYYY", "YNNYNNYYNYYYNYNNNYYNYYNNYYNNNNYYYN", "YYNNNYYYYYNYYYNYNYNYYYNNNNYNNNNYYY", "YNYYNNNYYYYYNNYYNNYYYNYNNYNNYNYYYN", "YNYYYYNYNYYYYYNYNYNYYNNYYYNNYYNYNN", "NNYNYNNNYYNNYNNNYNNNNYNYYNNYYNYYYN", "NYYNNNNNNYYYYNYYNYYNNNNYYYYYYNYYNN", "NNYYYNYNYYYNYNYNYYYNYNYNYYNYYYYYNY", "NYYNYYYYNYNNNYNNYYNYYYYNYYYYNNYNYN", "NNNNYYNNYNYYNNNNNYYNNYNYNYYYNNYYNN", "YNNYYYYYNNYNYYNNYNNYNNNNNYNYNYYYNY", "YNYYYYNNYYYNNYYYYYNNNNYYNYNYYNYYYN", "NYYYYYNYNNNYYNYNYNYNYNNNNNYNYNNNYY", "NNYYYNNYNYNNYNYNYYNNYNYYYYNYYNYYYN", "YNYYYNYNYNNNYNNYNYYYYNYNNYNYYNNYNY", "NYNNNYNNYNNYYNYNNNNYYYYYYYNYNNYNYN", "YYNYYNNYNYYYYYYNNYYNYNYNNYNYYYYYNN", "YNNYYYYYNNYYYNYNYNYNYYNYYNNYYNNYNN", "NYNNNNNNNNYYNNNYYYNNYYNYYYNNNNNYYN", "NYNNNYNYYYNYNYYYNYYNNNYNNYNYYYYYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869184;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNYYYNNNNNNYNNNNYNYNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNYYNNNNNNNYNNYNYNNNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYYYNNNNNNNNNYNYNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNYYNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNYYNNNNNNNNNNYNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNYYYNNNNNNNNNYNYNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNYNNYNNNYNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNYYYNNNNNNYNNNNNNYNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNYYYNNNNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYYYNNNNNNYNNYNYNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNYYNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYYYNNNNNNYNNYNNNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNYYYNNNNNNYNNNNYNNNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNYYYNNNNNNNNNYNYNYNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNYYYNNNNNNYNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYYNNNNNNNNNNYNNNYNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYYYNNNNNNYNNYNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNYNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNYNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYYNNNNNNNNNYNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNYYYNNNNNNNNNNNYNYNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNYYNNNNNNNYNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNYYNNNNNNNNNNNNYNYNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNYYNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNYYNNNNNNNYNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNYYYNNNNNNYNNNNYNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNYNNNNNNYNNYNYNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNYNNNNNNNYNNNNNNNNYYNNNNNNNNNNYNNNYNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNNNYNNNNNNNNYNNYNNNYNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> switches = {"NYYNNNNYYYYNYYNNNNNYNNNYNNNNNNNNYYNNYYYYNNNNNNNNNY", "NNYYNNYYYNNNNYNNNNNYNYNYNNNNNNNNNNNNNYNYNNNNNNNYNY", "NNNYNNYNYNNNNNNNNNNNNYNNNNNNNNNNNNNYNYYNNNNNYNNNNN", "NYNNNNNYNYNNYNNYNNNYNYNNNNNNNNNNNYNYYNNYNNNNYNNNNY", "NNYNNNYNNNNNYNNYNNNNNYNYNNNNNNNNNNNYYNNNNNNNYNYNNN", "NNNYNNYNYNNNYNNYNNNNNYNNNNNNNNNNYNNYYYNYNNNNYNNYNY", "NYNNNNYNNYYNNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNYNNNNY", "NNYNNNNYNYNNYYNNNNNNNYNYNNNNNNNNYNNNYNNNNNNNYNNNNN", "NYNNNNYYNNNNNNNYNNNNNNNNNNNNNNNNNNNYYYNYNNNNNNYNNN", "NNNNNNNYNNYNNYNYNNNYNYNYNNNNNNNNYNNNNNNYNNNNNNNYNY", "NNYNNNNNNYYNNNNNNNNNNYNNNNNNNNNNYNNNYNYYNNNNYNYNNN", "NYYNNNNNYNYNYYNNNNNNNYNNNNNNNNNNNYNNYNYYNNNNYNYYNY", "NYNYNNNNYYYNNYNNNNNYNNNNNNNNNNNNNYNYYYYNNNNNNNNNNN", "NYYYNNYNYNNNYNNNNNNNNNNNNNNNNNNNYNNNYNYYNNNNYNYYNN", "NNYNNNNYNNNNYNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNY", "NYYYNNNNYNYNYYNYNNNNNYNYNNNNNNNNNNNNYYNNNNNNYNNNNY", "NNNYNNYNYYYNYYNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNYNNNNN", "NYYYNNNYYYYNYYNNNNNYNYNYNNNNNNNNYYNNNNYNNNNNYNNYNN", "NNNYNNYYNYNNNNNNNNNNNYNYNNNNNNNNNNNNNNYNNNNNNNNNNY", "NYNYNNYNYNYNNNNYNNNYNYNYNNNNNNNNYNNYNNYYNNNNNNYYNY", "NYNNNNNYYYYNYYNNNNNYNYNNNNNNNNNNYNNNYYNNNNNNYNNYNY", "NYNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNYNNNYYYNNNNNYNNNNY", "NNNYNNNYNNYNYNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNYNNYNY", "NNNNNNNYYNNNNNNYNNNYNNNYNNNNNNNNYYNYYNYYNNNNYNYNNY", "NYNYNNYYNNYNNNNYNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNN", "NYYYNNYNYYNNNNNYNNNYNYNNNNNNNNNNYYNNNYNYNNNNNNNYNN", "NYNNNNNYNNYNYYNNNNNYNYNNNNNNNNNNYYNYYYNYNNNNNNYYNY", "NYNNNNNNNYYNYNNNNNNYNNNYNNNNNNNNYYNYYYYNNNNNNNNYNN", "NNNYNNNYNYYNYNNYNNNYNNNNNNNNNNNNYNNNYNYYNNNNNNYNNY", "NYYNNNNYYYYNNYNYNNNYNNNYNNNNNNNNNNNYNYNYNNNNYNYNNY", "NYNYNNNYNNNNNNNYNNNNNNNYNNNNNNNNYYNYYYYNNNNNYNNYNY", "NYYYNNYNNNYNYYNNNNNNNYNNNNNNNNNNNYNNYYYNNNNNNNYYNY", "NNYNNNYYYYYNYNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNYNN", "NYYYNNYNNYNNNYNYNNNNNYNYNNNNNNNNNNNNYNYYNNNNNNNNNN", "NYYYNNYYNNNNNYNNNNNNNYNYNNNNNNNNNNNNYYYNNNNNYNYNNN", "NNYYNNNYYNNNYYNNNNNNNYNNNNNNNNNNYNNNNYYYNNNNYNYNNN", "NNYYNNYYYNYNNNNNNNNNNYNNNNNNNNNNNYNNNNYNNNNNYNYYNY", "NYNYNNYYNYYNNYNNNNNYNYNNNNNNNNNNYYNYNNNYNNNNYNNNNN", "NNYNNNYYYNNNYYNYNNNNNNNNNNNNNNNNYNNNYNYNNNNNYNYYNY", "NNNNNNNYNYYNYNNYNNNYNNNNNNNNNNNNYYNYNNYNNNNNNNNNNN", "NYNNNNYYYYNNYYNYNNNYNNNYNNNNNNNNYNNNYYNYNNNNYNNNNY", "NNNNNNYNNYYNNNNYNNNNNNNYNNNNNNNNYYNNYNNNNNNNNNNYNY", "NYNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNYNNYNNYYNNNNNNNNNN", "NYNNNNYNNNNNNYNYNNNNNYNYNNNNNNNNYNNNNNNYNNNNYNNNNY", "NYYNNNYNYYYNNNNNNNNNNYNNNNNNNNNNNNNYYNYNNNNNNNNNNY", "NNYNNNYNYNYNYNNYNNNYNNNNNNNNNNNNNYNYNNNYNNNNNNNYNY", "NNYNNNNNYYYNNNNYNNNYNYNYNNNNNNNNYYNNNNYYNNNNNNNYNY", "NYNNNNYNNYNNYYNNNNNNNYNNNNNNNNNNYYNYYYNYNNNNYNNNNY", "NNYNNNYNYNYNNYNYNNNNNNNYNNNNNNNNYNNNYNNNNNNNYNYNNY", "NNNNNNNNNNYNNNNNNNNYNYNYNNNNNNNNNYNNNYYYNNNNNNNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> switches = {"YNYNYYYYNNNNYYYNNNYYYNYNYYYYYNYNNYNYNNNYNYNNNNNNYY", "NYYYNNNNYYYNNYNNNNYNNYYYYNYYYYNYYYYNYNNNNYYYYYNYYN", "NYNNYNYNNYYNNYYYNNYNYNNNNNYYYYYYNYYYYNYYNNYNYNYNYN", "NNNYNYYYNNYYYNYNYNYNNYNNYYYYNYNYNYNNYYYNYYYYNYYNNY", "YYNYYNNYNYYYYNYNYNNYNYYNYYNYYYYNNYNYYYYYYNYYYNYYYN", "YNYYNYNNYYNNNYYYYNNNNYNNNNNNYYNNNNYNNYNYNYNNNYNNNN", "YNYYNNYYYNNNNNYYYNYNNYYNYYNYYYYNYYYNYNYNYNNYYYYNYN", "NYNNNNYYNNNYYNNYYNNYYYNNNNYYYNNNNYNYNNNYYNNYNYYYNN", "YYYNNNYYNYYYNYNNNNYNYNYNYNNNNNNNNNNNYNNNYYYNYNNNNN", "YNNNYYYYNYYNNYYYYYNNNNNNNNYYYYYYYNNNYYYNYYYNYNNNNY", "NNNYYNNNYYYYNYYNNNYNNNYYNYYNYYYYNNYNNNYNYYYYYNYYNN", "YYYYYNYNNNYNNNNYYYYYYNYNNYNNYNNYNNNYNYNNNNNYNYNYNN", "NYYNYYYYYNYYNNNNYNYNYYNYYYYYYNNYYYNYNNNNYYNNNYYYNY", "NYNNYYYYNNNYYNNNNNNYNYNNYNNNYYNYYNNYNYYNYNYYNYNNYY", "NYNYYNNYYNYYNYYNNNYYNYYNNYYYYYYNYYNNYNNNYYNYYYYNYY", "YNYYYNYYNNNYYNYNNYYNYYNYYYYYNNYNNNNNNYYYNNNYNNNYNN", "YYYNYNNNYYYYYNYNNNYNYYNYNNNNYNNNNNNNNYYNNNNNYYNNYY", "NYNNYYNNYNYNYYYNNNNNNYYNYNYYYNNYYNYNYNYYYYYNYYNYNN", "NNNYNNNYNNNNNNYNYNYNYNYNYNYYYNYNNYYYNNNYNNNNYNYYYY", "YNNYNYYYYNYYNNNNYYYYYYYNYYNYNNNYNYNNYNNNNNYNYNNYNY", "YNNNNYYYNYYNNYNYNYNNYYNNYNNYNNNYYYYNYYYNYNNYNYYYYN", "NNNNNYNNNNYYNYYYNNYNNYYNNYYYNNYYNNNYYYYNNNYNNYYNYY", "NNNYNYNYYNYYNNYYYYNNNYYYNYYNNYNYYNYYNNYNYYNYYYYNYN", "YNNNNYYNYNNYYNYYNNNYYYYNYNNNYYYYNYNNNYYNYYNNYYYYYY", "YNYNYNNNYYNNNNNYYNNNYNYNYNNYYYNNYYYNNNNNNNNYNYNNYN", "YYNNYYNNNYNNYYYYYYYNYNNYNYYYNNYNNYYYYNNNNYYNNNNNNY", "NYNYYNNNNNYNNYYYNNYNNNNNYYYYYYYNNYNNYYYYNYYYNNNNYY", "YNYYNYNYYNYNNYYNYYNYNNNNNNYYNNNYYNNYNYNYNNNNNNYNYY", "NYNYYNYYNNNNYYYNYNYNNNNYYYYNYNYNNYYYYNYYYNNYYYYNNY", "NYYYNNYYYNNYYYNNYNYYYYYNNYYNYNNNYYNNYNYNNYYNYYYNNY", "YYYYYNYNNYYNNNNNYNNNYYYNNNYYYYYYNNNNNYNYNYNYYYYYYN", "NYYNYYNYYYYYYNYYNNNYYYNYNNYNYNYNNNNYYYNYYNYYNYYNNY", "NYYYNNNYNYNNNNYYYYNYYYYNYYNNYYNYYNNNNNYNYNNYNNYNNY", "NYYNNNYYNNYNNNNYYNYNNNNNYNYNYYNYNYYNNYYYNYNYNNNYNN", "YNYNNNNNYYYYYNNNYNYNYNYYNYYNYYNNNNNNYNYYNYYYNYYYYY", "YNYNYNNNNYYNNYYNNNNYNYYNYNNNNYYNNYNNNNYYNNNNNNYNNN", "YYNNYNYYYYYNYYYNNNNNNNNNYYYYNNYNYYNYYYNYYYYNYNYYYN", "YYYNYYYYNNYNNNYNYYNYYNYYYYYNNYYYYNYNYNNNNNNNNNNYNN", "NNYYYYYNNNNYNYYYYYYYNYNNYYYYNYYYYNYNNYYYYYNYYNNYYY", "NYNNNYNNNYNNNYNYYYYYYYYYNYNYNNNYNNNNNNYNYNYYYYNNNN", "NYYYYNNYNYNYYNYNYYYNNYNNYNNNYYNNNYNNNYNNNYYNYYYNNN", "YYNYNYYNYNNYYNYYYYNYNYNNNNYNNYNYNNNNYNNNNNYYYNNYNN", "NNNNYNYNNYYNYYYNYNYYNNNNNYNYYYNNYNNYNNNYYYNYYYYYYY", "NYYNYYNYNYYNNYNYYNYYNNNNNYYYYYYYYYNNNYNNYNNYNNYNYY", "YNYNNYNYNNNNNNNNYNYYNYNNNNYYNYYYNYNYYNYYNNNNNYNYNY", "NYNNYYNYYNYYNNNNYNNYNYYYNYNYNNYYNNYYNNYNYYYNNNNYYY", "NNYYYYYNNYNNNNYYYYNNYNNNNYYNYNYYYYNYNNNNNNNYYYYYNN", "YYYYNYYNYNNNYNNNYNNYYNYYNNNNNYYNNYNYNYNYNYNNYNNYNY", "NYNNYYYYNNNNNYYNNYNYYNNYNYYNNYYNYYNNYNNYYNYYNNNYYY", "NYYNYNNYNYNYNNYYNNNYNNNNYYYYNYNYNNNYNYYNNYNNYNNNYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> switches = {"NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> switches = {"NNNYNNYNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNNN", "NNYNNNNNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNYNNN", "NNYYNNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNNNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNYNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNNYNNN", "NNNNNNYNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNN", "NNYYNNYNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNYYNNYNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNYYNNYNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNNYNNYNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNYNNN", "NNNNNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNYNNN", "NNYYNNNNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNYNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNYNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNYNNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNNYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYYNNYNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYNNNYNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNNNNNN", "NNNNNNYNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNYNNNNNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNN", "NNNYNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNYYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNNNYYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNYNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNYYNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNYNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNN", "NNNYNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNN", "NNYYNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNYYNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNYYNNNYNNN", "NNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNN", "NNYNNNYNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNNN", "NNYYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNNN", "NNYNNNNNYYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNYYNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNNN", "NNYYNNYNYNNNNYNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> switches = {"NNNNNNNNNNNNNYNNNNNNNYNNNNYYNNYNNNNNNYYYNNYNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNNNNNNNYNNNYNYNYNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNYYNNYNYNNNNYNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNYNNYNYNNNNYNYYNYNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNNNNYYYNNNNNYNNNNN", "NNYNNNNYNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNNYYNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNYNNNNYYNYNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNYYNNYNNNNNYYYNNNNNYNNNNN", "NNYNNNNNNNNNNYNNNNNNNYNNNNYNNNNNYNNNNYYYNNYNYNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNYYNNNNYNNNYYNYYNNNYNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNNNNYNYNNNNYYNNNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNYNNNYNNNNNYNNYYNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNYNNNNYYYNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNYYNNYNNNNNNYYNYNYNNNNNNN", "NNYNNNNYNNNNNYNNNNNNNYNNNNNYNNNNNNNNNYNNYNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNYNNYNNNNNYNNNNNNNNNNNNN", "NNYNNNNYNNNNNYNNNNNNNYNNNNYNNNNNYNNNYNNYYNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNYYNNNYNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNYYNNNNNNNNYNYNYNYNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNYNNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNYNNYNYNNNNNNYYNYNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYYNNNNYNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNYYNNYNNNNNYNYNYNNNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNYNNNNYYNNYNNNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNNYNNNNNNNNNYNYYNNNYNNNNN", "NNNNNNNYNNNNNYNNNNNNNNNNNNYNNNYNNNNNYNYYYNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNNNNYNNNNNNNYNNNNNYNNNNN", "NNNNNNNYNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNYNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNYNNNNNYNNYNNNNNYNNYNNNNYNNNNN", "NNYNNNNYNNNNNYNNNNNNNNNNNNNYNNYNYNNNYNYYYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNNYNNYNNYNNNNNNN", "NNYNNNNYNNNNNNNNNNNNNYNNNNNNNNYNYNNNNYNNYNYNNNNNNN", "NNYNNNNYNNNNNYNNNNNNNNNNNNYNNNYNNNNNNNYNYNYNYNNNNN", "NNYNNNNYNNNNNNNNNNNNNYNNNNYNNNYNNNNNNNNNYNNNNNNNNN", "NNYNNNNYNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNYNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNYYNNNNNNYNNNNN", "NNYNNNNYNNNNNNNNNNNNNNNNNNNYNNYNYNNNNNNNYNNNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNYYNNYNNNNNYNYYYNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNYNNYNNNNNYYNYYNNNNNNNNN", "NNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNYNNNYNNNNNYNYNNNNN", "NNYNNNNYNNNNNYNNNNNNNYNNNNYYNNYNYNNNYNNNNNYNYNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNNYNNNNYNNNYYYNYNNNYNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNYNNYNYNNNNYNYYNYNYNNNNN", "NNYNNNNYNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNYYYNNNYNNNNN", "NNYNNNNNNNNNNYNNNNNNNYNNNNYYNNNNNNNNYNNYYNYNNNNNNN", "NNNNNNNYNNNNNYNNNNNNNYNNNNYNNNNNNNNNYNNYNNYNYNNNNN", "NNYNNNNNNNNNNYNNNNNNNYNNNNYNNNNNNNNNYNNNYNNNYNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNYYNNYNYNNNNN", "NNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> switches = {"NNNNNNNNYNNYNNNNNYNNNNNNNNNNYNNNNNYNNNNNNYYNNNNNNN", "NNNNNNYNNNNNNYNNYYNNNNYNYNNNNNNNNNNNNYNYNNNNNNNNNN", "NNNYNNNNNNNNNYNNNNNNNNNNNNYNYNNNNNNNNYNNNYNNYNNYNN", "NNNNNNNNNNNNNYYYYYNNNNNNYNNNNNNNNNYNNYNYNYYNYNNYNN", "NNNNNNYNNNNNNYYYNYNNNNNNYNNNYNNNNNNNNNNNNYYNNNNNNN", "NNNNNNYNNNNYNNYNYYNNNNNNNNNNNNNNNNNNNYNYNYYNYNNNNN", "NNNYNNNNNNNYNNNYNNNNNNYNNNNNNNNNNNYNNYNYNYYNYNNNNN", "NNNNNNNNNNNYNNNYYYNNNNNNNNNNYNNNNNNNNYNNNNNNNNNYNN", "NNNYNNYNYNNNNYYYYYNNNNNNNNYNNNNNNNNNNYNYNYYNYNNYNN", "NNNNNNYNNNNNNYNNYNNNNNYNNNNNNNNNNNNNNYNNNNNNYNNYNN", "NNNNNNNNYNNNNNNYNYNNNNNNYNYNYNNNNNNNNYNYNNYNNNNYNN", "NNNYNNYNYNNNNYNNNNNNNNNNYNNNYNNNNNYNNNNNNNNNYNNYNN", "NNNNNNNNYNNNNYYNNYNNNNYNYNNNYNNNNNNNNYNYNYNNYNNYNN", "NNNNNNYNYNNYNYYYYNNNNNNNYNNNNNNNNNYNNNNYNNYNYNNNNN", "NNNYNNYNNNNYNNNNYYNNNNNNNNNNYNNNNNNNNNNYNNNNNNNYNN", "NNNNNNNNYNNNNYYYYYNNNNYNNNNNYNNNNNYNNYNNNYYNYNNNNN", "NNNNNNYNYNNNNYYNNNNNNNYNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNYNNYNNNNNNNYYNYNNNNYNNNNNNNNNNNNNNNNNNNNNYNNYNN", "NNNYNNNNNNNNNYYNYYNNNNYNYNYNNNNNNNYNNNNYNYYNYNNNNN", "NNNNNNYNYNNNNNYYNYNNNNNNNNYNNNNNNNYNNNNYNYYNNNNYNN", "NNNNNNNNNNNNNNYYNYNNNNNNYNNNYNNNNNYNNYNNNNYNYNNNNN", "NNNNNNYNYNNYNNYNYNNNNNNNYNNNYNNNNNNNNNNYNNNNYNNNNN", "NNNYNNNNYNNNNYYNNYNNNNYNYNYNNNNNNNYNNNNYNYYNYNNNNN", "NNNNNNYNNNNNNYNNYYNNNNNNYNYNYNNNNNNNNYNNNYNNNNNYNN", "NNNYNNNNNNNYNYNNNYNNNNYNYNNNYNNNNNNNNNNYNYNNYNNYNN", "NNNYNNNNNNNYNNNYNNNNNNNNYNNNYNNNNNNNNYNYNNNNNNNNNN", "NNNNNNNNYNNYNNYYNNNNNNYNNNNNYNNNNNYNNNNYNYYNYNNNNN", "NNNNNNNNNNNNNYYNYNNNNNNNYNNNNNNNNNNNNYNYNNYNYNNYNN", "NNNYNNNNYNNYNYYNNNNNNNNNNNYNYNNNNNNNNYNYNNYNNNNNNN", "NNNYNNYNYNNYNNYYNYNNNNYNYNYNYNNNNNYNNYNNNYNNYNNNNN", "NNNYNNNNNNNYNNNNYNNNNNNNYNNNNNNNNNYNNYNNNYYNYNNNNN", "NNNNNNNNNNNNNNYYYYNNNNYNYNYNYNNNNNYNNYNYNNNNYNNNNN", "NNNNNNYNNNNYNNNYNYNNNNYNYNNNYNNNNNNNNYNNNNYNNNNYNN", "NNNNNNYNNNNYNNYYYNNNNNNNYNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNNNNNYNYNYNYNNNNNYNNYNNNYYNNNNYNN", "NNNYNNNNYNNYNNNYYNNNNNNNYNYNYNNNNNNNNYNNNNNNYNNNNN", "NNNYNNNNNNNYNNNNNNNNNNYNYNNNYNNNNNYNNYNYNNYNYNNNNN", "NNNYNNNNNNNYNYYNNYNNNNNNNNYNYNNNNNNNNYNYNNYNNNNNNN", "NNNNNNYNNNNNNYNYYNNNNNYNYNNNYNNNNNYNNYNYNNNNNNNYNN", "NNNNNNYNYNNYNNYNNNNNNNYNYNYNNNNNNNNNNNNYNNYNNNNNNN", "NNNNNNNNYNNNNYYNYYNNNNNNNNNNYNNNNNNNNYNYNYNNYNNYNN", "NNNYNNYNNNNYNYYYYNNNNNNNNNYNYNNNNNNNNYNNNYNNNNNYNN", "NNNNNNNNNNNYNNNYNNNNNNNNYNYNYNNNNNNNNNNNNNYNNNNNNN", "NNNYNNYNYNNNNYNYNYNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNYNYNNYNNYYNYNNNNNNNNNNNNNNNNNNNYNNNYYNYNNYNN", "NNNNNNYNYNNYNYNYNNNNNNNNNNYNNNNNNNNNNYNNNNNNYNNYNN", "NNNNNNYNYNNYNNYNYNNNNNYNYNYNNNNNNNNNNNNYNNYNYNNNNN", "NNNYNNYNNNNNNYYYYYNNNNNNYNNNYNNNNNNNNNNYNNNNYNNYNN", "NNNYNNYNYNNNNYYYYNNNNNYNNNYNYNNNNNYNNYNYNNYNNNNNNN", "NNNNNNNNNNNYNNNNNYNNNNNNNNNNYNNNNNYNNNNNNYYNNNNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> switches = {"YNNYNNNNNYNNNYNNNNYNNNNYYNYYNNNYYYNNNNYNNNNNNYNNNY", "YNNYYNNNNNNNNNNNNNYNNNNNNNYNNYNYNYNNNNYNNNNNYNNNYN", "YNNNNNNNNNNNNYNNNNNNNNNYYNYNNNNNNNNNNNNNYNNNYNNNNN", "NNNNNNNNNYNYNNNNNNYNNNNYNNYNNYNNYYNNNNNNNNNNNYNYYY", "YNNNYYNNNNNYNNNNNNNNNNNYNNNNNYNYYYNNNNYNNNNNNYYYYY", "YNNYYYNNNYNNNNNNNNNNNNNYYNNYNYNYYYNNNNYNNNNNYNNNNN", "YNYYYYNNNYNNNYNNNNYNNNNNYNYNNYNNYYNNNNNNNNNNYYYNYN", "NNYNNYNNNYNYNNNNNNYNNNNYYNYYNYNYNYNNNNNNYNNNYYNNYN", "NNYYYNNNNNNNNYNNNNYNNNNYYNYNNNNNYNNNNNNNYNNNNYYNYN", "YNNYNNNNNNNNNYNNNNYNNNNYNNNNNNNYYYNNNNNNNNNNNNYNYN", "YNNNNNNNNNNYNNNNNNNNNNNYYNYYNYNYYYNNNNNNNNNNNYNYYN", "NNYYNYNNNNNNNYNNNNNNNNNNYNNNNYNNYNNNNNYNYNNNYNNYYY", "NNNNYNNNNYNYNNNNNNNNNNNNNNNNNYNYNYNNNNNNYNNNYYNYYN", "NNYNNNNNNYNNNNNNNNYNNNNNYNYYNNNNYYNNNNYNNNNNYNNYNY", "NNYNYYNNNYNYNYNNNNNNNNNNNNNYNYNNYNNNNNYNNNNNNYYNYY", "NNYNYYNNNNNYNNNNNNNNNNNNNNYYNYNYYNNNNNYNYNNNNNYNYY", "YNNYNYNNNNNNNNNNNNYNNNNYNNNNNYNYYNNNNNNNYNNNNYNYYY", "NNNYYNNNNNNYNYNNNNNNNNNYYNNNNNNNYNNNNNNNNNNNYNYYNY", "YNYYNYNNNNNYNYNNNNYNNNNYYNNYNNNYYNNNNNYNNNNNYNYYYN", "YNYNNYNNNYNYNNNNNNYNNNNNYNYYNNNNYNNNNNYNNNNNYNYNNN", "YNNYYNNNNNNYNNNNNNNNNNNNYNYNNYNNNNNNNNNNYNNNYYNYNN", "YNNNNYNNNYNYNYNNNNNNNNNNNNNNNNNYYNNNNNYNYNNNYNYNNN", "YNYNYNNNNYNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNYYN", "NNYYNNNNNNNNNNNNNNYNNNNYNNNYNNNYYYNNNNYNNNNNNYNYNY", "NNYYNNNNNNNNNNNNNNNNNNNYYNNYNYNYYNNNNNYNNNNNYNNNNN", "NNYYYNNNNYNYNYNNNNYNNNNYYNNYNNNNNNNNNNNNYNNNYNNYYY", "NNNNYYNNNYNNNNNNNNNNNNNYYNYYNYNNNYNNNNYNYNNNNYNYYY", "NNYNYYNNNYNYNNNNNNNNNNNNNNYYNNNNYNNNNNYNYNNNYNYNNN", "YNYYYYNNNNNNNYNNNNNNNNNYNNNYNNNNYYNNNNNNNNNNNYNYYN", "NNYNNYNNNYNNNNNNNNNNNNNYYNNYNYNNYYNNNNYNNNNNYYYNYN", "YNNYYNNNNNNYNNNNNNNNNNNYYNNYNYNNNNNNNNYNNNNNYYNNYY", "YNYNNNNNNYNNNNNNNNNNNNNNYNYNNYNNNYNNNNYNYNNNNNNNNY", "NNYYNYNNNYNNNYNNNNNNNNNNNNNYNYNYNNNNNNYNYNNNYNYNYY", "NNYNNYNNNNNYNYNNNNNNNNNYYNYYNYNNYNNNNNNNYNNNYNYNYN", "YNYNNYNNNYNNNYNNNNNNNNNNYNYYNYNYNYNNNNNNYNNNYNYYNY", "NNNNYNNNNYNNNYNNNNNNNNNNYNYYNNNNNNNNNNNNYNNNNNYYYN", "NNNNYNNNNYNNNNNNNNYNNNNYNNNNNNNNYYNNNNNNYNNNNNYYYN", "YNYYYYNNNNNNNYNNNNYNNNNYYNYYNYNYNNNNNNNNNNNNNYYYYN", "NNYNYYNNNYNYNYNNNNNNNNNYNNYNNYNNNYNNNNYNYNNNNNNYNY", "YNNYNNNNNYNYNNNNNNYNNNNNYNNNNNNNNNNNNNYNNNNNNYYNYN", "YNNNYNNNNYNYNNNNNNNNNNNNYNNYNYNNYYNNNNNNNNNNYNYYNY", "NNYYNNNNNYNYNNNNNNNNNNNYNNNYNYNNNNNNNNNNYNNNNYYYNN", "YNYYYYNNNNNYNYNNNNNNNNNNYNYYNNNYNYNNNNNNNNNNNYYNNN", "NNNYYNNNNYNNNNNNNNNNNNNNYNYYNYNYYNNNNNYNNNNNNYNYNY", "NNYNNYNNNNNNNYNNNNYNNNNYNNYYNYNNYNNNNNYNNNNNYYNYNN", "NNYYNNNNNYNNNYNNNNYNNNNNYNYNNNNYYYNNNNNNNNNNNNYNNY", "NNYNYYNNNNNYNYNNNNYNNNNYNNYYNYNNYNNNNNYNYNNNYNNYYN", "NNYNYYNNNNNNNNNNNNYNNNNNYNNNNNNYNNNNNNYNNNNNNYYYNY", "YNNYNNNNNYNYNYNNNNYNNNNNYNYNNYNNNYNNNNNNNNNNYNNYYY", "NNYYNYNNNNNNNYNNNNYNNNNYYNNYNNNYYNNNNNNNYNNNNNYNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> switches = {"NYYYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNYNNNNNNNYYYYYN", "NNNYNNYYNYNNNNNNYYNNNYYYYNNNNNNNNNNNYNNNNNNYYNNNNY", "NYYYNNNNYYNNNNNNYYNYNYNNYNNYNNNNNYNNYNNNNNNYYNYNYN", "YNNNNNYYNYNNNNNNNYNYNNNYYNYYNNNNNYNNNYNNNNNNNYNYNN", "YNYYNNYNYNNNNNNNYNNYNNYNYNNNNNNNNYNNNYNNNNYYYYYNYN", "NYYNNNYNNNNNNNNNYNNNNNNNYNYYNNNNNNNNYYYNNNYYNNYYYY", "YNNYNNNNYYNNNNNNYYNYNNYYYNYNNNNNNNNNNYYNNNYNNNYNNN", "NNYNNNNYYYNNNNNNNNNNNYNNNNYYNNNNNYNNYYNNNNNNYYNYNY", "NYNYNNNNYYNNNYNNYNNNNNNYYNYNNNNNNNNNYYNNNNNNNNNNNN", "NNYYNNYYNNNNNYNNYYNNNNNNNNYNNNNNNYNNNNNNNNYNNNNYNN", "YNYNNNYNYYNNNYNNYNNNNYYYNNNNNNNNNYNNNYNNNNNNNYYNNY", "NNNYNNNNYNNNNYNNNNNYNNNNYNNYNNNNNYNNNYYNNNYNNYNYYY", "YYYNNNNNNYNNNYNNYNNYNYNYYNYNNNNNNYNNYYNNNNYNNYYYYN", "NYYNNNNNYYNNNNNNYYNYNYYNNNNYNNNNNYNNYNNNNNYNNNYNYY", "YYYNNNNNNNNNNNNNNNNYNNYNYNNYNNNNNYNNNNNNNNYYNNNYYN", "NYYNNNYNYNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNNNNYYNYYYNN", "NYNYNNNYNNNNNYNNYYNNNNYNNNYYNNNNNNNNYYYNNNNNYYNYYY", "NYNNNNNYYNNNNNNNNYNNNYNNNNYYNNNNNNNNYYNNNNNYYNNNYY", "YNYNNNYYYYNNNYNNNYNNNYNYYNNYNNNNNNNNNYYNNNYYYNNNNY", "YYYYNNNNYNNNNNNNNNNNNNNNNNYYNNNNNYNNNYNNNNYNYNYYNY", "NYYYNNYYNYNNNYNNNYNYNNNYYNYYNNNNNNNNNYNNNNNYNNYYNY", "NYYYNNNYYYNNNNNNYNNNNNYYNNYNNNNNNNNNYYNNNNYYNYYYNY", "YNYYNNYNYYNNNYNNYYNYNYYNYNNNNNNNNYNNNNYNNNYNNNNNYN", "NNNYNNYYNNNNNYNNNNNNNYNNYNYYNNNNNYNNYYNNNNYYYNNYNN", "NNYYNNNYNYNNNYNNNNNNNYYYNNNYNNNNNYNNNYNNNNYNNYYYNY", "YYYYNNNNYYNNNNNNYYNYNNNNYNNYNNNNNNNNYYYNNNYNYYNYNN", "NYNNNNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNYNNNNNNYNYNYNY", "NNYNNNYNYYNNNYNNYYNYNNYNNNNNNNNNNNNNNYNNNNYNNNYYNN", "YYYNNNYYNNNNNYNNNNNNNYYYNNNYNNNNNYNNNYYNNNNYNYNNYN", "YYNNNNNYNYNNNYNNNYNYNNNNNNNNNNNNNNNNYNYNNNYNNYNYYN", "YNNYNNNYYNNNNYNNNNNYNYYNYNYYNNNNNNNNNNNNNNNYNYYNNY", "NYYNNNYNYYNNNYNNNNNYNNYYNNYNNNNNNYNNYNYNNNNYYYNNYY", "YYYYNNNNNNNNNYNNNYNYNYNNNNYYNNNNNYNNNYYNNNYNYNYNYY", "YNYYNNNNNNNNNNNNNNNNNNYYNNYNNNNNNYNNNYNNNNNYYYYNNY", "NNNNNNYNNYNNNYNNYNNYNYNYNNYNNNNNNNNNNNNNNNNNYNYNNY", "NYYYNNNNNNNNNYNNYNNNNYYYNNYYNNNNNYNNNYYNNNNNNNYNYY", "YYYYNNYNYNNNNYNNYYNYNNYNNNYNNNNNNYNNNYYNNNYYYYNYYN", "YNNYNNNYYNNNNYNNYYNYNYYYYNYYNNNNNYNNYNNNNNNNNYYYNN", "YYNNNNYNYYNNNYNNNNNNNNNYYNYNNNNNNYNNYYYNNNNYYNNYYY", "NNYYNNNNNYNNNNNNYYNYNYYYYNYYNNNNNYNNYNNNNNYNNNYYNY", "NNYYNNYNNYNNNYNNNYNYNYNYNNNYNNNNNYNNNNNNNNYYYNYYNN", "NNYNNNNNYYNNNYNNYNNNNNNYYNYNNNNNNYNNYNYNNNYYYNYYNN", "YYYYNNYYNNNNNNNNNYNNNYYNYNNYNNNNNNNNYNNNNNYNYNYNNN", "NNNYNNYYYYNNNYNNYYNYNNNNNNNYNNNNNYNNYNNNNNYYNYNNNY", "YYNYNNNYNNNNNNNNYNNNNYYYYNNNNNNNNNNNYNNNNNYNNYNNYY", "YNYYNNYNNYNNNYNNNNNNNNNNNNNYNNNNNYNNYYNNNNNYYNNNYY", "NNYYNNNNNNNNNNNNYYNNNNNNYNNYNNNNNYNNYYNNNNYYNYYNNY", "NNNYNNYNYNNNNNNNNYNYNNYYYNYNNNNNNYNNNNYNNNNNYNYNYN", "NNYNNNYNYNNNNNNNYNNNNYYNNNYYNNNNNYNNNNYNNNNYYNYNNY", "YNYNNNNYNYNNNYNNNNNNNYYNNNYNNNNNNYNNNNYNNNNNYYYNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> switches = {"YNNNYNNYNNNNNNNYNNNNNNYNNYNNNYNNNYYNNNNNNNNYYYNYNY", "NNNYYNNYNNYNNYNNNNNYYNYYNNNNNNYYNYNYNYNYNNNNYNNYNN", "NNYYNNNYNNNNNYNYNNNYNNYNNNYNNYNNNNYYNYNNNNYNYNYNNN", "NNNNYNNNNYNNNNNNYNNYNNNYNYYYYYNNYNYYNYNNNNYYYYNNNY", "NNNYNNNNNNNNNYNYNNNNNNNYNNYNNYYNYNNYNNNNNNNYYNYNNN", "YNNYYNNYNYYNNYNYNNNNNNNNNNYYYNYYYNYNNYNYNNYNYYNNNY", "NNYYYYNNNYNNNYNNNNNNNNNNNYNNYYNNYNYYNNNNNNYYYYYYNN", "NNNNYYNNNYNNNYNNYNNNNNNYNNYNYYYNNNNNNYNYNNNYNYYYNY", "YNYNYYNNNNYNNNNYYNNYYNYNNYNYYNNNNNNNNYNYNNNYNNYYNN", "YNNNNYNYNYYNNYNNNNNYNNNYNYNYYYYYNNNNNNNYNNNYYNYYNY", "NNNYNYNNNNNNNYNNYNNYYNYNNYYYNYYNYYYYNNNNNNNYNNYYNY", "YNNNNYNYNYYNNYNNYNNYYNYNNNNNNYNYYNYYNYNNNNYYYNNYNN", "YNNYNNNYNNYNNNNNNNNYNNNNNYYNNYNYYYNNNYNNNNYNNYNYNN", "YNNYNNNNNNNNNNNNYNNYYNYYNYNYYYYNNYYYNYNNNNNNNYYNNY", "NNYNNNNYNYNNNYNYNNNYYNYYNYYNNYYYYNNYNNNNNNYYNNYYNY", "NNYNNYNNNYYNNNNNYNNNNNNYNYYNNNYYNYYNNYNYNNYYNYNYNN", "NNNYNNNNNYYNNNNNYNNNYNYYNYNNNYYNNNNNNNNYNNYYYNNNNN", "NNYYYNNNNNNNNNNYYNNNYNNNNNNYNYNYNNNYNNNNNNYNYYYNNY", "YNNYNNNYNNNNNYNYYNNNNNYNNYYNNNNNYNNYNNNNNNYYNYYYNN", "YNYNYYNNNNYNNNNNNNNYNNYNNYYNYYYNYNYYNYNNNNYYNYNYNN", "NNNYYNNNNYNNNYNYNNNNYNNYNNNNNYYYYYNNNNNNNNNNNNYNNY", "NNYYYYNNNNNNNNNNNNNNNNYNNYYNNNYYYNYNNYNYNNYYYYYYNN", "NNYYNYNNNYNNNYNNNNNYYNNYNNNNNNYNYYYYNNNYNNNYNNNYNN", "YNYNNYNYNYNNNYNNYNNNYNNNNYNNNYNNYYNYNNNNNNNYYNYNNN", "YNNNNNNNNNNNNNNYNNNYNNNNNNYYNNYNNYYNNNNNNNYNNYNNNY", "YNNYYYNNNNNNNYNYNNNYNNNYNYYNYNNYYYNYNYNNNNYNNNYNNN", "NNYNYYNNNYNNNNNNNNNYYNNNNNYNYNNYNNNYNYNYNNYYNYYNNY", "NNYNYYNNNYYNNNNNYNNYNNNYNYYYNYYNYNNYNYNNNNYYNNYYNY", "NNNNNNNNNYYNNNNNNNNYNNYNNNNYNYYNNYYYNNNYNNYNYNNNNN", "NNYNYNNNNYYNNYNYYNNYYNNYNYNYNYNYNNNYNNNYNNNYNNNYNN", "NNYNYYNNNYNNNYNNNNNYYNNNNNNYYYNNYNNYNNNYNNNYNNNNNN", "NNNYNYNYNYNNNNNYNNNYNNNYNNYYYYYYYNYNNYNYNNYNNYYNNY", "NNNNNYNYNNNNNNNYYNNYNNNNNNYYYNNNNYYYNNNYNNYYNYYYNY", "YNNYNNNNNYNNNNNYYNNNYNNYNNYNYYYNYNNYNYNNNNYYYNNNNY", "YNYNYYNNNNNNNNNNNNNYNNNNNNNYYYNYYYNYNYNYNNYNNYYNNY", "NNNYYNNNNNNNNNNYYNNNYNYNNNYNYYNYNYYNNNNYNNYYYYNNNY", "NNYYNYNYNYYNNNNNYNNNYNYYNYYYYNYYNNYNNYNYNNNYYNYNNN", "YNNYNNNYNYYNNYNNNNNNNNNNNNNNYYNYNNYYNYNNNNYNNNYNNN", "YNNYNYNYNNNNNNNYNNNNNNYNNNNYYYNNNYYYNYNYNNNYNYYYNN", "NNYNYYNNNYNNNNNYYNNYNNNYNNNYNNNNNYNYNYNYNNNYYYNYNY", "NNNNYYNYNNYNNNNYYNNYNNNYNYYNYYYNYYNNNNNNNNYNNNNNNY", "NNNYYYNYNNYNNYNNNNNYNNYYNNYYNYYYYNYNNNNYNNNNNYNYNY", "NNYNNYNNNYNNNYNNNNNNYNYYNYYNYYYNYNYYNYNNNNNNNNYNNN", "NNNNNNNNNYNNNNNYNNNYYNNYNNNNNYNYNNNYNNNNNNYYNYNNNN", "YNNNYYNNNYYNNYNYYNNYYNNYNNYYNYYNNNNNNNNNNNNYYNNNNY", "YNNNYYNNNYNNNYNNYNNNYNYNNYYYYNYYNNNYNYNYNNYNNYNNNY", "NNNNNNNYNYNNNNNNYNNYYNYNNNNYYYYYNNYYNNNYNNYNYNNNNN", "YNNYYYNYNYYNNYNNNNNNNNYYNYYNYYNNNYNYNNNNNNYNNNYYNN", "NNYNNYNYNYYNNYNYNNNYYNNNNNNNNYYNNYNYNNNNNNNNYYYYNY", "YNNNNNNNNNNNNNNYYNNNYNYNNYYYNNYYYNNNNYNNNNNYYNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 34359738368;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> switches = {"YYNNNYNNYYNYYNNNNNYYYYNNNYNNNNYYYYNNNYNYNYYNYNNNNN", "YYYNNNNNNNNNYNNNYNNYNNNNNNNNNYNYYYYYNNNNNNYNNNYNNN", "NYYYYYYNNYNNNNNNNNNYYNNNNNNNYNNYYYYNYYNNNYNNNYYNYY", "NNYYYYNNYYNYNNNYYNNYNNNNNYNNYNNYNYYYYNYYNYYNNYNNYY", "YYYYNNNNNYYNYNNNNNYYNYNNNNNNNNYYNYYYYYNYNNYNNNYYNN", "NNNNYNYNNNNYYYNYNNNNYYNNNYNNNYYYYYNNYYNYNYNNYNYYNY", "NNNYNYYNNYYYNYNYNNYNYYNNNYNNYYNNYNNNNYYYNYYNNYYYNY", "NYNYYNNNNYYNYYNNYNNYYNNNNNNNNYYYYYNYYYYYNYNNYYNYYN", "NNNNNNYNYYYYNNNYNNYYNNNNNYNNNYYYYYNNYNYYNYNNNNNNNY", "YNNYNYNNYYNYNYNYNNYYYNNNNNNNYYYNNYNNNNYNNYNNYNNNNN", "NYYNYYNNYNYYYYNYYNYNYYNNNNNNNNYYYNYNYNNYNYYNNNYYNY", "YYNYNNYNYYNNYNNYNNYYNYNNNNNNYNYYNYNYYYYNNNYNNYNNYY", "YNYNYYYNYNYNYNNYNNYYNYNNNNNNYYYYNYNYYYNYNYNNNNNNYN", "NYYNYYYNNYNNNNNYNNNYYNNNNNNNYYNNNNNNYYNYNNYNYNYYYY", "NYYYYYYNYYNNNYNYNNYNYYNNNYNNNNYNNNNYNYYNNNNNNYYYNY", "YNNNYYNNYNYNNNNYNNYNNNNNNNNNNYNYYNNYNYYNNYYNNNNNNY", "NNYYYNNNNNNYYYNYYNYNNYNNNYNNNNYNYNYNNNYYNYYNYNYNYN", "NNYYNNYNYYYYNYNYNNNNYYNNNNNNNYYNNNNNYYYYNNNNNNYNYN", "YYNYYYYNYNYNNNNNNNYYNNNNNYNNYNYYNYYNYYYYNYYNYYNYNY", "NYNNNNNNNNNNNNNNNNYYYNNNNYNNYNYNNNNNYYNYNNYNYYNYNN", "NYNYNYNNYYYYYNNNYNNNYYNNNNNNNNYYNNNNNYNYNNNNYYNNNY", "YYYNYNYNNYNYYNNNNNYNYYNNNNNNYNNYYYNYYNNYNYNNYNYYYN", "NNNYNNYNNNYNNYNYYNYYNNNNNNNNYNNYNNNYYYYNNYYNNNNYYN", "YNYNYNNNNYNNYNNYNNYYYYNNNYNNYNYYYNNYYYYYNNYNNNNYYN", "YYYYYNNNYNYNNYNYYNNNYYNNNNNNYNNYNYYYYYYNNNYNYYNYYY", "NNNYYNYNNNYYYYNYYNNYYNNNNNNNNNYNYYYNYYNYNNNNNNNYYY", "YNNYNNNNYYYYYNNYYNYYYYNNNNNNNNYNNNYYYNNNNNNNNNYNYY", "YNNYYNNNNNYNYYNYYNYNYNNNNNNNNYNYYYYNYYNNNNNNNYYNYY", "YNNNYYYNYYNYNYNNNNYNYNNNNNNNNYYYNNYYYNYNNYYNNYYYYY", "NYYYYNYNNNNNYNNYYNNNNYNNNNNNNYNNNYYNYNYNNYYNNYYNYY", "YYNNYYYNYYYNYNNNNNNYYYNNNYNNNNYYYYYNNYNNNYNNNNNNNY", "YNYNNYNNNYNYNNNYNNYYNNNNNNNNNYNYNYNNYYYYNNYNNYYYNN", "YYNNYYNNNYYNYYNYNNNYYNNNNNNNYYNNNYYNNNYYNYYNNYNNNN", "YNNYYNYNNYNNYNNYNNYYYYNNNNNNNYNYNYYNNYNYNNNNYYNYYY", "YNYNYNNNYNYYYNNNYNYYYNNNNYNNNNNNNYNNYYYYNYNNNNNYYN", "YNNNNNYNNNYYNYNNNNYNNNNNNNNNYNYNYYNYYYNYNNNNYYNYNN", "NYYNNYYNYNNNYNNYYNNNYNNNNYNNYNYNNYNYNYYNNYYNNNYNYY", "NYYNNNYNYYYNYYNNNNYNNNNNNYNNYNNNYYYNNNNNNYNNNNYNYY", "NNYNYYNNYNNNNYNNNNYNYNNNNNNNYYNNNYYNYYNYNYYNYYYYYN", "NYYYNYNNNYNYNNNNNNYNNYNNNNNNNNYNYYNYYYYYNYNNNNNNNY", "YYNNNYYNNYNNYNNYYNYYNNNNNYNNYYYNNYYNNNYNNYYNYYYYYY", "NYNYYYYNNYYYNNNNNNNNNYNNNNNNNYNNYNNNNNNNNYNNYNYNYY", "NYNNYYNNNNNNYNNYNNYYNYNNNYNNYYNNYYNNYNNNNYYNYYYYYY", "NNNYYNYNYNNNNNNNYNNYYNNNNYNNYNNNNYNYNNYNNNNNNYYYYN", "NYYNNNNNNYNNYNNNYNNYNYNNNYNNNNYYYYNYNNNYNYYNNNNYNN", "YYYNYYNNNYNNNNNYYNYNYYNNNNNNYNYYYNYYYYNYNYNNNNNYNY", "YNNYYYYNNNYNNNNYNNYNNNNNNYNNYNYYYYNYNNYYNNNNYNYNNY", "YNNNNYYNYNNNYNNNNNNNNYNNNYNNNNYNYYYYYNNNNNYNYNYNYY", "NYYYNYYNNNNNNNNNNNNYNYNNNYNNYYNYNYYNNNNNNNNNNYYYYY", "NYNNNNYNYNNNYYNNNNNNYNNNNNNNNNYNYNYNYYYYNYNNYNYYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> switches = {"YNYNYNNNNYNYNYYYNYYNYNYNYNNNNYNNYYNNNNYNNNNNYYNNNY", "YNNNYYNNNYNNNNNNYYNNYNNYNNNNYYNYNYNYNNNNNYYYYYNNYY", "YNYYNYYNYYNNNNNYYYNYNNNNYNYNNYYNNYNNNNNNYNYNNNNYNN", "NYNNNYYNNYNNNYNYNNNYNNYNYNNNYNYYYYNYNNYNYYYNYYYNYN", "NNNYYNNYYNNNNNNNYNNNYYYYNNNNNYYNYYNNNNNNNYYNYNNYNN", "YNYNNYYYYYYNNYNNYNYNYNNNNNNYYYNYNNNNNNNNNNYNYNYYYN", "NYNYYYYYNYNYNYNYYNYNNYYNNNNYNNYYYNNNNNNNNNNYNYYNYY", "YYYNNNYYYNNYNNYNYYYNYYYNYNNYYNNYYNNNNNYNNNNNYNNYNY", "NNYNYNNYYNYYYNNYNNYNNNNNYNYYYNNYNNNYNNNNYYNYYYYNNN", "NYNNYYYNYNNYYYNNYYYYYNNYNNNYYYYNYYNNNNNNYYYNYYYYNN", "YNYNYNYYNYYNNNYNNNNNYNNNNNNYNYYYNNNYNNNNNYNYNNNNYY", "NYYNNYNYYYNYYYYYNNNNNNYYNNYYNYYNNNNNNNNNYYYYNNNNYN", "NNNNYNYYYYYYNNNYNNYYNNYYNNNNYNYNNNNNNNNNYYYYNYNYNY", "YYYNYNNNYYYNNNYNNYYYYNNNYNYNNYYNNNNNNNNNNNYYYYYNNN", "NNNYYNNYYYNYYYNYYNYYNYNYNNYNNNYYNNNNNNNNYNYNYYYNYY", "YYNNYYYNYYYNYNNNYNNYYYNYNNNNYYYNYYNYNNYNYNNNNNNNYY", "YYYYYYYNYNYNNYNYNYYNNYYNNNNNNNYYYNNNNNYNNYYNYNNYNY", "NYYYYYYYYYYNYYYYNYNYYNNYNNNYYYYYYNNYNNYNNNYNYYYYYY", "YNNNNNNYNNYYNYYYNYYYYYNNNNYYYYYNYYNNNNNNNYNNYYYNYN", "YNNYYNYNYYNYYYYYYYNNNYYNYNYYYYYNNYNYNNYNYNYNNYNNYY", "YNYNNNYNNYYNYYNNNYNYNNYNNNYYYNYNYNNNNNNNYNNYYNNYNN", "NYYNYYNYNYNNYNYNNNYNNYNNYNYNNYYYNNNYNNYNYNNNNYNYNY", "YYYYNYNNYNNNYNYNYNNNNNYNYNNNNNYNNYNNNNNNNNYNYNNYYY", "NNNYYNYYNNYNNYYNYYYYNNNNNNNYYNNYYNNYNNYNNNYYYNNYYY", "YYNNNYYYYYYYNYYNYNYNYNNYYNNYNNNNYYNNNNYNYYNNNNNNNY", "NYYNNYNNNYYNYYNNNNYYYYYNNNYNNNNYYYNNNNYNNYYNYNNYYY", "NYNYNNNNYNYNYNNYNNNNNNNYNNNNNNNNNYNNNNYNYNYYYNYNNY", "NNYYNYYYNNNYYYYNYYYNYYNNYNYNYNYYYYNNNNYNYYYNYYYYYN", "YNYNYYYNNYNYNNNNNYNNYYYNNNYYNYYNNYNNNNYNYYYNNNNYNY", "YYYNYNYNNYNNNNYYYYYNYNNYYNYNYYNNNYNNNNNNYNNYYYNYYY", "NNNYYNNYYYNYYYYYYYNNNYNNNNYNNYNYNNNNNNNNNNYNNYYYYN", "NNNYYNNNYYYNNYNYYYYYNYNNYNNYNNYYNNNYNNYNYNYNNYYNNN", "YNNNNYYNNNYNYNNNYYYYYNYYNNYYNNYYYNNYNNYNYYNYNYYNYN", "NYYNNNYNYNNYNNYNNYYYYNYNNNYYYYNNNYNYNNYNNNYNYNYYNY", "YYNNNYYNYNYNYYYYNNNYYYYYYNYNYNYNNYNYNNNNYNYNNNNYYN", "YNNYNYYYNYNNNYNNYNYYNYNNYNNNYYNNNYNNNNNNNNNNYNNNNN", "NYNYYNNYYNNNNNNNNYNYYYNYYNNNYYNYNNNNNNNNYYNYYYNYYN", "NNNNNNYYNNNYYYNYNNNNYNNNNNYNYNNNNYNYNNYNNNYNYNYYNY", "YNNYYYNYYYYYYNYNNYNYYNYNYNNYYYYNYYNYNNYNYYNYNYYYYY", "YNYNNYYYNNYNNNNNNYYNNNYNNNYYNNYNYYNNNNYNYYYNNNNYYN", "YYYNNYYNYYNYNYNNYYYNNNYYNNNYYNNYNNNNNNYNNNYYNNYYNY", "YNYYNYNNYNNNNYNNNYNYYNNYYNYNNNNYYNNYNNYNNYNNYYNNYY", "NNNYYNYNYYYNNNYYNYNYNNNYNNNNNNYYYYNNNNNNYYNNNNNYYY", "NNYNNYNYNYNYYYYNNYNNNNNNYNYYYYNNNNNYNNNNNYYYYYNNNY", "YYYNYYNNYYNYNNNYNYNYYNYNYNYYYNYYNNNYNNYNYNNYNNNYNN", "NNNYNYYNNYNYNNNNNYNYNYNNYNYNYYNNNYNYNNNNNNYYYYYYYY", "YYNYYYYYYYNYYYYYYNNYNYYYNNYNYNNNNNNYNNYNYNYNYNYYYY", "YYYYNYNNNNYNNNNYNNYYYYYYYNNNYYYYYYNYNNNNNNNYYNYNYN", "NNNNNNYNNYNNNNNNYYYYYYNNYNNYNYNNYNNYNNYNYYNNNYNNNY", "NYNNNNYYYNNYYYYYYNYNNYYYYNYNYYYYNNNYNNNNNYYYNYNYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 35184372088832;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> switches = {"NYNNNNNYYNYYYNNNNNNYNNNYYYYYNNNNYNYYNNYYNNYYNNNNNN", "YNYNNNYNYNYNNYNNYYYNNNYYNNYNNNNYYYNYNYNNYYNNNYNYNY", "NNNNYNNYYYNYNNNYYNYNYYYYNYNNNNYYNYNYYNNNYNYYNNYYNN", "YNNNYNYNNNNNNNNNNYYNNNNYYNNNNNYNYYYNYYNYYYYYNYNYNN", "YNYNNYNNYYNNYYYYYNYNYYNYNNYNYYNYNYYNNNYNYNYNNNNNYY", "NNYYNYYNYNNNNYNNYNNNNNNYYYYNYNYYYYNNNNNYNNYNNYYNNY", "YYYNYNYNYYNYYNNYNYYYNNNNYYYYYNNYYYYYNYNYNNNNNYYYNN", "NYNYNYYNYYNNNYNNNNNNNYNYNNNYYYYNNNNNYYNYYNNNNNYYNY", "YYNYYNNNNYYNYNYNYNYNNNNYYNYNNNYNYNNNYYNNYYNYYYYYYY", "NNYNYYNNNNYNNNYNNNNYYNNNNNYYYYNNNYYNYYNNYNYNYNNNNN", "NYYNNNNYNYYNNYNYYNNYYNYNYYYYNNNNNNNNYNNNNNNYYYYNNN", "NYNNNYNYNYYYYYYNNNYYYYYYYNNNNYNNYNNYNYYNYYYNNYYYNN", "NYNNNNYYNYNNNNNYYNNYNNYNYYNYYNYYYYYYNYYNNNNNNNYNNN", "NYNYYYNYNNYYNNNNNNNYNNYYYNNNNYYYNNNYNYNNNYNNNYNNYN", "YNYNNYNYYNYYNNNNNNYYNYYYNNNNNYYNYNNNYNNNYYNNNYNYNN", "NNYNYNNNNNNNNYNNYYNNNNYNYNNYNNNNYNYNNNNNNNYNNYYYYN", "NYYYYYYNYNYYYYYYNYYNYNYNNYYNNYNYNYNYYNNYYNNYNYNYNY", "YYYNNYYYYYYYNYYYNYNNYNNYNNNNYNYYYNNYYYNNYNNNNYNYYN", "NYYYNYNNYYNNNYNNYNNNNNYYYNNNNNNNNYNNYNNYNNYNYYYYYN", "YNNNNNYYNYYYYNNYNNYYNYNNYYNYYNNNNNYYYYYYYNNNNNNYNY", "NYYNYNNYYYNYNNNNNYYYYYYYYYYNNYNYNYYYYNNYNNNYNYNYNN", "YNNNYNYNYYNNNNNNNNYNYNYNNNNYYNYNNNYNYYNYYNYNNYYNYN", "NYNNYYYYYYNYYNYNYYNNNNNNNNNNYNNYNYYNYYYYNYYYNNNNNN", "NNYYYNNYYNYYNYNNYNYNYNYYNYNYYNYYNYNNYNYNYYYNYNYYNY", "YYNYNNYNNYNNNNYNNYNNYYNNYNYNYNYYYNNNNNNYYNYYNYYYYN", "YNYYYYYYNYNYYYYYNNNYNNNNNNNNNNNYNNYNYYNNYYYYNYNNNN", "NYYYYNNNNYYYYNNYYNNNNNNNYNNYNNYYYYNNYNYNYYNYNYNYYN", "NNNYNYYYNNYYNNYNYYNNNNNYNYYNYNYYYNYNYNNYNYNYNNNNYY", "YNNNYYYYYNYNYYYNNYYYYYYYNNNNNNNNNYYNYNNYNYNYNNNNYN", "NNYYYYYNYNYYYYYNYYNNYYYYNYYYNYYYYYNYNNNYNYNYYNNYYY", "YYYYNNNNYNNYNYYNNNYYNNYNNNYNNNYNYYNYYNYNYNNNNYNNYN", "NNNYNNYYNNYNYYNYYNNNYYNYYYNNNNYNYNYYNYNYYNNYYYNNNN", "NYNYNNNNNNNNYNYNYNYYNNYYNNYYYYNYNYYYNNYNNYNNYNYNYN", "NNYYYYYNNNYYYNNNYNNNYYNNYYYNNNNNYNNNNYNYYYYNNYNYYN", "YYNNNNYYNNYNYNNNYYYYYYYNYNYNNYYYNYYNNNNNYYNYNYNNYY", "YNYNYYNNNYYNYNNYYYNYNYNYYYYYNYNYNYYNYYYYYNNYNNYYYN", "NNNYYNYNNYNNYYYNYNNYNNYYYNNYYYNYNYYYYNYNNNYNNYYNYN", "YYNNNYYNYNNNYYYYNYYNNYYNNNYNYNYNNYYNYYNNNNNYNNNYYY", "YNNNNNNYYYNNYNYNYYYYYNYNNNNNNNYYNYYYNNYNNYYNNNNNYN", "NYYYYYNNYNNNYNNYNNYNNNYNYYYNNYYNYYYNNNYNNYYNNNNYYN", "NNNYYNYYNNYNYNNYYYYNNYNYNYNYYYNNYYNNNYNYYNNNNYNYNN", "NNNNYNNNYYNNYNYYNYNYYNYYYNYYNYYYYYYNNNNYYNNYNYNNYY", "YYYNNNYYNNNYYYNYNNYNNNNYNYNYYNNYYYNYYYNYNYYNYYYNYY", "NYNYYNYNNNNYYNNNNNYYNYNNYNNYNYYNNNNYNYYNYNNYNYYYNY", "YNNNNYNYNNYYNYNYYYYNNNYNNNNNYNYYYYNNYYNNYNYYNYNNYY", "YNYYYNNYYNNYYYYYNYYNYNNNYNNYNYNYNNNNYYNNYNNNYNNYNY", "YNYNNYYNYNNYNYNNNYYNYNNYYYNNYNNYNNYNYYNYYNYYNYNYYY", "YYYYNYYYYNNNNYNYNYYNYNNYYNNYYYNNYNYYYYYYNNYNNYYNYY", "NNYYYYNYYNNYNYYYYYYNNYYNNYNYYYYYYNYYYNNYYNNNNNYNNY", "YNYNYNYNNYYNYYYYNYNYYNYNYNNYYYNNNNNYYNNNYNNNYNYYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> switches = {"NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNYNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNYNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> switches = {"NNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNNYNNNNN", "NNNNNNNNYNNNNNYNNNYYNNNNN", "NNNNNNNNYNNNNNYNNNNYNYNNN", "NNNNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNYNNNYYNYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNYNNNYYNYNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNYYNNNNN", "NNNNNNNNYNNNNNNNNNYNNYNNN", "NNNNNNNNYNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNYNNNNYNNNNN", "NNNNNNNNYNNNNNYNNNYNNNNNN", "NNNNNNNNYNNNNNYNNNYNNYNNN", "NNNNNNNNNNNNNNYNNNYYNYNNN", "NNNNNNNNYNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNYNNNNYNYNNN", "NNNNNNNNYNNNNNYNNNNYNNNNN", "NNNNNNNNYNNNNNYNNNNYNYNNN", "NNNNNNNNYNNNNNNNNNYNNYNNN", "NNNNNNNNNNNNNNYNNNYYNYNNN", "NNNNNNNNNNNNNNYNNNYYNNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNYNNNNNYNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNYNNNYYNYNNN", "NNNNNNNNYNNNNNYNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNYNNNNYNYNNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNYNNN", "NNNNNNNNYNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNYNNNYYNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNYNNNYYNYNNN", "NNNNNNNNYNNNNNNNNNYYNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNYYNYNNN", "NNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNYNNNNNNNNNYYNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> switches = {"NNNNNNNNNYNNNNNNNNNYNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNYNYNNNYNNNNNYNNNNN", "NNNNNYNNNNNNNYNNNNNNNNYNN", "NNNNNNNYNYNNNYNNNNNYNNYNN", "NNNNNYNYNNNNNNNNYNNYNNYNN", "NNNNNYNNNNNNNYNNYNNYNNNNN", "NNNNNYNYNYNNNYNNYNNYNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNYNNNYYNNNNNNNYNN", "NNNNNYNYNYNNNYYNNNNNNNNNN", "NNNNNNNNNNNNNNYNYNNNNNYNN", "NNNNNNNNNNNNNYNNNNNYNNYNN", "NNNNNYNNNYNNNNNNNNNNNNNNN", "NNNNNYNYNYNNNNYNYNNNNNYNN", "NNNNNYNYNYNNNYYNNNNYNNNNN", "NNNNNYNYNNNNNNNNNNNYNNNNN", "NNNNNYNNNYNNNYYNYNNYNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNYNNNYYNNNNNNNNNN", "NNNNNYNYNYNNNYNNNNNNNNYNN", "NNNNNNNYNYNNNNNNYNNNNNYNN", "NNNNNYNYNYNNNYNNYNNYNNYNN", "NNNNNNNNNYNNNNYNNNNYNNNNN", "NNNNNYNYNNNNNNYNYNNNNNNNN", "NNNNNYNYNNNNNNYNYNNYNNYNN", "NNNNNNNYNYNNNYNNYNNYNNNNN", "NNNNNYNYNYNNNYNNYNNNNNYNN", "NNNNNYNYNYNNNNYNNNNNNNNNN", "NNNNNYNYNYNNNNYNYNNNNNYNN", "NNNNNYNYNYNNNNYNYNNNNNNNN", "NNNNNNNYNNNNNYNNYNNNNNYNN", "NNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNYNYNNNNNNYNNNNYNNYNN", "NNNNNYNYNYNNNNNNYNNNNNYNN", "NNNNNYNYNYNNNYYNNNNNNNNNN", "NNNNNYNYNNNNNYYNYNNNNNYNN", "NNNNNYNNNYNNNYYNNNNYNNNNN", "NNNNNYNYNNNNNYYNYNNNNNNNN", "NNNNNYNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNYNNNNNNNNNNNNYNN", "NNNNNNNYNNNNNYNNNNNYNNYNN", "NNNNNYNNNNNNNYYNNNNNNNYNN", "NNNNNNNYNNNNNYNNYNNNNNNNN", "NNNNNNNYNYNNNYNNYNNNNNNNN", "NNNNNNNNNYNNNNNNYNNYNNNNN", "NNNNNYNNNYNNNNYNNNNYNNYNN", "NNNNNNNYNYNNNYNNYNNNNNNNN", "NNNNNYNYNNNNNNYNYNNNNNNNN", "NNNNNNNNNYNNNYNNYNNNNNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> switches = {"NYYNNNYNNNYNNNNNNNNNNYYNN", "NYYNNNYNYNYNNNYNNNNNNYNNN", "NYNNNNYNYNNNNNYNNNNNYYYNN", "NYYNNNYNNNNNNNYNNNNNNYYNN", "NNYNNNYNNYYNNNNNNNNNNYNNN", "NYNNNNYNNYYNNNYNNNNNNNYNN", "NNYNNNYNNYYNNNNNNNNNNNNNN", "NYNNNNYNNNYNNNNNNNNNYYYNN", "NYYNNNYNYYYNNNNNNNNNNYYNN", "NNYNNNYNYYNNNNYNNNNNNYYNN", "NYNNNNNNNYYNNNYNNNNNNYYNN", "NNNNNNYNYNYNNNYNNNNNNNYNN", "NYNNNNNNYNYNNNYNNNNNYYYNN", "NNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNYNNNNNNYYNN", "NNNNNNNNYYYNNNYNNNNNYNYNN", "NNYNNNYNYNNNNNNNNNNNYYYNN", "NNYNNNYNNYNNNNYNNNNNNYNNN", "NNNNNNNNYNYNNNYNNNNNNNNNN", "NYYNNNNNYYNNNNYNNNNNYNNNN", "NNNNNNYNYYNNNNYNNNNNYYYNN", "NYNNNNNNNNNNNNYNNNNNYNNNN", "NYNNNNYNNNYNNNYNNNNNNYNNN", "NNYNNNNNYYYNNNNNNNNNNYYNN", "NNYNNNNNNNYNNNYNNNNNNYYNN", "NNNNNNNNYNYNNNYNNNNNYYYNN", "NYNNNNNNNYNNNNNNNNNNYYNNN", "NNNNNNNNYNNNNNNNNNNNYNNNN", "NNNNNNNNYYYNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNYNNNN", "NNNNNNNNNYYNNNYNNNNNYNNNN", "NYNNNNYNYNYNNNNNNNNNYNNNN", "NYNNNNYNYNNNNNYNNNNNNYNNN", "NNNNNNNNNYYNNNNNNNNNNYYNN", "NYYNNNNNYYYNNNNNNNNNYNNNN", "NYYNNNNNYYYNNNYNNNNNYNNNN", "NNNNNNYNYNNNNNYNNNNNNNYNN", "NYYNNNYNYNYNNNYNNNNNNNYNN", "NNYNNNNNYNNNNNNNNNNNNNNNN", "NYNNNNYNNNYNNNYNNNNNNYYNN", "NNYNNNYNYNYNNNYNNNNNYNYNN", "NYYNNNYNNYYNNNYNNNNNNYNNN", "NNNNNNNNNNYNNNYNNNNNYYYNN", "NYNNNNNNYYYNNNYNNNNNNNNNN", "NYYNNNNNNYNNNNYNNNNNNYNNN", "NNYNNNNNYNNNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNNNYYYNN", "NNNNNNYNYYYNNNYNNNNNYYNNN", "NYNNNNNNNNNNNNYNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> switches = {"NNNNNNNYNYNNNNNYNNYYYYNYN", "NNNNNNNNNNNNNNNYNYNYNNNYN", "NNNNNNYYNYNNNNNNNNNNYYNNN", "NYNNNYYYNNNNNNNNNYNNYNNYN", "NYNNNNNYNYNNNNNYNYNYYYNNY", "NYNNNNYYNYNNNNNNNYNYNNNYY", "NNNNNNNNNNNNNNNNNNNNYNNNN", "NYNNNYYNNYNNNNNYNNNNYYNNN", "NNNNNNYNNYNNNNNNNNNYNYNNY", "NNNNNYNNNYNNNNNNNNNYYNNYN", "NYNNNYNNNNNNNNNYNYNYNYNNN", "NYNNNNNYNYNNNNNYNNNYNYNNY", "NNNNNYYNNNNNNNNNNYYNYNNNY", "NYNNNYYNNNNNNNNNNNNYYYNNN", "NNNNNNNNNNNNNNNYNNYNYNNYN", "NNNNNNNYNYNNNNNNNYNNNNNYY", "NNNNNYYNNYNNNNNNNNYNYYNNN", "NYNNNNYYNNNNNNNNNYNYYYNYN", "NNNNNYYNNNNNNNNNNYYNNNNNY", "NNNNNNYYNYNNNNNNNYYNYYNYN", "NNNNNNYNNYNNNNNYNNNYNNNNN", "NNNNNNNNNYNNNNNNNYYYYNNYY", "NNNNNYYNNNNNNNNYNNNNYYNNY", "NNNNNNNNNYNNNNNYNNNNYNNYN", "NNNNNNYYNYNNNNNYNNNYYNNYY", "NNNNNYNYNYNNNNNYNNNNYYNNN", "NNNNNYYYNNNNNNNYNNNYNYNYY", "NYNNNYYNNYNNNNNYNNYNNYNYN", "NYNNNNNNNYNNNNNYNYNNNYNYY", "NNNNNNNYNNNNNNNYNNYYNYNNY", "NYNNNNNNNNNNNNNNNNNYYYNYY", "NYNNNYYNNNNNNNNYNNYYNYNYN", "NNNNNNNNNYNNNNNNNNYNYNNYN", "NNNNNYNYNYNNNNNYNYNYYYNNY", "NYNNNYNNNYNNNNNYNYYYYNNYY", "NNNNNNYYNNNNNNNNNYNYNYNYY", "NNNNNNYYNYNNNNNNNYNNYYNYY", "NYNNNNYNNNNNNNNNNNNNNNNYN", "NNNNNNNNNYNNNNNNNYNNYNNNN", "NNNNNYNYNNNNNNNNNYYYNNNYY", "NYNNNNYNNYNNNNNNNNYYNYNNN", "NNNNNYNYNYNNNNNYNYNNYYNNN", "NYNNNNNYNNNNNNNYNNNNNYNYN", "NNNNNNYNNNNNNNNYNNNYNYNYN", "NYNNNNYYNNNNNNNNNYYYYYNNY", "NNNNNNNYNNNNNNNYNYNNNNNNN", "NNNNNNYNNNNNNNNNNYYYYYNNY", "NNNNNYNNNYNNNNNNNNYNNYNNY", "NNNNNYNNNNNNNNNNNNYYYNNYN", "NNNNNYYNNYNNNNNYNNNYYYNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8192;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> switches = {"NNNNYNNNNNYYNYYNNNYYNNNNN", "NNNNNYYNNNNYNNNNNNNYNYNNN", "YNNNNYYNNNNYNYNYNNNYNNNYN", "NNNNYYYNNNNNNNYNNNNNNYNNN", "YNNNYYNNNYYNNNYNNNYNNYNYN", "NNNNNNNNNNNYNNNYNNYNNYNNN", "YNNNNNNNNYNNNYNNNNYYNYNNN", "NNNNYYNNNYYYNNNNNNNNNNNNN", "NNNNYNYNNYYNNNYYNNYYNYNNN", "NNNNNYYNNNNYNYYYNNYYNYNNN", "NNNNYYNNYYYNNYNNNNNYNYNYN", "YNNNNYNNNNNNNNYYNNYYNNNNN", "YNNNNYYNYYNNNYNNNNYYNYNNN", "YNNNNNNNYNYYNNYYNNYYNYNNN", "YNNNNYNNYYYYNYNYNNNNNYNYN", "YNNNNNNNYNNNNNYYNNNNNYNYN", "NNNNNNYNYNNNNNNNNNNYNNNYN", "YNNNNYYNNNYNNYNNNNYYNYNYN", "NNNNNYNNYYNNNNNNNNYNNYNYN", "NNNNNYNNYNYNNYYYNNYNNNNYN", "YNNNNYNNNNNNNYNYNNYNNYNNN", "YNNNYNNNNNNYNYYYNNNNNYNYN", "NNNNYNYNNYYYNNNNNNYNNYNNN", "YNNNNYNNYYYNNYNYNNNNNNNYN", "NNNNNNYNNYNNNNNNNNYYNYNYN", "NNNNYNNNNNYNNNYYNNNNNNNNN", "YNNNYNNNYNYNNYNYNNNYNYNYN", "NNNNNNNNYNNNNNYNNNYYNYNYN", "NNNNYNYNNNNYNYNNNNNNNNNYN", "NNNNNYNNNNNYNYNNNNNNNNNYN", "NNNNNYYNNYYYNYYYNNNNNNNNN", "NNNNYNYNYYNYNNYNNNYYNNNYN", "YNNNYYYNNYYYNNNNNNNYNYNYN", "NNNNNNNNYNYYNYYNNNNNNNNYN", "NNNNNNNNNNNYNNNNNNNYNYNNN", "YNNNNNYNNNNYNNYNNNNYNNNNN", "YNNNNYYNNNYNNNNNNNYNNYNYN", "YNNNNYYNNYNYNNNNNNNYNNNYN", "NNNNYNYNNNYNNNNNNNYYNYNYN", "YNNNYNNNYNNNNYYYNNNYNNNYN", "YNNNNNYNYNNNNNYNNNYNNNNYN", "NNNNYYYNYYYNNNYNNNNYNNNYN", "NNNNNNYNYNNYNNYYNNNNNNNNN", "YNNNNYNNYNNYNNNNNNNYNNNNN", "YNNNNNYNYNNNNNNNNNNNNYNNN", "NNNNYNYNYNYNNYNNNNNYNNNYN", "YNNNYNNNYNNNNYYNNNYYNYNNN", "YNNNNNNNYYYNNNNNNNNNNNNNN", "YNNNNNNNYNNNNNYNNNNNNYNNN", "YNNNNYNNNNYYNNYYNNYNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> switches = {"YNYYYNYYNNNYNNYNYYNNNNYNN", "NYNNYNYYYNNNNYNNYYNYNNYNN", "YNYNNNNYNNNNNNNNNYNNYNYNN", "NNNNYNYYYNNNNNNNYYNYYYYNN", "YNNYYNNNNNNYNNYNYYYNNYNNN", "YNYYNNNNYNNYNYNNYYYYYYNNN", "YNNYYNYYYNNNNNNNNYYYYYNNN", "YNYNYNYNYNNYNNYNNNYYYYNNN", "YYYYYNYNNNNYNNYNYYYYNYNNN", "YNYYNNNYNNNYNNYNNYNNNYYNN", "YYNNYNNNYNNNNNYNYNYYYYNNN", "YYYNYNNYNNNYNNYNNYYNNNYNN", "YYNYNNYNNNNYNNNNYNNYYYNNN", "YNNNYNYNYNNYNYNNYNNYNNYNN", "NYYYNNNYYNNNNNNNNYYNNYNNN", "NNNYNNNYYNNNNNNNYNYNNNYNN", "NYNYYNNYNNNNNYNNNNNYNYNNN", "YNNYNNNNYNNNNNYNYYYYNYNNN", "YYYYYNYNNNNNNYNNYYNYYYNNN", "YYYYYNNNYNNYNYYNYNNNNNNNN", "YYNYYNYNYNNYNYNNYNNNNNNNN", "NYNYYNNYYNNYNYNNYNYYYNYNN", "YNYNNNYYYNNNNNYNYNNNNYNNN", "NYYNNNYYNNNYNNNNNYNNYNYNN", "NNNNNNNYYNNYNNYNNYYNNYYNN", "NNYYYNYNNNNNNYNNYYNYNYNNN", "YNYNYNYYYNNNNNYNYNYYNYYNN", "NNYYYNNNNNNNNNYNNYYYYNNNN", "NYYNNNNNNNNNNYYNNYNYYYYNN", "NYNNNNYYYNNYNNYNYYNNNYYNN", "YYNNYNYNYNNYNYYNNYNNNYNNN", "YYYNYNNYNNNYNYNNNYNNNYNNN", "YYNNNNNYNNNNNNYNNYYNNNNNN", "YNYNNNYYYNNYNYNNNNNYYNNNN", "NNNYYNNYNNNNNNNNYYNYYYYNN", "YNYNNNYNYNNNNNYNNYNYNNNNN", "NNYNNNYYNNNYNNNNYNNNNNNNN", "NYYYNNNYYNNYNNYNYYNYNYNNN", "NNNNNNYNNNNNNNNNNYYNNNYNN", "NNNNYNNNYNNYNYNNNYYNYNYNN", "NNNYYNNYNNNNNNNNYYNYYYNNN", "NYYNYNNNNNNYNYYNNYYYNNNNN", "NYNYYNYNNNNNNYYNYYNYYYNNN", "YNNNNNYYNNNYNNNNNYNYNYNNN", "YNNYNNNNNNNYNYNNNYYNNNNNN", "YYNYYNYNYNNYNNYNYNYNYNNNN", "YNYNYNYNNNNYNNNNNNNNYNNNN", "YYNYNNNNYNNYNNNNNNNYYYYNN", "YNYNNNNNNNNYNYNNYYYYNNNNN", "YNNNNNNYNNNNNYYNYNYNNYYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> switches = {"NYNYNNYNNNNNNNNNNYNYNYNNN", "NYYNNNYNNYYYNNYYYNNNNYYNY", "NNNYNNYNYYYYNNYYYNNNNYYNY", "NYYYNNYNYNNYYNNNYNNNNNYYY", "NYYYNNNNNYYNYNNYYYNYNNYYY", "NNYNNNNNNNNNNNYNYNNNNNYNN", "NYYYNNNNYYYNYYNNNYNNNNYYN", "NYNNNYNNNNNYYNNNYYNYNYYNN", "NYNNNYYNYYYNYNYNNNNNNNYYN", "NNYNNNNNNYYYNNYYNYNNNYNYN", "NNYNNNYNNNNYNNNYNYNNNYNYN", "NNNNNYYNNYYNNYYNNYNNNYNNN", "NNNNNNNNNYYNNNNYNNNNNYNNN", "NYNYNNYNYNYYYNYNYNNNNYYYY", "NNYNNNNNYNYYYYNYNNNNNNNNN", "NNNYNYNNNYYNNYYYYYNNNYNNY", "NYYNNYNNYYNYNNNNYNNNNNNNN", "NYNYNYYNYYNNNNNYYNNNNYYNY", "NNYYNNYNYNYYNYYYNNNYNNYNY", "NNNNNYNNNNNNNNNYYNNYNYYNY", "NYNYNNYNNNNYYYNNNNNYNYNYY", "NNNNNYYNNNNNYNYYYNNYNNNNN", "NNYNNYNNNNNYNYYNYYNNNYNYN", "NNYYNNYNNYYYNNNYNNNNNYYNY", "NNNYNNYNYNNYNNNYNNNNNNYYY", "NNYYNNYNYNYNNNNNYYNNNYYYN", "NYNYNNYNYNYNNYYYYYNNNNYYY", "NYYYNNNNNYYNYYYNNYNNNNYNY", "NNYNNYNNYNYNYNYYYNNYNNNYN", "NNYYNYYNNYYYYYNNYNNNNYYNN", "NYNYNNNNNNNYYNYNYNNYNNNNY", "NNNYNYNNNNYYYYYYNNNYNYYYY", "NYYYNNYNNYNNYNNNNNNYNYYNN", "NNNYNYYNNNNYNYYNYYNNNYNNY", "NNNNNYYNNNNNNNYYNYNNNYNYY", "NNNNNYNNYYYNNYYNYYNNNYNNN", "NYNNNYNNYNNNYYNNYYNYNYNNY", "NNYNNYNNNNYNYYYYNNNYNYYNY", "NYNYNYNNNNNYNNNYYYNNNNNYY", "NYNNNYNNNNYNYYNNYNNNNNYYN", "NNYYNNYNNYYYYNNNYNNNNYNYN", "NNYYNYNNNNNNYNNNNNNYNNNYN", "NNNNNNNNYYYNYNNYNNNYNYYYN", "NYYNNNYNNYYNNNNNNNNNNNYNN", "NNNNNYNNYNYNNYNNYNNNNYNYN", "NYYNNNNNNNNYYNNYYYNYNNYNN", "NYYYNNNNYYYYNYNYNYNYNYNNN", "NNNYNYNNYYNNNNYNNYNNNNNNN", "NYNYNYYNNYYNYYYYNYNNNYYNY", "NNYYNYNNYYNYYNYNNNNNNYNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> switches = {"YNYNYYNNYNYNYNYNNYNNYNNNY", "NYYNYYNNNNNNNNYYNNNNYNNNY", "YYYNNYYNYNNNNNNYNNYNYNNNN", "NYNNYNNYYYYYYNNNNYNYYNNNN", "YNYYNYYNNYYNNNNNNNNNYYNYY", "NNNYYYNYNNYNYNYNNNNYNNNNN", "NNYNYNNNYYYNYNNNNNYNYNNYY", "YNNNYNNNYYYYNNNYNYNNNNYNN", "NNYNNYNYNNNYNNYYNYNYNYYNY", "YYYNNYYNYNNNYNNNNYNNYNYNY", "YYYYNYYNNYYNYNNNNYNNNYNYY", "NYYYNNYYYNNNNNNYNYNYNYYNY", "NNNYNYNNNNYNYNNNNYYNNYNYN", "NNNYNYYYYNYNNNYNNNYYNYYNY", "YYYYYNNYYNNYNNYYNYYNNYNYY", "NNNNYYYNYNYYYNNNNNNNYNYYY", "YYNNNYYYNNNYYNNYNYYYNYYYN", "YYYNNNNYYYYNNNNYNYYNYNNNY", "NYNNYNYYYNYYYNNYNNYNNYNNY", "YNNYNYNYNYYYNNYYNYNYYNNYN", "YNNYYYYYNYNNYNNYNNNNNYNYY", "YYNNYNYNNNYNNNYYNYYYYNYYY", "YYNYYNYYYNYNYNYNNNNNNYYNN", "NYYYNYNNNYNYYNNYNNYYNNYYN", "NYNNNYNYNYNNNNYYNYNYYNYNN", "NYNYYYYYYYNYNNNYNYNYYNYNY", "NYYYNYYYNYYYNNNNNYNYYYNYN", "YYNNYNNNYNNNYNNNNNNNNNNYY", "YYYNYYNNYYNNYNYYNYNNYNNNN", "YNYNYYYNYYYNNNYNNNNYYNNYN", "YNNYNNNYNYYNYNYNNYNYYYYYN", "NNYYNYNYNYNYNNYYNYNYYYYNN", "NNYYNYNYYYNNNNYYNYNYNNYNY", "NYNNYNYNNYNNNNNYNYYYYNNNY", "YYYNYNYYYNNNNNNNNYYYYYNYY", "YNYYYNYNYYYYNNYYNYNNNYYNN", "NYYYYYYYNNYNNNYYNYYYYNYNN", "NYYYYYYYYNYYYNNYNYYNNNYYN", "NYYNNYYYNNYNNNNNNYYYNNNYN", "NNYNNYYNYYYYYNNYNYYNNYNNY", "YYYNNNNNNYYNNNNYNNYYNYYNY", "NNNYNNNYYYYNNNNYNNYNNYNYN", "YYNYYYNNNNNNNNYYNNYNNYYYY", "NYYNYNNYNYNYYNYNNYNYYYYYN", "YNNNYNYYNNNNYNYNNNYNNYYNY", "YYYYYYYNYNNYNNNNNNNYNYYNY", "NYYYYYYYNYNYYNNNNNNYYYYYY", "NNYNYYNYNYYYYNYYNYNNYNYYN", "YNYYYNYNYNNYNNNYNYYYNNNYY", "YYNNYYNYNYYYNNYNNYNNYNYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8388608;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> switches = {"NNNYNYYYYYNYYNYNNNNYNYNNN", "NNNNNNNYYNNNYNYNYNNYYYNYY", "YYNNNYYNYNYYYYYNNYYNNYNNY", "NYYNNYNNNNYYNYNNNNYNNYYYY", "NYYNYYYYNYNNNNNYYNYYYYNNN", "YYYNNYYNNNYNYNNNYYYNNYYNN", "NNYNYNNNNNYYYYYNNNYYYYYNN", "NNNYNYYYNNYYYYYYNYNNYYYYN", "YNYNNNNYNNNYNNYYYNYYYYYNN", "NNNNNNYYYYNNNYNYNNNYNNYYY", "YYNYYYNNNNNNYNYYYNYYYNNYY", "NYYNNYYNNYNYNYNNYYYNYNYNN", "NNYYNNYYYNYNNNNYNNNYNNYYN", "NYYYYYNNNNNNYNNYYNNNNNYNY", "NNNNNYYYYNNNYNYNNYYYNNYNY", "YNNYYYYYYYYNNYYNNYNNNNNNY", "YNNNYYYYNYNYYNYYNNYYNNNNY", "YNYNYNNYNYNNYYNYYNYNNYYYN", "YYNNNYYNNNNYYYNYNNYNNNNNN", "YYNNYYNNYYNNNYNYNNYYYNNNY", "YNYYNYYNNYNNNNNNYNNNYYYYY", "NYNYNYNNYYYNNNNYYYNYNYNYY", "NYYYNNNNYYYNNYYYNNNNYYYYY", "YYYNYNYNYYYYYNNYNNYYNNNYY", "NNNYNNYNYYYNYNYYNYYNNYNNY", "NYYYYNNYYNNNNNYYYYYNYYYYN", "NNYYNYYYYYYNNNNYYYNYNNNNN", "YYNNNYYNNNNYYYNYYYNYYYYYY", "YYNYYYYNYNYNNYNNYYYYNNYNY", "NYYNYYYYYYYNYNYNNNYNNYYNY", "NNNNYNYNYYYNNYNYYYYYNYYYY", "NYNNNNYNYYNYNNYYNYNNNNYYN", "YNNYNNYYNNNYNNYNNYNYYYNYY", "NNNNYNNYNYYNNYYYNNYYYNNYY", "NNYYYNYNYYYYNYYYNNNYNYNYY", "NNYNNYYNYYYNYYYYNNYNNYYYN", "NNYNYNYYYYYNYYYYYNNNYYNNY", "NYYYYYYNNYYNYYNYNNYYYNNNY", "YNNYNNNNYYYNYYYYYYYYYYYYY", "NYYYNYYNNNNYNNYNNNNNNYYNN", "YNYYYYYYYNNNNNYNYNYNNNYYY", "YNYNNNYNNYYNNYYYYYNNYYNYN", "NNNNNYYYNYYNNYYYYNNNYYNNN", "NNYYYYYNYYNNNNNNNYNYYNNYN", "YYNYNYNNYNNYYNNYNYNNNNYNY", "NNNNYNYNYNNYYYYNNNNYNNNYY", "YNNYNNYNNYNYYNYYNYYNYYNYN", "YYNYNNNNNYYYYYNNYNNNYNYYN", "NNYNYNYYYNNNYYYYYNNNNYNYY", "YYYYYYNYYNYYNYNYYNYYNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> switches = {"NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> switches = {"NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> switches = {"NNNNNNNNYNNNNYNNNNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNYNNYNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNYNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNYNNYNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNYNNYNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNYNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNYNNYNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNYNNYNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNYNNYNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNYNNNNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNYNNYNNYNNYNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNYNNNNYNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNYNNNNYNNNNNYNNYNNNNYNNNNNNNNNNNYNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> switches = {"NNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNYNNNNYNY", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNYNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNYNN", "NYNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNN", "NYNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNYNNNNNNYNNYNNNNNNNNNYNNNNYNNNYNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNYNNNNNNY", "NYNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNYNN", "NNNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNYNNYNNNNNNNNNNNNNNNNNNYNN", "NYNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNYYNNNYNY", "NYNNNNNNNNNNNNNNNNYNNNNNNYNNYNNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNYNNNYYNNNYNY", "NYNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NYNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN", "NYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNN", "NYNNNNNNNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNYNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNYNNNNNNNNNNY", "NYNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNYNNNNYNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNYNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> switches = {"NYNNNNNYNNNNNNNNNNNNYNYNYNNNNNNNNNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNYNNNNNNYNNNYNNNYNYNNYNNNNNNNNNNNN", "NNNNNNNYNNNNYNNNNYNNYNYNYNNNNNNNNNYNNYNNNNNNNNNNNN", "NYNNNNYYNNNNNNYNNYNNYNYNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNYNYNNNNNNNNNYNNNNNNNYNYNNNNNNNNNNNNNNN", "NYNNNNYYNNNNNNYNNNNNNNNNYNNNYNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNYNYNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNYNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNYNNYNNNNNNYNNNYNNNYNYNNYNNNNNNNNNNNN", "NNNNNNNYNNNNYNYNNYNNYNYNNNNNYNNNYNNNNYNNNNNNNNNNNN", "NYNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNYNYNNNNNYNYNYNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYYNNNNYNYNNYNNNNNNNNNNYNNNNNYNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNYNNNNNYNYNYNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNYNNNNNNNYNYNYNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNNNYNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NYNNNNYYNNNNYNNNNNNNNNNNYNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNNYNNNNYNYNNYNNYNYNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NYNNNNYYNNNNYNNNNNNNYNNNNNNNYNNNYNNNNNNNNNNNNNNNNN", "NYNNNNYYNNNNYNYNNNNNNNNNYNNNNNNNYNYNNYNNNNNNNNNNNN", "NYNNNNYYNNNNYNNNNYNNYNNNNNNNYNNNYNNNNYNNNNNNNNNNNN", "NYNNNNNNNNNNYNNNNNNNNNYNYNNNNNNNYNYNNNNNNNNNNNNNNN", "NYNNNNYYNNNNYNNNNYNNYNYNYNNNNNNNYNYNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8192;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYYNNNNNNNNNNNNYNN", "NNNNNNYNYNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNN", "YNYNNYNNYNNNNNNNNNYNNNNNNNNNNNYNNNYNNNNNYNNNNNYYNN", "NNNNNYNNNNNNNNNNNNYNNNNNYYNNNNNNNYNNNYNNNNNNNNYNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNNNNNNNNNNYYNN", "YNNNNYYNYNNNNNNNNNNNNNNNYYNNNNYNNNNNNNNNYNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNYNNNNNNYNN", "NNNNNNYNYNNNNNNNNNNNNNNNYYNNNNYNNYYNNNNNYNNNNNYYNN", "YNNNNNYNNNNNNNNNNNYNNNNNYNNNNNNNNNYNNYNNYNNNNNYYNN", "NNYNNYYNNNNNNNNNNNYNNNNNNNNNNNYNNYNNNNNNYNNNNNNNNN", "YNNNNYNNYNNNNNNNNNYNNNNNNNNNNNYNNYNNNYNNNNNNNNYYNN", "NNNNNYNNYNNNNNNNNNYNNNNNYYNNNNYNNNNNNYNNNNNNNNNNNN", "YNYNNNNNYNNNNNNNNNYNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNN", "NNYNNYYNYNNNNNNNNNYNNNNNNNNNNNYNNNYNNYNNYNNNNNNNNN", "NNNNNYNNYNNNNNNNNNNNNNNNYNNNNNNNNYYNNYNNYNNNNNYNNN", "NNYNNNYNNNNNNNNNNNYNNNNNNYNNNNYNNYNNNNNNNNNNNNYYNN", "YNNNNNYNYNNNNNNNNNYNNNNNYYNNNNYNNNYNNNNNNNNNNNYNNN", "NNYNNYYNNNNNNNNNNNYNNNNNNYNNNNYNNNNNNNNNYNNNNNYYNN", "YNNNNYNNYNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNYNNNNNYYNN", "NNNNNYNNNNNNNNNNNNNNNNNNNYNNNNNNNYNNNNNNYNNNNNNYNN", "NNYNNYNNNNNNNNNNNNNNNNNNYYNNNNNNNNYNNNNNNNNNNNYNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNYNNNNNYNNN", "YNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNYNNYNNNNNYNNN", "NNYNNYYNNNNNNNNNNNNNNNNNYNNNNNYNNYYNNNNNYNNNNNNYNN", "NNYNNYYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNYNNYNNNNNNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32768;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> switches = {"NNNNNYNNNNNNYNNNNNNNNNYNNNYNNNNNNNNNNNNNYYNNYNNNNN", "NNNYYYNNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYNYNNNNNNN", "YNNYYYNNNNNNYNNNNNNNNNYYNNNNNNNNNYNYNNNNYYYNYNNNNN", "YNNYNYNNNNNNNNNNNNNNNNNYNNNNNYNNNYNYNNNNNNYNYNNNNN", "YNNYNYNNNNNNNNNNNNNNNNYNNNNNNYNNNNNYNNNNNYYNYNNNNN", "YNNYYYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNYNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNNNNNNNYNNNNNNY", "YNNYYNNNNNNNYNNNNNNNNNYNNNYNNYNYNNYYNNNNYYNNNNNNNN", "NNNYYYNNNNNNYNNNNNNNNNNNNNNNNYNYNNYNNNNNYNYNNNNNNN", "YNNNYNNNNNNNYNNNNNNNNNNNNNYNNNNYNYYNNNNNYYNNYNNNNY", "NNNYYYNNNNNNYNNNNNNNNNNYNNYNNYNYNNNYNNNNNNNNYNNNNN", "YNNYYNNNNNNNNNNNNNNNNNYYNNNNNYNYNNNNNNNNYYNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNYNYNNNNNYYNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNYNNNYNYNNNNYNYNYNNNNN", "NNNNYNNNNNNNYNNNNNNNNNYYNNYNNNNYNYYYNNNNYYYNYNNNNY", "YNNNYYNNNNNNYNNNNNNNNNYNNNNNNYNNNYNYNNNNNNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNYYNNNNNYNNNNNNNNNNNNNNNNNNNY", "NNNYYYNNNNNNYNNNNNNNNNYNNNYNNNNYNNNNNNNNYYYNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNYNNYNNNNNYNNNNYNYNYNNNNN", "NNNYYNNNNNNNYNNNNNNNNNNYNNYNNYNYNYNNNNNNNYNNYNNNNN", "YNNYNYNNNNNNYNNNNNNNNNYYNNNNNNNNNYNYNNNNYNYNNNNNNN", "YNNYNNNNNNNNNNNNNNNNNNYNNNYNNYNNNNYYNNNNYNYNYNNNNY", "NNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNYYYNNNNYNNNNNNNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNYNNYNNNYNNNNNNYNYNNNNNNN", "YNNNNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNYYNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> switches = {"NNNNNNNYNNNNNNNYNNNNNNYNNNNNNNYNYYNYNYNNNNNNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNYYNNNNNNNYNNYYYNYNNYNYNNNNNNN", "NYNNNNNNNNNNNYNYNYNNNNNNNNNNNNYNYNNNNYYYNNYNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYNNNYNNYNYNNYNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNYNNYNNYYNYNNNNYNNNNNNNNN", "NYNNNNNNNNNNNYNYNYNNNNYNNNYNNYYNYYYNNNYYNNYNNNNNNN", "NYNNNNNYNNNNNNNNNNNNNNYNNNYNNYNNYYYNNNNYYNNNNNNNNN", "NYNNNNNNNNNNNNNYNYNNNYNNNYNNNYYNNYNYNYYNNNNNNNNNNN", "NYNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNYYNNNYNYYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNYNNYNYNNNNNNN", "NNNNNNNNNNNNNYNYNNNNNNNNNNYNNNNNYYNYNYYYNNYNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNYYNNNYNNNYNNNYNNNNYYNYNNNNNNN", "NNNNNNNNNNNNNNNYNYNNNYNNNNYNNYYNYNYYNYNYNNYNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNYNNNNYYYNYNNNNNNN", "NYNNNNNYNNNNNYNYNYNNNNYNNYYNNNYNNYYYNYYNNNYNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNYNNNNNNYYNYNYYNNNYYNYNNNNNNN", "NYNNNNNYNNNNNNNNNYNNNNYNNNYNNNYNNNNYNYYYYNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYNNNYNNYYYNYNNYNNNNNNNNN", "NYNNNNNYNNNNNYNYNYNNNNNNNYYNNNNNYYNYNYYNYNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNYNNYNNNYYNYYNYNYNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNYYNNYNNNYNNNNYYNNYNYNNNNNNNNN", "NYNNNNNYNNNNNNNNNYNNNYNNNNNNNYNNYYNNNYNYNNYNNNNNNN", "NYNNNNNNNNNNNNNYNNNNNNYNNNYNNNYNNYYNNNNNYNYNNNNNNN", "NYNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNYNNNYYNNNYNNNNNNN", "NNNNNNNYNNNNNNNYNYNNNNYNNYYNNNNNNNNNNYNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1048576;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> switches = {"NYNNNNNYNYNYNNNNNNYYYNNYNNNNNYNNNNYNYNNNNNNNNNYNYN", "NNNNNNNYNYYYNYYNNNYYNNNNNNNNNYYNNNYYYNNNNNNNNNYNYN", "NNNNNNNNNNNNNYYYNNYYYNNNYNNNNNYNNNNNNNNNNNNYYNYNNN", "NNNNNNNNNYNNNYNNYNNYNNNNYNNNNNYNNNNNYNNNNNNYNNNNYN", "NNNNNNNNNNYNNNNYNNNYYNNNYNNNNYYNNNYYYNNNNNNYYNNNNN", "NNNNNNNNNYNNNNNYNNNYYNNNNNNNNNNNNNYYNNNNNNNYYNYNYN", "NNNNNNNNNYNYNNYNNNNNNNNYNNNNNYYNNNYNYNNNNNNNYNNNYN", "NNNNNNNYNYYYNYNYNNYNNNNYYNNNNNYNNNNYNNNNNNNYNNYNYN", "NNNNNNNYNYYNNNYYNNYYNNNNNNNNNNNNNNNNYNNNNNNNYNYNYN", "NNNNNNNYNYNNNNYNYNYYNNNNYNNNNNNNNNNYNNNNNNNYYNNNNN", "NYNNNNNNNNYNNYNNYNYNYNNNNNNNNYYNNNYNNNNNNNNNNNNNYN", "NNNNNNNNNNYNNYYNNNNYYNNYYNNNNYNNNNYYYNNNNNNYYNYNNN", "NYNNNNNYNNYNNYYNNNYNNNNYYNNNNYNNNNNNYNNNNNNYYNYNNN", "NNNNNNNNNYYNNYNNYNNNYNNYNNNNNNYNNNNNYNNNNNNYNNNNNN", "NYNNNNNYNNYNNNNYYNYYYNNNYNNNNYYNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNYNYNYNNYYYNNYYNNNNNNNNNYYYNNNNNNNYNNNYN", "NYNNNNNNNYNNNYNYYNNNYNNYYNNNNNNNNNYNYNNNNNNNNNYNNN", "NNNNNNNYNNNYNNNYNNNYYNNYYNNNNNYNNNNNYNNNNNNNYNYNNN", "NYNNNNNNNNYYNNYNYNNNNNNYYNNNNNNNNNYNNNNNNNNYYNYNNN", "NNNNNNNYNYYNNNYYYNNYNNNYYNNNNYYNNNYNYNNNNNNNYNYNNN", "NYNNNNNNNYNNNNYYNNNYYNNYYNNNNNYNNNNNYNNNNNNYNNYNYN", "NNNNNNNNNNNNNNNYNNYNNNNYYNNNNYNNNNNYNNNNNNNNNNYNYN", "NNNNNNNYNNYNNYNYYNNYYNNYYNNNNNYNNNYYYNNNNNNYNNNNYN", "NYNNNNNNNNYNNYNNYNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNN", "NYNNNNNNNNNYNYYYYNNYYNNYYNNNNYNNNNNYNNNNNNNNNNYNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8388608;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> switches = {"NYNYNYNNNNYYNNNNNNYNNNNNNNNYNNNYNNNNNNNNYYYNYYNNNN", "YNNYNYNNNNYYNNNNNNNNNNYNNNNNNYNNNYNNNNNYNNYNYYNYNN", "NNNYNNYNNNNNNNNNNNYNNNNNNYNNNNNNNYNNNNNYYYNNYNNNNN", "YNNYNNNNNNYYNNNNNNYNNNNNNNNYNYYYYNNNNNNNYYNNYNYYNN", "NNNNNNYNNNNYNNNNNNYNNNYNNYNNNYYNNYNNNYNNYNYNNYNNNN", "YNNNNNYNNNYYNNNNNNYNNNNNNNNNNNNYNYNNNYNNNYNNYYYYNN", "YYNNNNYNNNYNNNNNNNYNNNNNNYNYNNNYYNNNNYNNNNYNYNNNNN", "YNNYNYYNNNNNNNNNNNNNNNNNNNNNNNNYYYNNNYNYNYNNNNNYNN", "NYNYNNYNNNNNNNNNNNYNNNYNNYNYNNNNNNNNNYNYYNYNYNNNNN", "YNNYNNYNNNNYNNNNNNYNNNYNNNNNNNNNNNNNNNNNNYNNNYYYNN", "YYNNNYNNNNNNNNNNNNNNNNNNNNNNNYYNYYNNNYNNNYNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNYNYNNYNNYNNNYNYYNNNNNYYNN", "YNNYNYYNNNNNNNNNNNYNNNNNNYNNNYYNYYNNNNNYYNNNYNNNNN", "YYNNNNNNNNNYNNNNNNYNNNYNNNNYNYYYYNNNNNNNNYYNNNNYNN", "YYNYNYNNNNYNNNNNNNYNNNYNNNNYNNNNYYNNNNNYNYNNNYYYNN", "NYNNNYYNNNNYNNNNNNNNNNNNNYNYNYNNNNNNNNNYNNNNYYNNNN", "YYNNNYNNNNYNNNNNNNYNNNYNNNNYNYYYYYNNNNNYYYNNYNNNNN", "YYNNNNYNNNYYNNNNNNYNNNNNNNNNNYYNYNNNNNNNYNYNNYNYNN", "NNNNNNNNNNYYNNNNNNYNNNNNNNNYNNYNYNNNNYNYYYNNYNNYNN", "NNNYNNYNNNNNNNNNNNNNNNYNNYNYNYNYNNNNNYNYYNNNYNNNNN", "YYNYNNNNNNYNNNNNNNNNNNNNNYNNNYYNNNNNNNNYNYNNNYYNNN", "NNNYNYYNNNYNNNNNNNNNNNNNNYNYNNNNNNNNNYNNNYNNYYNYNN", "NNNYNNNNNNNNNNNNNNYNNNNNNNNYNNNNNYNNNYNYYYYNYYYYNN", "NYNNNNYNNNNNNNNNNNYNNNNNNNNYNNYYYNNNNNNYYNYNNNNNNN", "YYNNNYNNNNNNNNNNNNNNNNYNNYNYNNYYYNNNNYNYNYNNNYYYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 33554432;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> switches = {"NYNYNNYYNYYYNNYYYNNYNNNNNYYNYNYYYYNNNYYYNNNYYNNNYN", "NYYNNNYYYYNYYYNYNNYYYYYNNNNYYNYYYNNNNYNNYNYYYYYNYN", "YYYNYYNYNNNYYNNYNYYNYNNYNNNYYYNYNNYYNNNYNYNYNYYNNY", "YNNYNNNNNYNYNNNNYYNYNNYYYNYYYYNYYNYNYNYYNYNYNNYNYY", "YNNYYNYNNYYNYYYNYNYNNNNYNNNNYNYNNNYNNYNNNNNNNNNYNY", "NYYYYNNYNYNYYNNYNYYYYNNNNYYYNYNNYYYNYYYYNNNNYNNNYN", "YNNYNNYYNYNNYYYNYNNNYYNNYNYNYNYYNYNYNYNYYNNNNYNYYN", "YNYNNNNNYYYNYNYYYYNNYYNYYYNYYYNYNNNYYYYYYNYYYNNNNN", "YNYNYNYNNNYYNNYYYYNNNNYYYYYNNNYYYYNNNNYYNYNYNNYNNY", "YYNNYNNYYYNYYYYYNNYYNYNNNNNYNNYYNYYNNYNYNYYYYNYNYY", "NNYNNYNNYYYNYYYYNYYYYYYYNYYNNNYNYNNNNYNYNYYYYYYYYY", "YNYNNYYYNYNYYNNNNNYNNYYNYNNYYYYNYYNNYNNNYYNYNYYYNN", "NYYYYYYNNYYYNYNNNYNNNNNNYNYYYYYYNNNNYYNNNYYYYNYNYN", "NYYYYYYNNNYNYYNYNNYYNYNYYYYYYNNYYNYNYNNYNNNNYNYNYY", "NYNNYYYNNNYNYNNYYYYNYYYNYNNNYNNNYYYNYYNYNYNYYNYNYN", "NYNNNYYNYYYYYYNYNNNYNNYNYYYYNNNNNNYNNNYYYNYNYNNNNY", "NYYYYYYYYYYNNNNNYNYYNYNYYYNNYYYYNYYNNYYYNNNYNYNNYY", "YYYNNYYYNNNNYNYYNYNNNNYNYYYYYYYNNYYNYNYYYYYNNNYYYN", "YNYYNNNYNYNYNYNYYYYNYNNYYNYYYYNYNYYNNYNYYYNNYYNNNY", "YNNYNNNYNNNYYNNYYNYYNNNNYYNYNNNYNNYNYYNYNYNYNYNYNN", "YYNNNNNYNNYYYYYYYYNYNNYNNYYNYNYNYYNYNYYYNNYNNNNYYY", "YYNYNYNYNYYYYNNNNNYYYNNNNYNNNYNNYYNYYNYYYNYYYNYYNY", "YNNNNYNNNYNNYNYNNNYYYYYYNYNYNNYNYNNNNNYNYYYYYNYNYY", "YNNYYNYNYNNNNNYNYNYYYYNNYNYNNYNNYNNYNYNYYNYYYNYYYY", "YYYYYYYYNNNYYYNNNYNYNNYYNNYYNYYYYYNNNYNYYYYYYNYYYY", "YYNNNYYYYNYYNNYNYNYNYNYYNNNYNNYYNNYNYYYYYYNNNNNNNY", "NYNNNNYNYNNNYYNNYNYNYYYYNNNYNNNYNNNNNYNYNNNNNYNYYN", "YYNNYNNYNYNYYNNNNNNYNNYYYYNYYNYNNNNNNYYNYNYNNNYNNY", "YNYYNNYYNYNNNYYNYNYYNNYNYYNYNYYYNNYNNYYNNYNNNNYYYY", "NNYNNYNYYYNYYYYYYNYNNYYYNYYNYYNYYYYYYYYYYNNNNNNNYN", "YYNNYYNNYNNYNYNNNNNNNNNYYNYYYYNYYYNYNYNNNYYYNYNNYY", "YYYNNNNYNNNYNYYYYNNYNYNNNYNNYNYYYNYNNNNNNYYNYNNYYY", "NYYYYNYYYYNYYNYNYYNNNYYYNNYYNYNYYYNYYYNNYNYNYYYYYN", "YNNYNNYNNYNYYYYYYYNYYYNNNNNYYYNYYYNNYNNNYYNNYNYYYY", "NYNNNNYYNNNNYYNYNNYNYYNYNYYYNYYYYNYNYNNYNYNNNYNYNN", "NNNYNNNNYYNYNYNYNNYYYYYYNYNNYYNYYYNYYNYNNYNYYYYNYN", "NNNYNNNYNNYNNNNYYYYYYNNYNYYYNYNYNYNYYNNNNNYNNYNYYY", "YNYNNYYNYYYNNNYYNNNYNYNNNYNYYNNYYYYNNYYYNYYYNYYNNN", "NYYYNYNYNNNYNYNNNNYYNNYNNNNNYNNYYYYYYYNNNYNNNNNNYY", "YYNYYYYYNNNYNNYYNNYYNYNYYYNYYYNYNNNNNYYYNYNNNYYNYN", "YYYYYNNYNNYNNNYYYYNYNYNYNYYNYNNNYNNYNYYNNNNYNYNNYN", "YNYNNYYYNNNYNNNNNNYNNNNYYNNNYYYYNYNYNNYNYNNNYYNNYN", "YYYNYNNNYYYNNNYNNYNNNYYYNYYYNNYNYYYNNNNNYNNNNYNNYY", "NNNYYYYNNNYYNYNNNYNNYNYYYNNNYNYNNYYNYYNNYNYYYNYYNY", "NNYYYNYYNYNNYYNYNNYYYNNYNYNYYNYYYYNNNNYNYNYNNYNYYN", "YNNYNYYYNYYYNNNYYYNNYNYYYNNYNNNYNNYYYNNNYNNYYYYYNY", "YNNNNNYNYNNYYNYYNYNNYNYYYNNNYNNYNYNNNNNNYYNYYYYNYY", "YYYNNNYNYYYNNYNNNNNNYNNNNYNYNYYNYNYNNNYNYYYNYNNYYN", "YYYNNNNNYNNNNNNNYYYNNNNNYYNNYYNNYNNNYNNNNNNNYYYYNY", "YYYYNNYNNYYYNYYNNNYNNNNNYNYYNNYYYYYYYNNYYNYNYNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> switches = {"NNNN", "YNNY", "NYYN", "NYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNYNNYYNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNYNNNNNNNNYNNNNNNNNNYNNNN", "NNNNNNNNYNNNYNYNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNYNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYYNNYNNNNYNNNNNNNYNNNNYNYNNNNYNNNNYNNNNYNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNYN", "NNNNNNNNYNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNYNNYNNYNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNYNNNNNNNNNYNNYNNNNNNNNNNNNNNNNYYN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNYYNYNNNNYNNNYYNNNNYYNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNYNNNNNNNNNNNNNNNNNNYYNNNNNNNY", "NNNNNNNNYNNNYNNNNNNNNNYNYYNNNNNNYNNNYYNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNYNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNYYNNYNNNNYNNNNNNNYNNNYYYYNNNNYNYNNYNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNYNNNNYNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNY", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNYNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNYNNNNNNNYNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> switches = {"NNNYYNYNYYYNYYNYNYYNYYNNYYYYNNYYYNYYNNYNYYYYYNYYNY", "NYYNNYNYYYNYYNNYYYNYYNYNYNNYNNYYNNNYYYYNNYYYNYNYYN", "NNNYNYNNNYYYYNNYYNYNNYYYYYNYNYYNYYNNNNYYNNNNYNNNNN", "NYNYNYNNNNYYYYNNYYYYNYNYYNYYNNYYYYNYYYYNYNYYNNYNYY", "NNNYYNNYYYNNNYNNNYYYNYYNYNYNNYYYYYNNNNNNYNYNNNYNYY", "YYNNNYNNYYNNYNNNYYYNNYNYYYYYNYYYNNYNYYNYYNNNNYNYNY", "NNNYNNYYYNNNNNNYNNNYNYYNNNNYNYYNYYYNYYNNYNYNYNNYYY", "YYNYYNYYNYYNYNYYNYYNNNYNNNYNYNYYNYYYYYNNYNYYNNYYNY", "NNYYNYYNNYNYNNNYYYNYYYYNNYYNNNNYNYNYYYYYNYNNYYNNYN", "NNYNNYNNNNNYYYYNYNYYYYYYNYYNYYYNYNYNYNNYYYYNNYYNYN", "YYNYNNNYNNYYNYNYNYYNNYNNYNYNYYYNYNYNYNNNNNYYYYNNNY", "NYYYNNNNNYYNNNYNYYYYYYNNYYYYNNYNYNNNYNNYNYNNNYYYYN", "NYYYYNNYNYNYYNNNNYNYYYYNNYYNNNYNYNYNNYYNYNNNYNYNNN", "YNYNNYYYNYNNYYNYYYNNNNNYYNYNYNYNYYYNYYYNNNNNNNYYYN", "YYNYNYNNNNYNYNNNNNNNYNYNNNYNNYYYYYYYYYYNYYNYYNNNNY", "NYYNYNNYYNNNYYYYNNYYNYNNNYYYYYYYNNNYNYNYYYNYYNYNNY", "NYNYNNYNNNYNYNNYNYYYNYNNYNYNNYYNYYYNYYNNYYNNNNNYNN", "YNNNNNYNNNYYYNYNYNNYNNYNNNNNYNNYNYYNYYYYNYYYNNNYYY", "YNNNYYYNYNYYNYNYYYNYYYNYYNYNYYYYYYNNNYYYYYNNNNNYNY", "NNNNNYNNNNYYNYNNYNNYNNNNYNNNYNNNNNYNYNYNNYYYNNYYYY", "YNNYNYNNNYNYYNNNNNYNYYNYNNNNYNYYNYNNYYNNNYNNYNYYNN", "NYNNYNNYNYYNYNNNNYNYNYYNYYYNYYNNYYNNYNYYNYNYYYNYYY", "YNYNYYNYYYYNNYYYNYYNNNYYYNYNYYNNNYNYYNYNYNNNNYYNNN", "NYNYNYNYYNYNNNYYYYNYYYNYYNYNNYYNNYNNNNYYNNYYYYNNYN", "YYYYNNNYNYNNYNYYNNNYYYNNYYYYYYYNNNYYNYNYYYNYNYNNYN", "NYNNYYNNNYNNNYNYYYNNNNNNNYYNYNNNNNNYNNYNNNYNNYYYNN", "NNNNNNNNYNNYYNNNYYNYYYNNNYNNNNNNYNYYNNNYYNNNNYYNYY", "NYYYYNYNYYNNYYYNYYYNNYYNYYNNYYYNYNYNYNNYYNYYNYNNNN", "YNYYNNYNNYYNYNNNYNYNNNYNYYNYNNYNNYNYNNNYYNNYNNNYYY", "YYNNYYNNNYNYNYYNNYYNYNNYNYYNNYYNNNYNYNNYYYNYNYYNYN", "NNYYNNYYYYNNNNNYYNNNYNNYNNYYYYNYYYYNYNNYNNNYYNYNNY", "NNNNNNNYYNNNYNYYYYYYNYYNNYNNYNYYNNYYYNNNYNYYYNNYYN", "YNNNNNYYYNNNNNYYNYNYYNNYNNYYYNYYYYNNYNYYYNNYYNNNYY", "YNYYYYNYYYNYYNNYNYYYNYYNYNNNYNNNYYYYNNYNYYNNYYYYNN", "NNNNNNYYYYYYNNNYYNNNNNNYNYYNNNYYYYNYYNNYNYYNNYYNNY", "YYNNNNYNYYNNNYYNYNYYNYNNYYNNYNNNNYNNNNYYNYNNNNYYNN", "NNYNNYYNNYNYNYNNNYYNYYNYYNNYYNNNYYYNNYNNYNNYNNYYYN", "NYNNNYYNYYYYYYYYNYYNNYYYNYNNNYNYNNYNYYNYYYNNNYNNNN", "NNNYYYYYNYNYYYNNNNYNNNYYNNYNYNNYNNYYYYNNYNYYNYNYYN", "NYNNNNYNNNNNNYYYNNNNYYYYYYYYYNYNYNNNNNYNYNYYYYYNNY", "YNNYNNYNYNNYNYNYYNNNNNNYNNNNNNYNNYNYNYYYYNNNYYYNYN", "YYNYYYNYNYNYNNNYNNNNNYNYNNNNNYYNYNYNNYNYYYYNYYNYYN", "YNNYYYNYYYYYNYNYNNYNYNYYYNYYYYNYNNNNNNYYYYNYNNYNYN", "YNYYYYNNYYNNYNYNYNNNNYYYNYNNNYYYNYNNNNNYYNYNNNYYNN", "NNNNNNNNYNYYNNNNYNYNNYNNYNNNYNYYYYYNYYNNYNYYYYNYNN", "YNNYYNNYYYYYYNYYYYNNNYNNNNYYYYNNNNYYNNNYYNNNYNNNYN", "NYNYYNYYNNYYNNNYYNYYYNNYYYYNYNNNNYNYYYYNYYYNYNNNNN", "NYYNYYNYNNYYNNNNYYYNNNYYYYYNNYYNNNNYNYYNNYYNNYNYYN", "YNYNNNNNYNYNYYNNNYYNYNNNYYNYNNNYNNNNNNNYNYYNNNNNNY", "NNNNYNNNNNYYYYYYYNNYNYYYNYNYYNNNYNYYNYYYNNNYYNNYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> switches = {"NYYYNYYYYNYNYNYYYYYYYYYNYYYYYY", "NYYYNYYNNNNNNNYNYYYYNYYNYNNYNY", "NYNYNYNYYNYNYNYYYNYNYNYNYYYYYY", "YNYNYNYYYYYYYYNYNYNYYYNYNYYNYN", "NYYYNYYNYNNNYNYYYYYYYYYNYNNYYY", "YNYNYNYYYYYYYYNYNYNYYYNYNYYNYN", "NYYYNYYNYNNNYNYYYYYYYYYNYNNYYY", "YNYNYNYYYYYYYYNYNYNYYYNYNYYNYN", "YYNYYYNYNYYYNYYNYNYNNNYYYYYYNY", "YNNNYNNNYYNYYYNYNNNNYNNYNNNNYN", "NYYYNYYNNNNNNNYNYYYYNYYNYNNYNY", "NNYNNNYYYNYNYNNYNYNYYYNNNYYNYN", "YYYYYYYNNYNYNYYNYYYYNYYYYNNYNY", "YNYNYNYYYYYYYYNYNYNYYYNYNYYNYN", "YYNYYYNYYYYYYYYYYNYNYNYYYYYYYY", "YYNYYYNYNYYYNYYNYNYNNNYYYYYYNY", "YYNYYYNYNYYYNYYNYNYNNNYYYYYYNY", "YNYNYNYYNYYYNYNNNYNYNYNYNYYNNN", "YNNNYNNYYYYYYYNYNNNNYNNYNYYNYN", "YYNYYYNNYYNYYYYYYNYNYNYYYNNYYY", "YYNYYYNNYYNYYYYYYNYNYNYYYNNYYY", "YNYNYNYNNYNYNYNNNYNYNYNYNNNNNN", "YYNYYYNYNYYYNYYNYNYNNNYYYYYYNY", "NYYYNYYYYNYNYNYYYYYYYYYNYYYYYY", "YYNYYYNYNYYYNYYNYNYNNNYYYYYYNY", "YNNNYNNNNYNYNYNNNNNNNNNYNNNNNN", "NYNYNYNYYNYNYNYYYNYNYNYNYYYYYY", "NNYNNNYYNNYNNNNNNYNYNYNNNYYNNN", "NYYYNYYNYNNNYNYYYYYYYYYNYNNYYY", "NNYNNNYYYNYNYNNYNYNYYYNNNYYNYN", "NYNYNYNNNNNNNNYNYNYNNNYNYNNYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYNYNYYNYYYNYNNNYNYNYNYNYYNNN", "YNYNYNYNNYNYNYNNNYNYNYNYNNNNNN", "NNYNNNYNNNNNNNNNNYNYNYNNNNNNNN", "NYYYNYYNYNNNYNYYYYYYYYYNYNNYYY", "NYNYNYNYYNYNYNYYYNYNYNYNYYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNYYYNYNYNNYNYNYYYNNNYYNYN", "YYNYYYNNNYNYNYYNYNYNNNYYYNNYNY", "YYNYYYNNNYNYNYYNYNYNNNYYYNNYNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYYNYYYYNYNYNYYYYYYYYYNYYYYYY", "NYNYNYNNYNNNYNYYYNYNYNYNYNNYYY", "YNNNYNNNYYNYYYNYNNNNYNNYNNNNYN", "YNNNYNNYYYYYYYNYNNNNYNNYNYYNYN", "YNNNYNNYNYYYNYNNNNNNNNNYNYYNNN", "NNNNNNNYYNYNYNNYNNNNYNNNNYYNYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> switches = {"YY", "YY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> switches = {"YNYYYYNNYYNYNYYNNNNNYNYYNNNYYYYNNNYYYNYNYYYYNYNNYN", "YNYNNYNNNYYYNYNYNYYYNYNYNYNNYNYNNNNNYYNYNNNNYNNNNY", "YNNNYYYNYNNNYNNYYYNYNYYYYYYYYYYNYYNYNYYNNYNYYYNNNY", "NYNYNYNYYYYNNNYNYNNNNNYNYYYYYNNYYNYYNYNYYYYYNNYYNY", "NNYYYNNNNNNNYYYNNYNYNYNYNNYYNNYNNNYYYNNYNNYYNNNNYN", "YYYYYNYNNYNNNNNYNNNNYNYYNNYYNNYNNNNYYYNNNYYYNYNNYN", "NNNNNYYNYNYNNNYYNNNYNYYNYYYYYNYYNYYNYNNNNNNYNYNNNN", "NNYYNYNNNYNNNNYYYNNYNNYYYNNYNNYNYYYYNYYNNYNNNNNYNN", "NYNNNNNNYNYYYNNNYNNYNNNYYNYYYYYNNYNNYNYYNNNYNNNYNN", "NNNYYYYNNYNYYNYYYNYNYYNYYNYYYYYNNYYYYNNYYNYNNNYYNN", "NYNNYYYYNNYYNNNYNNYNYYNNNNYYYNYNYNNYNNNYNNNYNNNNYY", "NYYNYYNYYNNNNNNYNNYYYYYNYYYNYYYYYNYNYYNYNNYNNYYYYN", "NNYNYYNNYYNNNNYYNNNYNYNYNNNNYYNNYNYYNNYNYYNNNYYNYN", "NNNYYYYNYYYNNNNYYYNYYNYYYNYNYNYNNNYNYNNYNYYNNYYYNY", "NYNYNYNYNNYYNYNYNNYYYYNYNYYYNYNYNYYNYYNNYNYYNYNYYY", "YNNYNNYNNNYYNNNYNNYNNNYYNNYNYNYNNYNNNYNNNNYNNYYNYN", "NNNYYYYYYNYNYYYYYYNNYNNNNNYNNYNYYYNNNNYYNNYYYNNYNY", "YYYYNNYYNYNNNYYYNYYYNYNYYYNYNNNYYNNYNYYNYYNYYNNYYY", "NNYNYNNYYNYNNYNNNNNYNYYNNNNYYNNYNYNYYNYYNNYNYYYNYY", "YYNNYNNNYYNNYNYYYYYNNYYYNNNYNYNNNNNYNYYNNYNYYYNYNY", "YNYNYYYYNYNNYNNNNNYYNYYNYNNYYNYYYNYNYNNYNNYYYYYYYN", "NNNYNYNNNYYYNNYNNNNNYNYNNNYYYYNYYNYYYYNYNYYYYNYYYY", "NNNYYNYNYNYYYNYNNNYNNNYYYNYNYNYYYYNNYYNYYNNYNNYNNY", "NNYYYYYYYNYNYYNNYNNYNYYNNNNYYNNNYNNYNNYNNYNNYNNYYN", "YYNNYYYYNYYYNNNNYNYNYNYYYYNYYYYNNNNYYYNYYNYYNYYYYN", "NNNYYYNYNYYNYYNYYYYYYNYNYNYNYNNYYYYNNYNYYYYNNYNYNY", "YYNYYYNYNYNNYNYYNNNYNNYNYYNYNYNNNYNNYNNNNNYYNYYNYN", "YNNNNNNYYNYNNNYYNYYYNNYNYYNYNYNYNYYNYNNNNYNNYNNYYY", "YYYNNYNNNNYNYYYNNNNNYNYYYNYYYNNNNYYNNYNNYYYNYNNYYY", "YNYNYNNYYYYYNYYYYYNYNYYYYNYYYNNNNNNNNNYNYNYYNNNYNN", "YNYNYNNNNYYNYYNYYYYNYNYNNYYNNYYYYNYNYYNYNYYYYNNNYY", "YNNNNNYYNYNYYYNNYYNNNNYYNNYNYNNNNNNYNYNNNYNYNNNNYN", "NYNYNNNNYYNYYYYYNYNNYNYYNNYNNNNNYNYNYYNNNNYYYNNYYN", "NNYYNYYYYYNYYYYYYNNYNYNYNYYYYNYYYNNYYNNNYNYYNYNYYN", "YNYYYNNYYYYNNNYYYNYNYNNNYNYYNYNYYYNNYNYNNYYNYNYYNN", "NNNNYYNNYNNNYYNYYYNNYNNNNYNYYYYNNNNNNNNNNNNNNYYNYN", "YYNNNNNNNYYNYNYNNNNNNYYYNYNYYNNNNYNNYNNYYNYNNNYNYY", "YYNNNNYYNNYNNYYYYYYNNYNNYNNNNYYYNNYYNNNNNYYYYNNNYY", "NNNNNNNNNYNNNNNNYNNYYYYNNNNNNNYYNNYNNNNNYNNYYNYNYN", "NNYYNYYNYYNNNNNNNNNYYYYYNNNNYYNYYYNYNYYYNNYYNNYYNY", "YNNYYYYYNYNYYNNNNYNNYNNNNNNNNNNYNNYNYNYYYYNNNYNNNY", "YYYYNNNYNNNNYYYYNYYYYYNNNNNYYYNNNYYNYYNYYNYNNYYNNY", "NNYYYNYYNYYYNNYYNNNYYNYNYYNNNNYNYNNNNYYNNYNYYYNNYN", "NYNNNYNYYYYYYNYYNNYNYYNNNNYYYYYYNYYNNYYNYYYNYNYYNY", "NYNNNYNYNNNNYYYYNNNYYNNNNYYYYYYNNNNNNNNYNNYNNNNYNN", "YYNYNNNNNYYYNYNYYNNYYNNNYNNYNYNNYYNNYNNYNYYYNNYYNN", "YYYNYNNNNNYNYNYNNNNNYYYNYNYYYYNNYYYNYYYYYNNYNYYNYY", "NYYYYYNNYYYNNNNYYYYYNYYYYYYNNNNYYNNNYYNNNNNYNNNYYY", "YYYNYNYNYNNNYYYNNYNYYYYNNNYNYNYNNYYYYNNYNYNNNYYNNN", "YYYNNYNNNNNYNNNNNYNNNNNYYNNYYYYNYNNYYYYNYYYNNYNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> switches = {"NNNNNNNNNYNYYNNYNYNYYNNNNNNNNNYNNNNNNNNNNNNNNNNNNN", "NNNNNNYYYYYYYYYYYYYYYYYYYYNNNNNYNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYYYYYYYYYYYYYNNNYNNNNNNNNNNNNNNNNN", "NNNNNYNYNNYNYNYNNYNYNYNYNYNYYNNNNYNNNNNNNNNNNNNNNN", "NNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNYYYYYYYYYYYYYYYNNNYNNNNNNNNNNNNNN", "NNNNNNYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYNNNNNNNNNNNN", "NNNNNNNNNNNNYYYYYYYYYYYYYNNNNNNNNNNNYNYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYNYNNNNNNNNNN", "NNNNNNYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYYYYNNNNNNNN", "NNNNNNNNNNNNNNNYYYYYYNNNNNNNNNNNNNNNNNNYNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYYYYYYYYYYYYYYYYYYYYNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNYNNNNN", "NNNNNNNNYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNYNYNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNYNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNYNNNNYNYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNYNNYYY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 562949953421312;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> switches = {"YNNN", "NYNN", "YYNY", "YYYN", "YYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYYYNNNYNNNNYYYNNNNNYYYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNYYNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNYYYNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNYYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNYYYNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNYYYYNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627776;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> switches = {"N"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> switches = {"NNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> switches = {"YNYY", "YYYY", "NYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> switches = {"NYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842624;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> switches = {"NNYYNYYYYYNNNNNNNYNYNYYNYYNYYNNYNYNYNNNYNNYNNYNNNY", "NYYNNNNNNYYNYYYYYYYYYNYNYYYNNYNNYYYYYYNYYNYNNYYYNN", "NNNYYYNYNYNNYYYNNNNYYYNYNNNYNYYYNYYYNNNNNNNNNNNYNY", "YYYYNYYNYNYNYNYNNNYYNYYYYNYNYYNYNNYYYYNNYNYNNNYNNY", "NYNNYNNYYNYYYNNYNNNNNNYNYYYYYYYNNYNNYYYYYNYNYNNYYN", "YYYNYYYYNNNYYYNYYNNNNYYNNYYYNNNYNNNNYNYNYYNNYYNYNN", "YNYYNNYNNYNYYNNNNYNNNNYNNNNYYNYYNYYNYNYNNNNNYYYNNY", "NYYYNYYYNNNYNYYNYNNYYYNNYNYYYYNNYNYNNYYYYYYNNYNNYN", "NYNYYNYYNNYNNNNYNYNNNYNNNNYYYYYYNYNYYYNNNYYNNYYYNY", "NNYYYYNYYNNYYYNYYNYYYNYNYNNYYNYYNNNYNNNYNYYYNYNNNN", "YYYYYYNNNNNYYYYNYNYNYNYYNNNYYNNYNYNYNNNYYYNYNYNYNY", "YYNNYYYNYNNNNNYYNYNYNNNNNNNYYNNYYYYYNNYNNNNNNYNYNY", "YNNNNNNYYYNNYYNNNYNYYNYNYYNYNNNNYYNNYYYNYNYNNYYYNY", "YNNNYYNYNNYNNYNYYYNNYNYNNNNYYNNYNNNNNYNYNNNNNYYNYN", "YYNYNYYYNNYNNNYNYNNYYYNNNYYYYNNNNYYNYYNYNNNYYYNYNN", "NYNYNYYYNNYYYNYNNNNNYNNNYNNYNNNNNNYYYYNYYYYYNNYYYN", "YNNYNYNNYYNNNYYNYYNNNNNYYNYYNNYYYYYYNNYNYYNNNYYNYY", "YYYYYNNNYNNNNYYYYYNNYYYYNYNYNYYYNNNYYYYYYNNYNYNNYN", "NYYNYYYNNNYNYNNNNNYYNNYNYYNYNYYNNNNNNNYYNYNNNNYNYY", "YYNYYYYNNNNNYYNYNYYNNYNYNNYYYYNNYNNNNNYNYNYYNNYYYN", "NYNYNNYYYYYNNYYYNYNYNNYNYNNYNNYYYYNNNYYYYNYYYNYYYN", "YYNYNYNYYYNYNNYNYYNYYYYNYYYYNNNYYNYYYYYNYYYYNNYNYN", "YNYNYYNNYNYYYNYNNYNYYYYYYNYNNNNNNYYYNYNYNYNNYNYNNY", "NYNYNYYYNNNNNYNNYYYYNNYNYYYYYYNYYNNNNNNNNNYYNNYYNY", "NYNNNNYYYNYYYYYNYYYNNYYYYNYYYNYNNNNNYYNYNYYNYYYNYN", "YNNYYYNYNYYYNYNYYYNNNYNYNYNYYYYNYYYNYYNNNYNYYNYNYN", "YNNYNNYNYNYNNNNYYNYNYYNNNNNNYYYYNYNNYYYNYNNNNNNNYY", "YYYNYYNYNYNYYYYYYNYNNNYNNYYYYNNYNYNNNNYYNYYYYYNYYN", "YNNYYYYNYYYYNYNYYNNNNNNYYYNNYNNYYYNNYYNYYNNNNYYNYN", "YYYNNNYNNYYNYNNNNNYNYYYYYNYNNNYYYYNYNNYNYYYNNNYYNN", "YYYNYNYYYNYNYYYYNYYNYYNYNNYNNNYYYYNYNYNNNNYYNNYNNY", "YNNYYNNNYYNYYYNNNYYNNYYNNNNNYYYNNYYNNYYNNNNNYYYYNN", "NYNNYNNNYYNYYNYYYNNNNNNYNNYYYNNYYYNYYYNNYNNNYNNYYN", "YNNNNYYNYYNYYNYNNYNYNYYYYNNNNNYNNNNYYNNNNYNNYNNYYN", "NYNNYYNYNNYNYYYYNYYNYYNYNYNYNNYYYYYNYYNNYNYYNNNNYY", "NNNYYNYNYNYNYNNNNYNYYYNYYNYYNNNNNYNNNNNYNNNYYNNNYN", "YYYNNYYYNNYNYNYYNNNNNNYNNYYNYYNNNYNYYYNYNYNYYYNYYY", "YYYNYYYNNYNYYNNYNYNYNYNNYYNYNYNYYYYYNYYYNNNNNYNNNN", "NNYNNNNYNNYYYYNNYYNYNNYNYYNYNYYYNNNYNNNYNYYNNYNYNN", "NYYNNNNNNYNNYNNYYYYNYYNNYYNNNYNNNNNNNNYNNYYNNNNYNY", "YYYNNYYYNYYNNYYNYNNYYYNNNYYNYNNNNYYYNYYYNNYNYYYNYN", "NYYNNNNYNYNYNNNNYNYNNYYYNNYYNYYNNNYYYNNNYNNNNNNNYN", "NNYYNNNNNYYYYNNYNNNYNNYNYNNYNNNYYYYNYYNYYNNYNYNYYY", "YNNNNNNYNNYNNNYNYNYYYNYNNYNNYNNYNNYNYNYNNNNYNYYYNN", "NNYNYNYNNYYNYNYYNYNYYYYNNYNYYNYYYNNNNNYNYYNNNYYNYN", "YNYYNYYYNYNNYNYNNNNYYNYNNNYYNYYYYNYNYNYYYYNYYNNNNY", "YYYYYNNYYNNYYNNNNYNNNYYNNYYYYNNYNYYNNYNNYNNNYYNYNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355328;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> switches = {"YNNNN", "NNYYY", "NNNYY", "NNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> switches = {"NNNNYN", "NNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> switches = {"YNNN", "NNYY", "NNYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> switches = {"YNNN", "NYYY", "NYYY", "NYYY", "NYYY", "NYYY", "NYYY", "NYYY", "NYYY", "NYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> switches = {"YYYNNNYYYNNNYYYYNYYYYYNNYYNNYYNNNYYNNNNNYYYNYNNNNY", "YYNYNYYNNNNYNNYNYNNYNYNNYYNYYYNYYNNYNYYYYYNYNNNNNY", "NNNYYYNNYNNNNYNYNYYYYNNYNNNYNYYYYYNNYNNYNYYNYNYYYY", "YYYNNYNNNYYYYNNYNNYYYNNNNNNYYYNNNYNNYYNNYNYYNNYNNY", "NYNNYYYYNYNYNNNNNYYNYYYYYYNNYNNNNYNNYNNYNNYYNYNYYN", "YYNYNNNYYYNYYYYYYYNYNNNYYNNNYNNNNNNNYYYYNNYNNNNYYY", "YNNYYNYYYYNYNYNNNYYNNYNYYYNYNNYYNNNNNYNYYNYYNYYNNY", "YNYNNYYYYYYNNNNNYNNNNNNNNYNYNYNYYNYNNYNNNNYNYYYNNN", "YNNYNNYYNYNNNNYNNYNYNYNYYNYNNNYNNNNNYNYNNYYNYYNYYN", "NNYNYYNYYYNNNNNYYNNYYNYNNNYNYYNNNNYYYYNYNYNYYYYNNY", "NNYNYNNNYYNYNYYNNNYNNYNNNYYNNNYNNNYNYNNYNNNNYNYNYY", "YNYYNNNYYNYNNNNYYNYYYYNNNNNNNYNNYNNNNYNNYYYYNNYNNN", "NNNNNYNNYNNNNYNNNYYNNNNNNNNNNYYNYYNYNNYYYNNNNNYYNN", "YNYNYYNNNNNYYNNNYNNYYNYYNNYNYYYYYNNNNYNNNNNNYYNNYN", "NYNNYYNYNNYNNNNYYYNNYYNNYYNNNYNNYYYNNNYYYNYYYYYYNY", "NYNNYNYNNNYYYYNYYNNYNNNNNYYYYNYNNNNYYNYNNYYYYYYYYN", "NYYNYNNYNNNYYYYYYNNYYYYYNYNYNYNYYNYNYNYNNYNYYNNNNY", "YYYYNYNNNYNNNNNYNYNNYNYYYYNNYYNYNNNNYNNNNNNYYNYNYN", "YNNNNYNYNYNYNYNYNNNNYYNYNYNNYYNYYYYNYNNYNYYYYYNYNN", "YNYNNYNNYNNNYYNNNNYYYNYNYNNNNNNNNNYNYYNYNNNNYNYNYN", "NYYYNNYYNNYNNNYYNNNNYNYNNNYNYNNNYNYNYNYNYNYYNYNYYY", "YNNNYNYYNYNYYYYYNYNNNNYYNYYNNNNYNYYNNNNYYYNNNNNYYN", "NNNNYYNNYYYYNYYYNYYYNYNYYNNYNYYNNNYYNYNNYYYNNNYNNN", "NYYYNNYNYYYNNYYNNYNYYNYYYYYYYYNNYNNYNYYYYYNYYYNNYY", "YNYNNYYNNNYNYYNNYYYYNNYNNYYYNNNYNYNYYNNNYNYNNYNNYN", "YNYNNNYYNNNNYYNYYNNNYYNYNNNYYYNYNNNYNYYYNNYNYYNNNN", "YYNNNNYYNNNNNNNYYYYNYNNNYYYNNYNNYYNYYNNNNYYNYNNYYY", "NYNYYNYYYNYYNNNYYYYNYYNYNYYNNYYNNYYNNYYYNNYNNYYNNN", "NNYYNYNYYYNNNYYNNYYNNYYYYNNYNYNNNNYYYNYNNYNYNYYYYN", "NYYNYYYYNNYNYNNNNYYNYYYYNNNNNYNNNYNYNNNYNNYNNNYNNY", "NYYYYYYNYNNNNNYNYYNYNYNNNNYNYNYYYNNYNNYNYYYYYYNNYY", "YNNYYYNYNYYNNNYNYYYYYNNYYYNNNNNYYNYNYNYYYYNYYNYYYY", "YYYYNYNNNYYYYNNNNNNNNNNNNNNNYNNNYYYNYNYNNYNYYYYYYY", "YYNYYYNYYYYNYNYNYYNNNYNNYNYYYNNNNNNYYYYYNYYYYYNYYN", "NNYYYYNNNYYYYYYYYNYNNNNNYYNYNNYNNNYNNYYYYNNNYNNYYN", "YNYNNNYNNYYNYYNYYYNNNYNYNNYNNYYYNNYNNYNYNYYYYNNNYY", "YYNNNNYYYNNYYNYNYNNYYYNNYNYNNNNNNNYYNYYYNYNYNNNYNY", "NYNYYNYNNNYYNNNNNNYYNYYYYYYNNNNYYNNNNYNNYNYYNNYYNN", "YYYNNYNNYYNNNNYNYNYYYNNNNYYYNNNYNNYNNYYNNYNNNNYYNN", "NNYNNNYYYYNNNYNNNNNYYNNNNYNNYYYYNYNYYYNNNYYYYNNNYN", "YNYNYNYYNNNYYYYYYYYNYYNYYYYNNNYNYNYNYNYNNYYYYNYNYY", "YYNNYNYNNYNYNNYYYNYNNYNYNYNYYYNNYNNNNNNNNYYYYNNYYN", "YNNNYNYYYNYYYNNNNYYNYNNYNYYNYYNYNNNYNYNNYYNYYYYNNN", "NYNYNYYYYNYYYYYNNYNYNNNNYYNYYNNNNNNNNNNNYYNNYNYNNY", "NNNNNNNYYNNNNYYNYYYYYYYYYYYYYYNYNNNNNNNNYYYYYNYNYY", "YNYYYNYYNNYYNYNNNNYYNYYYNNNYYNNNNYNYYNYYNYNNNNYNYY", "NYNNYNNNYNNYNYYNNYNYYYNNNYNNNYYNYYYYNYNYNYYNYNNNNN", "NNNYNNYYYNYYYYNYNYYYYYNNYNYNYYNNNYYYNNNYNNNYYNNYNN", "NYNNYNYNNNYYYNYYNYYNYYYNNYYNNYYYYYYYYYYNYNYNNYYNYY", "NNYNYYYNYNYYYNYNNYNYNNYNYNNYYNNNYYNNNNYYNYYYYNYNYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 35184372088832;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> switches = {"YYNN", "NYYN", "NNYY", "YNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> switches = {"YYY", "NYY", "NNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> switches = {"NNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> switches = {"NNNYYY", "NNNYYN", "NNNNNY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> switches = {"YYYYYNYYYYYYYYNYYYYYYNYYYYYYYYYYYNYYYYYYYNYYYYYYYY", "NYNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNN", "NNNYNYYYYYYYYYNNNNNNNNNNNNNNYNNNNNNNYNNNNYNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNYNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNYNNNNNNNNYYYYYYYYYNNNNNNN", "NNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNN", "NNNNNNNNNYYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNYNNNNNNNNNNNNNYNNNNNYNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYYYYNNNNNNYNNYNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNYNNNNNYNNNNYNNNNYNNNNNNNNN", "NNNNYNNNNNNNNNYYYYYYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNYNNNNNNNNNN", "NNNNNNNYNNNNNNNNYNNNNNNNNNNNNNNNNNYNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNYNNN", "NNNNNNNNYNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNYYYYYNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNYNNNNYNNNNNNNNNNNNNNNNYNNNNNNNNNNNYNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNYYYYYNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNYNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNYYYYNNNNNNNYNNNNNNNNNNYYYYYYYYYY"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> switches = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNYNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNNNYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YNNNNNNNNYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    LightSwitches* pObj = new LightSwitches();
    clock_t start = clock();
    long result = pObj->countPossibleConfigurations(switches);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741824;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=9986&pm=6407
********************************************************************************
# include <algorithm> 
# include <bitset> 
# include <cassert> 
# include <cctype> 
# include <cmath> 
# include <complex> 
# include <cstdio> 
# include <cstdlib> 
# include <cstring> 
# include <ctime> 
# include <deque> 
# include <functional> 
# include <iostream> 
# include <iterator> 
# include <list> 
# include <map> 
# include <numeric> 
# include <queue> 
# include <set> 
# include <sstream> 
# include <stack> 
# include <string> 
# include <valarray> 
# include <vector> 
# include <utility> 
 
using namespace std ; 
 
// Types 
typedef long double ld ; 
typedef long long ll ; 
typedef pair < int , int > pii ; 
typedef vector < int > vi ; 
typedef vector < pii > vp ; 
typedef vector < ld > vd ; 
typedef vector < string > vs ; 
typedef vector < bool > vb ; 
typedef queue < pii > qp ; 
typedef map < string , int > msi ; 
 
// Constants 
const int INF = 1000000000 ; 
const ld EPS = 1e-10L ; 
const ld PI = 3.14159265358979L ; 
 
class LightSwitches 
{ 
// Global 
 
// Functions 
public : 
  long long countPossibleConfigurations ( vector <string> s) 
  { 
    long long res ; 
    int n = s.size(); 
    int m = s[0].length(); 
    vector <vi> mat = vector <vi> (n, vi(m)); 
    for (int i = 0; i < n; ++ i) 
    { 
      for (int j = 0; j < m; ++ j) 
      { 
        if (s[i][j] == 'Y') 
          mat[i][j] = 1; 
        else 
          mat[i][j] = 0; 
      } 
    } 
    int rk = 0; 
    for (int i = 0; i < m; ++ i) 
    { 
      bool bad = true; 
      for (int j = 0; j < mat.size(); ++ j) 
      { 
        if (mat[j][i] == 1) 
        { 
          swap(mat[j], mat.back()); 
          bad = false; 
          break; 
        } 
      } 
      if (bad) 
        continue; 
      ++ rk; 
      for (int j = 0; j < mat.size() - 1; ++ j) 
      { 
        if (mat[j][i] == 1) 
        { 
          for (int k = i; k < m; ++ k) 
            mat[j][k] = (mat[j][k] + mat.back()[k]) & 1; 
        } 
      } 
      mat.pop_back(); 
    } 
    res = 1; 
    for (int i = 0; i < rk; ++ i) 
      res *= 2; 
    return res ; 
  } 
   
 
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/