/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11193
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

class TheBoredomDivOne {
public:
    double find(int n, int m);
};

double TheBoredomDivOne::find(int n, int m) {
    double ret;
    return ret;
}


int test0() {
    int n = 1;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1;
    int m = 2;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    int m = 7;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 13.831068977298521;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 1;
    int m = 3;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 5;
    int m = 7;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 15.130274214949138;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 5;
    int m = 7;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 15.130274214949138;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 25;
    int m = 42;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 144.10605121277968;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 7;
    int m = 19;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 45.46619363103156;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 40;
    int m = 45;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 185.93004772631068;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 17;
    int m = 32;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 98.65802187986704;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 43;
    int m = 37;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 167.2564362404144;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 38;
    int m = 13;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 80.5404811915203;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 23;
    int m = 29;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 102.2529460584118;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 22;
    int m = 35;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 117.38738121338442;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 18;
    int m = 36;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 111.90968303530524;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 37;
    int m = 35;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 148.49017388645055;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 18;
    int m = 32;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 100.68748185421157;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 12;
    int m = 22;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 62.05729455821641;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 37;
    int m = 21;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 105.04611916550033;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 1;
    int m = 42;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 92.18052432506396;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 1;
    int m = 19;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 34.81755537072986;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 1;
    int m = 45;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 100.22296540591749;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 1;
    int m = 32;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 66.1848781573403;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 1;
    int m = 37;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 79.01569196479905;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 1;
    int m = 13;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 21.68611425271092;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 1;
    int m = 29;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 58.66753502733225;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 1;
    int m = 35;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 73.84071925118994;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1;
    int m = 36;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 76.42136199277984;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 1;
    int m = 35;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 73.84071925118994;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 25;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 7;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 40;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 20.5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 17;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 43;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 38;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 19.5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 23;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 12.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 22;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 18;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 9.5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 37;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 47;
    int m = 47;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 207.71886934498465;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 1;
    int m = 47;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 105.63993468806005;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 47;
    int m = 1;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 24.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 25;
    int m = 25;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 94.68530313377337;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 7;
    int m = 7;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 17.727435221783047;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 40;
    int m = 40;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 170.3153486399425;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 17;
    int m = 17;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 57.849614911338;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 45;
    int m = 47;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 203.28077550191213;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 37;
    int m = 43;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 173.1555956596007;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 46;
    int m = 46;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 202.30740031298058;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 45;
    int m = 43;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 190.55621720432092;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 36;
    int m = 18;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 93.73595311541357;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 46;
    int m = 47;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 205.49982312701206;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 47;
    int m = 46;
    TheBoredomDivOne* pObj = new TheBoredomDivOne();
    clock_t start = clock();
    double result = pObj->find(n, m);
    clock_t end = clock();
    delete pObj;
    double expected = 204.515809325977;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14241&pm=11193
********************************************************************************
//  SRM 488 (A) 
 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <algorithm> 
#include <bitset> 
#include <complex> 
 
using namespace std; 
 
typedef unsigned uint; 
typedef long long Int; 
typedef vector<int> vint; 
typedef vector<string> vstr; 
typedef pair<int,int> pint; 
#define mp make_pair 
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; } 
 
double dp[60]; 
 
struct TheBoredomDivOne { 
   
  double find(int n, int m) { 
    int i; 
    int l = n + m; 
    double lc2 = l * (l - 1) / 2.0; 
     
    dp[0] = 0; 
    for (i = 1; i <= m; ++i) { 
      int j = l - i; 
      double p = i * (i - 1) / 2.0 / lc2; 
      double q = j * (j - 1) / 2.0 / lc2; 
      if (i >= 1) dp[i] += dp[i - 1] * (1.0 - p - q); 
      if (i >= 2) dp[i] += dp[i - 2] * p; 
      dp[i] += 1.0; 
      dp[i] /= 1.0 - q; 
    } 
     
    return dp[m]; 
     
  } 
   
};

********************************************************************************
*******************************************************************************/