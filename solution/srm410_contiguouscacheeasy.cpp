/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9729
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

class ContiguousCacheEasy {
public:
    int bytesRead(int n, int k, vector<int> addresses);
};

int ContiguousCacheEasy::bytesRead(int n, int k, vector<int> addresses) {
    int ret;
    return ret;
}


int test0() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {6, 0, 3, 20, 22, 16};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
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
    int k = 1;
    vector<int> addresses = {0, 4, 6, 6, 4, 10};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
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
    int n = 1000;
    int k = 999;
    vector<int> addresses = {0, 4, 123, 987, 999, 500, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 1;
    int k = 1;
    vector<int> addresses = {0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
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
    int n = 1;
    int k = 1;
    vector<int> addresses = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1000;
    int k = 11;
    vector<int> addresses = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240, 250, 260, 270, 280, 290, 300, 310, 320, 330, 340, 350, 360, 370, 380, 390, 400, 410, 420, 430, 440, 450, 460, 470, 480, 490};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 49500;
    int k = 11000;
    vector<int> addresses = {49000, 48000, 47000, 46000, 45000, 44000, 43000, 42000, 41000, 40000, 39000, 38000, 37000, 36000, 35000, 34000, 33000, 32000, 31000, 30000, 29000, 28000, 27000, 26000, 25000, 24000, 23000, 22000, 21000, 20000, 19000, 18000, 17000, 16000, 15000, 14000, 13000, 12000, 11000, 10000, 9000, 8000, 7000, 6000, 5000, 4000, 3000, 2000, 1000, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 49001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {0, 50, 49, 51, 48, 52};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {50, 49, 51, 48, 52, 47, 53, 46, 54, 50};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 100;
    int k = 30;
    vector<int> addresses = {69, 6, 52, 66, 62, 4, 50, 85, 93, 95, 50, 6, 38, 76, 82, 40, 70, 93, 64, 46, 23, 8, 4, 33, 60, 71, 25, 82, 13, 23, 22, 33, 52, 64, 35, 34, 35, 77, 67, 16, 90, 9, 70, 70, 43, 77, 67, 62, 9, 88};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 697;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 1000000;
    int k = 1000000;
    vector<int> addresses = {0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
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
    int n = 1000000;
    int k = 999999;
    vector<int> addresses = {0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1000000;
    int k = 1000000;
    vector<int> addresses = {383799, 925986, 163657, 28408, 791195, 29140, 447177, 314587, 411663, 103551, 292867, 377407, 377552, 283178, 859676, 739859, 65480, 994363, 138151, 168331, 553143, 17689, 68268, 653532, 914528, 375948, 961282, 578845, 426531, 87887, 288894, 264243, 892633, 627858, 411195, 352783, 555065, 210579, 81659, 192418, 17515, 419418, 27351, 326499, 365849, 873288, 693378, 950806, 212467, 504101};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1000000;
    int k = 2;
    vector<int> addresses = {568771, 507071, 316597, 155137, 101950, 350795, 296515, 854584, 482457, 455764, 878315, 902931, 792325, 486367, 134272, 413609, 417582, 393545, 129785, 209544, 921560, 625576, 24124, 691280, 795675, 422784, 576752, 962861, 785674, 360833, 747520, 528572, 624002, 107742, 587221, 152582, 264723, 638819, 881730, 159209, 668040, 552939, 472946, 412195, 946898, 310232, 970521, 955817, 226281, 88157};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 1000;
    int k = 34;
    vector<int> addresses = {0, 4, 123, 987, 999, 500, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 200;
    int k = 33;
    vector<int> addresses = {0, 20, 70, 5, 1, 3, 2, 9, 15};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {6, 0, 3, 20, 22, 16};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {5};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
    int k = 45;
    vector<int> addresses = {23, 67, 98, 120, 165, 499, 0, 45, 46, 1};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 1000000;
    int k = 1;
    vector<int> addresses = {1, 33, 14, 0, 55, 666666, 999999, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {99, 98};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 20;
    int k = 7;
    vector<int> addresses = {1, 10, 19};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 1000;
    int k = 20;
    vector<int> addresses = {100, 3, 101, 2, 103, 1};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 100;
    int k = 3;
    vector<int> addresses = {10, 99, 7};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 10;
    int k = 1;
    vector<int> addresses = {0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 10;
    int k = 2;
    vector<int> addresses = {6, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 1000;
    int k = 8;
    vector<int> addresses = {1, 2, 10, 8, 20, 5, 26, 40, 12, 31, 9, 10, 0, 0, 0, 1, 1, 1, 24, 32, 24, 33, 25};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 100;
    int k = 4;
    vector<int> addresses = {0, 4, 99, 98, 3, 97, 98};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 10;
    int k = 1;
    vector<int> addresses = {1, 3, 3};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 100;
    int k = 10;
    vector<int> addresses = {6, 0, 3, 20, 22, 16, 66, 99, 77};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 100;
    int k = 10;
    vector<int> addresses = {1, 3, 7, 13, 5, 99, 55, 88, 33};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {99, 98, 2, 3, 2, 8};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 1000;
    int k = 10;
    vector<int> addresses = {90, 800, 200, 100, 29, 899, 120};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 1000;
    int k = 50;
    vector<int> addresses = {200, 149, 200};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 1000000;
    int k = 20;
    vector<int> addresses = {456, 54654, 5, 456, 1, 80, 999999, 999998, 876, 67};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 100;
    int k = 3;
    vector<int> addresses = {99, 10, 9, 8, 7, 5, 4, 3};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 10;
    int k = 1;
    vector<int> addresses = {1, 2, 1};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 100;
    int k = 5;
    vector<int> addresses = {50, 3, 5};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 5;
    int k = 3;
    vector<int> addresses = {4};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 1000000;
    int k = 499999;
    vector<int> addresses = {999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0, 999999, 0};
    ContiguousCacheEasy* pObj = new ContiguousCacheEasy();
    clock_t start = clock();
    int result = pObj->bytesRead(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    int expected = 24999950;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22713582&rd=12182&pm=9729
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
#include <queue>
#include <stdlib.h>
 
using namespace std;
 
#define REP(i,n) for(int i=0,n_=(n);i<n_;i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define FOR(i,a,b) for (int i=a,b_=b;i<=(b);i++)
#define ALL(a) a.begin(),a.end()
#define SZ(a) (int)(a).size()
#define SORT(a) sort(ALL(a))
#define INF 1073741823
#define DEB(x) cout<<#x<<":"<<x<<"\n"
#define PB(b) push_back(b)
 
class ContiguousCacheEasy {
public:
  int bytesRead(int, int, vector <int>);
};
 
int ContiguousCacheEasy::bytesRead(int n, int k, vector <int> add) {
    int r, base, x, aux;
    base = r = 0;
 
    REP(i, SZ(add))
    {
        x = add[i];
        if(base + (k - 1) >= x && base <= x)
            r = r;
        else
        {
            if(x > base)
            {
                aux = base;
                base += x - (base + (k - 1));
 
                if(abs(aux - base) > k)
                    r += k;
                else
                    r += abs(aux - base);
            }
            else if(x < base)
            {
                aux = base;
                base -= base - x;
 
                if(abs(aux - base) > k)
                    r += k;
                else
                    r += abs(aux - base);
            }
        }
    }
    return r;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/