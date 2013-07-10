/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6539
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

class RPSTournament {
public:
    int greatestSeed(int rounds, int C);
};

int RPSTournament::greatestSeed(int rounds, int C) {
    int ret;
    return ret;
}


int test0() {
    int rounds = 2;
    int C = 0;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
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
    int rounds = 2;
    int C = 1;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int rounds = 3;
    int C = 1;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int rounds = 3;
    int C = 2;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int rounds = 4;
    int C = 1;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int rounds = 4;
    int C = 2;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int rounds = 4;
    int C = 3;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int rounds = 5;
    int C = 1;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int rounds = 5;
    int C = 3;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int rounds = 5;
    int C = 4;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int rounds = 6;
    int C = 1;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int rounds = 6;
    int C = 4;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int rounds = 6;
    int C = 5;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int rounds = 7;
    int C = 3;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int rounds = 7;
    int C = 5;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int rounds = 7;
    int C = 9;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int rounds = 8;
    int C = 2;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int rounds = 8;
    int C = 7;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int rounds = 8;
    int C = 14;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 246;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int rounds = 9;
    int C = 5;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int rounds = 9;
    int C = 12;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 277;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int rounds = 9;
    int C = 20;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 435;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int rounds = 10;
    int C = 7;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 211;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int rounds = 10;
    int C = 22;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 593;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int rounds = 10;
    int C = 35;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 908;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int rounds = 11;
    int C = 4;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int rounds = 11;
    int C = 32;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int rounds = 11;
    int C = 53;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1613;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int rounds = 11;
    int C = 69;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2015;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int rounds = 12;
    int C = 14;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 575;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int rounds = 12;
    int C = 57;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2105;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int rounds = 12;
    int C = 94;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 3242;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int rounds = 12;
    int C = 121;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 4063;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int rounds = 13;
    int C = 25;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1151;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int rounds = 13;
    int C = 56;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2461;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int rounds = 13;
    int C = 107;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 4387;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int rounds = 13;
    int C = 165;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 6486;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int rounds = 13;
    int C = 202;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7820;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int rounds = 14;
    int C = 9;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int rounds = 14;
    int C = 125;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5979;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int rounds = 14;
    int C = 173;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 8037;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int rounds = 14;
    int C = 208;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9523;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int rounds = 14;
    int C = 267;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 12023;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int rounds = 14;
    int C = 325;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 14270;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int rounds = 14;
    int C = 394;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 16384;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int rounds = 15;
    int C = 54;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 3191;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int rounds = 15;
    int C = 129;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7204;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int rounds = 15;
    int C = 180;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9755;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int rounds = 15;
    int C = 247;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 13076;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int rounds = 15;
    int C = 303;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 15845;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int rounds = 15;
    int C = 361;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 18690;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int rounds = 15;
    int C = 413;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 20980;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int rounds = 15;
    int C = 462;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 23127;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int rounds = 15;
    int C = 500;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 24781;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int rounds = 15;
    int C = 537;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 26388;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int rounds = 15;
    int C = 609;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 29501;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int rounds = 15;
    int C = 634;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 30579;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int rounds = 15;
    int C = 663;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 31836;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int rounds = 15;
    int C = 679;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 32522;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int rounds = 15;
    int C = 1000;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 32768;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int rounds = 16;
    int C = 83;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5524;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int rounds = 16;
    int C = 252;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 15409;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int rounds = 16;
    int C = 375;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 22406;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int rounds = 16;
    int C = 500;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 29219;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int rounds = 16;
    int C = 609;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 34759;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int rounds = 16;
    int C = 743;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 41519;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int rounds = 16;
    int C = 834;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 46085;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int rounds = 16;
    int C = 924;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 50583;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int rounds = 16;
    int C = 1000;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 54373;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int rounds = 16;
    int C = 1078;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 58260;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int rounds = 16;
    int C = 1111;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 59897;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int rounds = 16;
    int C = 1164;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 62532;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int rounds = 16;
    int C = 1203;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 64466;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int rounds = 16;
    int C = 15;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1098;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int rounds = 16;
    int C = 1500;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int rounds = 16;
    int C = 1399;
    RPSTournament* pObj = new RPSTournament();
    clock_t start = clock();
    int result = pObj->greatestSeed(rounds, C);
    clock_t end = clock();
    delete pObj;
    int expected = 65536;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10663&pm=6539
********************************************************************************
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
 
//typedef long long __int64; 
 
int A[100000]; 
 
class RPSTournament 
{ 
public: 
  int n,size; 
  double C; 
  void DFS(int n,int v) 
  { 
    if (n==0) 
      A[++size]=v; 
    else 
    { 
      DFS(n-1,v); 
      double r=v-sqrt(C*(double)(v)); 
      if (r<1) 
        r=1; 
      r=ceil(r-1e-10); 
      DFS(n-1,(int)(r+0.1)); 
    } 
  } 
  bool check(int M) 
  { 
    size=0; 
    DFS(n,M); 
    sort(A+1,A+size+1); 
    for (int i=1;i<=size;i++) 
      if (A[i]>i) 
        return false; 
    return true; 
  } 
  int greatestSeed(int _n, int _C) 
  { 
    n=_n; 
    C=_C; 
    int H=1,T=(1<<n)+1; 
    for (;H+1<T;) 
    { 
      int M=(H+T)/2; 
      if (check(M)) 
        H=M; 
      else 
        T=M; 
    } 
    return H; 
  } 
};

********************************************************************************
*******************************************************************************/