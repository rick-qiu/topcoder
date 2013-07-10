/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4502
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

class CardCosts {
public:
    long mincost(int n, int k);
};

long CardCosts::mincost(int n, int k) {
    long ret;
    return ret;
}


int test0() {
    int n = 6;
    int k = 2;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
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
    int n = 400;
    int k = 1000;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 160000;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1000000;
    int k = 1000;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 999000001000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 113772;
    int k = 188;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12875219937;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 350602;
    int k = 706;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 122747696757;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 330669;
    int k = 942;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 109226036466;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 367236;
    int k = 137;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 133877938922;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 962674;
    int k = 294;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 923589086442;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 587553;
    int k = 929;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 344847014337;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 511197;
    int k = 63;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 257174415253;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 66715;
    int k = 693;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4444477849;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 472060;
    int k = 181;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 221609520776;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 913932;
    int k = 679;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 834041553704;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 315555;
    int k = 234;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 99149435518;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 600470;
    int k = 301;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 359366360418;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 395774;
    int k = 518;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 156334731966;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 819017;
    int k = 27;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 645944984593;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 107857;
    int k = 793;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11618481169;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 490869;
    int k = 246;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 239972910474;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 487757;
    int k = 337;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 237200951117;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 159031;
    int k = 535;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 25243643329;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 106365;
    int k = 477;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11289844897;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 928110;
    int k = 190;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 856854681615;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 548299;
    int k = 267;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 299505855493;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 316065;
    int k = 803;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 99772834131;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 985423;
    int k = 575;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 969369696881;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 868150;
    int k = 127;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 747750267134;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 356076;
    int k = 439;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 126501308268;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 150042;
    int k = 442;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 22461679250;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 443282;
    int k = 178;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 195395039856;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 784984;
    int k = 226;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 613473389885;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 708657;
    int k = 433;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 501034956561;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 528853;
    int k = 900;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 279374832325;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 83447;
    int k = 979;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6956296319;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 987446;
    int k = 86;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 963711972368;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 44131;
    int k = 895;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1945371619;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 471855;
    int k = 865;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 222389848331;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 207236;
    int k = 433;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 42847578110;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 660672;
    int k = 247;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 434720367410;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 366493;
    int k = 716;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 134129567653;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 191847;
    int k = 152;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 36563143313;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 365176;
    int k = 228;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 132768638392;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 42394;
    int k = 14;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1668879608;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 0;
    int k = 654;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 123123;
    int k = 1;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 123123;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 1000000;
    int k = 1;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1000000;
    int k = 2;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 500000500000;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 986200;
    int k = 73;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 959267415380;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 113772;
    int k = 188;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12875219937;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1000000;
    int k = 2;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 500000500000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 3;
    int k = 3;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 5986;
    int k = 654;
    CardCosts* pObj = new CardCosts();
    clock_t start = clock();
    long result = pObj->mincost(n, k);
    clock_t end = clock();
    delete pObj;
    long expected = 35777503;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15094447&rd=7220&pm=4502
********************************************************************************
#include <string> 
#include <vector> 
#include <set> 
#include <map> 
#include <queue> 
#include <stdlib.h> 
#include <string.h> 
#include <stdio.h> 
#include <math.h> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
using namespace std; 
#ifdef WIN32 
typedef __int64 int64; 
#else 
typedef long long int64; 
#endif 
#define size (1100000) 
int64 dyn[size]; 
class CardCosts { 
  public: 
  int64 mincost(int n, int k) { 
    int i; 
    int64 cur1,cur2; 
    int64 min; 
    int64 mincur1,mincur2; 
    if (k==1) 
    { 
      return n; 
    } 
    for (i=0;i<size;i++) 
      dyn[i]=0; 
    for (i=1,cur1=1,cur2=0;i<=n;i++) 
    { 
      min=cur1*cur1+k*dyn[cur2]; 
      mincur1=cur1;mincur2=cur2; 
      cur1--;cur2++; 
      if ((cur2<i) && (cur1>0)) 
        if (min>cur1*cur1+k*dyn[cur2]) 
        { 
          min=cur1*cur1+k*dyn[cur2]; 
          mincur1=cur1;mincur2=cur2; 
        } 
      dyn[i]=min; 
      cur1=mincur1;cur2=mincur2; 
      cur1++; 
    } 
    return dyn[n]; 
  } 
   
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/