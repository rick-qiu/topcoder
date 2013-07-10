/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11742
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

class BigAndSmallAirports {
public:
    long solve(int Nlo, int Nhi, int Blo, int Bhi, int Slo, int Shi);
};

long BigAndSmallAirports::solve(int Nlo, int Nhi, int Blo, int Bhi, int Slo, int Shi) {
    long ret;
    return ret;
}


int test0() {
    int Nlo = 20;
    int Nhi = 20;
    int Blo = 3;
    int Bhi = 3;
    int Slo = 2;
    int Shi = 2;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int Nlo = 1;
    int Nhi = 1;
    int Blo = 10;
    int Bhi = 10;
    int Slo = 2;
    int Shi = 2;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int Nlo = 10;
    int Nhi = 10;
    int Blo = 8;
    int Bhi = 8;
    int Slo = 3;
    int Shi = 3;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int Nlo = 10;
    int Nhi = 100;
    int Blo = 13;
    int Bhi = 15;
    int Slo = 18;
    int Shi = 22;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int Nlo = 30;
    int Nhi = 32;
    int Blo = 8;
    int Bhi = 10;
    int Slo = 6;
    int Shi = 8;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 768;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int Nlo = 1;
    int Nhi = 10000000;
    int Blo = 1;
    int Bhi = 200;
    int Slo = 1;
    int Shi = 200;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 995000296045760393;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int Nlo = 1234567;
    int Nhi = 9876543;
    int Blo = 20;
    int Bhi = 170;
    int Slo = 10;
    int Shi = 160;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 614060525958171480;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int Nlo = 1;
    int Nhi = 1;
    int Blo = 1;
    int Bhi = 1;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int Nlo = 1;
    int Nhi = 1;
    int Blo = 2;
    int Bhi = 2;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int Nlo = 2;
    int Nhi = 2;
    int Blo = 2;
    int Bhi = 2;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int Nlo = 3;
    int Nhi = 3;
    int Blo = 2;
    int Bhi = 3;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
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
    int Nlo = 4;
    int Nhi = 4;
    int Blo = 1;
    int Bhi = 10;
    int Slo = 1;
    int Shi = 10;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int Nlo = 1;
    int Nhi = 19;
    int Blo = 1;
    int Bhi = 24;
    int Slo = 1;
    int Shi = 25;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 16537;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int Nlo = 2;
    int Nhi = 15;
    int Blo = 2;
    int Bhi = 15;
    int Slo = 2;
    int Shi = 125;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 4995;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int Nlo = 351;
    int Nhi = 673532;
    int Blo = 2;
    int Bhi = 165;
    int Slo = 3;
    int Shi = 162;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 2994071838351546;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int Nlo = 1;
    int Nhi = 7465338;
    int Blo = 99;
    int Bhi = 199;
    int Slo = 14;
    int Shi = 155;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 353587193620875457;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int Nlo = 1;
    int Nhi = 7382746;
    int Blo = 6;
    int Bhi = 76;
    int Slo = 23;
    int Shi = 70;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 38589512136590030;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int Nlo = 2842837;
    int Nhi = 4337404;
    int Blo = 46;
    int Bhi = 77;
    int Slo = 14;
    int Shi = 73;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 8123640594958168;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int Nlo = 2694072;
    int Nhi = 4915024;
    int Blo = 3;
    int Bhi = 178;
    int Slo = 166;
    int Shi = 166;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 101396694182364;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int Nlo = 18722;
    int Nhi = 7363994;
    int Blo = 109;
    int Bhi = 149;
    int Slo = 6;
    int Shi = 121;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 126486994715372655;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int Nlo = 5563449;
    int Nhi = 6191571;
    int Blo = 14;
    int Bhi = 50;
    int Slo = 2;
    int Shi = 4;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 409789782445683;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int Nlo = 3156400;
    int Nhi = 7996470;
    int Blo = 9;
    int Bhi = 131;
    int Slo = 16;
    int Shi = 27;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 35465314863380184;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int Nlo = 1608841;
    int Nhi = 8422041;
    int Blo = 3;
    int Bhi = 10;
    int Slo = 53;
    int Shi = 120;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int Nlo = 3;
    int Nhi = 9612968;
    int Blo = 49;
    int Bhi = 99;
    int Slo = 2;
    int Shi = 105;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 169663259247864896;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int Nlo = 2;
    int Nhi = 8589826;
    int Blo = 1;
    int Bhi = 74;
    int Slo = 20;
    int Shi = 102;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 54785463833512673;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int Nlo = 4621442;
    int Nhi = 7365436;
    int Blo = 14;
    int Bhi = 129;
    int Slo = 3;
    int Shi = 186;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 130679672795188800;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int Nlo = 1517603;
    int Nhi = 5326209;
    int Blo = 1;
    int Bhi = 163;
    int Slo = 5;
    int Shi = 189;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 163703731555528989;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int Nlo = 474239;
    int Nhi = 670504;
    int Blo = 1;
    int Bhi = 161;
    int Slo = 94;
    int Shi = 133;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 213440796061500;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int Nlo = 3280093;
    int Nhi = 5659808;
    int Blo = 15;
    int Bhi = 85;
    int Slo = 37;
    int Shi = 116;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 12509364962038224;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int Nlo = 1171667;
    int Nhi = 6031756;
    int Blo = 1;
    int Bhi = 69;
    int Slo = 12;
    int Shi = 151;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 28935181332518625;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int Nlo = 643244;
    int Nhi = 3156906;
    int Blo = 23;
    int Bhi = 152;
    int Slo = 34;
    int Shi = 137;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 33031858506691408;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int Nlo = 486358;
    int Nhi = 1309619;
    int Blo = 3;
    int Bhi = 93;
    int Slo = 84;
    int Shi = 126;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 33267628428705;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int Nlo = 4805602;
    int Nhi = 9656579;
    int Blo = 4;
    int Bhi = 4;
    int Slo = 108;
    int Shi = 109;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int Nlo = 3;
    int Nhi = 8517749;
    int Blo = 11;
    int Bhi = 38;
    int Slo = 60;
    int Shi = 82;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int Nlo = 979260;
    int Nhi = 1227372;
    int Blo = 67;
    int Bhi = 89;
    int Slo = 73;
    int Shi = 175;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 37229631551656;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int Nlo = 3512950;
    int Nhi = 7739834;
    int Blo = 1;
    int Bhi = 89;
    int Slo = 1;
    int Shi = 2;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 4161869958799995;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int Nlo = 3052859;
    int Nhi = 3542395;
    int Blo = 33;
    int Bhi = 114;
    int Slo = 2;
    int Shi = 27;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 3441710877679152;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int Nlo = 1011809;
    int Nhi = 1552010;
    int Blo = 1;
    int Bhi = 91;
    int Slo = 2;
    int Shi = 18;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 953559578123217;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int Nlo = 3026418;
    int Nhi = 4624589;
    int Blo = 3;
    int Bhi = 185;
    int Slo = 160;
    int Shi = 172;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 1510112101910178;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int Nlo = 648389;
    int Nhi = 4238073;
    int Blo = 3;
    int Bhi = 123;
    int Slo = 3;
    int Shi = 10;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 8174043800109440;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int Nlo = 1603691;
    int Nhi = 3904315;
    int Blo = 35;
    int Bhi = 151;
    int Slo = 28;
    int Shi = 124;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 45960839502435000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int Nlo = 1;
    int Nhi = 1122725;
    int Blo = 2;
    int Bhi = 21;
    int Slo = 2;
    int Shi = 137;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 119748905376604;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int Nlo = 2210879;
    int Nhi = 4355962;
    int Blo = 32;
    int Bhi = 38;
    int Slo = 62;
    int Shi = 110;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int Nlo = 4033862;
    int Nhi = 6524304;
    int Blo = 12;
    int Bhi = 28;
    int Slo = 1;
    int Shi = 16;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 3378845210774953;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int Nlo = 1627604;
    int Nhi = 4386203;
    int Blo = 11;
    int Bhi = 152;
    int Slo = 53;
    int Shi = 128;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 38770113726793800;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int Nlo = 4565338;
    int Nhi = 6756078;
    int Blo = 165;
    int Bhi = 176;
    int Slo = 31;
    int Shi = 138;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 16071886894798224;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int Nlo = 1673150;
    int Nhi = 5481169;
    int Blo = 28;
    int Bhi = 74;
    int Slo = 13;
    int Shi = 158;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 24328711126797060;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int Nlo = 2873321;
    int Nhi = 3783310;
    int Blo = 75;
    int Bhi = 116;
    int Slo = 3;
    int Shi = 3;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 127206858737070;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int Nlo = 1247795;
    int Nhi = 5970387;
    int Blo = 2;
    int Bhi = 154;
    int Slo = 148;
    int Shi = 187;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 357929724926676;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int Nlo = 2561949;
    int Nhi = 2562768;
    int Blo = 53;
    int Bhi = 175;
    int Slo = 56;
    int Shi = 101;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 9326937332810;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int Nlo = 7376709;
    int Nhi = 7860444;
    int Blo = 58;
    int Bhi = 64;
    int Slo = 13;
    int Shi = 28;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 412762583020480;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int Nlo = 1;
    int Nhi = 3171794;
    int Blo = 2;
    int Bhi = 83;
    int Slo = 17;
    int Shi = 27;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 3375226184364433;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int Nlo = 2;
    int Nhi = 4849396;
    int Blo = 2;
    int Bhi = 43;
    int Slo = 32;
    int Shi = 40;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 740774667508602;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int Nlo = 3170985;
    int Nhi = 7782763;
    int Blo = 89;
    int Bhi = 176;
    int Slo = 3;
    int Shi = 190;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 287841730512682500;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int Nlo = 1851436;
    int Nhi = 3068748;
    int Blo = 15;
    int Bhi = 28;
    int Slo = 3;
    int Shi = 93;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 775628126238231;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int Nlo = 2146370;
    int Nhi = 2647180;
    int Blo = 57;
    int Bhi = 110;
    int Slo = 27;
    int Shi = 64;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 2419868879237376;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int Nlo = 6942259;
    int Nhi = 9883126;
    int Blo = 2;
    int Bhi = 93;
    int Slo = 29;
    int Shi = 162;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 51460491904552640;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int Nlo = 3066505;
    int Nhi = 6551988;
    int Blo = 26;
    int Bhi = 156;
    int Slo = 41;
    int Shi = 49;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 16745792658076710;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int Nlo = 4781827;
    int Nhi = 6602978;
    int Blo = 47;
    int Bhi = 172;
    int Slo = 45;
    int Shi = 184;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 84250431117047664;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int Nlo = 3;
    int Nhi = 2500328;
    int Blo = 73;
    int Bhi = 125;
    int Slo = 28;
    int Shi = 148;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 11762474953235420;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int Nlo = 1157770;
    int Nhi = 6894273;
    int Blo = 120;
    int Bhi = 142;
    int Slo = 1;
    int Shi = 121;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 64204917675505608;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int Nlo = 5669338;
    int Nhi = 9995100;
    int Blo = 24;
    int Bhi = 37;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 474324524213358;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int Nlo = 470766;
    int Nhi = 542408;
    int Blo = 90;
    int Bhi = 134;
    int Slo = 20;
    int Shi = 54;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 57162237432300;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int Nlo = 1200558;
    int Nhi = 1975598;
    int Blo = 32;
    int Bhi = 132;
    int Slo = 125;
    int Shi = 199;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 34463137414692;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int Nlo = 556273;
    int Nhi = 9228003;
    int Blo = 8;
    int Bhi = 40;
    int Slo = 132;
    int Shi = 144;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int Nlo = 7199383;
    int Nhi = 8131827;
    int Blo = 20;
    int Bhi = 22;
    int Slo = 1;
    int Shi = 137;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 428865356402865;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int Nlo = 4276846;
    int Nhi = 7507419;
    int Blo = 22;
    int Bhi = 64;
    int Slo = 12;
    int Shi = 16;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 4092519257270235;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int Nlo = 1181859;
    int Nhi = 2186010;
    int Blo = 114;
    int Bhi = 177;
    int Slo = 2;
    int Shi = 40;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 4220554291689216;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int Nlo = 1;
    int Nhi = 7047058;
    int Blo = 125;
    int Bhi = 132;
    int Slo = 35;
    int Shi = 84;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 9932209515433053;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int Nlo = 2;
    int Nhi = 3451945;
    int Blo = 2;
    int Bhi = 62;
    int Slo = 103;
    int Shi = 106;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int Nlo = 1;
    int Nhi = 2969005;
    int Blo = 15;
    int Bhi = 78;
    int Slo = 6;
    int Shi = 7;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 564159973678784;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int Nlo = 2238877;
    int Nhi = 4477333;
    int Blo = 27;
    int Bhi = 68;
    int Slo = 126;
    int Shi = 155;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int Nlo = 522961;
    int Nhi = 4045920;
    int Blo = 11;
    int Bhi = 19;
    int Slo = 2;
    int Shi = 14;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 861135574871880;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int Nlo = 2;
    int Nhi = 792385;
    int Blo = 3;
    int Bhi = 32;
    int Slo = 15;
    int Shi = 18;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 19464167305272;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int Nlo = 355658;
    int Nhi = 731090;
    int Blo = 62;
    int Bhi = 75;
    int Slo = 62;
    int Shi = 68;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 14280063446250;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int Nlo = 4922631;
    int Nhi = 9642499;
    int Blo = 63;
    int Bhi = 156;
    int Slo = 3;
    int Shi = 174;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 344105675371082394;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int Nlo = 2;
    int Nhi = 10000000;
    int Blo = 1;
    int Bhi = 200;
    int Slo = 1;
    int Shi = 200;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 995000296045740493;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int Nlo = 2;
    int Nhi = 2;
    int Blo = 100;
    int Bhi = 100;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int Nlo = 100;
    int Nhi = 100;
    int Blo = 200;
    int Bhi = 200;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int Nlo = 10;
    int Nhi = 10;
    int Blo = 20;
    int Bhi = 20;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int Nlo = 5;
    int Nhi = 5;
    int Blo = 4;
    int Bhi = 4;
    int Slo = 1;
    int Shi = 1;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int Nlo = 30;
    int Nhi = 2000000;
    int Blo = 1;
    int Bhi = 10;
    int Slo = 1;
    int Shi = 8;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 88000113979825;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int Nlo = 41;
    int Nhi = 8508;
    int Blo = 101;
    int Bhi = 135;
    int Slo = 125;
    int Shi = 170;
    BigAndSmallAirports* pObj = new BigAndSmallAirports();
    clock_t start = clock();
    long result = pObj->solve(Nlo, Nhi, Blo, Bhi, Slo, Shi);
    clock_t end = clock();
    delete pObj;
    long expected = 1990833295;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22707311&rd=14722&pm=11742
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
 
#define FOR(i,a,b) for(__typeof(b) i=(a);i!=(b);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) a.begin(),a.end()
#define EACH(i,a) FOR(i,a.begin(),a.end())
#define PB push_back
#define iss istringstream
#define SZ(a) (int)a.size()
#define CLEAR(a) memset(a,0,sizeof(a))
#define ll long long
 
class BigAndSmallAirports {
public:
  long long solve(int, int, int, int, int, int);
};
 
inline long long sum(long long a) {
  return ((a * (a + 1)) >> 1);
}
 
long long BigAndSmallAirports::solve(int Nlo, int Nhi, int Blo, int Bhi, int Slo, int Shi) {
  long long ans = 0;
  for(int B = Blo; B <= Bhi ; B++) {
    for(int S = Slo ; S <= Shi ; S++) {
      if (S < B) {
        //X == 0
        if (S > 1) {
          ans += (Nhi - Nlo + 1);
        }  else {
          if (Nlo <= 1 && 1 <= Nhi) {ans++;}
          if (Nlo <= 2 && 2 <= Nhi) {ans++;}
        }
        //1 <= X <= S
        long long add = max(Nhi - max(Nlo, B + 1) + 1, 0);
        ans += (add * S);
        //S < X <= B
        for(int X = S + 1 ; X <= B ; X++) {
          long long lobound = (((long long)X) * (B + 1 - X) + (S - 1)) / S;
          lobound += X;
          lobound = max(lobound, (long long)Nlo);
          ans += max((long long)Nhi - lobound + 1, (long long)0);
        }
        // B < X <= Nlo
        if (B + 1 < Nlo) {
          ans += ((long long)(Nlo - B - 1)) * (Nhi - Nlo + 1);
          ans += sum(Nhi - Nlo + 1);
        }  else if (B + 1 <= Nhi) {
          ans += sum(Nhi - B);
        }
      }
    }
  }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/