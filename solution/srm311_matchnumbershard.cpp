/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6591
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

class MatchNumbersHard {
public:
    vector<string> maxNumber(vector<string> matches, string n);
};

vector<string> MatchNumbersHard::maxNumber(vector<string> matches, string n) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> matches = {"6", "7", "8"};
    string n = "21";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "210", "210"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> matches = {"1", "7", "8"};
    string n = "21";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"15", "100000000000000", "100000000000000"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> matches = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    string n = "923372036854775807";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"923372036854775807", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> matches = {"1", "923372036854775807"};
    string n = "923372036854775807";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> matches = {"1", "923372036854775806"};
    string n = "923372036854775807";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "10", "10"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> matches = {"1", "5", "10"};
    string n = "10";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "100000", "100000"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> matches = {"1", "923372036854775807"};
    string n = "923372036854775806";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> matches = {"923372036854775807", "50", "60"};
    string n = "2760";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"55", "21111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> matches = {"923372036854775807", "50", "60"};
    string n = "2010";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"40", "2111111111111111111111111111111111111111", "2111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> matches = {"1", "10"};
    string n = "1000000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999991", "10000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> matches = {"1000000000000000", "1000000000000010", "1000000000000100", "1000000000001000", "1000000000010000", "1000000000100000", "1000000001000000", "1000000010000000", "1000000100000000", "1000001000000000"};
    string n = "200000003333333330";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"200", "99988877766655544433322211100000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> matches = {"1000000000000000", "1000000000000010", "1000000000000100", "1000000000001000", "1000000000010000", "1000000000100000", "1000000001000000", "1000000010000000", "1000000100000000", "1000001000000000"};
    string n = "200000170333333330";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"200", "99999999999999999999999999999999999999999999999999", "99999999999999999999888777666555444333222111000000"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> matches = {"923372036854775807"};
    string n = "923372036854775807";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> matches = {"923372036854775807", "923372036854775807", "923372036854775807"};
    string n = "923372036854775807";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "2"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> matches = {"13252", "10185", "2935", "7098", "3119", "3190", "4338"};
    string n = "8451";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "65", "65"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> matches = {"13252", "10185", "2817", "7098", "3119", "3190", "4338"};
    string n = "8451";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "222", "222"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> matches = {"99119939999969995", "99119939999969998", "99119939999969999"};
    string n = "99119939999969997";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> matches = {"1", "835810052671059340", "835810052167105935", "658100521671059340", "835810055648722340"};
    string n = "958100521671059340";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"300000000000000001", "30000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> matches = {"1000000000000000000", "1000000000000000000", "1000000000000000000", "1", "1000000000000000000", "1000000000000000000", "1000000000000000000", "1", "1000000000000000000", "1000000000000000000"};
    string n = "999999999999999999";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999999999999999", "77777777777777777777777777777777777777777777777777", "77777777777777777777777777777777777777777777777777"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> matches = {"1", "1", "1", "1", "1", "1", "1", "1", "1", "1"};
    string n = "1000000000000000000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1000000000000000000", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> matches = {"1", "1", "1", "1", "1", "1", "1", "1"};
    string n = "1000000000000000000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1000000000000000000", "77777777777777777777777777777777777777777777777777", "77777777777777777777777777777777777777777777777777"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> matches = {"1"};
    string n = "1000000000000000000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> matches = {"1", "2", "4", "8", "16", "32", "64", "128", "256", "512"};
    string n = "16383";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"16382", "10000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> matches = {"1000000000000000000", "999315786", "1000000000000000000", "999315787", "1000000000000000000", "1000000000000000000", "1000000000000000000", "1000000000000000000", "1000000000000000000"};
    string n = "998632045145376725";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999315790", "33333333333333333333333333333333333333333333333333", "33333333333333333333333333333333333333333333311111"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> matches = {"934759010915109991", "1000", "1002", "1004", "1008", "1016", "1032", "1064", "1128", "1256"};
    string n = "9511";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "987654321", "987654321"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> matches = {"1", "737470023400002341", "2", "5", "3", "4", "2", "3"};
    string n = "1000000000000000000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999999999999999", "60000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> matches = {"1", "737470023400002341", "2", "5", "3", "4", "2", "3"};
    string n = "999932030020000050";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999932030020000049", "60000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> matches = {"1", "99119939999969998", "99119939999969999"};
    string n = "99119939999969997";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> matches = {"33", "330000000000"};
    string n = "330000000000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> matches = {"33", "3301"};
    string n = "3307";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "1", "1"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> matches = {"842850236509000000", "842850236509000001", "842850236509000002"};
    string n = "842850236509002315";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "2", "2"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> matches = {"346", "128474985098436704", "128474985098436702", "321425"};
    string n = "128474985098436704";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"371314985832704", "30000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> matches = {"346", "128474985098436704", "128474985098436300"};
    string n = "128474985098436704";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "20", "20"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> matches = {"346", "128474985098436704", "347"};
    string n = "128474985098436704";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"371314985833632", "22222222222222222222222222222222000000000000000000", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> matches = {"1000000000000000000", "713260892687687", "713260892826940", "713260892966196", "713260894637276", "713260972620995", "713364805987902", "714403938990070", "740694003944857", "1069891339030898"};
    string n = "999991771548135907";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1401", "98888888888887777777777777777777777766666666665555", "44444444444444444444444444444444443333332111111111"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> matches = {"1000000000000000000", "709419836063046", "709419836201551", "709419836340056", "709419838002126", "709419915565897", "709523189768766", "710556726825966", "736705214373127", "1064129754094098"};
    string n = "994606610160389548";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1401", "98888888888887777777777777777777777766666666665555", "44444444444444444444444444444444443333332111111111"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> matches = {"1000000000000000000", "695180444914857", "695180445186305", "695180445457756", "695180448715186", "695180600729015", "695383003319552", "697408587366504", "748655863754388", "1390360889828752"};
    string n = "974642983770628551";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1401", "88888888888877777777777777777777777666666666655555", "44444444444444444444444444444444433333321111111111"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> matches = {"1000000000000000000", "19293382955104", "19293382955134", "19293382955169", "19293382955619", "19293382959746", "19293383034115", "19297436186810", "19350128198986", "20428287832746"};
    string n = "991718470658220612";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"51401", "99999999999999998888888888888888888777777777777766", "55555444444443333333211111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> matches = {"1000000000000000000", "59398403", "59398404", "59398404", "59398404", "59398404", "59398404", "59461053", "61653783", "68419920"};
    string n = "957558588169314466";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"16120948372", "99888777777777777777777777777777777777776666666666", "11111111111111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> matches = {"1000000000000000000", "59398403", "59398404", "59398404", "59398404", "59398404", "59398404", "59461053", "61653783", "68419920"};
    string n = "957558588169314466";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"16120948372", "99888777777777777777777777777777777777776666666666", "11111111111111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> matches = {"1000000000000000000", "149281225", "149281226", "149281226", "149281226", "149281226", "149281226", "149421313", "154324363", "169453778"};
    string n = "746389517822798856";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4999888752", "99888777777777777777777777777777777777776666666666", "11111111111111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> matches = {"1000000000000000000", "621991264853", "621991264854", "621991264854", "621991264854", "621991264854", "621991266293", "623431057594", "673823803496", "829321419423"};
    string n = "746389517822798856";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1199999", "99888777777777777777777777777777777777776666666666", "11111111111111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> matches = {"1000000000000000000", "95690963823436", "95690963823481", "95690963823659", "95690963826564", "95690963864730", "95690995211684", "95912470684134", "103665210808561", "127587951763934"};
    string n = "746389517822798856";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7799", "99888777777777777777777777777777777777776666666666", "55555555555555555555555555555555555555555555555555"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> matches = {"1000000000000000000", "127933563369162", "127933563369243", "127933563369574", "127933563374923", "127933563444095", "127933605333525", "128229705876955", "138594693649686", "170578084491258"};
    string n = "997881794279460724";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7799", "99888777777777777777777777777777777777776666666666", "11111111111111111111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> matches = {"1000000000000000000", "127933563369162", "127933563369230", "127933563369504", "127933563373955", "127933563431793", "127933605333525", "128229705876955", "138594693649686", "170578084491258"};
    string n = "997881794279460724";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7799", "99888777777777777777777777777777777777776666666666", "55555555555555554444444444443333333333333222211111"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> matches = {"1000000000000000000", "127933563369162", "127933563369172", "127933563369267", "127933563370838", "127933563388092", "127933576134037", "128023594026000", "130544452417454", "146209786707203"};
    string n = "997881794279460724";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7799", "99999988888877777777777777777777777777776666666666", "55555555555555554444444444333333333333333222222222"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> matches = {"1000000000000000000", "1635871793900756", "1635871887616475", "1635875355098497", "1637581168816012", "1000000000000000000", "1000000000000000000", "1692281166104216", "1000000000000000000", "1000000000000000000"};
    string n = "997881794279460724";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"609", "77777777777777777777777777774444444444444444444444", "22222222222222222111111111111111111111111111111111"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> matches = {"1247352242849326", "1000000000000000000", "1000000000000000000", "1247397192479699", "1000000000000000000", "1000000000000000000", "1281064465629036", "1000000000000000000", "1000000000000000000", "1000000000000000000"};
    string n = "997881794279460724";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"799", "66666666666666666666666666666666666633333333333333", "33333333333333333333333333333333333300000000000000"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> matches = {"1052529643181078", "1000000000000000000", "1000000000000000000", "1052530822485999", "1000000000000000000", "1000000000000000000", "1052547332754913", "1067565780940797", "1000000000000000000", "1000000000000000000"};
    string n = "999903161022023351";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"949", "77777777777777777777777777777777777777777777777777", "66666666666666666663333333333333300000000000000000"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> matches = {"1052529643181078", "1000000000000000000", "1000000000000000000", "1052530350764031", "1000000000000000000", "1000000000000000000", "1052547332754913", "1067565780940797", "1000000000000000000", "1000000000000000000"};
    string n = "999903161022023351";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"949", "77777777777777777777777777777777777777777777777777", "66666666666666666663333333333333333333333330000000"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> matches = {"1052529643181078", "1000000000000000000", "1000000000000000000", "1052530148597473", "1000000000000000000", "1000000000000000000", "1052547332754913", "1067565780940797", "1000000000000000000", "1000000000000000000"};
    string n = "999903161022023351";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"949", "77777777777777777777777777777777777777777777777777", "66666666666666666663333333333333333333333333333333"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> matches = {"10"};
    string n = "1";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> matches = {"1"};
    string n = "0";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> matches = {"1", "1"};
    string n = "0";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> matches = {"1000", "1001"};
    string n = "400090";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"400", "11111111111111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> matches = {"10000", "10001"};
    string n = "980049";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"98", "11111111111111111111111111111111111111111111111110", "10000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> matches = {"123412341234"};
    string n = "234";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> matches = {"19"};
    string n = "3957127598359284";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> matches = {"10", "10"};
    string n = "9";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> matches = {"1"};
    string n = "10000";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> matches = {"100"};
    string n = "1";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> matches = {"100000000000000", "1000000000", "1000000001"};
    string n = "999999999999999999";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"999999999", "22222222222222222222222222222222222222222222222222", "22222222222222222222222222222222222222222222222222"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> matches = {"10", "11", "11"};
    string n = "21";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "20", "20"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> matches = {"999", "1000"};
    string n = "399800";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"400", "11111111111111111111111111111111111111111111111111", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> matches = {"10"};
    string n = "1";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "", ""};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> matches = {"1", "923372036854775807"};
    string n = "923372036854775806";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> matches = {"1", "1000"};
    string n = "100";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "0", "0"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> matches = {"10000000", "20000000", "20000001", "20000002", "20000003", "20000004", "20000005", "20000006", "20000007", "10000001"};
    string n = "10000000099999999";
    MatchNumbersHard* pObj = new MatchNumbersHard();
    clock_t start = clock();
    vector<string> result = pObj->maxNumber(matches, n);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1000000009", "99999999999999999999999999999999999999999999999999", "00000000000000000000000000000000000000000000000000"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9991&pm=6591
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
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define FORD(i,a,b) for(int i=(int)(a);i>=(int)(b);--i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
long long cost[12];
int D;
long long N;
 
typedef pair<int, long long> PIL;
 
string toString(vector<PIL> V) {
  stringstream res;
  REP(i,SIZE(V)) {
    int co = V[i].first;
    long long kolko = V[i].second;
    while (kolko--) { res << co; if (res.str().size() == 50) return res.str(); }
  }
  return res.str();
}
 
class MatchNumbersHard {
public:
  vector <string> maxNumber(vector <string> matches, string _n) {
    D = SIZE(matches);
    REP(i,D) stringstream(matches[i]) >> cost[i];
    stringstream(_n) >> N;
    
    vector <string> res;
 
    int vieme = 0;
    REP(i,D) if (cost[i] <= N) vieme = 1;
    if (!vieme) { res.push_back("0"); res.push_back(""); res.push_back(""); return res; }
 
    int canPositive = 0;
    FOR(i,1,D-1) if (cost[i] <= N) canPositive = 1;
    if (!canPositive) { res.push_back("1"); res.push_back("0"); res.push_back("0"); return res; }
 
    long long cheapestNonzero = 1000000000123456789LL;
    long long cheapestDigit = 1000000000123456789LL;
    REP(i,D) cheapestDigit <?= cost[i];
    FOR(i,1,D-1) cheapestNonzero <?= cost[i];
 
    long long mostDigits = 1 + (N-cheapestNonzero) / cheapestDigit;
 
    stringstream _ss; _ss << mostDigits; res.push_back(_ss.str());
 
    vector<PIL> pocty;
    FORD(x,D-1,0) {
      if (cost[x] == cheapestDigit) {
        pocty.push_back(PIL(x,mostDigits));
        mostDigits = 0;
        break;
      } else {
        int canAfford = (N - mostDigits*cheapestDigit) / (cost[x] - cheapestDigit);
        // just for sure
        canAfford <?= mostDigits;
        pocty.push_back(PIL(x,canAfford));
        N -= canAfford * cost[x];
        mostDigits -= canAfford;
      }
    }
 
    string A = toString(pocty);
    reverse(pocty.begin(), pocty.end());
    string B = toString(pocty);
    reverse(B.begin(), B.end());
    res.push_back(A);
    res.push_back(B);
    
    return res;
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/