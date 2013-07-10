/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11222
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

class P8XCoinChangeAnother {
public:
    vector<long> solve(int N, long coins_sum, long coins_count);
};

vector<long> P8XCoinChangeAnother::solve(int N, long coins_sum, long coins_count) {
    vector<long> ret;
    return ret;
}


int test0() {
    int N = 2;
    long coins_sum = 4;
    long coins_count = 3;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    long coins_sum = 4;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 2, 0};
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
    long coins_sum = 6;
    long coins_count = 3;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 3, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 2;
    long coins_sum = 8;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1;
    long coins_sum = 10000000000;
    long coins_count = 10000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {10000000000};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 12;
    long coins_sum = 7;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 58;
    long coins_sum = 576460752303423487;
    long coins_count = 58;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 58;
    long coins_sum = 576460752303423487;
    long coins_count = 576460752303423487;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {576460752303423487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 58;
    long coins_sum = 576460752303423487;
    long coins_count = 576460752303423460;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {576460752303423433, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1;
    long coins_sum = 4;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 24;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 59;
    long coins_sum = 576460752303423487;
    long coins_count = 59;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 30;
    long coins_sum = 481822894139105859;
    long coins_count = 893324030869997217;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 24;
    long coins_sum = 900677029325839502;
    long coins_count = 84760572940592814;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 56936517215455687, 27824055725137125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 28;
    long coins_sum = 977714136398732534;
    long coins_count = 74791568447788586;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 27368869845735602, 47422698602052982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 42;
    long coins_sum = 374062839817531195;
    long coins_count = 812325078355253314;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 38;
    long coins_sum = 766133121709747727;
    long coins_count = 474875100606565702;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {183617079503383677, 291258021103182025, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 1;
    long coins_sum = 56814595424807054;
    long coins_count = 56814595424807055;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 1;
    long coins_sum = 56814595424807054;
    long coins_count = 989218679757425370;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 2;
    long coins_sum = 906262058036463021;
    long coins_count = 906262058036463022;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 2;
    long coins_sum = 906262058036463021;
    long coins_count = 978023390061157869;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 3;
    long coins_sum = 473520442192397799;
    long coins_count = 473520442192397800;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 3;
    long coins_sum = 473520442192397799;
    long coins_count = 812320666508134649;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 10;
    long coins_sum = 216706174405523112;
    long coins_count = 216706174405523113;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 10;
    long coins_sum = 216706174405523112;
    long coins_count = 466264617217462335;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 30;
    long coins_sum = 147751932417679543;
    long coins_count = 147751932417679544;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 30;
    long coins_sum = 147751932417679543;
    long coins_count = 886635965204864132;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 50;
    long coins_sum = 618642424497165204;
    long coins_count = 618642424497165205;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 50;
    long coins_sum = 618642424497165204;
    long coins_count = 836225761721878295;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 59;
    long coins_sum = 159509381092691779;
    long coins_count = 159509381092691780;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 59;
    long coins_sum = 159509381092691779;
    long coins_count = 799573259460712163;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 60;
    long coins_sum = 227287203230169640;
    long coins_count = 227287203230169641;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 60;
    long coins_sum = 227287203230169640;
    long coins_count = 882784283112841602;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 60;
    long coins_sum = 999999999999999999;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 1;
    long coins_sum = 999999999999999999;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 1;
    long coins_sum = 1;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 1;
    long coins_sum = 1;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 60;
    long coins_sum = 1;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 60;
    long coins_sum = 1;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 2;
    long coins_sum = 1;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 2;
    long coins_sum = 1;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 1;
    long coins_sum = 912059617508801446;
    long coins_count = 912059617508801445;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 28;
    long coins_sum = 159815908596855561;
    long coins_count = 1190721320;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 57;
    long coins_sum = 849467743481142763;
    long coins_count = 42;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 38;
    long coins_sum = 300054437118227483;
    long coins_count = 2183202;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 53;
    long coins_sum = 793302347699943109;
    long coins_count = 196;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 42;
    long coins_sum = 555998593005135927;
    long coins_count = 252856;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 36;
    long coins_sum = 109575682854673208;
    long coins_count = 3189086;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 6;
    long coins_sum = 655308446207554279;
    long coins_count = 20478388943986073;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 29;
    long coins_sum = 681034992375154150;
    long coins_count = 2537053060;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 49;
    long coins_sum = 840775838321551237;
    long coins_count = 3008;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 1;
    long coins_sum = 576460752303423487;
    long coins_count = 576460752303423486;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 1;
    long coins_sum = 864691128455135231;
    long coins_count = 864691128455135230;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 1;
    long coins_sum = 768614336404564650;
    long coins_count = 768614336404564649;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 1;
    long coins_sum = 921945224109193943;
    long coins_count = 921945224109193942;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 1;
    long coins_sum = 665624282544704938;
    long coins_count = 719072311973952838;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 1;
    long coins_sum = 576460752303423488;
    long coins_count = 576460752303423487;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 2;
    long coins_sum = 576460752303423487;
    long coins_count = 288230376151711743;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 2;
    long coins_sum = 864691128455135231;
    long coins_count = 432345564227567615;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 2;
    long coins_sum = 768614336404564650;
    long coins_count = 384307168202282324;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 2;
    long coins_sum = 233123459078691455;
    long coins_count = 116561729539345727;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 2;
    long coins_sum = 24512509627008702;
    long coins_count = 20863535814603772;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {17214562002198842, 3648973812404930};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 2;
    long coins_sum = 576460752303423488;
    long coins_count = 288230376151711743;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 59;
    long coins_sum = 576460752303423487;
    long coins_count = 58;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 59;
    long coins_sum = 864691128455135231;
    long coins_count = 59;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 59;
    long coins_sum = 768614336404564650;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 59;
    long coins_sum = 192025901590152917;
    long coins_count = 27;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 59;
    long coins_sum = 756888365355287266;
    long coins_count = 16;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 59;
    long coins_sum = 576460752303423488;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 60;
    long coins_sum = 576460752303423487;
    long coins_count = 58;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 58;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 29;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 60;
    long coins_sum = 329726389399237797;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 60;
    long coins_sum = 851474048442174284;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 5, 3, 0, 0};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 30;
    long coins_sum = 576460752303423487;
    long coins_count = 1073741851;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 30;
    long coins_sum = 864691128455135231;
    long coins_count = 1610612763;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 30;
    long coins_sum = 768614336404564650;
    long coins_count = 1431655778;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 30;
    long coins_sum = 414979561278537556;
    long coins_count = 772959683;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 30;
    long coins_sum = 34169982871320494;
    long coins_count = 198177021;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 141767801, 56409205, 0};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 30;
    long coins_sum = 576460752303423488;
    long coins_count = 1073741823;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 1;
    long coins_sum = 1;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 60;
    long coins_sum = 1;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 17;
    long coins_sum = 1;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 1;
    long coins_sum = 2;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {2};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 60;
    long coins_sum = 1;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 21;
    long coins_sum = 2;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 1;
    long coins_sum = 5;
    long coins_count = 5;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {5};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 60;
    long coins_sum = 4;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 5;
    long coins_sum = 2;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 1;
    long coins_sum = 94;
    long coins_count = 94;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {94};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 60;
    long coins_sum = 29;
    long coins_count = 27;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {25, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 51;
    long coins_sum = 50;
    long coins_count = 36;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {22, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 1;
    long coins_sum = 9614;
    long coins_count = 9614;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {9614};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 60;
    long coins_sum = 976;
    long coins_count = 678;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {380, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 17;
    long coins_sum = 7258;
    long coins_count = 1021;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 226, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 1;
    long coins_sum = 9594749;
    long coins_count = 9594749;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {9594749};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 60;
    long coins_sum = 3922174;
    long coins_count = 2015834;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {109494, 1906340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 4;
    long coins_sum = 3573018;
    long coins_count = 2543337;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1513656, 1029681, 0, 0};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 1;
    long coins_sum = 156246766;
    long coins_count = 156246766;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {156246766};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 60;
    long coins_sum = 65677995;
    long coins_count = 37699946;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {9721897, 27978049, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 33;
    long coins_sum = 695946155;
    long coins_count = 440258680;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {184571205, 255687475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 1;
    long coins_sum = 4286309214;
    long coins_count = 4286309214;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {4286309214};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 60;
    long coins_sum = 6950272011;
    long coins_count = 3397299534;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 3319463061, 77836472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 18;
    long coins_sum = 840709882;
    long coins_count = 162316861;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 114456250, 47860610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 30;
    long coins_sum = 576460752303423488;
    long coins_count = 1485243838;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823004028, 662239810};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 31;
    long coins_sum = 576460752303423488;
    long coins_count = 1314177844;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480872040, 833305804, 0};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 887709593;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701677362, 186032231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 536870912;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536870912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 2;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 576460752303423488;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {576460752303423488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 291180071518066928;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {5899390732710368, 285280680785356560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 60;
    long coins_sum = 576460752303423488;
    long coins_count = 220101070883403569;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 151971765615095394, 68129305268308175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 30;
    long coins_sum = 288230376151711744;
    long coins_count = 770592885;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467443946, 303148939};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 31;
    long coins_sum = 288230376151711744;
    long coins_count = 746921750;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420101676, 326820074, 0};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 442243973;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347617034, 94626939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 268435456;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268435456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 288230376151711744;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {288230376151711744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 270883724870677360;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {253537073589642976, 17346651281034384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 60;
    long coins_sum = 288230376151711744;
    long coins_count = 98676056927365383;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 53236925778874894, 45439131148490489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 30;
    long coins_sum = 768614336404564650;
    long coins_count = 1634040835;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 404770112, 1229270709};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 31;
    long coins_sum = 768614336404564650;
    long coins_count = 1479555762;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 95799966, 1383755782, 0};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 960736819;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 489817845, 470918960, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 715827897;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 715827882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 31;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 2, 0};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 768614336404564650;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {768614336404564650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 638317862291329540;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {508021388178094430, 130296474113235110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 60;
    long coins_sum = 768614336404564650;
    long coins_count = 345548714443791401;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 306790260685300477, 38758453758490924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 59;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 59;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 30;
    long coins_sum = 864691128455135231;
    long coins_count = 2899082474;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2576939421, 322143025};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 31;
    long coins_sum = 864691128455135231;
    long coins_count = 1629470030;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 37714533, 1591755469, 0};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 1384673822;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1158734851, 225938942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 805306397;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 805306367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 61;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 0};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 864691128455135231;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {864691128455135231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 540013612983264214;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {215336097511393197, 324677515471871017, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 60;
    long coins_sum = 864691128455135231;
    long coins_count = 366385456391420138;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 300425348555272659, 65960107836147478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 27;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 27;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 30;
    long coins_sum = 340217872855087309;
    long coins_count = 1171905777;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1076401189, 95504576};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 31;
    long coins_sum = 340217872855087309;
    long coins_count = 857468008;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 447525651, 409942345, 0};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 326921616;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 20138036, 306783567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 316852598;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 316852585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 27;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 340217872855087309;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {340217872855087309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 178796295762273134;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {17374718669458959, 161421577092814175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 60;
    long coins_sum = 340217872855087309;
    long coins_count = 155044581165288276;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 139980225903032896, 15064355262255379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 24;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 24;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 30;
    long coins_sum = 1000000000000000000;
    long coins_count = 3685284044;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 3645277778, 40006260};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 31;
    long coins_sum = 1000000000000000000;
    long coins_count = 3323507915;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 2921725520, 401782389, 0};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 1231324065;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 600002969, 631321090, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 931322581;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 931322574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 27;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 4, 1, 0};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1000000000000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 874896996937899263;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {749793993875798526, 125103003062100737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 443453345479254537;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 386906690958509074, 56546654520745463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 39;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 39;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 30;
    long coins_sum = 999999999999999989;
    long coins_count = 1937145950;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 149001560, 1788144369};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 31;
    long coins_sum = 999999999999999989;
    long coins_count = 3724942281;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 3724594222, 348038, 0};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 1630549189;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1398453187, 232095981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 931322596;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 931322574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 40;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 3, 0};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 999999999999999989;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {999999999999999989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 954127076850308705;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {908254153700617421, 45872923149691284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 60;
    long coins_sum = 999999999999999989;
    long coins_count = 404475427253261043;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 308950854506522090, 95524572746738952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int N = 30;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int N = 31;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 1073741823;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1073741823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 683661882;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {293581941, 390079941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int N = 60;
    long coins_sum = 1073741823;
    long coins_count = 500158975;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 463447037, 36711937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int N = 30;
    long coins_sum = 576460751766552576;
    long coins_count = 1262926594;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378369542, 884557052};
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int N = 31;
    long coins_sum = 576460751766552576;
    long coins_count = 1246616159;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345748672, 900867487, 0};
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 609711293;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145680763, 464030530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 536870912;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 536870911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 30;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 576460751766552576;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {576460751766552576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 512341884351048369;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {448223016935544162, 64118867415504207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int N = 60;
    long coins_sum = 576460751766552576;
    long coins_count = 206941563449064374;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 125652751014852460, 81288812434211914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int N = 2;
    long coins_sum = 1000000000000000000;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1000000000000000000, 0};
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int N = 2;
    long coins_sum = 1000000000000000000;
    long coins_count = 500000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 500000000000000000};
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int N = 31;
    long coins_sum = 1000000000000000000;
    long coins_count = 124153766666;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 9888954227, 114264812437, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int N = 31;
    long coins_sum = 1000000000000000000;
    long coins_count = 7812500000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 7812500000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int N = 31;
    long coins_sum = 997888567728001981;
    long coins_count = 5452493830706170;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 1, 1, 1, 0, 3108983226037315, 2343510604668850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int N = 31;
    long coins_sum = 427222480059521834;
    long coins_count = 339338211920;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 271245317198, 68092894713, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int N = 31;
    long coins_sum = 5840931466371651;
    long coins_count = 62272025;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 37507365, 24764648, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int N = 58;
    long coins_sum = 1000000000000000000;
    long coins_count = 33;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 11, 1};
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int N = 58;
    long coins_sum = 1000000000000000000;
    long coins_count = 7450580602;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 7450580596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int N = 58;
    long coins_sum = 760622787098983810;
    long coins_count = 965869229;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 514968088, 450901128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int N = 58;
    long coins_sum = 344845910552782105;
    long coins_count = 198219266;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 75275723, 122943529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int N = 58;
    long coins_sum = 822852431671314631;
    long coins_count = 768587239;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 4492360, 764094865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int N = 59;
    long coins_sum = 1000000000000000000;
    long coins_count = 209;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 160, 31, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int N = 59;
    long coins_sum = 1000000000000000000;
    long coins_count = 3814697265625;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3814697265625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int N = 59;
    long coins_sum = 6731511468927275;
    long coins_count = 26;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int N = 59;
    long coins_sum = 720175727685326578;
    long coins_count = 18188736192222440;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 0, 1, 13871980894278421, 4316755297944017, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int N = 59;
    long coins_sum = 755743043035602943;
    long coins_count = 26834283;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 9678488, 17155773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int N = 59;
    long coins_sum = 40816918789480778;
    long coins_count = 35032430316;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 31138813490, 3893616817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int N = 59;
    long coins_sum = 972221775166727244;
    long coins_count = 11026675112949;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 7218423236648, 3808251876295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int N = 59;
    long coins_sum = 80800597215336629;
    long coins_count = 73513502127;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 69969549920, 3543952197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int N = 59;
    long coins_sum = 521777867978095542;
    long coins_count = 722929847930323;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 0, 1, 1, 0, 1, 1, 426762297465917, 296167550464400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int N = 59;
    long coins_sum = 538916655038211955;
    long coins_count = 126025792051250883;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 117322420342948774, 8703371708302107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int N = 59;
    long coins_sum = 9654848714037795;
    long coins_count = 35432;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 578, 34835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int N = 59;
    long coins_sum = 258705353528333340;
    long coins_count = 7243;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 7090, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 46144657475656447;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 29789314951312894, 16355342524343553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int N = 60;
    long coins_sum = 1000000000000000000;
    long coins_count = 29103840;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 29103830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int N = 60;
    long coins_sum = 480405999636919487;
    long coins_count = 12802;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 11899, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int N = 60;
    long coins_sum = 810592835011508993;
    long coins_count = 2806017759933;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 2519869248597, 286148511328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int N = 60;
    long coins_sum = 475528863873341788;
    long coins_count = 55;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 20, 3, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int N = 60;
    long coins_sum = 467793215636398350;
    long coins_count = 95444014686;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 79357435571, 16086579107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int N = 60;
    long coins_sum = 762831240263553150;
    long coins_count = 21945978978610733;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 1, 1, 20053481698985423, 1892497279625306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int N = 60;
    long coins_sum = 666568632456700860;
    long coins_count = 49178712088842364;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 15036345120597119, 34142366968245244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int N = 60;
    long coins_sum = 290984762155487163;
    long coins_count = 50278062302255;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 29514922906374, 20763139395871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int N = 60;
    long coins_sum = 621224167438352846;
    long coins_count = 204150866530099;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 104969620053178, 99181246476915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int N = 60;
    long coins_sum = 899477168369929323;
    long coins_count = 4390731;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 2236877, 2153840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int N = 60;
    long coins_sum = 549970035740203212;
    long coins_count = 51628147061463;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 36121279994472, 15506867066985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int N = 40;
    long coins_sum = 1345346456345;
    long coins_count = 435345;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 229159, 206176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int N = 60;
    long coins_sum = 1000000000000000;
    long coins_count = 100000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 75000000000000, 25000000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int N = 20;
    long coins_sum = 10;
    long coins_count = 15;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int N = 20;
    long coins_sum = 11111111111111111;
    long coins_count = 40000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 37614474807, 2385525183};
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int N = 60;
    long coins_sum = 100000000000000;
    long coins_count = 45;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 19, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int N = 60;
    long coins_sum = 100000000000000000;
    long coins_count = 100000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {100000000000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int N = 3;
    long coins_sum = 7;
    long coins_count = 3;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int N = 58;
    long coins_sum = 210;
    long coins_count = 56;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 7, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int N = 60;
    long coins_sum = 1125899906842624;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int N = 25;
    long coins_sum = 10000000000000;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int N = 60;
    long coins_sum = 100000000000000;
    long coins_count = 100000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {100000000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int N = 3;
    long coins_sum = 8;
    long coins_count = 4;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 4, 0};
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int N = 60;
    long coins_sum = 17179869184;
    long coins_count = 1;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int N = 60;
    long coins_sum = 10000;
    long coins_count = 1000000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int N = 4;
    long coins_sum = 12;
    long coins_count = 5;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {0, 4, 1, 0};
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int N = 2;
    long coins_sum = 1000000000000000000;
    long coins_count = 999999999999999998;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {999999999999999996, 2};
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int N = 56;
    long coins_sum = 100000000000000;
    long coins_count = 100000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {100000000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int N = 59;
    long coins_sum = 288230376151711743;
    long coins_count = 3;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {};
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int N = 2;
    long coins_sum = 1000000000000000;
    long coins_count = 1000000000000000;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {1000000000000000, 0};
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int N = 5;
    long coins_sum = 8;
    long coins_count = 5;
    P8XCoinChangeAnother* pObj = new P8XCoinChangeAnother();
    clock_t start = clock();
    vector<long> result = pObj->solve(N, coins_sum, coins_count);
    clock_t end = clock();
    delete pObj;
    vector<long> expected = {2, 3, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23014564&rd=14552&pm=11222
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
#include <set>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <ctime>
#include <cmath>
#include <algorithm>
#include <malloc.h>
 
using namespace std;
 
class P8XCoinChangeAnother{
public:
  vector<long long> solve(int n, long long coins_sum, long long coins_count) {
    vector<long long> ans(63, 0);
    int k = 0;
    while(coins_sum) {
      if(coins_sum%2) {
        ans[k] = 1;
        coins_count--;
      }
      coins_sum /= 2;
      k++;
    }
    while(ans.size()>n) {
      long long r = 0;
      if(ans.back()) {
        r = 2*ans.back();
        coins_count -= ans.back();
      }
      ans.pop_back();
      ans[ans.size()-1] += r;
    }
    k = n-1;
    while(coins_count>0 && k>0) {
      long long d = min(ans[k], coins_count);
      coins_count -= d;
      ans[k] -= d;
      ans[k-1] += 2*d;
      k--;
    }
    if(coins_count)
      ans.clear();
    return ans;
  }
};

********************************************************************************
*******************************************************************************/