/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8479
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

class ErrantKnight {
public:
    string whoWins(vector<int> x, vector<int> y);
};

string ErrantKnight::whoWins(vector<int> x, vector<int> y) {
    string ret;
    return ret;
}


int test0() {
    vector<int> x = {1, 1, 2, 2, 9, 3};
    vector<int> y = {0, 1, 0, 1, 5, 3};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWWWWB";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 7};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWBBBBBWWWWWWWWWWWWWWWWBWWWWWWWBWWWWWWWBWWWWWWWWWB";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {-20, -19, -18, -17, -16, -15, -14, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBWBBWBBWBBBBBBWBBWBBBBBBWBBWBBWBBBBB";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {-42, -2335, -3170, 0, 2963, 1706, -3282, -1962, 0, -828, -392, 3903, 0, -1422, 3719, 0, 0, 1870, -1668, 0, -704, -3323, 1674, 3142, -254, -1548, -663, -38, -724, 0, -317, 0, 0, 0, 3265, -3447, 3891, 0, -3007, -394, 3630, 0, 2757, 967, -1932, 945, -627, 0, 0, -2930};
    vector<int> y = {42, 0, 0, -3479, 0, 1706, 3282, 1962, -2996, 0, 0, 3903, -293, 0, -3719, -1448, 2772, 0, 1668, -1036, 704, -3323, 0, -3142, 0, 0, -663, 38, -724, 3530, 317, 2191, 289, -1041, 0, -3447, 3891, -371, -3007, 0, -3630, 85, 0, 0, 0, -945, 627, 1538, 119, -2930};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBWBBBBBBBWBBBBWBWBWWBBBWWBBBBWBBBBBBBBWBBBBBBW";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {833, 639, 2702, 1976, 3670, 1021, -1079, 2270, -1226, 1097, 3984, -2840, 2353, 3653, 31, -653, -3061, 1965, 3104, -1995, 3456, -250, 2944, -3795, -3782, 2422, -497, -3589, -3100, -1240, -2592, -379, 1546, -408, -398, -1710, -2627, 596, -655, -334, -3720, -3947, -1585, 2900, -1875, -272, -3355, -2195, 2309, 2811};
    vector<int> y = {3112, 1655, -2071, -1694, 2384, 742, -930, 1829, 3572, -3490, 1289, -1366, -3236, 3573, 51, -2850, 1722, -570, 2188, -664, 286, -1618, -3092, -2243, -1414, -3057, 1029, 1165, -3413, -2345, 2359, 535, 2483, 41, -3653, 2833, -981, -3982, 3197, -3519, 734, -2001, -65, -212, -3533, 2892, 2481, -1579, 2617, -2487};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 3990, 3989, 3988, 3987, 3986, 3985, 3984, 3983, 3982, 3981, 3980, 3979, 3978, 3977, 3976, 3975, 3974, 3973, 3972, 3971, 3970, 3969, 3968, 3967, 3966, 3965, 3964, 3963, 3962, 3961, 3960, 3959, 3958, 3957, 3956, 3955, 3954, 3953, 3952, 3951};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWBBWBBWBBBBBWBBBBBWBBWBBWBBBBBWBBBBBWBBBBBWBBBBBW";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 3990, 3989, 3988, 3987, 3986, 3985, 3984, 3983, 3982, 3981, 3980, 3979, 3978, 3977, 3976, 3975, 3974, 3973, 3972, 3971, 3970, 3969, 3968, 3967, 3966, 3965, 3964, 3963, 3962, 3961, 3960, 3959, 3958, 3957, 3956, 3955, 3954, 3953, 3952, 3951};
    vector<int> y = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 3990, 3989, 3988, 3987, 3986, 3985, 3984, 3983, 3982, 3981, 3980, 3979, 3978, 3977, 3976, 3975, 3974, 3973, 3972, 3971, 3970, 3969, 3968, 3967, 3966, 3965, 3964, 3963, 3962, 3961, 3960, 3959, 3958, 3957, 3956, 3955, 3954, 3953, 3952, 3951};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBBWBWBBBWBWBWBWBWBBBWBWBWBWBWBBBWBWBWBWBWBBBWB";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {-10};
    vector<int> y = {0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {3000};
    vector<int> y = {3000};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991};
    vector<int> y = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBBWBWB";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {1, -2, -1, 1, -2, 2, 2, 3, 1, 2, -3, 1, 0, 0, 3, 3, 2, -3, 0, 2, 0, -3, 3, -3, 2, -2, 2, 3, -1, 0, 1, -3, -2, 0, 3, -1, 3, -1, -3, -1, 2, 0, 2, 2, -2, 1, 1, -1, -2, -3};
    vector<int> y = {-1, -2, 1, -2, 3, 1, -3, -1, -3, -3, 1, -2, -1, 3, -2, 0, 0, 0, 2, -2, 1, 1, 3, -1, 1, 3, 2, -2, 2, -2, 3, -2, -2, 3, -2, -1, 1, -1, 2, -3, -1, 1, -2, 2, -1, -1, 1, 0, -2, 3};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWBBWBWBWWBWBWWWWWWWWWWBWWWWWWWBWWWWWBWB";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-3, -3, 2, -3, -1, -2, 2, 2, -1, 1, 3, -3, -1, -3, 1, 2, 1, -3, 2, 1, 1, -1, 1, -1, 2, 2, -2, 1, 2, 2, 3, 1, -1, -1, -2, 2, -2, 2, 1, -1, 1, -2, -3, 2, 1, -3, 3, -3, 1, 3};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBWBBWWWBBBBBBBWBBWBBBBBWWWBWWBBBBWWWWBBBWBWBBBBBB";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-3, -3, -1, 3, -3, -2, -1, -1, -3, -1, -3, 1, -1, 3, 1, 3, 1, -2, 3, 3, 2, -3, 2, 2, 2, 1, -3, -1, -2, -3, -3, -2, 2, 3, 1, -2, 1, -1, -3, -2, -1, 2, 1, 2, -1, -3, 3, 1, 2, 1};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBWBBBBBBBBBBBWBBWBWWWBBBWBBWWBBWBBBWBWBWBBBBWB";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {-3, 3, -1, 3, -3, -2, -2, -2, -2, -1, -2, -3, -1, -3, 2, 2, -1, -1, -3, -3, -2, -1, -1, 2, 1, -1, 2, 1, -3, 3, 1, 2, 3, -1, 1, 2, 3, -2, 1, 3, -2, -1, 2, -1, -2, 2, -3, 1, 2, -2};
    vector<int> y = {-3, 3, -1, 3, -3, -2, -2, -2, -2, -1, -2, -3, -1, -3, 2, 2, -1, -1, -3, -3, -2, -1, -1, 2, 1, -1, 2, 1, -3, 3, 1, 2, 3, -1, 1, 2, 3, -2, 1, 3, -2, -1, 2, -1, -2, 2, -3, 1, 2, -2};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBWBBWWWWWWBWBWWWWBBWWWWWWWWBBWWBWWWBWWBWWWWWWBWWW";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {1, 1, 3, 2, 3, 2, 0, 1, 0, 2, 2, -1, 2, -2, 0, 0, 0, -3, 0, 2, -3, 1, 0, -2, -3, 0, 0, 2, 2, 2, -3, -3, -2, 1, 3, 0, 0, -3, 0, 2, 0, 2, 0, -3, -2, 3, 2, 3, -1, 1};
    vector<int> y = {1, 0, -1, 0, 0, 0, -2, 0, 2, 2, -3, -1, 2, 0, 2, -3, 2, -3, -2, 2, -3, 1, 1, -2, 0, -2, 1, -1, -3, 1, 0, 0, 0, -1, 0, -1, 3, -1, 3, 0, -1, 0, -3, -2, 0, 3, 2, 3, -1, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWWBWWBWWWWWWWBWBWWBWBWBWBWWWBBWWBBBWBWBWBWWBWBWB";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {-4, 5, 5, -9, -2, 1, -1, -3, -10, 3, -2, 5, -1, 5, 0, -6, 4, 10, -5, 1, 6, 8, 7, 0, -5, 4, -1, 1, -5, 5, 1, 4, 8, 7, 7, -9, -2, -9, 7, 7, 4, -4, -3, 5, 6, 4, 0, 8, -10, 8};
    vector<int> y = {5, 2, 1, -4, 9, 1, 2, 8, 1, -9, -10, -8, -2, 4, 9, 6, 2, 6, 7, -9, -4, -5, -3, 8, 10, 6, -1, 2, 7, 3, 3, -4, 6, 0, 5, 1, -10, 10, 0, 6, -4, 4, 5, -5, 4, 4, 10, -7, -1, 8};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWBWWWWWWWBWBWWWWBWBBWBWBBWWW";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {6, 4, -6, -8, 4, -2, 3, -5, 6, 4, -8, 7, 10, 3, 5, -9, -1, -9, 5, 8, 10, -9, 7, 10, -10, 8, -9, -5, 5, 4, 5, -3, -4, -3, -9, 1, 10, -2, -4, 1, -10, 7, 2, 7, 5, 6, 5, 3, 5, 10};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBWBBBBBBBBBWBWBBBWBBBBWBBBBBBBWBBWBBBBWBBBBBBB";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {3, -7, 1, 5, 6, -4, -2, -3, 7, -7, 1, -5, 6, 4, -4, 10, 2, 4, -9, 3, -3, -4, 3, -8, -3, -9, 2, 6, -10, 1, 3, 3, 7, 5, -3, 6, -9, 8, -10, 3, 4, 6, 7, 1, 2, 8, 4, 9, 6, 9};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBWBBBBBBBBBWBWBBBBBBWWBBBBBBBBBWBBBBBBBWBBWBW";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> x = {-4, -5, -5, 4, -6, -2, -8, -8, 6, 8, -1, -9, -3, -7, -5, 9, 10, 2, 7, 2, 2, 5, -2, 3, -6, -7, 7, 8, -6, 6, -1, 7, -5, -10, -10, -6, 4, -2, -8, -10, -9, -8, 9, 9, -2, 1, -3, -7, -5, -1};
    vector<int> y = {-4, -5, -5, 4, -6, -2, -8, -8, 6, 8, -1, -9, -3, -7, -5, 9, 10, 2, 7, 2, 2, 5, -2, 3, -6, -7, 7, 8, -6, 6, -1, 7, -5, -10, -10, -6, 4, -2, -8, -10, -9, -8, 9, 9, -2, 1, -3, -7, -5, -1};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBWWWWWWWBBBBBWWBWWBWBWBBWWWWBBWWWBWWWBWBBWWBBBW";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> x = {-8, -10, -1, 3, 0, 10, -2, 5, 0, 5, 5, 8, 1, 7, 1, 0, 0, 0, 4, -2, 8, 5, 4, 0, 6, 4, -6, 8, -7, 2, -7, 6, 7, 6, 5, -5, -5, -4, 1, -5, 10, -5, 2, 9, 0, 3, -10, -6, 10, -8};
    vector<int> y = {0, 7, -1, 3, -6, 0, -2, 5, -1, -3, 0, 8, -10, 0, -6, -10, -2, -8, 4, -2, 8, -1, 5, 7, 6, 0, 0, -5, -7, 0, -2, 6, 7, 8, 3, 0, -5, 1, 0, -5, 8, -9, 2, 10, -9, 3, 0, 0, 2, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWWBBBWBBWBWWBWBWBBWWWWBWBBWBWWWBWWBBWBBWWWWWBBBWB";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> x = {-17, 20, -2, 20, -29, -5, 0, 18, 23, -24, -14, 7, -1, -7, -21, 21, 22, 10, -3, 25, 24, -26, 11, 7, 8, 7, -18, -24, 21, -12, 29, -4, -10, 7, -20, -26, 23, 20, 19, 17, -8, -21, 23, 26, 24, 26, -1, 11, -13, -19};
    vector<int> y = {-20, 3, -16, 5, -2, -15, -2, -30, -12, -11, -23, -7, 19, -13, -3, 10, -24, -2, 10, -7, 12, -6, -4, 5, -6, 3, 16, -5, -14, -25, 10, 13, -13, -17, 20, -2, -29, -21, -16, 0, 8, 9, -26, -23, -21, 12, 23, 15, -26, 26};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWBWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> x = {-23, -16, -24, 11, -30, 8, 3, 5, 2, -4, 16, -20, 27, 2, 9, -8, 7, 26, -26, -12, -1, -27, 19, 5, -25, -3, -18, -20, 21, 7, -25, 22, -5, 13, 4, 26, 7, -22, 16, 30, 17, -6, -13, -3, -29, 23, 8, -9, 2, 27};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBWBBBWWWBBBBWBWBBBBBBWBBBBBBBBBBBBBBBBBBWWW";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-21, 23, -6, -15, -5, -17, -5, 3, -6, 19, -24, 11, -16, -8, -9, -8, 1, -10, -7, -15, -4, 8, -16, 4, -21, -6, -15, -4, 4, -23, 7, -9, 19, -16, -27, 11, -27, -26, -14, -26, 3, -8, 21, 16, -22, -4, 6, 9, -20, -23};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBBWBBBBBBBBBBWBBBBWBBBBWBWBBBBWBBWBWBBBBBWBBBBWBB";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> x = {-11, -22, -8, -14, -12, -10, -13, 3, 3, 13, 1, 5, -22, 27, -18, -29, -2, -30, -10, -9, -27, 20, -22, 2, -23, -1, 21, -26, -24, 13, 26, 3, -13, -3, 25, -24, -8, 10, -13, 27, -4, 1, 11, 2, -22, -22, 9, -10, -22, 20};
    vector<int> y = {-11, -22, -8, -14, -12, -10, -13, 3, 3, 13, 1, 5, -22, 27, -18, -29, -2, -30, -10, -9, -27, 20, -22, 2, -23, -1, 21, -26, -24, 13, 26, 3, -13, -3, 25, -24, -8, 10, -13, 27, -4, 1, 11, 2, -22, -22, 9, -10, -22, 20};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWWWWWBBBBWBWBBBWBWBBWWWBWBWBBWBBBBBWWBBBWBWWWBWWW";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> x = {0, 23, 3, 0, -6, 7, 20, 15, 11, 7, 7, -8, 16, -19, 1, 0, -23, 11, -8, 17, 14, 0, -30, -6, 15, 4, -9, 28, 0, 0, 0, 4, 28, 27, -17, -17, -3, 0, 0, -17, -13, 0, -10, -22, -5, 14, 0, -23, 12, -30};
    vector<int> y = {29, 0, 3, 15, 6, 0, -12, 15, 0, 7, -22, -8, -19, -19, 1, -30, 0, 0, -13, -1, 14, -7, 0, 0, 0, 11, 20, 0, 23, -28, 20, -13, 0, 0, -17, -17, -12, -9, 4, -1, 20, 3, 1, 0, -5, 14, 13, -23, 0, 2};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBWWBWBBBWWWBWBBBWWWBBBWWWBBBBWBWBBWWBWWBWBBWBBWW";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> x = {-71, 17, -24, -84, -71, -50, -52, 53, -78, -93, -35, 88, -66, -9, 37, 23, -34, -81, -94, -85, -87, -99, -4, 96, -20, -80, 33, 13, -57, -56, -7, -60, -45, -100, 0, -13, -45, 93, -16, 27, -31, 9, 39, 63, -3, 57, 56, 96, -7, 26};
    vector<int> y = {93, 24, -10, 44, 48, -5, 67, 74, -80, -70, 20, 67, -4, 56, -25, -13, 4, 29, -63, 85, 18, -47, -82, 11, -83, 13, 22, -6, -7, -95, 29, -14, -28, 13, 87, 60, -77, 100, 24, -1, 90, 30, 17, 64, 22, 93, -1, -30, -43, -25};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> x = {-86, -42, -62, -83, 62, 95, -65, 21, 41, 23, 53, 98, 79, -19, 99, -76, -27, -36, -91, -100, -59, 71, 88, 12, -95, -54, -28, -23, -72, -50, -29, -98, -77, 29, -89, 71, 15, 82, 21, 35, 46, -72, 53, 76, -89, 21, 42, -69, 61, -57};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBWBBBBBBWBWBBBBBBWBWBBWBBBBBBBWBWBBWBBBWBWBW";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-72, -45, -58, 99, -1, -42, -29, -61, -93, 2, -41, 32, -36, -68, 3, -24, 1, 63, -3, -87, -69, -59, 96, -11, -94, 62, -14, -53, 55, -13, 17, 88, -38, 7, 96, -98, -97, 87, 18, 58, 57, 31, -75, 64, 41, -31, -16, 12, 98, 37};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWBWBBBBWWBBBBBBBWBWWBBBBBBBBBBBBBBBBWBBWBWBBBBWBB";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> x = {-37, 21, -37, 61, -43, 97, -60, -44, 13, -50, 88, -56, 13, 73, 36, 88, 39, -98, -18, -60, -61, 12, -49, 84, -61, -61, 11, 55, 14, 74, -97, 9, 21, 93, -76, 54, -74, -36, 77, 63, 11, -47, 54, 18, 76, 20, 1, -24, -64, 87};
    vector<int> y = {-37, 21, -37, 61, -43, 97, -60, -44, 13, -50, 88, -56, 13, 73, 36, 88, 39, -98, -18, -60, -61, 12, -49, 84, -61, -61, 11, 55, 14, 74, -97, 9, 21, 93, -76, 54, -74, -36, 77, 63, 11, -47, 54, 18, 76, 20, 1, -24, -64, 87};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBWWBWWWBBWWBWBWBWBWBBBBWWBBBBWBWWBBBBBBWWWBWB";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> x = {62, -90, 28, 0, -21, 0, -45, 76, 0, 48, 1, 8, 80, -80, 99, 49, -12, -97, 0, -7, 99, 0, 0, 0, 19, 0, -87, -70, 29, 0, -85, 50, 51, 24, -5, 54, -89, 47, 82, -38, -94, 64, 0, -8, 96, 0, -92, -82, 65, 0};
    vector<int> y = {-37, -90, 28, -63, -21, 88, 10, -41, 41, 48, 0, 0, 0, -80, 0, 0, 0, 0, 69, 0, 99, -81, 50, 73, 71, 10, -87, -70, 29, -13, 0, 0, 51, 0, 0, 0, -89, 47, 82, -63, 0, -7, -24, 0, 80, 22, -92, -3, 0, 54};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWWBBWWBWBBBWWBWBWBBWBBWBBWBBBBBBBWBBWWBWBBWBWWBW";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> x = {-287, 124, -78, -120, -115, 178, -52, -4, -270, -77, -64, -257, -73, 143, 122, -205, 290, -26, 298, 157, -162, -180, -266, -187, 126, -214, 213, 186, 212, 114, 82, -81, -152, 31, 158, -76, 38, 172, -275, 139, 6, -298, 153, -167, -170, 208, 62, -45, -240, -73};
    vector<int> y = {38, 294, 29, -140, 192, -55, 49, -249, 107, 243, 145, -120, -123, 205, -89, 148, 217, -47, 54, 226, 187, -12, -64, 93, -25, -297, 30, -1, -199, 211, -117, 31, 285, -284, 157, 8, -90, 18, 234, 6, 76, 253, 119, 197, -110, 61, -69, 79, -132, 187};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> x = {-300, -198, 125, 67, -164, -180, -47, -190, 92, -30, -197, -226, 11, 161, 289, 157, -290, -189, -72, -251, 95, -14, -226, 79, 271, 62, -163, -115, -98, -60, 269, -218, 112, -74, 105, 296, -199, -5, 137, -44, 24, 29, -256, -61, -174, 273, 260, -291, 221, -204};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWBBBBBBBBBBBBBBBWWBBBBBBBBBBBBBBBWBBBBBBBBBBWBWBB";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {174, -100, -286, 230, 233, -13, -141, -39, 246, -284, -294, -222, -97, -296, 246, 216, -55, -49, -234, -87, 61, -50, -10, 14, 146, 207, -73, -255, -182, 199, -205, -288, -224, -122, 269, 85, -186, 102, -206, 123, 95, 122, 2, -207, 46, -242, -194, -299, 264, 65};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBWWBBBBBBBBBBWWBBBBBWBWBBBBBBBBBBBWBBWWBBBBBB";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> x = {-159, -188, 32, 165, -243, -287, 145, -258, 168, -225, 88, 232, -242, -2, 21, 146, 81, -145, 91, -296, 2, 160, 5, 114, 291, 225, 126, 20, -150, -118, 71, 165, -92, 105, -226, 254, -76, 216, -163, 130, -273, 289, 11, -285, 20, -182, -12, -162, 159, 4};
    vector<int> y = {-159, -188, 32, 165, -243, -287, 145, -258, 168, -225, 88, 232, -242, -2, 21, 146, 81, -145, 91, -296, 2, 160, 5, 114, 291, 225, 126, 20, -150, -118, 71, 165, -92, 105, -226, 254, -76, 216, -163, 130, -273, 289, 11, -285, 20, -182, -12, -162, 159, 4};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWWBBBBBWBWWWWBWBBBWWWBBBBBWBWBBWBWWWWBWBBBBWWWBBB";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> x = {-183, -266, 20, 35, -102, 0, 82, 261, -163, -103, 261, 0, -128, -211, 0, 154, -231, 67, -220, 0, -131, -70, -265, 0, 0, 0, -19, 24, 1, -206, 0, 199, 0, 0, -282, 216, 252, 192, -245, -175, 101, 263, 0, -261, -156, -151, 0, 102, -213, 284};
    vector<int> y = {-183, -109, 0, 0, 0, -80, 0, 0, 0, -103, 261, 146, 0, 0, -238, -214, 194, 0, -220, 25, 24, -70, 80, -176, 258, -204, 0, 0, 1, 0, 297, 199, -280, -200, 0, 0, -89, 0, 0, -175, 101, 165, -242, 0, 0, 0, -35, 102, -213, 284};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWBBBBBWBBBBBBBWWBWBWWWBBBBBWBWBBBBBWBBBBWBWBBBBBW";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> x = {547, -156, -743, 836, -380, 313, 401, -92, -877, 880, -29, -243, -412, 345, 147, -145, 747, -839, 21, -62, -694, 554, 61, -774, 821, -635, 729, 871, -670, -459, 564, -724, 687, -95, -323, 200, -650, -221, 709, -385, -412, 643, 763, -806, -192, 231, 421, -634, -503, 858};
    vector<int> y = {879, -102, -367, 201, 411, 529, 905, 947, 114, 177, -600, 629, 938, -909, 659, 635, -418, 51, 799, -595, -529, -31, 433, 512, -254, 24, 300, 38, 508, 477, -458, -219, -172, 221, 26, 423, 295, 88, -949, -577, -873, 96, -971, -25, -561, 667, -657, -825, -723, 192};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> x = {677, 712, 158, -425, -688, -471, -806, -201, 314, -508, -955, 892, -808, -719, -896, -831, -721, -104, -278, 141, 834, -14, -457, -205, 692, 513, 557, -517, 531, 850, -652, 138, 372, -73, 87, -449, 734, -854, -78, -1000, -191, -179, -588, -750, -370, -646, 698, 923, 664, -359};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBWBWBBBBBBBWBBBWBBBBBWBBWBBBBBWBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {40, -820, 201, -787, -858, 304, 32, -705, -834, -799, -638, -918, 578, 886, -906, 42, -936, -535, -545, -820, -175, 218, 268, 384, -1, -970, 866, 62, 976, -512, -430, -248, 6, -608, -703, 853, 670, -396, 985, 104, 257, 549, -968, -360, 831, -701, -663, -398, 157, 775};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBWBBBBWBBBWBBBBBBBBBBBBBBBBBBBBBBBBBBBBBWBBWBWBBB";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> x = {942, 563, 650, 131, -130, -312, -324, 189, 454, 672, 107, -792, -700, -432, 828, -534, 116, 763, 334, 561, 328, -799, -620, 99, -214, -829, 473, 11, -701, -152, -439, -878, 287, 177, -631, 641, -594, 194, 858, -642, 910, 264, 493, 432, -847, -825, 53, -902, -677, 338};
    vector<int> y = {942, 563, 650, 131, -130, -312, -324, 189, 454, 672, 107, -792, -700, -432, 828, -534, 116, 763, 334, 561, 328, -799, -620, 99, -214, -829, 473, 11, -701, -152, -439, -878, 287, 177, -631, 641, -594, 194, 858, -642, 910, 264, 493, 432, -847, -825, 53, -902, -677, 338};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBWBWWBBWWBWWWBBWBWBWBWBWBBBBWBWBBBBBWBBWWBWBBBWBW";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> x = {-111, 41, 278, 72, 0, -642, 917, 222, -499, -166, -233, 0, 828, -52, 296, -231, 581, 115, -732, 0, 733, -618, 0, 400, -865, 31, -245, 139, 346, -384, 0, -951, 21, 946, -524, 459, 174, 547, 947, -365, -597, 785, 0, -379, -152, 0, -879, -488, 0, -444};
    vector<int> y = {-111, -871, 749, 72, -378, -642, 700, 222, 0, -166, -233, -931, 828, -52, 0, 0, 329, 0, 0, -989, 413, -618, 28, 0, 264, -545, 0, 139, 0, 246, 455, 0, 21, 946, -524, 0, 174, 547, 0, 0, -335, 785, -929, -379, 0, -817, -879, -371, -481, -444};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWWWWBWBBWBBBWBWWBBBWBBBWWBBBWBWBWWWBBBBWBBBBBBWBW";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> x = {420, 1168, -1877, -1961, 1264, -135, 1992, 860, -1302, 393, 1654, -84, 1187, 510, -2, -1758, 1289, -1630, -1678, -617, -1467, -1012, 1386, -1927, -568, 1345, -194, -250, -1284, 1132, 942, 1285, -1944, -1574, -683, -1037, 1911, -1563, -465, 1602, 1056, -1999, -258, -1677, 1589, -1307, 208, 479, 1697, 1599};
    vector<int> y = {1583, -1616, 1677, 712, -222, 788, -1752, -543, -1630, 1291, 1927, 244, 1145, -18, 922, -407, -1290, 1440, 892, 198, 216, 888, 1913, 347, -1529, -606, -1168, -1796, -1230, 248, -339, -147, -1741, 237, -1006, 182, 19, -1174, -1528, -228, 1731, 1265, 329, -1661, -427, 1161, -710, -1476, 1278, 493};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> x = {-1252, 782, 1604, -1765, 1915, 390, 193, -1608, -569, -473, 838, 674, 1098, 843, 1110, 1308, 482, -1096, 1193, -578, -557, -1112, 136, -1740, -1600, -1548, -1980, -1742, 135, 1231, -989, -1330, -1227, -1787, -163, -1741, -15, -389, 163, -717, -1859, -1594, -156, 289, 794, -161, -1041, 1860, 1737, -1924};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBBBBBBBBBWWBBBBBBBBBBBBBBWBBBWBBBWBBWBBBBBBWBWB";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {1686, -28, -301, -903, 1836, 1933, 49, -1363, 1428, 437, -1636, -374, 620, -1940, 1629, -58, -1297, -566, 175, 1395, -1724, 761, 350, 1942, -1307, 872, 61, -5, -863, 868, -855, 1364, -50, 1791, 81, -1732, -500, 456, 98, 664, 33, 150, 998, 15, 1693, -678, -1290, -962, 1789, 1984};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBWWBBBBBBBBBWBBBBWBBBBBBBBBBWBBWWBBBBBWBBWBBBBBB";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> x = {1785, 1991, -537, -237, 1774, 1505, 25, 188, -35, 1579, -1367, -1606, 1764, -521, -381, -936, -792, 819, 937, 1546, 975, -621, 1987, -1991, 1215, -1069, -1653, 1499, -1377, -367, 1033, -33, -115, 1841, 393, -1975, -1546, -1747, 1224, 639, -372, -36, -271, -1694, -248, 799, -132, 287, 1960, 1064};
    vector<int> y = {1785, 1991, -537, -237, 1774, 1505, 25, 188, -35, 1579, -1367, -1606, 1764, -521, -381, -936, -792, 819, 937, 1546, 975, -621, 1987, -1991, 1215, -1069, -1653, 1499, -1377, -367, 1033, -33, -115, 1841, 393, -1975, -1546, -1747, 1224, 639, -372, -36, -271, -1694, -248, 799, -132, 287, 1960, 1064};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBBWBBWBBBWBBBWWBBWBBBBBBBBBBBBBBBBWBWBWWBWWBWBWW";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> x = {1434, 0, 1616, -222, -1149, -1109, 0, 0, 739, 635, 1102, 0, 109, 1555, 0, 0, 0, 0, 1811, 1472, 1873, 0, -22, 0, 0, -1208, 917, 0, 0, -366, 330, 1616, 0, 789, 615, 0, 925, -1293, 0, 0, -319, 1628, -1244, 0, -1853, 1757, 582, 0, 579, 0};
    vector<int> y = {-1537, -583, 0, -1421, -1149, -1109, 1430, -1039, 920, 0, -1368, -1439, 0, 0, -1033, 597, -1947, -1006, 0, -1792, 604, -664, -552, -1772, -1619, -1208, 0, 92, 1704, 0, 0, 587, -1726, -150, -835, 903, 925, -1293, -1838, 924, 155, 678, 654, 1483, -1853, 1050, 0, -1019, 579, 467};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBBWBBBBWBWBBBBWWBBWWBWBBWBBBBBWBWWWBBBBWWWBBWBBBB";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> x = {-1504, -1318, 1505, -3088, -1048, 891, 555, 3091, 722, 3620, -1483, -2311, -2029, 2867, 3484, 452, 3880, -574, 596, -1238, 579, -1600, 2928, -3450, 3241, -534, -15, 18, -1954, 2755, 640, 2777, 342, -3633, -3021, -459, 2857, 2909, 1450, 1114, -906, -1998, 365, -1008, 1920, 1975, 3815, -1062, -1593, -2417};
    vector<int> y = {3727, 3813, -2627, 589, 1329, 1843, -1201, 1009, 3708, 2761, -3859, 2597, -1759, -3266, 1849, -1717, -1774, 3271, 1538, 2839, 2105, -3005, 2792, -1379, 3733, -2329, -992, 3823, 2965, 2346, 2532, -1758, -3824, -1678, -3044, -2800, -3949, -884, 3783, -1723, 3168, -1872, -3843, -3028, -3180, 360, -2413, -2112, -3931, 2497};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> x = {-2475, 2689, -2094, -2996, 1472, -3446, -2777, -547, -2162, 1601, 2400, 2874, 1509, -3183, 514, 724, 1629, -3931, -3293, -3422, 3197, -2421, -1426, -1044, 1755, -1224, 111, 2237, -1447, 2984, 609, -503, 3235, 3610, 3075, -2009, -3382, 2414, -3562, 2090, 1699, 2035, 2148, 761, -2609, 1484, 2905, -2902, -1916, -3334};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBBBBBBBBBBBWWBBWBBBBWBBWBWBBBWBBBWBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {-1229, 3751, 2056, 1017, 3221, 2607, 3067, 341, -1866, -3105, 24, -341, -2192, 2383, -3906, 188, -2066, 3217, 2965, 1703, -303, -489, 3268, -2062, -3118, 3426, 3588, 2943, -1769, 2251, 612, -294, -3886, 3924, 1114, -666, -287, 492, -2518, 1589, -2588, 325, 3193, -1541, -2254, -3467, -2372, -2799, 2145, -159};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBWBWBBBWBBBBWBBBBBWWBBBBBWBBBBBBBWBBBBBBBBBBBWWW";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> x = {2081, 3858, 2594, -3787, -3634, -2931, -1775, -3127, 3217, 3952, -1402, -567, -629, -3361, 785, 1039, -198, -2338, -3018, -2901, 2708, 20, 2304, 1627, -2453, -1071, -2259, 2265, -2881, 3788, 2830, 3783, -2582, -1649, -2789, 275, -3451, -1504, 756, -1649, 2000, -2375, -2459, -1461, -3501, 1131, -524, 3873, -3624, -2055};
    vector<int> y = {2081, 3858, 2594, -3787, -3634, -2931, -1775, -3127, 3217, 3952, -1402, -567, -629, -3361, 785, 1039, -198, -2338, -3018, -2901, 2708, 20, 2304, 1627, -2453, -1071, -2259, 2265, -2881, 3788, 2830, 3783, -2582, -1649, -2789, 275, -3451, -1504, 756, -1649, 2000, -2375, -2459, -1461, -3501, 1131, -524, 3873, -3624, -2055};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BBWBWBBBBWWBBBBBBWBBWWWBBBBBBWWBWBBBBWBBWBBBBBWBWB";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> x = {-1709, 0, 0, 2744, 0, -1936, 0, -1928, -1014, -22, -2681, 0, 0, 3371, 0, 0, 0, 1072, -2595, 2743, -2050, -404, 2014, -370, -2580, -2546, 0, -1418, 765, 0, 0, -333, 0, 449, -1068, 0, 0, 1336, 0, 0, 1404, 3019, -1756, 1787, -2123, 0, 1944, 3046, 2502, 3797};
    vector<int> y = {989, 3577, 3747, 0, -764, -1936, -3496, 0, -1014, -2964, -2681, -406, -1153, -85, 1279, 1259, 1864, 2644, 0, 2743, -2050, -2836, 0, -370, 2612, -2546, 370, 0, 3992, 968, 3160, -333, 498, 345, 2320, -3806, -2549, 3693, -1170, 3144, -3670, 3019, 0, 3773, -1065, 2483, 0, -2108, 383, -806};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBWBBBWBBBWBBBWWBWWBWWWBBWBBBBWWBBWWBWBBWWBWWWW";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 1, 2, 3, 4, 5, 6, 7, 7};
    vector<int> y = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 7};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWBBBBBWWWWWWWWWWWWWWWWBWWWWWWWBWWWWWWWBWWWWWWWWWB";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> x = {1641, 1089, -1763, -3854, -350, -1333, -2412, -770, -162, 1015, -3700, 3294, 2930, -2443, -3531, 3698, -3902, -2028, -2384, -308, -2136, -3761, 2423, -1374, -3349, 2849, 3297, -3745, 1825, -438, -2369, -3468, -3866, 1067, 1623, 241, -3603, 1938, 2560, -2136, -673, -2747, -599, -3954, 4000, 3253, 3573, -2959, 3382, 0};
    vector<int> y = {1826, -3496, 1180, 3296, -2963, 3009, -3435, -404, -3162, -3321, -2022, -1319, -2067, 2279, -2517, -3917, -14, -1832, 1028, -1738, -3037, 478, -1177, -1961, -218, -108, -1260, 1063, 2165, -1601, -415, -302, 3563, 3398, -862, 695, -2983, -1461, -2184, -971, -150, 651, 850, 279, -953, 2157, -156, 3912, -4000, 336};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWB";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> x = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, -4000, -3999, -3998, -3997, -3996, -3995, -3994, -3993, -3992, -3991};
    vector<int> y = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, -4000, -3999, -3998, -3997, -3996, -3995, -3994, -3993, -3992, -3991};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBBWBWBWBWBBBWBWB";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -100, -9, -8, -7, -6, -5, -4, -3, -2, -1, 100, 1000, -100, -1000, 50, 1, 2, 3, 4, 5, 6, 7, 8, 976, 10, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 100, 1000, -100, -1000, 50};
    vector<int> y = {100, 1000, 999, 998, 997, 996, 950, -500, 300, 200, 100, 1000, 999, 998, 997, 996, 950, -500, 300, 200, 100, 1000, 499, 998, 997, 996, 150, -500, 300, 200, 100, 1000, 999, 998, 997, 996, 950, -500, 300, 200, 100, 1000, 999, 998, 997, 996, 950, -500, 300, 200};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> x = {2013, -237, 3036, 1467, 2065, -481, -3341, -3949, 1650, 2142, 2956, -2103, -2022, -909, -2393, -2009, -1853, 1438, -3128, 1892, 2958, 3813, 2410, -3972, -3941, 1082, 1097, 2368, 2222, 108, 1766, -655, 992, 3267, -1874, 1699, -320, 698, -3298, -2351, -3885, -329, 188, -1112, -605, 2632, 2422, -2045, 3337, -3291};
    vector<int> y = {2193, 1980, -2986, 1095, 2543, 2273, 3913, -914, 3505, -2708, -1558, -2236, 3642, -2633, -896, 464, -3935, 2223, 3623, -1469, -1915, -2789, 1028, -675, -1586, 80, -3254, 1209, -253, 1343, -1408, 1452, 3197, 1294, 1050, -3273, -2663, -3210, -1914, -3166, 1139, 3513, -1934, 1845, 2515, 2325, -1815, -3999, 3960, -3203};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> x = {-4000};
    vector<int> y = {-4000};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> x = {-4000, -4000, -4000, -4000, -4000, -3999, -3999, -3999, -3999, -3999, -3998, -3998, -3998, -3998, -3998, -3997, -3997, -3997, -3997, -3997, -3996, -3996, -3996, -3996, -3996};
    vector<int> y = {-4000, -3999, -3998, -3997, -3996, -4000, -3999, -3998, -3997, -3996, -4000, -3999, -3998, -3997, -3996, -4000, -3999, -3998, -3997, -3996, -4000, -3999, -3998, -3997, -3996};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWBWWWWWWWWWWWBWWWWWB";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> x = {4000, -4000, 3999, -3999, 3998, -3998, 3997, 2717, 3997, -3997, 1763, -3996, 2938, -3995, 2759, -3994, 3993, -3993, 3992, -3992, 3813, -3991, 1483, -3990, 3898, -3989, 3988, -3988, 3987, -3987, 3986, 1829, 791, 1781, 3986, 1158, 3986, 3227, 3986, -3986, 1098, -3985, 3984, 2601, 3984, -3984, 3983, -3983, 3982, -3982};
    vector<int> y = {4000, -4000, 3999, -3999, 3998, 3622, 3998, -3998, 3997, 639, 1474, -3997, 3996, -3996, 3995, -3995, 3994, 3912, 331, -3994, 3993, 1428, 3703, 3102, 3993, -3993, 3992, 1012, 3992, -3992, 3991, 386, 3338, 2318, 962, 2288, 3991, 3367, 3991, -3991, 3347, 889, 3990, 415, 1143, -3990, 3989, 550, 3989, 234};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWBBWWWWBWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> x = {4000};
    vector<int> y = {3987};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> x = {-481, -41, 44, 324, 203, 127, -313, 166, -130, 113, -93, -335, -272, -216, 223, 182, -369, 220, -476, -198, 116, -445, 136, -409, -39, -313, -247, 134, -314, -335, -85, -295, 124, -188, -119, 179, 439, 69, -155, 161, -318, -396, -322, -90, -111, 402, -56, 372, 122, -32};
    vector<int> y = {-326, 90, 376, -337, -467, 189, -150, -214, -177, 388, -49, -409, -406, -73, -97, 327, -393, 194, -104, -48, -145, 430, 57, 33, 192, -202, 287, -363, -330, 261, 457, 196, -149, 333, 359, 237, 22, 61, -477, -302, -50, 327, -211, 396, -246, -456, 223, 213, -410, -28};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> x = {-4000, 3999, -3998, 3997, -3996, 3995, -3994, 3993, -3992, 3991, -3990, 3989, -3988, 3987, -3986, 3985, -3984, 3983, -3982, 3981, -3980, 3979, -3978, 3977, -3976, 3975, -3974, 3973, -3972, 3971, -3970, 3969, -3968, 3967, -3966, 3965, -3964, 3963, -3962, 3961, -3960, 3959, -3958, 3957, -3956, 3955, -3954, 3953, -3952, 3951};
    vector<int> y = {4000, -3999, 3998, -3997, 3996, -3995, 3994, -3993, 3992, -3991, 3990, -3989, 3988, -3987, 3986, -3985, 3984, -3983, 3982, -3981, 3980, -3979, 3978, -3977, 3976, -3975, 3974, -3973, 3972, -3971, 3970, -3969, 3968, -3967, 3966, -3965, 3964, -3963, 3962, -3961, 3960, -3959, 3958, -3957, 3956, -3955, 3954, -3953, 3952, -3951};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBBWBWBBBWBWBWBWBWBBBWBWBWBWBWBBBWBWBWBWBWBBBWB";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> x = {3950, 3951, 3952, 3953, 3954, 3955, 3956, 3957, 3958, 3959, 3960, 3961, 3962, 3963, 3964, 3965, 3966, 3967, 3968, 3969, 3970, 3971, 3972, 3973, 3974, 3975, 3976, 3977, 3978, 3979, 3980, 3981, 3982, 3983, 3984, 3985, 3986, 3987, 3988, 3989, 3990, 3991, 3992, 3993, 3994, 3995, 3996, 3997, 3998, 3999};
    vector<int> y = {4000, -4000, 3999, -3999, 3998, -3998, 3997, -3997, 3996, -3996, 4000, -4000, 3999, -3999, 3998, -3998, 3997, -3997, 3996, -3996, 4000, -4000, 3999, -3999, 3998, -3998, 3997, -3997, 3996, -3996, 4000, -4000, 3999, -3999, 3998, -3998, 3997, -3997, 3996, -3996, 4000, -4000, 3999, -3999, 3998, -3998, 3997, -3997, 3996, -3996};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWBWW";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> x = {-961, 2443, 528, 1117, 1607, -3574, -2208, 1704, 865, 3975, 3611, -3880, -3933, 3638, -943, 3281, -1576, -8, 460, -1712, 3918, 1307, -3527, -2015, -2784, 2149, -2289, 3138, -1451, -627, -731, 2343, -1430, -3450, 213, -3824, -3024, 2759, 1880, 2596, 2734, 2245, 2716, 2801, 1882, -1474, 2835, -2941, 2519, 48};
    vector<int> y = {1923, 3884, -3937, 1448, -801, 707, -1262, 1099, -3456, -3299, 281, -3130, 540, -2590, -802, -1574, 2694, -3616, 3538, 2916, 2355, 2091, -1889, -518, -3998, -1365, 1483, 182, -3578, -683, -849, 3099, -800, -786, 1301, 3153, -3326, -3962, 1005, -2782, -2506, -2715, -1912, 2034, -1305, 2040, -3540, -1858, 3178, 3998};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> x = {4000, 3900, 1234, -2535, -432, -10};
    vector<int> y = {-4000, 15, -2398, -3282, 15, 0};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWB";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> x = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 456, 789, 101, 123, 413, 41, 125, 421, 123};
    vector<int> y = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, -4000, 4000, -4000, 4000, -4000, 4000, -4000, 4000, -4000, 4000, -1234, -1424, 1234, -2141, 561, -142, 144, -1423, 123, -413, 12, 34, 56, 78, 90, -12, -34, -56, -78, -90, 143, 145, -143, 401, 1043, -14, -1234, 51, 412, 1000};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBBWBWBWWWWWWWWWWWWWWWWWWWWWBBBWWBBBWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> x = {2511, 2729, -2444, -3402, 2740, -3496, -147, -549, 2340, 3320, 1603, -3420, -3165, -1528, -98, 1735, 3892, 3657, 1128, 3457, -327, 2403, -2380, 114, -544, -3966, -2030, -1725, 2936, 3119, 1604, -843, -2677, 3211, 1081, 2910, 1499, 2427, 283, -3989, 1879, 1740, 1674, -431, 3235, -494, 3728, 2792, 1696, -2700};
    vector<int> y = {1384, -3600, -2488, -2744, -64, -2301, -683, -1220, 3465, -2578, -2837, 2359, 3055, 1481, -2055, 996, 1734, 3769, 1559, -1163, -3330, 1692, 3069, 159, 3962, -611, -1791, -3243, -3153, -541, -2077, 1310, 1920, -1631, -241, -466, 185, 3139, 2241, -3308, -903, 1411, 2349, 408, 472, 797, 1312, 1472, -60, 3726};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> x = {0, 0, 0, 0, 0, 0};
    vector<int> y = {9, 10, 11, 9, 12, 13};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBBWWB";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> x = {3831};
    vector<int> y = {3831};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> x = {3899, 4000, 3689, 3895, -3699, -3915, -2989, 3556, 3686, -2986, 3861};
    vector<int> y = {4000, -2369, 3698, 3945, -3959, 4000, 4000, -2369, 3698, 3945, -3959};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> x = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> y = {50, 51, 52, 53, 54, 55, 56, 57, 4000, 3999};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "BWBBWBBWBW";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> x = {1, -10, -100, 1, 324, -123, -45, 123, 0, 0, 0, 0, 132, 123, -123, -314, -123, 12, 213, -321, 123, 1, -123, 0, 455, 67, 789, 25, -45, 42, 1234, -123, 423, -536, -123, 24, 213, 41, -123, 132, -14, 142, -14, -124, 14, 142, 536, 234, -345, 456};
    vector<int> y = {123, -45, 0, 0, 345, 34, 234, -100, -123, -4000, 4000, 134, 536, -467, -234, 456, -13, -123, -453, 2345, -123, 143, 4000, -432, 435, 123, 42, 135, 123, 123, 435, 123, 453, 132, -123, -132, 24, -52, 231, -34, 1324, -213, 234, 123, 234, 123, -1000, -231, -4000, 4000};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWBBWWWWWBBBWWWWWWWWBWWWWWWWWWWBWWBWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> x = {4000, 3999};
    vector<int> y = {4000, 3999};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WB";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> x = {4000, 4000, 399, 1000, 1001, 1002, 234, 234, 12, 321, 32, 234, 25, 234, 43, 234, 54, 23, 123, 543, 213, 234, 45, 23, 24, 4, 56, 34, 23, 24};
    vector<int> y = {-4000, 4000, 399, 0, 0, 0, 546, 456, 3, 23, 4, 345, 34, 23, 23, 34, 45, 45, 4, 23, 2, 24, 34, 34, 453, 34, 53, 4, 45, 45};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WWBBBBWWWWWWWWWWWWWWWWWWWWWWWW";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> x = {9, 0};
    vector<int> y = {0, 9};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WW";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> x = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 3990, 3989, 3988, 3987, 3986, 3985, 3984, 3983, 3982, 3981, 3980, 3979, 3978, 3977, 3976, -4000, -3999, -3998, -3997, -3996, -3995, -3994, -3993, -3992, -3991, -3990, -3989, -3988, -3987, -3986, -3985, -3984, -3983, -3982, -3981, -3980, -3979, -3978, -3977, -3976};
    vector<int> y = {4000, 3999, 3998, 3997, 3996, 3995, 3994, 3993, 3992, 3991, 3990, 3989, 3988, 3987, 3986, 3985, 3984, 3983, 3982, 3981, 3980, 3979, 3978, 3977, 3976, -4000, -3999, -3998, -3997, -3996, -3995, -3994, -3993, -3992, -3991, -3990, -3989, -3988, -3987, -3986, -3985, -3984, -3983, -3982, -3981, -3980, -3979, -3978, -3977, -3976};
    ErrantKnight* pObj = new ErrantKnight();
    clock_t start = clock();
    string result = pObj->whoWins(x, y);
    clock_t end = clock();
    delete pObj;
    string expected = "WBWBBBWBWBBBWBWBWBWBWBBBWWBWBBBWBWBBBWBWBWBWBWBBBW";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14946025&rd=13503&pm=8479
