/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10170
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

class ProductOfPrices {
public:
    int product(int N, int L, int X0, int A, int B);
};

int ProductOfPrices::product(int N, int L, int X0, int A, int B) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    int L = 10;
    int X0 = 3;
    int A = 1;
    int B = 1;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
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
    int L = 20;
    int X0 = 5;
    int A = 2;
    int B = 3;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 4;
    int L = 21;
    int X0 = 1;
    int A = 7;
    int B = 1;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3087;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 10;
    int L = 100;
    int X0 = 4;
    int A = 37;
    int B = 11;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 591860767;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 13581;
    int L = 95224;
    int X0 = 350;
    int A = 92105;
    int B = 7812;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 425853540;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 32587;
    int L = 72963;
    int X0 = 858;
    int A = 57778;
    int B = 15129;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 873253283;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 6393;
    int L = 85434;
    int X0 = 19434;
    int A = 28677;
    int B = 81819;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 936153250;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 25435;
    int L = 68151;
    int X0 = 8486;
    int A = 53726;
    int B = 54733;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 52874401;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 1350;
    int L = 61602;
    int X0 = 33120;
    int A = 56633;
    int B = 7108;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 719507598;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 23301;
    int L = 66993;
    int X0 = 18052;
    int A = 61204;
    int B = 14102;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 124349808;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 21142;
    int L = 17989;
    int X0 = 13131;
    int A = 12663;
    int B = 8305;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 14469149;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 44016;
    int L = 37799;
    int X0 = 14927;
    int A = 22974;
    int B = 14193;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 100706128;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 33201;
    int L = 33547;
    int X0 = 27394;
    int A = 24075;
    int B = 29660;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 530872757;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 27301;
    int L = 61816;
    int X0 = 34438;
    int A = 25550;
    int B = 44538;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 396374845;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 30818;
    int L = 91558;
    int X0 = 52102;
    int A = 70697;
    int B = 42268;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 949547358;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 2526;
    int L = 19991;
    int X0 = 17815;
    int A = 17571;
    int B = 7841;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 793586311;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 2407;
    int L = 38520;
    int X0 = 247;
    int A = 22469;
    int B = 30071;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 828290093;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 1227;
    int L = 58191;
    int X0 = 29113;
    int A = 27041;
    int B = 28658;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 346407296;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 19736;
    int L = 10003;
    int X0 = 3039;
    int A = 1678;
    int B = 4843;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 955301883;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 48318;
    int L = 17478;
    int X0 = 14601;
    int A = 847;
    int B = 5638;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 294755456;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 11092;
    int L = 17597;
    int X0 = 17395;
    int A = 10850;
    int B = 9477;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 26934147;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 48838;
    int L = 3744;
    int X0 = 1920;
    int A = 608;
    int B = 3146;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 660894866;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 17124;
    int L = 85887;
    int X0 = 19591;
    int A = 71228;
    int B = 48195;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 88064867;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 8531;
    int L = 39958;
    int X0 = 6893;
    int A = 7255;
    int B = 38435;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 228638846;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 30572;
    int L = 37655;
    int X0 = 15312;
    int A = 14475;
    int B = 718;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 736603828;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 10113;
    int L = 94972;
    int X0 = 53507;
    int A = 16248;
    int B = 73321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 107751165;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 26171;
    int L = 58377;
    int X0 = 54646;
    int A = 25112;
    int B = 19293;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 677427515;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 21301;
    int L = 40949;
    int X0 = 18444;
    int A = 9959;
    int B = 24319;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 231911130;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 2023;
    int L = 75163;
    int X0 = 44017;
    int A = 1422;
    int B = 55302;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 658964165;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 20484;
    int L = 10811;
    int X0 = 7998;
    int A = 2674;
    int B = 1965;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 981910604;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 12388;
    int L = 70517;
    int X0 = 34089;
    int A = 26554;
    int B = 66754;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 311468353;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 40050;
    int L = 13353;
    int X0 = 1835;
    int A = 2036;
    int B = 8572;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 420465876;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 41901;
    int L = 64956;
    int X0 = 53878;
    int A = 25052;
    int B = 49369;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 501018975;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 28250;
    int L = 66466;
    int X0 = 35109;
    int A = 36140;
    int B = 38324;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 43524289;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 17051;
    int L = 69954;
    int X0 = 58152;
    int A = 35465;
    int B = 36515;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 92318821;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 43787;
    int L = 31570;
    int X0 = 1645;
    int A = 465;
    int B = 15941;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 982368909;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 1517;
    int L = 50473;
    int X0 = 46468;
    int A = 27278;
    int B = 89;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 77747239;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 28613;
    int L = 94639;
    int X0 = 36937;
    int A = 58671;
    int B = 70752;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 517332894;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 42450;
    int L = 48475;
    int X0 = 13227;
    int A = 26688;
    int B = 34939;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 787721080;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 32639;
    int L = 90765;
    int X0 = 26079;
    int A = 67169;
    int B = 86382;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 416241334;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 21973;
    int L = 94060;
    int X0 = 17339;
    int A = 3642;
    int B = 85831;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 877812144;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 8673;
    int L = 12119;
    int X0 = 10495;
    int A = 4108;
    int B = 6172;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 837580511;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 39508;
    int L = 27106;
    int X0 = 4112;
    int A = 21;
    int B = 19624;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 498491;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 32673;
    int L = 65923;
    int X0 = 32266;
    int A = 10144;
    int B = 40888;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 609727347;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 135035;
    int L = 200000;
    int X0 = 160896;
    int A = 188253;
    int B = 164579;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 225360414;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 56027;
    int L = 91714;
    int X0 = 37679;
    int A = 79857;
    int B = 29983;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 502723285;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 159167;
    int L = 158159;
    int X0 = 144403;
    int A = 109260;
    int B = 31426;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 939542237;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 133506;
    int L = 63956;
    int X0 = 44366;
    int A = 13405;
    int B = 40355;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 198420718;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 87903;
    int L = 102154;
    int X0 = 39621;
    int A = 72647;
    int B = 81439;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 366060051;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 105083;
    int L = 131673;
    int X0 = 104542;
    int A = 10253;
    int B = 128840;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 395301960;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 62492;
    int L = 187471;
    int X0 = 123475;
    int A = 109454;
    int B = 115033;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 724482282;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 200000;
    int L = 200000;
    int X0 = 96826;
    int A = 92288;
    int B = 76859;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 966728250;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 150507;
    int L = 200000;
    int X0 = 144526;
    int A = 196414;
    int B = 81964;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 300128655;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 200000;
    int L = 146857;
    int X0 = 143819;
    int A = 87990;
    int B = 62518;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 303911806;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 92681;
    int L = 200000;
    int X0 = 32261;
    int A = 146108;
    int B = 190794;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 703116537;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 200000;
    int L = 200000;
    int X0 = 176100;
    int A = 28551;
    int B = 157621;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 485400433;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 200000;
    int L = 200000;
    int X0 = 113701;
    int A = 80020;
    int B = 168689;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 821676669;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 200000;
    int L = 200000;
    int X0 = 53631;
    int A = 81883;
    int B = 75644;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 51745470;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 200000;
    int L = 200000;
    int X0 = 130279;
    int A = 194876;
    int B = 143888;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 351328776;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 200000;
    int L = 200000;
    int X0 = 114880;
    int A = 168329;
    int B = 4021;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 83526623;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 200000;
    int L = 200000;
    int X0 = 52590;
    int A = 93116;
    int B = 158850;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 442195328;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 200000;
    int L = 200000;
    int X0 = 37193;
    int A = 94162;
    int B = 69515;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1787913;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 200000;
    int L = 200000;
    int X0 = 10405;
    int A = 121012;
    int B = 118630;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 261044987;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 200000;
    int L = 200000;
    int X0 = 140219;
    int A = 185071;
    int B = 1479;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 909353568;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 5;
    int L = 200000;
    int X0 = 999999999;
    int A = 123456789;
    int B = 987654321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 499739175;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 199999;
    int L = 200000;
    int X0 = 999999999;
    int A = 123456789;
    int B = 987654321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 988935907;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 43661;
    int L = 200000;
    int X0 = 999999999;
    int A = 123456789;
    int B = 987654321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 498323077;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 200000;
    int L = 200000;
    int X0 = 999999999;
    int A = 123456789;
    int B = 987654321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 725110457;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 200000;
    int L = 200000;
    int X0 = 200000;
    int A = 200000;
    int B = 200000;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 200000;
    int L = 100;
    int X0 = 4;
    int A = 37;
    int B = 11;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 118468348;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 200000;
    int L = 199997;
    int X0 = 999999999;
    int A = 123456789;
    int B = 987654321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 435256351;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 200000;
    int L = 17;
    int X0 = 1276512;
    int A = 12675127;
    int B = 1276182;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 262774090;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 200000;
    int L = 199967;
    int X0 = 999999999;
    int A = 123456789;
    int B = 987654321;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 27701017;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 200000;
    int L = 200000;
    int X0 = 1;
    int A = 1;
    int B = 1;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 407222067;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 200000;
    int L = 200000;
    int X0 = 999999997;
    int A = 999999995;
    int B = 999999993;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 623728084;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 200000;
    int L = 199999;
    int X0 = 999999999;
    int A = 999999999;
    int B = 999999999;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 826784755;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 200000;
    int L = 197637;
    int X0 = 693997111;
    int A = 979735977;
    int B = 345999;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 857097268;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 200000;
    int L = 200000;
    int X0 = 1000000;
    int A = 1000000;
    int B = 1000000;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 200000;
    int L = 194673;
    int X0 = 1000000000;
    int A = 999999998;
    int B = 77697697;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 604808605;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 2;
    int L = 11;
    int X0 = 22;
    int A = 0;
    int B = 5;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 200000;
    int L = 200000;
    int X0 = 1000000000;
    int A = 1000000000;
    int B = 1000000000;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 200000;
    int L = 200000;
    int X0 = 5;
    int A = 6;
    int B = 7;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 661005811;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 200000;
    int L = 200000;
    int X0 = 392032;
    int A = 328943;
    int B = 4894343;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 804429083;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 200000;
    int L = 200000;
    int X0 = 2432434;
    int A = 3235323;
    int B = 13213212;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 403372060;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 200000;
    int L = 98765;
    int X0 = 500000;
    int A = 1234567;
    int B = 678912345;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 568102096;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 200000;
    int L = 200000;
    int X0 = 0;
    int A = 1;
    int B = 1;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 407222067;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 200000;
    int L = 200000;
    int X0 = 456165158;
    int A = 489451458;
    int B = 789484818;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 465182110;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 200000;
    int L = 197256;
    int X0 = 999999999;
    int A = 999732569;
    int B = 925943587;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 576379154;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 200000;
    int L = 1;
    int X0 = 15;
    int A = 15;
    int B = 15;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 200000;
    int L = 100000;
    int X0 = 99;
    int A = 19999999;
    int B = 999999917;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 842482663;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 199937;
    int L = 184214;
    int X0 = 923431534;
    int A = 923431537;
    int B = 923431539;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 10305340;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 200000;
    int L = 1;
    int X0 = 1;
    int A = 7;
    int B = 1;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
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
    int N = 20;
    int L = 10000;
    int X0 = 999999;
    int A = 6;
    int B = 4;
    ProductOfPrices* pObj = new ProductOfPrices();
    clock_t start = clock();
    int result = pObj->product(N, L, X0, A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 225219841;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13515&pm=10170
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
typedef long long int64;
template<class T> inline T lowbit(T n){return (n^(n-1))&n;}
 
const int64 MODE=1000000007;
const int maxsize=1000000;
 
class ProductOfPrices
{
public:
  int n,m;
  int64 X[maxsize];
  int64 S1[maxsize],S2[maxsize];
  void addS(int64 S[],int i,int64 cd)
  {
    for (;i<=m;i+=lowbit(i)) S[i]+=cd;
  }
  int64 getS(int64 S[],int H,int T)
  {
    return getS(S,T)-getS(S,H-1);
  }
  int64 getS(int64 S[],int i)
  {
    int64 total=0;
    for (;i>0;i-=lowbit(i)) total+=S[i];
    return total;
  }
  int product(int _n, int _m, int X0, int A, int B)
  {
    n=_n;
    m=_m;
    X[0]=X0%m;
    for (int i=1;i<n;i++)
      X[i]=(X[i-1]*(int64)A+(int64)B)%m;
    for (int i=0;i<n;i++) X[i]++;
    memset(S1,0,sizeof(S1));
    memset(S2,0,sizeof(S2));
    addS(S1,(int)X[0],1);
    addS(S2,(int)X[0],X[0]);
    int64 result=1;
    for (int i=1;i<n;i++)
    {
      int key=(int)X[i];
      int64 C1=getS(S1,1,key-1);
      int64 B1=getS(S2,1,key-1);
      int64 C2=getS(S1,key+1,m);
      int64 B2=getS(S2,key+1,m);
      int64 total=(int64)key*C1-B1+B2-(int64)key*C2;
      total%=MODE;
      result=(result*total)%MODE;
      addS(S1,key,1);
      addS(S2,key,key);
    }
    return (int)result;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/