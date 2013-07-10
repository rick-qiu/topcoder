/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10232
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

class TheSum {
public:
    int minCost(int a, int b, int c, int insCost, int delCost, int repCost);
};

int TheSum::minCost(int a, int b, int c, int insCost, int delCost, int repCost) {
    int ret;
    return ret;
}


int test0() {
    int a = 44;
    int b = 77;
    int c = 11;
    int insCost = 1;
    int delCost = 1;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int a = 44;
    int b = 77;
    int c = 11;
    int insCost = 4;
    int delCost = 4;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int a = 100;
    int b = 100;
    int c = 10000;
    int insCost = 1000000;
    int delCost = 1000000;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int a = 23456765;
    int b = 19876;
    int c = 927547301;
    int insCost = 7744;
    int delCost = 9876;
    int repCost = 9977;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 48697;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int a = 5;
    int b = 69;
    int c = 35;
    int insCost = 84;
    int delCost = 44;
    int repCost = 63;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int a = 61;
    int b = 81;
    int c = 29;
    int insCost = 81;
    int delCost = 73;
    int repCost = 31;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int a = 11;
    int b = 1;
    int c = 7;
    int insCost = 65;
    int delCost = 68;
    int repCost = 37;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int a = 757148;
    int b = 851001;
    int c = 413357;
    int insCost = 0;
    int delCost = 0;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int a = 749388;
    int b = 890852;
    int c = 766291;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int a = 615545;
    int b = 51437;
    int c = 289611;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int a = 16434;
    int b = 544291;
    int c = 447134;
    int insCost = 0;
    int delCost = 0;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int a = 41605;
    int b = 221269;
    int c = 909135;
    int insCost = 1;
    int delCost = 1;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int a = 379061;
    int b = 873981;
    int c = 670529;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int a = 923811;
    int b = 79501;
    int c = 701607;
    int insCost = 0;
    int delCost = 1;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int a = 71041;
    int b = 629217;
    int c = 496749;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int a = 757148;
    int b = 167851001;
    int c = 301413357;
    int insCost = 970788;
    int delCost = 597709;
    int repCost = 567065;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3969455;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int a = 391749388;
    int b = 4890852;
    int c = 35766291;
    int insCost = 239546;
    int delCost = 37691;
    int repCost = 597006;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 376910;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int a = 3615545;
    int b = 326051437;
    int c = 392289611;
    int insCost = 341404;
    int delCost = 427628;
    int repCost = 215491;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1418859;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int a = 675016434;
    int b = 168544291;
    int c = 683447134;
    int insCost = 89276;
    int delCost = 426790;
    int repCost = 752135;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 714208;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int a = 194041605;
    int b = 706221269;
    int c = 69909135;
    int insCost = 655526;
    int delCost = 970659;
    int repCost = 417541;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3578313;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int a = 37379061;
    int b = 40873981;
    int c = 8670529;
    int insCost = 835600;
    int delCost = 290636;
    int repCost = 351377;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1804557;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int a = 106923811;
    int b = 374079501;
    int c = 466701607;
    int insCost = 546278;
    int delCost = 776620;
    int repCost = 571656;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3303046;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int a = 222071041;
    int b = 36629217;
    int c = 366496749;
    int insCost = 645867;
    int delCost = 839920;
    int repCost = 255787;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1790509;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int a = 33557677;
    int b = 379268590;
    int c = 150378796;
    int insCost = 583325;
    int delCost = 450495;
    int repCost = 230930;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1968905;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int a = 709031779;
    int b = 144328646;
    int c = 513494529;
    int insCost = 547794;
    int delCost = 997805;
    int repCost = 161580;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1131060;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int a = 318773941;
    int b = 170724397;
    int c = 553666286;
    int insCost = 402602;
    int delCost = 581564;
    int repCost = 452469;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2917948;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int a = 368026285;
    int b = 47903381;
    int c = 939151438;
    int insCost = 145155;
    int delCost = 919970;
    int repCost = 159111;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1030041;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int a = 133145006;
    int b = 314295423;
    int c = 450219949;
    int insCost = 203052;
    int delCost = 402822;
    int repCost = 733906;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1215030;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int a = 29331901;
    int b = 31051111;
    int c = 110710191;
    int insCost = 313521;
    int delCost = 695545;
    int repCost = 511284;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2078889;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int a = 87708701;
    int b = 317333277;
    int c = 103301481;
    int insCost = 400406;
    int delCost = 445618;
    int repCost = 550831;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2688497;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int a = 100757147;
    int b = 267851000;
    int c = 401413356;
    int insCost = 971125;
    int delCost = 598369;
    int repCost = 567226;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3403356;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int a = 491749387;
    int b = 104890851;
    int c = 135766290;
    int insCost = 239573;
    int delCost = 38165;
    int repCost = 597007;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 457980;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int a = 103615544;
    int b = 426051436;
    int c = 492289610;
    int insCost = 341523;
    int delCost = 427799;
    int repCost = 215529;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1545162;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int a = 775016433;
    int b = 268544290;
    int c = 783447133;
    int insCost = 90227;
    int delCost = 426873;
    int repCost = 752252;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 631589;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int a = 294041604;
    int b = 806221268;
    int c = 269909133;
    int insCost = 655784;
    int delCost = 970744;
    int repCost = 417563;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 3996288;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int a = 137379060;
    int b = 140873980;
    int c = 108670528;
    int insCost = 835681;
    int delCost = 291073;
    int repCost = 352031;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1868354;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int a = 206923810;
    int b = 474079500;
    int c = 566701606;
    int insCost = 546365;
    int delCost = 776868;
    int repCost = 572137;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2731825;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int a = 1000000000;
    int b = 1000000000;
    int c = 1000000000;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int a = 1;
    int b = 10000;
    int c = 100000000;
    int insCost = 0;
    int delCost = 1;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int a = 1;
    int b = 10000;
    int c = 100000;
    int insCost = 100;
    int delCost = 100;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int a = 7148;
    int b = 851001;
    int c = 301413357;
    int insCost = 0;
    int delCost = 0;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int a = 9388;
    int b = 890852;
    int c = 35766291;
    int insCost = 0;
    int delCost = 0;
    int repCost = 2;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
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
    int a = 5545;
    int b = 51437;
    int c = 392289611;
    int insCost = 2;
    int delCost = 2;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int a = 6434;
    int b = 544291;
    int c = 683447134;
    int insCost = 2;
    int delCost = 0;
    int repCost = 3;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int a = 8;
    int b = 167851001;
    int c = 3357;
    int insCost = 0;
    int delCost = 2;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int a = 8;
    int b = 4890852;
    int c = 6291;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
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
    int a = 5;
    int b = 326051437;
    int c = 9611;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int a = 4;
    int b = 168544291;
    int c = 7134;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int a = 5;
    int b = 706221269;
    int c = 9135;
    int insCost = 0;
    int delCost = 0;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int a = 1;
    int b = 40873981;
    int c = 529;
    int insCost = 2;
    int delCost = 1;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int a = 757148;
    int b = 1;
    int c = 7;
    int insCost = 0;
    int delCost = 0;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int a = 91749388;
    int b = 852;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int a = 3615545;
    int b = 437;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int a = 75016434;
    int b = 291;
    int c = 4;
    int insCost = 0;
    int delCost = 0;
    int repCost = 1;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int a = 757148;
    int b = 167851001;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int a = 391749388;
    int b = 4890852;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int a = 3615545;
    int b = 326051437;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int a = 675016434;
    int b = 168544291;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int a = 194041605;
    int b = 706221269;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int a = 37379061;
    int b = 40873981;
    int c = 1;
    int insCost = 0;
    int delCost = 0;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int a = 170204923;
    int b = 96336140;
    int c = 6100256;
    int insCost = 979139;
    int delCost = 8;
    int repCost = 553;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int a = 151796637;
    int b = 64399928;
    int c = 727228303;
    int insCost = 9;
    int delCost = 1;
    int repCost = 57838;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int a = 96421539;
    int b = 381320822;
    int c = 26242885;
    int insCost = 4016;
    int delCost = 997;
    int repCost = 75628;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 11964;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int a = 634967925;
    int b = 281126025;
    int c = 560586332;
    int insCost = 9;
    int delCost = 3;
    int repCost = 88847;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int a = 37003628;
    int b = 299103499;
    int c = 48804422;
    int insCost = 396;
    int delCost = 197;
    int repCost = 99535;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2169;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int a = 931654;
    int b = 907023;
    int c = 87463378;
    int insCost = 0;
    int delCost = 673277;
    int repCost = 9905;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int a = 170997261;
    int b = 129289090;
    int c = 414041645;
    int insCost = 42873;
    int delCost = 6183;
    int repCost = 696243;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 80379;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int a = 151969068;
    int b = 6207535;
    int c = 315107787;
    int insCost = 9213;
    int delCost = 2605;
    int repCost = 723182;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 31260;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int a = 159373369;
    int b = 821294922;
    int c = 503935146;
    int insCost = 4935;
    int delCost = 2385;
    int repCost = 730277;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 28620;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int a = 700180466;
    int b = 946855325;
    int c = 802263555;
    int insCost = 67885;
    int delCost = 7498;
    int repCost = 23075;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 113051;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int a = 745444484;
    int b = 614713473;
    int c = 62523403;
    int insCost = 46273;
    int delCost = 8152;
    int repCost = 169924;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 130432;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int a = 700776847;
    int b = 396943122;
    int c = 9635533;
    int insCost = 44947;
    int delCost = 9262;
    int repCost = 28478;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 148192;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int a = 98073218;
    int b = 89851356;
    int c = 535901892;
    int insCost = 181;
    int delCost = 101;
    int repCost = 56020;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1149;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int a = 721913117;
    int b = 16263;
    int c = 492078980;
    int insCost = 0;
    int delCost = 902929;
    int repCost = 0;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int a = 76013338;
    int b = 565764895;
    int c = 440924157;
    int insCost = 1;
    int delCost = 1;
    int repCost = 56670;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int a = 75535472;
    int b = 91636867;
    int c = 388853115;
    int insCost = 511;
    int delCost = 2257;
    int repCost = 72846;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 4599;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int a = 78362544;
    int b = 577042539;
    int c = 6133347;
    int insCost = 277;
    int delCost = 32796;
    int repCost = 994252;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 2770;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int a = 11206909;
    int b = 49705268;
    int c = 930129862;
    int insCost = 896;
    int delCost = 491;
    int repCost = 8888;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 5806;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int a = 10;
    int b = 10;
    int c = 10;
    int insCost = 100;
    int delCost = 1;
    int repCost = 100;
    TheSum* pObj = new TheSum();
    clock_t start = clock();
    int result = pObj->minCost(a, b, c, insCost, delCost, repCost);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=307060&rd=13699&pm=10232
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <math.h>
#include <complex>
#include <stdlib.h>
#include <ctype.h>
#include <queue>
#include <limits.h>
 
using namespace std;
 
long long dp[8][2][20][20][20];
int n, m, l;
char A[20], B[20], C[20];
int ic, dc, rc;
 
class TheSum {
  void update(int &a, int b) {
    if (b < 0)
      return;
    if (a < 0 || a > b)
      a = b;
  }
  long long doit(int i, int j, int k, int c, int mode) {
    long long &ret = dp[mode][c][i][j][k];
    if (ret >= 0)
      return ret;
    ret = INT_MAX;
    // try deleting digits
    if (i < n)
      ret = min(ret, doit(i+1, j, k, c, mode) + dc);
    if (j < m)
      ret = min(ret, doit(i, j+1, k, c, mode) + dc);
    if (k < l)
      ret = min(ret, doit(i, j, k+1, c, mode) + dc);
    // try matching
    for (int x=0; x<10; ++x)
      for (int y=0; y<10; ++y) {
        for (int c2=0; c2<2; ++c2) {
          int t = x + y + c2;
          if (t / 10 != c)
            continue;
          int z = t % 10;
          // now either insert or replace as necessary
          for (int mask=0; mask<7; ++mask) {
            int i2 = i+1, j2 = j+1, k2 = k+1;
            int tcost = 0;
            if (mask&1) {
              --i2;
              if (i || x || (mode&1))
                tcost += ic;
            }
            else {
              if (i2 > n || !(mode&1) && !x)
                continue;
              if (A[i]-'0' != x)
                tcost += rc;
            }
            if (mask&2) {
              --j2;
              if (j || y || (mode&2))
                tcost += ic;
            }
            else {
              if (j2 > m || !(mode&2) && !y)
                continue;
              if (B[j]-'0' != y)
                tcost += rc;
            }
            if (mask&4) {
              --k2;
              if (k || z || (mode&4))
                tcost += ic;
            }
            else {
              if (k2 > l || !(mode&4) && !z)
                continue;
              if (C[k]-'0' != z)
                tcost += rc;
            }
            int mode2 = mode;
            if (x)
              mode2 |= 1;
            if (y)
              mode2 |= 2;
            if (z)
              mode2 |= 4;
            ret = min(ret, doit(i2, j2, k2, c2, mode2) + tcost);
          }
        }
      }
    return ret;
  }
  public:
  int minCost(int a, int b, int c, int insCost, int delCost, int repCost) {
    ic = insCost;
    dc = delCost;
    rc = repCost;
    n = sprintf(A, "%d", a);
    m = sprintf(B, "%d", b);
    l = sprintf(C, "%d", c);
    memset(dp, -1, sizeof(dp));
    dp[7][0][n][m][l] = 0;
    return doit(0, 0, 0, 0, 0);
  }
};
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/