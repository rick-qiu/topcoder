/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6216
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

class CyclicGame {
public:
    double estimateBank(vector<int> cells);
};

double CyclicGame::estimateBank(vector<int> cells) {
    double ret;
    return ret;
}


int test0() {
    vector<int> cells = {-10, 1, 1, 1, 1, 1, 1, 1, 1};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3611111111111112;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cells = {-10, 7, -5, 7};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30434782608695654;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cells = {-1, -2, 2};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cells = {-40, 9, 9, 9, 9, 9, -44, 9, 9, 9, 9, 9, -40, 15, 15};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5653612433724144;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cells = {-36, 95, -77, -95, 49, -52, 42, -34, -1, 98, -20, 96, -96, 23, -52};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 12.395613307567126;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cells = {-5, 4};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
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
    vector<int> cells = {-5, -7};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cells = {-100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100, -100};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cells = {-100, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0433247837600974;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cells = {-15, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2521655637481754;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cells = {-81, 88, -31, 60, 52, -73, -92, 44, -38, -36};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cells = {49, -95, 53, -8, -92, -83, -69, -26, -50, 100, -75, 35, -30, -18};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cells = {46, -99, -89, -47};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cells = {-5, -23, -53, 27, 18, -41, -22, -13, -64};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cells = {8, -97, -82, 59, 27, -52, 52, 0, 93, -78, 76, -9};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 22.150259067358657;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cells = {-64, -19, -49, 48, 29};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cells = {-61, 28, -98, 17};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cells = {88, 53, -10, 60, 22, -47, -67, -73, -18, -57, 96, -83};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 5.34959658570511;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cells = {-46, 78, -95, -79, 88, -58, 17, -25};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cells = {-35, 74, -26, 34, 11, -100, -59, 73, -99, -89, 83, 67, -61, -47};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cells = {-34, -71, -46, 93, 23, -61, -13, 29, 88, 36, -60, -24};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 3.906523898308044;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cells = {-11, 82, -33, 66, -50, -60};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cells = {-91, -57, 46, 62, 40, 8, -36, -16};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 14.374032674118657;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cells = {-43, -71, 18, 74, -34, 80, -48, 17, -3};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 11.959996328735514;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cells = {57, -30, 26, -99, -96, 35, 52, -9, -14, -98, -15, 100, -29, 9, -57};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cells = {-43, -24, 9, 19, 20, -77, -63, 94, -79, 32, 55, -93};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cells = {-51, 34, -21, 94, -12, -64, -16, -73, -52, 36, 57};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 2.713709134938786;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cells = {-52, -66, 18, -22, -39, 17, -12, 89, -16, -84, -66, 5, 25, 3};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cells = {89, -74, -76, 92, -53, -71, 38, 91, -90, -15, -43, -50, -11, 40, 51};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cells = {-34, -20, -53, 93};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cells = {-54, 52, 98, -12, 55, 24, -81, 32, 13, -51, -85};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 36.361704523733465;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cells = {-54, 58, 43, 29, 88, 15, -8, 0, -82, -38, 36, 70, 23, -91, -95};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 46.81365755576341;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cells = {-57, -65, -67, 65, -1, 76, 15, -79, -62, 95, 59, -5, 11};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 20.680224112642982;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cells = {-73, 35, 50, -48, -28, -24, -64, 92, 76, 21, -28, -20, 8, -3};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 13.659950225581929;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cells = {-70, -15, 53, 61, 87, -15, 59, -94, 29, -99};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 54.330525479458274;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cells = {-89, -23, 46, 75, 26, 4, -42, -84, 37, 39};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 22.887126244785918;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cells = {-62, 49, 26, 71, -35, -90, 2, 78, 32, -99, -4, -20, 55, 15, -22};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 19.57580546200294;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cells = {-95, 62, 59, 20, -62, -3, -9, -80, -24, -62, 94, 98};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 27.363523316062864;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cells = {-99, 63, -11, 45, -90, 78, 0, 6, 67, -52, -38, -10, 93, -62};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 35.25588796524326;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cells = {-60, -37, 44, -9, 16, 31, 58, 67, -49, -44, 10, 7, -47};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 40.56200611441158;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cells = {-59, -6, -82, 82, 27, -18, 14, -45, 54, -26, -9, 74, -33, 8};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 12.200059040792155;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cells = {-84, 21, 65, -96, -1, 10, 60, -87, -56, 9, 39, 52, 57};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 21.862317573790843;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cells = {-63, 42, 80, 24, -53, -30, -48, 46, 1, -14};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 9.168882715830348;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cells = {-52, 33, -79, 68, 22, 28, -88, 89, -55, -62, 64, 26};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 3.9854725892269904;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cells = {-96, 70, -37, -84, -38, 79, -17, -81, 86, 59, 65, 51, -62};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 35.83831850544249;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cells = {-58, 66, -15, 1, -65, -92, 22, -31, 37, -68, 88, 37, 77};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 18.39295674382962;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cells = {-84, 81, 38, -33, -74, -61, -29, 81, -1, 82, -18, 2, 2};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8332816868747157;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cells = {-99, -36, -92, -73, 90, -16, -63, 60, 45, -15, 81, 63, 51};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 16.550360592941978;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cells = {-99, 42, -28, -79, -88, 86, -52, -17, 32, 84, 41, 64};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 9.183214265624672;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cells = {-64, 71, 19, 80, 27, -41, 24, -50, -78, -94, 58, 75, -14, -4, -10};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 50.06273534946682;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cells = {-79, -77, -55, -74, -81, -27, 31, 99, 61, 31, 73, 97};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 24.164974093263456;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cells = {-41, 83, -28, -74, 61, -44, 27, -94, -88, 10, 92, -78, 70, 100};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 19.247375915077313;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cells = {-90, 32, 76, 19, -6, 27, -97, -71, 58, 76, -24, -66, 89, -26};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 16.727757888712816;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cells = {-62, -71, 42, -6, 96, -9, -83, 95, 49, -82, -36, -54, 34, 60, 24};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 12.758983691035573;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cells = {-94, -79, 62, 26, -54, 1, 69, -60, -37, 46, 41, -79, 66, 88, 2};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 26.37292811043223;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cells = {-23, -29, 36, 72, -24, -52, 3, 73, -63, -6, 10};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 8.647064138262543;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cells = {-60, -92, 55, -11, 80, -21, 1, 60, -62, 42, 21, -16};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 29.061139896374023;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cells = {-36, -24, -35, 11, 55, -91, -93, 1, 93, 60, 61, 66, -72};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6801642419722491;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cells = {-40, 38, 82, -73, 14, -80, 31, -89, 24, 91};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 18.88184267546326;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cells = {-38, -64, -84, 49, 33, -11, -9, 89, 78, 93, -43, -48, -47};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 50.33916341504108;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cells = {-81, 52, 31, -58, -64, -69, 88, -13, 49, -69, 43, 45, 59, -16};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 28.25454289799432;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cells = {-52, 4, -75, -13, -82, 4, 77, 20, -61, -3, 66, 80, 10, -40, 62};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 23.45623028234846;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cells = {-58, -58, -65, 19, 95, -17, 24, 60, -31, 27};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 19.840207413017442;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cells = {-38, -54, 56, 21, -49, 70, 17, 93, -87, 22, -55};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 27.544348069083537;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cells = {-22, 83, -85, -17, 49, -47, 1, -1, -25, 37, 34, -28, 18};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 9.001951920663585;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cells = {-83, -18, 58, -97, 10, 74, 63, 68, -98, -25, -19, -32, -27, 84, 38};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 33.760521565138646;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cells = {-35, 35, 83, -87, 51, 53, 7, 22, 38, -1, -94, -77};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 41.2625302356978;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cells = {-22, -53, -71, 75, -46, -16, -80, 90, -100, 97, 73, 49};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cells = {-64, 99, -100, -82, -21, -9, 24, 86, -34, 99};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 14.227351800098468;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cells = {-54, 45, 27, -56, -16, -27, 45, -84, 88, 47, -16, 53, -55};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 21.111042247290023;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cells = {-37, 98, 70, 43, -30, 1, 18, 19, 32, -98, -38, -5, -41, -100, -79};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 39.38425925925926;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cells = {-55, -80, -50, -12, -55, -94, -28, 79, -96, -39, -77, -66, -41, 5, 15};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cells = {79, -54, 84, 29, 83, 23, -76, -79, -80, -68, -27, -41, -91, 6, 94};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 16.620864235469163;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cells = {-58, -75, -19, -43, 32, -46, -38, -79, 81, -59, 33, 100, 25, -75, -45};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cells = {52, 77, -92, -34, -55, 41, -66, 80, -6, -4, -51, -64, -92, -95, 16};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cells = {-86, 72, 1, -67, -95, -50, -66, -73, -62, 92, -53, 16, -7, -59, 26};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cells = {-97, -94, 21, -95, -96, -87, 17, 28, -5, 5, 29, -93, 58, 7, 18};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cells = {83, -16, -69, 84, 45, -56, 67, -10, -94, 9, -67, 38, -30, -69, -95};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 12.027777777777779;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cells = {-20, 75, -20, -19, -4, -90, 78, -2, -22, 93, -63, -37, 37, 31, -80};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 8.589110400683916;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cells = {-75, -35, -76, 22, -53, -29, -91, 1, 20, -43, -94, 74, 68, -2, 13};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cells = {-33, -37, -53, -79, 94, -71, -10, -78, -95, 78, -26, 83, 46, -16, -54};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cells = {42, 11, -13, -32, -11, -69, 20, -41, -46, -9, -25, -44, -95, -11, -32};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cells = {-11, 28, -90, -5, -17, 43, 55, 88, -42, -71, 57, -79, -25, -39, 57};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 16.907994737395843;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cells = {73, 28, 43, -82, -22, -77, -31, -89, -14, 59, -26, 13, -87, -33, 21};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cells = {-23, -9, 45, -72, 79, 45, 42, -1, 93, -8, -69, -38, -98, -95, 85};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 49.49347256839649;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cells = {-42, -98, -88, 10, -84, -11, -93, -52, 68, 58, -52, -24, 77, -20, 78};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cells = {-67, 61, -63, -65, 96, 92, -18, -63, 3, 60, 57, -18, -99, -29, 1};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 31.852820778417883;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cells = {-1, 43, 38, -57, 6, -76, 89, -1, -50, 64, -68, -88, -95, -22, 78};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 8.175925925925926;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cells = {90, -93, 72, -69, -91, -97, -58, -52, 43, 9, 29, 97, 99, -92, 95};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cells = {-83, -10, -94, 8, -60, -1, 30, -22, 29, 11, -57, 4, -74, 66, -70};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cells = {-1, 26, -44, -30, -18, 40, -52, -66, -51, -99, -48, -89, 41, 82, -13};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cells = {79, -64, 39, -100, 71, 91, -7, -44, -47, -41, 47, -43, -34, 19, -73};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 7.404300353630519;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cells = {-83, 9, 87, -39, -95, 52, -83, -97, 9, 70, -67, 51, 97, -97, 91};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cells = {-42, -76, -96, 93, 53, -74, -82, 51, -40, 11, 80, 13, -70, -83, 33};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cells = {-1, -21, 3, 28, 77, -44, -90, -35, 37, -22, 65, -72, -89, 12, -6};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cells = {19, -8, -88, 12, -82, -88, -60, 44, -32, 31, -45, -78, 6, -19, 92};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cells = {11, -31, 1, -30, 34, -38, -26, -24, 16, 20, 85, -75, 5, 6, 25};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cells = {69, -34, 96, 14, 33, -79, 11, 82, -99, -52, -100, 10, -92, -85, 61};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 11.194444444444445;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cells = {-52, 14, 5, -47, -76, -34, 14, -82, 44, 0, -71, 6, -14, -96, 5};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cells = {-72, -53, 43, 38, -95, -57, 8, -97, -30, -85, -75, -80, 50, -6, 74};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cells = {0, -1, -1, -1, -1, -1, -1, -1, 20, 20, 20, 10, -99, -99, -99};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 6.694230109739369;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cells = {-36, 95, -77, -95, 49, -52, 42, -34, -1, 98, -20, 96, -96, 23, -52};
    CyclicGame* pObj = new CyclicGame();
    clock_t start = clock();
    double result = pObj->estimateBank(cells);
    clock_t end = clock();
    delete pObj;
    double expected = 12.395613307567126;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=9998&pm=6216
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
 
class CyclicGame {
public:
  int n;
  vector<int> A;
  double f[20];
  double estimateBank(vector<int> _A)
  {
    n=_A.size();
    A=_A;
    memset(f,0,sizeof(f));
    for (int T=0;T<1000;T++)
    {
      for (int i=0;i<n;i++)
      {
        double t=0;
        for (int j=1;j<=6;j++)
        {
          int k=(i+j)%n;
          t+=A[k]+f[k];
        }
        t/=6.0;
        if (t>f[i])
          f[i]=t;
      }
    }
    return f[0];
  }
};

********************************************************************************
*******************************************************************************/