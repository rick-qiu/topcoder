/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11535
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

class CompositeSmash {
public:
    string thePossible(int N, int target);
};

string CompositeSmash::thePossible(int N, int target) {
    string ret;
    return ret;
}


int test0() {
    int N = 517;
    int target = 47;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 8;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 12;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 5;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 100000;
    int target = 100000;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 5858;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 81461;
    int target = 2809;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 24517;
    int target = 24517;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 23868;
    int target = 23868;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 27981;
    int target = 27981;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 7581;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 77202;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 33649;
    int target = 23;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 64175;
    int target = 17;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 68408;
    int target = 503;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 45676;
    int target = 601;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 52247;
    int target = 4019;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 40648;
    int target = 5081;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 65719;
    int target = 65719;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 91733;
    int target = 91733;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 8;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 32768;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 65536;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 2187;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 3125;
    int target = 25;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 343;
    int target = 49;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 14641;
    int target = 121;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 2197;
    int target = 169;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 4913;
    int target = 289;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 6859;
    int target = 361;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 12167;
    int target = 529;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 24389;
    int target = 841;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 29791;
    int target = 961;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 50653;
    int target = 1369;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 68921;
    int target = 1681;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 79507;
    int target = 1849;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 24517;
    int target = 23868;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 27981;
    int target = 32111;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 25696;
    int target = 63304;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 39699;
    int target = 87448;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 92401;
    int target = 11170;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 74346;
    int target = 71633;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 92758;
    int target = 89633;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 70147;
    int target = 23873;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 26578;
    int target = 20233;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 79626;
    int target = 31543;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 996;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 69780;
    int target = 10;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 66256;
    int target = 82;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 10998;
    int target = 39;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 55760;
    int target = 656;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 58380;
    int target = 834;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 17578;
    int target = 8789;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 38940;
    int target = 1770;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 53524;
    int target = 26762;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 51162;
    int target = 25581;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 16;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 65536;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 32768;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 65536;
    int target = 256;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 65536;
    int target = 32768;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 6561;
    int target = 2187;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 78125;
    int target = 15625;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 16807;
    int target = 343;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 14641;
    int target = 1331;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 28561;
    int target = 2197;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 83521;
    int target = 4913;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 39601;
    int target = 199;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 100000;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 100000;
    int target = 50000;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 100000;
    int target = 99999;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 64;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 512;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 10000;
    int target = 100;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 243;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 169;
    int target = 13;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 16;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 64;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 4;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 59049;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 24;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 256;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 32;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 7;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 24983;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 25;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 1024;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 7;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 90090;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 11;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 221;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 25;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 7;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 3;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 101;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 81;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 27;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 14947;
    int target = 8911;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 32;
    int target = 16;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 64;
    int target = 16;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 11;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 13;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 100000;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 16807;
    int target = 49;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 30;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 10000;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 5;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 2;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 17;
    int target = 13;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 1024;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 4;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 66;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 7;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 50;
    int target = 97;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 37;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 512;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 150;
    int target = 25;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 101;
    int target = 50;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 65536;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 85085;
    int target = 11;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 72361;
    int target = 269;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 840;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 10000;
    int target = 10000;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 50;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 15;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 24;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 105;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 128;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 36;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 30;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 5;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 18;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 97;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 12;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 24;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 8;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 80;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 16;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 70345;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 7;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 625;
    int target = 25;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 32;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 9;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 7;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 4096;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 100;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 36;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 5;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 48;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 216;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 85386;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 11;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 6;
    int target = 81;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 519;
    int target = 17;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 128;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 96;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 42;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 14;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 24;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 17;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 81;
    int target = 27;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 36;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 99760;
    int target = 10;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 9;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 49;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 30;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 6054;
    int target = 1009;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 3402;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 17;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int N = 10;
    int target = 7;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int N = 90090;
    int target = 6;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int N = 96;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 12;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int N = 101;
    int target = 101;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 85085;
    int target = 3;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int N = 2;
    int target = 4;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int N = 60;
    int target = 5;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int N = 30;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int N = 60480;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int N = 256;
    int target = 2;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int N = 8;
    int target = 8;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int N = 3;
    int target = 9;
    CompositeSmash* pObj = new CompositeSmash();
    clock_t start = clock();
    string result = pObj->thePossible(N, target);
    clock_t end = clock();
    delete pObj;
    string expected = "No";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14542&pm=11535
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
 
class CompositeSmash {
public:
  string thePossible(int, int);
};
 
int f[222222];
 
string CompositeSmash::thePossible(int N, int target) {
  int i, j, ok, can;
  for (i=1;i<=N;i++) {
    if (i == target) {
      f[i] = 1;
      continue;
    }
    ok = 1; can = 0;
    for (j=2;j*j<=i;j++)
      if (i % j == 0) {
        can = 1;
        if (!(f[j] || f[i/j])) ok = 0;
      }
    if (can && ok) f[i] = 1;
    else f[i] = 0;
  }
  if (f[N]) return "Yes";
  else return "No";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/