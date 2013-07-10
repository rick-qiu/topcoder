/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3514
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

class QuadrilateralSearch {
public:
    double findLargest(int d, int n, int c, int g);
};

double QuadrilateralSearch::findLargest(int d, int n, int c, int g) {
    double ret;
    return ret;
}


int test0() {
    int d = 10;
    int n = 13;
    int c = 4;
    int g = 3;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 48.9142858122447;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int d = 20;
    int n = 31;
    int c = 6;
    int g = 5;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 179.10027343916573;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int d = 1000;
    int n = 80000;
    int c = 50;
    int g = 3;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028489712517284715;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int d = 100;
    int n = 1200;
    int c = 20;
    int g = 139;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 4965.195939678256;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int d = 123;
    int n = 654321;
    int c = 123;
    int g = 542;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 70.12880984159676;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 123456789;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 499718.04154028185;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int d = 1000;
    int n = 485941898;
    int c = 4;
    int g = 433465349;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 123623.29419658787;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int d = 7;
    int n = 917812527;
    int c = 417;
    int g = 469490540;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 24.49974943490183;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int d = 492;
    int n = 682914198;
    int c = 146;
    int g = 462852991;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 120989.03546487243;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int d = 182;
    int n = 860251130;
    int c = 401;
    int g = 543341301;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 16475.852613059076;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int d = 468;
    int n = 756769122;
    int c = 135;
    int g = 395816053;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 109470.37892456003;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int d = 325;
    int n = 485078038;
    int c = 408;
    int g = 363359455;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 52811.11983240667;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int d = 952;
    int n = 416576804;
    int c = 461;
    int g = 299709161;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 453118.75393075484;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int d = 660;
    int n = 884578408;
    int c = 356;
    int g = 771557771;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 217797.39977388317;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int d = 18;
    int n = 137434901;
    int c = 270;
    int g = 129105522;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 161.45094189116742;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int d = 238;
    int n = 541662396;
    int c = 414;
    int g = 250522913;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 28321.962405276536;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int d = 820;
    int n = 35066069;
    int c = 77;
    int g = 19578542;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 335969.27029588306;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int d = 329;
    int n = 581203641;
    int c = 464;
    int g = 21778868;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 54119.49559231788;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int d = 850;
    int n = 667594374;
    int c = 140;
    int g = 353088535;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 361212.89279805066;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int d = 467;
    int n = 869345368;
    int c = 10;
    int g = 715960973;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 103969.7748605738;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int d = 821;
    int n = 743402422;
    int c = 138;
    int g = 238955541;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 337020.45986480213;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int d = 136;
    int n = 652375401;
    int c = 226;
    int g = 436794958;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 9247.040229894676;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int d = 861;
    int n = 217663230;
    int c = 132;
    int g = 114844267;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 370618.2644862393;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int d = 559;
    int n = 22578896;
    int c = 42;
    int g = 13179731;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 156228.1137905926;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int d = 47;
    int n = 565474452;
    int c = 259;
    int g = 463590727;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 1104.2824814258315;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int d = 787;
    int n = 462866009;
    int c = 125;
    int g = 12733411;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 309613.5766123615;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int d = 530;
    int n = 902558745;
    int c = 44;
    int g = 517645126;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 139554.98199260558;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int d = 1000;
    int n = 19;
    int c = 4;
    int g = 12;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 417888.2011720174;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int d = 1000;
    int n = 843448655;
    int c = 11;
    int g = 826017634;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 36593.97467726603;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int d = 1000;
    int n = 445350462;
    int c = 247;
    int g = 81202091;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 499985.0057617111;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int d = 1000;
    int n = 12;
    int c = 5;
    int g = 5;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 466506.3509461097;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int d = 1000;
    int n = 1000;
    int c = 500;
    int g = 3;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 499995.0652140343;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int d = 743;
    int n = 1000000000;
    int c = 500;
    int g = 834874743;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 276023.10981023684;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int d = 100;
    int n = 1000000000;
    int c = 500;
    int g = 999999999;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 7.890246615793739E-13;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int d = 1000;
    int n = 1000000000;
    int c = 4;
    int g = 999999997;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 1;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 7.890246789266087E-11;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 900000001;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 475528.73675241636;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int d = 100;
    int n = 1200;
    int c = 500;
    int g = 139;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 4999.897192325458;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int d = 997;
    int n = 99987324;
    int c = 497;
    int g = 19999;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 4362.963038625141;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int d = 100;
    int n = 1000000000;
    int c = 4;
    int g = 999999997;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 139;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5328366735900545E-6;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 999999999;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 7.890244013708525E-11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 797375799;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 499995.10110618296;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int d = 1;
    int n = 1000000000;
    int c = 500;
    int g = 453432457;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999996377227414;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 2452347;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 499999.4246806687;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 333333333;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 324759.7219832876;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int d = 10;
    int n = 1000000000;
    int c = 40;
    int g = 999999999;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 5.918152710379437E-15;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 39993937;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 497592.35782514693;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int d = 100;
    int n = 120000013;
    int c = 473;
    int g = 109000121;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 4999.999779362206;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int d = 1000;
    int n = 1000000000;
    int c = 500;
    int g = 139139139;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 499973.4217768017;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int d = 1;
    int n = 1000000000;
    int c = 500;
    int g = 13;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2859815141474766E-15;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int d = 100;
    int n = 533;
    int c = 500;
    int g = 4;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 4999.934860503239;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int d = 512;
    int n = 991999992;
    int c = 477;
    int g = 491999231;
    QuadrilateralSearch* pObj = new QuadrilateralSearch();
    clock_t start = clock();
    double result = pObj->findLargest(d, n, c, g);
    clock_t end = clock();
    delete pObj;
    double expected = 131071.98225481887;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=6516&pm=3514
********************************************************************************
// another fine solution by misof
#include <algorithm>
 
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
#include <cmath>
#include <cassert>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
double X[1000], Y[1000];
double alpha;
int num[1000];
 
int isright(int a, int b, int c) {
  if (c < min(a,b)) return 0;
  if (c > max(a,b)) return 0;
  return 1;
}
 
class QuadrilateralSearch {
public:
  double findLargest(int d, int n, int c, int g) {
    alpha = (2*M_PI) / n;
 
    int kde = 0;
    REP(i,c) { 
      X[i] = 0.5 * d * cos( alpha * kde );
      Y[i] = 0.5 * d * sin( alpha * kde );
      num[i] = kde;
      kde += g;
      kde %= n;
    }
 
    double res = 0.0;
    FOR(i,0,c-1) FOR(j,i+1,c-1) {
      double larea = -1e15;
      double rarea = -1e15;
      FOR (k,0,c-1) if (k!=i) if (k!=j) {
        double area = fabs( 0.5 * (    
                X[i]*Y[j] + X[j]*Y[k] + X[k]*Y[i]
                - X[j]*Y[i] - X[k]*Y[j] - X[i]*Y[k]
              ));
        if (isright(num[i],num[j],num[k])) {
          rarea >?= area;
        } else {
          larea >?= area;
        }
      }
      res >?= (rarea + larea);
    }
    return res;
  }
 
// }}} keep
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/