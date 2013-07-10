/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12055
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

class Pillars {
public:
    double getExpectedLength(int w, int x, int y);
};

double Pillars::getExpectedLength(int w, int x, int y) {
    double ret;
    return ret;
}


int test0() {
    int w = 1;
    int x = 1;
    int y = 1;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
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
    int w = 1;
    int x = 5;
    int y = 1;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 2.387132965131785;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int w = 2;
    int x = 3;
    int y = 15;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 6.737191281760445;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int w = 10;
    int x = 15;
    int y = 23;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 12.988608956320535;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int w = 1000;
    int x = 100000;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33381.38304701605;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int w = 1;
    int x = 99175;
    int y = 56445;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32073.471757648073;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int w = 741;
    int x = 98283;
    int y = 97708;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32694.75809065241;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int w = 772;
    int x = 97431;
    int y = 92415;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31758.202091392817;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int w = 987;
    int x = 98228;
    int y = 96988;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32589.00970552789;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int w = 890;
    int x = 92714;
    int y = 96949;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31712.49684962615;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int w = 884;
    int x = 99111;
    int y = 94672;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32402.59188274667;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int w = 741;
    int x = 98835;
    int y = 90385;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31806.143660389673;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int w = 729;
    int x = 92658;
    int y = 92366;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30866.59996029441;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int w = 746;
    int x = 98939;
    int y = 97438;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32765.82263936255;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int w = 808;
    int x = 93569;
    int y = 91507;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30895.89432876109;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int w = 849;
    int x = 90577;
    int y = 92202;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30511.110044647055;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int w = 963;
    int x = 98047;
    int y = 96381;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32459.944104889895;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int w = 917;
    int x = 92247;
    int y = 95421;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31356.225216130268;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int w = 976;
    int x = 99917;
    int y = 90443;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32072.809658547325;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int w = 706;
    int x = 97598;
    int y = 97448;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32533.942518992055;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int w = 755;
    int x = 93628;
    int y = 99334;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32299.044059147163;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int w = 1000;
    int x = 94941;
    int y = 97711;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32184.135418201913;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int w = 764;
    int x = 91934;
    int y = 99803;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32193.015738418748;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int w = 801;
    int x = 95554;
    int y = 90102;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31080.165714689017;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int w = 788;
    int x = 92938;
    int y = 99183;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32183.11427643082;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int w = 867;
    int x = 94321;
    int y = 90666;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30917.68049883712;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int w = 717;
    int x = 98053;
    int y = 97904;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32686.415243153057;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int w = 998;
    int x = 97740;
    int y = 90882;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31646.771878422198;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int w = 905;
    int x = 92995;
    int y = 99484;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32261.73462507481;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int w = 810;
    int x = 96526;
    int y = 93249;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31700.36466772312;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int w = 907;
    int x = 97517;
    int y = 96124;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32321.451176681683;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int w = 785;
    int x = 96134;
    int y = 96755;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32181.491324592185;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int w = 960;
    int x = 90202;
    int y = 97048;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31415.623263082023;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int w = 819;
    int x = 97532;
    int y = 94947;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32137.140460237355;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int w = 806;
    int x = 97015;
    int y = 98420;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 32612.35196213513;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int w = 880;
    int x = 93996;
    int y = 94931;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31530.840430364417;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int w = 1;
    int x = 100000;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33333.33344872877;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int w = 1000;
    int x = 1;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 50028.496625165004;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int w = 1;
    int x = 1;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 49999.50006935564;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int w = 100;
    int x = 100000;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33334.04348856876;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int w = 1000;
    int x = 100000;
    int y = 10000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 45374.871961122386;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int w = 1000;
    int x = 50000;
    int y = 50000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 16749.035733819004;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int w = 10;
    int x = 100000;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33333.342735219885;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int w = 44;
    int x = 100000;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33333.48670500142;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int w = 1000;
    int x = 99999;
    int y = 99998;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33380.88362205062;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int w = 1000;
    int x = 99999;
    int y = 99999;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33381.05009484778;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int w = 998;
    int x = 88888;
    int y = 99999;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 31941.31591403921;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int w = 1000;
    int x = 99999;
    int y = 100000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 33381.216574215534;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int w = 1000;
    int x = 90000;
    int y = 90000;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30052.226096239192;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int w = 1000;
    int x = 92673;
    int y = 92673;
    Pillars* pObj = new Pillars();
    clock_t start = clock();
    double result = pObj->getExpectedLength(w, x, y);
    clock_t end = clock();
    delete pObj;
    double expected = 30942.03323926141;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22727863&rd=14739&pm=12055
********************************************************************************
#define LOCAL 
 
/** ` Micro Mezzo Macro Flation -- Overheated Economy ., **/ 
 
#include <algorithm> 
#include <iostream> 
#include <iomanip> 
#include <sstream> 
#include <cstring> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <bitset> 
#include <queue> 
#include <stack> 
#include <cmath> 
#include <ctime> 
#include <list> 
#include <set> 
#include <map> 
 
using namespace std; 
 
#define REP_1_C(i, n) for (int n____=int(n),i=1;i<=n____;++i) 
typedef double DB; 
 
/* .................................................................................................................................. */ 
 
 
DB sqr(DB x){ 
    return x * x; 
} 
 
DB f(int w, int x, int y){ 
 
    DB q = min(x, y), p = w * q, pp, qq; 
 
    REP_1_C(i, max(x, y)){ 
        qq = min(x, max(0, y - i)), pp = sqrt(sqr(w) +  sqr(i)) * qq; 
        p += pp, q += qq; 
        qq = min(max(0, x - i), y), pp = sqrt(sqr(w) +  sqr(i)) * qq; 
        p += pp, q += qq; 
 
        //cout << p << " " << q << endl; 
    } 
 
    return p / q; 
} 
 
 
class Pillars { 
public: 
  double getExpectedLength(int w, int x, int y) { 
        return f(w, x, y); 
  } 
}; 
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/