/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3943
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

class LargeSignTest {
public:
    string pvalue(int N, int K);
};

string LargeSignTest::pvalue(int N, int K) {
    string ret;
    return ret;
}


int test0() {
    int N = 5;
    int K = 4;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "37.5%";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 10;
    int K = 5;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "100.0%";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 1000000;
    int K = 400000;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 20;
    int K = 5;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4.1%";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1000000;
    int K = 499000;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4.6%";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1000;
    int K = 499;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "97.5%";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1000000;
    int K = 499900;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "84.2%";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 457751;
    int K = 229032;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "64.5%";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 954446;
    int K = 479806;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 502911;
    int K = 249637;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 162292;
    int K = 80431;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 479035;
    int K = 238355;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.1%";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 292167;
    int K = 146597;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5.8%";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 722324;
    int K = 364093;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 300832;
    int K = 149379;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 986163;
    int K = 495307;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 212614;
    int K = 106655;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "13.2%";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 499735;
    int K = 250759;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1.2%";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 465049;
    int K = 230910;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 62707;
    int K = 31714;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.4%";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 426743;
    int K = 212838;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "10.3%";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 355025;
    int K = 177343;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "57.1%";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 512663;
    int K = 258013;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 504064;
    int K = 252709;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5.7%";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 732662;
    int K = 367636;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.2%";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 630450;
    int K = 316450;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.2%";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 513709;
    int K = 255519;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 449366;
    int K = 226714;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 627692;
    int K = 314911;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.7%";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 170104;
    int K = 84908;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "48.7%";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 570838;
    int K = 284285;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.3%";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 197878;
    int K = 98774;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "46.0%";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 506653;
    int K = 252639;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5.4%";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 333151;
    int K = 165058;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 79293;
    int K = 39398;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7.8%";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 669425;
    int K = 335217;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "21.8%";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 605891;
    int K = 300970;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 943172;
    int K = 469649;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 865111;
    int K = 429194;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 667554;
    int K = 334721;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2.1%";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 882406;
    int K = 438049;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 974458;
    int K = 491148;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 129036;
    int K = 64181;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6.1%";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 716422;
    int K = 359057;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4.6%";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 560756;
    int K = 279169;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.1%";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 610338;
    int K = 307010;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 972259;
    int K = 489086;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 68449;
    int K = 34080;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "27.1%";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 750374;
    int K = 375915;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "9.3%";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 486053;
    int K = 241545;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 684392;
    int K = 344465;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 731670;
    int K = 368413;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 768859;
    int K = 382409;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 76081;
    int K = 37952;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "52.3%";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 892301;
    int K = 447204;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2.6%";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 123559;
    int K = 61668;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "52.8%";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 815121;
    int K = 405574;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 1000000;
    int K = 499999;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "99.9%";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 1000000;
    int K = 499996;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "99.4%";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 1000000;
    int K = 499000;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4.6%";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 5;
    int K = 4;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "37.5%";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 1000000;
    int K = 499997;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "99.6%";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 1000000;
    int K = 499980;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "96.9%";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 1000000;
    int K = 499995;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "99.3%";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 2;
    int K = 0;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "50.0%";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 1000000;
    int K = 499900;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "84.2%";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 1000000;
    int K = 500001;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "99.9%";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 1000000;
    int K = 499599;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "42.3%";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 1;
    int K = 0;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "100.0%";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 1000;
    int K = 497;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "87.4%";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 1000000;
    int K = 200000;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.0%";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 1000000;
    int K = 499700;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "54.9%";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 1000;
    int K = 495;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "77.6%";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 202;
    int K = 100;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "94.4%";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 999999;
    int K = 499999;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "100.0%";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 1000000;
    int K = 498262;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0.1%";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 81;
    int K = 40;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "100.0%";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 1001;
    int K = 459;
    LargeSignTest* pObj = new LargeSignTest();
    clock_t start = clock();
    string result = pObj->pvalue(N, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1.0%";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=284007&rd=6520&pm=3943
********************************************************************************
#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
class LargeSignTest{
public:
  string pvalue(int,int);
};
 
const int N=1000001;
 
double fac[N];
 
string LargeSignTest::pvalue(int n,int k){
  for(int i=2;i<=n;i++) fac[i]=fac[i-1]+log(1.0*i);
  k=min(k,n-k);
  if(k*2==n) return "100.0%";
  double ret=0,den=log(2.0)*(n-1);
  for(int i=0;i<=k;i++)
    ret+=exp(fac[n]-fac[i]-fac[n-i]-den);
  ostringstream sout;
  sout.setf(ios::fixed|ios::showpoint);
  sout.precision(1);
  sout<<ret*100<<'%';
  return sout.str();
}

********************************************************************************
*******************************************************************************/