/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10884
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

class VacationTime {
public:
    int bestSchedule(int N, int K, vector<int> workingDays);
};

int VacationTime::bestSchedule(int N, int K, vector<int> workingDays) {
    int ret;
    return ret;
}


int test0() {
    int N = 3;
    int K = 3;
    vector<int> workingDays = {2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 4;
    int K = 3;
    vector<int> workingDays = {3, 1, 2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 5;
    int K = 3;
    vector<int> workingDays = {4, 1};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 9;
    int K = 2;
    vector<int> workingDays = {7, 4, 5, 6, 2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 4;
    int K = 4;
    vector<int> workingDays = {1, 3};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 2;
    int K = 2;
    vector<int> workingDays = {1};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 5;
    int K = 1;
    vector<int> workingDays = {3};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
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
    int K = 2;
    vector<int> workingDays = {1};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 5;
    int K = 3;
    vector<int> workingDays = {4};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 3;
    int K = 1;
    vector<int> workingDays = {1, 2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 911;
    int K = 526;
    vector<int> workingDays = {185, 565, 512, 425, 274, 367, 658, 722, 645, 684, 859, 888, 823, 380, 523, 352, 95, 376, 72, 302, 457, 92, 317, 637, 431};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 551;
    int K = 293;
    vector<int> workingDays = {108, 82, 51, 322, 16, 532, 180, 140, 363, 435, 478, 504, 484, 294, 274, 224, 7, 262, 193, 411, 513, 169};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 143;
    int K = 4;
    vector<int> workingDays = {114, 40, 20, 96, 14};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 570;
    int K = 276;
    vector<int> workingDays = {374, 106, 9, 89, 125, 231, 368, 219};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 369;
    int K = 121;
    vector<int> workingDays = {265, 260, 131, 173, 95, 108, 152, 117, 248, 227, 13, 256, 186};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 987;
    int K = 160;
    vector<int> workingDays = {479, 628, 522, 168, 436, 162, 350, 181, 493, 311, 619, 783, 913, 583, 325, 983, 242, 314, 127, 870, 435, 19, 612, 534, 239, 155, 969, 79, 949, 191, 356, 484, 199, 238, 702, 556, 908, 214, 222, 917, 582, 506, 854, 858, 302, 679};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 601;
    int K = 169;
    vector<int> workingDays = {458, 393, 371, 295, 74, 461, 472, 292, 220, 109, 48};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 199;
    int K = 65;
    vector<int> workingDays = {6, 87, 117, 65, 115, 44, 149, 11, 143, 29};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 560;
    int K = 510;
    vector<int> workingDays = {117, 266, 8, 272, 89, 337, 80, 262, 305, 63, 511, 205, 533, 306, 87};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 318;
    int K = 148;
    vector<int> workingDays = {196, 180, 139, 253, 172, 276, 79, 293, 84, 47, 306, 179, 175, 32, 18, 267, 52, 76};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 558;
    int K = 409;
    vector<int> workingDays = {23, 390, 95, 25, 21, 327, 43, 36, 312, 442, 485, 80, 333, 181, 435, 225, 291, 360, 428};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 248;
    int K = 81;
    vector<int> workingDays = {10, 104, 14, 39, 118, 16, 178, 8, 206, 150, 126};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 315;
    int K = 66;
    vector<int> workingDays = {233, 81, 105, 5, 288, 182, 108, 123, 23, 287, 194, 246, 111, 88, 272};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 105;
    int K = 6;
    vector<int> workingDays = {14, 59, 10, 98, 42, 4, 28, 1, 89, 61, 37, 3, 17, 82, 58};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 368;
    int K = 344;
    vector<int> workingDays = {145, 213, 296, 18, 363, 167, 16, 202, 34, 100, 239, 175, 171, 261, 221, 219};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 720;
    int K = 622;
    vector<int> workingDays = {582, 716, 75, 421, 687, 294, 555, 13, 113, 370, 402, 127, 312, 128, 429, 136, 11, 274};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 619;
    int K = 318;
    vector<int> workingDays = {152, 578, 158, 317, 111, 84, 174, 497, 556, 286, 10, 559, 293, 541, 466, 552, 561, 229, 362, 549, 190, 442, 207};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 607;
    int K = 551;
    vector<int> workingDays = {18, 215};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 645;
    int K = 414;
    vector<int> workingDays = {237, 614, 10, 438, 42, 314, 506, 473, 315, 4, 597, 89, 234, 526, 517, 428, 206, 532, 385, 81, 424, 197, 174, 367, 611, 510, 214, 395, 512};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 813;
    int K = 339;
    vector<int> workingDays = {396, 546, 312, 343, 139, 376, 583, 472, 238, 751, 393, 723, 14, 361, 793, 144, 683, 564, 627, 9, 500, 607, 105, 154, 750, 533};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 661;
    int K = 442;
    vector<int> workingDays = {368, 370, 573, 11, 25, 290, 149};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 242;
    int K = 190;
    vector<int> workingDays = {214};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 609;
    int K = 450;
    vector<int> workingDays = {174, 525, 75, 93, 608, 12, 261, 61, 102, 340, 597, 106, 207, 222, 243, 391, 141, 77, 56, 328, 566, 400, 218, 468, 214, 487, 551, 310, 536, 535, 320, 151, 54, 371, 572, 266, 107, 410, 533, 364};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 582;
    int K = 509;
    vector<int> workingDays = {104, 517, 543, 162, 473, 243, 318, 547, 467, 314};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 383;
    int K = 76;
    vector<int> workingDays = {27, 135, 309, 344, 238, 67, 261, 148, 242, 356, 275, 100, 127, 306, 161, 382, 6};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 77;
    int K = 19;
    vector<int> workingDays = {39, 43, 64, 6, 72, 68, 3};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
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
    int N = 437;
    int K = 189;
    vector<int> workingDays = {247, 268, 106, 98, 215, 340, 230, 146, 102, 65, 127, 387, 360, 112, 66};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 285;
    int K = 153;
    vector<int> workingDays = {247, 210, 164, 113, 50, 97, 15, 144, 138, 216, 95, 184, 4, 194, 253, 23, 48, 62, 192};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 448;
    int K = 40;
    vector<int> workingDays = {124, 115, 207, 327, 215};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 735;
    int K = 400;
    vector<int> workingDays = {491, 390, 663, 555, 432, 480, 243, 470, 245, 418, 621, 78, 543, 201, 118, 402, 598, 496, 438, 716, 460, 685, 360, 26, 384, 337, 643, 713, 261, 57, 292, 97, 2, 188, 667, 361, 55, 723, 441, 155, 525, 520, 700};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 968;
    int K = 451;
    vector<int> workingDays = {264, 35, 396, 553, 296, 858, 870, 207, 797, 475, 373, 10, 411, 70, 180, 786, 133, 323, 531, 269, 776, 600, 830, 534, 81, 450, 132, 554, 123, 867, 221, 74, 179, 911, 771, 634, 488, 372, 585, 605, 300, 783, 596};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 970;
    int K = 848;
    vector<int> workingDays = {179, 538, 364};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 628;
    int K = 442;
    vector<int> workingDays = {440, 408, 479, 18, 569, 376, 583, 313, 208, 69, 72, 163, 135, 286, 192, 406};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 391;
    int K = 44;
    vector<int> workingDays = {339, 278, 180, 100, 203, 18, 85, 11, 282, 28, 213, 301, 247, 273, 101, 173, 86};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 752;
    int K = 707;
    vector<int> workingDays = {13, 7, 271, 304, 591, 742, 241, 308, 670, 84, 273, 550, 293, 609};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 441;
    int K = 246;
    vector<int> workingDays = {173, 260, 7, 203, 383, 397, 313, 380, 323, 55, 377, 128, 163};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 813;
    int K = 763;
    vector<int> workingDays = {765, 57, 175, 576, 610, 643, 621};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 647;
    int K = 259;
    vector<int> workingDays = {452, 439, 198, 36, 123, 644, 109, 167, 494, 441, 253, 193, 332, 272, 116, 271, 87, 86};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 916;
    int K = 193;
    vector<int> workingDays = {403, 556, 277, 100, 455, 905, 783, 67, 531, 861, 318, 54, 631, 130, 422, 241, 562, 846, 602, 463, 654, 179, 11, 358, 694, 233, 387, 150};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 934;
    int K = 459;
    vector<int> workingDays = {667};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 480;
    int K = 158;
    vector<int> workingDays = {33};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 960;
    int K = 63;
    vector<int> workingDays = {277, 640, 666, 837, 919, 256, 713, 559, 121, 302, 672, 23};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 901;
    int K = 149;
    vector<int> workingDays = {436, 286, 708, 141, 534, 75, 296, 375, 494, 658, 608, 339, 76, 236};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 961;
    int K = 249;
    vector<int> workingDays = {861, 834, 813, 407, 915};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 816;
    int K = 557;
    vector<int> workingDays = {125, 290, 267, 535, 538, 72, 707, 241, 399, 766};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 842;
    int K = 483;
    vector<int> workingDays = {523, 770, 398, 28, 777, 725, 257, 112, 141, 531};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 196;
    int K = 133;
    vector<int> workingDays = {187, 164, 120, 61, 153, 137, 67, 15, 75, 96, 4, 145};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 714;
    int K = 705;
    vector<int> workingDays = {49, 114, 309, 107, 123, 649, 438, 187, 507, 619, 400, 383, 659, 553, 281, 93, 220, 308, 697, 517, 257, 340, 283, 547, 30, 321, 491, 365, 620, 408, 137, 495, 392, 557, 617, 325, 353, 282, 109, 219, 183, 332, 501};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 222;
    int K = 80;
    vector<int> workingDays = {16, 70, 45, 205, 37, 184, 150, 76, 183, 5, 52, 104, 190, 88, 108, 118, 71, 195, 10, 83, 12, 120, 78, 135, 7, 147, 206, 84, 144, 48};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 697;
    int K = 416;
    vector<int> workingDays = {275, 369, 447, 362, 479, 341, 47, 582, 403, 188, 608, 10, 430, 211, 439, 472, 332, 655, 366, 325};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 360;
    int K = 8;
    vector<int> workingDays = {130, 339, 146, 127, 3, 227, 8, 179, 110, 188, 319, 224, 350, 173, 263, 288, 104, 343, 102, 9, 289, 118, 199, 222, 80, 49, 81, 308};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 734;
    int K = 349;
    vector<int> workingDays = {550, 465, 8, 109, 595, 426, 343};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 31;
    int K = 3;
    vector<int> workingDays = {7, 11, 29};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 917;
    int K = 878;
    vector<int> workingDays = {71, 458, 432, 754, 234, 687, 746, 631, 810, 248, 81, 753, 847, 240};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 938;
    int K = 216;
    vector<int> workingDays = {387, 390, 841, 147, 372, 812, 310, 809, 355, 307, 819, 761, 848, 622, 671, 505, 920, 132, 230, 391, 597, 226, 278, 820, 104, 595, 261, 514, 650, 476, 486, 917, 892, 267, 14, 492, 638, 795, 248, 96, 865, 83, 326, 610, 423};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 425;
    int K = 237;
    vector<int> workingDays = {137, 238, 23, 180, 412, 195, 39, 264, 203, 316, 12};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 259;
    int K = 153;
    vector<int> workingDays = {109, 127, 207, 122, 90, 26, 79};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 530;
    int K = 33;
    vector<int> workingDays = {447, 144, 260, 108, 352, 102, 350};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 758;
    int K = 550;
    vector<int> workingDays = {329, 526, 638, 496};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 599;
    int K = 409;
    vector<int> workingDays = {334, 336, 409};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 468;
    int K = 293;
    vector<int> workingDays = {236, 185};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 655;
    int K = 109;
    vector<int> workingDays = {51, 42, 31, 479, 268, 234, 420, 164, 203, 290, 602, 39, 302, 281, 293, 310, 269, 257};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 894;
    int K = 277;
    vector<int> workingDays = {132, 311, 476, 888, 131, 646};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 511;
    int K = 22;
    vector<int> workingDays = {139, 231, 199, 70, 270, 482, 18, 307, 256, 328, 202, 428, 303, 296, 90};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 839;
    int K = 705;
    vector<int> workingDays = {687, 346, 380};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 1000;
    int K = 436;
    vector<int> workingDays = {627, 392, 669, 468};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 1000;
    int K = 654;
    vector<int> workingDays = {130, 544, 63, 532, 188, 616, 843, 400, 423, 186, 591, 692, 771, 650};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 1000;
    int K = 409;
    vector<int> workingDays = {446, 558, 772, 796, 649, 249, 283, 233, 473, 982, 80, 799, 26, 943, 298, 296, 706, 605};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 1000;
    int K = 513;
    vector<int> workingDays = {808, 459, 792, 863, 715, 70, 336, 731};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 1000;
    int K = 315;
    vector<int> workingDays = {116, 635, 618, 441, 974, 883, 76, 168, 238, 359, 542, 344, 262, 716, 754, 133, 816, 4, 564, 157, 612, 54, 977, 47, 658, 178, 91, 142, 879};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 10;
    int K = 6;
    vector<int> workingDays = {2, 9};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 1000;
    int K = 361;
    vector<int> workingDays = {275, 551, 136, 93, 357, 685, 906, 715, 108, 991, 234, 708, 125, 62, 468, 718, 391, 409, 649, 580, 157, 174, 56, 300, 588, 758, 354, 542, 728, 533, 353, 829, 226, 430, 988, 217, 419, 489, 786, 396, 69, 250, 412, 471, 716, 949, 662, 22, 560, 548};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 1000;
    int K = 853;
    vector<int> workingDays = {194, 97, 613, 719, 133, 555, 918, 308, 550, 535, 516, 975, 349, 337, 35, 234, 163, 40, 122, 762, 148, 181, 605, 633, 954, 562, 870, 696, 524, 744, 212, 319, 645, 476, 266, 202, 657, 720, 671, 289, 128, 765, 530, 915, 463, 849, 13, 656, 499, 635};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 1000;
    int K = 932;
    vector<int> workingDays = {392, 959, 384, 233, 122, 71, 137, 547, 926, 251, 200, 361, 598, 762, 321, 919, 938, 455, 914, 205, 285, 813, 399, 254, 479, 974, 418, 312, 961, 40, 688, 983, 943, 226, 649, 773, 601, 324, 766, 356, 114, 788, 912, 836, 739, 993, 808, 850, 913, 267};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 1000;
    int K = 356;
    vector<int> workingDays = {261, 11, 397, 895, 975, 774, 378, 197, 687, 271, 500, 351, 559, 571, 521, 910, 482, 361, 734, 530, 515, 909, 174, 691, 534, 962, 603, 494, 765, 998, 633, 503, 154, 135, 879, 552, 186, 708, 290, 700, 472, 341, 717, 939, 630, 938, 219, 214, 735, 810};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 1000;
    int K = 513;
    vector<int> workingDays = {808, 459, 792, 863, 715, 70, 336, 731};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 3;
    int K = 3;
    vector<int> workingDays = {1, 2, 3};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 945;
    int K = 450;
    vector<int> workingDays = {2, 53, 88, 45, 3, 6, 89, 452, 753};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 9;
    int K = 2;
    vector<int> workingDays = {7, 4, 5, 6, 2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 1000;
    int K = 1000;
    vector<int> workingDays = {1, 3, 5, 7, 9, 78};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 1;
    int K = 1;
    vector<int> workingDays = {1};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 3;
    int K = 3;
    vector<int> workingDays = {2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 4;
    int K = 2;
    vector<int> workingDays = {2, 1};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 3;
    int K = 3;
    vector<int> workingDays = {3};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 10;
    int K = 5;
    vector<int> workingDays = {1, 2, 3, 4, 5};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 200;
    int K = 200;
    vector<int> workingDays = {1, 198};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 2;
    int K = 1;
    vector<int> workingDays = {2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 10;
    int K = 5;
    vector<int> workingDays = {10};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 3;
    int K = 1;
    vector<int> workingDays = {3, 1, 2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 3;
    int K = 1;
    vector<int> workingDays = {2, 3, 1};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 3;
    int K = 1;
    vector<int> workingDays = {1, 3};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 4;
    int K = 2;
    vector<int> workingDays = {3, 4};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 5;
    int K = 1;
    vector<int> workingDays = {5};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 2;
    int K = 2;
    vector<int> workingDays = {1, 2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 3;
    int K = 2;
    vector<int> workingDays = {2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 5;
    int K = 1;
    vector<int> workingDays = {1, 2, 3, 4, 5};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 5;
    int K = 3;
    vector<int> workingDays = {1, 2, 4};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 6;
    int K = 5;
    vector<int> workingDays = {6};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 4;
    int K = 3;
    vector<int> workingDays = {4};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 5;
    int K = 3;
    vector<int> workingDays = {1, 3, 5};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 10;
    int K = 4;
    vector<int> workingDays = {1, 2, 3, 4, 5, 10};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 2;
    int K = 2;
    vector<int> workingDays = {2};
    VacationTime* pObj = new VacationTime();
    clock_t start = clock();
    int result = pObj->bestSchedule(N, K, workingDays);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22884199&rd=14157&pm=10884
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
 
int     ans[2000]; 
 
struct VacationTime 
{ 
        int bestSchedule(int n, int K, vector <int> day) 
        { 
                memset(ans,0,sizeof(ans)); 
                for (int i=0; i<day.size(); i++) ans[day[i]]=1; 
                for (int i=1; i<=n; i++) ans[i]+=ans[i-1]; 
                int best=1000000; 
                for (int i=K; i<=n; i++) 
                        if (ans[i]-ans[i-K]<best) 
                                best=ans[i]-ans[i-K]; 
                return best; 
        } 
};

********************************************************************************
*******************************************************************************/