/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11986
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

class KingdomAndDice {
public:
    double newFairness(vector<int> firstDie, vector<int> secondDie, int X);
};

double KingdomAndDice::newFairness(vector<int> firstDie, vector<int> secondDie, int X) {
    double ret;
    return ret;
}


int test0() {
    vector<int> firstDie = {0, 2, 7, 0};
    vector<int> secondDie = {6, 3, 8, 10};
    int X = 12;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4375;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> firstDie = {0, 2, 7, 0};
    vector<int> secondDie = {6, 3, 8, 10};
    int X = 10;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.375;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {5, 8};
    int X = 47;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> firstDie = {19, 50, 4};
    vector<int> secondDie = {26, 100, 37};
    int X = 1000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2222222222222222;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> firstDie = {6371, 0, 6256, 1852, 0, 0, 6317, 3004, 5218, 9012};
    vector<int> secondDie = {1557, 6318, 1560, 4519, 2012, 6316, 6315, 1559, 8215, 1561};
    int X = 10000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> firstDie = {0, 2};
    vector<int> secondDie = {1, 3};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {1, 4};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {2, 4};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {1, 2};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
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
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {2, 4};
    int X = 5;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> firstDie = {0, 0, 0, 0};
    vector<int> secondDie = {5, 6, 7, 8};
    int X = 8;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> firstDie = {0, 0, 0, 0};
    vector<int> secondDie = {5, 6, 7, 8};
    int X = 9;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> firstDie = {0, 0, 0, 0};
    vector<int> secondDie = {5, 6, 7, 8};
    int X = 10;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> firstDie = {0, 0, 0, 0, 0};
    vector<int> secondDie = {1, 2, 3, 4, 5};
    int X = 10;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> firstDie = {0, 3, 6};
    vector<int> secondDie = {1, 4, 7};
    int X = 7;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4444444444444444;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> firstDie = {1000000000, 999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999972, 999999971, 999999970, 999999969, 999999968, 999999967, 999999966, 999999965, 999999964, 999999963, 999999962, 999999961, 999999960, 999999959, 999999958, 999999957, 999999956, 999999955, 999999954, 999999953, 999999952, 999999951};
    vector<int> secondDie = {999999950, 999999949, 999999948, 999999947, 999999946, 999999945, 999999944, 999999943, 999999942, 999999941, 999999940, 999999939, 999999938, 999999937, 999999936, 999999935, 999999934, 999999933, 999999932, 999999931, 999999930, 999999929, 999999928, 999999927, 999999926, 999999925, 999999924, 999999923, 999999922, 999999921, 999999920, 999999919, 999999918, 999999917, 999999916, 999999915, 999999914, 999999913, 999999912, 999999911, 999999910, 999999909, 999999908, 999999907, 999999906, 999999905, 999999904, 999999903, 999999902, 999999901};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> firstDie = {999999950, 999999949, 999999948, 0, 999999946, 999999945, 0, 999999943, 999999942, 999999941, 999999940, 999999939, 999999938, 0, 999999936, 999999935, 999999934, 999999933, 0, 999999931, 0, 0, 999999928, 999999927, 999999926, 999999925, 999999924, 0, 0, 0, 0, 999999919, 999999918, 999999917, 999999916, 999999915, 0, 999999913, 0, 999999911, 0, 999999909, 0, 999999907, 999999906, 999999905, 999999904, 999999903, 0, 999999901};
    vector<int> secondDie = {1000000000, 999999999, 999999998, 999999997, 999999996, 999999995, 999999994, 999999993, 999999992, 999999991, 999999990, 999999989, 999999988, 999999987, 999999986, 999999985, 999999984, 999999983, 999999982, 999999981, 999999980, 999999979, 999999978, 999999977, 999999976, 999999975, 999999974, 999999973, 999999972, 999999971, 999999970, 999999969, 999999968, 999999967, 999999966, 999999965, 999999964, 999999963, 999999962, 999999961, 999999960, 999999959, 999999958, 999999957, 999999956, 999999955, 999999954, 999999953, 999999952, 999999951};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
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
    vector<int> firstDie = {259459975, 0, 0, 0, 0, 445850634, 287828435, 0, 11491506, 580197746, 0, 213259370, 451161373, 0, 0, 0, 0, 0, 0, 246308416, 0, 0, 0, 0, 0, 110097462, 0, 319028681, 30490980, 0, 0, 222982953, 0, 135611117};
    vector<int> secondDie = {404533979, 441107160, 207318154, 460329684, 15560111, 453934779, 40955192, 99574481, 289311781, 326154469, 410902148, 140254530, 91121427, 418817385, 11792150, 474496493, 102153269, 33952707, 554627, 333460927, 313402065, 508256967, 31214224, 343893045, 135709087, 297065442, 180216750, 358692039, 126533314, 12698873, 98937489, 531067293, 453806032, 306255642};
    int X = 584039327;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> firstDie = {583580964, 0, 0, 0, 0, 0, 0, 0, 549353893, 0, 0, 0, 255995577, 0, 0, 161064041, 0};
    vector<int> secondDie = {96185108, 124390413, 518950998, 108883980, 116516829, 70613296, 455878940, 27406803, 82605278, 583284951, 157082497, 28741378, 119415043, 66963096, 65882888, 361932014, 177433896};
    int X = 637444863;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4982698961937716;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> firstDie = {22237969, 21086083, 0, 0, 20499604, 0, 0, 0, 19193784, 0, 0, 0, 5745362, 21344371, 1432274, 12292859, 0, 0, 14965190, 0, 7540295, 17645678, 8307861, 15626012, 3150902, 0, 866717, 0, 22854463, 11240592, 0, 0, 3424049, 0, 12020448};
    vector<int> secondDie = {7197896, 12316986, 15296439, 1556756, 20317264, 19123408, 20230973, 20892646, 13310099, 14610142, 14416670, 21617959, 13563036, 23077769, 9111344, 16713937, 4840796, 12679437, 17580654, 7714099, 12174806, 10203696, 15518992, 16450485, 15549882, 22104334, 18251953, 18973930, 17009371, 7555869, 762957, 17242354, 12907943, 16059395, 11834198};
    int X = 23266508;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4995918367346939;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> firstDie = {10513907, 0, 0, 0, 779690, 35111390, 23571472, 35023847, 0};
    vector<int> secondDie = {16868556, 10563831, 17569493, 14999524, 14227024, 25794435, 16882064, 24260721, 21487401};
    int X = 35642680;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49382716049382713;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> firstDie = {600422104, 0, 0, 416081521, 0, 0, 0, 116545911, 0, 0, 0, 80598597};
    vector<int> secondDie = {522462300, 690995055, 293835844, 152997281, 561069289, 152430460, 384422853, 32505765, 590146042, 258723719, 116449587, 574540481};
    int X = 717552847;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> firstDie = {0, 243196107, 47435728, 0, 0, 79842716, 520326888, 402132894, 0, 0, 0, 228146431, 0, 0, 0, 0, 53188609, 98973129, 0, 0, 375318521, 0, 0, 407979309, 0, 0, 0, 263527863, 0, 0, 0, 441802073, 49357377, 430196072, 0, 318807186, 0, 184860182, 135771520, 0, 0, 424105269, 0, 0};
    vector<int> secondDie = {169523618, 104197718, 333854078, 157543320, 100309931, 41996210, 447019988, 363837793, 367370435, 488763031, 74987650, 536055105, 395249589, 373019073, 50096967, 488181787, 267899631, 329674637, 208787347, 51391302, 97854594, 300372892, 238325347, 458686401, 438218275, 524232521, 236815249, 201383706, 410948412, 392336480, 127258475, 43082651, 496534198, 461112553, 200625970, 61528614, 503108762, 112330444, 425366407, 335163683, 65777960, 500354056, 335903273, 461027548};
    int X = 537389378;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> firstDie = {145178052, 161901973, 0, 0, 0, 0, 288567440, 54231080, 222834418, 156430427, 0, 543006658, 0, 0, 583021208, 0, 0, 0, 0, 0, 0, 0, 525551962, 0, 536307429, 0, 0, 0, 0, 675224032, 0, 167006606, 0, 0, 0, 0, 0, 0, 0, 227928516, 0, 0, 915865789, 112423041, 0, 0, 941150194, 0, 0, 959647693};
    vector<int> secondDie = {562581057, 714799137, 409754231, 649344250, 391854598, 744451666, 639192016, 407714697, 152668442, 2902450, 580005222, 440801847, 9495491, 297133833, 124847261, 720499754, 373915842, 391913883, 255311816, 912492430, 309611100, 347550668, 873768965, 725209331, 488251861, 410723182, 517044447, 671446938, 89957313, 845186991, 481779554, 501391863, 410671051, 891533784, 152567541, 802525648, 486670372, 791759557, 60925267, 639338813, 643515500, 640930488, 81972089, 501864484, 938064320, 55672843, 73049161, 162665084, 447586725, 328360976};
    int X = 998168571;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> firstDie = {44244956, 14848426, 698990018, 636581069, 0, 0, 50166537, 0, 458743552, 0, 519668818, 0, 0};
    vector<int> secondDie = {405232860, 305248993, 141152593, 193982102, 360921835, 214201753, 356647185, 171757802, 29998409, 282489621, 416391306, 311961419, 326734576};
    int X = 755366445;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4970414201183432;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> firstDie = {2008566, 0, 0, 0, 0, 0, 0, 0, 6722285, 64815398, 0, 0, 0, 0, 8453367, 0, 0, 0, 16457963, 80358931, 14923697, 0, 0, 14404974, 0, 11768058, 0, 17294411, 0, 0, 0, 36780774, 0, 0, 0, 50237482, 0, 46033881, 0, 0, 0, 0, 0, 0, 0, 0, 61722499, 0, 44999317};
    vector<int> secondDie = {2869819, 1020553, 3369147, 30844016, 7419899, 2776614, 10678463, 27774202, 80187785, 36564173, 19872355, 15683121, 21421829, 32729186, 65920602, 33737021, 43144319, 18882934, 44210279, 18790055, 465938, 71141498, 21220980, 51512809, 47629131, 27680536, 26360331, 27175145, 62945786, 4717762, 61279397, 65815604, 77019734, 64648543, 3588072, 2263148, 67425156, 3371470, 19142285, 54541392, 39935642, 28119575, 70224512, 50462406, 49953696, 53968629, 73304363, 10921531, 61956498};
    int X = 82176484;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4997917534360683;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> firstDie = {0, 1943958};
    vector<int> secondDie = {1476036, 1875829};
    int X = 1947210;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 7287108, 18873315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11990496, 0, 0, 0, 0, 20042160, 13390394, 21671505, 2747037, 4579172, 0, 20211304, 347734, 15740306, 8188505, 0, 0, 0, 0};
    vector<int> secondDie = {7341302, 18248155, 21295448, 4306309, 3433641, 11668731, 4592019, 11213468, 13584372, 2187250, 14134127, 4527838, 16258707, 20780143, 2137039, 3980255, 12266338, 6716210, 3153677, 7840177, 11902026, 15969170, 15609350, 9452435, 16683987, 21491137, 17640939, 17195685, 8829546, 18254556, 11079770, 16170848, 21477222, 17349729, 5451668, 2463934, 13992971, 17465127, 21098841, 5130415};
    int X = 22446928;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> firstDie = {0, 0, 115722564, 176685469, 0, 165021409, 80575185, 223034204, 0, 0, 0, 79212563, 25200173, 178536410, 177836676, 0, 0, 0, 0, 132587905, 0, 0, 0, 58961234, 131608143, 0, 21251611, 75771601, 0, 0, 130865695, 0, 210078258, 0, 245542323, 0, 0, 0};
    vector<int> secondDie = {243724326, 24036570, 98626025, 291637705, 152217901, 231213930, 64173069, 95456571, 6032344, 19095744, 154417804, 73543687, 150703886, 49189811, 32100425, 171955497, 118588304, 144511703, 233141492, 99003383, 50418712, 51989569, 147939619, 305667175, 298707504, 210999297, 274098193, 268871886, 177217445, 277528251, 104855326, 145563830, 26186880, 203481350, 161823595, 178404780, 159317339, 225996663};
    int X = 312017618;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> firstDie = {0, 0, 0, 0, 0};
    vector<int> secondDie = {142283780, 310440974, 467347253, 286795482, 360165647};
    int X = 514006988;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> firstDie = {0, 0, 0, 0, 244881576, 0, 0, 111788183, 0, 0, 42464793, 247400851, 89897415, 0, 0, 0, 262210432, 0, 0, 0, 179108606, 0, 0, 173017128, 0, 0, 0, 176441600, 0, 0, 0, 148033829, 140748748, 0, 124323900, 0, 0, 95728473};
    vector<int> secondDie = {48789426, 135398493, 94113207, 206748893, 4477960, 61301927, 253881743, 183586565, 74308124, 25365662, 61991333, 210447188, 173925564, 30429421, 36455303, 107531411, 206871021, 121908117, 159290263, 77367287, 18445351, 6620330, 158878432, 159194098, 160240887, 67977883, 19692300, 114177279, 30096685, 40190805, 209905751, 78886110, 175589297, 40193259, 21809304, 143189193, 64617122, 238812983};
    int X = 263825698;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> firstDie = {0, 23767844, 8959878, 0, 0, 0, 76569858, 0, 53797753, 16750926, 45595040, 0, 0, 39755965, 10214571, 66031054, 0, 0, 0, 0, 16623638, 0, 35899873, 0, 96123019, 0, 2451344, 0, 0, 0};
    vector<int> secondDie = {78232303, 39766191, 101262795, 3544418, 85361230, 100827955, 98273420, 54514105, 34045071, 12134409, 64728675, 50733810, 73673855, 59874485, 2025653, 85805943, 90685147, 68513143, 382340, 77485060, 78700697, 31790605, 20444092, 88864912, 25866383, 74847632, 43548696, 28317726, 99282182, 63381707};
    int X = 102047240;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> firstDie = {220199902, 587714870, 780585305, 446521046, 0, 809504088, 768448038, 0, 236250624, 0, 0, 0, 358614190, 18152874, 0, 0, 0, 295231891, 312550196, 0, 532750097};
    vector<int> secondDie = {752976813, 394282257, 741131592, 298396117, 226240824, 275334990, 474340782, 820552111, 761990723, 5137013, 353834147, 644496182, 234022626, 590084770, 278773942, 458798971, 280937892, 106014664, 817413160, 100389857, 124167537};
    int X = 912317647;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4988662131519274;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> firstDie = {0, 0, 182075576, 0, 0, 119560762, 0, 0, 0, 182725802, 0, 206624847, 116187008, 3882133, 0, 0, 196320232, 30530609, 112740817, 94380774, 0, 0, 86313354, 0, 0, 0, 100711460, 0, 209831780, 0, 0, 179332352, 208221282, 34663790};
    vector<int> secondDie = {37927979, 78121651, 30414358, 146408617, 55185414, 87846350, 176939225, 17717497, 200587166, 53870048, 157179302, 87951103, 191816393, 148298174, 174264457, 118406408, 129448872, 126161129, 114012193, 55984895, 74140303, 169694842, 46560206, 142422659, 14671388, 98742472, 147579574, 111353813, 132788317, 94748060, 146017602, 170716295, 217950742, 2256524};
    int X = 219256468;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> firstDie = {0, 159348060, 0, 217566588, 172143235, 0, 0, 0, 12498611, 0, 0, 298709279, 196516752, 296781778, 250559043, 0, 102105513, 0, 0, 227097076, 194464908, 0, 0, 310467338, 0, 164393331, 281487000};
    vector<int> secondDie = {37764959, 221719447, 293985611, 25148779, 306782593, 86153392, 85677855, 264230509, 44489942, 184624429, 242795045, 193075908, 197003269, 115967696, 120603881, 299108781, 82230790, 167121822, 165290615, 71147663, 213639709, 121575320, 203366612, 181325453, 213298361, 195616708, 128397582};
    int X = 318217241;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4993141289437586;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> firstDie = {0, 0, 0, 0, 339338103, 0, 0, 19242999, 0, 0, 216243764, 458042777, 0, 0, 143959388, 176853661, 0, 263869945, 16761438, 631008841};
    vector<int> secondDie = {292013708, 221306410, 223008917, 605093227, 142721002, 545853498, 24805980, 609368528, 550005286, 363493972, 477987042, 569248284, 312104337, 536709532, 402198306, 528348100, 479697597, 229286149, 748845417, 38087576};
    int X = 758264357;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> firstDie = {19222813, 0, 0, 0, 20113926, 0, 9082972, 0, 0, 16213888, 1946490, 273630, 0, 0, 12441926, 12855011, 0, 19553878, 0, 8804199, 14801203, 0, 0, 9404593, 0, 0, 0, 19283403, 0, 2504666};
    vector<int> secondDie = {7304425, 1105109, 9202423, 14093411, 1378738, 11255187, 3963653, 5040018, 3582768, 4911483, 2531951, 20070337, 18175708, 1971483, 14977459, 7854987, 10775681, 8918479, 7293111, 18688347, 12191340, 17493962, 12729861, 5578135, 7580048, 3560688, 20079136, 11500372, 19516837, 7714240};
    int X = 20114345;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> firstDie = {0, 0, 0, 65663059, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77097752, 0, 28439154, 32608562, 0, 0, 0, 43044903, 82108240, 0, 0, 20493166, 104212150, 52426318, 0, 0, 52236362};
    vector<int> secondDie = {81595198, 41486101, 71402785, 29712780, 22383795, 156742861, 13014441, 130404456, 13881495, 105633470, 117048890, 46490056, 112451381, 10512205, 16392926, 111303742, 53557108, 29665688, 35436016, 42846894, 71409183, 75892250, 63340059, 151968532, 86308309, 125003448, 110598759, 126027718, 2362069, 75650195};
    int X = 157975966;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> firstDie = {37249876, 0, 0, 422858970, 0, 0, 135101464, 379332996, 0, 194362340, 325147794, 0, 396556976, 0, 0, 0, 0, 0, 330434450, 0, 311267581, 0, 0, 0, 48522493, 0, 0, 247296091, 0};
    vector<int> secondDie = {187146271, 294390662, 223455372, 219286315, 402380501, 417817711, 191509842, 436401171, 228029276, 68281830, 77741891, 148796665, 210872184, 364656575, 7735164, 340167554, 164929727, 338169613, 220052935, 376482540, 358310070, 272900266, 181950000, 415700401, 384976620, 403434500, 385795111, 164695688, 282517300};
    int X = 464089131;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4994054696789536;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> firstDie = {0, 214637138, 0, 350145872, 238194727, 0, 307118470, 86815916, 0, 153492641, 0, 0, 158025782, 0, 66484954, 0, 469919453, 432083744, 17870355, 0, 172499666, 0, 456018650, 134205221, 0, 0, 16715502, 322835763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33283609, 0, 0, 429504577, 191149373, 0};
    vector<int> secondDie = {58168752, 107794506, 267838156, 358257625, 307958623, 63035733, 19555566, 17555656, 106479547, 38522666, 34271157, 95224474, 361358429, 184598194, 245240275, 108925021, 142922917, 139480308, 203582744, 3418889, 136254642, 406522799, 403307094, 169538250, 403943632, 71445660, 86962736, 104686398, 209712002, 22257576, 454565568, 12026221, 130052081, 249496444, 370283845, 182156172, 56677644, 389839411, 199711827, 163157191, 172507544, 233982983, 258381664};
    int X = 472907279;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49972958355868036;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> firstDie = {0, 305619587, 334634698, 0, 741187470, 0, 416339317, 780003338, 0, 0, 0, 20913106, 0, 0, 0, 0, 0, 438076035, 116270706, 0, 0, 0, 0, 308311326, 0, 0, 139323191, 73953016, 0, 0, 0, 0, 538500686, 260740582, 828076699, 335871484, 229778666, 0, 667854700, 0};
    vector<int> secondDie = {333552904, 138274600, 540725829, 254927770, 608694341, 452855167, 90361790, 74553191, 170813551, 260430507, 213876382, 668158793, 698809387, 228271942, 183908323, 243347106, 189245478, 6783884, 781847791, 159105900, 631950330, 621393361, 149879427, 731876175, 484387539, 423398463, 124351669, 63112075, 640680661, 319329063, 358057305, 501356258, 457603662, 425905827, 283406722, 228994831, 405883688, 373768511, 303548021, 103819932};
    int X = 837303171;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> firstDie = {387253791, 0, 0, 0, 16916318, 0, 648866647, 662598399, 0, 0, 0, 0, 0, 514243075, 873306143, 0, 274862534, 0, 0, 0, 0, 337075448, 154474078, 358576642, 44749656, 0, 0, 0, 0, 0, 0, 152742966};
    vector<int> secondDie = {276313636, 461594434, 347656978, 557173047, 449761330, 861900052, 767759615, 57434154, 70046127, 138618692, 332296687, 842557545, 299144443, 168814595, 563889347, 179707138, 122107054, 285221086, 334181215, 462653303, 260014739, 204099056, 123619971, 179448442, 474716202, 724158018, 202628093, 512349665, 309847011, 504623154, 665092630, 586160647};
    int X = 881850330;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> firstDie = {0, 609016340, 195030067, 0, 0, 0, 0, 299608675, 879147273, 0, 0, 142302425, 0, 253172710, 613760741, 199306758, 0, 332896609, 0, 0};
    vector<int> secondDie = {20731192, 259936319, 485405441, 158327105, 510669040, 759832127, 889673569, 805948517, 278277489, 138617319, 678152220, 83117608, 79942375, 206895570, 67664865, 666941197, 173393414, 538926746, 809243622, 387156311};
    int X = 894600015;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> firstDie = {0, 0, 0, 731508997, 0, 0, 0, 603985286, 0, 404028772, 0, 0, 913848530, 117019528, 21112009, 0, 687509767, 0, 35969376, 0, 0, 167379288, 0, 349758785, 0, 0, 0, 0, 221045682, 0, 0, 0, 0, 819513399, 250105081, 0, 885089317, 0, 0, 0, 0, 0};
    vector<int> secondDie = {539340848, 140597686, 412652946, 34736005, 558671225, 346581609, 896482020, 953176658, 696340394, 156968994, 888723951, 230590086, 296577182, 519849516, 451635767, 806720031, 938673191, 591999244, 763875139, 274929742, 454496130, 100699563, 525034822, 83953289, 44658779, 219657002, 458088345, 60746902, 164424746, 562716655, 349003882, 703765594, 469863716, 761656828, 505050974, 71518428, 151221924, 444516482, 67678573, 614111693, 601485475, 722951899};
    int X = 957016512;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> firstDie = {631725432, 0, 559112562, 0, 487753668, 228297181, 153278578, 0, 0, 0, 0, 175931428, 346053511, 0, 0, 0, 0, 0, 279004111, 602544072, 99165162, 272559785, 0, 0, 328996549, 501166592, 174377137, 0, 0, 386346689, 0, 0, 658666993, 0, 0, 0, 500306910, 422195491, 0, 521360735, 0};
    vector<int> secondDie = {144166301, 620525896, 373010372, 416726085, 43539471, 243620255, 430139009, 218888710, 189700211, 113046179, 502857748, 210430038, 660064703, 632810745, 153259024, 228151970, 450934197, 182611913, 337041144, 291341768, 476399277, 127371716, 32517765, 56800553, 627678625, 103198293, 325348734, 35670976, 452882931, 28450046, 46207397, 443401922, 648975942, 419217769, 41868585, 27903299, 662838023, 472007593, 93144699, 34278812, 431406462};
    int X = 664612113;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4997025580011898;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> firstDie = {0, 0, 11945964, 91162037, 0, 0, 567420388, 806484995, 0, 0, 0, 0, 0};
    vector<int> secondDie = {6253913, 458717962, 58894048, 81679306, 304385182, 100762632, 865256282, 148963782, 663831790, 49079993, 847854706, 185917264, 736144003};
    int X = 909320987;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4970414201183432;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> firstDie = {0, 6563924, 43730097, 0, 0, 20579196, 0, 0, 63730211, 27340527, 50796887, 0, 66900338, 0, 0, 24704515, 0, 0, 0, 0, 0, 22007422, 0, 0, 123848805, 72973363, 0, 30667678, 0, 0, 0, 0, 0, 8980690, 0, 0, 74503, 26366488, 0, 128413531, 0, 87536164, 57428575, 129498062, 0, 60174563};
    vector<int> secondDie = {6664325, 22433653, 58826145, 22188525, 120503873, 2258846, 47813185, 29267331, 9421758, 123362767, 95658739, 85804991, 56536932, 128785630, 24345797, 124013977, 37653255, 50712284, 81348256, 38627937, 116240935, 109733873, 67552421, 73489675, 96187749, 62096115, 120148380, 32513507, 105978787, 2206127, 29803189, 49758232, 24639779, 88629333, 9061876, 82258771, 28003299, 56875060, 111526102, 104827599, 117352946, 14012537, 60345166, 111004997, 12510743, 84690963};
    int X = 130287423;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> firstDie = {157558990, 4509410, 81457897, 0, 0, 0, 0, 107243799, 0, 0, 0, 0, 0, 63915783, 84448378, 0, 75312313, 30836845, 0, 191852763, 0, 150602944, 0, 155112354, 0, 0, 0, 0, 118475164};
    vector<int> secondDie = {157848452, 150814430, 125656451, 7208009, 219489927, 177795169, 117445213, 40450866, 77059463, 176281596, 208101775, 151453988, 117533210, 118762599, 138813691, 148370054, 187513310, 180645027, 175571328, 104219137, 222476306, 78320251, 178483953, 58879857, 68781116, 98613709, 224595324, 245885249, 237890238};
    int X = 247854020;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4994054696789536;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> firstDie = {96141541, 86468088, 0, 0, 0, 16816112, 0, 47523206, 0, 97598969, 0, 0, 85396396, 0};
    vector<int> secondDie = {43381461, 75907456, 73833936, 90365688, 67846274, 7796157, 87220328, 85990839, 29841340, 11505365, 17732406, 78021190, 10691270, 51339166};
    int X = 107922527;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> firstDie = {0, 361046937, 446763674, 0, 188105352, 0, 0, 0, 182458312, 0, 0, 0, 0, 0, 0, 353924299, 0, 0, 0, 474204553, 0, 461294819, 491229743, 0, 0, 52366682, 261061818, 0, 0, 0, 23543185, 0, 0, 0, 0, 0, 280259892, 212379740, 108034710, 230949976, 313547531, 0, 202522978, 0, 0};
    vector<int> secondDie = {570320408, 102346916, 199445512, 50367718, 261044348, 29981795, 484691165, 466053296, 441493829, 154646823, 489596481, 103331372, 7060792, 243734298, 179256958, 409082114, 279737939, 28991314, 524611933, 492117678, 232649969, 60327271, 189666820, 33074409, 200808, 72688816, 272381258, 778641, 275211793, 232268879, 350792380, 415006665, 476409630, 119712356, 34848848, 165134607, 291487986, 519540012, 200662367, 160662444, 101867464, 259733312, 405787651, 250722091, 503467609};
    int X = 572319371;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4997530864197531;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> firstDie = {0, 66054454, 99396759, 0, 132471167, 102553580, 0, 0, 0, 0, 19205847, 221649327, 0, 0, 0, 187751300, 131174694, 0, 0, 0, 0, 152618021, 0, 0};
    vector<int> secondDie = {218672474, 28978169, 197405120, 145562217, 58842933, 16622366, 184659867, 77421308, 106466032, 25044177, 140177921, 82028245, 14974046, 159383767, 21254186, 7344656, 129463256, 123859896, 91711271, 15221813, 82332479, 21731570, 62421302, 71259657};
    int X = 229278716;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> firstDie = {0, 283682187, 172308714, 0, 0, 299632968, 0, 0, 0, 144518322, 290439874, 0, 0, 128795560, 133878624, 0, 0, 153888365, 224670898, 0, 161486335, 201993386, 263798457, 43557477, 0, 0, 240363293, 0, 85336926, 321048924};
    vector<int> secondDie = {14343731, 186306962, 107812548, 304182563, 315102521, 290418283, 97742879, 324564031, 22202652, 162868110, 138134087, 102121670, 47220699, 300421663, 180869487, 229821794, 112677541, 21429804, 313557246, 36157689, 34298835, 16796414, 57610755, 103627778, 19668550, 297974047, 2845056, 214694359, 42992664, 46580656};
    int X = 361433068;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> firstDie = {0, 38005679, 0, 57297323, 0, 0, 0, 0, 69952219, 0, 0, 62514224, 55987050, 59702690, 0, 0, 21097466, 0, 0, 0, 0, 26465329, 0, 15897914, 0, 29571977, 41304148, 0, 31037476, 34158336, 0, 38455214, 60640256, 0, 0, 0, 0, 0, 35730453, 21371051};
    vector<int> secondDie = {78451234, 78451233, 78451232, 7587014, 78451231, 33125912, 37007832, 9241719, 78451230, 10978864, 78451229, 78451228, 78451227, 78451226, 29667487, 11870359, 78451225, 26503345, 64206262, 78451224, 78451223, 27306411, 78451222, 48144683, 42123502, 5008141, 43437465, 19302791, 78451221, 981324, 1660172, 32189133, 78451220, 61997676, 20780699, 78451219, 78451218, 11701392, 23244701, 8252091};
    int X = 78451234;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> firstDie = {459429879, 0, 0, 0, 0, 145358528, 0, 0, 743825909, 0, 0};
    vector<int> secondDie = {164474086, 327985446, 50345153, 301569030, 496770901, 243957078, 14246731, 886860371, 527344174, 886860370, 74863452};
    int X = 886860371;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49586776859504134;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> firstDie = {0, 0, 2931029};
    vector<int> secondDie = {655001, 1539792, 3117950};
    int X = 4478864;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4444444444444444;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> firstDie = {0, 170051912, 133315046, 266833883, 17065731, 3214524, 0, 143661133, 19768262, 9896138, 17244196, 92216312, 0, 0, 124346817, 0, 0, 0, 0, 266088527, 11143512, 181945618, 0, 157778753, 0, 0, 111340638, 11223394, 0, 0, 0, 276669095, 0, 75454392, 0, 166610443, 0, 274892847, 0, 115984447, 0, 127127958, 32821801, 49122399, 0, 218976888, 117469667, 0, 0, 12228936};
    vector<int> secondDie = {293431014, 293431013, 11596371, 270885871, 293431012, 293431011, 279989144, 32060582, 150760987, 293431010, 201601634, 160542136, 93086556, 293431009, 293431008, 241708322, 293431007, 293431006, 293431005, 246013465, 223607359, 293431004, 293431003, 293431002, 293431001, 293431000, 119472008, 293430999, 293430998, 28339674, 293430997, 293430996, 63342217, 171158035, 81013842, 293430995, 293430994, 293430993, 194893093, 293430992, 293430991, 293430990, 293430989, 221647653, 249460122, 198681539, 293430988, 293430987, 225109331, 293430986};
    int X = 293431014;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2616;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> firstDie = {0, 0, 83101507, 0, 254259541, 279161842, 451874034, 415072294, 146398851, 508758742, 0, 0, 0, 28969514, 0, 148078941, 458994610, 0, 348096412, 214089358, 323672223, 0, 494876015, 0, 0, 388347039, 91641713, 510281282, 0, 0, 0, 163160129, 0, 0, 401831545, 0, 350022109, 45261460, 442281639, 537195951, 354520418, 0, 0};
    vector<int> secondDie = {573389924, 273247111, 64928754, 573389923, 13720333, 525098886, 224592790, 146689426, 395718872, 240580289, 543865869, 552408593, 573389922, 421300307, 304125093, 119868189, 573389921, 573389920, 573389919, 395760478, 171470671, 451035754, 573389918, 573389917, 573389916, 376509073, 461485773, 573389915, 519067011, 130758594, 45736702, 224042531, 249839740, 262866983, 109258489, 47101258, 573389914, 573389913, 387872787, 573389912, 411594664, 113123857, 470123323};
    int X = 573389924;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49972958355868036;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> firstDie = {0, 0, 0, 112875242, 84887508, 0, 0, 114210011, 105094483, 335644762, 0, 0, 0, 0, 0, 354801251, 213425404, 244618562, 298793664, 2416601, 218333303, 0, 0, 158780690, 135797205, 275141571, 0, 0, 356595869, 65145390};
    vector<int> secondDie = {246255318, 116851072, 383307890, 88344432, 383307889, 383307888, 383307887, 239380100, 124350886, 383307886, 342684188, 151146222, 367902332, 146083200, 306124210, 186833169, 292292058, 253133918, 270841521, 131751859, 362712420, 383307885, 383307884, 383307883, 71767290, 383307882, 196118175, 369062151, 313871269, 87199961};
    int X = 383307890;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47888888888888886;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> firstDie = {671092147, 0, 0};
    vector<int> secondDie = {703554709, 461271406, 703554708};
    int X = 703554709;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> firstDie = {0, 38887532, 0, 0, 139122951, 161671836};
    vector<int> secondDie = {341604047, 268928532, 476172205, 7750176, 476172204, 476172203};
    int X = 476172205;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> firstDie = {144039374, 0, 51875600, 11842846, 168651230};
    vector<int> secondDie = {205889833, 261143122, 261143121, 171945551, 169000514};
    int X = 261143122;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> firstDie = {167343868, 0, 153439354, 0, 97382471, 114106237, 190536238, 0, 0, 0, 215990906};
    vector<int> secondDie = {207979583, 282833045, 132720306, 124064784, 57330780, 6438271, 133033386, 62530982, 47257642, 282833044, 65862210};
    int X = 282833045;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49586776859504134;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 31905265, 0, 2002218};
    vector<int> secondDie = {40387038, 80545070, 80545069, 80545068, 11018991, 26478491, 25290414, 69777728, 22915410, 10105167};
    int X = 80545070;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 675643720, 616254500, 0, 652107621, 628599358, 284635012, 0, 0, 0, 0, 372485426, 636926116, 253424615, 0, 344074851, 0, 0, 9741162, 0, 316874075, 315989656, 559494221, 0, 0, 0, 412819368, 418783367, 298356695};
    vector<int> secondDie = {830136369, 187691702, 852144867, 852144866, 422164010, 132910021, 852144865, 852144864, 852144863, 852144862, 852144861, 852144860, 120360148, 136403404, 100989736, 308763898, 346922528, 303609137, 50454808, 852144859, 852144858, 293656692, 852144857, 852144856, 787264953, 852144855, 68030107, 251551632, 236074643, 852144854, 56488390, 852144853, 852144852};
    int X = 852144867;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4508723599632691;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> firstDie = {55972811, 0, 0, 85256967, 0, 206013582, 0, 118315645, 174403982, 0, 191425352, 0, 73009405, 0, 35973113, 0, 0, 222186519};
    vector<int> secondDie = {256747861, 228632258, 256747860, 191104309, 112043511, 137109050, 59571562, 184953559, 111189655, 187514337, 3834123, 90662654, 256747859, 256747858, 118769113, 185428802, 256747857, 57366699};
    int X = 256747861;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {48592805, 83042800};
    int X = 83042800;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> firstDie = {0, 0, 0, 106474560, 0, 0, 0, 7356358, 0, 0, 0, 51995350, 0, 0, 38938253, 0, 78267084, 34070773, 81628977, 18942451, 0, 0, 0, 0, 0, 0, 6439440, 0};
    vector<int> secondDie = {88485610, 144641908, 23440116, 144641907, 144641906, 144641905, 82116275, 128019695, 144641904, 113686002, 59047444, 127485151, 141600786, 144641903, 79861826, 31346034, 116968514, 130908053, 78307417, 483528, 120336842, 144641902, 52876621, 144641901, 144641900, 144641899, 98748281, 144641898};
    int X = 144641908;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.45535714285714285;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> firstDie = {0, 241195906, 165750082, 0, 0, 160515871, 248811044, 314916249, 242452806, 0, 120439397, 0, 0, 0, 0, 12618356, 0, 52477309, 0, 0, 0, 113774466, 0, 279532240, 0, 306988689, 0};
    vector<int> secondDie = {108665913, 283833346, 314328782, 320214915, 287598015, 320214914, 144996345, 320214913, 24340196, 320214912, 320214911, 80604640, 86837185, 320214910, 320214909, 115031297, 159928975, 194303155, 42433206, 123195259, 320214908, 368347, 111989065, 320214907, 320214906, 108825905, 227814513};
    int X = 320214915;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4993141289437586;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> firstDie = {2921402, 0, 0, 680644, 238083, 0, 0, 9735463, 2339473, 686269, 14278171, 11168406, 0, 0, 11992890, 0, 0, 0, 4128622, 14290998, 14212055, 0, 3853429, 0, 0, 0, 0, 0};
    vector<int> secondDie = {6884235, 7514836, 9678971, 4390340, 8490173, 16647737, 16647736, 700520, 6980934, 8330553, 3684834, 12780902, 5697644, 16647735, 16647734, 4161356, 3399740, 14443879, 13950486, 16647733, 16647732, 16647731, 16647730, 16647729, 16647728, 10141850, 12629336, 16647727};
    int X = 16647737;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4451530612244898;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> firstDie = {369210996, 904146839, 0, 657581125};
    vector<int> secondDie = {236241139, 950747775, 676971613, 488667241};
    int X = 950747775;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> firstDie = {5386078, 7046154, 5898677, 0, 0, 0};
    vector<int> secondDie = {18289515, 18289514, 18289513, 11877024, 1948188, 18289512};
    int X = 18289515;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> firstDie = {91769378, 4056982, 78316512, 94597093, 0, 0, 63196080, 160990945, 0, 152686330, 34865872, 0, 22070964, 0, 0, 0, 0, 134194330, 54614526, 0, 0, 0, 10372895, 51402047, 101537766, 0, 13038219, 0, 0, 14471097, 0, 0, 5847252, 0, 27918216, 132227822, 131136124};
    vector<int> secondDie = {221465646, 221465645, 25421582, 221465644, 171805484, 73904929, 142452541, 193163901, 75879683, 221465643, 67177630, 221465642, 38159010, 221465641, 111179073, 221465640, 139097288, 139134553, 218185383, 213857220, 221465639, 110356532, 221465638, 221465637, 221465636, 221465635, 122393920, 221465634, 132880272, 221465633, 208942141, 138236690, 127541510, 221465632, 17254937, 187957180, 8129742};
    int X = 221465646;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.35865595325054783;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {1000000, 2000000, 3000000, 4000000, 5000000, 6000000, 7000000, 8000000, 9000000, 10000000, 11000000, 12000000, 13000000, 14000000, 15000000, 16000000, 17000000, 18000000, 19000000, 20000000, 21000000, 22000000, 23000000, 24000000, 25000000, 26000000, 27000000, 28000000, 29000000, 30000000, 31000000, 32000000, 33000000, 34000000, 35000000, 36000000, 37000000, 38000000, 39000000, 40000000, 41000000, 42000000, 43000000, 44000000, 45000000, 46000000, 47000000, 48000000, 49000000, 50000000};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> firstDie = {111, 0, 0, 4, 78, 79, 96, 39, 0};
    vector<int> secondDie = {10, 82, 74, 106, 1, 105, 83, 24, 110};
    int X = 111;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49382716049382713;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> firstDie = {999991087, 999996234, 0, 0, 999923781, 3860500, 8092387, 19, 892322953, 999998862, 1000000000, 999999020, 969677542, 998470619, 999999217, 0, 998995153, 0, 998960737, 999999985, 999999998, 80, 999999120, 0, 952840206, 0, 32854894, 9033170, 5479917, 8777488, 287445, 30, 999989880, 999963908, 910433750, 999429288, 999999963, 0, 0};
    vector<int> secondDie = {996408791, 7333, 997656436, 208112, 151, 2, 80049886, 485762158, 44943, 292340299, 999999119, 22086181, 6348, 22225540, 65789230, 999999932, 646, 1, 3479760, 4039, 12214188, 15384, 999999943, 90700, 999999950, 44108004, 982322052, 999999988, 217937, 148, 132, 999998323, 999999523, 12, 150, 8365457, 35069, 997939753, 32039};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5489809335963182;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> firstDie = {36171694, 1158, 999803038, 999802999, 988671211, 1037946, 0, 951709561, 142585856, 695964, 674, 57, 999803053, 1, 0, 999318574, 376859, 0, 1164, 991427936, 999802816, 27763, 999803055, 3279343, 999799870, 999801567, 972921101, 0, 0, 56, 36255018, 999695474, 0, 31, 158094, 999802733, 22657616, 22081511, 920220257};
    vector<int> secondDie = {25, 4, 3206507, 3132331, 11, 6, 1151, 29872584, 12, 998894418, 59, 365, 999802930, 1531520, 1882783, 16591095, 999803060, 747515203, 50, 947532182, 7, 3, 999803048, 16157, 999803061, 12539481, 998875380, 999803006, 876391765, 745537229, 472708, 999802825, 999757173, 999621256, 35, 8179, 997870511, 919095840, 7114};
    int X = 999803062;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4996712689020381;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> firstDie = {2758, 1, 3238, 3134, 3232, 0, 2723, 3218, 2897, 3237, 3228, 1471, 3216, 130, 3217, 502, 220, 58, 3074, 2236, 4, 2, 3226, 3196, 14, 3234, 0, 0, 3164, 0, 482, 0, 3174, 3};
    vector<int> secondDie = {7, 23, 3224, 1812, 10, 3230, 3235, 12, 2911, 3163, 6, 1958, 73, 440, 1676, 112, 3179, 3096, 3202, 3190, 2137, 15, 425, 1236, 3212, 30, 405, 442, 3233, 292, 1223, 445, 191, 2273};
    int X = 3238;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5060553633217993;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> firstDie = {0, 125219, 7184, 999935586, 60733, 999957916, 2198898, 0, 1618401, 999956346, 488447773, 694058555, 999929085, 8, 999957432, 946933067, 12612, 222172659, 999958096, 1, 249, 999958088, 999958086, 4, 472, 6926, 999958090, 999958074, 0, 419275935, 999958085, 932363531, 999956363, 42125080, 999958095, 0, 6469414, 999737653, 0, 999958040};
    vector<int> secondDie = {635129, 468, 52, 999947170, 999957161, 999947793, 999958094, 128, 918779760, 961392816, 1245, 2, 179450, 6762, 999955267, 986138729, 413, 980613804, 8217592, 850523940, 89, 108, 999929661, 204735631, 31032350, 16, 18146056, 999958092, 995956577, 4862, 3538, 123058, 87065509, 71206541, 2022, 990774817, 996635099, 584020903, 999718388, 999958063};
    int X = 999958096;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.52375;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> firstDie = {2, 30, 8, 92, 55, 67, 74, 0, 104, 1, 102, 80, 99, 91, 43, 75, 57, 0};
    vector<int> secondDie = {89, 10, 16, 103, 64, 15, 61, 97, 3, 70, 53, 96, 18, 82, 19, 95, 12, 13};
    int X = 104;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> firstDie = {76981527, 0, 10, 76989745, 5236, 3405, 76986514, 1, 0, 1466958, 13965, 76983549, 75671056, 76989789, 76989755, 76989088, 76967743, 76467849, 4, 0, 76959915, 247, 76989780, 0, 76986433, 76989500, 76989793, 0, 60965, 0, 73918290, 76981137, 76797614, 76989762, 76989309, 35, 76989593, 76989722, 191, 6};
    vector<int> secondDie = {3, 76989422, 23375, 440, 86, 429, 7590876, 76987490, 75176, 241, 76989749, 636699, 76924674, 309392, 234, 76915024, 76104154, 727, 63368377, 6468566, 76983435, 76986052, 229642, 7696612, 81, 76610932, 3500683, 76989710, 5887, 76970635, 76989591, 76058633, 76891093, 22, 76989747, 17, 177, 503, 76989419, 1679};
    int X = 76989793;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.52;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> firstDie = {6, 0, 154, 127, 151, 126, 136, 152, 15, 20, 0, 153, 129, 30, 155, 1, 69, 120, 135, 141, 72, 2, 4, 0, 149, 28, 63, 16, 150, 71, 0, 0, 7, 140, 93, 10, 0, 123};
    vector<int> secondDie = {107, 13, 38, 26, 130, 12, 5, 147, 3, 14, 104, 27, 33, 144, 8, 112, 139, 109, 124, 115, 119, 19, 11, 80, 101, 21, 32, 22, 53, 146, 54, 51, 70, 64, 82, 58, 134, 96};
    int X = 155;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5006925207756233;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> firstDie = {12973, 0, 12967, 12950, 0, 37, 12366, 0, 1, 45, 10068, 12951, 0, 12, 7116, 12929, 2, 12498, 444, 11623, 12744, 199, 613, 12972, 10368, 11181, 12963, 113};
    vector<int> secondDie = {3046, 12919, 12460, 254, 5, 12938, 55, 242, 11308, 12958, 4805, 12960, 11424, 445, 11572, 1214, 12970, 3690, 11, 12968, 82, 32, 74, 38, 4, 28, 12971, 8};
    int X = 12973;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> firstDie = {6660375, 4485114, 0, 3865, 0, 6665473, 813, 2422018};
    vector<int> secondDie = {47, 1667, 1, 6562783, 6614305, 429325, 1100, 277345};
    int X = 6665474;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.53125;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> firstDie = {3678, 0, 1961, 2549, 5644, 10782, 70, 10952, 0, 0, 9492, 2, 18, 32, 10956, 9340, 653, 0, 10779, 11040, 11042, 11030, 2969, 11014, 11041, 10923, 3, 3632, 11026, 0, 9133, 4395, 375, 207};
    vector<int> secondDie = {7453, 1, 10729, 11036, 2279, 31, 10677, 6, 10859, 55, 10831, 9247, 146, 10210, 174, 63, 15, 11020, 11012, 11037, 10035, 11, 91, 1229, 1653, 17, 1721, 8, 8990, 637, 6246, 10325, 9663, 5091};
    int X = 11042;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5086505190311419;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> firstDie = {0, 983956848, 983957379, 31, 0, 0, 983938195, 0, 0};
    vector<int> secondDie = {5, 811565146, 944625879, 186228881, 933549118, 734454931, 983926879, 10537959, 581};
    int X = 983957382;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49382716049382713;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> firstDie = {2, 435897349, 0, 868409748, 999712074, 0, 0, 999999833, 0, 43, 999999986, 999149159, 0, 0, 0, 604, 1516, 16851947, 0, 543917, 22664, 758022296, 131423497, 13349696, 998953064, 634252871, 999977556, 300506856, 1, 611550268, 0, 411041, 983888553, 0, 383, 922, 999999769};
    vector<int> secondDie = {2528, 16, 519518620, 999869386, 386628297, 3351, 999924390, 999998627, 89593, 13741737, 19455536, 53628, 164371914, 999984046, 2194, 3, 999999985, 999969881, 999999621, 63, 999999984, 999980095, 15, 38, 979837254, 5, 999999954, 1014, 5036794, 251, 999999983, 56819009, 999999592, 899373157, 5985, 577864697, 998606928};
    int X = 999999986;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4996347699050402;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> firstDie = {237366, 0, 0, 0, 0, 106, 4363, 0, 237363, 41, 0, 236969, 206861, 19, 0, 10824, 46, 237286, 1, 237199, 856, 179924, 1981, 77133, 0, 0, 187347, 0, 80987, 198, 235558, 96796, 237336, 0, 0, 0, 363, 182774, 44660, 237316, 0, 3327, 235775, 234134, 19098};
    vector<int> secondDie = {150401, 2193, 237365, 236348, 1387, 237357, 237112, 237361, 237353, 237320, 216250, 182043, 236029, 237324, 236980, 237359, 237342, 4, 231400, 237282, 236773, 341, 237352, 176210, 2, 3, 1769, 32, 1030, 12, 282, 7, 237364, 237346, 237362, 7297, 4061, 140255, 3418, 235877, 197, 235636, 128385, 1042, 217413};
    int X = 237366;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4997530864197531;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> firstDie = {93890562, 722640, 0, 15, 90127740, 93890470, 2611, 13345763, 119940, 1, 2, 93809165, 93890368, 86782779, 0, 91626490, 5, 93739311, 11455746, 5801350, 87216};
    vector<int> secondDie = {235028, 93343139, 325991, 1785, 90227659, 11912060, 18405, 975, 54, 18, 93872258, 19, 86310156, 93890421, 974407, 38183388, 93163944, 15732749, 2938259, 93890560, 1309617};
    int X = 93890563;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4988662131519274;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> firstDie = {0, 999962756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226435, 0, 0, 0, 0, 0, 0, 0, 999999961};
    vector<int> secondDie = {999999621, 10258, 236, 4, 341278, 3, 999999452, 999999814, 1615834, 572620, 984515944, 774172530, 11196, 999999963, 908444286, 999987132, 999988277, 999999878, 1517421, 999999978, 999999967};
    int X = 999999978;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4988662131519274;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> firstDie = {999584844, 0, 995921961, 671, 0, 0, 999995192, 999995196, 0, 0, 0, 0, 85668};
    vector<int> secondDie = {993499085, 1, 998251205, 999852693, 18457, 999107612, 999995133, 999994027, 2, 111526257, 28, 999995086, 999943050};
    int X = 999995210;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4970414201183432;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> firstDie = {2, 0, 999993451, 0, 0, 0, 95434, 999957503, 782126440, 0, 999997286, 0, 754427347, 999965426, 999782308, 999909927, 4031926, 0, 96291, 63309719, 999943496, 0, 999787946, 0, 0, 999994971, 21713396, 0, 0, 999991407, 0, 1, 0, 10932, 640613023, 875058164, 988948813, 0, 325, 0, 0, 182071, 29999, 999997316, 792197017};
    vector<int> secondDie = {123, 3, 153, 2971316, 8, 306181, 939126811, 489414, 2693932, 26992, 999937577, 999997368, 999979380, 999753688, 7, 1512451, 1665, 968901086, 46376, 590, 1413082, 997612058, 999986955, 999160997, 17, 999997388, 999758579, 998518473, 106, 999997360, 999120304, 999997324, 999638786, 999982188, 43651, 999968657, 993246702, 998356296, 12, 999695085, 999991177, 999997377, 811082017, 999997391, 989107592};
    int X = 999997391;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4997530864197531;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {8249, 56, 8369, 55, 8254, 8372, 8371, 2829, 1, 90, 8367, 6, 3, 602, 5, 7438, 8288, 7813, 4468, 51, 77, 2, 8095, 9, 1512, 8101, 1984, 8200, 1424, 8361, 1870, 363, 2366};
    int X = 8372;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4995408631772268;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> firstDie = {999237492, 0, 0, 0, 0, 994230280, 23, 0, 4, 0, 0, 999236206, 110046768, 999237476, 999232808, 230144, 2};
    vector<int> secondDie = {999010438, 1, 1046866, 1045654, 137576007, 1729, 999222300, 996879135, 16121480, 999237426, 999237466, 999229592, 23464823, 999225276, 999236625, 995354790, 999237490};
    int X = 999237492;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4982698961937716;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> firstDie = {16787592, 802, 0, 0, 999959864, 1, 0, 0, 0, 997940127, 0, 16, 0, 0, 0, 506387041, 0, 0, 0, 0, 0, 994379736, 0, 890910, 0, 0, 0};
    vector<int> secondDie = {6080925, 137, 71208815, 999997958, 135747, 999997687, 12242, 748, 26064512, 999999969, 6710572, 997329688, 999999911, 9228, 6159558, 6086780, 999999898, 999998995, 12084839, 999533714, 999999875, 999999775, 960301305, 999998269, 21158, 7750066, 999735214};
    int X = 999999969;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4993141289437586;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {7173610, 504299, 863666270, 52397895, 8446398, 994022319, 992328475, 994022258, 994022266, 5681, 3, 133935423, 11925820, 128370587, 994021377, 3908336, 993450415, 994021682, 3733};
    int X = 994022319;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4986149584487535;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> firstDie = {0, 8017082, 0, 999586343, 1, 18583281, 999951916, 664829142, 471, 15604647, 0, 260, 999641866, 752009, 15282277, 999959769, 529717, 0, 0, 4042783, 999961837, 999961849, 0, 3, 2574, 573134, 22, 157390278, 3967, 999961696, 149, 999961077};
    vector<int> secondDie = {430234315, 999961822, 440, 1213, 15935483, 999961801, 999961728, 999733493, 100663, 999961739, 999703594, 33171761, 999960422, 2012, 999961834, 8, 999961847, 956392483, 999197097, 15443, 999961732, 999961785, 1182, 992523503, 996155601, 919898, 998206207, 5519, 465325, 999961846, 999933499, 49985};
    int X = 999961849;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48828125;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> firstDie = {212261581, 0, 11032, 1404900, 0, 212722417, 0, 0, 2252926, 8597, 338, 212699631, 205740327, 209217867, 4, 212721756, 3434573, 2082, 9930, 0, 19738161, 490, 0, 675110, 5892961, 37687, 196035439, 33118, 892, 212568608, 208493774};
    vector<int> secondDie = {212623817, 205774514, 212711872, 211871128, 211843572, 212722374, 196961887, 212722413, 7207, 215058, 17, 212722416, 211000073, 237, 1432078, 212721965, 5647, 15044982, 2, 210822642, 170882756, 212675446, 73832296, 212722411, 212529184, 495, 212714206, 212722219, 212722084, 1326696, 212658537};
    int X = 212722417;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4547346514047867;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> firstDie = {993122712, 36608, 555483030, 995529955, 0, 865653385, 995061219, 997120626, 0, 116, 124, 34008, 68, 29379, 166221085, 997120454, 996862155, 38, 34, 27054, 0, 0, 15, 1823782, 5, 0, 552883, 17, 7711211, 575776, 26194929, 1327, 958979871, 228757, 0, 930232906, 1919818};
    vector<int> secondDie = {968277357, 997108720, 603685, 141, 113729096, 997039820, 25, 815199083, 740, 5794, 50301865, 997120621, 98, 997120567, 997120610, 8, 997117701, 997120630, 1000, 1, 997110357, 997120629, 991663346, 10256512, 997105092, 14, 40781584, 997117386, 997107353, 995938718, 12541, 989797991, 997120604, 997119225, 46, 997120618, 997090974};
    int X = 997120630;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4426588750913075;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> firstDie = {1, 2431352, 262, 0, 2431259, 44, 594, 33, 241, 1015495, 2431383, 0, 2, 2423737, 16064, 3, 2430455, 6, 861, 2431393, 2431359, 2779, 2431170, 2595, 57, 74313, 2108, 2430788, 616731, 2429289, 2366939, 7, 0, 2381313, 1478047, 2431041, 159, 10, 2431394, 2431391, 14512, 123084, 2431395, 34886};
    vector<int> secondDie = {2424144, 2431384, 2431390, 2329937, 258085, 444365, 2431396, 2431333, 2045, 2428653, 2356424, 2408400, 2430454, 136, 2431382, 64, 2420999, 65331, 2431260, 3084, 823, 1696303, 9048, 2015, 867471, 4, 104156, 1262308, 522199, 2430503, 2431374, 446562, 2431375, 2095217, 12966, 2324076, 27, 2430929, 2366413, 5047, 176337, 2431387, 2427701, 2431377};
    int X = 2431396;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44163223140495866;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> firstDie = {4, 1, 997387544, 994880859, 999968461, 999972085, 111092558, 6958456, 149259};
    vector<int> secondDie = {999964938, 999971995, 399819406, 887379381, 993450878, 191306, 999971573, 997159412, 999971130};
    int X = 999972097;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32098765432098764;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> firstDie = {511719, 15, 29317, 730, 1, 510978, 315889, 5, 21, 511250, 3635, 511777, 43, 243, 4423, 271794, 4, 11, 511770, 509557};
    vector<int> secondDie = {510381, 510571, 1243, 511757, 97403, 20, 7736, 509316, 511755, 484204, 1135, 511062, 511776, 487097, 501993, 511694, 287837, 511702, 511762, 26};
    int X = 511777;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.315;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> firstDie = {1, 120, 18, 0};
    vector<int> secondDie = {2, 525, 572, 394};
    int X = 572;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3125;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> firstDie = {857, 78881};
    vector<int> secondDie = {999005031, 29528};
    int X = 999005031;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> firstDie = {71655, 39418};
    vector<int> secondDie = {994659874, 993257381};
    int X = 994659878;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> firstDie = {0, 0, 0, 999999938, 0, 0, 999999977, 0, 0, 0, 0, 20318, 999303521};
    vector<int> secondDie = {4753573, 999992431, 978201023, 12, 999591544, 1, 999999872, 3698949, 999945514, 999999982, 999999997, 999427435, 725317951};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4970414201183432;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> firstDie = {0, 0, 0, 207074265, 64624, 0, 999983953, 999986798, 999986518, 0, 0, 0, 0, 999972177, 146445, 0, 0, 0, 999983067, 0, 0, 0, 7665528, 0, 998440555, 999986779, 303550974, 48, 0, 0, 999935430, 0, 0, 11, 0, 0, 133206996, 468, 1720, 0, 238291671, 999960805};
    vector<int> secondDie = {2, 2113491, 12, 999986775, 999986664, 999986790, 999242472, 999981835, 998411394, 4549, 997864498, 978109347, 988124476, 999986684, 999986283, 992314696, 411633810, 999985348, 205, 975072654, 25, 32, 999983354, 10541, 999975704, 342580369, 61239726, 10104534, 194, 39763, 999986777, 107648665, 983493896, 999986378, 999986432, 2842853, 999986797, 950633151, 999982606, 991174328, 999922412, 999986796};
    int X = 999986798;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> firstDie = {17, 23399692, 0, 31671, 2356113, 999994255, 999785698, 1756329, 51, 494525423, 1115, 228452281};
    vector<int> secondDie = {2066, 5, 999994250, 7, 14, 160, 998401278, 21, 642209387, 999126718, 999994232, 6};
    int X = 999994257;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5486111111111112;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> firstDie = {183815570, 0, 999942750, 999966006, 999966522, 99484770, 22};
    vector<int> secondDie = {2, 971168315, 10, 12288782, 999947249, 17134532, 951100554};
    int X = 999966846;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6122448979591837;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> firstDie = {998336511, 19446873, 999991754, 971919973, 494119, 999294243};
    vector<int> secondDie = {5, 999991904, 2, 174352298, 999991567, 124};
    int X = 999991904;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6388888888888888;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> firstDie = {999996376, 999999969, 1479749, 999999889, 593018528, 855659, 246378, 0, 990814744, 999998583, 999999957, 992485981, 999999994, 999995253, 999970559, 992695867, 6036898, 999999991};
    vector<int> secondDie = {866708296, 20695, 309, 442105699, 3649101, 975485215, 34171575, 247881823, 999999990, 1686, 999991971, 2577291, 999972360, 28, 18726363, 705, 973, 999948003};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7191358024691358;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> firstDie = {999999857, 999200513, 12753442, 16356271, 999998731};
    vector<int> secondDie = {972918884, 1773331, 67277, 181388, 476081740};
    int X = 999999888;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.84;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> firstDie = {16885755, 16988805};
    vector<int> secondDie = {478, 16869706};
    int X = 16988805;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {1, 2};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000, 500000};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {553004783, 509477451, 647624790, 543942796, 232933658, 307388835, 555943838, 730591586, 336528454, 879934640, 179609727, 537702473, 348355566, 154440638, 464181750, 709957421, 574781586, 242785155, 520972417, 950184923, 293378838, 319791637, 465199851, 983962854, 140866409, 191181893, 149288522, 262536245, 194889062, 726089973, 911535331, 877740453, 455750376, 235026154, 4041835, 851470536, 73449187, 554727749, 328118644, 721864951, 559269015, 685294237, 991454444, 30968851, 942961769, 503573891, 453989707, 24091315, 319010551, 305157555};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {371573083, 358468430, 753279639, 403284478, 22520933, 546434282, 723065755, 97982478, 597550363, 203560713, 81330621, 543641108, 57098389, 12634333, 66187368, 937262530, 384608944, 963854098, 851368768, 143301033, 871463024, 484956169, 814505425, 115058638, 953290510, 762745379, 898150191, 938583634, 965839424, 557715566, 657172063, 745037327, 658451581, 241637281, 607360350, 613891659, 522401615, 267830711, 510312492, 983671210, 770824049, 438251859, 241953920, 66953349, 361421856, 295628926, 860415599, 590096173, 331499242};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4997917534360683;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {3, 4};
    int X = 5;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> firstDie = {1, 2, 3, 4, 5, 70, 7, 8, 9, 0, 0, 0, 13, 14, 0, 16, 0, 18, 19, 20, 21, 0, 0, 24, 25, 26, 27, 28, 29, 30, 0, 32, 0, 34, 35, 0, 37, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {765934, 377744, 216263, 391530, 669701, 475509, 349753, 887257, 417257, 158120, 699712, 268352, 772844, 78706, 754109, 546394, 118331, 137367, 932170, 957933, 226918, 669848, 937973, 32869, 206981, 706224, 638550, 567593, 488165, 776170, 126552, 950428, 516191, 542625, 40636, 604921, 427945, 719311, 269863, 998485, 937364, 643302, 914711, 267237, 351877, 750432, 579930, 560398, 500676, 970492};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> firstDie = {19, 50, 4};
    vector<int> secondDie = {26, 100, 37};
    int X = 1000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2222222222222222;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> firstDie = {1, 2, 3, 4, 0};
    vector<int> secondDie = {5, 6, 7, 8, 9};
    int X = 10;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> firstDie = {0, 0, 0, 0, 0};
    vector<int> secondDie = {3, 5, 6, 8, 9};
    int X = 10;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.36;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> firstDie = {3, 4};
    vector<int> secondDie = {1, 2};
    int X = 8;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> firstDie = {3, 4};
    vector<int> secondDie = {1, 2};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> firstDie = {16678006, 16737860, 16986736, 16684400, 16930234, 16900595, 16718745, 0, 16957505, 0, 17188383, 16798616, 16979811, 16916109, 0, 0, 0, 0, 17028676, 17164640};
    vector<int> secondDie = {17355908, 17152485, 17080002, 16700407, 16766918, 16695477, 17268762, 16866471, 16893978, 17295366, 17047868, 17233436, 17213681, 17377940, 17013129, 17227187, 17324651, 17237341, 17406523, 17108153};
    int X = 999999997;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4575;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> firstDie = {0, 132262568, 87040238, 51497359, 0, 169142565, 56147172, 17211071, 167697194, 164720946, 252305969, 0, 245335747, 259393484, 30806936, 43450878, 251514692, 111008162, 10739176, 22326414, 0, 132838554, 184128855, 21791398, 247587898, 167297261, 115255435, 193931864, 219076752, 77001069, 194074183};
    vector<int> secondDie = {151975576, 169822846, 33217564, 39719391, 92003691, 212230914, 138417192, 196438573, 103212460, 84618709, 232259095, 80370900, 39798453, 138461731, 232246058, 41298920, 57299232, 121456370, 248938284, 35032531, 77862645, 228470681, 192302163, 8187421, 120113357, 10107235, 38444317, 146624126, 106552096, 185067290, 150195034};
    int X = 265550123;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4994797086368366;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> firstDie = {1, 0};
    vector<int> secondDie = {2, 3};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> firstDie = {6, 0, 0};
    vector<int> secondDie = {2, 3, 5};
    int X = 6;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5555555555555556;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> firstDie = {0, 0};
    vector<int> secondDie = {500000000, 1000000000};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> firstDie = {0, 0, 6, 7, 8};
    vector<int> secondDie = {1, 2, 3, 4, 5};
    int X = 10;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> firstDie = {207579013, 0, 0, 0, 762888636, 98152103, 0, 0, 9580639, 0, 178509023, 0, 0, 558212775, 26389630, 0, 925801173, 0, 656585276, 902071051, 727123763, 0, 0, 0, 520690250, 0, 799313373, 789204467, 0, 0, 0, 806956092, 0, 0, 158398860, 0, 0, 0, 0, 882264705, 877444310, 0, 0, 0, 775142615, 0, 0, 0, 0, 590064714};
    vector<int> secondDie = {506507264, 909420688, 489726670, 55434271, 793692317, 210461043, 901329639, 537850353, 29523792, 614794872, 570497240, 905203770, 706091348, 904237002, 118054687, 337246325, 307178253, 150625750, 896162464, 644505509, 271356543, 1738704, 865692963, 226102989, 593986004, 122173998, 807688148, 583502198, 468916698, 747545899, 468884929, 620479532, 675026050, 541326149, 747075168, 203959041, 191528802, 491192255, 104714246, 101365768, 179252, 960570656, 244081265, 440998363, 674385237, 484916146, 641913151, 917826070, 670850119, 607465477};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> firstDie = {2, 4};
    vector<int> secondDie = {1, 3};
    int X = 4;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> firstDie = {74, 56, 36, 5, 104, 34, 1, 6, 80, 10, 28, 95, 73, 32, 85, 89, 13, 75, 11, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {67, 84, 24, 107, 88, 101, 60, 17, 100, 94, 110, 35, 91, 33, 106, 58, 29, 66, 92, 63, 42, 22, 111, 70, 4, 78, 12, 57, 54, 26, 86, 15, 38, 62, 52, 2, 3, 99, 93, 30, 37, 109, 31, 39, 23, 97, 103, 40, 79, 71};
    int X = 111;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5016;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> firstDie = {0, 217, 11, 457, 105, 277, 467, 229, 0, 0, 207, 317, 142, 0, 146, 470, 45, 99, 115, 101, 488, 433, 258, 267, 0, 29, 400, 237, 314, 10, 0, 284, 74, 294, 454, 0, 77, 88, 0, 0, 463, 222, 202, 57, 219, 262, 471, 0, 27, 203};
    vector<int> secondDie = {218, 465, 187, 63, 311, 328, 477, 278, 360, 298, 414, 373, 209, 296, 416, 214, 166, 497, 441, 372, 449, 355, 403, 419, 135, 349, 319, 255, 103, 272, 38, 464, 265, 376, 469, 226, 324, 250, 185, 56, 248, 438, 89, 149, 411, 75, 435, 153, 392, 341};
    int X = 500;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4928;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {1, 18000001, 36000001, 54000001, 72000001, 90000001, 108000001, 126000001, 144000001, 162000001, 180000001, 198000001, 216000001, 234000001, 252000001, 270000001, 288000001, 306000001, 324000001, 342000001, 360000001, 378000001, 396000001, 414000001, 432000001, 450000001, 468000001, 486000001, 504000001, 522000001, 540000001, 558000001, 576000001, 594000001, 612000001, 630000001, 648000001, 666000001, 684000001, 702000001, 720000001, 738000001, 756000001, 774000001, 792000001, 810000001, 828000001, 846000001, 864000001, 882000001};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22};
    vector<int> secondDie = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 15, 14, 16, 17, 18, 23};
    int X = 53;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49691358024691357;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> firstDie = {14, 0, 0, 70, 8, 64, 0, 0, 34, 28, 36, 46, 0, 66, 0, 0, 144, 68, 0, 63, 137, 0, 24, 50, 41, 88, 10, 127, 57, 31, 0, 124, 0, 43, 71, 61, 13, 173, 47, 0, 170, 65, 1, 49, 17, 45, 72, 172, 26, 18};
    vector<int> secondDie = {139, 108, 107, 98, 138, 83, 159, 182, 999999999, 194, 167, 122, 115, 150, 198, 103, 156, 100, 116, 146, 89, 151, 13371337, 106, 200, 141, 183, 168, 176, 177, 77, 93, 189, 187, 110, 133, 80, 152, 193, 113, 84, 92, 148, 136, 87, 191, 169, 119, 131, 155};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3176;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    int X = 6000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> firstDie = {0, 0, 0, 0};
    vector<int> secondDie = {1, 2, 3, 10};
    int X = 11;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4375;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {1000, 2000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 110000, 120000, 130000, 140000, 150000, 160000, 170000, 180000, 190000, 200000, 210000, 220000, 230000, 240000, 250000, 260000, 270000, 280000, 290000, 300000, 310000, 320000, 330000, 340000, 350000, 360000, 370000, 380000, 390000, 400000, 410000, 420000, 430000, 440000, 450000, 460000, 470000, 480000, 490000, 500000};
    int X = 5550000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> firstDie = {0, 0, 0, 0, 0};
    vector<int> secondDie = {900000000, 900000001, 900000002, 900000003, 900000004};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> firstDie = {4, 5, 0};
    vector<int> secondDie = {1, 3, 2};
    int X = 50;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3100, 3200, 3300, 3400, 3500, 3600, 3700, 3800, 3900, 4000, 4100, 4200, 4300, 4400, 4500, 4600, 4700, 4800, 4900, 5000};
    int X = 1000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> firstDie = {0, 0, 7, 8};
    vector<int> secondDie = {1, 2, 3, 4};
    int X = 8;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {11111, 22222, 33333, 44444, 55555, 66666, 77777, 88888, 99999, 111111, 222222, 333333, 444444, 555555, 666666, 777777, 888888, 999999, 1111111, 2222222, 3333333, 4444444, 5555555, 6666666, 7777777, 8888888, 9999999, 11111111, 22222222, 33333333, 44444444, 55555555, 66666666, 77777777, 88888888, 99999999, 111111111, 222222222, 333333333, 444444444, 555555555, 666666666, 777777777, 888888888, 12345678, 87654321, 123456789, 987654321, 32768, 766794};
    int X = 1000000000;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> firstDie = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> secondDie = {1000002, 1000004, 1000005, 1000006, 1000008, 1000009, 1000010, 1000011, 1000012, 1000013, 1000015, 1000017, 1000019, 1000021, 1000023, 1000025, 1000027, 1000028, 1000030, 1000031, 1000033, 1000034, 1000035, 1000037, 1000038, 1000039, 1000041, 1000042, 1000043, 1000045, 1000047, 1000048, 1000050, 1000051, 1000053, 1000054, 1000056, 1000058, 1000060, 1000061, 1000063, 1000065, 1000066, 1000068, 1000070, 1000071, 1000073, 1000075, 1000077, 1000078};
    int X = 1000090;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> firstDie = {11, 12, 0, 0, 0};
    vector<int> secondDie = {1, 2, 3, 4, 8};
    int X = 12;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.56;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> firstDie = {1, 4, 0, 0};
    vector<int> secondDie = {8, 5, 3, 2};
    int X = 15;
    KingdomAndDice* pObj = new KingdomAndDice();
    clock_t start = clock();
    double result = pObj->newFairness(firstDie, secondDie, X);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=15170&pm=11986
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <queue>
#include <climits>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class KingdomAndDice
{
public:
    double newFairness(vector <int> firstDie, vector <int> secondDie, int X);
};
 
