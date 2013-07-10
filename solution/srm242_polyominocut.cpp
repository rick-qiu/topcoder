/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4489
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

class PolyominoCut {
public:
    int count(int k, int width, int height);
};

int PolyominoCut::count(int k, int width, int height) {
    int ret;
    return ret;
}


int test0() {
    int k = 1;
    int width = 10;
    int height = 20;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int k = 3;
    int width = 10;
    int height = 10;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int k = 8;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1704053350;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int k = 8;
    int width = 780;
    int height = 778;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1615412228;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int k = 8;
    int width = 776;
    int height = 16;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 26549726;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int k = 8;
    int width = 27;
    int height = 780;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 49621537;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int k = 8;
    int width = 28;
    int height = 13;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 644987;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int k = 7;
    int width = 792;
    int height = 782;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 464897376;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int k = 7;
    int width = 766;
    int height = 18;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8768680;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int k = 7;
    int width = 14;
    int height = 766;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 6460760;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int k = 7;
    int width = 17;
    int height = 29;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 279268;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int k = 6;
    int width = 769;
    int height = 779;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 128600036;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int k = 6;
    int width = 798;
    int height = 24;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3715016;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int k = 6;
    int width = 25;
    int height = 771;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3754948;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int k = 6;
    int width = 12;
    int height = 12;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 19460;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int k = 5;
    int width = 792;
    int height = 767;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 38080134;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int k = 5;
    int width = 800;
    int height = 27;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1260006;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int k = 5;
    int width = 10;
    int height = 779;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 394612;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int k = 5;
    int width = 18;
    int height = 21;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 19156;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int k = 4;
    int width = 793;
    int height = 778;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 11678147;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int k = 4;
    int width = 796;
    int height = 27;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 385313;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int k = 4;
    int width = 26;
    int height = 791;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 367887;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int k = 4;
    int width = 27;
    int height = 11;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4588;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int k = 3;
    int width = 777;
    int height = 774;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3599082;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int k = 3;
    int width = 772;
    int height = 16;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 69384;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int k = 3;
    int width = 17;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 76698;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int k = 3;
    int width = 20;
    int height = 21;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 2274;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int k = 2;
    int width = 793;
    int height = 781;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1237092;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int k = 2;
    int width = 780;
    int height = 16;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 24164;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int k = 2;
    int width = 27;
    int height = 780;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 41313;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int k = 2;
    int width = 25;
    int height = 21;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1004;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int k = 1;
    int width = 762;
    int height = 774;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 589788;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int k = 1;
    int width = 763;
    int height = 18;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 13734;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int k = 1;
    int width = 11;
    int height = 777;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 8547;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int k = 1;
    int width = 25;
    int height = 13;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int k = 1;
    int width = 184;
    int height = 277;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 50968;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int k = 8;
    int width = 515;
    int height = 303;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 411826908;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int k = 8;
    int width = 48;
    int height = 754;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 90278720;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int k = 3;
    int width = 769;
    int height = 61;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 276474;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int k = 3;
    int width = 358;
    int height = 519;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1109550;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int k = 8;
    int width = 27;
    int height = 51;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3046456;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int k = 2;
    int width = 255;
    int height = 795;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 404400;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int k = 7;
    int width = 480;
    int height = 567;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 203541404;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int k = 7;
    int width = 417;
    int height = 130;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 39829204;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int k = 1;
    int width = 353;
    int height = 497;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 175441;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int k = 3;
    int width = 75;
    int height = 10;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3990;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int k = 6;
    int width = 340;
    int height = 237;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 17109394;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int k = 4;
    int width = 74;
    int height = 506;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 695205;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int k = 7;
    int width = 741;
    int height = 370;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 204925540;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int k = 5;
    int width = 46;
    int height = 20;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 50008;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int k = 7;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 480458296;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int k = 6;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 137418292;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int k = 5;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 40124900;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int k = 4;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 12115209;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int k = 3;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 3830400;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int k = 2;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 1278400;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int k = 1;
    int width = 800;
    int height = 800;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 640000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int k = 8;
    int width = 9;
    int height = 9;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 82732;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int k = 7;
    int width = 8;
    int height = 8;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 18424;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int k = 6;
    int width = 7;
    int height = 7;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4080;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int k = 5;
    int width = 6;
    int height = 6;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 904;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int k = 4;
    int width = 5;
    int height = 5;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int k = 3;
    int width = 4;
    int height = 4;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int k = 2;
    int width = 3;
    int height = 3;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int k = 1;
    int width = 2;
    int height = 2;
    PolyominoCut* pObj = new PolyominoCut();
    clock_t start = clock();
    int result = pObj->count(k, width, height);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=7217&pm=4489
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <set> 
#include <sstream> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
typedef pair<int,int> coords; 
#define X first 
#define Y second  
 
const int dx[4] = { -1, 0, 1, 0 }; 
const int dy[4] = { 0, 1, 0, -1 };  
 
set< set<coords> > bio; 
 
class PolyominoCut {  
   public:  
    
   int solve( int w, int h, set<coords> polyomino ) { 
      int minx = 0, maxx = 0; 
      int miny = 0, maxy = 0; 
       
      for( set<coords>::iterator it = polyomino.begin(); it != polyomino.end(); ++it ) { 
         minx <?= (*it).X; maxx >?= (*it).X; 
         miny <?= (*it).Y; maxy >?= (*it).Y; 
      } 
       
      for( int x = minx; x <= maxx; ++x ) 
         for( int y = miny; y <= maxy; ++y ) 
            if( !polyomino.count( coords( x, y ) ) && 
                polyomino.count( coords( x+1, y ) ) && 
                polyomino.count( coords( x, y+1 ) ) && 
                polyomino.count( coords( x-1, y ) ) && 
                polyomino.count( coords( x, y-1 ) ) ) return 0; 
 
      int N = 0, E = 0, S = 0, W = 0; 
      int cnt = 0; 
      for( int x = minx; x <= maxx; ++x ) { 
         if( cnt == 2 &&  polyomino.count( coords( x, miny ) ) ) cnt++; 
         if( cnt == 1 && !polyomino.count( coords( x, miny ) ) ) cnt++; 
         if( cnt == 0 &&  polyomino.count( coords( x, miny ) ) ) cnt++; 
      } 
      if( cnt == 3 ) N = 1; 
      cnt = 0; 
      for( int x = minx; x <= maxx; ++x ) { 
         if( cnt == 2 &&  polyomino.count( coords( x, maxy ) ) ) cnt++; 
         if( cnt == 1 && !polyomino.count( coords( x, maxy ) ) ) cnt++; 
         if( cnt == 0 &&  polyomino.count( coords( x, maxy ) ) ) cnt++; 
      } 
      if( cnt == 3 ) S = 1; 
      cnt = 0; 
      for( int y = miny; y <= maxy; ++y ) { 
         if( cnt == 2 &&  polyomino.count( coords( minx, y ) ) ) cnt++; 
         if( cnt == 1 && !polyomino.count( coords( minx, y ) ) ) cnt++; 
         if( cnt == 0 &&  polyomino.count( coords( minx, y ) ) ) cnt++; 
      } 
      if( cnt == 3 ) W = 1; 
      cnt = 0; 
      for( int y = miny; y <= maxy; ++y ) { 
         if( cnt == 2 &&  polyomino.count( coords( maxx, y ) ) ) cnt++; 
         if( cnt == 1 && !polyomino.count( coords( maxx, y ) ) ) cnt++; 
         if( cnt == 0 &&  polyomino.count( coords( maxx, y ) ) ) cnt++; 
      } 
      if( cnt == 3 ) E = 1; 
      //      cout << N << W << S << E << endl; 
 
      int NW = !polyomino.count( coords( minx, miny ) ); 
      int NE = !polyomino.count( coords( maxx, miny ) ); 
      int SW = !polyomino.count( coords( minx, maxy ) ); 
      int SE = !polyomino.count( coords( maxx, maxy ) ); 
 
      int rows = h - (maxy-miny) - N - S; 
      int cols = w - (maxx-minx) - E - W; 
       
      int ret = rows*cols; 
      if( NW && !N && !W ) ret--; 
      if( NE && !N && !E ) ret--; 
      if( SW && !S && !W ) ret--; 
      if( SE && !S && !E ) ret--; 
      return ret; 
   } 
 
   int rec( int k, int w, int h, set<coords> polyomino ) { 
      int minx = 0, maxx = 0, miny = 0, maxy = 0; 
      for( set<coords>::iterator it = polyomino.begin(); it != polyomino.end(); ++it ) { 
         minx <?= (*it).X; maxx >?= (*it).X; 
         miny <?= (*it).Y; maxy >?= (*it).Y; 
      } 
      set<coords> novi; 
 
      for( set<coords>::iterator it = polyomino.begin(); it != polyomino.end(); ++it )  
         novi.insert( coords( (*it).X-minx, (*it).Y-miny ) ); 
       
      if( bio.count( novi ) ) return 0; 
      bio.insert( novi ); 
 
      polyomino = novi; 
 
      if( k == 0 ) return solve( w, h, polyomino ); 
       
      int ret = 0; 
 
      for( set<coords>::iterator it = polyomino.begin(); it != polyomino.end(); ++it ) { 
         for( int d = 0; d < 4; ++d ) { 
            coords a( (*it).X + dx[d], (*it).Y + dy[d] );  
            if( novi.count( a ) ) continue; 
            novi.insert( a ); 
            ret += rec( k-1, w, h, novi ); 
            novi.erase( a ); 
         } 
      } 
       
      return ret; 
   } 
 
   int count(int k, int width, int height)  
   {  
      bio.clear(); 
      set<coords> polyomino; 
      polyomino.insert( coords( 0, 0 ) ); 
      return rec( k-1, width, height, polyomino ); 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/