/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7845
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

class BalanceScale {
public:
    int takeWeights(vector<int> weight);
};

int BalanceScale::takeWeights(vector<int> weight) {
    int ret;
    return ret;
}


int test0() {
    vector<int> weight = {5, 4, 1, 8};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {2, 3, 8, 9};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {2466, 274, 2603, 3151};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {60, 105, 490, 42};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weight = {15, 25, 9};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {1111498, 2602346, 2755638, 4156756, 7699457, 3336514, 1911978, 4066665, 5664894, 5545087, 9885696, 393437, 5204278, 750925, 6404423, 7611378, 673256, 3750799, 4206612, 5119908, 8978853, 7830131, 3850616, 7265251, 2972952, 3014450, 5809484, 213703, 6405450, 7153676};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weight = {4564249, 2257818, 2697041, 5478298, 6562501, 9910706, 1129811, 6236138, 3967993, 8399173, 4000857, 3791324, 4964001, 7475406, 1033991, 2400154, 4543444, 7043394, 4625889, 3183506, 5869265, 267569, 8279793, 9588541, 1802734, 1703135, 327791, 646131, 1100963, 1720335};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weight = {8332952, 490916, 8228044, 565516, 8643578, 3766316, 3591376, 1468252, 1542020, 3630684, 7773880, 7744432, 3488132, 7199386, 2411056, 3937724, 6910590, 1718582, 4136128, 8024536, 4622842, 9255080, 5690624, 7583814, 2985372, 2311334, 1490340, 8408292, 4767078, 4212468};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weight = {9, 3, 8, 4};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weight = {7150, 11222, 2153, 1739, 8718, 8986, 2178, 5492, 7575, 2215, 4806, 9440, 7639, 10818, 12184};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weight = {3828825, 2159850, 4594590, 22, 1939392};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weight = {2470, 36465, 53295, 9699690, 285285, 494, 130, 125970, 57, 293930, 1155, 330, 14, 969, 7410, 230945, 77, 165, 57057, 741, 12597, 6630, 170170, 22610, 858, 81510, 21, 25194, 102};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weight = {1326, 34034, 21, 38, 2310, 3233230, 5005, 21318, 15, 2002, 38038, 9690, 462, 3135};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> weight = {25194, 293930, 663, 24310, 373065, 746130, 570570, 53295, 881790, 7106, 43890, 85085};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weight = {92378, 881790, 746130, 39270, 3233230, 285285, 1939938, 106590, 570570, 9699690, 114114};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weight = {2771340, 1763580, 38038, 3315, 373065, 40755, 30030, 15015, 293930, 34034, 1939938, 102102, 570570, 881790, 1385670, 125970, 58786, 46410, 9699690, 88179, 510510};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weight = {154, 330, 42, 77, 6, 165, 385, 210, 770, 60, 30, 990, 462, 1155, 660, 2310, 110};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weight = {330, 2310, 462, 35, 210};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weight = {29678, 713, 66674, 184569, 114586, 3526, 230, 195517, 344839};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weight = {9699690, 4849845, 3233230, 1939938, 1385670, 881790, 746130, 570570, 510510};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {510510, 746130, 3233230, 4849845, 570570, 1385670, 1939938, 881790, 9699690};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weight = {3233230, 1939938, 1385670, 881790, 8207430, 570570, 1531530, 9699690, 746130, 510510, 15, 4849845};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weight = {9699690, 3233230, 1939938, 881790, 8207430, 1531530, 1385670, 4849845, 570570, 746130, 510510, 66};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weight = {9699690, 3233230, 1939938, 881790, 8207430, 237405, 1531530, 1385670, 4849845, 570570};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weight = {9699690, 3233230, 1939938, 1385670, 881790, 8207430, 570570, 1531530, 4849845, 746130, 510510, 7903278};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weight = {3233230, 1939938, 1385670, 881790, 8207430, 570570, 1531530, 4849845, 9699690, 746130, 114114, 510510};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weight = {33000, 46200, 3500, 231000, 21000};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weight = {30, 60, 90, 243, 625};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {30, 2002, 14421, 1330};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weight = {30, 2002, 38019, 1330};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weight = {930, 62062, 447051, 41230};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weight = {2969555, 8414808, 2374365, 9209844, 525718, 2892013, 363941, 7109380, 9439536, 5856244, 3521586, 6398814, 4045843, 9160102, 6968866, 9653011, 6563668, 6340793, 5452672, 590175, 1314562, 9773759, 1070655, 6273786, 650387, 1013077, 629612, 6589331, 5084077, 9073574, 7344323, 8030197, 6802795, 5520508, 2396884, 9773760, 8804589, 1487994, 2146459, 2948885, 378514, 1200217, 8688719, 8859904, 4753371, 8661501, 9384359, 5856919, 3190565, 2558538};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weight = {6952824, 7172314, 354224, 8972324, 679688, 5029169, 4151803, 7990628, 7906378, 4512653, 5012886, 5063700, 4991639, 6433774, 5831030, 2937919, 2283586, 2046251, 5776871, 7570297, 7194344, 5034795, 8445418, 7491375, 529773, 199318, 8598900, 9035907, 5883054, 9337212, 5814065, 9019589, 8839836, 9010875, 2434104, 7131122, 7275806, 5014345, 6394720, 8903065, 8747303, 3235985, 2162769, 5632838, 3264815, 8532787, 4405427, 928882, 4425834, 9950331};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weight = {9669026, 2165861, 9268603, 9516797, 6687103, 3642655, 6040595, 3986815, 4264677, 1470238, 2260245, 8308949, 4528572, 7748611, 5987554, 4216905, 3131706, 8695991, 8238584, 8633860, 806395, 3825268, 3175955, 3836813, 3187350, 7561522, 7541592, 3400607, 1301285, 2771387, 8328896, 1180983, 1631231, 3505096, 4813110, 7430533, 8046998, 8588402, 1058255, 3428444, 3036065, 7541615, 1619294, 1923414, 4956826, 3799273, 2770422, 4448711, 3683370, 4707789};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weight = {510510, 746130, 3233230, 4849845, 570570, 1385670, 1939938, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weight = {510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 3993990, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 7759752, 4849845};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weight = {510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 3993990, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 7759752, 4536000};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {8, 16, 256};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weight = {510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 3993990, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 7759752, 6706245};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weight = {510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 3993990, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 7759752, 3120845};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weight = {510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 3993990, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 7759752, 440895};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weight = {510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 3993990, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 1342018, 1677261};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weight = {1096411, 510510, 746130, 3233230, 570570, 1385670, 881790, 9699690, 1021020, 3063060, 1531530, 2042040, 2552550, 5105100, 3573570, 5615610, 6636630, 8678670, 7147140, 4084080, 8168160, 2238390, 3730650, 7461300, 5222910, 6466460, 1141140, 5705700, 7987980, 7417410, 2771340, 4157010, 8314020, 5542680, 6928350, 1763580, 3527160, 7054320, 2645370, 7936110, 5290740, 4408950, 8817900, 6172530, 1492260, 1939938, 5819814, 3879876, 9394126, 8386305};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weight = {9999991, 9999973, 9999971, 9999943, 9999937, 9999931, 9999929, 9999907, 9999901, 9999889, 9999883, 9999877, 9999863, 9999823, 9999761, 9999749, 9999739, 9999713, 9999677, 9999667, 9999659, 9999653, 9999637, 9999601, 9999593, 9999533, 9999511, 9999481, 9999469, 9999463, 9999433, 9999419, 9999401, 9999397, 9999347, 9999337, 9999317, 9999299, 9999289, 9999277, 9999271, 9999233, 9999221, 9999217, 9999193, 9999167, 9999163, 9999161, 9999083, 9999071};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weight = {9502102, 9502034, 9502022, 9501994, 9501974, 9501902, 9501854, 9501838, 9501782, 9501754, 9501746, 9501722, 9501706, 9501698, 9501694, 9501682, 9501662, 9501658, 9501638, 9501626, 9501578, 9501574, 9501542, 9501458, 9501446, 9501434, 9501398, 9501358, 9501322, 9501302, 9501286, 9501278, 9501262, 9501218, 9501158, 9501122, 9501034, 9500954, 9500914, 9500878, 9500846, 9500822, 9500782, 9500774, 9500758, 9500746, 9500726, 9500626, 9500614, 9500606};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weight = {210, 420, 840, 1680, 3360, 13440, 26880, 53760, 107520, 215040, 430080, 630, 1890, 5670, 17010, 34020, 170100, 51030, 153090, 459270, 1050, 5250, 26250, 131250, 1470, 10290, 72030, 2940, 5880, 11760, 23520, 47040, 2100, 4200, 8400, 58800, 12600, 6300, 25200, 50400, 100800, 201600, 403200, 14700, 29400, 1508370, 5971938, 6819610, 9823485};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> weight = {9189180, 9129120, 9053044, 9006855, 8953560, 8817900, 8729721, 8678670, 8558550, 8406398, 8314020, 8207430, 8168160, 8083075, 7987980, 7936110, 7759752, 7657650, 7621185, 7461300, 7417410, 7147140, 7113106, 7054320, 6928350, 6846840, 6789783, 6715170, 6636630, 6466460, 6276270, 6235515, 6172530, 6126120, 5969040, 5819814, 5705700, 5615610, 5542680, 5290740, 5222910, 5173168, 5135130, 5105100, 4849845, 4594590, 4564560, 4526522, 4476780, 4408950};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {8848840, 8648640, 8508500, 8482320, 8353800, 8168160, 8108100, 7876440, 7827820, 7775460, 7567560, 7518420, 7487480, 7351344, 7147140, 7068600, 7027020, 6891885, 6806800, 6683040, 6563700, 6486480, 6466460, 6361740, 6126120, 5945940, 5847660, 5785780, 5654880, 5513508, 5445440, 5405400, 5250960, 5105100, 5012280, 4948020, 4864860, 4764760, 4594590, 4424420, 4324320, 4241160, 4176900, 4084080, 3938220, 3783780, 3743740, 3675672, 3534300, 3403400};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> weight = {8953560, 8817900, 8314020, 8207430, 7936110, 7759752, 7461300, 7417410, 7054320, 6928350, 6846840, 6715170, 6636630, 6466460, 6276270, 6172530, 6126120, 5969040, 5819814, 5705700, 5615610, 5542680, 5290740, 5222910, 5135130, 5105100, 4849845, 4594590, 4564560, 4476780, 4408950, 4157010, 4084080, 3993990, 3879876, 3730650, 3573570, 3527160, 3423420, 3233230, 3063060, 2984520, 2852850, 2771340, 2645370, 2552550, 2282280, 2238390, 2042040, 1939938};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> weight = {5, 4, 1, 8};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> weight = {30, 51, 65};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> weight = {245760, 491520, 983040, 1966080, 3932160, 7864320, 210, 420, 840, 1680, 3360, 6720, 13440, 26880, 53760, 107520, 215040, 430080, 860160, 1720320, 3440640, 980, 1960, 3920, 7840, 15680, 31360, 62720, 125440, 250880, 501760, 1003520, 2007040, 4014080, 8028160, 84, 168, 336, 672, 1344, 2688, 5376, 10752, 21504, 43008, 86016, 172032, 344064, 688128, 1376256};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> weight = {30, 105, 70, 900, 3150, 2100, 210, 2700, 9450, 6300, 1470, 8100, 24300, 48600, 12600, 18900, 60, 21000, 81000, 243000, 210000, 810000, 2430000, 1458, 7290, 72900, 729000, 7290000, 1458000, 189000, 1890000, 3780000, 126000, 2520000, 252000, 3630, 177147};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> weight = {15, 25, 9};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> weight = {4, 2, 6};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> weight = {3511, 9999999, 10000000};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> weight = {12, 45, 50, 900};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> weight = {2, 4, 6};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> weight = {7584, 9164, 5795, 2125, 5828, 3405, 7477, 5413, 9072, 3404, 4959, 4800, 443, 1732, 9534, 4076, 1966, 216, 6075, 3949, 218, 8325, 1118, 5284, 2636, 485, 1401, 3588, 1328, 7669, 1268, 2112, 2981, 1770, 4500, 2616, 6624, 863, 5602, 8374, 5074, 3889, 2409, 5524, 2446, 9007, 1504, 7537, 2918};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> weight = {1616615, 969969, 646646, 692835, 461890, 277134, 440895, 293930, 176358, 125970, 373065, 248710, 149226, 106590, 67830, 285285, 190190, 114114, 81510, 51870, 43890, 255255, 170170, 102102, 72930, 46410, 39270, 30030, 4849845, 3233230, 1939938, 1385670, 881790, 746130, 570570, 510510};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> weight = {30, 70, 105, 42, 210};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> weight = {35, 55, 247};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {999431, 999433, 999451, 999437, 999491, 999499, 999521, 999529, 999541, 999553, 999563, 999599, 999611, 999613, 999623, 999631, 999653, 999667, 999671, 999683, 999721, 999727, 999749, 999763, 999769, 999773, 999809, 999239, 999907, 999917, 999931, 234021, 230701, 999983};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> weight = {3, 6};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> weight = {5};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> weight = {30, 105, 42};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> weight = {9699690, 4849845, 3233230, 1939938, 1385670, 881790, 746130, 570570, 510510};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> weight = {36, 6};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> weight = {4};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> weight = {1, 5};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> weight = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {42, 60, 105, 490, 999, 1000};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> weight = {3, 6, 9};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
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
    vector<int> weight = {210, 770, 1155, 462, 330, 4900};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> weight = {3, 5, 11113};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> weight = {6, 10, 15, 30, 100, 101};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> weight = {30, 42, 35, 210};
    BalanceScale* pObj = new BalanceScale();
    clock_t start = clock();
    int result = pObj->takeWeights(weight);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10768&pm=7845
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
vi a; 
int n; 
int res; 
int g; 
 
int gcd(int a, int b) 
{ 
  while (a && b) 
  { 
    a %= b; 
    swap(a, b); 
  } 
  return a + b; 
} 
 
//set <pii> w; 
 
void go(int p, int gc, int q) 
{ 
//  if (w.find(pii(p, g)) != w.end()) 
//    return; 
  if (q >= res) 
    return; 
  if (gc == g) 
  { 
    res = q; 
    return; 
  } 
  if (p == n) 
    return; 
  int g2 = gcd(a[p], gc); 
  if (g2 != gc) 
    go(p + 1, g2, q + 1); 
  go(p + 1, gc, q); 
} 
 
class BalanceScale 
{ 
// Global 
 
// Functions 
public: 
  int takeWeights(vector <int> _w) 
  { 
    res = INF; 
    n = _w.size(); 
    a = _w; 
    g = 0; 
//    w.clear(); 
    for (int i = 0; i < n; ++i) 
      g = gcd(g, a[i]); 
    go(0, 0, 0); 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/