********************************************************************************
#include <algorithm> 
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
#include <iterator> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <string> 
#include <valarray> 
#include <vector> 
 
using namespace std; 
 
const int inf = 1000000000; 
const double eps = 1e-8; 
const double PI = 3.1415926535897932384626433832795; 
 
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef long double ld; 
typedef vector<ld> vd; 
typedef pair<int,int> pii; 
typedef long long ll; 
typedef pair<ll, ll> pll; 
typedef vector<bool> vb; 
typedef vector<string> vs; 
 
#define MP make_pair 
#define all(v) (v).begin(), (v).end() 
 
const int MAXN = 4001; 
bool win[MAXN][MAXN]; 
bool calc[MAXN][MAXN]; 
 
int dx[8] = {2,1,-1,-2,-2,-1,1,2}; 
int dy[8] = {1,2,2,1,-1,-2,-2,-1}; 
 
bool first_win(int x, int y) 
{ 
  if(x < 0) 
    x = -x; 
  if(y < 0) 
    y = -y; 
  if(x < y) 
    swap(x, y); 
  if(x != y && x != 0 && y != 0) 
    return true; 
  if(x == 0 && y == 0) 
    return false; 
  if(calc[x][y]) 
    return win[x][y]; 
  calc[x][y] = true; 
  bool& res = win[x][y]; 
  for(int dir = 0; dir < 8; dir++) 
  { 
    int curx = x; 
    int cury = y; 
    while(1) 
    { 
      int nx = curx + dx[dir]; 
      int ny = cury + dy[dir]; 
      if (nx * nx + ny * ny < curx * curx + cury * cury) 
      { 
        if(!first_win(nx, ny)) 
        { 
          return res = true; 
        } 
        curx = nx; 
        cury = ny; 
      } 
      else 
        break; 
    } 
  } 
  return res = false; 
} 
 
class ErrantKnight 
 { 
  public: 
  string whoWins2(vector <int> x, vector <int> y)  
  { 
    string result; 
    for(int i = 0; i < x.size(); i++) 
      if(first_win(x[i], y[i])) 
      { 
        result += 'W'; 
      } 
      else 
        result += 'B'; 
    return result; 
  } 
 
  string whoWins(vector <int> x, vector <int> y)  
  { 
    string result; 
    for(int i = 0; i < x.size(); i++) 
      if(first_win(x[i], y[i])) 
      { 
        result += 'W'; 
      } 
      else 
        result += 'B'; 
    return result; 
  } 
   
 
}; 
 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/