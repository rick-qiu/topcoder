/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1541
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

class Masterbrain {
public:
    int possibleSecrets(vector<string> guesses, vector<string> results);
};

int Masterbrain::possibleSecrets(vector<string> guesses, vector<string> results) {
    int ret;
    return ret;
}


int test0() {
    vector<string> guesses = {"1575"};
    vector<string> results = {"4b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> guesses = {"1234"};
    vector<string> results = {"0b 4w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2392;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> guesses = {"6172", "6162", "3617"};
    vector<string> results = {"3b 0w", "2b 1w", "0b 3w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> guesses = {"1513", "5654", "4564", "1377", "1671", "1342"};
    vector<string> results = {"1b 0w", "0b 1w", "1b 0w", "1b 0w", "0b 1w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> guesses = {"2611", "1371", "7417", "2647", "3735", "4272", "2442", "3443", "1252", "3353"};
    vector<string> results = {"0b 2w", "0b 2w", "0b 1w", "0b 2w", "1b 0w", "1b 0w", "1b 0w", "0b 1w", "1b 1w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
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
    vector<string> guesses = {"1111", "1112", "1121", "1211", "2111", "2222", "2221", "2212", "2122", "1222"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 0w", "1b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> guesses = {"1234", "2345", "3456", "4567"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> guesses = {"6343"};
    vector<string> results = {"1b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2023;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> guesses = {"4764", "3573", "4366"};
    vector<string> results = {"0b 1w", "0b 1w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 305;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> guesses = {"3563", "6313", "3413", "3527"};
    vector<string> results = {"0b 1w", "0b 1w", "0b 1w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> guesses = {"3611", "6275", "2665"};
    vector<string> results = {"0b 2w", "0b 2w", "2b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> guesses = {"7124", "6635"};
    vector<string> results = {"0b 2w", "2b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 659;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> guesses = {"4625", "5426", "7152", "6521"};
    vector<string> results = {"0b 1w", "1b 1w", "1b 1w", "0b 2w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> guesses = {"3222", "6377", "2774"};
    vector<string> results = {"3b 0w", "1b 0w", "0b 2w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> guesses = {"5667"};
    vector<string> results = {"1b 2w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2295;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> guesses = {"6173", "1367", "1156", "5722"};
    vector<string> results = {"0b 3w", "3b 0w", "1b 3w", "0b 4w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> guesses = {"2432", "3414", "6642", "6315", "6677", "2255", "6147"};
    vector<string> results = {"0b 1w", "0b 0w", "1b 0w", "1b 0w", "1b 0w", "1b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> guesses = {"6321", "7731", "5215", "2763", "4643", "7162"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 1w", "1b 0w", "0b 0w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> guesses = {"3622", "1475", "2526", "2321", "6612", "3272", "2274", "2415"};
    vector<string> results = {"0b 0w", "0b 1w", "1b 0w", "1b 0w", "1b 0w", "1b 0w", "0b 1w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> guesses = {"3443", "3577", "2424", "1251", "1555", "1642", "1777", "3221"};
    vector<string> results = {"0b 2w", "1b 0w", "0b 1w", "0b 0w", "0b 2w", "0b 1w", "2b 0w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> guesses = {"4175", "6132", "4631", "3124"};
    vector<string> results = {"2b 0w", "1b 1w", "1b 0w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> guesses = {"2313", "1523", "2264", "1177", "2477", "6654", "2166", "6326", "5672"};
    vector<string> results = {"1b 0w", "0b 1w", "0b 0w", "0b 0w", "0b 0w", "0b 1w", "0b 0w", "0b 1w", "1b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> guesses = {"6167", "3742"};
    vector<string> results = {"0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> guesses = {"2357", "5353", "3214", "1123", "6474", "5311", "4574", "2755"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> guesses = {"7634", "7172", "4546", "6343", "7476"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> guesses = {"3422", "3442", "5171", "1434", "2514", "4463", "3665", "5153", "7365", "1665"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> guesses = {"2132", "4744", "1477", "5551"};
    vector<string> results = {"0b 0w", "0b 0w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> guesses = {"2241", "5412", "5445", "2611", "7524", "5262"};
    vector<string> results = {"0b 1w", "0b 1w", "1b 3w", "4b 0w", "2b 2w", "1b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> guesses = {"1355", "3641", "5447", "6252", "6535", "4434", "2315"};
    vector<string> results = {"0b 1w", "1b 0w", "3b 0w", "2b 2w", "0b 0w", "1b 3w", "2b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> guesses = {"7534", "6131", "4215"};
    vector<string> results = {"3b 0w", "1b 0w", "1b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> guesses = {"6337"};
    vector<string> results = {"1b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2023;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> guesses = {"2663", "6225"};
    vector<string> results = {"1b 1w", "0b 3w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 386;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> guesses = {"3532", "2172", "6411", "6433", "7466"};
    vector<string> results = {"2b 1w", "0b 0w", "0b 2w", "1b 1w", "3b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> guesses = {"3646"};
    vector<string> results = {"0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2145;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> guesses = {"5555"};
    vector<string> results = {"0b 2w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2401;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> guesses = {"4444"};
    vector<string> results = {"0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2401;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> guesses = {"4247", "1223", "4277", "2135", "4174", "5576"};
    vector<string> results = {"2b 1w", "0b 2w", "1b 1w", "2b 0w", "0b 3w", "3b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> guesses = {"5112", "2172", "3171", "3253"};
    vector<string> results = {"2b 0w", "1b 1w", "0b 2w", "1b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> guesses = {"2276", "4525", "4233", "3413", "1142"};
    vector<string> results = {"1b 1w", "1b 0w", "0b 2w", "0b 0w", "0b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> guesses = {"6625", "2655", "3416", "5721", "1556"};
    vector<string> results = {"1b 1w", "1b 1w", "1b 0w", "0b 1w", "0b 1w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> guesses = {"4427"};
    vector<string> results = {"0b 2w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2035;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> guesses = {"1575", "1575"};
    vector<string> results = {"4b 0w", "4b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
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

int test42() {
    vector<string> guesses = {"6625", "2655", "3416", "5721", "1556", "5642"};
    vector<string> results = {"1b 1w", "1b 1w", "1b 0w", "0b 1w", "0b 1w", "2b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> guesses = {"1575"};
    vector<string> results = {"4b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> guesses = {"1575"};
    vector<string> results = {"4b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> guesses = {"1575"};
    vector<string> results = {"4b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> guesses = {"1575"};
    vector<string> results = {"4b 0w"};
    Masterbrain* pObj = new Masterbrain();
    clock_t start = clock();
    int result = pObj->possibleSecrets(guesses, results);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4535&pm=1541
********************************************************************************
#line 2 "Masterbrain.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class Masterbrain { 
  public: 
  int match(int a, int b) 
  { 
    int black=0,white=0; 
    int d1[4],d2[4]; 
    for(int i=0;i<4;i++) { 
      d1[i]=a%10; 
      d2[i]=b%10; 
      a/=10; 
      b/=10; 
    } 
    for(int i=0;i<4;i++) 
      if (d1[i]==d2[i]) { 
        d1[i]=8; 
        d2[i]=9; 
        black++; 
      }     
    for(int i=0;i<4;i++) 
      for(int j=0;j<4;j++) 
        if (d1[i]==d2[j]) { 
          d1[i]=8; 
          d2[j]=9; 
          white++; 
        }     
    return black*10+white; 
  } 
   
  int possibleSecrets(vector <string> a, vector <string> b) { 
    int cnt=0; 
    vector<pair<int,int> > guess; 
    for(int i=0;i<a.size();i++) { 
      guess.push_back(make_pair(atoi(a[i].c_str()),(b[i][0]-'0')*10+b[i][3]-'0')); 
      //printf("%d %d\n",guess[i].first,guess[i].second); 
    } 
    for(int i=1111;i<=7777;i++) { 
      int k=i,bad=0; 
      for(int j=0;j<4;j++) { 
        int m=k%10; 
        if (m<1 || m>7) bad=1; 
        k/=10; 
      } 
      if (bad) continue; 
      int wrong=0; 
      for(int j=0;j<guess.size();j++) 
        if (match(i,guess[j].first)!=guess[j].second) wrong++; 
      if (wrong==1) cnt++; 
    } 
    return cnt; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/