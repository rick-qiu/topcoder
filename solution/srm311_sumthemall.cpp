/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6430
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

class SumThemAll {
public:
    long getSum(int lowerBound, int upperBound);
};

long SumThemAll::getSum(int lowerBound, int upperBound) {
    long ret;
    return ret;
}


int test0() {
    int lowerBound = 0;
    int upperBound = 3;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int lowerBound = 10;
    int upperBound = 14;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int lowerBound = 0;
    int upperBound = 0;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int lowerBound = 14;
    int upperBound = 53;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 296;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int lowerBound = 0;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 82000000002;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int lowerBound = 5926;
    int upperBound = 62156805;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2111611992;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int lowerBound = 24660;
    int upperBound = 308357171;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 11379854844;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int lowerBound = 32576;
    int upperBound = 1187277838;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 47450522385;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int lowerBound = 30083;
    int upperBound = 1104702813;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 44343555461;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int lowerBound = 3376;
    int upperBound = 990596642;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 40030571409;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int lowerBound = 3452;
    int upperBound = 685899146;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 26635849751;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int lowerBound = 10386;
    int upperBound = 1350455562;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 53789852358;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int lowerBound = 13883;
    int upperBound = 550507626;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 20942250128;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int lowerBound = 4726;
    int upperBound = 1375866264;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 54831486417;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int lowerBound = 32102;
    int upperBound = 1540944656;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 61593961949;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int lowerBound = 15429442;
    int upperBound = 62156805;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1633856784;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int lowerBound = 152775353;
    int upperBound = 984502484;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 34306678277;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int lowerBound = 40137836;
    int upperBound = 684916828;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 25267238046;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int lowerBound = 221259239;
    int upperBound = 990596642;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 32012397122;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int lowerBound = 225405078;
    int upperBound = 268762620;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1641427866;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int lowerBound = 602551867;
    int upperBound = 730664533;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 5323398745;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int lowerBound = 309745886;
    int upperBound = 1375866264;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 43397539331;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int lowerBound = 48385571;
    int upperBound = 93023718;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1696931471;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int lowerBound = 307683830;
    int upperBound = 387211787;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 3080493269;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int lowerBound = 217919355;
    int upperBound = 1217595056;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 40704803271;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int lowerBound = 11509292;
    int upperBound = 12156805;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 19444113;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int lowerBound = 202775353;
    int upperBound = 934502484;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 30045267264;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int lowerBound = 71135888;
    int upperBound = 134916828;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2313580250;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int lowerBound = 221259239;
    int upperBound = 940596642;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 29684413907;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int lowerBound = 206642457;
    int upperBound = 218762620;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 420741325;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int lowerBound = 444440;
    int upperBound = 909091;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 13449060;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int lowerBound = 199;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 81999998121;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int lowerBound = 925062854;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 44977706723;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int lowerBound = 700;
    int upperBound = 1692582010;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 68136892009;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int lowerBound = 2000000000;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int lowerBound = 0;
    int upperBound = 0;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
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
    int lowerBound = 1;
    int upperBound = 1;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int lowerBound = 7;
    int upperBound = 7;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int lowerBound = 999999999;
    int upperBound = 999999999;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 81;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int lowerBound = 0;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 82000000002;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int lowerBound = 9482935;
    int upperBound = 893629438;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 35383256617;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int lowerBound = 24660;
    int upperBound = 308357171;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 11379854844;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int lowerBound = 1012340123;
    int upperBound = 1987659876;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 40475769791;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int lowerBound = 2;
    int upperBound = 2;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int lowerBound = 246605435;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 73064617967;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int lowerBound = 213124;
    int upperBound = 2000000000;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 81995145720;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int lowerBound = 1;
    int upperBound = 1;
    SumThemAll* pObj = new SumThemAll();
    clock_t start = clock();
    long result = pObj->getSum(lowerBound, upperBound);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9991&pm=6430
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
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
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int digitsum(int x) {
  int res=0;
  while (x) { res += x%10; x/=10; }
  return res;
}
 
class SumThemAll {
public:
  long long getSum(long long lowerBound, long long upperBound) {
    long long res = 0;
    if (upperBound - lowerBound < 100) { 
      FOR(x,lowerBound,upperBound) res += digitsum(x);  
      return res;
    }
    while (lowerBound%10) { res += digitsum(lowerBound); lowerBound++; }
    while (upperBound%10 != 9) { res += digitsum(upperBound); upperBound--; }
    lowerBound /= 10;
    upperBound /= 10;
    long long tmp = 45LL * (upperBound - lowerBound + 1);
    res += tmp;
    res += 10 * getSum(lowerBound, upperBound);
    return res;
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/