/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11318
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

class OneDimensionalBalls {
public:
    long countValidGuesses(vector<int> firstPicture, vector<int> secondPicture);
};

long OneDimensionalBalls::countValidGuesses(vector<int> firstPicture, vector<int> secondPicture) {
    long ret;
    return ret;
}


int test0() {
    vector<int> firstPicture = {12, 11};
    vector<int> secondPicture = {10, 11, 13};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> firstPicture = {1, 2, 3};
    vector<int> secondPicture = {1, 2, 3};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> firstPicture = {9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 161140441;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> firstPicture = {1, 3};
    vector<int> secondPicture = {1, 3};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
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
    vector<int> firstPicture = {1, 2, 3};
    vector<int> secondPicture = {0, 1, 3, 4, 5, 6};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> firstPicture = {7234};
    vector<int> secondPicture = {6316, 689156, 689160, 689161, 800000, 1000001};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> firstPicture = {0};
    vector<int> secondPicture = {0};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> firstPicture = {100000000};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> firstPicture = {100000000};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 144, 245, 346, 447, 548, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> firstPicture = {9087654};
    vector<int> secondPicture = {2, 5, 215, 10000, 61238, 99256, 111111, 222222, 1000000, 7363366, 9087654, 10259292, 29000000, 66666666};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> firstPicture = {0, 1};
    vector<int> secondPicture = {0, 1};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> firstPicture = {0, 1};
    vector<int> secondPicture = {0, 2};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> firstPicture = {0, 1};
    vector<int> secondPicture = {0, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> firstPicture = {0, 50000000};
    vector<int> secondPicture = {0, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> firstPicture = {0, 50000000};
    vector<int> secondPicture = {50000000, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> firstPicture = {50000001, 50000000};
    vector<int> secondPicture = {1, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> firstPicture = {50000000, 50000001};
    vector<int> secondPicture = {1, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> firstPicture = {2, 0, 1};
    vector<int> secondPicture = {100, 101, 102};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> firstPicture = {2, 0, 1};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 101, 102, 200, 201, 202, 300, 301, 302, 99999998, 99999999, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> firstPicture = {0, 1, 2};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 101, 102, 200, 201, 202, 300, 301, 302, 99999998, 99999999, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> firstPicture = {16, 327, 81};
    vector<int> secondPicture = {139, 204, 777};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> firstPicture = {16, 327, 81};
    vector<int> secondPicture = {139, 204, 450, 777};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> firstPicture = {10, 25, 13};
    vector<int> secondPicture = {4, 7, 19, 31};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> firstPicture = {4767, 3490, 1977};
    vector<int> secondPicture = {144, 1268, 1327, 1368, 1849, 2039, 2153, 2340, 3428, 4287, 4892, 5963, 5999, 6218, 7020, 8398, 8647, 8921, 9399, 9874};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> firstPicture = {5356, 6854, 3077};
    vector<int> secondPicture = {395, 423, 535, 1324, 1385, 1823, 1841, 1996, 2590, 2626, 2670, 2927, 2952, 3504, 3959, 3980, 4626, 4777, 4779, 4814, 5000, 5048, 5449, 5598, 6025, 6129, 6283, 6289, 6338, 6437, 6651, 6822, 7218, 7269, 7640, 7737, 7963, 8304, 8375, 8459, 8499, 9018, 9039, 9802};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> firstPicture = {76010, 60264, 74902};
    vector<int> secondPicture = {4631, 4849, 5865, 11489, 11726, 13523, 17343, 20136, 26164, 26611, 27061, 27956, 35417, 37529, 38274, 39087, 43766, 43820, 45085, 48210, 51141, 51763, 52920, 53614, 54637, 55745, 57013, 58462, 61085, 62519, 62835, 63749, 64957, 66061, 66884, 75371, 80529, 95102, 95565, 97000, 97034, 97230, 97756, 98919, 99803};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> firstPicture = {79806, 48375, 45704};
    vector<int> secondPicture = {695, 1783, 2810, 4006, 6242, 9761, 9788, 15114, 27602, 30814, 32113, 33992, 36105, 37686, 55800, 56393, 56730, 58882, 64273, 66009, 66883, 69117, 70714, 71704, 72415, 72668, 74103, 80563, 81622, 82270, 88421, 95434, 99541, 99696};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> firstPicture = {182, 326, 544};
    vector<int> secondPicture = {8, 64, 66, 68, 76, 103, 152, 184, 206, 215, 226, 258, 261, 278, 333, 338, 343, 356, 375, 428, 466, 477, 485, 487, 500, 523, 529, 572, 592, 603, 695, 718, 730, 736, 737, 747, 797, 831, 844, 858, 891, 935, 954, 995};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> firstPicture = {622, 523, 904};
    vector<int> secondPicture = {21, 39, 71, 160, 164, 169, 186, 204, 219, 245, 268, 283, 367, 377, 427, 437, 459, 509, 550, 554, 566, 590, 595, 618, 649, 691, 744, 778, 793, 805, 832, 843, 886, 889, 897, 931, 957, 972};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> firstPicture = {305, 732, 431, 150};
    vector<int> secondPicture = {6, 73, 77, 92, 99, 124, 145, 173, 178, 197, 264, 279, 318, 331, 350, 368, 372, 374, 457, 474, 491, 503, 598, 619, 647, 679, 698, 706, 733, 747, 758, 761, 791, 799, 813, 837, 869, 887, 891, 914, 925, 969, 983, 994, 995};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> firstPicture = {557, 556, 671, 223};
    vector<int> secondPicture = {27, 62, 95, 173, 189, 192, 277, 282, 292, 301, 303, 307, 324, 372, 422, 472, 503, 518, 572, 631, 655, 662, 721, 724, 756, 805, 806, 810, 832, 867, 903, 920, 940, 946};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> firstPicture = {476, 284, 205, 313};
    vector<int> secondPicture = {41, 51, 77, 93, 114, 126, 133, 172, 178, 188, 236, 316, 319, 346, 355, 364, 368, 380, 425, 454, 465, 501, 555, 565, 573, 617, 634, 663, 711, 726, 750, 754, 767, 774, 776, 835, 864, 878, 934, 961, 978, 990, 991};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> firstPicture = {148, 55, 261, 473};
    vector<int> secondPicture = {20, 27, 36, 48, 66, 133, 158, 180, 218, 231, 236, 278, 320, 324, 356, 400, 449, 459, 489, 500, 514, 523, 543, 553, 574, 578, 586, 604, 613, 615, 647, 652, 657, 700, 712, 718, 722, 760, 786, 880, 894, 909, 969};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> firstPicture = {83703783, 44085562, 47719325, 46263418, 32315875};
    vector<int> secondPicture = {28180711, 36451039, 39950398, 42128254, 43584161, 48220726, 50398582, 51854489, 72335346, 79568619, 87838947, 95072220};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> firstPicture = {77343100, 21005506, 61557330, 83193670, 67898666};
    vector<int> secondPicture = {14056721, 20667653, 21343359, 27954291, 54608545, 60949881, 61219477, 61895183, 67560813, 68236519, 68506115, 69002040, 70394315, 74847451, 76244885, 77005247, 77680953, 82855817, 83531523, 84291885, 85684160, 90142455};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 64;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> firstPicture = {57660639, 14994435, 25943786, 64784691, 77904616};
    vector<int> secondPicture = {2896758, 11504668, 13846109, 18484202, 22454019, 27092112, 29433553, 38041463, 45562962, 52687014, 54170872, 61150406, 61294924, 68274458, 69758316, 74414849, 81394383};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> firstPicture = {83894807, 26653650, 50511964, 50184481, 91585567, 11673937, 6800498, 58815483, 60307040, 98234936};
    vector<int> secondPicture = {98583, 4217809, 4972022, 9091248, 9383187, 13502413, 14256626, 18375852, 18557359, 19951735, 24070961, 29236339, 33355565, 34749941, 42415673, 43482566, 43810049, 47601792, 47929275, 52113568, 52767170, 53094653, 53605125, 56232794, 56886396, 57213879, 57724351, 61398172, 62889729, 65517398, 67008955, 75798516, 77192892, 81312118, 84883652, 86477496, 89002878, 90596722, 91533021, 91991098, 94168256, 95652247, 98287482};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> firstPicture = {78913153, 47007529, 49500410, 72645567, 71995582, 71074466, 88562798, 88663591, 94935928, 41608845};
    vector<int> secondPicture = {35567026, 38795584, 40965710, 41288465, 43458591, 47650664, 53049348, 55219474, 55542229, 65032647, 65953763, 66603748, 70701208, 72871334, 77116285, 78037401, 78687386, 82520979, 82621772, 84954972, 87125098, 88894109, 94604617, 94705410};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> firstPicture = {57147937, 61758745, 93972888, 29073905, 485612, 85416399, 71747022, 2215423, 50083317, 34512364};
    vector<int> secondPicture = {2707486, 4437297, 26852031, 31295779, 32290490, 36734238, 47861443, 52104122, 52305191, 54926063, 56714930, 59369811, 59536871, 62191752, 63980619, 66802560, 69525148, 73968896, 83194525, 87638273, 88929073, 91751014, 96194762};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> firstPicture = {45778145, 23908901, 57635410, 59063853, 20167243, 95381333, 1105396, 90664822, 27273990, 97956804};
    vector<int> secondPicture = {2538227, 18734412, 21600074, 22476070, 25341732, 25841159, 28706821, 35832630, 44345314, 47210976, 56202579, 57631022, 59068241, 60496684, 89231991, 92097653, 93948502, 96523973, 96814164, 99389635};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 512;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> firstPicture = {7389297, 5041833, 25864421, 17314710, 56626436, 98675600, 70698414, 20840626, 61483467, 50993165};
    vector<int> secondPicture = {425343, 2772807, 2937499, 4805226, 5278440, 5284963, 7146167, 7152690, 7625904, 9493631, 9658323, 12005787, 12698220, 15210376, 16224136, 18736292, 19419044, 21247931, 21931200, 22944960, 23760087, 25457116, 25627814, 26101028, 27968755, 30480911, 46376675, 48888831, 52009946, 53097499, 54522102, 55609655, 56866977, 58730770, 59379133, 61242926, 63587801, 66081924, 66099957, 68594080, 72802748, 75314904, 94059110, 96571266};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> firstPicture = {27482216, 4358357, 47775308, 84251456, 56390639, 87337012, 63913778, 98629442, 7856055, 67704902, 29548191, 51915784, 17105435};
    vector<int> secondPicture = {800316, 3286736, 3361483, 6859181, 8927676, 10049696, 11414096, 12536116, 15842284, 16108561, 20426477, 22492452, 22912897, 24978872, 26485342, 28551317, 40719569, 43205989, 44860045, 46778434, 47346465, 49334900, 50918910, 51821320, 55393765, 56858039, 59344459, 60649163, 62916904, 63135583, 66708028, 77195717, 79682137, 80281273, 82767693, 83254582, 86340138, 91573703, 94060123, 97632568};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> firstPicture = {12227670, 20063531, 41632490, 338063, 62107298, 99019693, 54691574, 82639099, 88881467, 46664704, 49807640, 81020875, 79148906};
    vector<int> secondPicture = {107049, 2871686, 7942910, 9694047, 10707547, 12458684, 21583654, 24348291, 29419515, 29511869, 32184152, 32276506, 34544083, 37308720, 37687019, 40451656, 42570953, 45335590, 49986677, 50988474, 52751314, 53753111, 56020688, 58785325, 59163624, 64047558, 66812195, 69792922, 70518478, 71463282, 71664891, 73283115, 74227919, 76760846, 79525483, 86899072, 88504890, 89663709, 90376859, 91995083, 94759720, 98237451};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> firstPicture = {71694271, 39292072, 8530063, 84702565, 58275063, 46149015, 99675384, 61448765, 57282345, 85898696, 77304161, 48556785, 27954068};
    vector<int> secondPicture = {5328004, 6701350, 10358776, 11732122, 24752009, 31156127, 36090013, 37463359, 41120785, 42494131, 42946956, 44320302, 45354726, 46728072, 47977728, 49351074, 51758844, 54080286, 55073004, 55453632, 56446350, 58246706, 59111058, 59620052, 60103776, 60484404, 61477122, 63277478, 64650824, 68492212, 69865558, 73522984, 74102102, 74896330, 75475448, 79132874, 80506220, 81500506, 82696637, 82873852, 84069983, 86531278, 87727409, 87904624, 89100755, 96473325, 97846671};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4096;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> firstPicture = {26605732, 15822327, 84741242, 99425938, 71892538, 72681236, 61228437, 33122640, 14932837, 26367268, 32585368, 87380946, 42851612, 61125519, 80745950, 83628677, 75182854, 41160232, 24694490, 1935737};
    vector<int> secondPicture = {7225710, 9642864, 10532354, 19316782, 19404517, 20222810, 21077295, 21112300, 21315759, 27295395, 27832667, 29984463, 31657241, 31895705, 35870259, 37561639, 37875341, 38412613, 46450205, 48141585, 55835546, 55938464, 66415492, 66518410, 66602565, 67391263, 69892881, 75455977, 77182511, 77971209, 78338704, 79451269, 80472827, 82090973, 86035923, 88918650, 90031215, 92670919, 94135965};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 262144;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> firstPicture = {58889183, 34871550, 6370779, 8295450, 78120587, 42233444, 93764773, 9052958, 28284822, 36588361, 40759702, 58139839, 96941914, 14161633, 3363623, 16049199, 44476290, 78474091, 58794635, 32721533};
    vector<int> secondPicture = {2229816, 4117382, 5461005, 15295440, 16353005, 18302596, 20227267, 20789716, 20984775, 22939733, 24656544, 26093450, 27981016, 28827885, 30301627, 32544473, 33961776, 35781324, 40216639, 44653350, 46208022, 46803367, 46862818, 46957366, 48520178, 52691519, 54165261, 56408107, 57979409, 59798957, 66188770, 66542274, 70071656, 70726452, 70821000, 81832956, 85010097, 90052404, 90405908};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> firstPicture = {3010935, 2474400, 31174809, 679068, 47767619, 1483720, 27773651, 20755518, 63396872, 63088855, 17948941, 46432866, 32164431, 4640111, 24860730, 27922790, 1509595, 47257255, 19419580, 96137010};
    vector<int> secondPicture = {9183068, 9444941, 10249593, 10275468, 10653707, 11240273, 11776808, 11989645, 12720390, 13405984, 14515722, 15052257, 16094857, 19007778, 19133487, 19156917, 22408936, 23398558, 26714814, 28185453, 35726297, 37666993, 38491382, 39001746, 43216131, 54322982, 54630999, 56533492, 71854728, 72162745, 87371137};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 32;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> firstPicture = {85370011, 82124833, 18822507, 1221218, 52030816, 15695413, 24229564, 6909450, 37390506, 98249340, 28622195, 77439663, 39162936, 24245313, 99478979, 93066024, 12996110, 37911847, 44513063, 48791199};
    vector<int> secondPicture = {2912721, 5217947, 8413092, 8503539, 8999381, 10906179, 11540186, 11698684, 14825778, 16947243, 19692142, 20232835, 20248584, 22819236, 22977734, 24625466, 28242042, 33393777, 33915118, 35166207, 40516334, 41387235, 43159665, 44748495, 44794470, 48034087, 48509792, 52787928, 73442934, 74842512, 78087690, 78128104, 81373282, 81436392, 89069295, 89366740, 89407154, 94252611, 95482250, 97062753};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> firstPicture = {66257593, 80956106, 27656933, 90163118, 75427751, 84823555, 34221829, 93278233, 31120826, 6132730, 71616086, 64616172, 41329620, 33510140, 46552096, 55794383, 39367553, 15300581, 43676346, 27464717};
    vector<int> secondPicture = {6248568, 15184743, 18604920, 22068813, 24458127, 25169816, 30315540, 32277607, 36708946, 37500083, 46742370, 50381633, 55564159, 57205580, 62564073, 64846396, 66375738, 71904093, 75309606, 75771542, 80668099, 81111105, 84226220};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> firstPicture = {27198031, 1616322, 9630583, 33161936, 70042194, 84658542, 43007456, 19156567, 68110064, 81044766, 12439878, 54408827, 85950290, 3514383, 2689162, 25734211, 40196781, 28883509, 30779366, 16372184};
    vector<int> secondPicture = {279951, 1105172, 4025533, 4405963, 5098373, 5923594, 6840942, 7221372, 10030667, 12039794, 12420224, 13962973, 16366926, 16747356, 21946208, 23325000, 24408390, 24788820, 26474298, 28143422, 28370155, 30372295, 30752725, 31292720, 33188577, 35951577, 37787570, 40217815, 40598245, 45416667, 45797097, 51999616, 56818038, 65700853, 67252553, 67632983, 70519275, 72451405, 78635555, 81868901, 82249331, 83541079, 87067753};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2048;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> firstPicture = {73895822, 90349212, 44798153, 77748091, 78977740, 5820909, 8418026, 99651393, 80485927, 81185252, 17094218, 51694512, 20207053, 62982497, 30580043, 93084191, 76073146, 17919003, 92466232, 36881622};
    vector<int> secondPicture = {1414165, 4909363, 5734148, 8022198, 12824770, 15421887, 18005764, 18395188, 20602881, 24696767, 29279073, 32613298, 37794292, 39509657, 49066477, 50797642, 51802014, 61710967, 63879367, 63888291, 65563236, 66792885, 66891961, 68301072, 69000397, 70744230, 71973879, 78164357, 80281377, 80899336, 80899683, 83345351, 84751952, 85981601, 87466538, 88258001, 89932946, 91162595, 92670782, 93370107};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> firstPicture = {88521880, 86119183, 59895322, 77269013, 60678657, 31428527, 48200637, 49902754, 57027610, 62306560, 49265297, 50916333, 74104566, 82178954, 48408122, 34062636};
    vector<int> secondPicture = {24916062, 27550171, 30185293, 32819402, 41688172, 41895657, 42752832, 43390289, 44403868, 46957403, 47164888, 48022063, 48659520, 49443871, 49651356, 49673099, 50515145, 53382857, 54166192, 54713102, 55784376, 55794095, 56415219, 57428798, 58652088, 59435423, 61063326, 61138556, 63540075, 66407787, 67191122, 67592101, 70756548, 72861332, 75666489, 76025779, 79235855, 79606718, 80617031, 80935720, 81638552, 82009415, 83422188, 84875949, 87278646, 88691419, 89765114, 92631648, 95034345};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1056;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> firstPicture = {88968969, 95747306, 34331802, 84103231, 60572912, 62850597, 45321052, 35971823, 49168806, 31531681, 5926959, 15329025};
    vector<int> secondPicture = {4874800, 5014811, 14416877, 16381184, 21077456, 23877577, 25517598, 26493144, 30619533, 32443829, 33419654, 34866827, 35059675, 35243950, 36883971, 37482394, 38714581, 44408904, 44786027, 46233200, 46426048, 48256658, 50080954, 50118687, 52396372, 52734254, 55011939, 55775277, 59660764, 61485060, 61938449, 63762745, 70689255, 73304822, 73649006, 76264573, 78514744, 81130311, 83191083, 85015379, 85293081, 87908648, 88056821, 89881117, 91941889, 94835158, 96659454, 96807627};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1040;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> firstPicture = {21506547, 22930209, 95218238, 14186347, 10748855, 53063051, 9721334, 61388363, 94529080, 35275960, 60848342, 54484792};
    vector<int> secondPicture = {3905700, 4933221, 8370713, 8902810, 9930331, 10539858, 13367823, 14215042, 15690913, 16564489, 17114575, 20001981, 20688023, 22111685, 22325071, 23748733, 27322181, 28745843, 29460326, 34457436, 36094484, 47247417, 48669158, 52244527, 53666268, 53881575, 55032708, 55303316, 55572729, 60029818, 60569839, 61666866, 62206887, 67203997, 88713446, 89402604, 93710556, 94399714, 95347604, 96036762};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1056;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> firstPicture = {96029239, 75111899, 95352736, 73054862, 96330561, 51744996, 60956589, 97122988, 7015429, 15114131, 36749163, 84552075, 64386932};
    vector<int> secondPicture = {3748432, 5061722, 10282426, 11847134, 17067838, 18381128, 26696754, 33482166, 40016160, 41692587, 46801572, 48477999, 50904180, 54334523, 55011993, 57689592, 61119935, 63002453, 63775794, 64223586, 65059490, 67653929, 69787865, 71008998, 71844902, 74439341, 74499666, 78378896, 81285078, 84693134, 85300327, 85976830, 86278152, 87070579, 92085739, 92762242, 93063564, 93855991, 94604484, 98619733, 99296236, 99597558};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1040;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> firstPicture = {82916365, 94824585, 61651752, 26094493, 79487231, 84955448, 7188184, 13183192, 25340500, 19286100, 11781377, 56450039, 19118488};
    vector<int> secondPicture = {2190499, 3144940, 3592314, 7738133, 9139948, 9527610, 9695222, 11231428, 15075244, 15242856, 15749622, 15824621, 16503615, 16779062, 17226436, 21297256, 22051249, 23161732, 23329344, 28876978, 34931378, 35685371, 46859161, 52060874, 52406795, 57608508, 60493283, 65694996, 69896353, 73325487, 75364570, 75443987, 78873121, 80912204, 82181472, 85233707, 86959609, 88998692, 89078109, 90781341, 94546326, 98867829};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1056;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> firstPicture = {26964092, 83367749, 77566863, 19308156, 56955702, 38307230, 3756417, 18547363, 52060743, 39070514, 33052446, 13163531, 26356741, 81209883};
    vector<int> secondPicture = {866726, 2361589, 5151245, 6250558, 7011351, 11768703, 14059936, 14558359, 14667287, 16053222, 17152535, 17913328, 19942191, 20702984, 20755641, 24961913, 25460336, 25569264, 26010425, 26773709, 28358920, 30844168, 31604961, 31657618, 34447274, 36912402, 37675686, 39260897, 39702058, 39763938, 44658897, 45349251, 50665915, 51367319, 55560874, 64357548, 65270058, 68913078, 69252507, 71070944, 76172035, 79815055, 81972921, 82604711, 93506688, 95664554};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1280;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> firstPicture = {37620060, 50711804, 9296267, 42445231, 82933257, 18389006, 79080990, 36535821, 48825809, 52681636, 84177844, 99535006, 95771395, 51812143, 14467941, 38674409};
    vector<int> secondPicture = {4298740, 7444857, 8219805, 11147677, 12616531, 16319351, 16537596, 19465468, 20240416, 26366620, 27450859, 28505208, 31690900, 32276030, 34684411, 35768650, 36822999, 38656608, 39471470, 40525819, 40542603, 40593821, 41642942, 42512435, 46705022, 46974399, 48860394, 49960733, 50677219, 50830226, 54533046, 60881005, 62850837, 68911789, 72764056, 74008643, 77229580, 80932400, 81081847, 82326434, 84784667, 85602194, 86029254, 89250191, 89365805, 93102458, 93919985, 94347045, 97683596};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1088;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> firstPicture = {17903430, 64704750, 54145775, 22317660, 72227092, 28098595, 43872989, 71690768, 31256644, 3933155, 38747306, 19900177, 4041109, 17609536};
    vector<int> secondPicture = {1120308, 1228262, 6746002, 9100392, 9208346, 12442299, 12736193, 14732940, 14796689, 15090583, 16808380, 17087330, 17150423, 19504813, 20422383, 20716277, 21222610, 22776773, 22931358, 23412710, 25285748, 26089407, 28443797, 30911442, 33265832, 33580069, 34069491, 35934459, 38705752, 41060142, 41560153, 46685836, 48978538, 49040226, 51332928, 53050725, 55240825, 59537513, 61891903, 63609700, 65799800, 66523531, 67059855, 67517597, 68877921, 69414245, 74503615, 75039939};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1032;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> firstPicture = {94943176, 23901715, 12914299, 41155200, 46758133, 78373845, 36670495, 96840641, 61029922, 84774006, 50661372, 68373279, 40494589, 1450445, 50395586, 73331722};
    vector<int> secondPicture = {1190737, 1482899, 1710153, 12470315, 12654591, 12881845, 13174007, 23642007, 24161423, 25239095, 29063189, 29723800, 35326733, 35333115, 36410787, 38964186, 39229972, 40234881, 40895492, 41414908, 46498425, 47017841, 48101895, 49598522, 50135878, 50401664, 50655294, 50921080, 51925989, 52586600, 56941879, 58189533, 60770214, 61289630, 61900322, 62092772, 66942445, 68113571, 73072014, 73342606, 73591430, 78114137, 83511776, 84514298, 84763122, 85409241, 94683468, 95202884, 96580933};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1152;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> firstPicture = {11266051, 66813702, 61937882, 29821352, 30209009, 43624221, 75723170, 76594549, 72262998, 84274381, 6908241, 81474700, 44317395, 65106824, 64395466, 57984113, 7729511};
    vector<int> secondPicture = {665132, 1486402, 3264439, 4085709, 5022942, 7622249, 9301647, 11373313, 13151350, 23578243, 23965900, 26177550, 26565207, 36064461, 37381112, 38074286, 39980419, 40673593, 50560504, 51741004, 54340311, 55694773, 58152357, 58294080, 58863715, 60570593, 60751664, 61463022, 63169900, 64227222, 64849298, 66019889, 68039268, 68180991, 68619196, 69480061, 70351440, 70457504, 72079368, 72950747, 73056811, 75231591, 77830898, 78031272, 78506107, 80630579, 81966279, 82837658, 87918183, 90517490};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1040;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> firstPicture = {23101448, 75294130, 64206292, 22631553, 1709596, 9014191, 98825055, 38073296, 27563202, 45871230, 87362880, 28571514, 265041, 2312617, 50932325, 73894890, 15552104, 32877389, 70031123, 52572369, 82259339, 82364140, 5765258, 45223266, 90792995, 11005853, 84503370};
    vector<int> secondPicture = {857314, 5403565, 10413580, 11858135, 12461156, 12483014, 12952909, 15913797, 17414663, 18422975, 19162730, 22728850, 25700643, 27924757, 32780092, 33249987, 35074727, 35722691, 37711741, 38720053, 40783786, 42423830, 48221835, 54057753, 55371805, 56019769, 59882584, 61080864, 63746351, 65145591, 72110800, 72215601, 74354831, 77214341, 80179662, 80644456, 84043429, 88676516, 92407878, 92512679, 94651909};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 24576;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> firstPicture = {9786, 85610, 76061, 51615, 91060, 65336, 38703, 1345, 8774, 61376, 23024, 40010, 8927, 9842, 81907, 32793, 44597, 14132, 16319, 44668, 81120, 20232, 97546, 89603, 77280, 98921, 87388};
    vector<int> secondPicture = {561, 714, 1573, 1629, 5919, 8106, 9558, 12019, 14811, 16987, 18055, 22345, 24532, 24580, 28445, 30490, 31237, 31797, 36384, 36455, 41006, 43402, 46916, 48223, 52881, 53163, 57123, 59828, 67848, 69067, 69589, 72907, 73694, 77397, 79175, 81390, 82847, 89333, 90120, 90708, 97816, 99273, 105759, 107134};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 196608;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> firstPicture = {93138, 46539, 63496, 93991, 2688, 61838, 29594, 72994, 71159, 7350, 98046, 40091, 9964, 72052, 80090, 17836, 97726, 24298, 98995, 84229, 8880, 69300, 67025, 97152, 2099, 42195, 3503};
    vector<int> secondPicture = {1652, 2241, 3056, 3135, 3950, 6903, 7797, 8433, 9327, 9517, 10411, 17389, 18283, 23851, 24745, 29147, 30041, 39644, 40538, 41748, 46092, 46986, 61391, 63049, 63943, 66578, 67472, 68853, 70712, 71605, 71606, 72547, 73441, 79643, 80537, 83782, 87167, 92691, 93544, 96705, 97279, 97599, 98173, 98493, 98548, 99109, 99442};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 393216;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> firstPicture = {21415, 42866, 73224, 92176, 33095, 20843, 83469, 7077, 12465, 620, 71948, 62767, 66995, 94792, 1551, 54076, 78155, 24966, 11591, 31361, 5109, 88818, 74125, 29782, 14903, 50725, 65887, 24215};
    vector<int> secondPicture = {2635, 3094, 3566, 5062, 7124, 9092, 9576, 10450, 12888, 13606, 14480, 16918, 18828, 19400, 22200, 22858, 22951, 23430, 26981, 27767, 29346, 31080, 33376, 35110, 40851, 44881, 48710, 52061, 52740, 56091, 60752, 63872, 64782, 64980, 67902, 69010, 69933, 71209, 72110, 73963, 75239, 76140, 80170, 81454, 85484, 86803, 90161, 90833, 92777, 96807};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 6291456;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> firstPicture = {71498, 2649, 81722, 40549, 32076, 83684, 96593, 48650, 27805, 40501, 8387, 36321, 56129, 41439, 92093, 11783, 48684, 70184, 44495, 61401, 54245, 87398, 87072, 64223, 75970, 20204, 10628};
    vector<int> secondPicture = {573, 2814, 3969, 10463, 12390, 16201, 19597, 19991, 24262, 28018, 28507, 32687, 32735, 33625, 35619, 36681, 39890, 40836, 40870, 46431, 48315, 48363, 49253, 53587, 56409, 56464, 56498, 62059, 62370, 63684, 63943, 68156, 69215, 72037, 73908, 75870, 79258, 79312, 79584, 83784, 84279, 88779, 89536, 91498, 95212, 99907, 104407};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1572864;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> firstPicture = {78885, 27444, 30830, 80355, 64508, 29702, 95314, 9014, 21847, 19032, 79568, 35939, 33685, 22505, 58045, 85216, 12883, 70282, 62453, 88657, 41018, 86093, 74162, 86847, 22228, 98282, 28791};
    vector<int> secondPicture = {2297, 6166, 12315, 15130, 15511, 15788, 19600, 20727, 22074, 22985, 24113, 25749, 26968, 28945, 29222, 34161, 34301, 36419, 37547, 40402, 42656, 47735, 51328, 55736, 57791, 63565, 64762, 67445, 69170, 71225, 71393, 72168, 72851, 73638, 76999, 78499, 79376, 80130, 80879, 81940, 86285, 86377, 87072, 88597, 91565, 91933, 95374, 102031};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 786432;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> firstPicture = {97522, 32775, 72613, 98509, 32162, 72832, 4699, 77677, 22246, 22359, 72821, 97611, 13983, 91556, 7458, 80983, 7388, 39612, 59885, 26244, 88277, 31589, 87686, 99016, 1481, 6421, 19646, 32892};
    vector<int> secondPicture = {2167, 3889, 4013, 4856, 4926, 7231, 8953, 11451, 16515, 17114, 19714, 19827, 22178, 23712, 28776, 29057, 29630, 30243, 30360, 34121, 34694, 35307, 35424, 37080, 42144, 57353, 70081, 70289, 70300, 75145, 75353, 75364, 78451, 80209, 83515, 85154, 85745, 88841, 89024, 90218, 90809, 94088, 94990, 95079, 95977, 96484, 100143, 101548, 106203};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 786432;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> firstPicture = {27650, 50433, 4349, 87836, 26710, 9619, 61405, 3100, 97651, 99293, 29178, 78733, 93945, 23807, 96906, 50686, 45746, 5560, 99032, 6878, 101, 19464, 88724, 83612, 13498, 7494, 30019, 93495, 58257, 76349, 84594, 35566, 52797, 27446, 69258};
    vector<int> secondPicture = {1320, 7286, 11629, 12279, 14532, 15268, 15278, 15472, 16527, 17000, 17738, 17841, 19056, 19672, 21797, 23388, 31642, 33568, 35985, 38255, 38508, 38888, 40619, 41356, 46079, 47744, 49227, 57080, 62611, 64171, 66555, 70435, 71434, 72416, 73583, 75658, 76546, 81317, 81436, 81767, 84728, 85473, 86854, 87115, 88527, 95790, 100014, 105673, 111210};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 16384;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> firstPicture = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14068609;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> firstPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> firstPicture = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4207738;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> firstPicture = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 383129;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> firstPicture = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 12029;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> firstPicture = {12, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 32, 34, 35};
    vector<int> secondPicture = {0, 1, 2, 3, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 27, 28, 29, 30, 32, 33, 34, 35, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 162396;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> firstPicture = {34, 35, 36, 12, 13, 14, 16, 8, 9, 10, 22, 23, 24, 25, 26, 27, 29, 17, 18, 19, 20, 21, 37, 7, 30, 31, 33, 38};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 28, 29, 30, 31, 32, 34, 35, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 136312;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> firstPicture = {29, 27, 28, 10, 11, 12, 13, 14, 15, 17, 19, 21, 22, 23, 24, 25, 26};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 26, 27, 28, 29, 31, 32, 34, 35, 36, 37, 38, 40, 41, 43};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 27228;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> firstPicture = {4541, 9699, 14857, 20015, 25173, 30331, 3917, 9075, 14233, 19391, 24549, 3018, 8176, 13334, 18492};
    vector<int> secondPicture = {439, 1338, 1962, 5597, 6496, 7120, 10755, 11654, 12278, 15913, 16812, 17436, 21071, 21970, 22594, 27128, 27752, 32910, 6843249, 23206140, 40701548, 57109217, 75417420, 76634621};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 210;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> firstPicture = {10387, 23781, 37175, 50569, 63963, 77357, 90751, 104145, 117539, 130933, 144327, 11281, 24675, 38069, 10463, 10921};
    vector<int> secondPicture = {3690, 3766, 4224, 4584, 17084, 17160, 17618, 17978, 30478, 31372, 43872, 44766, 57266, 70660, 84054, 97448, 110842, 124236, 137630, 151024, 10013447, 19524504, 24573754, 54579697, 59229857, 63489489, 67068769, 76527879, 76961675, 84549747};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 192;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> firstPicture = {12386, 33300, 54214, 75128, 96042, 11190, 32104, 53018, 73932, 94846, 115760, 136674, 157588, 178502, 199416, 220330, 241244};
    vector<int> secondPicture = {733, 1929, 21647, 22843, 42561, 43757, 63475, 64671, 84389, 85585, 105303, 106499, 126217, 147131, 168045, 188959, 209873, 230787, 251701, 8106771, 11700174, 11958317, 13568544, 15419518, 17099130, 28081241, 36079399, 43350609, 43525316, 48236692, 48537256, 49212616, 49232801, 49505213, 51951907, 55027279, 61999583, 62205443, 67637514, 68340044, 68437866, 69309440, 80914297, 88001918};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> firstPicture = {19217, 55701, 92185, 128669, 165153, 201637, 19541, 56025, 18824, 55308, 91792, 128276};
    vector<int> secondPicture = {582, 975, 1299, 37066, 37459, 37783, 73550, 73943, 74267, 110034, 110427, 146518, 146911, 183395, 219879, 9874385, 12022164, 32404017, 37024566, 56956330};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 105;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> firstPicture = {8465, 21107, 33749, 46391, 59033, 71675, 6862, 19504, 32146, 10082};
    vector<int> secondPicture = {541, 2144, 3761, 13183, 14786, 16403, 25825, 27428, 38467, 40070, 52712, 65354, 77996, 248872, 5174602, 13119356, 17475051, 21582525, 23900510, 26472224, 30504986, 30920132, 31530238, 34073686, 35560833, 37282787, 45400361, 45834528, 45947019, 47640056, 52826751, 58124387, 58311821, 63024313, 63966983, 73969478, 77173054, 81145445, 83228174, 86006829, 87303880, 92075087};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 56;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> firstPicture = {1495, 3479, 5463, 7447, 9431, 11415, 13399, 15383, 17367, 19351, 21335, 23319, 25303, 27287, 2826, 5814, 7798};
    vector<int> secondPicture = {503, 1834, 2487, 3818, 4471, 4822, 6455, 6806, 8439, 8790, 10423, 12407, 14391, 16375, 18359, 20343, 22327, 24311, 26295, 28279, 2766520, 8236448, 11022591, 12741941, 13969620, 19286348, 19654069, 22261262, 28875290, 43043415, 52449498, 57497381, 61751846, 68174591, 69805177, 74596998, 79056982, 79108895, 87617614, 88101253, 88506982, 88987588, 91611205, 92389411, 92580354};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> firstPicture = {20899, 53299, 85699, 118099, 150499, 182899, 215299, 247699, 280099, 312499, 344899, 377299, 409699, 442099, 474499, 506899, 539299, 17157};
    vector<int> secondPicture = {957, 4699, 33357, 37099, 69499, 101899, 134299, 166699, 199099, 231499, 263899, 296299, 328699, 361099, 393499, 425899, 458299, 490699, 523099, 555499, 4022841, 18165403, 19187360, 26066107, 44846886, 65980679, 68283021, 69192940, 82606168, 99270370};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 36;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> firstPicture = {9374, 24532, 39690, 54848, 70006, 85164, 100322, 115480, 130638, 145796, 160954, 176112, 11571, 9671};
    vector<int> secondPicture = {1795, 2092, 3992, 16953, 17250, 19150, 32111, 47269, 62427, 77585, 92743, 107901, 123059, 138217, 153375, 168533, 183691, 13728021, 36744407, 38711726, 90281292, 91428798};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> firstPicture = {18485, 51085, 83685, 21235, 53835, 86435, 119035, 151635, 184235, 18410, 51010};
    vector<int> secondPicture = {2110, 2185, 4935, 34710, 34785, 37535, 67310, 67385, 70135, 99985, 102735, 122817, 135335, 167935, 200535, 4079369, 6109107, 7334480, 9468535, 13368446, 16182453, 35312969, 43733660, 44791371, 45382001, 64863419, 65011335, 83226767, 89369280, 89446634, 89803586, 90733983, 99489516};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> firstPicture = {5831, 14217, 22603, 30989, 5556, 13942, 22328, 30714, 39100, 47486, 55872, 64258, 72644};
    vector<int> secondPicture = {1363, 1638, 9749, 10024, 18135, 18410, 26521, 26796, 34907, 35182, 43293, 51679, 60065, 68451, 76837, 960748, 1179197, 12671452, 38281358, 51604314, 54860997, 64530216, 71273757, 77102077, 78347688, 80916371, 87710070, 98126549, 99447916};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 52;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> firstPicture = {21396, 57108, 92820, 128532, 164244, 199956, 235668, 271380, 19045, 54757, 90469, 126181, 161893, 197605, 233317, 269029, 18763, 54475, 90187, 125899, 21695, 57407, 93119};
    vector<int> secondPicture = {907, 1189, 3540, 3839, 36619, 36901, 39252, 39551, 72331, 72613, 74964, 75263, 108043, 108325, 110676, 110975, 143755, 144037, 146388, 179749, 182100, 215461, 217812, 251173, 253524, 286885, 289236, 2023793, 4185702, 11123522, 11176984, 13515420, 17753144, 21333832, 21604086, 23436279, 38077128, 41096092, 51401930, 56806758, 60259562, 60785249, 63432473, 66753401, 67229896, 67641504, 70582561, 73005874, 97917485};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1620;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> firstPicture = {5570, 11576, 17582, 23588, 29594, 35600, 41606, 47612, 53618, 59624, 65630, 71636, 77642, 83648, 89654, 3652, 9658, 15664, 21670, 27676, 4935, 10941, 16947, 22953, 7746, 13752, 19758, 25764, 31770};
    vector<int> secondPicture = {649, 1932, 2567, 4743, 6655, 7938, 8573, 10749, 12661, 13944, 14579, 16755, 18667, 19950, 20585, 22761, 24673, 25956, 26591, 28767, 30679, 32597, 34773, 38603, 44609, 50615, 56621, 62627, 68633, 74639, 80645, 86651, 92657, 12021092, 30206905, 39249658, 52119308};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2896;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> firstPicture = {21094, 54780, 88466, 122152, 155838, 189524, 223210, 256896, 290582, 324268, 357954, 391640, 425326, 459012, 492698, 526384, 560070, 593756, 627442, 661128, 694814, 20819, 54505, 88191, 121877, 155563};
    vector<int> secondPicture = {3976, 4251, 37662, 37937, 71348, 71623, 105034, 105309, 138720, 138995, 172681, 206367, 240053, 273739, 307425, 341111, 374797, 408483, 442169, 475855, 509541, 543227, 576913, 610599, 644285, 677971, 711657};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> firstPicture = {13733, 37829, 61925, 86021, 110117, 134213, 158309, 182405, 206501, 230597, 254693, 278789, 302885, 326981, 12766, 15251, 39347, 63443, 87539, 16970, 41066, 65162, 89258, 113354, 137450, 15326, 39422, 13678};
    vector<int> secondPicture = {718, 1630, 1685, 3203, 3278, 4922, 24814, 25726, 25781, 27299, 27374, 29018, 49877, 51395, 51470, 53114, 73973, 75491, 77210, 98069, 99587, 101306, 122165, 125402, 146261, 149498, 170357, 194453, 218549, 242645, 266741, 290837, 314933, 339029, 3092897, 5061882, 8301265, 24956991, 27054746, 30409058, 33553974, 36706077, 39146927, 70160604, 79564538, 86476306, 90911539, 92078192, 98005699};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 6300;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> firstPicture = {21128, 57374, 93620, 129866, 166112, 202358, 238604, 274850, 311096, 347342, 383588, 419834, 456080, 492326, 528572, 564818, 601064, 637310, 673556, 709802, 20911, 57157, 93403, 129649, 165895, 202141, 20994};
    vector<int> secondPicture = {2788, 2871, 3005, 39034, 39251, 75280, 75497, 111526, 111743, 147772, 147989, 184018, 184235, 220264, 220481, 256727, 292973, 329219, 365465, 401711, 437957, 474203, 510449, 546695, 582941, 619187, 655433, 691679, 727925};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 147;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> firstPicture = {1364303, 3897877, 6431451, 8965025, 11498599, 14032173, 1362231, 3895805, 6429379, 8962953, 11496527, 14030101, 16563675, 19097249, 1365692, 3899266, 6432840, 1327189, 3860763, 6394337, 8927911, 11461485, 13995059, 16528633, 19062207, 21595781, 24129355, 26662929, 29196503, 1295181, 3828755, 6362329, 1330646, 3864220, 6397794};
    vector<int> secondPicture = {28394, 60402, 63859, 95444, 97516, 98905, 2561968, 2593976, 2597433, 2629018, 2631090, 2632479, 5095542, 5127550, 5131007, 5162592, 5164664, 5166053, 7629116, 7661124, 7664581, 7696166, 7698238, 7699627, 8210628, 10194698, 10229740, 10231812, 12728272, 12763314, 12765386, 15261846, 15296888, 15298960, 17795420, 17830462, 20328994, 20364036, 22862568, 25396142, 27929716, 30463290, 32566621, 62788248, 64583922, 69770447, 89862845, 94595916, 95423376, 98886780};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 52776;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> firstPicture = {1585784, 4742096, 7898408, 11054720, 14211032, 1663393, 4819705, 7976017, 1651794, 4808106, 7964418, 11120730, 14277042, 17433354, 1681056, 4837368, 7993680, 1635252, 4791564, 7947876, 11104188, 14260500, 17416812, 20573124, 23729436, 1639825, 4796137, 7952449, 11108761, 14265073, 1667918, 4824230, 7980542, 11136854};
    vector<int> secondPicture = {7628, 57096, 61669, 73638, 85237, 89762, 102900, 3163940, 3213408, 3217981, 3229950, 3241549, 3246074, 3259212, 6320252, 6369720, 6374293, 6386262, 6397861, 6402386, 6415524, 9476564, 9526032, 9530605, 9542574, 9554173, 9558698, 9571836, 11921569, 12632876, 12682344, 12686917, 12698886, 12715010, 15789188, 15838656, 15843229, 15855198, 18994968, 19011510, 22151280, 25307592, 47757649, 75092163, 81703455, 82139055, 89565946, 96500183};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 181440;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> firstPicture = {566560, 1526008, 2485456, 562730, 1522178, 2481626, 3441074, 502510, 1461958, 2421406, 3380854, 533018, 1492466, 2451914, 3411362, 560831, 1520279, 2479727, 3439175, 4398623, 5358071, 6317519, 7276967, 8236415, 9195863, 481858, 1441306, 2400754, 3360202, 4319650, 5279098};
    vector<int> secondPicture = {2134, 22786, 53294, 81107, 83006, 86836, 177733, 961582, 982234, 1012742, 1040555, 1042454, 1046284, 1921030, 1941682, 1972190, 2000003, 2001902, 2005732, 2880478, 2901130, 2931638, 2959451, 2961350, 2965180, 3839926, 3860578, 3891086, 3918899, 3920798, 4799374, 4878347, 5758822, 5837795, 6797243, 7756691, 8716139, 9675587, 21497212, 23384560, 32688123, 42050779, 71030956};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 38500;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> firstPicture = {1804144, 5317028, 8829912, 12342796, 15855680, 19368564, 22881448, 26394332, 29907216, 33420100, 1831449, 5344333, 8857217, 12370101, 15882985, 19395869, 22908753, 26421637, 1803564, 5316448, 8829332, 12342216, 15855100, 19367984, 1807026, 5319910, 8832794, 12345678, 1835719, 5348603, 8861487, 12374371, 15887255, 19400139};
    vector<int> secondPicture = {47122, 47702, 50584, 75007, 79277, 1108707, 3372508, 3560006, 3560586, 3563468, 3587891, 3592161, 7072890, 7073470, 7076352, 7100775, 7105045, 10585774, 10586354, 10589236, 10613659, 10617929, 14098658, 14099238, 14102120, 14126543, 14130813, 17611542, 17612122, 17639427, 17643697, 17941372, 21124426, 21125006, 21152311, 21156581, 24637890, 24665195, 28150774, 28178079, 31663658, 35176542, 57204065, 59510446, 66098432, 66563175, 77586594, 78065681};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 24255;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> firstPicture = {1731117, 5037757, 8344397, 11651037, 14957677, 18264317, 1689328, 4995968, 8302608, 11609248, 14915888, 18222528, 1695279, 5001919, 8308559, 11615199, 14921839, 18228479, 1669011, 4975651, 8282291, 11588931, 14895571, 18202211, 1702589, 5009229, 8315869, 11622509, 14929149, 18235789};
    vector<int> secondPicture = {15691, 36008, 41959, 49269, 77797, 3322331, 3342648, 3348599, 3355909, 3384437, 3664226, 6628971, 6649288, 6655239, 6662549, 6691077, 9935611, 9955928, 9961879, 9969189, 9997717, 13242251, 13262568, 13268519, 13275829, 13304357, 13589250, 16548891, 16569208, 16575159, 16582469, 16610997, 19855531, 19875848, 19881799, 19889109, 19917637, 20319450, 22974976, 32744314, 36948096, 41281680, 45692733, 82040327, 87896657, 88960061, 90942681, 92811221, 92980723};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 17051;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> firstPicture = {1848497, 5437971, 9027445, 12616919, 16206393, 19795867, 1847632, 5437106, 9026580, 12616054, 16205528, 19795002, 1826203, 5415677, 9005151, 12594625, 16184099, 19773573, 23363047, 26952521, 30541995, 34131469, 1847459, 5436933, 9026407, 12615881, 16205355, 19794829, 1842718, 5432192, 9021666, 12611140, 16200614, 19790088};
    vector<int> secondPicture = {31466, 47981, 52722, 52895, 53760, 3620940, 3637455, 3642196, 3642369, 3643234, 7210414, 7226929, 7231670, 7231843, 7232708, 8375251, 10799888, 10816403, 10821144, 10821317, 10822182, 11174504, 14389362, 14405877, 14410618, 14410791, 14411656, 17978836, 17995351, 18000092, 18000265, 18001130, 21568310, 21584825, 21589566, 21589739, 21590604, 25157784, 28747258, 32336732, 35926206, 39421342, 87724482, 90688077};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 26411;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> firstPicture = {255193, 660827, 1066461, 1472095, 1877729, 2283363, 276894, 682528, 1088162, 1493796, 1899430, 2305064, 2710698, 3116332, 281614, 687248, 1092882, 1498516, 1904150, 2309784, 267532, 673166, 1078800, 1484434, 1890068, 2295702, 2701336, 3106970, 3512604, 3918238, 284221, 689855};
    vector<int> secondPicture = {52376, 64715, 74077, 78797, 81404, 458010, 470349, 479711, 484431, 487038, 863644, 875983, 885345, 890065, 892672, 1269278, 1281617, 1290979, 1295699, 1674912, 1687251, 1696613, 1701333, 2080546, 2092885, 2102247, 2106967, 2486180, 2498519, 2507881, 2512601, 2904153, 2913515, 3309787, 3319149, 3715421, 4121055, 59995286, 62521437, 87425480, 88131618};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14553;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> firstPicture = {1408316, 4161040, 6913764, 9666488, 12419212, 15171936, 1441390, 4194114, 1466119, 4218843, 6971567, 9724291, 12477015, 15229739, 1450428, 4203152, 6955876, 9708600, 12461324, 15214048, 1410328, 4163052, 6915776, 9668500, 12421224, 15173948, 17926672, 20679396, 23432120, 26184844, 1409897, 4162621};
    vector<int> secondPicture = {31954, 33535, 33966, 65028, 74066, 89757, 2784678, 2786259, 2786690, 2817752, 2826790, 2842481, 5537402, 5538983, 5539414, 5570476, 5579514, 5595205, 8290126, 8292138, 8332238, 8347929, 11042850, 11044862, 11084962, 11100653, 13795574, 13797586, 13837686, 13853377, 16548298, 16550310, 16590410, 16606101, 19053557, 19303034, 22055758, 24808482, 27561206};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 33957;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> firstPicture = {1036395, 2952593, 4868791, 6784989, 8701187, 10617385, 12533583, 14449781, 16365979, 18282177, 992005, 2908203, 4824401, 6740599, 8656797, 10572995, 1018906, 2935104, 982092, 2898290, 4814488, 6730686, 8646884, 10563082, 12479280, 14395478, 976003, 2892201, 982982, 2899180};
    vector<int> secondPicture = {17904, 23993, 24883, 33906, 60807, 78296, 1934102, 1940191, 1941081, 1950104, 1977005, 1994494, 2460962, 3850300, 3856389, 3857279, 3866302, 3893203, 3910692, 5772587, 5782500, 5826890, 7627568, 7688785, 7698698, 7743088, 9604983, 9614896, 9659286, 11521181, 11531094, 11575484, 13437379, 13491682, 15353577, 15407880, 17324078, 19240276, 21251300, 32853588, 37775104, 39333367, 43269656, 46567243, 48302546, 65558513, 67924373, 71321362, 87119327};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 18711;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> firstPicture = {1500968, 4421954, 7342940, 10263926, 13184912, 16105898, 1547552, 4468538, 1538682, 4459668, 1541312, 4462298, 7383284, 10304270, 13225256, 16146242, 19067228, 1573279, 4494265, 1538235, 4459221, 7380207, 1572840, 4493826, 7414812, 10335798, 1468257, 4389243, 7310229, 10231215, 13152201, 1513505, 4434491, 1475022, 4396008};
    vector<int> secondPicture = {7764, 14529, 40475, 53012, 77742, 78189, 80819, 87059, 112347, 112786, 2928750, 2935515, 2961461, 2973998, 2998728, 2999175, 3001805, 3008045, 3033333, 3033772, 5849736, 5856501, 5882447, 5894984, 5919714, 5920161, 5922791, 5929031, 5954319, 5954758, 8770722, 8803433, 8840700, 8843777, 8875305, 11691708, 11724419, 11764763, 11796291, 14612694, 14645405, 14685749, 17566391, 17606735, 20527721, 37071364, 48462417, 78043716};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1632960;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> firstPicture = {1862525, 5579545, 9296565, 13013585, 1925088, 5642108, 9359128, 13076148, 16793168, 20510188, 1859645, 5576665, 9293685, 13010705, 1968512, 5685532, 9402552, 13119572, 16836592, 1966711, 5683731, 9400751, 13117771, 1870396, 5587416, 9304436, 1948687, 5665707, 9382727, 13099747, 1863126, 5580146, 9297166, 1937933, 5654953};
    vector<int> secondPicture = {1135, 4015, 4616, 11886, 66578, 79423, 90177, 108201, 110002, 3718155, 3721035, 3721636, 3728906, 3783598, 3796443, 3807197, 3825221, 3827022, 7435175, 7438055, 7438656, 7445926, 7500618, 7513463, 7524217, 7542241, 7544042, 11152195, 11155075, 11155676, 11162946, 11217638, 11241237, 11259261, 11261062, 14869215, 14872095, 14934658, 14958257, 14976281, 14978082, 18651678, 18695102, 22368698};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1260000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> firstPicture = {1659360, 4883650, 8107940, 1641325, 4865615, 1619970, 4844260, 8068550, 1618054, 4842344, 8066634, 11290924, 1672619, 4896909, 8121199, 11345489, 14569779, 17794069, 21018359, 24242649, 27466939, 30691229, 33915519, 37139809, 1643024, 4867314, 1666255, 4890545, 1619251, 4843541, 1694949, 4919239, 1673371, 4897661, 8121951};
    vector<int> secondPicture = {5909, 7106, 7825, 29180, 30879, 47215, 54110, 60474, 61226, 82804, 3230199, 3231396, 3232115, 3253470, 3255169, 3271505, 3278400, 3284764, 3285516, 3307094, 6454489, 6455686, 6456405, 6477760, 6479459, 6495795, 6502690, 6509054, 6509806, 6531384, 9678779, 9680695, 9720085, 9733344, 9734096, 12903069, 12957634, 16181924, 19406214, 22630504, 25854794, 29079084, 32303374, 33581258, 35527664, 38751954, 41293804};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1010880;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> firstPicture = {624714, 1724094, 597461, 1696841, 2796221, 3895601, 4994981, 6094361, 7193741, 660550, 1759930, 2859310, 3958690, 603910, 1703290, 638358, 1737738, 642574, 1741954, 609824, 1709204, 2808584, 3907964, 5007344, 6106724, 7206104, 8305484, 550627, 1650007, 2749387, 568703, 1668083, 2767463, 632488, 1731868};
    vector<int> secondPicture = {937, 19013, 47771, 54220, 60134, 75024, 82798, 88668, 92884, 110860, 1100317, 1118393, 1147151, 1153600, 1159514, 1174404, 1182178, 1188048, 1192264, 1210240, 2199697, 2217773, 2246531, 2252980, 2258894, 2273784, 2281558, 2287428, 2291644, 2309620, 3299077, 3317153, 3345911, 3358274, 3409000, 4445291, 4457654, 4508380, 5544671, 5557034, 6644051, 6656414, 7743431, 7755794, 8071321, 8855174, 36813075};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1399680;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> firstPicture = {1876727, 5488377, 1824021, 5435671, 9047321, 1919428, 5531078, 1897734, 5509384, 9121034, 12732684, 16344334, 19955984, 1822864, 5434514, 9046164, 12657814, 16269464, 1836458, 5448108, 9059758, 12671408, 16283058, 19894708, 23506358, 27118008, 1860942, 5472592, 1847097, 5458747, 1845845, 5457495, 9069145, 1807614, 5419264};
    vector<int> secondPicture = {1789, 17039, 18196, 30633, 40020, 41272, 55117, 70902, 91909, 113603, 3613439, 3628689, 3629846, 3642283, 3651670, 3652922, 3666767, 3682552, 3703559, 3725253, 7225089, 7240339, 7241496, 7253933, 7263320, 7264572, 7278417, 7294202, 7315209, 7336903, 10851989, 10853146, 10865583, 10874970, 10926859, 14463639, 14477233, 14538509, 18075289, 18088883, 18150159, 21700533, 21761809, 25312183, 28923833, 78866363, 92977819};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1469736;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> firstPicture = {1906537, 5562301, 9218065, 1899557, 5555321, 1850922, 5506686, 1845075, 5500839, 9156603, 12812367, 16468131, 20123895, 23779659, 27435423, 1901910, 5557674, 9213438, 12869202, 16524966, 1921093, 5576857, 9232621, 12888385, 1913700, 5569464, 1927411, 5583175, 1903308, 5559072, 9214836, 12870600, 16526364, 20182128, 23837892, 1852795, 5508559, 9164323};
    vector<int> secondPicture = {17193, 23040, 24913, 71675, 74028, 75426, 78655, 85818, 93211, 99529, 3672957, 3678804, 3680677, 3727439, 3729792, 3731190, 3734419, 3741582, 3748975, 3755293, 7328721, 7334568, 7336441, 7383203, 7385556, 7386954, 7390183, 7397346, 7404739, 7411057, 10984485, 10992205, 11041320, 11042718, 11045947, 11060503, 14640249, 14697084, 14698482, 14716267, 18296013, 18352848, 18354246, 21951777, 22010010, 25607541, 25665774, 26452489, 28913830, 29263305};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2799360;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> firstPicture = {1039679, 2897209, 4754739, 6612269, 8469799, 10327329, 12184859, 1042311, 2899841, 4757371, 6614901, 8472431, 958664, 2816194, 1033320, 2890850, 4748380, 1041931, 2899461, 1037448, 2894978, 4752508, 6610038, 8467568, 10325098, 12182628, 14040158, 15897688, 17755218, 1029090, 2886620, 4744150, 6601680, 8459210, 10316740, 979211, 2836741, 4694271, 952104, 2809634};
    vector<int> secondPicture = {23339, 29899, 50446, 100325, 104555, 108683, 110914, 113166, 113546, 1880869, 1887429, 1907976, 1957855, 1962085, 1966213, 1968444, 1970696, 1971076, 3738399, 3744959, 3765506, 3815385, 3819615, 3823743, 3825974, 3828226, 3828606, 5623036, 5672915, 5677145, 5681273, 5683504, 5686136, 7530445, 7538803, 7541034, 7543666, 9387975, 9396333, 9398564, 9401196, 11245505, 11253863, 11256094, 13111393, 13113624, 14968923, 16826453, 18683983, 56119730};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1596672;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> firstPicture = {1422145, 4040979, 1358170, 3977004, 6595838, 1422042, 4040876, 6659710, 9278544, 1340504, 3959338, 6578172, 9197006, 11815840, 14434674, 1319036, 3937870, 6556704, 9175538, 11794372, 14413206, 17032040, 19650874, 22269708, 1386968, 4005802, 6624636, 1357483, 3976317, 6595151, 9213985, 11832819, 14451653, 17070487, 1410260, 4029094, 1363739, 3982573, 6601407, 1358834, 3977668};
    vector<int> secondPicture = {9619, 31087, 48066, 48753, 49417, 54322, 77551, 100843, 112625, 112728, 2628453, 2649921, 2666900, 2667587, 2668251, 2673156, 2696385, 2719677, 2731459, 2731562, 5247287, 5268755, 5285734, 5286421, 5291990, 5315219, 5338511, 5350293, 5350396, 7866121, 7887589, 7904568, 7905255, 7910824, 7934053, 7969127, 10484955, 10506423, 10523402, 10587961, 13103789, 13125257, 13142236, 15722623, 15744091, 15761070, 18341457, 18379904, 20960291, 23579125};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1612800;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> firstPicture = {1149052, 3269716, 5390380, 7511044, 9631708, 1105767, 3226431, 5347095, 7467759, 1164116, 3284780, 5405444, 7526108, 1087856, 3208520, 5329184, 7449848, 9570512, 1116541, 3237205, 5357869, 7478533, 9599197, 11719861, 1137924, 3258588, 5379252, 7499916, 1068570, 3189234, 5309898, 7430562, 9551226, 1149674, 3270338, 5391002, 1142027, 3262691, 5383355, 7504019};
    vector<int> secondPicture = {8238, 27524, 45435, 56209, 77592, 81695, 88720, 89342, 103784, 2128902, 2148188, 2166099, 2176873, 2198256, 2202359, 2209384, 2210006, 2224448, 4249566, 4268852, 4286763, 4297537, 4318920, 4323023, 4330048, 4330670, 4345112, 6370230, 6389516, 6407427, 6418201, 6439584, 6443687, 6450712, 6451334, 6465776, 8490894, 8510180, 8528091, 8538865, 8560248, 8564351, 8571376, 8586440, 10611558, 10630844, 10659529, 10692040, 12780193, 26835732};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3780000;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> firstPicture = {1925256, 5550536, 9175816, 12801096, 16426376, 1842851, 5468131, 9093411, 12718691, 16343971, 19969251, 1874464, 5499744, 9125024, 12750304, 16375584, 1823360, 5448640, 1854298, 5479578, 9104858, 12730138, 16355418, 19980698, 23605978, 1891380, 5516660, 9141940, 1824690, 5449970, 1851226, 5476506, 9101786, 12727066, 16352346, 1901024, 5526304, 9151584};
    vector<int> secondPicture = {10720, 12050, 30211, 38586, 41658, 61824, 78740, 88384, 112616, 3636000, 3637330, 3655491, 3663866, 3666938, 3687104, 3704020, 3713664, 3737896, 7261280, 7262610, 7280771, 7289146, 7292218, 7312384, 7329300, 7338944, 7363176, 10906051, 10914426, 10917498, 10937664, 10954580, 10964224, 10988456, 14531331, 14539706, 14542778, 14562944, 14613736, 18156611, 18164986, 18168058, 18188224, 18239016, 21781891, 21793338, 25418618};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1741824;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> firstPicture = {1707677, 4913569, 8119461, 11325353, 14531245, 17737137, 20943029, 24148921, 27354813, 30560705, 1689522, 4895414, 1621545, 4827437, 8033329, 11239221, 14445113, 17651005, 1692321, 4898213, 8104105, 11309997, 14515889, 17721781, 1658950, 4864842, 1697691, 4903583, 8109475, 11315367, 14521259, 17727151, 20933043, 24138935, 27344827, 30550719, 1611305, 4817197};
    vector<int> secondPicture = {8359, 18599, 56004, 86576, 89375, 94745, 104731, 3214251, 3224491, 3261896, 3292468, 3295267, 3300637, 3310623, 4521665, 6420143, 6430383, 6467788, 6498360, 6501159, 6506529, 6516515, 9636275, 9707051, 9712421, 9722407, 12842167, 12912943, 12918313, 12928299, 16048059, 16118835, 16124205, 16134191, 19253951, 19324727, 19330097, 19340083, 22535989, 22545975, 25741881, 25751867, 28947773, 28957759, 32153665, 32163651};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 160083;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> firstPicture = {1789967, 5144131, 1680556, 5034720, 8388884, 11743048, 15097212, 18451376, 21805540, 25159704, 1781440, 5135604, 8489768, 11843932, 15198096, 18552260, 21906424, 25260588, 1726901, 5081065, 8435229, 11789393, 15143557, 18497721, 21851885, 25206049, 28560213, 31914377, 1745443, 5099607, 8453771, 11807935, 15162099, 18516263, 1726179, 5080343, 8434507, 11788671, 1773732, 5127896, 8482060, 11836224};
    vector<int> secondPicture = {3474, 49097, 49819, 68361, 96650, 104358, 112885, 3357638, 3403261, 3403983, 3422525, 3450814, 3458522, 3467049, 6711802, 6757425, 6758147, 6776689, 6804978, 6812686, 6821213, 10065966, 10111589, 10112311, 10130853, 10159142, 10166850, 13420130, 13465753, 13466475, 13485017, 13513306, 13521014, 16774294, 16820639, 16839181, 16875178, 20128458, 20174803, 20193345, 20229342, 23482622, 23528967, 23583506, 26836786, 26883131, 26937670, 30237295, 33591459, 44003764};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 467775;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> firstPicture = {6, 2, 4};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 7, 8};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> firstPicture = {10, 25, 9, 40, 34, 35, 36, 37, 26, 27, 28, 29, 30, 31, 32, 33, 15, 16, 17, 18, 20, 21, 22, 23, 24, 8, 38, 39, 12, 13, 14, 41, 42};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 19328170;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> firstPicture = {10, 11, 25, 9, 40, 34, 35, 36, 37, 26, 27, 28, 29, 30, 31, 32, 33, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 8, 38, 39, 12, 13, 14, 41};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 139948249;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> firstPicture = {41, 10, 11, 25, 9, 40, 34, 35, 36, 37, 26, 27, 28, 29, 30, 31, 32, 33, 15, 16, 17, 18, 19, 21, 22, 23, 24, 38, 39, 12, 13, 14};
    vector<int> secondPicture = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 45338387;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> firstPicture = {0, 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 26, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 20823;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> firstPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> firstPicture = {557943, 1511235, 2464527, 3417819, 4371111, 5324403, 6277695, 7230987, 8184279, 9137571, 10090863, 11044155, 11997447, 12950739, 13904031, 14857323, 15810615, 16763907, 17717199, 18670491, 19623783, 20577075, 21530367, 22483659, 23436951, 24390243, 25343535, 26296827, 27250119, 28203411, 29156703, 30109995, 31063287, 32016579, 32969871, 33923163, 34876455, 35829747, 36783039, 37736331, 38689623, 39642915, 40596207, 41549499, 42502791, 43456083, 44409375, 45362667, 46315959, 47269251};
    vector<int> secondPicture = {81297, 1034589, 1987881, 2941173, 3894465, 4847757, 5801049, 6754341, 7707633, 8660925, 9614217, 10567509, 11520801, 12474093, 13427385, 14380677, 15333969, 16287261, 17240553, 18193845, 19147137, 20100429, 21053721, 22007013, 22960305, 23913597, 24866889, 25820181, 26773473, 27726765, 28680057, 29633349, 30586641, 31539933, 32493225, 33446517, 34399809, 35353101, 36306393, 37259685, 38212977, 39166269, 40119561, 41072853, 42026145, 42979437, 43932729, 44886021, 45839313, 46792605};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> firstPicture = {0, 1, 2, 3, 4, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 53, 54};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> firstPicture = {597, 439, 267, 882, 755, 653, 445, 225, 219, 582, 820, 711, 953, 249, 741, 743, 317, 420, 23, 496, 688, 549, 821, 426, 768, 930, 917, 314, 991, 851, 291, 678, 90, 114, 197, 99, 238, 574, 396, 175, 902, 452, 651, 115, 973, 62, 57, 656, 536, 236};
    vector<int> secondPicture = {14, 35, 42, 65, 111, 122, 125, 154, 172, 191, 231, 234, 238, 257, 269, 279, 313, 317, 335, 349, 356, 365, 368, 381, 412, 423, 429, 438, 458, 518, 525, 577, 595, 627, 652, 660, 678, 701, 715, 739, 763, 780, 840, 843, 892, 896, 903, 911, 957, 972};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> firstPicture = {959877, 2791965, 4624053, 6456141, 8288229, 10120317, 11952405, 13784493, 15616581, 17448669, 19280757, 21112845, 22944933, 24777021, 26609109, 28441197, 1023147, 2855235, 4687323, 6519411, 8351499, 10183587, 12015675, 13847763, 15679851, 17511939, 19344027, 21176115, 927777, 2759865, 4591953, 6424041, 8256129, 10088217, 11920305, 13752393, 15584481, 17416569, 19248657, 21080745, 22912833, 24744921, 26577009, 28409097, 30241185, 32073273};
    vector<int> secondPicture = {11733, 43833, 107103, 1843821, 1875921, 1939191, 3675909, 3708009, 3771279, 5507997, 5540097, 5603367, 7340085, 7372185, 7435455, 9172173, 9204273, 9267543, 11004261, 11036361, 11099631, 12836349, 12868449, 12931719, 14668437, 14700537, 14763807, 16500525, 16532625, 16595895, 18332613, 18364713, 18427983, 20164701, 20196801, 20260071, 21996789, 22028889, 22092159, 23828877, 23860977, 25660965, 25693065, 27493053, 27525153, 29325141, 29357241, 31157229, 32989317};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4199;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> firstPicture = {44403, 128735, 213067, 297399, 381731, 466063, 550395, 634727, 719059, 803391, 887723, 972055, 1056387, 1140719, 1225051, 1309383, 1393715, 1478047, 1562379, 1646711, 1731043, 1815375, 1899707, 1984039, 2068371, 2152703, 2237035, 2321367, 2405699, 2490031, 2574363, 2658695, 2743027, 2827359, 2911691, 2996023, 3080355, 3164687, 3249019, 3333351, 3417683, 3502015, 3586347, 3670679, 3755011, 3839343, 3923675, 4008007, 4092339};
    vector<int> secondPicture = {2237, 86569, 170901, 255233, 339565, 423897, 508229, 592561, 676893, 761225, 845557, 929889, 1014221, 1098553, 1182885, 1267217, 1351549, 1435881, 1520213, 1604545, 1688877, 1773209, 1857541, 1941873, 2026205, 2110537, 2194869, 2279201, 2363533, 2447865, 2532197, 2616529, 2700861, 2785193, 2869525, 2953857, 3038189, 3122521, 3206853, 3291185, 3375517, 3459849, 3544181, 3628513, 3712845, 3797177, 3881509, 3965841, 4050173, 4134505};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 72;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> firstPicture = {573238, 1632388, 2691538, 3750688, 4809838, 5868988, 6928138, 7987288, 9046438, 10105588, 11164738, 12223888, 13283038, 14342188, 15401338, 16460488, 17519638, 18578788, 19637938, 20697088, 21756238, 22815388, 23874538, 24933688, 25992838, 27051988, 28111138, 29170288, 30229438, 31288588, 32347738, 33406888, 34466038, 35525188, 36584338, 37643488, 38702638, 596307, 1655457, 2714607, 3773757, 4832907, 5892057, 6951207, 8010357, 9069507, 10128657, 11187807, 12246957};
    vector<int> secondPicture = {43663, 66732, 1102813, 1125882, 2161963, 2185032, 3221113, 3244182, 4280263, 4303332, 5339413, 5362482, 6398563, 6421632, 7457713, 7480782, 8516863, 8539932, 9576013, 9599082, 10635163, 10658232, 11694313, 11717382, 12753463, 13812613, 14871763, 15930913, 16990063, 18049213, 19108363, 20167513, 21226663, 22285813, 23344963, 24404113, 25463263, 26522413, 27581563, 28640713, 29699863, 30759013, 31818163, 32877313, 33936463, 34995613, 36054763, 37113913, 38173063, 39232213};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> firstPicture = {482733, 1448027, 2413321, 3378615, 4343909, 5309203, 6274497, 7239791, 8205085, 9170379, 10135673, 11100967, 12066261, 13031555, 13996849, 14962143, 15927437, 16892731, 17858025, 18823319, 19788613, 20753907, 21719201, 22684495, 23649789, 24615083, 25580377, 26545671, 27510965, 28476259, 29441553, 30406847, 31372141, 32337435, 33302729, 34268023, 35233317, 36198611, 37163905, 38129199, 39094493, 40059787, 41025081, 41990375, 42955669, 43920963, 561133, 1526427, 2491721};
    vector<int> secondPicture = {86, 78486, 965380, 1043780, 1930674, 2009074, 2895968, 3861262, 4826556, 5791850, 6757144, 7722438, 8687732, 9653026, 10618320, 11583614, 12548908, 13514202, 14479496, 15444790, 16410084, 17375378, 18340672, 19305966, 20271260, 21236554, 22201848, 23167142, 24132436, 25097730, 26063024, 27028318, 27993612, 28958906, 29924200, 30889494, 31854788, 32820082, 33785376, 34750670, 35715964, 36681258, 37646552, 38611846, 39577140, 40542434, 41507728, 42473022, 43438316, 44403610};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 47;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> firstPicture = {259351, 561783, 864215, 1166647, 1469079, 1771511, 2073943, 2376375, 2678807, 2981239, 3283671, 3586103, 3888535, 4190967, 4493399, 4795831, 5098263, 5400695, 5703127, 6005559, 6307991, 6610423, 6912855, 7215287, 7517719, 7820151, 8122583, 8425015, 8727447, 9029879, 9332311, 9634743, 9937175, 10239607, 10542039, 10844471, 11146903, 11449335, 11751767, 12054199, 12356631, 12659063, 12961495, 13263927, 13566359, 13868791, 14171223, 190831, 493263};
    vector<int> secondPicture = {39615, 108135, 342047, 410567, 712999, 1015431, 1317863, 1620295, 1922727, 2225159, 2527591, 2830023, 3132455, 3434887, 3737319, 4039751, 4342183, 4644615, 4947047, 5249479, 5551911, 5854343, 6156775, 6459207, 6761639, 7064071, 7366503, 7668935, 7971367, 8273799, 8576231, 8878663, 9181095, 9483527, 9785959, 10088391, 10390823, 10693255, 10995687, 11298119, 11600551, 11902983, 12205415, 12507847, 12810279, 13112711, 13415143, 13717575, 14020007, 14322439};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> firstPicture = {1410027, 4109253, 1436437, 4135663, 1380490, 4079716, 1452714, 4151940, 1441379, 4140605, 1450790, 4150016, 1451524, 4150750, 1432762, 4131988, 1386561, 4085787, 1460034, 4159260, 1396090, 4095316, 1455028, 4154254, 1414657, 4113883, 1453799, 4153025, 1436170, 4135396, 1352123, 4051349, 1442541};
    vector<int> secondPicture = {2510, 30877, 36948, 46477, 60414, 65044, 83149, 86557, 86824, 91766, 92928, 101177, 101911, 103101, 104186, 105415, 110421, 2701736, 2730103, 2736174, 2745703, 2759640, 2764270, 2782375, 2785783, 2786050, 2790992, 2792154, 2800403, 2801137, 2802327, 2803412, 2804641, 2809647, 5400962, 5429329, 5435400, 5444929, 5458866, 5463496, 5481601, 5485009, 5485276, 5490218, 5499629, 5500363, 5501553, 5502638, 5503867, 5508873};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 86093442;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> firstPicture = {1, 3, 6, 8, 11, 13, 16, 18, 21, 23, 26, 28, 31, 33, 36, 38, 41, 43, 46, 48, 51, 53, 56, 58, 61, 63, 66, 68, 71, 73, 76, 78, 81};
    vector<int> secondPicture = {0, 2, 4, 5, 7, 9, 10, 12, 14, 15, 17, 19, 20, 22, 24, 25, 27, 29, 30, 32, 34, 35, 37, 39, 40, 42, 44, 45, 47, 49, 50, 52, 54, 55, 57, 59, 60, 62, 64, 65, 67, 69, 70, 72, 74, 75, 77, 79, 80, 82};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 97274344;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> firstPicture = {12, 11};
    vector<int> secondPicture = {10, 11, 13};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> firstPicture = {1, 2, 3};
    vector<int> secondPicture = {1, 2, 3};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> firstPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> firstPicture = {2024, 2026, 2028, 2030, 2032, 2034, 2036, 2038, 2040, 2042, 2044, 2046, 2048, 2050, 2052, 2054, 2056, 2058, 2060, 2062, 2064, 2066, 2068, 2070, 2072};
    vector<int> secondPicture = {2001, 2003, 2005, 2007, 2009, 2011, 2013, 2015, 2017, 2019, 2021, 2023, 2025, 2027, 2029, 2031, 2033, 2035, 2037, 2039, 2041, 2043, 2045, 2047, 2049, 2051, 2053, 2055, 2057, 2059, 2061, 2063, 2065, 2067, 2069, 2071, 2073, 2075, 2077, 2079, 2081, 2083, 2085, 2087, 2089, 2091, 2093, 2095, 2097, 2099};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 70352848;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> firstPicture = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 66, 69, 72, 75};
    vector<int> secondPicture = {2, 4, 5, 7, 8, 10, 11, 13, 14, 16, 17, 19, 20, 22, 23, 25, 26, 28, 29, 31, 32, 34, 35, 37, 38, 40, 41, 43, 44, 46, 47, 49, 50, 52, 53, 55, 56, 58, 59, 61, 62, 64, 65, 67, 68, 70, 71, 73, 74, 76};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> firstPicture = {20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54};
    vector<int> secondPicture = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 89833399;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> firstPicture = {30, 44, 29, 43, 48, 38, 45, 42, 8, 33, 9, 24, 5, 36, 6, 7, 4, 23, 50, 37, 12, 3, 11, 17, 13, 20, 15, 19, 14, 26, 47, 27, 35, 10, 32, 16, 1, 34, 46, 40, 2, 39, 18, 49, 25, 31, 22, 28, 41, 21};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> firstPicture = {501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525};
    vector<int> secondPicture = {490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 532, 533, 534, 535};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 23555909;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> firstPicture = {21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 52564;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> firstPicture = {1, 11, 21, 31, 41, 51, 61, 71, 81, 91, 101, 111, 121, 131, 141, 151, 161, 171, 181, 191, 201, 211, 221, 231, 233};
    vector<int> secondPicture = {0, 2, 10, 12, 20, 22, 30, 32, 40, 42, 50, 52, 60, 62, 70, 72, 80, 82, 90, 92, 100, 102, 110, 112, 120, 122, 130, 132, 140, 142, 150, 152, 160, 162, 170, 172, 180, 182, 190, 192, 200, 202, 210, 212, 220, 222, 230, 232, 234};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 27961857;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> firstPicture = {6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14068609;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> firstPicture = {1, 3, 5, 9, 11, 13, 17, 19, 21, 25, 27, 29, 33, 35, 37, 41, 43, 45, 49, 51, 53, 57, 59, 61, 65, 67, 69, 73, 75, 77, 81, 83, 85, 89, 91, 93, 101, 103};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 100, 102};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 17174016;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> firstPicture = {2, 10, 12, 14, 16, 31, 41, 51, 61, 71, 81, 91, 101, 111, 121, 131, 141, 151, 161, 171, 181, 191, 201, 99999999};
    vector<int> secondPicture = {1, 3, 9, 11, 13, 15, 17, 30, 32, 40, 42, 50, 52, 60, 62, 70, 72, 80, 82, 90, 92, 100, 102, 110, 112, 120, 122, 130, 132, 140, 142, 150, 152, 160, 162, 170, 172, 180, 182, 190, 192, 200, 202, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2621440;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> firstPicture = {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130};
    vector<int> secondPicture = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14171;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> firstPicture = {25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> secondPicture = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 79130437;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> firstPicture = {1};
    vector<int> secondPicture = {1, 2, 3};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> firstPicture = {6, 15, 24, 33, 42, 51, 60, 69, 78, 87, 96, 105, 114, 123, 132, 141, 150, 159, 168, 177, 186, 195, 204, 213, 222};
    vector<int> secondPicture = {3, 9, 12, 18, 21, 27, 30, 36, 39, 45, 48, 54, 57, 63, 66, 72, 75, 81, 84, 90, 93, 99, 102, 108, 111, 117, 120, 126, 129, 135, 138, 144, 147, 153, 156, 162, 165, 171, 174, 180, 183, 189, 192, 198, 201, 207, 210, 216, 219, 225};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> firstPicture = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 24, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 45, 46, 47, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 645813;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> firstPicture = {5, 6, 7, 8, 9};
    vector<int> secondPicture = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 57;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> firstPicture = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 79130437;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> firstPicture = {32, 18, 27, 28, 19, 24, 17, 20, 29, 21, 22, 16, 30, 26, 25, 31, 23, 33, 34, 35, 36, 37, 38, 39};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 37235945;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> firstPicture = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75};
    vector<int> secondPicture = {39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 56992465;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> firstPicture = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 142151321;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> firstPicture = {4, 8, 10, 12, 16, 20, 22, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64, 66, 68, 72, 76, 80, 84, 88, 92, 96, 100, 1};
    vector<int> secondPicture = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99, 101};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> firstPicture = {13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 79130437;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> firstPicture = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
    vector<int> secondPicture = {4, 14, 16, 24, 26, 34, 36, 44, 46, 54, 56, 64, 66, 74, 76, 84, 86, 94, 96, 104, 106, 114, 116, 124, 126, 134, 136, 144, 146, 154, 156, 164, 166, 174, 176, 184, 186, 194, 196, 204, 206, 214, 216, 224, 226, 234, 236, 244, 246};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 33554431;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> firstPicture = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 30};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1774801;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> firstPicture = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 90, 94, 98};
    vector<int> secondPicture = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> firstPicture = {40000000, 40000001, 40000002, 40000003, 40000004, 40000005, 40000006, 40000007, 40000008, 40000009, 40000010, 40000011, 40000012, 40000013, 40000014, 40000015, 40000016, 40000017, 40000018, 40000019, 40000020, 40000021, 40000022, 40000023, 40000024};
    vector<int> secondPicture = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 80000000, 80000001, 80000002, 80000003, 80000004, 80000005, 80000006, 80000007, 80000008, 80000009, 80000010, 80000011, 80000012, 80000013, 80000014, 80000015, 80000016, 80000017, 80000018, 80000019, 80000020, 80000021, 80000022, 80000023, 80000024};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> firstPicture = {1};
    vector<int> secondPicture = {1, 2};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> firstPicture = {3, 5, 13, 15, 23, 25, 33, 35, 43, 45, 53, 55, 63, 65, 73, 75, 83, 85, 93, 95, 103, 105, 113, 115, 123, 125, 133, 135, 143, 145, 153, 155, 163};
    vector<int> secondPicture = {2, 4, 6, 12, 14, 16, 22, 24, 26, 32, 34, 36, 42, 44, 46, 52, 54, 56, 62, 64, 66, 72, 74, 76, 82, 84, 86, 92, 94, 96, 102, 104, 106, 112, 114, 116, 122, 124, 126, 132, 134, 136, 142, 144, 146, 152, 154, 156, 162, 164};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 97274344;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> firstPicture = {1, 3, 5, 11, 13, 15, 21, 23, 25, 31, 33, 35, 41, 43, 45, 51, 53, 55, 61, 63, 65, 71, 73, 75, 81, 83, 85, 91, 93, 95, 101, 103, 105, 111, 113, 115};
    vector<int> secondPicture = {0, 2, 4, 6, 10, 12, 14, 16, 20, 22, 24, 26, 30, 32, 34, 36, 40, 42, 44, 46, 50, 52, 54, 56, 60, 62, 64, 66, 70, 72, 74, 76, 80, 82, 84, 86, 90, 92, 94, 96, 100, 102, 104, 106, 110, 112, 114, 116};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 17078946;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> firstPicture = {1, 3, 7, 9, 13, 15, 19, 21, 25, 27, 31, 33, 37, 39, 43, 45, 49, 51, 55, 57, 61, 63, 67, 69, 73, 75, 79, 81, 85, 87, 91, 93};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 60936184;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> firstPicture = {28, 26, 41};
    vector<int> secondPicture = {0, 2, 5, 6, 7, 8, 9, 11, 14, 17, 20, 21, 27, 31, 32, 35, 37, 39, 40, 44, 46, 48, 51, 52, 53, 54, 55, 57, 61, 62, 66, 68, 69, 70, 71, 73, 74, 75, 79, 81, 90, 91, 92, 97, 98};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> firstPicture = {3, 5, 13, 15, 23, 25, 33, 35, 43, 45, 53, 55, 63, 65, 73, 75, 83, 85, 93, 95, 103, 105, 113, 115, 123, 125, 133, 135, 143, 145, 153, 155, 163};
    vector<int> secondPicture = {1, 4, 6, 12, 14, 16, 22, 24, 26, 32, 34, 36, 42, 44, 46, 52, 54, 56, 62, 64, 66, 72, 74, 76, 82, 84, 86, 92, 94, 96, 102, 104, 106, 112, 114, 116, 122, 124, 126, 132, 134, 136, 142, 144, 146, 152, 154, 156, 162, 164};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 36896971;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> firstPicture = {2, 4, 6, 8};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> firstPicture = {40, 43, 34, 22, 50};
    vector<int> secondPicture = {1, 2, 3, 5, 8, 9, 10, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 22, 23, 25, 26, 28, 29, 31, 32, 33, 34, 35, 36, 37, 38, 39, 41, 44, 45, 46, 47, 48, 49, 50, 51, 52, 54, 55, 56, 58, 59, 60, 61, 62};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 179;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> firstPicture = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124};
    vector<int> secondPicture = {88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 60304617;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> firstPicture = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74};
    vector<int> secondPicture = {1, 3, 4, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49, 51, 52, 54, 55, 57, 58, 60, 61, 63, 64, 66, 67, 69, 70, 72, 73, 75};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> firstPicture = {30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66};
    vector<int> secondPicture = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 4227606;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> firstPicture = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 39146836;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> firstPicture = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 134452855;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> firstPicture = {1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 65, 69, 73, 77, 81, 85, 89, 93, 97};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> firstPicture = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000};
    vector<int> secondPicture = {999, 1001, 1999, 2001, 2999, 3001, 3999, 4001, 4999, 5001, 5999, 6001, 6999, 7001, 7999, 8001, 8999, 9001, 9999, 10001, 10999, 11001, 11999, 12001, 12999, 13001, 13999, 14001, 14999, 15001, 15999, 16001, 16999, 17001, 17999, 18001, 18999, 19001, 19999, 20001, 20999, 21001, 21999, 22001, 22999, 23001, 23999, 24001, 24999, 25001};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> firstPicture = {2, 4};
    vector<int> secondPicture = {1, 3, 5, 7};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> firstPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> firstPicture = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    vector<int> secondPicture = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> firstPicture = {9, 7, 5, 11, 100, 100000000, 1000001, 1000002, 1000003, 1000004, 1000005, 19, 17, 15, 11000000, 11000001, 11000002, 11000003, 11000004, 11000005, 60, 61, 62, 63, 69, 68, 67};
    vector<int> secondPicture = {4, 6, 8, 10, 12, 14, 16, 18, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 99, 101, 102, 103, 110, 145120, 1000000, 1000001, 1000002, 1000003, 1000004, 1000005, 1000006, 1000007, 1000008, 11000000, 11000001, 11000002, 11000003, 11000004, 11000005, 11000006, 11000007, 11000008, 99999999, 100000000};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 8640;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> firstPicture = {1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34, 37, 40, 43, 46, 49, 52, 55, 58, 61, 64, 67, 70, 73};
    vector<int> secondPicture = {0, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 17, 18, 20, 21, 23, 24, 26, 27, 29, 30, 32, 33, 35, 36, 38, 39, 41, 42, 44, 45, 47, 48, 50, 51, 53, 54, 56, 57, 59, 60, 62, 63, 65, 66, 68, 69, 71, 72, 74};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> firstPicture = {2, 12, 22, 32, 42, 52, 62, 72, 82, 92, 102, 112, 122, 132, 142, 152, 162, 172, 182, 192, 202, 212, 214, 216, 218};
    vector<int> secondPicture = {1, 3, 11, 13, 21, 23, 31, 33, 41, 43, 51, 53, 61, 63, 71, 73, 81, 83, 91, 93, 101, 103, 111, 113, 121, 123, 131, 133, 141, 143, 151, 153, 161, 163, 171, 173, 181, 183, 191, 193, 201, 203, 211, 213, 221, 223, 231, 233, 241, 243};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> firstPicture = {3, 5, 7, 11, 13, 15, 19, 21, 23, 27, 29, 31, 35, 37, 39, 43, 45, 47, 51, 53, 55, 59, 61, 63, 67, 69, 71, 75, 77, 79, 83, 85, 87, 91, 93, 95};
    vector<int> secondPicture = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 59767190;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> firstPicture = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59, 62, 65, 68, 71, 74};
    vector<int> secondPicture = {1, 3, 4, 6, 7, 9, 10, 12, 13, 15, 16, 18, 19, 21, 22, 24, 25, 27, 28, 30, 31, 33, 34, 36, 37, 39, 40, 42, 43, 45, 46, 48, 49, 51, 52, 54, 55, 57, 58, 60, 61, 63, 64, 66, 67, 69, 70, 71, 72, 73};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 33554431;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> firstPicture = {100000, 100004, 100008, 100012, 100016, 100020, 100024, 100028, 100032, 100036, 100040, 100044, 100048, 100052, 100056, 100060, 100064, 100068, 100072, 100076, 100080, 100084, 100088, 100092, 100096};
    vector<int> secondPicture = {99999, 100001, 100003, 100005, 100007, 100009, 100011, 100013, 100015, 100017, 100019, 100021, 100023, 100025, 100027, 100029, 100031, 100033, 100035, 100037, 100039, 100041, 100043, 100045, 100047, 100049, 100051, 100053, 100055, 100057, 100059, 100061, 100063, 100065, 100067, 100069, 100071, 100073, 100075, 100077, 100079, 100081, 100083, 100085, 100087, 100089, 100091, 100093, 100095, 100097};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 55924052;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> firstPicture = {30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54};
    vector<int> secondPicture = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 67945626;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> firstPicture = {14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108};
    vector<int> secondPicture = {12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76, 78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110};
    OneDimensionalBalls* pObj = new OneDimensionalBalls();
    clock_t start = clock();
    long result = pObj->countValidGuesses(firstPicture, secondPicture);
    clock_t end = clock();
    delete pObj;
    long expected = 1004;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=14425&pm=11318
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
typedef long long int64;
 
class OneDimensionalBalls
{
public:
  int64 solve(vector<int> a,vector<int> b,int d)
  {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int n=SIZE(a);
    int m=SIZE(b);
    int64 f[60][60];
    memset(f,0,sizeof(f));
    f[0][0]=1;
    for (int i=0;i<n;i++) for (int j=0;j<m;j++)
      if (f[i][j])
      {
        f[i][j+1]+=f[i][j];
        if (abs(a[i]-b[j])==d) f[i+1][j+1]+=f[i][j];
      }
    int64 R=0;
    for (int j=0;j<=m;j++) R+=f[n][j];
    return R;
  }
  int64 countValidGuesses(vector <int> a, vector <int> b)
  {
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int64 R=0;
    int n=SIZE(a);
    int m=SIZE(b);
    set<int> M;
    for (int i=0;i<n;i++) for (int j=0;j<m;j++) if (a[i]!=b[j]) M.insert(abs(a[i]-b[j]));
    for (set<int>::iterator it=M.begin();it!=M.end();++it)
    {
      int d=*it;
      map<int,vector<int> > S1,S2;
      for (int i=0;i<n;i++)
        S1[a[i]%(d+d)].push_back(a[i]);
      for (int i=0;i<m;i++)
        S2[b[i]%(d+d)].push_back(b[i]);
      int64 cnt=1;
      for (map<int,vector<int> >::iterator it=S1.begin();it!=S1.end();++it)
      {
        int key=it->first;
        key=(key+d)%(d+d);
        if (S2.find(key)==S2.end())
        {
          cnt=0;
          break;
        }
        cnt*=solve(S1[it->first],S2[key],d);
      }
      R+=cnt;
    }
    return R;
  }
};

********************************************************************************
*******************************************************************************/