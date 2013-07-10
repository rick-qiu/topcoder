/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2006
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

class Computers {
public:
    long choices(int n, int minDif, int minInComp, int amount);
};

long Computers::choices(int n, int minDif, int minInComp, int amount) {
    long ret;
    return ret;
}


int test0() {
    int n = 20;
    int minDif = 6;
    int minInComp = 5;
    int amount = 2;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 100;
    int minDif = 500;
    int minInComp = 400;
    int amount = 1;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 5;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 113420686168080;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 173961190219683;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 529;
    int minDif = 8;
    int minInComp = 3;
    int amount = 5;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 14613709;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    int minDif = 15;
    int minInComp = 1;
    int amount = 1;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 24;
    int minDif = 15;
    int minInComp = 1;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
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
    int minDif = 15;
    int minInComp = 1;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 1000;
    int minDif = 1000;
    int minInComp = 10;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 1000;
    int minDif = 23;
    int minInComp = 2;
    int amount = 32;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 8161973618;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 39;
    int minDif = 9;
    int minInComp = 2;
    int amount = 15;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 39;
    int minDif = 10;
    int minInComp = 2;
    int amount = 15;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 895;
    int minDif = 11;
    int minInComp = 3;
    int amount = 48;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 316512474230;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 150;
    int minDif = 5;
    int minInComp = 1;
    int amount = 15;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 149000;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 999;
    int minDif = 667;
    int minInComp = 3;
    int amount = 100;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 999;
    int minDif = 5;
    int minInComp = 3;
    int amount = 333;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 997;
    int minDif = 23;
    int minInComp = 23;
    int amount = 35;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 721;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 29;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1029704832576574848;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 500;
    int minDif = 6;
    int minInComp = 250;
    int amount = 2;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 998;
    int minDif = 10;
    int minInComp = 2;
    int amount = 879;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 999;
    int minDif = 8;
    int minInComp = 4;
    int amount = 729;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 999;
    int minDif = 6;
    int minInComp = 3;
    int amount = 595;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 996;
    int minDif = 10;
    int minInComp = 1;
    int amount = 694;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 2459695;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 993;
    int minDif = 9;
    int minInComp = 3;
    int amount = 755;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 998;
    int minDif = 6;
    int minInComp = 2;
    int amount = 186;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 6676289999230;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 991;
    int minDif = 6;
    int minInComp = 3;
    int amount = 623;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 994;
    int minDif = 9;
    int minInComp = 3;
    int amount = 734;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 997;
    int minDif = 8;
    int minInComp = 4;
    int amount = 772;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 993;
    int minDif = 6;
    int minInComp = 4;
    int amount = 404;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 999;
    int minDif = 6;
    int minInComp = 3;
    int amount = 281;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 116536;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 995;
    int minDif = 7;
    int minInComp = 1;
    int amount = 132;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 555244678911023;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 992;
    int minDif = 7;
    int minInComp = 5;
    int amount = 688;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 994;
    int minDif = 10;
    int minInComp = 5;
    int amount = 543;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 995;
    int minDif = 9;
    int minInComp = 5;
    int amount = 169;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 9402;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 326;
    int minDif = 80;
    int minInComp = 26;
    int amount = 158;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 784;
    int minDif = 29;
    int minInComp = 1;
    int amount = 116;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 5835877;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 443;
    int minDif = 91;
    int minInComp = 6;
    int amount = 158;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 359;
    int minDif = 36;
    int minInComp = 29;
    int amount = 103;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 652;
    int minDif = 58;
    int minInComp = 27;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 2093;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 443;
    int minDif = 32;
    int minInComp = 21;
    int amount = 131;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 663;
    int minDif = 69;
    int minInComp = 12;
    int amount = 94;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 532;
    int minDif = 34;
    int minInComp = 3;
    int amount = 137;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 641;
    int minDif = 12;
    int minInComp = 5;
    int amount = 65;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1242722;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 635;
    int minDif = 11;
    int minInComp = 12;
    int amount = 32;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 295096;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 535;
    int minDif = 25;
    int minInComp = 8;
    int amount = 22;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 71506;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 579;
    int minDif = 5;
    int minInComp = 4;
    int amount = 31;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 274534078261;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 980;
    int minDif = 11;
    int minInComp = 8;
    int amount = 90;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 301072;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 422;
    int minDif = 10;
    int minInComp = 4;
    int amount = 45;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 325381;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 950;
    int minDif = 14;
    int minInComp = 13;
    int amount = 42;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 7121535;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 834;
    int minDif = 20;
    int minInComp = 14;
    int amount = 6;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 314300196;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 745;
    int minDif = 11;
    int minInComp = 1;
    int amount = 54;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 74926183760;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 927;
    int minDif = 10;
    int minInComp = 14;
    int amount = 37;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 114484608;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 840;
    int minDif = 14;
    int minInComp = 14;
    int amount = 48;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 2585;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 739;
    int minDif = 8;
    int minInComp = 9;
    int amount = 23;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 43099920426;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 539;
    int minDif = 17;
    int minInComp = 10;
    int amount = 18;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 912636;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 849;
    int minDif = 16;
    int minInComp = 3;
    int amount = 15;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 47544882460;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 594;
    int minDif = 19;
    int minInComp = 6;
    int amount = 57;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 10082;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 602;
    int minDif = 12;
    int minInComp = 12;
    int amount = 76;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 495;
    int minDif = 9;
    int minInComp = 4;
    int amount = 58;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1337180;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 478;
    int minDif = 9;
    int minInComp = 12;
    int amount = 30;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 2112;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 511;
    int minDif = 11;
    int minInComp = 13;
    int amount = 62;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 974;
    int minDif = 9;
    int minInComp = 13;
    int amount = 70;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 452;
    int minDif = 6;
    int minInComp = 6;
    int amount = 67;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 784;
    int minDif = 19;
    int minInComp = 7;
    int amount = 29;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 65589098;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 880;
    int minDif = 17;
    int minInComp = 13;
    int amount = 3;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 52814;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 634;
    int minDif = 8;
    int minInComp = 6;
    int amount = 9;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 31852321257;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 678;
    int minDif = 14;
    int minInComp = 14;
    int amount = 49;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 30;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1026422528606748097;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 28;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1025312423793859418;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 999;
    int minDif = 5;
    int minInComp = 1;
    int amount = 29;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1004886441099242096;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 999;
    int minDif = 5;
    int minInComp = 1;
    int amount = 1000;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 345;
    int minDif = 15;
    int minInComp = 1;
    int amount = 757;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 1;
    int minDif = 5;
    int minInComp = 1;
    int amount = 2;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 1;
    int minDif = 5;
    int minInComp = 1;
    int amount = 1;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 1;
    int minDif = 1000;
    int minInComp = 1;
    int amount = 1;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 45;
    int minDif = 5;
    int minInComp = 46;
    int amount = 1;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 45;
    int minDif = 5;
    int minInComp = 23;
    int amount = 2;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 1000;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
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
    int n = 1000;
    int minDif = 5;
    int minInComp = 5;
    int amount = 10;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 113420686168080;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 63;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 379259218509992696;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 300;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 494122875344338;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 100;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 127422982821203918;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 5;
    int amount = 20;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 90705939142338637;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 1000;
    int minDif = 5;
    int minInComp = 1;
    int amount = 30;
    Computers* pObj = new Computers();
    clock_t start = clock();
    long result = pObj->choices(n, minDif, minInComp, amount);
    clock_t end = clock();
    delete pObj;
    long expected = 1026422528606748097;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8547850&rd=8005&pm=2006
********************************************************************************
#define FR(i,a,b) for (int i = (a); i < (b); i++)
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <setjmp.h>
#include <regex.h>
#include <utility>
#define ll long long
#define ld long double
#define EPS 1e-9
using namespace std;
 
struct Computers {
ll rv[1024][1024];
ll doit(int n, int md, int mic, int am) {
 if (mic) n -= mic * am;
 if (n < 0) return 0;
 if (!n) return 1;
 if (rv[n][am]+1) return rv[n][am];
 ll ans = doit(n, md, 1, am);
 FR(i,1,am)
  ans += doit(n, md, md, am-i);
 return rv[n][am] = ans;
}
long long choices(int n, int md, int mic, int am) {
 memset(rv,-1,sizeof(rv));
 return doit(n,md,mic,am);
}};
// Powered by ted

********************************************************************************
*******************************************************************************/