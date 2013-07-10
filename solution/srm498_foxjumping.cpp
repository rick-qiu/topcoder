/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11223
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

class FoxJumping {
public:
    int getCount(int Tx, int Ty, int Mx, int My, int R, vector<int> bad);
};

int FoxJumping::getCount(int Tx, int Ty, int Mx, int My, int R, vector<int> bad) {
    int ret;
    return ret;
}


int test0() {
    int Tx = 2;
    int Ty = 2;
    int Mx = 1;
    int My = 1;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
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
    int Tx = 2;
    int Ty = 2;
    int Mx = 1;
    int My = 1;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int Tx = 10;
    int Ty = 10;
    int Mx = 10;
    int My = 10;
    int R = 1;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int Tx = 10;
    int Ty = 10;
    int Mx = 10;
    int My = 10;
    int R = 1;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int Tx = 11;
    int Ty = 11;
    int Mx = 11;
    int My = 11;
    int R = 2;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int Tx = 123;
    int Ty = 456;
    int Mx = 70;
    int My = 80;
    int R = 90;
    vector<int> bad = {30, 40, 20, 10, 50};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6723;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int Tx = 776;
    int Ty = 612;
    int Mx = 800;
    int My = 800;
    int R = 333;
    vector<int> bad = {30, 60, 80, 110, 200};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6355;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int Tx = 725;
    int Ty = 677;
    int Mx = 23;
    int My = 481;
    int R = 33;
    vector<int> bad = {20};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6041;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int Tx = 714;
    int Ty = 2;
    int Mx = 91;
    int My = 800;
    int R = 202;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2805;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 1;
    int My = 1;
    int R = 1600;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
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
    int Tx = 72;
    int Ty = 90;
    int Mx = 44;
    int My = 59;
    int R = 1587;
    vector<int> bad = {20, 40};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int Tx = 349;
    int Ty = 791;
    int Mx = 154;
    int My = 199;
    int R = 1533;
    vector<int> bad = {40, 90, 130};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1600;
    vector<int> bad = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2809;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1550;
    vector<int> bad = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6975;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1587;
    vector<int> bad = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2007;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1521;
    vector<int> bad = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6518;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 808;
    vector<int> bad = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4067;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 472;
    vector<int> bad = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490, 500};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3177;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1599;
    vector<int> bad = {10, 30, 50, 70, 90, 110, 130, 150, 170, 190, 210, 230, 250, 270, 290, 310, 330, 350, 370, 390, 410, 430, 450, 470, 490, 510, 530, 550, 570, 590, 610, 630};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5639;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 422;
    vector<int> bad = {10, 30, 50, 70, 90, 110, 130, 150, 170, 190, 210, 230, 250, 270, 290, 310, 330, 350, 370, 390, 410, 430, 450, 470, 490, 510, 530, 550, 570, 590, 610, 630};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4240;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 1;
    int My = 1;
    int R = 1;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int Tx = 1;
    int Ty = 2;
    int Mx = 1;
    int My = 1;
    int R = 1;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int Tx = 1;
    int Ty = 2;
    int Mx = 1;
    int My = 2;
    int R = 1;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int Tx = 2;
    int Ty = 2;
    int Mx = 2;
    int My = 2;
    int R = 1;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int Tx = 5;
    int Ty = 5;
    int Mx = 5;
    int My = 5;
    int R = 1;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 1;
    int My = 1;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int Tx = 1;
    int Ty = 2;
    int Mx = 1;
    int My = 1;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int Tx = 2;
    int Ty = 1;
    int Mx = 1;
    int My = 2;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int Tx = 2;
    int Ty = 1;
    int Mx = 2;
    int My = 1;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int Tx = 2;
    int Ty = 1;
    int Mx = 2;
    int My = 2;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int Tx = 2;
    int Ty = 2;
    int Mx = 1;
    int My = 1;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int Tx = 2;
    int Ty = 2;
    int Mx = 2;
    int My = 2;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int Tx = 3;
    int Ty = 1;
    int Mx = 1;
    int My = 1;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int Tx = 3;
    int Ty = 1;
    int Mx = 2;
    int My = 2;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int Tx = 2;
    int Ty = 3;
    int Mx = 2;
    int My = 2;
    int R = 2;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 1;
    int My = 1;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 1;
    int My = 2;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 2;
    int My = 2;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int Tx = 1;
    int Ty = 2;
    int Mx = 1;
    int My = 1;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int Tx = 1;
    int Ty = 2;
    int Mx = 1;
    int My = 2;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int Tx = 1;
    int Ty = 2;
    int Mx = 2;
    int My = 1;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int Tx = 1;
    int Ty = 3;
    int Mx = 1;
    int My = 2;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int Tx = 1;
    int Ty = 3;
    int Mx = 1;
    int My = 3;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int Tx = 2;
    int Ty = 3;
    int Mx = 2;
    int My = 2;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int Tx = 2;
    int Ty = 3;
    int Mx = 2;
    int My = 3;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int Tx = 3;
    int Ty = 3;
    int Mx = 1;
    int My = 1;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int Tx = 3;
    int Ty = 3;
    int Mx = 2;
    int My = 2;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int Tx = 3;
    int Ty = 3;
    int Mx = 3;
    int My = 3;
    int R = 3;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int Tx = 28;
    int Ty = 25;
    int Mx = 23;
    int My = 10;
    int R = 51;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7792;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int Tx = 20;
    int Ty = 18;
    int Mx = 8;
    int My = 13;
    int R = 31;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8377;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int Tx = 10;
    int Ty = 11;
    int Mx = 9;
    int My = 11;
    int R = 20;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3120;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int Tx = 19;
    int Ty = 20;
    int Mx = 19;
    int My = 15;
    int R = 33;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2144;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int Tx = 34;
    int Ty = 27;
    int Mx = 3;
    int My = 11;
    int R = 52;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2417;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int Tx = 10;
    int Ty = 12;
    int Mx = 7;
    int My = 4;
    int R = 22;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6198;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int Tx = 21;
    int Ty = 20;
    int Mx = 8;
    int My = 15;
    int R = 35;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 493;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int Tx = 30;
    int Ty = 33;
    int Mx = 11;
    int My = 9;
    int R = 55;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 470;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int Tx = 67;
    int Ty = 54;
    int Mx = 27;
    int My = 1;
    int R = 105;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int Tx = 64;
    int Ty = 107;
    int Mx = 34;
    int My = 53;
    int R = 163;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9493;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int Tx = 113;
    int Ty = 118;
    int Mx = 88;
    int My = 62;
    int R = 209;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9365;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int Tx = 95;
    int Ty = 107;
    int Mx = 47;
    int My = 80;
    int R = 172;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4780;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int Tx = 103;
    int Ty = 96;
    int Mx = 5;
    int My = 91;
    int R = 195;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8950;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int Tx = 131;
    int Ty = 118;
    int Mx = 35;
    int My = 18;
    int R = 218;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5863;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int Tx = 79;
    int Ty = 120;
    int Mx = 31;
    int My = 21;
    int R = 181;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4207;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int Tx = 64;
    int Ty = 48;
    int Mx = 24;
    int My = 48;
    int R = 107;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 954;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int Tx = 322;
    int Ty = 247;
    int Mx = 17;
    int My = 154;
    int R = 529;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1203;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int Tx = 252;
    int Ty = 315;
    int Mx = 185;
    int My = 123;
    int R = 528;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4335;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int Tx = 220;
    int Ty = 203;
    int Mx = 38;
    int My = 182;
    int R = 406;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7750;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int Tx = 337;
    int Ty = 254;
    int Mx = 217;
    int My = 124;
    int R = 509;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3137;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int Tx = 292;
    int Ty = 213;
    int Mx = 63;
    int My = 92;
    int R = 445;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5898;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int Tx = 296;
    int Ty = 210;
    int Mx = 94;
    int My = 13;
    int R = 454;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 207;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int Tx = 318;
    int Ty = 250;
    int Mx = 310;
    int My = 55;
    int R = 522;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8170;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int Tx = 302;
    int Ty = 272;
    int Mx = 292;
    int My = 213;
    int R = 507;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 632;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int Tx = 332;
    int Ty = 513;
    int Mx = 79;
    int My = 380;
    int R = 835;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1764;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int Tx = 501;
    int Ty = 513;
    int Mx = 398;
    int My = 86;
    int R = 857;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3372;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int Tx = 590;
    int Ty = 513;
    int Mx = 199;
    int My = 419;
    int R = 1030;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1611;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int Tx = 510;
    int Ty = 689;
    int Mx = 317;
    int My = 124;
    int R = 1065;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6170;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int Tx = 501;
    int Ty = 480;
    int Mx = 107;
    int My = 426;
    int R = 810;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1440;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int Tx = 583;
    int Ty = 619;
    int Mx = 16;
    int My = 296;
    int R = 943;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8108;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int Tx = 500;
    int Ty = 703;
    int Mx = 460;
    int My = 4;
    int R = 1132;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4173;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int Tx = 560;
    int Ty = 557;
    int Mx = 135;
    int My = 453;
    int R = 1076;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4598;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int Tx = 796;
    int Ty = 708;
    int Mx = 498;
    int My = 345;
    int R = 1476;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7062;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int Tx = 779;
    int Ty = 763;
    int Mx = 150;
    int My = 157;
    int R = 1534;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3109;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int Tx = 739;
    int Ty = 773;
    int Mx = 386;
    int My = 160;
    int R = 1472;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1754;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int Tx = 794;
    int Ty = 731;
    int Mx = 593;
    int My = 520;
    int R = 1519;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1058;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int Tx = 777;
    int Ty = 792;
    int Mx = 98;
    int My = 519;
    int R = 1550;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8397;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int Tx = 789;
    int Ty = 738;
    int Mx = 117;
    int My = 175;
    int R = 1487;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7610;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int Tx = 766;
    int Ty = 793;
    int Mx = 458;
    int My = 408;
    int R = 1488;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8244;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int Tx = 723;
    int Ty = 794;
    int Mx = 421;
    int My = 262;
    int R = 1495;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5377;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int Tx = 17;
    int Ty = 20;
    int Mx = 43;
    int My = 285;
    int R = 31;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6506;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int Tx = 17;
    int Ty = 20;
    int Mx = 15;
    int My = 672;
    int R = 31;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6506;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int Tx = 18;
    int Ty = 24;
    int Mx = 357;
    int My = 171;
    int R = 39;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int Tx = 18;
    int Ty = 24;
    int Mx = 12;
    int My = 172;
    int R = 39;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int Tx = 12;
    int Ty = 14;
    int Mx = 149;
    int My = 89;
    int R = 24;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4003;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int Tx = 12;
    int Ty = 14;
    int Mx = 132;
    int My = 12;
    int R = 24;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4003;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int Tx = 26;
    int Ty = 25;
    int Mx = 644;
    int My = 118;
    int R = 39;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9482;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int Tx = 26;
    int Ty = 25;
    int Mx = 14;
    int My = 627;
    int R = 39;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9482;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int Tx = 64;
    int Ty = 58;
    int Mx = 273;
    int My = 603;
    int R = 103;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1675;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int Tx = 64;
    int Ty = 58;
    int Mx = 108;
    int My = 55;
    int R = 103;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1675;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int Tx = 62;
    int Ty = 75;
    int Mx = 643;
    int My = 597;
    int R = 126;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5292;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int Tx = 62;
    int Ty = 75;
    int Mx = 9;
    int My = 151;
    int R = 126;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5816;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int Tx = 51;
    int Ty = 88;
    int Mx = 82;
    int My = 192;
    int R = 134;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8425;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int Tx = 51;
    int Ty = 88;
    int Mx = 336;
    int My = 71;
    int R = 134;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8425;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int Tx = 59;
    int Ty = 50;
    int Mx = 517;
    int My = 108;
    int R = 108;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6952;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int Tx = 59;
    int Ty = 50;
    int Mx = 456;
    int My = 31;
    int R = 108;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6952;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int Tx = 236;
    int Ty = 299;
    int Mx = 629;
    int My = 549;
    int R = 487;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 621;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int Tx = 236;
    int Ty = 299;
    int Mx = 303;
    int My = 57;
    int R = 487;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 621;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int Tx = 255;
    int Ty = 191;
    int Mx = 473;
    int My = 272;
    int R = 440;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9398;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int Tx = 255;
    int Ty = 191;
    int Mx = 53;
    int My = 323;
    int R = 440;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9398;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int Tx = 232;
    int Ty = 226;
    int Mx = 245;
    int My = 430;
    int R = 452;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3185;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int Tx = 232;
    int Ty = 226;
    int Mx = 22;
    int My = 359;
    int R = 452;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3185;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int Tx = 312;
    int Ty = 305;
    int Mx = 474;
    int My = 390;
    int R = 539;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5011;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int Tx = 312;
    int Ty = 305;
    int Mx = 22;
    int My = 636;
    int R = 539;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 944;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int Tx = 502;
    int Ty = 491;
    int Mx = 648;
    int My = 545;
    int R = 872;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5254;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int Tx = 502;
    int Ty = 491;
    int Mx = 692;
    int My = 197;
    int R = 872;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5254;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int Tx = 439;
    int Ty = 540;
    int Mx = 762;
    int My = 708;
    int R = 928;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8727;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int Tx = 439;
    int Ty = 540;
    int Mx = 408;
    int My = 659;
    int R = 928;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8727;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int Tx = 680;
    int Ty = 632;
    int Mx = 737;
    int My = 779;
    int R = 1073;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2773;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int Tx = 680;
    int Ty = 632;
    int Mx = 721;
    int My = 59;
    int R = 1073;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8543;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int Tx = 476;
    int Ty = 468;
    int Mx = 743;
    int My = 793;
    int R = 910;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int Tx = 476;
    int Ty = 468;
    int Mx = 135;
    int My = 675;
    int R = 910;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int Tx = 749;
    int Ty = 794;
    int Mx = 770;
    int My = 796;
    int R = 1518;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3351;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int Tx = 749;
    int Ty = 794;
    int Mx = 144;
    int My = 796;
    int R = 1518;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3351;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int Tx = 686;
    int Ty = 766;
    int Mx = 708;
    int My = 771;
    int R = 1414;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7035;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int Tx = 686;
    int Ty = 766;
    int Mx = 720;
    int My = 414;
    int R = 1414;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7035;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int Tx = 724;
    int Ty = 784;
    int Mx = 725;
    int My = 786;
    int R = 1498;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1566;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int Tx = 724;
    int Ty = 784;
    int Mx = 614;
    int My = 789;
    int R = 1498;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1566;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int Tx = 798;
    int Ty = 776;
    int Mx = 798;
    int My = 791;
    int R = 1479;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int Tx = 798;
    int Ty = 776;
    int Mx = 800;
    int My = 582;
    int R = 1479;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 1;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int Tx = 1;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 2;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int Tx = 2;
    int Ty = 3;
    int Mx = 10;
    int My = 10;
    int R = 1;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int Tx = 2;
    int Ty = 3;
    int Mx = 10;
    int My = 10;
    int R = 2;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int Tx = 8;
    int Ty = 6;
    int Mx = 10;
    int My = 10;
    int R = 4;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9194;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int Tx = 9;
    int Ty = 10;
    int Mx = 10;
    int My = 10;
    int R = 1;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int Tx = 10;
    int Ty = 9;
    int Mx = 10;
    int My = 10;
    int R = 10;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2143;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int Tx = 10;
    int Ty = 9;
    int Mx = 10;
    int My = 10;
    int R = 19;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2315;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int Tx = 10;
    int Ty = 9;
    int Mx = 10;
    int My = 10;
    int R = 20;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int Tx = 10;
    int Ty = 10;
    int Mx = 10;
    int My = 10;
    int R = 1;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int Tx = 10;
    int Ty = 10;
    int Mx = 10;
    int My = 10;
    int R = 2;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int Tx = 800;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 80;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int Tx = 800;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 222;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4241;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int Tx = 800;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 799;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1774;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int Tx = 800;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 800;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9559;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int Tx = 800;
    int Ty = 1;
    int Mx = 10;
    int My = 10;
    int R = 801;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 801;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 79;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 80;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 81;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 99;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1908;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 121;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2249;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 589;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4527;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 10;
    int My = 10;
    int R = 1600;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2809;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int Tx = 784;
    int Ty = 799;
    int Mx = 11;
    int My = 12;
    int R = 99;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5508;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int Tx = 725;
    int Ty = 748;
    int Mx = 13;
    int My = 12;
    int R = 127;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9813;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5953;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {20};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4408;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {30};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7130;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {40};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5144;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {50};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3584;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {60};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5541;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int Tx = 698;
    int Ty = 797;
    int Mx = 89;
    int My = 201;
    int R = 666;
    vector<int> bad = {70};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8745;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1;
    vector<int> bad = {800};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 2;
    vector<int> bad = {800};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1151;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int Tx = 799;
    int Ty = 800;
    int Mx = 792;
    int My = 798;
    int R = 2;
    vector<int> bad = {790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6006;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int Tx = 798;
    int Ty = 800;
    int Mx = 792;
    int My = 798;
    int R = 3;
    vector<int> bad = {790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4761;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int Tx = 799;
    int Ty = 800;
    int Mx = 792;
    int My = 798;
    int R = 55;
    vector<int> bad = {790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8382;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int Tx = 799;
    int Ty = 800;
    int Mx = 792;
    int My = 798;
    int R = 2;
    vector<int> bad = {740};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6006;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int Tx = 798;
    int Ty = 800;
    int Mx = 792;
    int My = 798;
    int R = 3;
    vector<int> bad = {740};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4268;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int Tx = 799;
    int Ty = 800;
    int Mx = 792;
    int My = 798;
    int R = 49;
    vector<int> bad = {740};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9111;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int Tx = 60;
    int Ty = 606;
    int Mx = 736;
    int My = 744;
    int R = 3;
    vector<int> bad = {160, 730, 500, 140, 210};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7364;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int Tx = 758;
    int Ty = 31;
    int Mx = 800;
    int My = 791;
    int R = 4;
    vector<int> bad = {210, 360, 420, 670, 520, 560, 620, 790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9177;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int Tx = 83;
    int Ty = 659;
    int Mx = 784;
    int My = 777;
    int R = 4;
    vector<int> bad = {730, 660, 580, 510, 470, 450, 420, 350, 270, 30};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4910;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int Tx = 613;
    int Ty = 157;
    int Mx = 733;
    int My = 696;
    int R = 12;
    vector<int> bad = {650, 430, 400, 380};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7270;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int Tx = 596;
    int Ty = 525;
    int Mx = 660;
    int My = 679;
    int R = 68;
    vector<int> bad = {110, 100, 320, 590, 330, 360};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 4479;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int Tx = 90;
    int Ty = 106;
    int Mx = 798;
    int My = 798;
    int R = 42;
    vector<int> bad = {10, 100, 170, 210, 420, 460, 480, 540, 780, 790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5071;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int Tx = 737;
    int Ty = 224;
    int Mx = 794;
    int My = 780;
    int R = 252;
    vector<int> bad = {660, 210, 120, 770, 190, 690, 560, 50, 440};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9119;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int Tx = 577;
    int Ty = 49;
    int Mx = 753;
    int My = 771;
    int R = 1097;
    vector<int> bad = {10, 70, 180, 300, 330, 350, 520, 620, 740};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int Tx = 721;
    int Ty = 423;
    int Mx = 783;
    int My = 780;
    int R = 1159;
    vector<int> bad = {20, 30, 180, 690};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int Tx = 587;
    int Ty = 213;
    int Mx = 753;
    int My = 757;
    int R = 1011;
    vector<int> bad = {590, 380, 160};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int Tx = 300;
    int Ty = 78;
    int Mx = 791;
    int My = 794;
    int R = 3;
    vector<int> bad = {760, 700, 680, 670, 660, 650, 520, 490, 410, 350, 260, 220, 210, 140, 130, 100, 80, 50, 20};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1907;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int Tx = 434;
    int Ty = 364;
    int Mx = 800;
    int My = 800;
    int R = 2;
    vector<int> bad = {30, 60, 70, 160, 200, 250, 280, 340, 350, 370, 410, 430, 440, 450, 580, 590, 600, 650, 670, 700, 730, 740, 750, 780, 800};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8650;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int Tx = 730;
    int Ty = 753;
    int Mx = 797;
    int My = 796;
    int R = 4;
    vector<int> bad = {60, 70, 90, 110, 210, 230, 260, 290, 300, 320, 350, 390, 420, 440, 460, 490, 540, 600, 630, 650, 680, 740, 770};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8577;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int Tx = 689;
    int Ty = 256;
    int Mx = 800;
    int My = 800;
    int R = 13;
    vector<int> bad = {520, 670, 50, 500, 800, 430, 260, 60, 710, 200, 220, 280, 750, 80, 210, 400, 790, 100, 580, 470, 720, 780, 630, 420, 90, 540, 600, 270, 360};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3919;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int Tx = 201;
    int Ty = 213;
    int Mx = 789;
    int My = 775;
    int R = 41;
    vector<int> bad = {740, 710, 620, 610, 560, 520, 490, 400, 320, 250, 220, 180, 170, 160, 150, 130, 110, 80, 70, 30, 10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9321;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int Tx = 117;
    int Ty = 388;
    int Mx = 791;
    int My = 777;
    int R = 90;
    vector<int> bad = {740, 380, 490, 150, 590, 100, 520, 550, 30, 330, 440, 80};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5333;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int Tx = 594;
    int Ty = 29;
    int Mx = 764;
    int My = 794;
    int R = 298;
    vector<int> bad = {50, 200, 330, 510, 180, 470, 130, 440, 240, 720, 250, 750, 190, 400, 150, 420, 460, 520, 230, 260, 170, 690, 480, 390};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8941;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int Tx = 633;
    int Ty = 793;
    int Mx = 800;
    int My = 794;
    int R = 1103;
    vector<int> bad = {30, 60, 90, 110, 140, 150, 180, 230, 300, 370, 400, 470, 520, 600, 660, 690, 720, 790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2388;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int Tx = 632;
    int Ty = 690;
    int Mx = 797;
    int My = 796;
    int R = 1028;
    vector<int> bad = {790, 770, 760, 750, 670, 630, 620, 540, 520, 490, 480, 430, 410, 360, 340, 320, 310, 290, 280, 250, 230, 200, 150, 120, 110, 30};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8950;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int Tx = 650;
    int Ty = 154;
    int Mx = 795;
    int My = 796;
    int R = 1067;
    vector<int> bad = {770, 420, 350, 10, 30, 780, 390, 670, 290, 20, 380, 90, 720, 340, 40, 410, 190, 790, 710, 640, 260, 750, 440, 150, 690, 360, 270};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int Tx = 719;
    int Ty = 570;
    int Mx = 781;
    int My = 789;
    int R = 4;
    vector<int> bad = {410, 440, 520, 750, 310, 260, 590, 180, 780, 330, 90, 340, 140, 490, 210, 250, 40, 550, 320, 450, 280, 220, 10, 600, 30, 350, 740, 710, 150, 190, 720, 770, 680, 130, 390, 690};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1208;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int Tx = 2;
    int Ty = 275;
    int Mx = 800;
    int My = 800;
    int R = 2;
    vector<int> bad = {60, 80, 90, 120, 130, 140, 150, 160, 170, 180, 210, 230, 240, 250, 260, 270, 310, 320, 330, 340, 370, 390, 450, 460, 500, 510, 530, 540, 570, 580, 590, 600, 610, 640, 660, 670, 690, 700, 800};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int Tx = 33;
    int Ty = 91;
    int Mx = 793;
    int My = 794;
    int R = 4;
    vector<int> bad = {10, 50, 60, 80, 130, 140, 190, 200, 210, 280, 290, 350, 400, 420, 430, 520, 530, 540, 570, 590, 600, 610, 630, 640, 650, 710, 720, 760, 780, 790};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 7787;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int Tx = 712;
    int Ty = 672;
    int Mx = 794;
    int My = 761;
    int R = 18;
    vector<int> bad = {710, 680, 110, 170, 180, 320, 340, 230, 560, 490, 440, 80, 130, 270, 400, 380, 570, 620, 540, 760, 60, 660, 420, 450, 310, 240, 480, 530, 300, 140, 160, 740, 650};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2990;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int Tx = 304;
    int Ty = 471;
    int Mx = 794;
    int My = 791;
    int R = 98;
    vector<int> bad = {790, 780, 770, 760, 750, 720, 670, 650, 630, 580, 570, 560, 550, 540, 530, 510, 500, 490, 470, 460, 420, 400, 370, 350, 340, 320, 300, 290, 280, 270, 260, 240, 230, 210, 200, 160, 150, 120, 110, 100, 80, 70, 60, 20, 10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9026;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int Tx = 375;
    int Ty = 164;
    int Mx = 776;
    int My = 778;
    int R = 46;
    vector<int> bad = {10, 20, 30, 40, 50, 70, 90, 110, 140, 170, 180, 190, 230, 240, 250, 290, 300, 320, 330, 370, 390, 400, 440, 450, 490, 530, 580, 600, 610, 620, 650, 670, 680, 710, 730, 770};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5465;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int Tx = 679;
    int Ty = 595;
    int Mx = 798;
    int My = 793;
    int R = 384;
    vector<int> bad = {770, 760, 740, 730, 710, 630, 570, 550, 540, 520, 510, 490, 470, 450, 420, 390, 350, 340, 300, 290, 250, 240, 180, 140, 130, 120, 110, 100, 80, 60, 50, 40};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6044;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int Tx = 255;
    int Ty = 652;
    int Mx = 794;
    int My = 783;
    int R = 1045;
    vector<int> bad = {10, 30, 40, 50, 70, 80, 90, 100, 110, 150, 170, 180, 190, 200, 210, 220, 230, 240, 250, 280, 300, 310, 320, 360, 410, 430, 480, 490, 500, 530, 550, 600, 620, 680, 690, 710, 740, 750, 780};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int Tx = 747;
    int Ty = 495;
    int Mx = 800;
    int My = 800;
    int R = 1014;
    vector<int> bad = {230, 170, 240, 650, 480, 150, 610, 350, 430, 220, 770, 60, 630, 160, 210, 100, 20, 420, 190, 760, 750, 390, 130, 700, 470, 260, 560, 800, 790, 490, 280, 70, 30, 330, 780, 510, 580, 410, 270, 730, 710, 740};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 8459;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int Tx = 505;
    int Ty = 236;
    int Mx = 782;
    int My = 797;
    int R = 1058;
    vector<int> bad = {620, 30, 470, 590, 680, 380, 640, 350, 20, 570, 500, 140, 160, 750, 660, 670, 630, 610, 120, 770, 560, 330, 400, 210, 290, 130, 40, 280, 780, 420, 430, 460, 440, 550, 270};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int Tx = 666;
    int Ty = 115;
    int Mx = 800;
    int My = 800;
    int R = 3;
    vector<int> bad = {800, 770, 760, 720, 710, 700, 690, 680, 670, 660, 650, 640, 620, 610, 560, 550, 530, 490, 450, 430, 420, 390, 380, 360, 340, 330, 320, 290, 280, 270, 250, 230, 200, 180, 170, 160, 150, 140, 130, 110, 100, 90, 80, 70, 60, 40, 20};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3319;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int Tx = 15;
    int Ty = 558;
    int Mx = 799;
    int My = 791;
    int R = 4;
    vector<int> bad = {790, 770, 760, 750, 740, 730, 720, 700, 690, 680, 650, 640, 620, 590, 580, 570, 560, 540, 530, 520, 510, 500, 490, 460, 440, 430, 410, 390, 370, 360, 350, 310, 290, 280, 250, 220, 210, 190, 170, 160, 150, 140, 120, 100, 90, 70, 50, 40, 20};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 9255;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int Tx = 665;
    int Ty = 683;
    int Mx = 800;
    int My = 800;
    int R = 2;
    vector<int> bad = {10, 20, 30, 50, 60, 80, 110, 140, 150, 160, 170, 180, 210, 220, 240, 250, 260, 280, 310, 340, 350, 380, 390, 410, 420, 430, 440, 470, 480, 490, 500, 510, 530, 540, 580, 590, 630, 640, 670, 680, 730, 740, 760, 770, 780, 790, 800};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5151;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int Tx = 786;
    int Ty = 327;
    int Mx = 795;
    int My = 795;
    int R = 10;
    vector<int> bad = {770, 610, 400, 510, 660, 480, 290, 790, 350, 440, 740, 600, 300, 80, 690, 210, 100, 340, 420, 650, 720, 270, 60, 190, 780, 700, 540, 380, 390, 170, 730, 360, 680, 320, 240, 310, 130, 410, 550, 570, 140, 220, 20, 260, 120, 630, 30};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 901;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int Tx = 1;
    int Ty = 560;
    int Mx = 800;
    int My = 794;
    int R = 48;
    vector<int> bad = {790, 780, 770, 750, 740, 700, 680, 620, 610, 600, 590, 580, 570, 560, 550, 540, 520, 510, 500, 490, 480, 460, 450, 440, 430, 420, 410, 400, 390, 380, 370, 350, 300, 280, 270, 250, 220, 210, 190, 180, 170, 160, 150, 130, 120, 110, 100, 80, 70, 60};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 3373;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int Tx = 286;
    int Ty = 536;
    int Mx = 800;
    int My = 800;
    int R = 83;
    vector<int> bad = {800, 780, 770, 760, 740, 720, 710, 700, 680, 670, 660, 640, 590, 540, 530, 510, 480, 470, 450, 430, 420, 410, 390, 380, 370, 360, 350, 320, 300, 290, 280, 270, 250, 230, 220, 210, 200, 170, 140, 130, 110, 80, 70, 30, 20, 10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5036;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int Tx = 222;
    int Ty = 403;
    int Mx = 781;
    int My = 792;
    int R = 667;
    vector<int> bad = {10, 30, 40, 60, 70, 80, 90, 110, 140, 180, 190, 200, 210, 220, 240, 270, 330, 340, 350, 380, 390, 410, 420, 430, 450, 460, 470, 490, 510, 520, 530, 540, 560, 570, 590, 600, 620, 650, 660, 690, 710, 730, 740, 750, 780};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int Tx = 724;
    int Ty = 345;
    int Mx = 789;
    int My = 787;
    int R = 1011;
    vector<int> bad = {260, 180, 530, 730, 360, 780, 380, 20, 120, 670, 90, 370, 70, 50, 770, 520, 290, 480, 580, 230, 200, 130, 80, 210, 40, 60, 630, 390, 400, 550, 140, 320, 650, 610, 500, 490, 430, 470, 440, 460, 220, 310, 640, 300, 30, 250, 710, 760, 150};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 5544;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int Tx = 524;
    int Ty = 14;
    int Mx = 792;
    int My = 792;
    int R = 1134;
    vector<int> bad = {700, 200, 530, 340, 160, 110, 680, 740, 590, 10, 190, 380, 460, 690, 260, 560, 40, 410, 310, 790, 90, 720, 230, 610, 300, 80, 70, 170, 100, 350, 490, 660, 400, 60, 780, 240, 640, 620, 440, 650, 430, 130, 420, 330, 480, 140, 550, 20, 710};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int Tx = 567;
    int Ty = 190;
    int Mx = 800;
    int My = 800;
    int R = 1155;
    vector<int> bad = {800, 770, 740, 730, 720, 710, 700, 690, 670, 660, 640, 610, 570, 540, 530, 510, 470, 460, 450, 440, 430, 420, 410, 390, 380, 350, 320, 310, 300, 290, 270, 260, 250, 230, 220, 210, 200, 190, 180, 170, 160, 150, 120, 110, 100, 40, 20, 10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int Tx = 258;
    int Ty = 102;
    int Mx = 25;
    int My = 257;
    int R = 281;
    vector<int> bad = {20, 10};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int Tx = 168;
    int Ty = 194;
    int Mx = 273;
    int My = 35;
    int R = 214;
    vector<int> bad = {10, 20};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 10006;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int Tx = 83;
    int Ty = 260;
    int Mx = 255;
    int My = 277;
    int R = 162;
    vector<int> bad = {50, 100, 200, 20, 90};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int Tx = 123;
    int Ty = 456;
    int Mx = 70;
    int My = 80;
    int R = 90;
    vector<int> bad = {30, 40, 20, 10, 50};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6723;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 70;
    int My = 80;
    int R = 90;
    vector<int> bad = {30, 40, 20, 10, 50};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 1902;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 800;
    vector<int> bad = {10, 30, 40, 50, 70};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 6576;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int Tx = 799;
    int Ty = 707;
    int Mx = 613;
    int My = 790;
    int R = 1533;
    vector<int> bad = {420, 240, 130, 530, 300, 70, 110, 510, 470, 220, 160, 80, 440, 280, 380, 140, 430, 170, 30, 290, 410, 570, 20, 540, 350, 400, 550, 190, 320, 260, 520, 580, 250, 40, 560, 370, 90, 460, 210, 200, 450, 50, 390, 340, 150, 230, 120, 180, 270, 60};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int Tx = 800;
    int Ty = 800;
    int Mx = 800;
    int My = 800;
    int R = 1600;
    vector<int> bad = {};
    FoxJumping* pObj = new FoxJumping();
    clock_t start = clock();
    int result = pObj->getCount(Tx, Ty, Mx, My, R, bad);
    clock_t end = clock();
    delete pObj;
    int expected = 2809;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692969&rd=14427&pm=11223
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <deque> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++) 
 
#define MOD 10007 
 
int C[1610][1610]; 
int dpx[1610][810]; // step, x 
int dpy[1610][810]; // step, y 
int dpz[1610][90]; 
 
class FoxJumping{ 
  public: 
 
  int getCount(int Tx, int Ty, int Mx, int My, int R, vector <int> bad){ 
    int i,j,k; 
     
    REP(i,1610) REP(j,i+1){ 
      if(j == 0 || j == i) C[i][j] = 1; 
      else C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD; 
    } 
     
    dpx[0][0] = 1; 
    REP(i,R) REP(j,Tx+1){ 
      dpx[i+1][j] = ((j == 0) ? 0 : dpx[i+1][j-1]); 
      dpx[i+1][j] = (dpx[i+1][j] + dpx[i][j]) % MOD; 
      if(j >= Mx+1) dpx[i+1][j] = (dpx[i+1][j] - dpx[i][j-Mx-1] + MOD) % MOD; 
    } 
     
    dpy[0][0] = 1; 
    REP(i,R) REP(j,Ty+1){ 
      dpy[i+1][j] = ((j == 0) ? 0 : dpy[i+1][j-1]); 
      dpy[i+1][j] = (dpy[i+1][j] + dpy[i][j]) % MOD; 
      if(j >= My+1) dpy[i+1][j] = (dpy[i+1][j] - dpy[i][j-My-1] + MOD) % MOD; 
    } 
     
    bad.push_back(0); 
    dpz[0][0] = 1; 
    REP(i,R) REP(j,81) REP(k,bad.size()){ 
      int j2 = j + bad[k] / 10; 
      if(j2 <= 80) dpz[i+1][j2] = (dpz[i+1][j2] + dpz[i][j]) % MOD; 
    } 
     
    int small = min(Tx,Ty); 
    int ans = 0; 
    REP(i,R+1) for(j=0;j<=small;j+=10){ 
      int tmp = dpz[i][j/10] * dpx[R-i][Tx-j] % MOD * dpy[R-i][Ty-j] % MOD * C[R][i] % MOD; 
      if(i%2 == 1) tmp = (MOD - tmp) % MOD; 
      ans = (ans + tmp) % MOD; 
    } 
     
    return ans; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/