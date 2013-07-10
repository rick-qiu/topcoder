/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11296
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

class PalindromfulString {
public:
    long count(int N, int M, int K);
};

long PalindromfulString::count(int N, int M, int K) {
    long ret;
    return ret;
}


int test0() {
    int N = 2;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1326;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 4;
    int M = 4;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 7;
    int M = 3;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4310176;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 11;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3670344486987776;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 11;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1190791264331526;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 11;
    int M = 2;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 20442143237776;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 11;
    int M = 2;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1399174487776;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 11;
    int M = 2;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 66166675276;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 11;
    int M = 2;
    int K = 6;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2182300276;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 11;
    int M = 2;
    int K = 8;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 737776;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 11;
    int M = 2;
    int K = 10;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 11;
    int M = 2;
    int K = 11;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 11;
    int M = 3;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1091609135425276;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 11;
    int M = 3;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 163264408862776;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 11;
    int M = 3;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 865971362776;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 11;
    int M = 3;
    int K = 8;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 152776;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 11;
    int M = 4;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 43213517317776;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 11;
    int M = 4;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 220200491576;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 11;
    int M = 4;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 63029226;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 11;
    int M = 5;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3670344486987776;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 11;
    int M = 5;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 37839705612176;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 11;
    int M = 5;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 165023937676;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 11;
    int M = 5;
    int K = 6;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 34476;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 11;
    int M = 6;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3670344486987776;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 11;
    int M = 6;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1252786085226;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 11;
    int M = 6;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 174437926;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 11;
    int M = 6;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1811576;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 11;
    int M = 6;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1326;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 11;
    int M = 6;
    int K = 6;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 11;
    int M = 6;
    int K = 7;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 11;
    int M = 7;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1044017932776;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 11;
    int M = 7;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1352676;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 11;
    int M = 8;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3670344486987776;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 11;
    int M = 8;
    int K = 9;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 11;
    int M = 9;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 11;
    int M = 9;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 51376;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 11;
    int M = 9;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 24095378476;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 11;
    int M = 10;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3670344486987776;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 11;
    int M = 10;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 617831526;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 11;
    int M = 10;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 11;
    int M = 11;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3670344486987776;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 11;
    int M = 11;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 308915776;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 11;
    int M = 11;
    int K = 11;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 10;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 41984966747126;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 10;
    int M = 2;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6279400340876;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 10;
    int M = 2;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 566509715876;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 10;
    int M = 2;
    int K = 6;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 34715876;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 10;
    int M = 2;
    int K = 9;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 10;
    int M = 3;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 141167095653376;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 10;
    int M = 3;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 38017681590876;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 10;
    int M = 3;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 19087840876;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 10;
    int M = 3;
    int K = 6;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11965876;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 10;
    int M = 3;
    int K = 7;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 135876;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 10;
    int M = 4;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 141167095653376;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 10;
    int M = 4;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1455373292776;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 10;
    int M = 4;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 6347074526;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 10;
    int M = 4;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 52676;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 10;
    int M = 4;
    int K = 10;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 10;
    int M = 5;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1248382010876;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 10;
    int M = 5;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4528457076;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 10;
    int M = 5;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 50514776;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 10;
    int M = 6;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 141167095653376;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 10;
    int M = 6;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 40154535876;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 10;
    int M = 6;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 4461626;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 10;
    int M = 6;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 52026;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 10;
    int M = 7;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 34476;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 10;
    int M = 8;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 926745326;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 10;
    int M = 8;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1976;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 10;
    int M = 9;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 617830876;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 10;
    int M = 10;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 141167095653376;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 10;
    int M = 10;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11881376;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 9;
    int M = 2;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 734147726;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 9;
    int M = 2;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 23210226;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 9;
    int M = 2;
    int K = 7;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 5226;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 9;
    int M = 3;
    int K = 6;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 118976;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 9;
    int M = 4;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 48014692726;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 9;
    int M = 5;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 115934676;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 9;
    int M = 6;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1235559026;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 9;
    int M = 6;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1326;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 9;
    int M = 9;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11881376;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 9;
    int M = 9;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 8;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 208827064576;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 8;
    int M = 2;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 370033326;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 8;
    int M = 2;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 14564576;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 8;
    int M = 2;
    int K = 7;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 8;
    int M = 3;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 43788002076;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 8;
    int M = 3;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 217689576;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 8;
    int M = 5;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 2670876;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 8;
    int M = 7;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 8;
    int M = 8;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 456976;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 6;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 55009526;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 6;
    int M = 2;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 3276;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 6;
    int M = 2;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 6;
    int M = 3;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 6;
    int M = 4;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1976;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 6;
    int M = 4;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 6;
    int M = 6;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17576;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 7;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 8031810176;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 7;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1684153926;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 7;
    int M = 2;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 247676;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 7;
    int M = 3;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1430247676;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 7;
    int M = 4;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 47421426;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 7;
    int M = 5;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 7;
    int M = 7;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 456976;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 7;
    int M = 7;
    int K = 7;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 5;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 11881376;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 5;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1725126;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 5;
    int M = 2;
    int K = 4;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 5;
    int M = 3;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1318876;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 5;
    int M = 3;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 51376;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 5;
    int M = 3;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 5;
    int M = 4;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 35126;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 5;
    int M = 4;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 5;
    int M = 5;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17576;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 4;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 456976;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 4;
    int M = 2;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 50726;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 4;
    int M = 2;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1976;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 4;
    int M = 2;
    int K = 3;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 4;
    int M = 3;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 456976;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 4;
    int M = 3;
    int K = 1;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 34476;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 4;
    int M = 3;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 676;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 4;
    int M = 3;
    int K = 11;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 3;
    int M = 2;
    int K = 0;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 17576;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 3;
    int M = 2;
    int K = 2;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 2;
    int M = 2;
    int K = 11;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 2;
    int M = 2;
    int K = 10;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 11;
    int M = 5;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1369576;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 11;
    int M = 4;
    int K = 7;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 1326;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 11;
    int M = 8;
    int K = 5;
    PalindromfulString* pObj = new PalindromfulString();
    clock_t start = clock();
    long result = pObj->count(N, M, K);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22919344&rd=14425&pm=11296
********************************************************************************
#include <functional> 
#include <algorithm> 
#include <stdexcept> 
#include <iostream> 
#include <sstream> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <cstdlib> 
#include <cstring> 
#include <utility> 
#include <cctype> 
#include <vector> 
#include <string> 
#include <bitset> 
#include <cmath> 
#include <queue> 
#include <stack> 
#include <ctime> 
#include <list> 
#include <map> 
#include <set> 
  
using namespace std; 
  
#define PB push_back 
#define MP make_pair 
  
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef pair<int,int> PII; 
typedef long long LL; 
typedef unsigned long long ULL; 
 
long long ans,n,m,k; 
int a[201]; 
 
bool pd(int l,int r){ 
     while (l<r) { 
           if (a[l]!=a[r]) return false; 
           l++; r--; 
     } 
     return true; 
} 
 
void check(int t){ 
     long long temp=0; 
     for (int i=1;i<=n-m+1;i++) { 
         if (pd(i,i+m-1)==true) temp++; 
     } 
     if (temp>=k) { 
        long long tans=1; 
        long long temp2=26; 
        while (t--) tans*=temp2--; 
        ans+=tans; 
     } 
} 
 
void tryx(int dep,int t){ 
     if (dep>n) check(t); 
        else { 
             for (int i=1;i<=t;i++) { 
                 a[dep]=i; 
                 tryx(dep+1,t); 
                 a[dep]=0; 
             } 
             a[dep]=t+1; 
             tryx(dep+1,t+1); 
             a[dep]=0; 
        } 
} 
  
class PalindromfulString { 
public: 
long long count(int N, int M, int K) { 
      
     ans=0; 
     n=N; m=M; k=K; 
     tryx(1,0); 
      
     return ans; 
} 
 
 
};  
  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/