/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6856
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

class LongLongNim {
public:
    int numberOfWins(int maxN, vector<int> moves);
};

int LongLongNim::numberOfWins(int maxN, vector<int> moves) {
    int ret;
    return ret;
}


int test0() {
    int maxN = 20;
    vector<int> moves = {1, 2, 3};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxN = 999;
    vector<int> moves = {1};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 499;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxN = 1000000000;
    vector<int> moves = {1, 2};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 333333333;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxN = 6543;
    vector<int> moves = {2, 4, 7, 11, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 1637;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxN = 1;
    vector<int> moves = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
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
    int maxN = 1;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
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
    int maxN = 1;
    vector<int> moves = {1};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
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
    int maxN = 1000000000;
    vector<int> moves = {2, 19};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 476190477;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxN = 1000000000;
    vector<int> moves = {2, 6, 7, 11, 12, 16, 18};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 203821657;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxN = 999999999;
    vector<int> moves = {2, 6, 7, 11, 12, 16, 17};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 304347826;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxN = 1000000000;
    vector<int> moves = {22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 500000005;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxN = 999999999;
    vector<int> moves = {5, 17, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 270270270;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxN = 20;
    vector<int> moves = {21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxN = 65;
    vector<int> moves = {1, 4, 7, 11, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxN = 64;
    vector<int> moves = {1, 4, 7, 11, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxN = 1000000000;
    vector<int> moves = {2, 3, 7, 8, 12, 13, 17, 18, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxN = 999999999;
    vector<int> moves = {2, 3, 7, 8, 12, 13, 17, 18};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 399999999;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxN = 999987678;
    vector<int> moves = {2, 6, 7, 11, 12, 16, 17, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 285710765;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxN = 123456789;
    vector<int> moves = {2, 6, 7, 11, 12, 16, 18};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 25163168;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxN = 987654321;
    vector<int> moves = {3, 7, 8, 12, 13, 17, 19};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 301783264;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int maxN = 567567865;
    vector<int> moves = {2, 6, 7, 11, 12, 16, 17, 20, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 162162246;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int maxN = 1000000000;
    vector<int> moves = {15, 17, 19, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 405405406;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int maxN = 999999997;
    vector<int> moves = {4, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 380952381;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int maxN = 302981977;
    vector<int> moves = {1, 3, 4, 5, 6, 10, 11, 12, 13, 14, 15, 18, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 37872747;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int maxN = 785921192;
    vector<int> moves = {1, 4, 5, 8, 10, 13, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 157184238;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int maxN = 541431219;
    vector<int> moves = {4, 6, 10, 11, 13, 15, 18, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 90238539;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int maxN = 66830053;
    vector<int> moves = {2, 8, 9, 12, 19, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 19094301;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int maxN = 708147906;
    vector<int> moves = {1, 3, 5, 8, 18, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 202327974;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int maxN = 486174754;
    vector<int> moves = {3, 4, 5, 6, 10, 17};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 105690164;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int maxN = 548216988;
    vector<int> moves = {3, 5, 10, 11, 15, 17};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 137054246;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int maxN = 258630462;
    vector<int> moves = {1, 2, 4, 8, 11, 17, 19, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 47642454;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int maxN = 933193086;
    vector<int> moves = {1, 4, 5, 6, 9, 11, 12, 15, 18, 19, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 186638616;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int maxN = 609505906;
    vector<int> moves = {3, 5, 6, 7, 9, 10, 11, 13, 17, 19, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 90297171;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int maxN = 999999991;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 43478260;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int maxN = 741302990;
    vector<int> moves = {19, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 343530658;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int maxN = 391207276;
    vector<int> moves = {17, 18, 19, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 175013788;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int maxN = 721172640;
    vector<int> moves = {18, 19, 20, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 324527688;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int maxN = 954337139;
    vector<int> moves = {18, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 429451721;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int maxN = 293872405;
    vector<int> moves = {17, 19, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 128098229;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int maxN = 162493626;
    vector<int> moves = {2, 3, 4, 5};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 46426751;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int maxN = 660103999;
    vector<int> moves = {3, 5};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 247538999;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int maxN = 449723762;
    vector<int> moves = {2, 4, 5};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 128492503;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int maxN = 874999758;
    vector<int> moves = {2, 3, 5};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 249999931;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int maxN = 505767449;
    vector<int> moves = {2, 3, 4};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 168589149;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int maxN = 19;
    vector<int> moves = {3, 4, 6, 20, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int maxN = 22;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int maxN = 22;
    vector<int> moves = {22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int maxN = 21;
    vector<int> moves = {22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int maxN = 545718776;
    vector<int> moves = {13, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 202695546;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int maxN = 353285238;
    vector<int> moves = {9, 14, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 105985574;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int maxN = 643572703;
    vector<int> moves = {8};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 321786351;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int maxN = 372777587;
    vector<int> moves = {4, 10, 12, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 93194399;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int maxN = 377513176;
    vector<int> moves = {1, 5, 8, 12, 14, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 107860907;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int maxN = 48873580;
    vector<int> moves = {9, 11, 19, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 14662079;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int maxN = 126967094;
    vector<int> moves = {1, 2, 3, 4, 8, 9, 12, 13, 14, 15, 17, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 14937306;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int maxN = 212690885;
    vector<int> moves = {3, 5, 7, 8, 10, 11, 13, 14, 15, 17, 18, 19, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 25522907;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int maxN = 862343671;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 17, 18, 19, 20, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 71861972;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int maxN = 478763709;
    vector<int> moves = {2, 3, 4, 6, 8, 9, 14, 15, 19, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 83263253;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int maxN = 102654020;
    vector<int> moves = {1, 2, 3, 4, 6, 9, 11, 12, 15, 18, 19, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 11406002;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int maxN = 724924749;
    vector<int> moves = {1, 3, 4, 5, 7, 8, 10, 11, 12, 13, 14, 15, 17, 18, 19};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 65902249;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int maxN = 945170309;
    vector<int> moves = {4, 11, 12, 13, 15, 17, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 203262432;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int maxN = 971154114;
    vector<int> moves = {20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 485577059;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int maxN = 596655160;
    vector<int> moves = {2, 3, 6, 7, 9, 11, 12, 14, 16, 17, 19};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 74581895;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int maxN = 228157164;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 9919876;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int maxN = 935018348;
    vector<int> moves = {3, 4, 7, 9, 11, 12, 13, 14, 17, 19, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 116877293;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int maxN = 906046245;
    vector<int> moves = {5, 7, 8, 9, 12, 16, 17, 19, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 174239664;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int maxN = 5865438;
    vector<int> moves = {6, 7, 8, 11, 13, 16, 17, 19, 20};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 1353563;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int maxN = 138759937;
    vector<int> moves = {5, 6, 9, 16, 19, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 36515773;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int maxN = 50243106;
    vector<int> moves = {8, 16, 17};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 16077798;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int maxN = 214571048;
    vector<int> moves = {7, 8, 10, 13, 14, 19, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 53642763;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int maxN = 483159105;
    vector<int> moves = {2, 3, 4, 9, 12, 15, 17};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 90592333;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int maxN = 687303295;
    vector<int> moves = {3, 7, 8, 9, 10, 12, 14, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 137460659;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int maxN = 888223341;
    vector<int> moves = {9};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 444111672;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int maxN = 328234641;
    vector<int> moves = {3, 4, 7, 8, 13, 18};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 89518538;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int maxN = 943932181;
    vector<int> moves = {8, 10};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 419525415;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int maxN = 38069871;
    vector<int> moves = {2};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 19034935;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int maxN = 830624996;
    vector<int> moves = {19};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 415312506;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int maxN = 899714635;
    vector<int> moves = {1, 5, 10};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 299904879;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int maxN = 31740164;
    vector<int> moves = {1, 12, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 14427346;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int maxN = 132755278;
    vector<int> moves = {2, 6, 7, 19};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 51059723;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int maxN = 823006836;
    vector<int> moves = {6, 7, 18};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 362123008;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int maxN = 190468360;
    vector<int> moves = {4, 9, 12};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 81629296;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int maxN = 245658853;
    vector<int> moves = {6, 16};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 111663115;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int maxN = 677867035;
    vector<int> moves = {8, 15};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 235779839;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int maxN = 999999908;
    vector<int> moves = {4, 9, 11, 18, 20, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 217777760;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int maxN = 1000000000;
    vector<int> moves = {2, 5, 7, 11, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 230769231;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int maxN = 998457158;
    vector<int> moves = {2, 3, 4, 12, 13, 14, 17, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 199691433;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int maxN = 999999999;
    vector<int> moves = {3, 8};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 454545454;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int maxN = 1000000000;
    vector<int> moves = {2, 7, 10, 12, 15, 20, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 174418604;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int maxN = 543671;
    vector<int> moves = {4, 11, 13, 21};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 203876;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int maxN = 1000000000;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 43478260;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int maxN = 15;
    vector<int> moves = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int maxN = 724867124;
    vector<int> moves = {1, 2, 3, 4, 6, 7, 8, 9, 10, 12, 15, 16, 17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 51776223;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int maxN = 100000;
    vector<int> moves = {3, 6, 10};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 30769;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int maxN = 1000000000;
    vector<int> moves = {2, 4, 7, 11, 20, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 333333330;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int maxN = 9699690;
    vector<int> moves = {2, 3, 5, 7, 11, 13, 17, 19, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 1616615;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int maxN = 1000000000;
    vector<int> moves = {1, 4};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 400000000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int maxN = 1000000000;
    vector<int> moves = {9, 11, 16};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 360000000;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int maxN = 200000000;
    vector<int> moves = {17, 18, 19, 20, 21, 22};
    LongLongNim* pObj = new LongLongNim();
    clock_t start = clock();
    int result = pObj->numberOfWins(maxN, moves);
    clock_t end = clock();
    delete pObj;
    int expected = 87179490;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=10010&pm=6856
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define MAX(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; })
 
const int MAX = 22;
const int MAXX = 1<<MAX;
 
int donec[MAXX];
int cntc[MAXX];
 
struct LongLongNim {
int numberOfWins(int maxN, vector <int> moves) {
  ++maxN;
  int mask = 0;
  FOREACH(it,moves) mask |= 1<<(*it-1);
  REP(i,MAXX) donec[i]=-1;
  REP(i,MAXX) cntc[i]=-1;
  int state = MAXX-1;
  int cnt = 0;
  int done = 0;
  while(done<maxN) {
    if(donec[state]!=-1) {
      int cyc = done-donec[state];
      int cv = cnt-cntc[state];
      int cycles = (maxN-done)/cyc;
      done += cycles * cyc;
      cnt += cycles * cv;
    }
    else { donec[state]=done; cntc[state]=cnt; }
    if(done==maxN) break;
    if((state&mask)==mask) {
      cnt++;
      state = (state<<1)&(MAXX-1);
    } else {
      state = ((state<<1)&(MAXX-1))+1;
    }
    ++done;
  }
  return cnt-1;
}
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/