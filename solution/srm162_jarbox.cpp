/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1586
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

class JarBox {
public:
    int numJars(int radius, int woodlength);
};

int JarBox::numJars(int radius, int woodlength) {
    int ret;
    return ret;
}


int test0() {
    int radius = 1;
    int woodlength = 8;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
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
    int radius = 1;
    int woodlength = 16;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int radius = 1;
    int woodlength = 18;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int radius = 1;
    int woodlength = 45;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int radius = 1;
    int woodlength = 10000;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 1803252;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int radius = 6;
    int woodlength = 1269;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int radius = 10;
    int woodlength = 8544;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 13082;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int radius = 7;
    int woodlength = 8840;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 28640;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int radius = 10;
    int woodlength = 4480;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 3575;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int radius = 8;
    int woodlength = 603;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int radius = 3;
    int woodlength = 2081;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 8613;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int radius = 3;
    int woodlength = 2685;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 14365;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int radius = 7;
    int woodlength = 695;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int radius = 4;
    int woodlength = 8235;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 76258;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int radius = 1;
    int woodlength = 7968;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 1144706;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int radius = 4;
    int woodlength = 7805;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 68495;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int radius = 7;
    int woodlength = 1511;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int radius = 3;
    int woodlength = 8305;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 138006;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int radius = 4;
    int woodlength = 6838;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 52553;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int radius = 7;
    int woodlength = 2827;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 2900;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int radius = 10;
    int woodlength = 7760;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 10792;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int radius = 6;
    int woodlength = 2100;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 2175;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int radius = 3;
    int woodlength = 5609;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 62879;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int radius = 3;
    int woodlength = 5506;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 60588;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int radius = 2;
    int woodlength = 4903;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 108195;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int radius = 7;
    int woodlength = 545;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int radius = 8;
    int woodlength = 2562;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 1817;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int radius = 3;
    int woodlength = 3307;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 21816;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int radius = 10;
    int woodlength = 4331;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 3339;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int radius = 8;
    int woodlength = 8732;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 21390;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int radius = 2;
    int woodlength = 3753;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 63350;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int radius = 7;
    int woodlength = 9823;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 35394;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int radius = 4;
    int woodlength = 7794;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 68320;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int radius = 10;
    int woodlength = 3656;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 2376;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int radius = 10;
    int woodlength = 2168;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int radius = 2;
    int woodlength = 3501;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 55118;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int radius = 5;
    int woodlength = 2702;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 5214;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int radius = 2;
    int woodlength = 4227;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 80388;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int radius = 7;
    int woodlength = 8354;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 25578;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int radius = 6;
    int woodlength = 5143;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 13176;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int radius = 10;
    int woodlength = 7383;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 9765;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int radius = 10;
    int woodlength = 9737;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 17010;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int radius = 10;
    int woodlength = 8611;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 13293;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int radius = 7;
    int woodlength = 2946;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 3150;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int radius = 10;
    int woodlength = 1287;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 285;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int radius = 1;
    int woodlength = 4364;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 343202;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int radius = 3;
    int woodlength = 6044;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 73041;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int radius = 7;
    int woodlength = 1140;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 462;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int radius = 8;
    int woodlength = 6523;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 11918;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int radius = 3;
    int woodlength = 8120;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 131920;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int radius = 2;
    int woodlength = 3807;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 65176;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int radius = 1;
    int woodlength = 8;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int radius = 2;
    int woodlength = 517;
    JarBox* pObj = new JarBox();
    clock_t start = clock();
    int result = pObj->numJars(radius, woodlength);
    clock_t end = clock();
    delete pObj;
    int expected = 1178;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4615&pm=1586
********************************************************************************
#include <algorithm> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <cmath> 
using namespace std; 
 
#define REP(i,n) for(int i=0;i<(n);++i) 
#define FOR(i,a,b) for(int i=(a);i<=(b);++i) 
#define FORD(i,a,b) for(int i=(a);i>=(b);--i) 
#define FOREACH(i,c) for(typeof((c).begin()) i=(c).begin();i!=(c).end();++i) 
typedef long long LL; 
const int INF = 1000000000; 
typedef vector<int> VI; 
template<class T> inline int size(const T&c) { return c.size(); } 
 
char buf1[1000]; 
 
string i2s(int x) { 
  sprintf(buf1,"%d",x); 
  return buf1; 
} 
 
 
struct JarBox { 
  // MAIN 
  int numJars(int radius, int woodlength) { 
    double r = radius; 
    double sum = woodlength * 0.5; 
    int m = (int)((sum-2*r)/(2*r)); 
    for(int rows=2;;++rows) { 
      double szer = sum - 2*r - (rows-1)*r*sqrt(3.0); 
      int aa = (int)(szer/(2*r)); 
      int bb = (int)((szer-r)/(2*r)); 
      if(aa==0) break; 
      int tot = rows/2*bb + (rows+1)/2*aa; 
      m = max(m,tot); 
    } 
    return m; 
  } 
   
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/