double KingdomAndDice::newFairness(vector <int> firstDie, vector <int> secondDie, int X)
{
    int N = SZ(secondDie);
    sort(RA(secondDie));
    vector<int> lo(N + 1), hi(N + 1);
    int zeros = 0;
    for (int i = 0; i < N; i++)
    {
        int x = firstDie[i];
        if (x == 0)
            zeros++;
        else
        {
            int p = lower_bound(RA(secondDie), x) - secondDie.begin();
            lo[p]++;
        }
    }
 
    hi[0] = lo[0] + zeros;
    secondDie.push_back(X + 1);
    for (int i = 0; i < N; i++)
    {
        hi[i + 1] = min(lo[i + 1] + zeros, secondDie[i + 1] - secondDie[i] - 1);
    }
 
    vector<int> mz(N * N + 1, N + 1);
    mz[0] = 0;
    for (int i = N; i >= 0; i--)
    {
        vector<int> mz2(N * N + 1, N + 1);
        for (int z = 0; z <= hi[i] - lo[i]; z++)
        {
            int add = i * (lo[i] + z);
            for (int j = add; j <= N * N; j++)
            {
                mz2[j] = min(mz2[j], mz[j - add] + z);
            }
        }
        mz.swap(mz2);
    }
 
    int best = -1;
    int bestscore = INT_MAX;
    for (int i = 0; i <= N * N; i++)
    {
        if (mz[i] <= zeros)
        {
            int score = abs(2 * i - N * N);
            if (score < bestscore)
            {
                bestscore = score;
                best = i;
            }
        }
    }
    return best / double(N * N);
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/