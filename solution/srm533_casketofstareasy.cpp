/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11788
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

class CasketOfStarEasy {
public:
    int maxEnergy(vector<int> weight);
};

int CasketOfStarEasy::maxEnergy(vector<int> weight) {
    int ret;
    return ret;
}


int test0() {
    vector<int> weight = {1, 2, 3, 4};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> weight = {100, 2, 1, 3, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> weight = {2, 2, 7, 6, 90, 5, 9};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1818;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weight = {477, 744, 474, 777, 447, 747, 777, 474};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2937051;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weight = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weight = {213, 220, 224, 224, 197};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 138953;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weight = {784, 783, 785, 785, 784, 783, 785, 785, 783};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4308867;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weight = {526, 530, 662, 627, 472, 601, 626, 603, 634};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2689691;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weight = {422, 792, 433};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 182726;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weight = {546, 529, 545};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 297570;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weight = {481, 652, 652};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 313612;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weight = {748, 704, 728};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 544544;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weight = {864, 638, 752, 820, 721, 697, 830, 726, 447, 664};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 5037382;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> weight = {531, 342, 276, 421, 349, 279, 392, 183};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1008900;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weight = {115, 88, 90, 107};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 22655;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weight = {375, 402, 431};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 161625;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weight = {486, 555, 593, 564, 589, 576, 582, 563, 635, 502};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2749047;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weight = {271, 315, 235, 313, 359, 341};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 411506;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weight = {615, 555, 564, 636, 590, 549};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1444605;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weight = {670, 874, 622, 897, 928, 544};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2581290;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> weight = {714, 761, 694, 754, 769, 807, 727};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2891675;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weight = {175, 191, 133, 279, 134, 280};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 233889;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weight = {662, 597, 613, 622, 669};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1260448;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weight = {810, 743, 746};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 604260;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weight = {713, 518, 558, 655, 494, 703, 565, 460, 670};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3153843;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weight = {849, 869, 768, 809, 903, 859};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2983666;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weight = {334, 271, 372};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 124248;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weight = {153, 213, 297, 337, 117, 329};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 329000;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weight = {496, 474, 343, 366, 333, 362, 469, 379, 530};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1506790;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weight = {293, 801, 418, 330, 883};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1335096;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weight = {963, 893, 836, 970, 917, 909, 929, 839, 896};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 6173039;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weight = {335, 339, 580, 428};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 337680;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weight = {799, 320, 437, 941, 323, 408, 252, 507, 628};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3291889;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weight = {724, 728, 420, 446, 794, 545, 782};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2673444;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weight = {799, 800, 842, 784};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1299174;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weight = {582, 359, 398, 382, 602, 550};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1141696;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weight = {703, 860, 888, 761, 744};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1823544;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weight = {116, 134, 221, 229, 210, 108, 200, 235};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 255850;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weight = {459, 386, 283};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 129897;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weight = {695, 563, 523, 586, 659, 748, 488, 728, 564};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3213000;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weight = {531, 695, 588, 670};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 821420;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weight = {246, 621, 649, 307, 831, 430, 705, 285, 579};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3032562;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weight = {203, 341, 270, 175, 628, 416, 171, 368, 232, 509};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1551760;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weight = {492, 238, 217};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 106764;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weight = {566, 569, 598, 635, 639, 592, 617};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1856005;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weight = {661, 357, 192, 503, 330, 745, 770, 301, 702};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2906786;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> weight = {321, 256, 208, 62, 245, 168};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 250301;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> weight = {265, 267, 327};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 86655;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> weight = {630, 719, 679};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 427770;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> weight = {491, 592, 475, 442, 500};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 803164;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> weight = {432, 446, 406, 474};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 416172;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> weight = {35, 226, 218, 191, 80, 131};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 102378;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> weight = {291, 220, 135, 186, 197, 121, 114, 151, 252};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 338031;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> weight = {349, 393, 250, 476, 325, 490, 460, 199, 577, 230};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1751514;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> weight = {920, 945, 912, 915, 943, 932, 935};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4381290;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> weight = {114, 123, 119, 115, 120, 130, 130, 122};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 91314;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> weight = {340, 342, 726, 438, 645, 302, 518};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1601408;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> weight = {392, 178, 617, 119, 518, 281, 630, 401, 747, 218};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2586309;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> weight = {219, 212, 213, 290, 311, 272, 248, 313};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 474821;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> weight = {215, 261, 203, 252, 357, 430, 246, 230};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 548680;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> weight = {743, 775, 636, 741, 590, 591, 744};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2693931;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> weight = {105, 403, 293, 335};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 170180;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> weight = {512, 559, 865, 384, 619, 655};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1880250;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> weight = {719, 214, 204, 508};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 511928;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> weight = {566, 529, 385, 563, 503, 393, 529, 403};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1707911;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> weight = {410, 526, 377, 536, 280, 511, 510, 497, 252};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1665964;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> weight = {184, 712, 785, 634, 375, 799, 786};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2455047;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> weight = {634, 647, 615, 623, 642, 646};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1645981;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> weight = {619, 663, 650, 646, 672};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1298304;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> weight = {710, 834, 828, 757, 742, 829};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2593941;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> weight = {292, 242, 342, 236, 392, 442, 176, 381, 300, 357};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1087713;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> weight = {793, 872, 782, 791, 782};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1991782;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> weight = {336, 315, 321, 313};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 213024;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> weight = {817, 732, 755};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 616835;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> weight = {146, 140, 87, 363};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 103818;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> weight = {874, 872, 858};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 749892;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> weight = {237, 392, 103, 250, 473, 121, 128, 82, 319, 453};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1034885;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> weight = {826, 814, 598, 684, 532, 775, 517, 511, 666, 728};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4435579;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> weight = {283, 390, 247, 265, 163, 101};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 253057;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> weight = {779, 744, 778, 716, 715};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1720811;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> weight = {598, 618, 488, 800, 518, 798, 805, 722, 580};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3643640;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> weight = {451, 247, 211, 239, 324, 228};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 451902;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> weight = {74, 153, 405, 168, 223, 55, 146};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 222777;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> weight = {650, 648, 634, 630, 629, 642, 648, 652, 653, 634};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3338193;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> weight = {607, 610, 613};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 372091;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> weight = {100, 3, 1, 2, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10400;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> weight = {2, 3, 2, 1, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> weight = {3, 8, 21, 8, 3};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> weight = {100, 4, 2, 1, 3, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10700;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> weight = {1, 3, 5, 2, 1, 2, 5};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> weight = {1, 2, 3, 4};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> weight = {1, 2, 7, 4, 1, 2, 3};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> weight = {1, 1, 10, 90, 10, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> weight = {3, 10, 25, 10, 3};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> weight = {8, 16, 8, 4, 4};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 160;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> weight = {10, 21, 6, 9, 1, 8, 7, 3, 4, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 773;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> weight = {8, 1, 8, 64, 32, 1, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 912;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> weight = {5, 6, 7, 8, 9, 8, 7, 6, 5};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 349;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> weight = {4, 1, 5, 8, 5, 1, 4};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> weight = {999, 997, 998, 995, 996, 1, 2, 3, 4, 1000};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4993966;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> weight = {10, 2, 1, 1, 10};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 130;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> weight = {50, 1000, 50, 1, 50};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 55000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> weight = {10, 100, 3, 200, 9};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 22090;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> weight = {400, 1000, 60, 2, 60, 1000};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1463600;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> weight = {363, 28, 691, 60, 764, 927, 541, 427, 173, 737};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3592727;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> weight = {3, 5, 7, 4, 8, 3, 2, 1, 8, 3};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> weight = {1, 2, 3, 2, 1, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> weight = {1000, 1, 1000, 2, 1000, 4, 1000, 500, 2, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 5504000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> weight = {897, 802, 765, 992, 1, 521, 220, 380, 729, 969};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 5351049;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> weight = {10, 100, 10, 1, 10};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1200;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> weight = {2, 5, 3, 1, 1, 4};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> weight = {1, 25, 100, 30, 2, 3, 4, 1, 100, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 16501;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> weight = {1000, 223, 345, 460, 521, 633, 784, 385, 249, 1000};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4912000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> weight = {100, 20, 5, 1, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 12500;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> weight = {100, 5, 1, 1, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10600;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> weight = {60, 49, 80, 23, 54, 90, 12, 95, 26, 59};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 47315;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> weight = {1, 100, 800, 100, 1, 1, 800, 1, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 802401;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> weight = {7, 3, 1, 2, 7};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> weight = {1, 1, 1, 1, 1, 1, 2, 3, 2, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> weight = {80, 40, 2, 50, 88, 50};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 17040;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> weight = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> weight = {100, 200, 500, 894, 451, 984, 102, 1, 874, 874};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4169432;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> weight = {20, 25, 20, 15, 19};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1235;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> weight = {9, 3, 5, 9, 10};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> weight = {50, 90, 1, 8, 1, 1, 300};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 45420;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> weight = {100, 1, 3, 100, 3, 1, 3, 1, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 31000;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> weight = {1, 1, 2, 1, 1, 1, 2, 5, 3};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> weight = {100, 2, 100, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10200;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> weight = {1, 1, 4, 8, 4, 1, 1, 8};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> weight = {477, 744, 474, 777, 447, 747, 777, 474};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2937051;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> weight = {2, 4, 7, 4, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> weight = {1, 7, 8, 6};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> weight = {3, 10, 4, 1, 1, 8};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> weight = {1, 90, 1000, 3, 1, 5, 1000, 11, 90, 2};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1194282;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> weight = {100, 3, 2, 1, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10500;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> weight = {100, 49, 1, 2, 100};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 15000;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> weight = {1, 3, 11, 4, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> weight = {1, 10, 100, 11, 1, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> weight = {100, 3, 100, 1000, 101};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 120100;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> weight = {2, 4, 3, 1, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> weight = {88, 40, 2, 50, 88, 50};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 18544;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> weight = {3, 2, 1, 8, 4, 7, 9, 3, 9, 9};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 429;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> weight = {872, 1, 437, 101, 1, 605, 721, 997, 17, 1};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2747906;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> weight = {69, 38, 29, 46, 72};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 10143;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> weight = {6, 1, 5, 9, 8};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> weight = {712, 546, 712, 364, 712, 678, 453, 999, 804, 243};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4609048;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> weight = {3, 1, 4, 10, 3};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> weight = {7, 50, 8, 1, 5};
    CasketOfStarEasy* pObj = new CasketOfStarEasy();
    clock_t start = clock();
    int result = pObj->maxEnergy(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 335;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22862114&rd=14726&pm=11788
********************************************************************************
#include<cstdio> 
#include<iostream> 
#include<algorithm> 
#include<vector> 
#include<string> 
 
using namespace std; 
 
#define rep(i,n) for(int i=0;i<int(n);i++) 
#define reps(i,n) for(int i=1;i<=int(n);i++) 
 
class CasketOfStarEasy{ 
  public: 
  int saiki(vector<int> w){ 
    if(w.size()==0)return 0; 
     
    int maxi=0; 
    for(int i=1;i<w.size()-1;i++){ 
      vector<int> h=w; 
      int sum=0; 
       
      h.erase(h.begin()+i); 
      sum = h[i-1]*h[i] + saiki(h); 
       
      maxi = max(maxi,sum); 
    } 
     
    return maxi; 
  } 
  int maxEnergy(vector<int> w){ 
    return saiki(w); 
  } 
};

********************************************************************************
*******************************************************************************/