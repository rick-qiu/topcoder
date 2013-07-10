/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1589
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

class RectangularGrid {
public:
    long long countRectangles(int width, int height);
};

long long RectangularGrid::countRectangles(int width, int height) {
    long long ret;
    return ret;
}


int test0() {
    int width = 3;
    int height = 3;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 22;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 5;
    int height = 2;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 31;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 10;
    int height = 10;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 2640;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 1;
    int height = 1;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 592;
    int height = 964;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 81508708664;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 1;
    int height = 1000;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 499500;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 1000;
    int height = 1000;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 250166416500;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 645;
    int height = 263;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 7213197904;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 372;
    int height = 407;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 5740659484;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 305;
    int height = 552;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 7101355260;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 440;
    int height = 694;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 23344693680;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 999;
    int height = 999;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 249167416500;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 614;
    int height = 644;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 39129899185;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 846;
    int height = 371;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 24673670350;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 606;
    int height = 26;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 64346490;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 737;
    int height = 913;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 113288367720;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 166;
    int height = 731;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 3699085070;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 215;
    int height = 799;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 7404215580;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 2;
    int height = 211;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 66466;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 723;
    int height = 584;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 44617728480;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 458;
    int height = 320;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 5380439360;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 900;
    int height = 647;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 84850147296;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 744;
    int height = 131;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 2390094476;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 502;
    int height = 322;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 6544993574;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 537;
    int height = 786;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 44590281701;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 268;
    int height = 220;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 871537810;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 633;
    int height = 578;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 33503068597;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 161;
    int height = 771;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 3871720755;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 17;
    int height = 289;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 6368064;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 181;
    int height = 278;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 635171173;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 752;
    int height = 132;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 2479079834;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 785;
    int height = 922;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 131065984045;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 856;
    int height = 837;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 128433985056;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 234;
    int height = 253;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 878621055;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 398;
    int height = 406;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 6538460614;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 684;
    int height = 295;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 10202643440;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 616;
    int height = 85;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 692432440;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 878;
    int height = 115;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 2568223470;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 866;
    int height = 258;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 12516785204;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 511;
    int height = 440;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 12656388360;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 271;
    int height = 122;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 274799876;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 1;
    int height = 2;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 2;
    int height = 1;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 2;
    int height = 2;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 999;
    int height = 998;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 248668915500;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 592;
    int height = 964;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 81508708664;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 1000;
    int height = 1000;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 250166416500;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 453;
    int height = 864;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 38352535300;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 1;
    int height = 10;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 45;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 964;
    int height = 999;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 232017076860;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 999;
    int height = 998;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 248668915500;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int width = 592;
    int height = 964;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 81508708664;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int width = 1000;
    int height = 1000;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 250166416500;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 453;
    int height = 864;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 38352535300;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int width = 1;
    int height = 10;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 45;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int width = 964;
    int height = 999;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 232017076860;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int width = 999;
    int height = 998;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 248668915500;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 592;
    int height = 964;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 81508708664;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int width = 1000;
    int height = 1000;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 250166416500;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 453;
    int height = 864;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 38352535300;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int width = 1;
    int height = 10;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 45;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int width = 964;
    int height = 999;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 232017076860;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 999;
    int height = 998;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 248668915500;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int width = 592;
    int height = 964;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 81508708664;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 1000;
    int height = 1000;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 250166416500;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int width = 453;
    int height = 864;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 38352535300;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int width = 1;
    int height = 10;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 45;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int width = 964;
    int height = 999;
    RectangularGrid* pObj = new RectangularGrid();
    clock_t start = clock();
    long long result = pObj->countRectangles(width, height);
    clock_t end = clock();
    delete pObj;
    long long expected = 232017076860;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4535&pm=1589
********************************************************************************
#line 2 "RectangularGrid.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class RectangularGrid { 
  public: 
  long long countRectangles(int width, int height) { 
    long long long long cnt=0; 
    for(int i=1;i<=width;i++) 
      for(int j=1;j<=height;j++) { 
        if (i==j) continue; 
        cnt+=(width-i+1)*(height-j+1); 
      } 
    return cnt; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
