/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10978
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

class ChildlessNumbers {
public:
    int howMany(int A, int B);
};

int ChildlessNumbers::howMany(int A, int B) {
    int ret;
    return ret;
}


int test0() {
    int A = 4;
    int B = 7;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 37;
    int B = 37;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 61;
    int B = 65;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 275;
    int B = 300;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 999990000;
    int B = 1000000000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1950;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 24684440;
    int B = 24694440;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 6504;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 796878566;
    int B = 796888566;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 5990;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 246889265;
    int B = 246899265;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 6714;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 600240035;
    int B = 600250035;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 4015;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 1;
    int B = 61;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
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
    int A = 123;
    int B = 1234;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 351335515;
    int B = 351344526;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1405;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 528977286;
    int B = 528987005;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1295;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 528960940;
    int B = 528970618;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1371;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 565076706;
    int B = 565085728;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1417;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 442067845;
    int B = 442076950;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2251;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 961895748;
    int B = 961904910;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 906;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 775735046;
    int B = 775744477;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1284;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 278346336;
    int B = 278355401;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1305;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 257178195;
    int B = 257188149;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2043;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 902190830;
    int B = 902200076;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1556;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 725290028;
    int B = 725299440;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 406229757;
    int B = 406239020;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 889;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 467189414;
    int B = 467199296;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3084;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 63910586;
    int B = 63919677;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1442;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 85332141;
    int B = 85341410;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1097;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 492764954;
    int B = 492774046;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1438;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 464746988;
    int B = 464756249;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 811;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 603290547;
    int B = 603300358;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1256;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 296892983;
    int B = 296902676;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3901;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 803175278;
    int B = 803184488;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2353;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 214912744;
    int B = 214922399;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2352;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 340977766;
    int B = 340987588;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2112;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 414128404;
    int B = 414137473;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3018;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 761144736;
    int B = 761154271;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1088;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 451108100;
    int B = 451117100;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1650;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 997454526;
    int B = 997464025;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2027;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 407297265;
    int B = 407306442;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1151;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 770251789;
    int B = 770261612;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1366;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 527905756;
    int B = 527914777;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1622;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 202945158;
    int B = 202954504;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 768;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 414612527;
    int B = 414622395;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2491;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 77452467;
    int B = 77461924;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1282;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 131739827;
    int B = 131748843;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1938;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 707390900;
    int B = 707400065;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 856;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 335226580;
    int B = 335235887;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1654;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 800534669;
    int B = 800544111;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2990;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 45837515;
    int B = 45846949;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1394;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 927960385;
    int B = 927969700;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1889;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 249227989;
    int B = 249237894;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3478;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 885857927;
    int B = 885867183;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1770;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 207764884;
    int B = 207774832;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3763;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 211551607;
    int B = 211561224;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3312;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 436228931;
    int B = 436238581;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 936;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 22690928;
    int B = 22700715;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3556;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 217067930;
    int B = 217077313;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3535;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 895261871;
    int B = 895271781;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1362;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 687568321;
    int B = 687577878;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1558;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 335719561;
    int B = 335728799;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1395;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 920197459;
    int B = 920207276;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 664;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 887825232;
    int B = 887834270;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1561;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 808568719;
    int B = 808578169;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2359;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 971902894;
    int B = 971912231;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1739;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 139388593;
    int B = 139397863;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 925;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 29377021;
    int B = 29386652;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2309;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 285595860;
    int B = 285604998;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 951;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 80470052;
    int B = 80479564;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3467;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 426363320;
    int B = 426372571;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2383;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 458686126;
    int B = 458696071;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 839114445;
    int B = 839123981;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 960;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 22729068;
    int B = 22739067;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3793;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 90976355;
    int B = 90985904;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1971;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 594207268;
    int B = 594216282;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2173;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 452450289;
    int B = 452459927;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3360;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 926013635;
    int B = 926022710;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1406;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 460148421;
    int B = 460158182;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 545;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 510547903;
    int B = 510557870;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2280;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 941340139;
    int B = 941349233;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2093;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 111473196;
    int B = 111482265;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1925;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 667187816;
    int B = 667197285;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2489;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 389177008;
    int B = 389186264;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1922;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 64545658;
    int B = 64554884;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 799481524;
    int B = 799490766;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 4546;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 731982026;
    int B = 731991140;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1346;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 620241859;
    int B = 620251622;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1665;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 258688078;
    int B = 258697252;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1419;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 680666105;
    int B = 680675973;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1322;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 223440998;
    int B = 223450193;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1881;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 321940804;
    int B = 321950658;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1451;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 386920061;
    int B = 386929443;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1515;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 881775038;
    int B = 881784297;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1428;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 850152307;
    int B = 850162266;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 862;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 600967234;
    int B = 600976804;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1538;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 206877322;
    int B = 206887276;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3209;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A = 813560941;
    int B = 813570525;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2158;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 565266145;
    int B = 565275513;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2238;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 846678419;
    int B = 846688125;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1748;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A = 74143003;
    int B = 74152705;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1750;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A = 858352832;
    int B = 858362107;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1697;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A = 950610321;
    int B = 950619370;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1056;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A = 435269929;
    int B = 435279120;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3562;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A = 96815209;
    int B = 96824357;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1466;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int A = 337495332;
    int B = 337504692;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1436;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int A = 613762382;
    int B = 613771764;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1986;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int A = 760418416;
    int B = 760427846;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1692;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int A = 362224294;
    int B = 362233495;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2314;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int A = 737726465;
    int B = 737736172;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1340;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int A = 136520361;
    int B = 136529929;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2399;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int A = 282195070;
    int B = 282204289;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 819;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int A = 902563388;
    int B = 902573199;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 998;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int A = 785765956;
    int B = 785775447;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 3577;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int A = 1;
    int B = 10000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1437;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int A = 966660000;
    int B = 966670000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 971;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int A = 900000000;
    int B = 900010000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1429;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int A = 999990000;
    int B = 999999999;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1950;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int A = 100000000;
    int B = 100010000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1794;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int A = 90000000;
    int B = 90010000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1429;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int A = 999999000;
    int B = 1000000000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int A = 912335671;
    int B = 912345671;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 814;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int A = 999989876;
    int B = 999999875;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1953;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int A = 790829357;
    int B = 790839357;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 2351;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int A = 63;
    int B = 63;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int A = 999999990;
    int B = 1000000000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int A = 999999990;
    int B = 999999999;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int A = 10;
    int B = 10000;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1437;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int A = 999989999;
    int B = 999999999;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 1950;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int A = 981230000;
    int B = 981232981;
    ChildlessNumbers* pObj = new ChildlessNumbers();
    clock_t start = clock();
    int result = pObj->howMany(A, B);
    clock_t end = clock();
    delete pObj;
    int expected = 222;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22776332&rd=14155&pm=10978
********************************************************************************
#include<cstdio> 
#include<iostream> 
#include<string> 
#include<sstream> 
#include<set> 
#include<cmath> 
#include<map> 
#include<vector> 
#include<algorithm> 
#include<queue> 
 
using namespace std; 
struct ChildlessNumbers{ 
        int howMany(int n,int m) 
        {    long long y; int sum,ans; 
             ans=0; 
             for (int i=n; i<=m; i++) 
             { 
                     bool flag=true; 
                     for (int j=1; j<=126; j++) 
                     { 
                            y=i; y=y*j; 
                            sum=0; 
                            while (y>0) 
                            { 
                                    sum=sum+y%10; 
                                    y=y/10; 
                            } 
                            if (sum==j) 
                            { 
                                    flag=false; 
                                    break; 
                            } 
                     } 
                     if (flag) ans++; 
             } 
             return ans; 
        } 
};

********************************************************************************
*******************************************************************************/