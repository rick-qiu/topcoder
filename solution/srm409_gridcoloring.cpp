/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8012
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

class GridColoring {
public:
    double area(int K, int rows, int cols);
};

double GridColoring::area(int K, int rows, int cols) {
    double ret;
    return ret;
}


int test0() {
    int K = 1;
    int rows = 2;
    int cols = 1;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int K = 2;
    int rows = 2;
    int cols = 1;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 1.875;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int K = 1;
    int rows = 2;
    int cols = 2;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 2.25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int K = 3;
    int rows = 5;
    int cols = 7;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 19.11917924647044;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int K = 0;
    int rows = 1000;
    int cols = 1000;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int K = 0;
    int rows = 1;
    int cols = 1;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int K = 1;
    int rows = 1;
    int cols = 1;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int K = 100;
    int rows = 1000;
    int cols = 1000;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 936523.8255150901;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int K = 100;
    int rows = 10;
    int cols = 10;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 99.88968353731948;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int K = 10;
    int rows = 1;
    int cols = 1000;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 899.4762927482861;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int K = 1;
    int rows = 1000;
    int cols = 1000;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 111778.55488900792;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int K = 1;
    int rows = 134;
    int cols = 735;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 11233.367350323373;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int K = 32;
    int rows = 407;
    int cols = 341;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 116240.54757560963;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int K = 22;
    int rows = 746;
    int cols = 624;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 361402.1850454167;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int K = 74;
    int rows = 481;
    int cols = 873;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 385866.8707868741;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int K = 10;
    int rows = 670;
    int cols = 441;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 177326.4195460204;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int K = 37;
    int rows = 471;
    int cols = 402;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 161949.78168659535;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int K = 9;
    int rows = 519;
    int cols = 871;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 258187.2031884151;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int K = 50;
    int rows = 164;
    int cols = 158;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 23216.23645834032;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int K = 54;
    int rows = 3;
    int cols = 962;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 2800.7937506029925;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int K = 77;
    int rows = 412;
    int cols = 452;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 171908.35227779343;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int K = 56;
    int rows = 911;
    int cols = 898;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 732873.967598473;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int K = 93;
    int rows = 952;
    int cols = 24;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 21901.47306437352;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int K = 13;
    int rows = 15;
    int cols = 644;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 7069.852152955285;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int K = 46;
    int rows = 718;
    int cols = 798;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 502817.0384180637;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int K = 23;
    int rows = 717;
    int cols = 872;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 489988.86053183925;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int K = 84;
    int rows = 383;
    int cols = 145;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 51844.25256408814;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int K = 100;
    int rows = 469;
    int cols = 638;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 280743.0367106806;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int K = 61;
    int rows = 493;
    int cols = 214;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 95769.7553567456;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int K = 34;
    int rows = 953;
    int cols = 283;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 227809.7925184241;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int K = 62;
    int rows = 296;
    int cols = 339;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 91185.11247572151;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int K = 16;
    int rows = 931;
    int cols = 253;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 168609.67907692306;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int K = 38;
    int rows = 119;
    int cols = 104;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 10798.035487868288;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int K = 72;
    int rows = 890;
    int cols = 331;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 270404.5665187198;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int K = 90;
    int rows = 681;
    int cols = 95;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 60796.88953290993;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int K = 76;
    int rows = 277;
    int cols = 271;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 69429.47695878157;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int K = 48;
    int rows = 830;
    int cols = 282;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 206929.07822313998;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int K = 69;
    int rows = 951;
    int cols = 561;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 487332.92756517127;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int K = 86;
    int rows = 651;
    int cols = 801;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 484143.02860733605;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int K = 78;
    int rows = 257;
    int cols = 88;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 21122.560270693717;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int K = 1;
    int rows = 391;
    int cols = 519;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 22851.76731270509;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int K = 42;
    int rows = 922;
    int cols = 600;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 480176.35327794595;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int K = 14;
    int rows = 47;
    int cols = 137;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 4585.930861526224;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int K = 82;
    int rows = 912;
    int cols = 804;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 678227.2050009246;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int K = 13;
    int rows = 437;
    int cols = 59;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 17640.45548961717;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int K = 9;
    int rows = 641;
    int cols = 223;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 82124.0608682331;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int K = 66;
    int rows = 790;
    int cols = 503;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 361807.85022047587;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int K = 20;
    int rows = 712;
    int cols = 133;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 72495.90542539785;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int K = 69;
    int rows = 461;
    int cols = 170;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 71997.75342052174;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int K = 96;
    int rows = 17;
    int cols = 18;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 303.30323071359965;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int K = 70;
    int rows = 453;
    int cols = 347;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 144117.5323233712;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int K = 92;
    int rows = 43;
    int cols = 279;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 11421.814504595835;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int K = 64;
    int rows = 131;
    int cols = 165;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 19854.00407011627;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int K = 11;
    int rows = 921;
    int cols = 127;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 73803.89125808806;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int K = 7;
    int rows = 703;
    int cols = 640;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 225867.55102845063;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int K = 62;
    int rows = 715;
    int cols = 270;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 175182.88030002217;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int K = 50;
    int rows = 1000;
    int cols = 900;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 796768.2637934526;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int K = 99;
    int rows = 999;
    int cols = 999;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 934096.6601304637;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int K = 100;
    int rows = 1;
    int cols = 2;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int K = 45;
    int rows = 324;
    int cols = 999;
    GridColoring* pObj = new GridColoring();
    clock_t start = clock();
    double result = pObj->area(K, rows, cols);
    clock_t end = clock();
    delete pObj;
    double expected = 283804.85143968154;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12181&pm=8012
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
 
class GridColoring
{
public:
  double area(int K, int n, int m)
  {
    double result=0;
    for (int x=1;x<=n;x++) for (int y=1;y<=m;y++)
    {
      double C[3][3];
      for (int i=0;i<3;i++) for (int j=0;j<3;j++)
      {
        int lx=(i==0)?(x-1):((i==1)?1:(n-x));
        int ly=(j==0)?(y-1):((j==1)?1:(m-y));
        C[i][j]=lx*ly;
      }
      double total=0;
      for (int px1=0;px1<3;px1++) for (int py1=0;py1<3;py1++)
      for (int px2=0;px2<3;px2++) for (int py2=0;py2<3;py2++)
      {
        int x1=min(px1,px2),x2=max(px1,px2);
        int y1=min(py1,py2),y2=max(py1,py2);
        if (x1<=1 && x2>=1 && y1<=1 && y2>=1) total+=C[px1][py1]*C[px2][py2];
      }
      total/=n*m;
      total/=n*m;
      result+=1.0-pow(1.0-total,K);
    }
    return result;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/