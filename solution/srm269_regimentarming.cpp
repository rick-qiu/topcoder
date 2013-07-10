/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4831
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

class RegimentArming {
public:
    int chooseGuns(vector<int> counts, vector<int> powers, int N);
};

int RegimentArming::chooseGuns(vector<int> counts, vector<int> powers, int N) {
    int ret;
    return ret;
}


int test0() {
    vector<int> counts = {5, 37, 4};
    vector<int> powers = {7, 2, 8};
    int N = 20;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> counts = {5, 37, 4};
    vector<int> powers = {7, 4, 8};
    int N = 20;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> counts = {5, 37, 4};
    vector<int> powers = {7, 4, 8};
    int N = 46;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 215;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> counts = {761, 263, 698, 811, 201, 493, 385, 621, 626, 171};
    vector<int> powers = {204, 464, 251, 438, 241, 351, 181, 915, 473, 589};
    int N = 2515;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1264085;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> counts = {1};
    vector<int> powers = {1};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> counts = {2};
    vector<int> powers = {1};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {2};
    vector<int> powers = {1};
    int N = 2;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {1, 1};
    vector<int> powers = {1, 1};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {1, 1};
    vector<int> powers = {1, 2};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {1, 2};
    vector<int> powers = {2, 1};
    int N = 2;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> counts = {1, 2};
    vector<int> powers = {1, 2};
    int N = 2;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> counts = {1, 2};
    vector<int> powers = {2, 1};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {2, 1, 2};
    vector<int> powers = {1, 2, 1};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {2, 1, 2};
    vector<int> powers = {1, 2, 1};
    int N = 2;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
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
    vector<int> counts = {1, 2, 1, 2, 1};
    vector<int> powers = {2, 1, 2, 1, 2};
    int N = 4;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> counts = {1, 2, 1, 2, 1};
    vector<int> powers = {2, 1, 2, 1, 2};
    int N = 6;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> counts = {1000000};
    vector<int> powers = {1000};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> counts = {1000000, 1000000, 1000000};
    vector<int> powers = {1000, 1000, 1000};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> counts = {999999, 999999, 999999};
    vector<int> powers = {1000, 1000, 1000};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> counts = {999999, 999999, 999999};
    vector<int> powers = {1000, 1, 1000};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 999999001;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> counts = {499999, 999999, 499999};
    vector<int> powers = {1000, 1, 1000};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 500499001;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> counts = {601, 378, 229, 417, 461};
    vector<int> powers = {195, 243, 313, 411, 146};
    int N = 1043;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 338623;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> counts = {875, 817, 889, 601, 423};
    vector<int> powers = {413, 835, 581, 531, 451};
    int N = 1802;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1249680;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> counts = {401, 956, 61, 89, 606};
    vector<int> powers = {481, 396, 327, 261, 626};
    int N = 1056;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 541332;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> counts = {56, 303, 908, 769, 626};
    vector<int> powers = {846, 250, 458, 405, 723};
    int N = 1331;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 738123;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> counts = {871, 553, 973, 113, 1};
    vector<int> powers = {587, 981, 561, 991, 429};
    int N = 1255;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 954567;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> counts = {333, 81, 959, 751, 648};
    vector<int> powers = {801, 791, 121, 734, 345};
    int N = 1386;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 770309;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> counts = {691, 408, 300, 987, 92};
    vector<int> powers = {70, 96, 661, 990, 253};
    int N = 1239;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1143702;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> counts = {29, 29, 541, 1, 999};
    vector<int> powers = {60, 451, 913, 29, 391};
    int N = 799;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 596189;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> counts = {639, 354, 186, 733, 749};
    vector<int> powers = {75, 204, 907, 57, 826};
    int N = 1330;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 651791;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> counts = {48, 129, 168, 558, 40};
    vector<int> powers = {887, 237, 181, 341, 801};
    int N = 471;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 179011;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> counts = {673291, 71542, 755713, 418361, 910018, 967846, 386735, 941657, 749261, 247917, 759975, 962338, 242729, 693339};
    vector<int> powers = {59, 668, 661, 83, 784, 27, 238, 77, 609, 741, 333, 402, 961, 259};
    int N = 390585;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 306218640;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> counts = {857941, 299113, 163001, 922819, 75191, 861047, 135361, 684003, 491133, 74626, 71305, 710419, 782927, 79776, 180001, 645105, 627361, 201455, 967541, 703301, 623215, 185721, 652075, 143641};
    vector<int> powers = {473, 826, 617, 488, 467, 761, 149, 805, 136, 371, 351, 520, 793, 45, 575, 449, 446, 849, 541, 893, 917, 261, 148, 336};
    int N = 824761;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 751468733;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> counts = {499521, 745485, 288128, 671538, 793305, 444161, 689569, 551001, 550681, 364699, 163569, 978117, 404969, 368001, 853521, 981921, 754941, 708793, 107611, 82305, 820739, 622047, 351926, 625622, 730857, 664965};
    vector<int> powers = {876, 585, 551, 1, 297, 321, 949, 753, 311, 31, 433, 425, 68, 801, 597, 277, 451, 711, 909, 545, 927, 894, 21, 725, 1, 191};
    int N = 441328;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 418820272;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> counts = {595880, 464237, 538296, 740229, 325993, 612408, 174647, 913228, 700165, 211849, 297714};
    vector<int> powers = {859, 641, 697, 601, 650, 864, 606, 288, 435, 543, 727};
    int N = 717503;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 597432262;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> counts = {892317, 268067, 981169, 784786, 864011, 400393, 555371, 54961, 544901, 310185, 186853, 68166, 854673, 386526, 789427, 845285, 491206, 792393, 350871, 637408, 420087, 22046, 724635, 838863, 702121, 600471, 176757, 624627, 564938, 75493, 485935, 876120, 893701, 888141, 168121, 658121, 924701, 820651, 765846, 209758, 989769};
    vector<int> powers = {744, 545, 669, 781, 747, 976, 519, 735, 776, 617, 831, 437, 791, 517, 880, 430, 399, 176, 826, 266, 841, 374, 847, 52, 891, 973, 353, 343, 233, 673, 953, 291, 201, 98, 780, 376, 487, 23, 853, 963, 432};
    int N = 883608;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 836533350;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> counts = {724766, 98321, 697671, 95105, 15520, 263249, 896755, 582669, 565988, 769051, 448977, 904027, 493711, 558199, 529261, 543006, 540833, 396421, 650297, 608241, 645453, 29018, 241687};
    vector<int> powers = {331, 112, 871, 161, 969, 629, 647, 521, 478, 246, 281, 935, 305, 889, 888, 876, 220, 781, 420, 615, 171, 1, 377};
    int N = 965063;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 863881225;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> counts = {287501, 561353, 611127, 902881, 834439, 619417, 366159, 623641, 3657, 37381, 734370, 359681, 616499, 37618, 547401, 535117, 28976, 743047, 761326, 217705, 758497, 479601, 515135, 466159, 287369, 740733, 715199, 900903};
    vector<int> powers = {478, 705, 530, 491, 137, 509, 441, 292, 589, 25, 375, 743, 490, 997, 148, 286, 609, 348, 601, 1, 547, 609, 1, 257, 325, 501, 335, 336};
    int N = 131693;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 97847899;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> counts = {356973, 877446, 698251, 956540, 550536, 244161, 57977, 570473, 741617, 630093, 235749, 424689, 606719, 604181, 613063, 967146};
    vector<int> powers = {769, 342, 411, 65, 82, 658, 273, 165, 245, 501, 463, 451, 237, 221, 377, 667};
    int N = 281282;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 216305858;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> counts = {94111, 526501, 310741, 458801, 949693, 503409, 166949, 592857, 775305, 5717, 523605, 831308, 262025, 659537, 947135, 168559, 631011, 222041, 324751, 593492, 246689, 782777, 692593, 147018, 384764, 910301, 389751, 595021, 743216, 384545, 906431, 731838, 356194, 589781, 841317, 633741, 27493, 52606};
    vector<int> powers = {617, 1, 426, 76, 880, 439, 54, 753, 881, 881, 548, 373, 863, 681, 261, 849, 445, 719, 169, 915, 878, 665, 893, 947, 593, 809, 96, 206, 350, 455, 323, 63, 156, 417, 279, 511, 601, 449};
    int N = 236205;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 218870037;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> counts = {734416, 334043, 241344, 470267, 118052, 330975, 306998, 323249, 535546, 810980, 128774, 182425, 147825, 888301, 287460, 828853, 883761, 608901, 716259, 575761, 56817, 354305, 179873, 520741, 338934, 832622, 766521, 239435, 616761, 913981, 522671, 902672, 59876};
    vector<int> powers = {325, 802, 20, 809, 643, 715, 881, 339, 941, 411, 762, 268, 965, 515, 231, 281, 311, 493, 177, 695, 455, 421, 428, 31, 766, 781, 751, 420, 488, 773, 167, 681, 225};
    int N = 553929;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 511504199;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> counts = {641, 8337, 2473, 5291, 2103, 1681, 6251, 4521, 4726, 3446, 7665, 9165, 4617, 5033, 5617, 6767, 6142, 9293, 9141, 9604, 3236, 6041, 9811, 4455, 3785, 9276, 255};
    vector<int> powers = {119, 302, 311, 543, 355, 525, 839, 117, 547, 859, 461, 449, 224, 91, 101, 684, 403, 1, 469, 421, 273, 326, 617, 313, 133, 551, 761};
    int N = 102372;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 41379722;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> counts = {7089, 6779, 2994, 8666, 2841, 6251, 5391, 9964, 6211, 1441, 145, 3215, 2854, 3513, 9749, 7550, 2481, 4221, 5855, 769, 399};
    vector<int> powers = {851, 887, 691, 111, 407, 537, 377, 902, 536, 585, 329, 956, 283, 897, 974, 1, 977, 833, 866, 813, 279};
    int N = 47753;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 34597620;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> counts = {2459, 3437, 6689, 4579, 7309, 1819, 4713, 2338, 7063};
    vector<int> powers = {531, 897, 52, 449, 34, 644, 369, 146, 197};
    int N = 6522;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4421270;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> counts = {8761};
    vector<int> powers = {813};
    int N = 4194;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 3409722;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> counts = {8747, 8618, 7081, 8286, 8124, 333, 8346, 2238, 7121, 8821, 3401, 5601, 4025, 6791, 8569, 8283, 5539, 6765, 2177};
    vector<int> powers = {221, 522, 609, 194, 19, 561, 889, 427, 673, 401, 468, 791, 330, 413, 451, 473, 170, 587, 433};
    int N = 65393;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 35146037;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> counts = {1409, 3868, 6253, 3237, 3841};
    vector<int> powers = {652, 801, 169, 241, 859};
    int N = 5407;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 4038906;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> counts = {4989, 1912, 9809, 2976, 2181, 8041, 2276, 9276, 6577, 591, 9705, 3669, 1761, 104, 5986, 1999, 6601};
    vector<int> powers = {190, 145, 40, 453, 28, 711, 561, 455, 116, 169, 219, 756, 863, 561, 325, 629, 239};
    int N = 23488;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 12052077;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> counts = {8893, 6459, 649, 2197, 3961, 9635, 9361, 3741, 3407, 9013, 743, 206, 7848, 5031, 4391, 6071, 3699, 6836, 7525, 1801, 4721, 4689, 2253, 7094, 241};
    vector<int> powers = {641, 534, 537, 628, 79, 424, 727, 126, 307, 341, 291, 911, 415, 276, 821, 371, 519, 689, 561, 226, 97, 569, 449, 622, 137};
    int N = 48251;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 25150093;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> counts = {6521, 3836, 2710, 3236, 3335, 7254, 1805, 6151, 9286, 2281, 2417, 6761, 4048, 2761, 6633, 1765, 3145, 2529, 6921, 8809, 9217};
    vector<int> powers = {601, 791, 971, 451, 308, 26, 771, 976, 14, 625, 813, 898, 359, 209, 341, 886, 823, 57, 573, 230, 339};
    int N = 55319;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 29082412;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> counts = {1159, 4391, 3329, 9178, 155, 2531, 8640, 4451, 8177, 5339, 6151};
    vector<int> powers = {395, 699, 456, 293, 81, 611, 711, 917, 401, 951, 745};
    int N = 7083;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6376669;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> counts = {52037, 66801, 50325, 5291, 35911, 83693, 54049, 15979, 13344, 22273, 1219, 59537, 59097, 25089, 96078, 11745, 99935, 1881, 8179, 54386, 79353, 47743, 21271, 71030, 81537, 8019, 63972, 68583, 93565, 94641, 62461, 75331, 56457, 81648, 22609, 71420, 59185, 33529, 79148};
    vector<int> powers = {359, 953, 633, 852, 494, 751, 809, 347, 586, 925, 427, 169, 997, 871, 158, 34, 729, 581, 497, 525, 235, 659, 286, 311, 816, 795, 983, 41, 704, 177, 713, 688, 495, 261, 573, 109, 787, 849, 877};
    int N = 593073;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 375998351;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> counts = {53557, 68886, 69541, 32153, 82242, 22837, 55965, 75529, 62061, 21101, 54415};
    vector<int> powers = {815, 569, 379, 944, 799, 605, 535, 401, 38, 241, 813};
    int N = 253189;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 163878242;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> counts = {5921, 85701, 721, 81689, 25719, 94451, 93856, 12485, 52357, 45676, 75261, 90447, 82305, 38042, 6770};
    vector<int> powers = {1, 385, 793, 331, 689, 648, 441, 913, 445, 649, 769, 144, 515, 157, 831};
    int N = 649686;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 323473380;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> counts = {68077, 47353, 27334, 54417, 18865, 23841, 72426, 26894, 90551, 75931, 88706, 2601, 91579, 53741, 66205, 82043, 97535, 77272};
    vector<int> powers = {33, 601, 985, 111, 606, 166, 166, 709, 473, 609, 995, 309, 376, 841, 814, 848, 651, 577};
    int N = 744446;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 503411951;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> counts = {47549};
    vector<int> powers = {462};
    int N = 120;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 55440;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> counts = {90301, 29305, 29903, 58391, 69807, 51671, 98916, 60705, 72393, 12381, 6977};
    vector<int> powers = {573, 512, 745, 152, 345, 623, 976, 61, 573, 925, 763};
    int N = 366573;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 215350131;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> counts = {49907, 33051, 473, 77083, 5693, 961, 8691, 13917, 89096, 32370, 8528, 2321, 371, 50171, 60349, 73339, 26539, 26004, 8731, 48743, 98145, 16401};
    vector<int> powers = {155, 530, 480, 225, 691, 597, 841, 257, 287, 202, 242, 776, 471, 430, 505, 909, 838, 708, 133, 882, 201, 641};
    int N = 25853;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 23500377;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> counts = {3849, 82213, 45841, 94361, 71505, 36489, 36657, 51674, 65621, 63911, 87027, 71567, 25613, 91694, 90311, 8481, 77043, 88761, 24971, 88022, 38066, 11147, 3151, 27343, 58915, 79329, 32657, 9261, 23183, 11681, 3393, 67035, 37656, 47549, 33747, 89944, 27457, 64833, 55261, 21316, 63409};
    vector<int> powers = {811, 391, 128, 27, 609, 517, 831, 445, 579, 305, 395, 965, 870, 78, 51, 425, 96, 313, 49, 855, 835, 264, 11, 695, 144, 993, 577, 503, 833, 321, 837, 429, 451, 459, 552, 417, 439, 273, 408, 783, 216};
    int N = 57;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 56601;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> counts = {51301, 43887, 37541, 70137, 62652, 69236, 5438, 46720, 47649, 19312, 68161};
    vector<int> powers = {176, 526, 855, 859, 901, 681, 930, 849, 295, 729, 273};
    int N = 499835;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 315616396;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> counts = {96971, 21241, 9703, 88459, 24301, 44649, 41048, 53631, 94129, 5724, 11716, 56661, 52157, 51685, 64329, 50255, 70410, 62897};
    vector<int> powers = {81, 682, 679, 241, 258, 445, 251, 850, 709, 239, 695, 361, 861, 551, 149, 617, 251, 381};
    int N = 759592;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 360202009;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> counts = {48393, 49573, 88361, 31386, 95560, 35489, 17385, 12641, 91597, 80442, 6897, 66422, 51886, 60945, 15891, 76041, 72501, 66627, 8029, 54369, 64199, 3241};
    vector<int> powers = {301, 393, 475, 897, 259, 473, 490, 66, 898, 761, 931, 916, 532, 636, 695, 442, 171, 161, 113, 528, 876, 941};
    int N = 965763;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 538574358;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> counts = {85000, 1990, 50603, 59275, 44099, 85027, 67090, 30967, 65342, 32845, 41581, 48094, 9517, 12687, 56558, 2311, 6926};
    vector<int> powers = {124, 939, 524, 394, 507, 201, 47, 896, 850, 367, 581, 527, 103, 111, 933, 736, 941};
    int N = 676526;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 310201648;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> counts = {14028, 21829, 99937, 48043, 85247, 82545, 86999};
    vector<int> powers = {761, 313, 279, 641, 525, 431, 631};
    int N = 396555;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 192171661;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> counts = {75990, 90562, 37949, 40033, 54929, 17371, 34352, 89491, 48294, 92401, 77985, 92787, 79249, 34631, 48118, 47333, 65701, 19107, 40793, 45239, 97315, 67393, 35098};
    vector<int> powers = {358, 225, 801, 823, 967, 375, 177, 59, 191, 487, 558, 24, 285, 119, 591, 809, 123, 801, 1, 361, 3, 585, 647};
    int N = 983721;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 378055325;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> counts = {98836, 96521, 45113, 35397, 49277, 83273, 34885, 76356, 9465, 93833, 15541};
    vector<int> powers = {990, 276, 955, 417, 339, 382, 257, 115, 205, 289, 891};
    int N = 543734;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 254755378;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> counts = {72201, 34412, 63912, 37081, 99769, 37969, 66983, 27837, 10739, 28129, 31817, 29145, 36021, 37278, 49509, 98, 88546, 73355, 15882, 43831, 66849, 3314, 35867, 75503, 9337, 77953, 99585, 24819, 54692, 62675, 41116, 98876, 71350, 37017, 56689, 77872, 73276, 82241, 21461, 15849, 37484};
    vector<int> powers = {133, 418, 641, 999, 593, 970, 425, 649, 161, 536, 646, 929, 405, 801, 499, 355, 477, 743, 311, 489, 977, 102, 833, 65, 777, 529, 526, 762, 447, 863, 139, 9, 931, 689, 269, 341, 211, 951, 314, 465, 31};
    int N = 996761;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 599769854;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> counts = {65001, 79057, 64321, 25346, 75585, 94177, 95197, 11715, 90373, 30721, 21329};
    vector<int> powers = {657, 841, 69, 285, 160, 35, 243, 118, 25, 688, 713};
    int N = 627765;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 182899890;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> counts = {82236, 50813, 94296, 36959, 70082, 64846, 66090, 68866, 52961, 33041, 80421, 29271, 16559, 41311, 61351, 99669, 33, 98371, 89141, 28231, 96511, 40451, 8577, 57553, 51068, 71013, 53449, 58891, 81878, 71701, 84433, 20676, 66008, 2677, 48472, 5846, 91068, 26451, 51710, 21969, 52833, 91201, 14311, 70901};
    vector<int> powers = {949, 152, 109, 901, 481, 357, 901, 546, 362, 375, 335, 821, 232, 129, 65, 538, 356, 855, 676, 422, 812, 905, 185, 151, 471, 513, 937, 242, 313, 453, 431, 9, 989, 691, 93, 116, 185, 423, 997, 429, 461, 764, 388, 449};
    int N = 819955;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 480952101;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> counts = {28977, 62996, 93716, 24263, 82962, 48847, 14801, 94163, 78776, 23791, 94575, 17434, 28591, 37296, 45759, 86660, 34267, 20998, 23233, 65515, 23393, 97145, 71341, 84035, 39934, 90761, 49629, 56507, 4589, 91697, 56176, 19774, 45479, 88251, 87564, 27077, 89827, 40891, 78723, 33745, 60487, 95727, 98999, 26685, 31784, 92286};
    vector<int> powers = {481, 451, 847, 585, 551, 749, 553, 276, 757, 409, 95, 383, 545, 745, 733, 857, 297, 555, 501, 457, 737, 541, 641, 397, 489, 439, 617, 258, 829, 631, 626, 66, 71, 554, 471, 183, 583, 543, 1, 2, 681, 701, 558, 617, 491, 576};
    int N = 931719;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 521502434;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> counts = {98324, 6769, 5662, 12771, 63893, 49041, 80071, 72921, 68977, 33290, 40563, 47539, 36872, 30476, 2997, 77221, 82179, 40981, 14883, 39276, 15905, 27181, 3476, 85253, 19271, 1234, 25676, 53220, 34433, 63922, 80226, 78401, 4258, 31481, 74473, 85085, 3937, 78265, 39039, 37560, 4673, 35521, 12376, 98631, 88601, 57198, 13961};
    vector<int> powers = {705, 351, 705, 401, 967, 109, 501, 91, 903, 744, 961, 75, 43, 220, 771, 977, 385, 120, 961, 1000, 269, 280, 130, 345, 311, 109, 905, 801, 597, 325, 750, 97, 466, 450, 749, 743, 205, 201, 937, 150, 501, 269, 90, 894, 349, 982, 107};
    int N = 958076;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 531329808;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> counts = {72837, 54457, 2241, 80899, 80509, 64035, 92332, 72729, 34611, 59992, 88426, 30669, 49875, 45121, 8021, 56315, 89882, 27745, 97874, 50881, 83495, 74939, 48409, 69629, 57001, 71420, 8761, 83329, 72745, 10241, 28768, 68491, 82001, 42621, 97383, 57673, 11127, 20577, 88865, 32301, 99834, 15953, 38068, 87105, 94021, 19387, 15575, 75690, 84161, 67711};
    vector<int> powers = {477, 586, 790, 73, 481, 417, 637, 801, 593, 356, 914, 449, 305, 391, 840, 973, 671, 33, 51, 987, 137, 274, 426, 476, 235, 476, 711, 97, 803, 29, 501, 131, 193, 312, 775, 408, 522, 21, 81, 234, 445, 959, 458, 987, 760, 971, 545, 417, 301, 988};
    int N = 877491;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 495391900;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> counts = {81753, 42693, 58562, 41041, 20251, 66501, 48688, 24101, 17201, 92700, 26801, 95190, 19173, 46719, 20185, 74794, 13523, 15490, 7281, 60961, 72035, 97127, 50723, 85676, 27899, 87848, 74885, 88071, 78317, 29825, 90705, 30453, 78864, 64304, 29783, 89233, 41546, 43553, 7475, 72551, 57457, 50211, 33329, 53574, 45846, 68301, 93715, 99401, 43026, 6685};
    vector<int> powers = {216, 93, 825, 476, 655, 557, 617, 623, 463, 201, 124, 801, 637, 331, 721, 601, 453, 457, 377, 746, 593, 393, 30, 401, 781, 256, 585, 33, 721, 853, 877, 528, 145, 699, 281, 701, 901, 329, 395, 45, 817, 899, 849, 249, 493, 726, 270, 287, 71, 9};
    int N = 925960;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 540342488;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> counts = {1605, 98739, 51250, 60739, 92001, 32774, 59645, 9821, 80991, 59109, 16616, 38086, 53781, 6337, 55740, 74081, 44878, 68649, 47462, 7041, 77245, 45115, 50487, 12041, 99261, 10185, 16239, 26985, 28711, 36905, 30124, 88671, 96351, 32493, 75856, 34140, 65616, 6566, 52769, 69282, 88381, 84960, 24673, 29761, 59785, 54087, 50137, 6491, 67811, 3533};
    vector<int> powers = {673, 82, 501, 149, 549, 626, 245, 813, 981, 571, 101, 885, 463, 321, 101, 261, 257, 741, 588, 159, 826, 17, 749, 617, 729, 776, 751, 857, 22, 264, 217, 509, 377, 513, 326, 545, 568, 893, 923, 736, 226, 361, 799, 569, 921, 593, 705, 986, 857, 233};
    int N = 981967;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 555597245;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> counts = {83276, 42089, 28951, 4092, 75674, 24636, 13729, 87935, 92313, 75943, 52385, 48890, 97651, 70586, 25023, 63377, 94999, 32593, 65473, 86563, 65476, 8082, 59041, 73521, 38803, 70261, 14441, 95071, 53395, 94403, 55013, 73546, 92347, 63237, 12119, 7489, 38661, 14481, 18921, 2797, 67554, 84523, 63138, 69921, 60897, 50586, 78161, 79769, 15441, 35707};
    vector<int> powers = {527, 112, 47, 316, 31, 325, 127, 931, 351, 51, 659, 901, 841, 91, 376, 86, 664, 385, 105, 403, 503, 871, 745, 289, 607, 475, 643, 893, 625, 978, 1, 391, 551, 127, 931, 901, 937, 65, 1, 641, 441, 808, 439, 231, 320, 881, 4, 958, 39, 51};
    int N = 834302;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 487571050;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> counts = {42857, 26061, 62682, 81302, 32753, 79049, 24765, 75071, 7513, 87061, 53553, 64110, 19866, 52321, 14711, 8262, 60177, 63841, 25269, 85073, 98821, 9288, 53041, 53134, 44226, 13151, 73071, 35247, 2796, 83251, 89782, 86551, 32397, 85980, 22361, 71309, 48226, 90809, 34606, 13729, 84964, 44496, 8755, 59073, 43685, 86237, 13985, 6187, 19609, 39663};
    vector<int> powers = {423, 267, 421, 221, 817, 501, 16, 785, 701, 257, 53, 376, 35, 929, 857, 180, 879, 841, 921, 741, 267, 841, 751, 365, 761, 948, 247, 242, 351, 81, 417, 379, 41, 525, 475, 807, 99, 426, 538, 389, 211, 101, 971, 573, 172, 201, 272, 15, 87, 641};
    int N = 979172;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 542777814;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> counts = {83471, 86079, 51173, 22182, 80421, 32676, 27649, 25327, 12377, 39289, 46786, 90663, 22086, 17217, 43811, 60401, 28836, 54645, 86245, 90039, 85228, 55631, 61021, 12842, 26968, 53085, 23058, 30449, 59067, 35801, 84689, 48392, 51676, 61713, 6143, 58220, 6328, 18435, 76445, 71417, 1874, 38766, 23185, 75986, 17505, 60786, 52442, 26025, 50539, 80376};
    vector<int> powers = {371, 256, 472, 994, 809, 151, 385, 229, 51, 305, 318, 707, 521, 953, 809, 170, 167, 601, 117, 393, 405, 836, 293, 577, 917, 523, 8, 369, 21, 553, 736, 981, 881, 246, 401, 817, 141, 373, 461, 2, 465, 717, 746, 553, 176, 745, 754, 491, 667, 845};
    int N = 976288;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 574407699;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> counts = {61278, 65953, 49583, 21245, 40861, 71505, 65128, 16491, 92713, 92477, 39721, 73821, 69780, 3110, 18421, 93846, 63266, 10953, 22121, 86918, 18795, 40446, 99841, 86275, 71571, 72724, 79265, 97451, 55455, 15358, 23113, 63301, 65593, 35617, 8298, 86575, 12602, 17631, 91587, 76029, 63761, 25217, 48729, 24578, 95895, 70945, 8689, 16219, 90790, 12657};
    vector<int> powers = {643, 81, 597, 62, 701, 481, 169, 43, 789, 593, 251, 253, 848, 646, 981, 702, 491, 129, 994, 433, 949, 858, 653, 65, 493, 441, 31, 559, 551, 33, 926, 437, 5, 772, 465, 384, 890, 121, 885, 265, 681, 977, 670, 81, 451, 449, 927, 233, 937, 567};
    int N = 948288;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 542772487;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> counts = {64343, 60801, 81497, 333, 27838, 33921, 11911, 29338, 12576, 34521, 6217, 80968, 78515, 90237, 61474, 50311, 11393, 83839, 74413, 58550, 2815, 98969, 23825, 14633, 47281, 37785, 52745, 16011, 41296, 721, 12924, 68731, 77545, 34951, 10005, 83561, 35537, 27147, 8201, 86241, 86729, 22561, 38209, 30219, 44065, 3957, 90061, 40825, 99341, 47566};
    vector<int> powers = {991, 733, 446, 296, 587, 131, 251, 1, 9, 430, 485, 571, 761, 159, 541, 771, 542, 265, 8, 159, 513, 385, 458, 751, 559, 793, 594, 845, 173, 351, 626, 657, 693, 453, 865, 549, 136, 659, 247, 431, 621, 348, 849, 12, 245, 697, 311, 467, 78, 171};
    int N = 913762;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 497509570;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> counts = {84923, 8215, 97937, 18772, 40077, 65235, 42411, 52656, 59001, 32955, 7577, 45001, 12455, 21543, 92865, 37909, 16415, 54081, 99338, 34984, 16865, 49821, 69217, 63277, 7681, 59064, 50335, 82493, 44401, 74827, 16929, 26021, 19161, 76001, 54293, 14991, 46312, 45181, 43457, 29545, 73445, 6269, 92920, 55461, 45945, 30296, 13516, 32701, 28636, 87082};
    vector<int> powers = {493, 557, 251, 131, 452, 199, 401, 533, 201, 713, 107, 501, 879, 704, 226, 181, 177, 987, 185, 327, 827, 217, 735, 301, 521, 606, 57, 649, 331, 431, 511, 823, 506, 701, 649, 38, 656, 677, 185, 883, 964, 199, 489, 301, 457, 309, 471, 901, 593, 359};
    int N = 783589;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 455300618;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> counts = {80735, 14401, 82600, 10083, 53121, 16117, 14062, 7429, 6449, 49531, 87731, 16341, 61105, 14113, 70755, 97167, 63500, 68741, 14841, 78453, 86717, 13771, 69465, 35376, 99379, 48743, 9708, 1494, 47780, 75719, 5896, 94201, 91119, 11325, 46654, 51483, 15393, 13136, 50436, 5940, 49931, 97581, 95569, 89949, 51801, 54494, 54647, 97462, 13009, 41629};
    vector<int> powers = {633, 873, 869, 243, 376, 561, 911, 211, 301, 873, 571, 85, 23, 186, 450, 893, 351, 301, 737, 88, 101, 787, 531, 521, 495, 781, 565, 503, 881, 1, 809, 561, 275, 22, 961, 755, 44, 666, 861, 491, 971, 451, 725, 714, 117, 563, 75, 161, 575, 351};
    int N = 923916;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 545693495;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> counts = {5, 37, 4};
    vector<int> powers = {7, 4, 8};
    int N = 20;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> counts = {761, 263, 698, 811, 201, 493, 385, 621, 626, 171};
    vector<int> powers = {204, 464, 251, 438, 241, 351, 181, 915, 473, 589};
    int N = 2515;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1264085;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> counts = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {15, 45, 45, 65, 45, 65, 45, 655, 2, 1, 2, 15};
    int N = 200;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 131000;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> counts = {1000000, 1, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {204, 464, 251, 438, 241, 351, 181, 915, 473, 589, 204, 464, 251, 438, 241, 351, 181, 915, 473, 589, 204, 464, 251, 438, 241, 351, 181, 915, 473, 589, 204, 464, 251, 438, 241, 351, 181, 915, 473, 589, 204, 464, 251, 438, 241, 351, 181, 915, 473, 589};
    int N = 999999;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 914999085;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> counts = {1, 10, 10, 1};
    vector<int> powers = {1, 10, 10, 1};
    int N = 20;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> counts = {10, 1, 10};
    vector<int> powers = {1, 100, 1};
    int N = 10;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> counts = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {17, 1, 11, 2, 12, 3, 4, 13, 5, 14, 6, 7, 8, 9, 10, 15, 16, 18, 20, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 344};
    int N = 200000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 68800000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> counts = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {204, 464, 251, 438, 241, 351, 181, 915, 473, 589, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3};
    int N = 100000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 91500000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> counts = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> counts = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {1, 41, 81, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int N = 20;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 1620;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> counts = {1000000, 1000000, 1000000};
    vector<int> powers = {10, 20, 10};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 20000000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> counts = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> powers = {2, 3, 4, 5, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int N = 1000000;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 6000000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> counts = {1, 5, 1};
    vector<int> powers = {1, 5, 1};
    int N = 2;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> counts = {3, 50, 51, 50, 3};
    vector<int> powers = {1, 10, 50, 10, 1};
    int N = 3;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> counts = {1, 1, 1};
    vector<int> powers = {1, 5, 1};
    int N = 1;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> counts = {10, 10, 10};
    vector<int> powers = {2, 20, 5};
    int N = 2;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> counts = {100000, 9999, 500, 100000, 99999, 88888, 77777, 67, 900, 600, 19999, 100000, 28888};
    vector<int> powers = {9, 80, 7, 900, 8, 1, 1000, 788, 777, 66, 90, 908, 56};
    int N = 199999;
    RegimentArming* pObj = new RegimentArming();
    clock_t start = clock();
    int result = pObj->chooseGuns(counts, powers, N);
    clock_t end = clock();
    delete pObj;
    int expected = 171205342;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10195348&rd=8002&pm=4831
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
#define sz size()
#define ln length()
#define pb(a)push_back(a)
#define all(a)a.begin(),a.end()
#define NP(a)next_permutation(A(a))
#define F3(i,a,b)for(i=a;i<b;++i)
#define F2(a,b)F3(i,a,b)
#define FV(v)F2(0,v.sz)
#define F(a)F2(0,a)
 
class RegimentArming
{
  public:
  int chooseGuns(vector <int> counts, vector <int> powers, int N)
  {
    int i, w, j, cur, best=0;
 
    for (i = 0; i < counts.sz; ++i)
    {
      if (counts[i] >= N)
        cur = N * powers[i];
      else
      {
        cur = counts[i] * powers[i];
        w = N - counts[i];
        j = i+1;
 
        while (j < counts.sz && w)
        {
          if (counts[j] >= w)
          {
            cur += w * powers[j];
            break;
          }
          else
          {
            cur += counts[j] * powers[j];
            w -= counts[j];
            j++;
          }
        }
      }
 
      best >?= cur;
    }
 
    for (i = counts.sz-1; i>=0; --i)
    {
      if (counts[i] >= N)
        cur = N * powers[i];
      else
      {
        cur = counts[i] * powers[i];
        w = N - counts[i];
        j = i-1;
 
        while (j>=0 && w)
        {
          if (counts[j] >= w)
          {
            cur += w * powers[j];
            break;
          }
          else
          {
            cur += counts[j] * powers[j];
            w -= counts[j];
            j--;
          }
        }
      }
 
      best >?= cur;
    }
 
    return best;
  }
};

********************************************************************************
*******************************************************************************/