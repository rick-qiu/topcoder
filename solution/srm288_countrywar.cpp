/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6068
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

class CountryWar {
public:
    double defeatAll(vector<string> armies);
};

double CountryWar::defeatAll(vector<string> armies) {
    double ret;
    return ret;
}


int test0() {
    vector<string> armies = {"Y 1 1", "E 1 0"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> armies = {"Y 2 1", "E 1 0"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7142857142857142;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> armies = {"Y 1 1", "E 1 0 2", "N 1 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> armies = {"Y 1 1", "N 1 0 2", "E 1 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> armies = {"Y 2 1 2", "E 2 0 2", "E 1 0 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16250944822373392;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> armies = {"Y 1", "E 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> armies = {"Y 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> armies = {"E 7 1 2", "Y 10 0 3", "N 6 0 3", "E 9 1 2"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.027444427309771955;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> armies = {"Y 18 3", "N 17", "E 10", "E 17 0"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> armies = {"Y 20 1 2", "N 18 0", "N 7 0"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> armies = {"N 17", "Y 8", "N 12"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> armies = {"E 4 1", "N 4 0 2", "Y 10 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8759804764948739;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> armies = {"Y 19 1 4 5 8 9 10", "E 19 0 2 3 5 9 10", "N 6 1 3 4 5 7", "E 13 1 2 5 6 8 9", "E 7 0 2 5 7 8 9 10", "E 14 0 1 2 3 4 6 7 8 10", "N 1 3 5 8 9", "E 19 2 4 5 8 9", "E 15 0 3 4 5 6 7 10", "N 17 0 1 3 4 6 7", "E 15 0 1 4 5 8"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.682103317342331E-16;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> armies = {"N 8 7", "Y 8 2 3 4 5 7", "E 10 1 3 4 7", "E 16 1 2 4", "E 2 1 2 3 5 6 7", "N 2 1 4 6", "N 20 4 5 7", "E 15 0 1 2 4 6"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 8.091710492134139E-17;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> armies = {"N 19 3 4 6 7", "E 10 2 3 4 5 6", "E 14 1 5 6 7", "Y 9 0 1 4 5 6", "N 5 0 1 3 5 6", "E 15 1 2 3 4 6 7", "E 6 0 1 2 3 4 5 7", "E 1 0 2 5 6"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 3.315076455269454E-14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> armies = {"N 4 4 5 6 9 11 14", "E 14 6 7 9 11 12", "N 5 3 6 7 8 12 13 14", "E 20 2 4 5 6 9 11 12 13", "Y 5 0 3 6 7 8 10 11 12", "E 4 0 3 6 8 10 11 12 14", "N 17 0 1 2 3 4 5 10 11 14", "E 2 1 2 4 8 13", "N 19 2 4 5 7 9", "E 8 0 1 3 8 13", "N 20 4 5 6 11 13", "E 5 0 1 3 4 5 6 10 12 14", "E 19 1 2 3 4 5 11", "N 3 2 3 7 9 10", "N 9 0 2 5 6 11"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 7.559915469674757E-46;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> armies = {"Y 1 1 3 5", "E 5 0 2 3 4 5", "N 4 1 5", "E 3 0 1 5", "E 11 1 5", "E 11 0 1 2 3 4"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1293851661951016E-41;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> armies = {"E 20 1 2", "N 10 0 2 3", "N 13 0 1 3", "Y 9 1 2"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.401576164119485E-12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> armies = {"N 6 1", "Y 15 0", "E 20"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> armies = {"E 8 1", "Y 14 0", "N 7"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8844956087369756;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> armies = {"E 12 1 3 4 5 7 10", "E 2 0 2 4 10 11", "E 1 1 4 5 6 7 9 10 11", "N 10 0 7 8", "Y 17 0 1 2 8 10 11", "E 4 0 2 6 7 9 10 11", "E 12 2 5 7 8 9", "N 6 0 2 3 5 6 8 9 10 11", "E 3 3 4 6 7 9", "E 4 2 5 6 7 8 11", "E 11 0 1 2 4 5 7 11", "N 14 1 2 4 5 7 9 10"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010592127582047704;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> armies = {"Y 17 1", "E 17 0"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05018254552689498;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> armies = {"N 9 1 2 3 4 5 6", "E 1 0 2 3", "Y 17 0 1 3 4 5", "N 1 0 1 2", "N 1 0 2 6", "N 14 0 2 6", "E 9 0 4 5"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.948266932318167;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> armies = {"E 19 1 2 5 6 7 8 9", "N 11 0 2 5 6 8 9", "N 9 0 1 5 9", "E 17 8", "N 18 6 7 8 9", "E 19 0 1 2 8 9", "E 12 0 1 4 9", "N 14 0 4", "Y 6 0 1 3 4 5 9", "E 6 0 1 2 4 5 6 8"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 5.24202991486262E-44;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> armies = {"E 15 2 7", "E 3 3 6", "E 18 0 3 7", "E 17 1 2 4 5 6 7 8", "E 14 3 5 9", "N 18 3 4 9", "N 1 1 3 7 9", "Y 3 0 2 3 6", "E 3 3 9", "N 9 4 5 6 8"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.53618733210143E-66;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> armies = {"Y 1 3 8", "E 16 4 7", "N 20 4 5 6 9", "E 5 0 4 5 9", "E 19 1 2 3 5 6", "E 6 2 3 4 7", "N 17 2 4 8", "N 4 1 5", "N 7 0 6 9", "E 16 2 3 8"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 3.70997244225148E-105;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> armies = {"Y 10 2 3", "E 4 2 3", "N 8 0 1", "N 1 0 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9798759177930416;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> armies = {"N 15", "Y 10"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> armies = {"N 7 3", "Y 9 3 4", "N 7 3 4", "N 19 0 1 2", "N 18 1 2"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
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
    vector<string> armies = {"E 7 1 4", "E 19 0", "E 8 3", "Y 19 2 4", "N 6 0 3"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002151549785978612;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> armies = {"E 1 1 2 8 10", "E 6 0 3 4 6 8", "N 16 0 3 7 8 9 12", "E 7 1 2 4 6 11 12", "Y 20 1 3 12", "N 8 8 11", "N 3 1 3 9 10", "E 20 2 11 12", "N 17 0 1 2 5 9 12", "E 1 2 6 8 11 12", "E 11 0 6 11 12", "N 2 3 5 7 9 10", "N 6 2 3 4 7 8 9 10"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.593380834240409E-4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> armies = {"E 8 1 2", "E 5 0 2 3 4", "Y 12 0 1 3 4", "N 4 1 2 4", "E 1 1 2 3"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43887504112460807;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> armies = {"N 14 2 4", "N 14 2 3 4", "Y 16 0 1 3 4", "N 3 1 2", "E 14 0 1 2"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20446282112362146;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> armies = {"Y 6"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> armies = {"E 3 1 3 4 5", "N 2 0 5", "N 16 3 5", "Y 1 0 2 4 5", "N 17 0 3 5", "N 16 0 1 2 3 4"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003663003663003663;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> armies = {"E 11 4 5 7 10", "N 7 2 4 5 7 9 10", "N 2 1", "E 4 5 8 9 10", "E 9 0 1 6 7 8", "E 6 0 1 3 6 8 9", "E 9 4 5 9", "N 15 0 1 4 8 10", "E 10 3 4 5 7", "E 18 1 3 5 6", "Y 5 0 1 3 7"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.8404388130697035E-35;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> armies = {"E 6 1 3 4 5 7 8 9 10 11 13 14", "E 13 0 2 3 4 5 6 9 10 12 13 14", "N 13 1 3 4 5 6 7 8 9 10 12 14", "E 9 0 1 2 4 5 7 8 9 10 11 12 13 14", "N 6 0 1 2 3 5 6 8 9 10 11 13", "N 9 0 1 2 3 4 6 8 10 11 12 13 14", "Y 19 1 2 4 5 7 8 10 11 12 14", "N 6 0 2 3 6 8 9 10 11 12 13 14", "N 8 0 2 3 4 5 6 7 9 10 11 12 13 14", "N 14 0 1 2 3 4 7 8 10 11 12 13 14", "N 14 0 1 2 3 4 5 6 7 8 9 11 12 13 14", "N 11 0 3 4 5 6 7 8 9 10 13 14", "N 12 1 2 3 5 6 7 8 9 10 14", "N 13 0 1 3 4 5 7 8 9 10 11 14", "E 12 0 1 2 3 5 6 7 8 9 10 11 12 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015814085721674892;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> armies = {"E 15 1 2 4 5 6 8 11 13 14", "N 12 0 5 6 7 9 10 11 13 14", "N 6 0 3 4 5 6 7 8 9 10 11 12 14", "N 9 2 4 5 6 7 10 11 12 13 14", "N 9 0 2 3 5 6 7 8 9 10 11 12 13 14", "N 10 0 1 2 3 4 6 8 9 10 11 12 13 14", "N 6 0 1 2 3 4 5 8 9 11 12 13", "E 11 1 2 3 4 8 9 10 11 12 13 14", "N 10 0 2 4 5 6 7 10 11 12 13 14", "N 13 1 2 4 5 6 7 11 13 14", "E 8 1 2 3 4 5 7 8 11 12 14", "Y 19 0 1 2 3 4 5 6 7 8 9 10 12 13", "N 10 2 3 4 5 6 7 8 10 11 14", "N 6 0 1 3 4 5 6 7 8 9 11", "E 9 0 1 2 3 4 5 7 8 9 10 12"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004049511865108801;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> armies = {"E 6 1 2 3 5 6 7 8 9 10 11 12 14", "E 15 0 2 3 4 5 7 8 9 10 11 13 14", "E 12 0 1 3 4 5 6 7 10 12 13 14", "N 14 0 1 2 4 5 7 8 9 10 11 12 13 14", "E 6 1 2 3 5 6 7 9 10 11 12 13 14", "N 7 0 1 2 3 4 6 7 8 9 10 11 12 13 14", "Y 18 0 2 4 5 7 8 9 10 11 12 14", "E 6 0 1 2 3 4 5 6 8 9 10 11 12 13 14", "N 12 0 1 3 5 6 7 9 11 12 13 14", "N 13 0 1 3 4 5 6 7 8 11 13", "E 15 0 1 2 3 4 5 6 7 11 12 14", "E 7 0 1 3 4 5 6 7 8 9 10 12 13 14", "E 8 0 2 3 4 5 6 7 8 10 11 13 14", "E 11 1 2 3 4 5 7 8 9 11 12 14", "N 10 0 1 2 3 4 5 6 7 8 10 11 12 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 3.728465258854165E-9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> armies = {"N 14 1 5 6 7 8 9 10 11 12 13 14", "E 11 0 3 4 5 7 9 11 13", "E 12 3 4 5 6 7 8 9 11 12 14", "N 10 1 2 4 5 6 8 9 10 11 12 13 14", "N 15 1 2 3 5 6 7 8 9 10 12 13 14", "N 12 0 1 2 3 4 6 8 9 10 11 12 14", "N 9 0 2 3 4 5 7 8 9 10 11 12 13 14", "E 14 0 1 2 4 6 8 9 10 11 12", "E 6 0 2 3 4 5 6 7 9 10 11 12 13", "N 15 0 1 2 3 4 5 6 7 8 10 11 13 14", "N 10 0 3 4 5 6 7 8 9 11 12 13 14", "E 13 0 1 2 3 5 6 7 8 9 10 12 13", "Y 18 0 2 3 4 5 6 7 8 10 11 13 14", "E 13 0 1 3 4 6 8 9 10 11 12", "N 11 0 2 3 4 5 6 9 10 12"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 7.527822068321222E-8;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> armies = {"E 10 2 4 5 9 10 11 12 13 14", "E 7 2 3 4 5 7 8 9 10 11 12 13 14", "E 9 0 1 3 4 5 6 7 8 10 11 14", "N 9 1 2 4 5 6 7 9 10 11 12 13 14", "E 13 0 1 2 3 5 6 7 9 10 11 14", "E 6 0 1 2 3 4 6 7 8 9 10 14", "E 10 2 3 4 5 7 8 10 11 12 13", "N 6 1 2 3 4 5 6 8 9 10 11 12 13 14", "Y 20 1 2 5 6 7 9 10 11 12 13 14", "N 10 0 1 3 4 5 7 8 11 12 14", "N 12 0 1 2 3 4 5 6 7 8 11 12 14", "N 13 0 1 2 3 4 6 7 8 9 10 12 13 14", "N 13 0 1 3 6 7 8 9 10 11 13 14", "E 14 0 1 3 6 7 8 11 12 14", "E 7 0 1 2 3 4 5 7 8 9 10 11 12 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4242148792105115E-5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> armies = {"N 11 2 3 5 7 8 9 10 11 12 14", "E 9 2 3 4 5 6 7 8 9 11 12 13", "E 11 0 1 3 4 5 6 7 8 9 10 11 12 13", "Y 17 0 1 2 4 5 6 7 8 9 11 12 13 14", "N 13 1 2 3 5 6 7 9 11 12 14", "N 15 0 1 2 3 4 6 7 8 9 11 12 13", "N 10 1 2 3 4 5 7 8 9 10 12 13 14", "E 6 0 1 2 3 4 5 6 9 10 11 12 13 14", "E 12 0 1 2 3 5 6 9 10 11 12 13 14", "N 6 0 1 2 3 4 5 6 7 8 10 12 14", "N 13 0 2 6 7 8 9 11 12 13 14", "N 10 0 1 2 3 4 5 7 8 10 12 13", "N 9 0 1 2 3 4 5 6 7 8 9 10 11 13 14", "E 8 1 2 3 5 6 7 8 10 11 12", "E 15 0 3 4 6 7 8 9 10 12"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.7230751571557559E-6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> armies = {"N 7 1 2 3 5 6 7 8 9 10 11 12 13 14", "N 10 0 2 4 5 6 7 8 9 10 11 13 14", "N 15 0 1 3 5 6 7 8 9 11 12 13 14", "N 8 0 2 4 5 6 7 8 9 10 12 13 14", "E 13 1 3 5 7 8 10 12 13 14", "N 6 0 1 2 3 4 6 7 8 10 11 12 13 14", "E 11 0 1 2 3 5 7 8 9 10 11 12 13 14", "N 7 0 1 2 3 4 5 6 8 9 11 12 13", "N 10 0 1 2 3 4 5 6 7 9 10 11 13 14", "E 10 0 1 2 3 6 7 8 10 12 13", "E 15 0 1 3 4 5 6 8 9 12 14", "E 12 0 1 2 5 6 7 8 12 13", "E 15 0 2 3 4 5 6 7 9 10 11 13 14", "E 8 0 1 2 3 4 5 6 7 8 9 11 12", "Y 20 0 1 2 3 4 5 6 8 10 12"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.160491744188715E-8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> armies = {"E 8 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "N 10 0 2 3 5 6 7 8 9 10 11 12 13 14", "N 13 0 1 3 4 5 6 10 11 12 13 14", "Y 18 0 1 2 4 5 6 7 8 9 10 11 12 13 14", "E 11 0 2 3 5 7 8 10 12 13 14", "E 8 0 1 2 3 4 7 10 11 12 13 14", "E 13 0 1 2 3 7 8 10 12 14", "E 10 0 1 3 4 5 6 8 9 10 11 12 14", "N 6 0 1 3 4 6 7 10 11 12 14", "E 13 0 1 3 7 10 11 12 13 14", "N 9 0 1 2 3 4 5 6 7 8 9 11 12 13", "N 12 0 1 2 3 5 7 8 9 10 12", "N 14 0 1 2 3 4 5 6 7 8 9 10 11 13 14", "E 10 0 1 2 3 4 5 9 10 12 14", "E 12 0 1 2 3 4 5 6 7 8 9 12 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 3.815840575694378E-9;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> armies = {"E 11 1 2 3 4 5 7 8 9 10 11 12 14", "E 12 0 2 3 4 5 6 7 8 9 10 12 14", "N 14 0 1 4 5 6 7 9 11 13 14", "Y 18 0 1 4 7 8 9 10 11 12", "E 7 0 1 2 3 5 6 7 8 10 11 13 14", "E 11 0 1 2 4 6 7 8 9 10 11 13 14", "N 15 1 2 4 5 8 9 10 11 12 13 14", "E 15 0 1 2 3 4 5 8 9 12 13", "N 9 0 1 3 4 5 6 7 9 10 13 14", "E 11 0 1 2 3 5 6 7 8 10 11 13 14", "E 14 0 1 3 4 5 6 8 9 11 12 13 14", "N 7 0 2 3 4 5 6 9 10 12 13 14", "N 15 0 1 3 6 7 10 11 13", "N 12 2 4 5 6 7 8 9 10 11 12 14", "E 13 0 1 2 4 5 6 8 9 10 11 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 4.681969972206963E-12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> armies = {"E 6 1 2 3 4 5 6 7 8 9 10 11 12 13", "E 7 0 2 3 4 5 6 7 8 9 10 11 12 13 14", "N 12 0 1 4 5 6 7 8 9 10 11 12 14", "N 8 0 1 4 5 6 7 8 9 10 11 12 13 14", "N 6 0 1 2 3 5 6 7 8 9 10 11 12 13 14", "E 14 0 1 2 3 4 6 7 8 11 12 13 14", "E 14 0 1 2 3 4 5 7 9 10 11 12 13 14", "Y 19 0 1 2 3 4 5 6 9 10 11 12 13 14", "E 12 0 1 2 3 4 5 10 11 13 14", "N 7 0 1 2 3 4 6 7 10 11 12 13", "N 15 0 1 2 3 4 6 7 8 9 12 13 14", "N 9 0 1 2 3 4 5 6 7 8 9 14", "E 8 0 1 2 3 4 5 6 7 9 10 14", "N 14 0 1 3 4 5 6 7 8 9 10", "E 12 1 2 3 4 5 6 7 8 10 11 12"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 6.809771323489816E-7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> armies = {"Y 20 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4063833421667312E-65;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> armies = {"Y 3 1", "E 1 0 2", "E 2 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4469662462722035;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> armies = {"Y 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4063833421667312E-65;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> armies = {"N 4 0 4 5 6 9 11 14", "E 14 6 7 9 11 12", "N 5 2 3 6 7 8 12 13 14", "E 20 2 4 5 6 9 11 12 13", "Y 5 0 3 6 7 8 10 11 12", "E 4 0 3 6 8 10 11 12 14", "N 17 0 1 2 3 4 5 10 11 14", "E 2 1 2 4 8 13", "N 19 2 4 5 7 9", "E 8 0 1 3 8 13", "N 20 4 5 6 11 13", "E 5 0 1 3 4 5 6 10 12 14", "E 19 1 2 3 4 5 11", "N 3 2 3 7 9 10", "N 9 0 2 5 6 11"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 7.559915469674757E-46;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> armies = {"Y 1 1", "N 1 0 2", "E 1 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1111111111111111;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> armies = {"E 2 1 2 3 4 5 6 7 8 9 10 11 12 13", "E 3 0 2 3 4 5 6 7 8 9 10 11 12 13", "E 4 0 1 3 4 5 6 7 8 9 10 11 12 13", "E 5 0 1 2 4 5 6 7 8 9 10 11 12 13", "E 6 0 1 2 3 5 6 7 8 9 10 11 12 13", "E 7 0 1 2 3 4 6 7 8 9 10 11 12 13", "E 8 0 1 2 3 4 5 7 8 9 10 11 12 13", "Y 20 0 1 2 3 4 5 6 8 9 10 11 12 13", "E 9 0 1 2 3 4 5 6 7 9 10 11 12 13", "E 1 0 1 2 3 4 5 6 7 8 10 11 12 13", "N 10 0 1 2 3 4 5 6 7 8 9 11 12 13", "E 1 0 1 2 3 4 5 6 7 8 9 10 12 13", "E 1 0 1 2 3 4 5 6 7 8 9 10 11 13", "N 20 0 1 2 3 4 5 6 7 8 9 10 11 12 14", "E 1 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4034606690012464E-4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> armies = {"Y 20 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 3 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 4 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 5 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 6 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 7 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 8 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 9 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 10 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 11 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 12 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 13 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 14", "E 20 0 1 2 3 4 5 6 7 8 9 10 11 12 13"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4063833421667312E-65;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> armies = {"Y 19 1 2", "N 3 0 3", "N 4 0 3 4", "E 7 1 2", "E 11 2"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6799973861106663;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> armies = {"Y 15 1 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 1 0 2 3 4 5 6 7 8 9 10 11 12 13 14", "E 1 1 0 3 4 5 6 7 8 9 10 11 12 13 14", "E 1 0 2 1 4 5 6 7 8 9 10 11 12 13 14", "E 1 0 2 3 1 5 6 7 8 9 10 11 12 13 14", "E 1 0 2 3 4 1 6 7 8 9 10 11 12 13 14", "E 1 0 2 3 4 5 1 7 8 9 10 11 12 13 14", "E 1 0 2 3 4 5 6 1 8 9 10 11 12 13 14", "E 1 0 2 3 4 5 6 7 1 9 10 11 12 13 14", "E 1 0 2 3 4 5 6 7 8 1 10 11 12 13 14", "E 1 0 2 3 4 5 6 7 8 9 1 11 12 13 14", "E 1 0 2 3 4 5 6 7 8 9 10 1 12 13 14", "E 1 0 2 3 4 5 6 7 8 9 10 11 1 13 14", "E 1 0 2 3 4 5 6 7 8 9 10 11 12 1 14", "E 1 0 2 3 4 5 6 7 8 9 10 11 12 13 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999988656062058;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> armies = {"Y 20 3 7 12 0", "E 4 1 2 9", "E 7 1 2 5 6 10 11 12", "N 4 0 3 5 10 11 12", "N 6 4", "E 11 2 3 5 10", "N 14 2 6 10 11", "E 5 0 7 13", "E 3 8 11", "E 12 1 9 11 14", "E 3 2 3 5 6 10", "E 10 2 3 6 8 9 11 13", "N 10 0 2 3 12", "E 7 7 11 13", "N 15 9 14"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005824533640767252;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> armies = {"Y 1", "E 1 1"};
    CountryWar* pObj = new CountryWar();
    clock_t start = clock();
    double result = pObj->defeatAll(armies);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9809&pm=6068
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define CLEAR(t) memset((t),0,sizeof(t))
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
double prob[24][24];
double konec[24][24][24];
double memo[24][33000];
 
int units[64];
int type[64];
int neighbors[64];
int N;
int start, finish, mamstart;
 
double solve(int u, int moje) {
  if (u<=0) return 0.0;
  if ((moje & finish) == finish) return 1.0;
  double &res = memo[u][moje];
  if (res >= 0) return res;
 
  res = 0.0;
  int cango = 0;
  REP(i,N) if (moje & (1<<i)) cango |= neighbors[i];
  cango &= (~moje);
  REP(i,N) if (cango & (1<<i)) {
    double toto = 0.0;
    // calculate the chance of winning this way
    FOR(ostane,1,u) toto += konec[ u ][ units[i] ][ ostane ] * solve(ostane,moje | (1<<i));
    res = max(res,toto);
  }
  return res;
}
 
class CountryWar {
public:
  double defeatAll(vector <string> armies) {
    REP(i,24) REP(j,24) if (i+j) prob[i][j] = double(i*i) / double(i*i + i*j + j*j);
    REP(a,24) REP(b,24) FOR(c,1,a) {
      konec[a][b][c] = 0.0;
      if (b==0 && a==c) { konec[a][b][c]=1.0; continue; }
      if (a==0 || b==0) continue;
      konec[a][b][c] = prob[a][b] * konec[a][b-1][c] + (1-prob[a][b]) * konec[a-1][b][c];
    }
    REP(i,24) REP(j,33000) memo[i][j]=-1.0;
    
    N = SIZE(armies);
    CLEAR(neighbors);
    
    start = finish = mamstart = 0;
    
    REP(i,N) {
      stringstream SS(armies[i]);
      char ch;
      SS >> ch >> units[i];
      if (ch == 'Y') { start |= (1<<i); mamstart += units[i]; }
      if (ch == 'E') finish |= (1<<i);
      int x;
      while (SS >> x) neighbors[i] |= (1<<x);
    }
    return solve(mamstart,start);
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/