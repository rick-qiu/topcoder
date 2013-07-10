/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10563
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

class CutSticks {
public:
    double maxKth(vector<int> sticks, int C, int K);
};

double CutSticks::maxKth(vector<int> sticks, int C, int K) {
    double ret;
    return ret;
}


int test0() {
    vector<int> sticks = {5, 8};
    int C = 1;
    int K = 1;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sticks = {5, 8};
    int C = 1;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sticks = {5, 8};
    int C = 1;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sticks = {1000000000, 1000000000, 1};
    int C = 2;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sticks = {159, 159, 159, 198, 162, 159, 161, 159, 159, 159, 159, 161, 160, 189, 160, 159, 160, 159, 159, 159, 160, 161, 159, 162, 160, 159, 160, 165, 160, 191, 160, 159, 160, 159};
    int C = 351;
    int K = 11;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 160.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sticks = {13, 7, 35, 16, 9, 32, 7, 8, 26};
    int C = 20293;
    int K = 1;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 35.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sticks = {8735, 8733, 8733, 8790, 8753, 8732, 8756, 8733, 8732, 8732, 8735, 8735, 8735, 8745, 8817, 8805, 8944, 8737, 8743, 8732, 8734, 8732, 8732};
    int C = 442;
    int K = 153;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1247.5714285714284;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sticks = {1668, 1631, 1638, 1630, 1629, 1629, 1644, 3130, 1629, 1634, 5974, 7189, 2020, 1667, 1629};
    int C = 1670;
    int K = 573;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 62.65384615384616;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sticks = {2, 2, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3};
    int C = 978;
    int K = 49;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sticks = {528, 530, 545, 525, 594, 568, 545, 528, 676, 787, 522, 544, 526, 525, 758, 4978, 534};
    int C = 1;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 676.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sticks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int C = 15860;
    int K = 9;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sticks = {7, 8, 7, 7, 7, 7, 13, 8, 7, 7, 7, 37, 140, 30, 8, 7, 31, 13, 38, 81, 13, 10, 36};
    int C = 331;
    int K = 56;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sticks = {549, 552, 553, 549, 551, 1327, 552, 560, 601, 576};
    int C = 26;
    int K = 8;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 552.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sticks = {428, 586, 197, 194, 194, 194, 220, 262, 328, 202, 194, 213, 205, 194, 211, 194, 364, 197, 197, 194, 264, 313, 200, 195, 251, 195, 295, 194, 194, 1977, 194, 199, 205, 194, 202};
    int C = 372;
    int K = 1;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1977.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sticks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int C = 5;
    int K = 9;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sticks = {416, 427, 418, 418, 416};
    int C = 9;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 416.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sticks = {5, 73, 4, 2, 2, 82, 84, 140, 25, 9, 179, 29, 191, 3, 24, 2, 37, 2, 8, 5};
    int C = 1;
    int K = 1;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 191.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sticks = {19171, 357519, 18324, 18328, 18342, 18316, 18316, 18316, 18495, 18316, 18318, 24341, 577256, 18316, 22302, 18318, 73546, 18401, 18350, 18333, 18321, 18332, 18378, 18318, 18324, 18449, 18318, 18321, 18316, 18316, 18323, 18316, 18316, 18326, 18317, 18316};
    int C = 496;
    int K = 24;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 39724.33333333334;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sticks = {9666, 9659, 9666, 11342, 10814, 9669, 10997, 9685, 9674, 9667, 9658, 9665, 10220, 9667, 9672, 9691, 9660, 9671, 12311, 9666, 9777, 9790, 9658, 9665, 9660, 9659, 9661, 9836, 9658, 9778, 10779, 9740};
    int C = 6;
    int K = 19;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 9667.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sticks = {7, 135192, 15, 70};
    int C = 11;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 67596.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sticks = {74930, 74924, 74933, 109594, 74914, 76327};
    int C = 5731;
    int K = 4763;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 101.92380952380952;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sticks = {101, 81, 81, 81, 81, 89, 81, 82, 81, 81, 81, 81, 81, 81, 81, 85, 84, 81, 89, 86, 103, 86, 82, 81, 81, 84, 82, 81, 81, 81, 81, 81, 81, 82, 85, 81, 81, 99, 86, 81, 82, 83, 84, 83, 81, 99, 81};
    int C = 1706;
    int K = 1655;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.3428571428571434;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sticks = {16360, 16054, 43338, 16058, 25349, 16612, 16111, 16066, 16059, 16053, 16382, 16057, 16277, 16054, 16055, 16065, 16062, 16336, 16081, 16313, 16133, 16053, 28697, 75193, 16908, 93091, 16069, 26070, 16221, 21262, 16114, 16053, 24126, 16070, 16073, 16104, 16198, 16089, 16523, 28424, 151041, 16053, 16094, 16053};
    int C = 3;
    int K = 8;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 28697.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sticks = {6208409, 110827, 193388, 111620, 110518, 362137, 110528, 110618, 110514, 112926, 110628, 118604, 110544, 120284, 89810201, 110525, 110585, 396240, 110516, 110529, 110732, 110517, 110554, 255664, 110517, 110523, 110513, 110513, 110517, 863952, 110519, 110513, 111438, 110525};
    int C = 1644;
    int K = 52;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1832861.2448979593;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sticks = {672063992, 206245793, 643232951, 135037243, 298256420, 652257818, 690511869, 698304912, 293087669, 163959813, 184916526, 536407995, 346336903, 578224915, 156067037, 244369367, 152848497, 585038542, 246033795, 153722445, 692442879, 337817966, 422889328, 682315061, 301238692, 194922347, 150810714, 171154818, 303930876};
    int C = 521671993;
    int K = 50094175;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 217.4792607542057;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sticks = {632602733, 587532329, 658908602, 605706628, 662420125, 650866933, 614183644, 659949165, 632068831, 590276757, 629935147, 673227265, 690986522, 701824457, 599243351, 600022127, 700012887, 585238395, 701276069};
    int C = 237832847;
    int K = 209454429;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 58.13332034667762;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sticks = {502247892, 786579712, 448016946, 486694759, 598734338, 429523350, 618805595, 567991666, 815525280, 426392956, 471218296, 788529219, 662373808, 673344548, 522695697, 478535526, 575466780};
    int C = 225098798;
    int K = 168869010;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 58.34507967779551;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sticks = {628941927, 601765773, 622445483, 633688594, 622526851, 584321245, 620408518, 587739890, 594611535, 644865531, 641384136, 635576706, 613963672, 628718248, 618075639, 614318689, 631957318, 585873764, 573554249, 603870445, 585715859, 606171692, 581727050, 616906965, 615109151, 598429186, 582702778, 582015286, 622257993, 589075753, 631522921, 628871868, 611799915, 598259822};
    int C = 793814053;
    int K = 511542804;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 40.542401457906436;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sticks = {4904679, 6273170, 6812769, 6782557, 7239971, 5590441, 4427749};
    int C = 396433904;
    int K = 1455306;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 28.881371667910194;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sticks = {214187020, 218030818, 218369652, 215657917, 210317979, 212267903, 217198764, 217018354, 216252256, 210340616, 208538687, 209243760, 217586999, 209745894, 211224480, 209343290, 208927989, 215647286, 218163518, 217014802, 210756741, 211779762, 212785698, 210917154, 208601925, 215657322, 208565409, 216109237, 210339002, 214459556, 214287448, 216717725, 211228215, 211920028};
    int C = 252081258;
    int K = 127853288;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 56.69938122180508;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sticks = {516493992, 455296760, 542369769, 545163906, 485355273, 483123500, 521222449, 523474040, 435104200, 460018487, 518954947, 494586670, 453398506, 444549628, 434255703, 525036051, 529907356, 535953390, 511575627, 485927739, 533699335, 463848758, 440420596, 495046643, 440312961, 467016304, 541564860, 492636347, 442587867, 535948172, 528698943, 490556999, 486190671, 473164766};
    int C = 877156007;
    int K = 86249516;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 194.0121937659835;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sticks = {143390929, 318898992, 266622897, 238365222, 190390123, 230811619, 314177179, 105670876, 145037137, 165923677, 190448664, 146741075, 155353105, 256935984, 266137225, 253246171, 268523450, 279465868, 313745987, 141339613, 144849754, 175511177, 152245416, 85994088, 294720623, 161705459, 188664745, 297565936, 239317020, 227662286, 208607463, 275719209, 207571577, 309832216, 323931223, 208358559, 290673479, 153688272, 150866307, 169409223, 292538026, 291778754, 328031346, 185781719, 112696907, 177725277, 316552332, 294026947};
    int C = 442877594;
    int K = 302017126;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 35.28690703705193;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sticks = {330168554, 542965207, 409534252, 666241999, 482138601, 395757727, 503498806, 516557280, 373054637, 336156112, 390027236, 315486218, 492875283, 545961591, 346520957, 689301367, 513017066, 507736135, 590082267, 353096089, 673925084, 489480802, 702351950, 666884749, 317039353, 636439223, 585946763, 595744910, 550519647, 430456341, 370973068};
    int C = 374681037;
    int K = 157222753;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 97.44097143173582;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sticks = {492259002, 492574072, 492431779, 492431203, 492349696, 492495521, 492523132, 492439427, 492598615, 492290925, 492331635, 492522549, 492223609, 492487362};
    int C = 844934779;
    int K = 198450714;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 34.738894094762074;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sticks = {1000000000};
    int C = 1000000000;
    int K = 1;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sticks = {1};
    int C = 1000000000;
    int K = 1000000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000006078E-9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sticks = {76, 594, 17, 6984, 26, 57, 9, 876, 5816, 73, 969, 527, 49};
    int C = 789;
    int K = 456;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 34.92;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sticks = {89, 18, 18845, 4, 49, 1, 731, 9, 7938, 44878, 1535, 7, 2847, 5668, 320, 64, 472, 9, 510, 33963, 3951, 347, 995, 29, 9329};
    int C = 644473497;
    int K = 61529;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1548759596472307;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sticks = {1701, 7130, 16759, 25062, 25198, 21015, 22367, 15312, 22340, 275, 12392, 19289, 4032, 18709, 11073, 13799, 10122, 17755, 21959, 5675, 11965, 2422, 4277, 23075, 338, 15802, 15377, 18269, 20115, 10666, 4606, 22772, 774, 3825, 14416, 8657, 24141, 17058};
    int C = 262894;
    int K = 8308;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 61.326219512195124;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sticks = {447, 2384, 821, 235, 3614, 10, 1, 237, 731, 214, 4, 300, 114, 9, 3530, 399, 89, 3, 677, 59, 7, 6, 63, 662, 3163, 4, 20, 21, 68, 3, 5, 1, 30, 54, 1, 689, 35, 844, 37, 73, 671, 2, 63, 15, 5047, 28};
    int C = 95;
    int K = 66;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 335.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sticks = {65, 7, 816, 3, 6, 374, 658, 9302, 73, 5, 5, 6551, 720, 67727, 7, 7, 4, 63714, 354};
    int C = 30;
    int K = 26;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5309.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sticks = {163677, 212983, 116957, 78948, 61639, 133110};
    int C = 9;
    int K = 8;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 70994.33333333334;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sticks = {142472731, 37105420, 53616764, 167994519, 13090958, 44456990, 47673915, 187512693, 21323766, 207436998, 137739332, 44348819, 61915373, 171530870, 163371545, 137380890, 144927244, 114472282, 7565802, 187110317, 85136946, 84650078, 158838035, 209912338, 129851860, 45177926, 51680036, 14482475, 19794187, 98486226, 154413331, 89857142, 105266520, 49018376, 12819028, 159610654, 120559531, 50362026, 135963139, 175553520, 104802400, 47383579, 96709675, 13434782};
    int C = 85368142;
    int K = 13787;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 311874.3090909091;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sticks = {96240, 997844, 18695, 8615938, 614184, 30500, 3781436, 3, 82, 186628678, 716, 75, 20661, 109618};
    int C = 9866245;
    int K = 107;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1847808.6930693071;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> sticks = {509963490, 519424026, 182661095, 621022436, 780316997, 755081160, 728191132, 694475319, 526378498, 710034005, 783700347, 333365967, 149730767, 501459936, 803401887, 254870905, 810552852, 575059668, 836594998, 22909507, 114835010, 730505067, 289256895, 251371139, 940287194, 664357333, 763120839, 586443581, 798266871, 229915076, 697139228, 128089949, 345543953, 96594732, 272083089, 590041046, 516896170, 581608285, 523326913, 622382610, 116129426, 989436386, 364332, 595745994, 845170068};
    int C = 58610317;
    int K = 2080;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1120658789473686E7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> sticks = {224385202, 511022696, 431407797, 368632924, 247730664, 77878030, 489898168, 391534997, 16439846, 11277806, 105940208, 307595079, 125080253, 118724975, 357135829, 239001063, 468077778, 265157776, 405092247, 439414733, 62503135, 187628895, 241733739, 358747064, 390426745, 136422084, 58533058, 317848537, 383813706, 409538624, 520123468, 300777949, 147686512, 490937549, 61492248, 119728503, 78317250, 268947293, 117384410, 420876827};
    int C = 61574;
    int K = 49;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.537975395E8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> sticks = {3, 2, 1, 4, 3, 3, 2, 4, 1, 4, 4, 1, 1, 2, 5, 3, 5, 1, 3, 3, 4, 5, 2, 3, 4, 2, 3, 5, 1, 3, 5};
    int C = 6885;
    int K = 99;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> sticks = {4, 4, 1, 2, 2, 2, 2, 4, 1, 4, 4, 1, 1, 2, 4, 2, 2, 2, 1, 2, 2, 1, 2, 1, 3, 2, 3, 3, 3, 1, 3, 4, 2, 3, 4, 3, 4, 4, 3, 4, 3, 2, 3, 2, 3, 1, 3};
    int C = 2448660;
    int K = 2023;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.058823529411764705;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> sticks = {1, 5, 8, 2, 8};
    int C = 5684;
    int K = 3183;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007532956685499059;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> sticks = {9};
    int C = 86836;
    int K = 59814;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.504664459825459E-4;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> sticks = {13, 267, 150, 192, 38, 36, 181, 201, 156, 266, 54, 160, 237, 53, 96, 165, 157, 294, 113, 176, 119, 198, 180, 168, 230, 147, 64, 124, 41, 99, 235, 230, 145, 286, 33, 154};
    int C = 1000000000;
    int K = 138478453;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.94140688108057E-5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> sticks = {3, 47, 34, 3, 55, 2, 4, 1, 16, 6, 1, 7, 7, 7, 56, 50, 15, 9, 3, 21, 22, 6, 4, 8, 8, 1, 26, 28, 2, 4, 6, 9, 2, 1, 2, 47, 5, 6, 9, 63, 21};
    int C = 127333661;
    int K = 78040257;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 8.034313404792811E-6;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> sticks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int C = 1000000000;
    int K = 42757067;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.443709751098926E-7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> sticks = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int C = 1000000000;
    int K = 1000000009;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.7999998992000305E-8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> sticks = {9};
    int C = 1000000000;
    int K = 1000000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 9.000000000000737E-9;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> sticks = {3915, 181233926, 1000000000, 3330, 1000000000, 1626383, 54539166, 1000000000, 4626, 8, 1494, 37, 577, 31953, 9, 339889676, 8004677, 890327, 1000000000, 96059, 1000000000, 512, 407047037, 4, 3, 455664, 2, 783893, 73392986, 1000000000, 57194, 1000000000, 7216958, 441, 4, 1000000000, 1, 1606};
    int C = 4;
    int K = 39;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> sticks = {8, 140, 67041104, 2, 9, 8252, 39, 4729032, 1000000000, 9887, 7467, 2550, 425, 25010, 5931, 9894, 427369392, 1000000000, 720306, 3562, 6740, 909749437, 8419, 411972, 486828774, 1318150, 2544156, 311960267, 8173507, 652711160, 3562, 1201428, 7};
    int C = 1;
    int K = 34;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> sticks = {1000000000, 527, 82812, 138, 8198914, 1000000000, 1000000000, 166886, 342, 4113, 268965090, 82185966, 9400378, 271237844, 99750, 30, 3, 116588560, 607466004, 1000000000, 32905, 627570857, 31988, 4242319, 3351, 303, 7035, 934, 640929932, 97732739, 152129342, 8017, 1960, 11665994, 36952, 9, 854646630, 2625040, 1000000000, 31, 806501761, 582986145, 7729, 5, 809991};
    int C = 4;
    int K = 47;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> sticks = {1000000000, 3, 1000000000, 64, 41570, 9, 1000000000, 8, 33, 266, 14, 594751, 7588, 66760, 436320, 41926, 851555, 240360775, 3641294, 6, 73664, 799405308, 91018, 254, 50541842, 35, 7195562, 59};
    int C = 1;
    int K = 29;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> sticks = {8994339, 94, 411794, 47413068, 5, 38200158, 95417945, 8762, 2541955, 805, 6987, 322317, 406893, 733317, 1000000000, 1603, 5318372, 6248, 845652, 477, 681378882, 7, 910072, 1603660, 2984, 72283, 72390328, 70322789, 698996, 1000000000, 47975, 1000000000, 1056275, 99, 1000000000, 77251880, 61560504, 7, 1, 1000000000, 260675708, 559, 4155052, 240269, 3, 80098653, 32567};
    int C = 1000000000;
    int K = 1000000047;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> sticks = {81434, 6, 1488563, 771073782, 2228491, 4, 346087885, 9684344, 81029, 1847972, 52, 5670, 1000000000, 808571, 1000000000, 231, 88331, 6544812, 90944320, 74136, 499, 6, 422508, 1000000000, 1000000000, 1000000000, 4775, 35481535, 638101372, 75751, 10, 1000000000, 7, 959134648, 67, 347, 6115487, 1000000000, 95444, 33880, 9148530, 8077, 225570205, 99, 44, 4, 1000000000, 985, 649812};
    int C = 4;
    int K = 51;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> sticks = {1000000000, 22391849, 1000000000, 5, 810721, 9373023, 6384, 287374958, 1000000000, 337227667, 902058654, 9415430, 68952832, 4595879, 45, 37056, 3292963, 20447452, 1000000000, 28352, 457932494, 784724305, 1000000000, 237, 1000000000, 1000000000, 602, 45723, 2938, 50, 80713, 31, 76897951, 49462130, 3842, 26, 2099, 5};
    int C = 5;
    int K = 42;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> sticks = {60907935, 30, 557, 4787805, 38295057, 549286831, 7641165, 1278248, 647, 675026, 203, 35770, 61520, 682008, 740031, 87635, 61406337, 32, 230428, 536115, 60615, 1000000000, 669061481, 93492455, 37, 152, 13929, 9, 547, 188427710, 1, 2719};
    int C = 1000000000;
    int K = 1000000032;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> sticks = {44964, 1000000000, 300636440, 599776004, 39297, 1000000000, 5, 560, 6, 990, 99874, 3936476, 9245571, 1000000000, 58243439, 5241, 2703, 1699, 1000000000, 1137177, 772860, 1985200, 1000000000, 644, 2098337, 49, 46, 5901723, 4952, 1000000000, 7, 749210393, 386, 1000000000, 3, 2289, 37569, 140224, 4680694, 548963};
    int C = 2;
    int K = 42;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> sticks = {1000000000, 1000000000, 1};
    int C = 2;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> sticks = {76, 594, 17, 6984, 26, 57, 9, 876, 5816, 73, 969, 527, 49};
    int C = 789;
    int K = 456;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 34.92;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> sticks = {756123, 1231231, 1000000000, 1, 176, 132, 2308912, 543187, 12412, 999999999};
    int C = 992345311;
    int K = 992345321;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> sticks = {12345678, 957723};
    int C = 1000000000;
    int K = 1000000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013303400999508021;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> sticks = {5, 8};
    int C = 1;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> sticks = {1000000000, 1000000000, 1};
    int C = 3;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333334E8;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> sticks = {757148, 167851001, 301413357, 336971125, 659598369, 160567226, 391749388, 4890852, 35766291, 26239573, 473038165, 597007, 3615545, 326051437, 392289611, 118341523, 170427799, 37215529, 675016434, 168544291, 683447134, 950090227, 82426873, 116752252, 194041605, 706221269, 69909135, 257655784, 84970744, 21417563, 37379061, 40873981, 8670529, 80835681, 436291073, 653352031, 106923811, 374079501, 466701607, 86546365, 247776868, 480572137, 222071041, 36629217, 366496749, 549646417, 278840199, 119255907, 33557677};
    int C = 1000000000;
    int K = 1000000027;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 12.244373490330695;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> sticks = {10000, 1};
    int C = 1;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5000.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> sticks = {999999, 99999, 99876432, 9872343, 21321333, 21312321, 2322344, 6544443, 6544333};
    int C = 7893;
    int K = 704;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 238938.83253588516;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> sticks = {10, 4, 4};
    int C = 2;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> sticks = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int C = 1000000000;
    int K = 1000000047;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 48.99999583500036;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> sticks = {1};
    int C = 1111;
    int K = 1111;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 9.000900090009002E-4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> sticks = {100, 100, 1};
    int C = 3;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> sticks = {666, 666, 66, 66, 666, 666, 666, 666, 666, 666, 666, 66, 666, 666, 666, 666, 666, 666, 666};
    int C = 666666666;
    int K = 666666;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01628083213142005;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> sticks = {1000000000};
    int C = 1000000;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333334E8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> sticks = {1000000000};
    int C = 1000000000;
    int K = 500000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> sticks = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int C = 1000000000;
    int K = 1000000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> sticks = {1000000000, 1000000000, 1};
    int C = 1000000000;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333334E8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> sticks = {1};
    int C = 1000000000;
    int K = 100000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000556E-8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> sticks = {20, 1};
    int C = 1000;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> sticks = {1000000000, 1000000000, 1, 333, 23232, 2323, 2532, 234};
    int C = 2;
    int K = 5;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 23232.0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> sticks = {725617945, 354039244, 245917610, 52140239, 774153517, 58295540, 643915825, 360458914, 843003702, 265810157, 771209766, 857815433, 307387835, 669416603, 134712025, 884805927, 423962346, 69771724, 363906150, 178957511, 533362668, 528385313, 628938837, 780636761, 427277975, 598267487, 182786313, 421547184, 992666448, 417464701, 131209538, 64705604, 771790344, 117166508, 829510601, 373632734, 436981915, 905244246, 807457144, 608439252, 834511256, 441709603, 6411272, 353667047, 196711783, 919428700, 928979177, 554417042, 84068812, 689862548};
    int C = 209803763;
    int K = 2674821;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 9179.048367821179;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> sticks = {1000000000, 1};
    int C = 1000000000;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0E8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> sticks = {5, 1};
    int C = 10;
    int K = 2;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> sticks = {1};
    int C = 1000;
    int K = 100;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 0.010000000000000002;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> sticks = {9, 1, 1};
    int C = 1;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> sticks = {1};
    int C = 1000000000;
    int K = 1000000000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000006078E-9;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> sticks = {1, 1, 1, 1000000000};
    int C = 2;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 3.333333333333334E8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> sticks = {10, 10};
    int C = 1;
    int K = 1;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> sticks = {1000000000, 999999999};
    int C = 2;
    int K = 3;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0E8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> sticks = {513022019, 674849833, 885808907, 149415576, 79637949, 564425687, 106515274, 756240490, 23638555, 822705644, 859334360, 857565758, 304229475, 709484387, 665434174, 231165488, 236894955, 681336685, 708102424, 547573006, 965429614, 829886211, 620024471, 456926498, 649940286, 224250023, 607157213, 85961552, 177817310, 190036559, 140290145, 807903339, 215782534, 94324157, 540994540, 38818470, 206487473, 850179612, 834914928, 747074719, 170164076, 740662178, 305316996, 270621694, 84027923, 763561070, 11607333, 208278513, 568198237, 10104177};
    int C = 1000000;
    int K = 500000;
    CutSticks* pObj = new CutSticks();
    clock_t start = clock();
    double result = pObj->maxKth(sticks, C, K);
    clock_t end = clock();
    delete pObj;
    double expected = 45585.74897814111;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22836827&rd=13909&pm=10563
********************************************************************************
// "CutSticks.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
#define pi 3.1415926535897932384626433832795 
#define sqr(x) ((x)*(x)) 
 
inline int Count(double Len,vector<int> a,int m) 
{ 
  int Ret=0; 
  for (int i=0;i<a.size();i++) 
  if (a[i]>=Len) { 
    int k=int(a[i]/Len)-1; 
    if (k>m) k=m; 
    m-=k;Ret+=k+1; 
  } 
  return Ret; 
} 
 
class CutSticks 
{ 
  public: 
  double maxKth(vector <int> a, int C, int K) 
  { 
    double Left=0,Right=1e10; 
    for (int i=0;i<100;i++) { 
      double Mid=(Left+Right)/2.0; 
      if (Count(Mid,a,C)>=K) Left=Mid; 
        else Right=Mid; 
    } 
    return Left; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/