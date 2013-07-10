/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9728
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

class ContiguousCache {
public:
    long minimumReads(int n, int k, vector<int> addresses);
};

long ContiguousCache::minimumReads(int n, int k, vector<int> addresses) {
    long ret;
    return ret;
}


int test0() {
    int n = 100;
    int k = 3;
    vector<int> addresses = {0, 2, 16, 13};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
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
    int k = 10;
    vector<int> addresses = {1, 10, 19, 28, 30, 37};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 1000000000;
    int k = 500000000;
    vector<int> addresses = {0, 999999999, 1, 500000000, 500000001, 987654321};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1987654320;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 275;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 46004;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
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
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 651;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 1000000000;
    int k = 1000000000;
    vector<int> addresses = {0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 1000000000;
    int k = 999999999;
    vector<int> addresses = {0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000048;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 1000000000;
    int k = 100000000;
    vector<int> addresses = {846737518, 135567346, 774537425, 772670038, 975506079, 332031636, 226757473, 221119719, 829391373, 539011146, 214711102, 947125693, 952310683, 663069199, 727778583, 460765457, 816913555, 720610255, 682165856, 44035369, 385152457, 584551798, 558515391, 762286702, 604909418, 201641426, 597435560, 338880853, 478185503, 632576974, 678752690, 893683838, 469008466, 67567402, 518457273, 824924158, 284980066, 249028694, 84088974, 799641398, 17026147, 132343832, 589254653, 778619595, 387312537, 792255432, 218794596, 746118472, 393455854, 459355544};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 3746423525;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 1000000000;
    int k = 2;
    vector<int> addresses = {539502238, 974547283, 212241408, 104396577, 27910883, 153766988, 370910869, 549152611, 460103649, 595300424, 63902829, 564495557, 650801271, 130513693, 971795910, 259912016, 116253376, 201071800, 205015641, 236747635, 413617740, 745747255, 466347665, 63998630, 502333018, 925061382, 794806955, 172009965, 137991811, 910916166, 391667211, 39700313, 441869419, 768854351, 537621911, 829837893, 55029740, 739642064, 876821669, 312594541, 236571457, 626103009, 803482092, 878272038, 30977520, 167772815, 477577364, 184513819, 184513819, 162838059};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 13;
    int k = 4;
    vector<int> addresses = {3, 4, 9, 8, 4, 3, 8, 9, 6};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 13;
    int k = 4;
    vector<int> addresses = {4, 3, 8, 9, 3, 4, 9, 8, 6};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
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
    int k = 2;
    vector<int> addresses = {0, 2};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 8;
    int k = 2;
    vector<int> addresses = {7};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 5;
    int k = 3;
    vector<int> addresses = {1, 2, 3};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 1000000000;
    int k = 500000000;
    vector<int> addresses = {0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999, 0, 999999999};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 25000000000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 10;
    int k = 3;
    vector<int> addresses = {2, 3, 1, 8, 7, 9};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 1000000000;
    int k = 500000000;
    vector<int> addresses = {0, 999999999, 1, 500000000, 500000001, 987654321};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1987654320;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 1000000000;
    int k = 100000000;
    vector<int> addresses = {100000000, 199999999, 10004000, 100001000, 104000000, 107000000, 100200000, 200000123, 200000120, 200000133, 900000000, 900120000, 950000000, 900330120, 870000000, 880000100, 880000100, 810000100, 1, 999999999, 1, 999999999, 1, 999999999, 1, 999999999, 1, 999999999, 1, 599999999, 599999998, 699999999, 1, 100000000, 300000000, 500000000, 400000001, 400000000, 400000002, 400010000, 0, 1, 2, 800000000, 300000000, 350000000, 290000000, 360000000, 280000000, 1234};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 2319992038;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 1000000000;
    int k = 250000000;
    vector<int> addresses = {785923848, 214968828, 216071525, 762674661, 405942601, 221266229, 90811307, 476818886, 496650084, 492578234, 28351115, 154035003, 343299087, 780940108, 996093805, 69824650, 281405883, 508099430, 702462741, 633484021, 43231270, 203784004, 959421105, 184879475, 83739605, 140162685, 486790270, 444325237, 831498005, 326745319, 559322789, 77297062, 740713284, 465966360, 662241748, 533962536, 371512663, 233517659, 752461441, 148943144, 344063777, 498294814, 194396619, 421954630, 941959394, 340083408, 156669017, 564712783, 267154874, 503447879};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 5739462683;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 1000000000;
    int k = 747474;
    vector<int> addresses = {7, 4, 5, 1, 2, 100000, 74, 74, 747474};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 747474;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 8;
    int k = 6;
    vector<int> addresses = {4};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 1000000000;
    int k = 400000000;
    vector<int> addresses = {0, 999999999, 1, 500000000, 50000003, 987654322};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1749999998;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 7;
    int k = 5;
    vector<int> addresses = {3};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 1000000000;
    int k = 1000000;
    vector<int> addresses = {1, 999999999, 1, 999999999};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 1000000000;
    int k = 333333333;
    vector<int> addresses = {1, 333333333, 333333334, 999999999, 1, 2, 1, 1, 333333333, 333333332, 0, 804289383, 846930886, 681692777, 714636915, 957747793, 424238335, 719885386, 649760492, 596516649, 189641421, 25202362, 350490027, 783368690, 102520059, 44897763, 967513926, 365180540, 540383426, 304089172, 303455736, 35005211, 521595368, 294702567, 726956429, 336465782, 861021530, 278722862, 233665123, 145174067, 468703135, 101513929, 801979802, 315634022, 635723058, 369133069, 125898167, 59961393, 89018456, 628175011};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 5323306528;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 1000000000;
    int k = 500000000;
    vector<int> addresses = {702196450, 43781767, 719747633, 520122086, 528724140, 777016718, 763429057, 89555339, 602575640, 579992783, 847198012, 859271014, 40821354, 350290088, 306614229, 887432189, 943208578, 688923877, 421428285, 885084437, 55969802, 85835175, 17415133, 445581665, 751642680, 716639840, 942648752, 389915222, 517125952, 151951098, 790257082, 265042266, 621515031, 646210088, 433650283, 919076723, 33630725, 773077691, 346912339, 932485990, 957573015, 715980456, 772635602, 526119558, 713161812, 647543370, 83741207, 407209604, 987430102, 26780391};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 5576502266;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 1000000000;
    int k = 12456789;
    vector<int> addresses = {10, 500000000, 400000000, 1000, 23434, 13451345, 66643, 1212, 1232, 4234, 999999999, 32452345, 2345, 56, 34565656, 234234, 23546, 11111, 8999, 2343, 10, 500000000, 400000000, 1000, 23434, 13451345, 66643, 1212, 1232, 4234, 999999999, 32452345, 2345, 56, 34565656, 234234, 23546, 11111, 8999, 2343, 3456546, 43, 54643634, 234234, 78978, 342, 5763, 245, 345734, 345};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 240652795;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 87;
    int k = 65;
    vector<int> addresses = {12, 62, 2, 4, 81, 77, 42, 72, 72, 2, 60, 16, 29, 2, 33, 16, 49, 66, 6, 21, 24, 76, 65, 73, 67, 43, 10, 4, 44, 59, 28, 72, 44, 30};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 117;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 1000000000;
    int k = 500000000;
    vector<int> addresses = {0, 999999999, 1, 500000000, 500000001, 987654321, 324325, 6235, 623, 532, 623623, 1, 1, 1, 1, 1, 1, 3, 34, 52, 62, 52, 8678, 1, 1, 34, 52378, 1, 1, 56359, 234, 5, 23, 5, 23, 64, 324, 6, 324, 6523, 324, 6, 324, 347832, 654, 324, 23, 5, 623, 4345};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 2475308641;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 3;
    int k = 3;
    vector<int> addresses = {1};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 11;
    int k = 4;
    vector<int> addresses = {10, 9, 5, 4, 1, 0};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 36;
    int k = 8;
    vector<int> addresses = {28, 2, 10, 35, 10, 6, 8, 7, 17, 24, 6, 2, 12, 2, 20, 13, 33, 3, 2, 29, 2, 33, 35, 28, 10, 9, 28, 8, 26, 31, 5, 31, 27, 35};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 152;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 1000000000;
    int k = 50;
    vector<int> addresses = {527944804, 291582194, 63967152, 136191754, 701878821, 363885003, 651734927, 363081166, 510505595, 257102581, 396072282, 749488120, 393924802, 490731330, 880593629, 103158519, 35477436, 228297880, 983098007, 677232817, 630955429, 266116770, 71618782, 827454347, 377219342, 915566406, 710936702, 116451335, 833827503, 128293936, 886221094, 963021614, 807027674, 925691959, 743263171, 134246895, 323625684, 792084510, 113852095, 487684303, 721325751, 624763054, 25692980, 381381737, 762357046, 840893771, 541658101, 588103135, 462081183, 837569124};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 2500;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 10000000;
    int k = 5053;
    vector<int> addresses = {257, 17765, 32165, 3789, 3850, 3815, 31357, 28518, 15900, 3159, 27263, 19887, 25241, 538, 31687, 28002, 1824, 3814, 22150, 2299, 8973, 6194, 10152, 16842, 6723, 23274, 16052, 22087, 27177, 29798, 17140, 4773, 10226, 30621, 17367, 12202, 13346, 25238, 10387, 5053, 18253, 2080, 17166, 10817, 15394, 16835, 2559, 17697, 15017, 32246};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 158176;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 1000000000;
    int k = 250000000;
    vector<int> addresses = {0, 249999999, 410000000, 400000000, 420000000, 600000000, 999999999, 750000000, 600000000, 250000000, 499999999, 749999998, 800000000, 0, 249999999, 400000000, 999999999, 750000000, 600000000, 250000000, 499999999, 749999998, 800000000, 0, 249999999, 400000000, 999999999, 750000000, 600000000, 250000000, 499999999, 749999998, 800000000, 0, 249999999, 400000000, 999999999, 750000000, 600000000, 250000000, 499999999, 749999998, 800000000, 0, 249999999, 400000000, 999999999, 750000000, 600000000};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 5900000008;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 826;
    int k = 630;
    vector<int> addresses = {532};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 630;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 5;
    int k = 5;
    vector<int> addresses = {2};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 1000000000;
    int k = 2000000;
    vector<int> addresses = {1999999, 1000000, 2999999};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 49999;
    int k = 1000;
    vector<int> addresses = {500, 1500, 2500, 3500, 4500, 5500, 6500, 7500, 8500, 9500, 10500, 11500, 12500, 13500, 14500, 15500, 16500, 17500, 18500, 19500, 20500, 21500, 22500, 23500, 24500, 25500, 26500, 27500, 28500, 29500, 30500, 31500, 32500, 33500, 34500, 35500, 36500, 37500, 38500, 39500, 40500, 41500, 42500, 43500, 44500, 45500, 46500, 47500, 48500, 49500};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 25025;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 50;
    int k = 3;
    vector<int> addresses = {20, 18, 16, 12, 11};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 20;
    int k = 10;
    vector<int> addresses = {0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19, 0, 19};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 500;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 18919111;
    int k = 91912;
    vector<int> addresses = {0, 392382, 434, 2000, 161111, 178812, 178811, 189191, 27, 178811, 189192, 139132, 39232, 12812, 189192, 139132, 12811, 189191, 139131, 39232, 12812, 189191, 139131, 3922, 12812};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1150197;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 1000000;
    int k = 1000;
    vector<int> addresses = {1, 900, 1800, 2700, 5000, 5500, 6000, 6500, 7000, 12000, 12999, 13998, 14997, 20000, 21000, 22000, 23000, 30000, 30001, 29999, 30002, 29750, 30250};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 9003;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 1000000000;
    int k = 1001;
    vector<int> addresses = {1000, 2000, 1500};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 1001;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 1000;
    int k = 21;
    vector<int> addresses = {20, 30, 10};
    ContiguousCache* pObj = new ContiguousCache();
    clock_t start = clock();
    long result = pObj->minimumReads(n, k, addresses);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13366203&rd=12182&pm=9728
********************************************************************************
#define CLASS ContiguousCache 
#define SIGNATURE  minimumReads(int n, int k, vector <int> addresses) 
#define RETURNTYPE long long 
 
using namespace std; 
#include <iostream> 
#include <vector> 
#include <cstdio> 
#include <string> 
struct CLASS { 
  RETURNTYPE SIGNATURE; 
}; 
#define pb push_back 
#define cs c_str() 
#define sz size() 
#define LET(x,a) typeof(a) x(a) 
#define FOR(i,a,b) for(LET(i,a);i!=(b);++i) 
#define REP(i,n) FOR(i,0,n) 
#define EACH(i,v) FOR(i,(v).begin(),(v).end()) 
#define INF (int(1e9) + 10) 
#define dbg(x) cout << #x << " " << x << "\t"<< flush; 
#define dbge(x) cout << #x << " " << x << "\n"<< flush; 
typedef long long LL; 
 
vector<int> S, A; int K; 
LL dp[128][128]; 
const LL LINF = (LL)1e18; 
LL go (int base, int index) { 
  if (index == A.sz) return 0; 
  LL &res = dp[base][index]; 
  if (res == -1) { 
    res = LINF; 
    REP(nb, S.sz) { 
      if (A[index] >= S[nb] && A[index] <= S[nb] + K - 1) { 
        LL min = S[nb], max = S[nb] + K - 1; 
        min >?= S[base]; max <?= S[base] + K-1; 
        LL cur = K - (max-min+1); 
        cur  <?= K; 
        cur += go(nb, index+1); 
        res <?= cur; 
      } 
    } 
    assert (res != LINF); 
  } 
  return res; 
} 
 
RETURNTYPE CLASS::SIGNATURE { 
  A = addresses; 
  ::K = k; 
  EACH(it, A) S.pb(*it), S.pb(*it-k+1); 
  S.pb (-INF); 
  sort(S.begin(), S.end()); 
  memset(dp,-1,sizeof(dp)); 
  return go (0,0); 
}

********************************************************************************
*******************************************************************************/