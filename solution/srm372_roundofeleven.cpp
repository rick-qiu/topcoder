/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8005
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

class RoundOfEleven {
public:
    long maxIncome(int n, int money);
};

long RoundOfEleven::maxIncome(int n, int money) {
    long ret;
    return ret;
}


int test0() {
    int n = 31;
    int money = 4;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
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
    int n = 31;
    int money = 5;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 110;
    int money = 3;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 18392091;
    int money = 103;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 660000066;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 2147483647;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 427636364064;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 2147483645;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 428181818610;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1555555555;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 430727273158;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 1545454545;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 430727273158;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 39;
    int money = 4;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 999;
    int money = 3;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
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
    int n = 555;
    int money = 6;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 25325362;
    int money = 123;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 914545546;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 2134874533;
    int money = 1;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 23598723;
    int money = 1;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
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
    int n = 11;
    int money = 1;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 846930886;
    int money = 384;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 32118181835;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 1714636915;
    int money = 278;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 223818182042;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 424238335;
    int money = 29;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 406835794;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 1649760492;
    int money = 387;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 321090909412;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 1189641421;
    int money = 10;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 235366;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 1350490027;
    int money = 363;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 297636363934;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 1102520059;
    int money = 191;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 140363636504;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 1967513926;
    int money = 2;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
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
    int n = 1540383426;
    int money = 41;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 9601620939;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 130736;
    int money = 173;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 13963776;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 521595368;
    int money = 212;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 16736363637;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 1726956429;
    int money = 68;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 32363636396;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 861021530;
    int money = 283;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 22900000012;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 233665123;
    int money = 363;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 30645454567;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 468703135;
    int money = 68;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 3627272724;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 1801979802;
    int money = 430;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 355454545810;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 635723058;
    int money = 23;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 76839876;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 112587;
    int money = 7;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 1139;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 2089018456;
    int money = 394;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 326000000326;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 1656478042;
    int money = 12;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 1388614;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 1653377373;
    int money = 230;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 182727272910;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 1914544919;
    int money = 422;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 352181818534;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 756898537;
    int money = 25;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 110083921;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 1973594324;
    int money = 199;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 152000000152;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 2038664370;
    int money = 316;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 258000000258;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 18;
    int money = 414;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 4066;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 1424268980;
    int money = 92;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 52727272780;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 749241873;
    int money = 457;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 38918181833;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 42999170;
    int money = 363;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 3023636666;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 135497281;
    int money = 497;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 42500000040;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 2084420925;
    int money = 306;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 247272727520;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 1827336327;
    int money = 8;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 60752;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 1159126505;
    int money = 337;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 276000000276;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 1632621729;
    int money = 347;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 286000000286;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1433925857;
    int money = 31;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 2438718205;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 84353895;
    int money = 125;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 910909182;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 2001100545;
    int money = 83;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 42727272770;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 1548233367;
    int money = 5;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 904;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 1585990364;
    int money = 435;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 364727273092;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 760313750;
    int money = 44;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 1321385662;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 356426808;
    int money = 88;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 5445454531;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 1889947178;
    int money = 277;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 218909091128;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 709393584;
    int money = 289;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 23481818180;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 1918502651;
    int money = 404;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 335818182154;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 147461239;
    int money = 255;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 20590909091;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 12640950;
    int money = 433;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 3681818550;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 1843993;
    int money = 177;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 138818196;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 198421;
    int money = 240;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 19891108;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 19759;
    int money = 435;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 3788217;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 1892;
    int money = 468;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 412230;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 927;
    int money = 98;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 7932;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 60;
    int money = 318;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 3108;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 7;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 493;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 9;
    int money = 8;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 6;
    int money = 34;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 1;
    int money = 1;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 9;
    int money = 10;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 1555555555;
    int money = 4;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 548673492;
    int money = 498;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 42790909121;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 2147483647;
    int money = 497;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 424909091334;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 1846345234;
    int money = 25;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 938924575;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 1234657890;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 424545454970;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 2103324123;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 425636364062;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 2100000000;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 415636364052;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 1111111111;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 420909091330;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 2000000000;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 414909091324;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 2147483646;
    int money = 499;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 427090909518;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 123456789;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 42863636394;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 1909090909;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 414363636778;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 2000000000;
    int money = 200;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 142181818324;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 1023456789;
    int money = 456;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 384545454930;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 1222222222;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 425818182244;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 1564738574;
    int money = 499;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 427272727700;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 1173741824;
    int money = 40;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 7856160812;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 1000000000;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 414363636778;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 999999999;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 41772727310;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 1000000000;
    int money = 499;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 413454545868;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 1923342882;
    int money = 28;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 979403484;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 1;
    int money = 499;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 498;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 1023456789;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 424545454970;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 1234567890;
    int money = 500;
    RoundOfEleven* pObj = new RoundOfEleven();
    clock_t start = clock();
    long result = pObj->maxIncome(n, money);
    clock_t end = clock();
    delete pObj;
    long expected = 424545454970;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10789&pm=8005
********************************************************************************
#include<algorithm>  
#include<sstream> 
#include<string>  
#include<vector>  
using namespace std;  
   
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it)  
#define pb push_back  
#define all(x) (x).begin(),(x).end()  
#define CLEAR(x,with) memset(x,with,sizeof(x))  
#define sz size()  
typedef long long ll; 
ll cache[15][11][501]; 
struct RoundOfEleven  
{ 
  string num; 
  ll go(int d, int rem, int money) 
  { 
    if(money < 0) return 0; 
    if(d == num.sz) return rem == 0 ? money : 0; 
    ll& ret = cache[d][rem][money]; if(ret != -1) return ret; 
    ret = 0; 
    for(int digit = 0; digit < 10; ++digit) 
      ret += go(d+1, (rem*10+digit)%11, money - abs((num[d]-'0')-digit)); 
    return ret; 
  } 
  long long maxIncome(int n, int money)  
  { 
    CLEAR(cache,-1); 
    char buf[1024]; sprintf(buf, "%d", n); 
    num = buf; 
    return go(0, 0, money); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/