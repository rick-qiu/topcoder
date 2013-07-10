/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7741
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

class Aircraft {
public:
    string nearMiss(vector<int> p1, vector<int> v1, vector<int> p2, vector<int> v2, int R);
};

string Aircraft::nearMiss(vector<int> p1, vector<int> v1, vector<int> p2, vector<int> v2, int R) {
    string ret;
    return ret;
}


int test0() {
    vector<int> p1 = {15, 50, 5};
    vector<int> v1 = {25, 1, 0};
    vector<int> p2 = {161, 102, 9};
    vector<int> v2 = {-10, -10, -1};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {-2, 2, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {-2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {2, 2, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> p1 = {-4921, 250, 5852};
    vector<int> v1 = {-2, 1, -2};
    vector<int> p2 = {-2, -1729, -9307};
    vector<int> v2 = {-2, 0, 0};
    int R = 9864;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> p1 = {-6987, -881, -5232};
    vector<int> v1 = {0, -2, -2};
    vector<int> p2 = {9835, -872, 8837};
    vector<int> v2 = {-1, -2, -4};
    int R = 8755;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> p1 = {7492, 131, -2802};
    vector<int> v1 = {0, 1, 1};
    vector<int> p2 = {602, -9362, 9112};
    vector<int> v2 = {1, 3, 0};
    int R = 6444;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> p1 = {-9760, -689, 6267};
    vector<int> v1 = {2, 2, -2};
    vector<int> p2 = {7881, -1423, 4867};
    vector<int> v2 = {0, 1, -2};
    int R = 8660;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> p1 = {-2838, -7940, -2936};
    vector<int> v1 = {1, 1, -2};
    vector<int> p2 = {532, 3850, 9590};
    vector<int> v2 = {1, 0, -3};
    int R = 3410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> p1 = {-4921, 250, 5852};
    vector<int> v1 = {-2, 1, -2};
    vector<int> p2 = {-2, -1729, -9307};
    vector<int> v2 = {-2, 0, 0};
    int R = 9863;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> p1 = {-6987, -881, -5232};
    vector<int> v1 = {0, -2, -2};
    vector<int> p2 = {9835, -872, 8837};
    vector<int> v2 = {-1, -2, -4};
    int R = 8754;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> p1 = {7492, 131, -2802};
    vector<int> v1 = {0, 1, 1};
    vector<int> p2 = {602, -9362, 9112};
    vector<int> v2 = {1, 3, 0};
    int R = 6443;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> p1 = {-9760, -689, 6267};
    vector<int> v1 = {2, 2, -2};
    vector<int> p2 = {7881, -1423, 4867};
    vector<int> v2 = {0, 1, -2};
    int R = 8659;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> p1 = {-2838, -7940, -2936};
    vector<int> v1 = {1, 1, -2};
    vector<int> p2 = {532, 3850, 9590};
    vector<int> v2 = {1, 0, -3};
    int R = 3409;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> p1 = {-8509, 9560, 345};
    vector<int> v1 = {-89, -33, 62};
    vector<int> p2 = {-5185, -1417, 2846};
    vector<int> v2 = {-58, 24, 26};
    int R = 8343;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> p1 = {-8509, 9560, 345};
    vector<int> v1 = {-89, -33, 62};
    vector<int> p2 = {-5185, -1417, 2846};
    vector<int> v2 = {-58, 24, 26};
    int R = 8344;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> p1 = {-8837, -2570, -3892};
    vector<int> v1 = {22, 45, -29};
    vector<int> p2 = {9503, 1162, 7241};
    vector<int> v2 = {-95, -9, -66};
    int R = 7116;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> p1 = {-8837, -2570, -3892};
    vector<int> v1 = {22, 45, -29};
    vector<int> p2 = {9503, 1162, 7241};
    vector<int> v2 = {-95, -9, -66};
    int R = 7117;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> p1 = {872, -4636, -3909};
    vector<int> v1 = {68, 46, 11};
    vector<int> p2 = {7185, 703, 1529};
    vector<int> v2 = {-88, -7, 96};
    int R = 8890;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> p1 = {872, -4636, -3909};
    vector<int> v1 = {68, 46, 11};
    vector<int> p2 = {7185, 703, 1529};
    vector<int> v2 = {-88, -7, 96};
    int R = 8891;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> p1 = {-7163, -371, -2459};
    vector<int> v1 = {-59, -41, -14};
    vector<int> p2 = {-2398, -426, -5487};
    vector<int> v2 = {-43, 27, 67};
    int R = 5410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> p1 = {-7163, -371, -2459};
    vector<int> v1 = {-59, -41, -14};
    vector<int> p2 = {-2398, -426, -5487};
    vector<int> v2 = {-43, 27, 67};
    int R = 5411;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> p1 = {7448, -4019, 7503};
    vector<int> v1 = {80, 81, -74};
    vector<int> p2 = {9487, 320, 7057};
    vector<int> v2 = {30, -17, 80};
    int R = 3643;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> p1 = {7448, -4019, 7503};
    vector<int> v1 = {80, 81, -74};
    vector<int> p2 = {9487, 320, 7057};
    vector<int> v2 = {30, -17, 80};
    int R = 3644;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> p1 = {-3524, -430, 9848};
    vector<int> v1 = {-82, -72, 55};
    vector<int> p2 = {-7590, -8706, 9853};
    vector<int> v2 = {-97, -33, 37};
    int R = 7204;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> p1 = {-3524, -430, 9848};
    vector<int> v1 = {-82, -72, 55};
    vector<int> p2 = {-7590, -8706, 9853};
    vector<int> v2 = {-97, -33, 37};
    int R = 7205;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> p1 = {4431, -7298, 3341};
    vector<int> v1 = {34, 71, 35};
    vector<int> p2 = {906, 69, 2117};
    vector<int> v2 = {72, -81, 83};
    int R = 2010;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> p1 = {4431, -7298, 3341};
    vector<int> v1 = {34, 71, 35};
    vector<int> p2 = {906, 69, 2117};
    vector<int> v2 = {72, -81, 83};
    int R = 2011;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> p1 = {4274, -3305, 1209};
    vector<int> v1 = {-19, 97, -57};
    vector<int> p2 = {-14, 5972, 857};
    vector<int> v2 = {8, -47, -56};
    int R = 2521;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> p1 = {4274, -3305, 1209};
    vector<int> v1 = {-19, 97, -57};
    vector<int> p2 = {-14, 5972, 857};
    vector<int> v2 = {8, -47, -56};
    int R = 2522;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> p1 = {1645, 4417, 6355};
    vector<int> v1 = {-14, 29, -85};
    vector<int> p2 = {9948, 3104, 2174};
    vector<int> v2 = {-13, -6, -3};
    int R = 8813;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> p1 = {3884, -748, 6705};
    vector<int> v1 = {58, -52, -5};
    vector<int> p2 = {-4571, -1177, 6318};
    vector<int> v2 = {58, -52, -5};
    int R = 8474;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> p1 = {3884, -748, 6705};
    vector<int> v1 = {58, -52, -5};
    vector<int> p2 = {-4571, -1177, 6318};
    vector<int> v2 = {58, -52, -5};
    int R = 8475;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> p1 = {2865, -8636, -5491};
    vector<int> v1 = {-72, -79, 55};
    vector<int> p2 = {1887, -5387, -6267};
    vector<int> v2 = {-72, -79, 55};
    int R = 3480;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> p1 = {2865, -8636, -5491};
    vector<int> v1 = {-72, -79, 55};
    vector<int> p2 = {1887, -5387, -6267};
    vector<int> v2 = {-72, -79, 55};
    int R = 3481;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> p1 = {1774, -4491, 7810};
    vector<int> v1 = {-12, 19, -24};
    vector<int> p2 = {2322, 3793, 9897};
    vector<int> v2 = {-12, 19, -24};
    int R = 8560;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> p1 = {1774, -4491, 7810};
    vector<int> v1 = {-12, 19, -24};
    vector<int> p2 = {2322, 3793, 9897};
    vector<int> v2 = {-12, 19, -24};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> p1 = {-4628, 859, 6322};
    vector<int> v1 = {-64, -61, -20};
    vector<int> p2 = {5633, 7426, 9547};
    vector<int> v2 = {20, -58, 75};
    int R = 8432;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> p1 = {-4628, 859, 6322};
    vector<int> v1 = {-64, -61, -20};
    vector<int> p2 = {5633, 7426, 9547};
    vector<int> v2 = {20, -58, 75};
    int R = 8433;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> p1 = {-7593, 579, -9146};
    vector<int> v1 = {56, -21, 55};
    vector<int> p2 = {3668, -8134, 795};
    vector<int> v2 = {-56, 82, 49};
    int R = 9451;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> p1 = {-7593, 579, -9146};
    vector<int> v1 = {56, -21, 55};
    vector<int> p2 = {3668, -8134, 795};
    vector<int> v2 = {-56, 82, 49};
    int R = 9452;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> p1 = {-2611, 6642, 4107};
    vector<int> v1 = {-95, 9, -53};
    vector<int> p2 = {-3365, 276, -9263};
    vector<int> v2 = {-73, -15, 52};
    int R = 9320;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> p1 = {-2611, 6642, 4107};
    vector<int> v1 = {-95, 9, -53};
    vector<int> p2 = {-3365, 276, -9263};
    vector<int> v2 = {-73, -15, 52};
    int R = 9321;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> p1 = {-13, -9966, -7414};
    vector<int> v1 = {-64, -33, 52};
    vector<int> p2 = {-7920, -5123, -1713};
    vector<int> v2 = {-66, 45, 89};
    int R = 8335;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> p1 = {-13, -9966, -7414};
    vector<int> v1 = {-64, -33, 52};
    vector<int> p2 = {-7920, -5123, -1713};
    vector<int> v2 = {-66, 45, 89};
    int R = 8336;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> p1 = {-777, 2791, -952};
    vector<int> v1 = {-65, 98, -21};
    vector<int> p2 = {6929, -7286, 1573};
    vector<int> v2 = {-10, -69, 99};
    int R = 6257;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> p1 = {-777, 2791, -952};
    vector<int> v1 = {-65, 98, -21};
    vector<int> p2 = {6929, -7286, 1573};
    vector<int> v2 = {-10, -69, 99};
    int R = 6258;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> p1 = {-748, -3746, -65};
    vector<int> v1 = {41, -8, -82};
    vector<int> p2 = {-3872, 9801, 4798};
    vector<int> v2 = {-34, 94, 59};
    int R = 8330;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> p1 = {-748, -3746, -65};
    vector<int> v1 = {41, -8, -82};
    vector<int> p2 = {-3872, 9801, 4798};
    vector<int> v2 = {-34, 94, 59};
    int R = 8331;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> p1 = {-9100, -5265, -8023};
    vector<int> v1 = {73, -89, 95};
    vector<int> p2 = {-7372, -1078, 659};
    vector<int> v2 = {11, -94, -59};
    int R = 4251;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> p1 = {-9100, -5265, -8023};
    vector<int> v1 = {73, -89, 95};
    vector<int> p2 = {-7372, -1078, 659};
    vector<int> v2 = {11, -94, -59};
    int R = 4252;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> p1 = {-1605, -7199, -4764};
    vector<int> v1 = {62, -7, -89};
    vector<int> p2 = {-2897, -2402, -5350};
    vector<int> v2 = {-29, -72, 4};
    int R = 4701;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> p1 = {-1605, -7199, -4764};
    vector<int> v1 = {62, -7, -89};
    vector<int> p2 = {-2897, -2402, -5350};
    vector<int> v2 = {-29, -72, 4};
    int R = 4702;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> p1 = {3731, 8537, 5661};
    vector<int> v1 = {-70, 71, 32};
    vector<int> p2 = {8701, -1886, -5115};
    vector<int> v2 = {28, -13, 7};
    int R = 9766;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> p1 = {3731, 8537, 5661};
    vector<int> v1 = {-70, 71, 32};
    vector<int> p2 = {8701, -1886, -5115};
    vector<int> v2 = {28, -13, 7};
    int R = 9767;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {0, 0, 1};
    vector<int> v2 = {0, 1, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {0, 0, 1};
    vector<int> v2 = {1, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> p1 = {0, 1, -1};
    vector<int> v1 = {3, -3, 3};
    vector<int> p2 = {1, -1, 1};
    vector<int> v2 = {3, 3, -3};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> p1 = {0, 2856, -2856};
    vector<int> v1 = {98, -9996, 9996};
    vector<int> p2 = {10000, -2856, 2856};
    vector<int> v2 = {98, 9996, -9996};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> p1 = {0, 10000, -10000};
    vector<int> v1 = {3, -3, 3};
    vector<int> p2 = {10000, -10000, 10000};
    vector<int> v2 = {3, 3, -3};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> p1 = {0, 10000, -10000};
    vector<int> v1 = {7, -7, 7};
    vector<int> p2 = {10000, -10000, 10000};
    vector<int> v2 = {7, 7, -7};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> p1 = {-2838, -7940, -2936};
    vector<int> v1 = {1, 1, -2};
    vector<int> p2 = {532, 3850, 9590};
    vector<int> v2 = {1, 0, -3};
    int R = 3410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> p1 = {-7163, -371, -2459};
    vector<int> v1 = {-59, -41, -14};
    vector<int> p2 = {-2398, -426, -5487};
    vector<int> v2 = {-43, 27, 67};
    int R = 5410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {-2, 2, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> p1 = {15, 50, 5};
    vector<int> v1 = {25, 1, 0};
    vector<int> p2 = {161, 102, 9};
    vector<int> v2 = {-10, -10, -1};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> p1 = {-8509, 9560, 345};
    vector<int> v1 = {-89, -33, 62};
    vector<int> p2 = {-5185, -1417, 2846};
    vector<int> v2 = {-58, 24, 26};
    int R = 8344;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> p1 = {-10000, 0, 0};
    vector<int> v1 = {10000, 0, 0};
    vector<int> p2 = {1, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> p1 = {-1000, 0, 0};
    vector<int> v1 = {1, 0, 1000};
    vector<int> p2 = {1000, 0, 0};
    vector<int> v2 = {-1, 0, 1000};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> p1 = {3731, 8537, 5661};
    vector<int> v1 = {-70, 71, 32};
    vector<int> p2 = {8701, -1886, -5115};
    vector<int> v2 = {28, -13, 7};
    int R = 9766;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {10000, 10000, 10000};
    vector<int> v2 = {-1, -1, -1};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> p1 = {2, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {-2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {2, 2, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> p1 = {10, 10, 0};
    vector<int> v1 = {-1, 0, 0};
    vector<int> p2 = {-10, -10, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {2, 2, 2};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> p1 = {1, 1, 1};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {-1, -1, -1};
    vector<int> v2 = {-1, -1, -1};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> p1 = {-2837, -7940, -2936};
    vector<int> v1 = {1, 1, -2};
    vector<int> p2 = {532, 3850, 9590};
    vector<int> v2 = {1, 0, -3};
    int R = 3410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {9999, 9999, 0};
    vector<int> p2 = {4, 0, 0};
    vector<int> v2 = {-5555, 5555, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> p1 = {10000, 0, 0};
    vector<int> v1 = {-10000, 0, 0};
    vector<int> p2 = {-10000, 0, 0};
    vector<int> v2 = {1, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> p1 = {100, 1000, 10000};
    vector<int> v1 = {15, 9, 8};
    vector<int> p2 = {1200, 1300, 100};
    vector<int> v2 = {9, 8, 17};
    int R = 135;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 1000};
    vector<int> p2 = {0, 0, 2};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {25, 1, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {-10, -10, -1};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> p1 = {1, 1, 0};
    vector<int> v1 = {0, 10000, 0};
    vector<int> p2 = {1, 3, 0};
    vector<int> v2 = {0, -10000, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> p1 = {1, 1, 1};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {1, 1, 1};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {0, 0, 2};
    vector<int> v2 = {1, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> p1 = {-7136, -371, -2459};
    vector<int> v1 = {-59, -41, -14};
    vector<int> p2 = {-2398, -426, -5487};
    vector<int> v2 = {-43, 27, 67};
    int R = 5410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {10, 0, 2};
    vector<int> v2 = {-1, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> p1 = {1, 1, 1};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {2, 1, 1};
    vector<int> v2 = {0, 0, 0};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 1};
    vector<int> v2 = {0, 0, 0};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> p1 = {-2838, -7940, -2936};
    vector<int> v1 = {1, 1, -2};
    vector<int> p2 = {5323, 3850, 9590};
    vector<int> v2 = {1, 0, -3};
    int R = 3;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {2001, 2000, 0};
    vector<int> p2 = {9000, 0, 5000};
    vector<int> v2 = {-2000, 2000, 0};
    int R = 5000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 1, 0};
    vector<int> p2 = {2, 0, 0};
    vector<int> v2 = {0, 1, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> p1 = {-10000, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {10000, 0, 0};
    vector<int> v2 = {-1, 0, 0};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> p1 = {10000, 10000, 10000};
    vector<int> v1 = {-10000, -10000, -10000};
    vector<int> p2 = {-10000, -10000, -10000};
    vector<int> v2 = {10000, 10000, 10000};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {-2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {2, 2, 0};
    int R = 100;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {-2, 0, 0};
    vector<int> v2 = {10000, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> p1 = {3731, 8537, 5661};
    vector<int> v1 = {70, 71, 32};
    vector<int> p2 = {8701, -1886, -5115};
    vector<int> v2 = {28, 80, 7};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> p1 = {15, 50, 5};
    vector<int> v1 = {25, 1, 0};
    vector<int> p2 = {161, 102, 9};
    vector<int> v2 = {25, 1, 0};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> p1 = {1, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> p1 = {1, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {-5, 0, 0};
    vector<int> p2 = {5, 0, 0};
    vector<int> v2 = {5, 0, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {10, 0, 0};
    vector<int> v2 = {1, 1, 1};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> p1 = {-10000, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {10000, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {10000, 0, 0};
    vector<int> p2 = {10, 0, 0};
    vector<int> v2 = {-10000, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 1, 0};
    vector<int> p2 = {4, 11, 0};
    vector<int> v2 = {0, -1, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {10, 10, 10};
    vector<int> v2 = {-1, -1, -1};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 1, 0};
    vector<int> p2 = {10, 0, 0};
    vector<int> v2 = {1, 0, 0};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> p1 = {1, 2, 3};
    vector<int> v1 = {1, 2, 3};
    vector<int> p2 = {100, 200, 300};
    vector<int> v2 = {1, 2, 3};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {10000, 0, 0};
    vector<int> p2 = {1000, 0, 0};
    vector<int> v2 = {-10000, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> p1 = {1, 1, 1};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {2, 2, 2};
    vector<int> v2 = {1, 1, 1};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {2, -1, 0};
    vector<int> v2 = {0, 2, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {-1, 1, 0};
    vector<int> v2 = {10000, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {1, 0, 0};
    vector<int> v2 = {1, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 1, 0};
    vector<int> p2 = {0, -100, 0};
    vector<int> v2 = {0, 4000, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {10000, 0, 0};
    vector<int> p2 = {10, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {1, 0, 0};
    vector<int> v2 = {1, 0, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {1, 1, 0};
    vector<int> v2 = {-200, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> p1 = {1771, -1491, 7830};
    vector<int> v1 = {-12, 19, -24};
    vector<int> p2 = {2322, 3793, 9897};
    vector<int> v2 = {-12, 19, -24};
    int R = 1000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> p1 = {-10000, -10000, -10000};
    vector<int> v1 = {0, 0, 1};
    vector<int> p2 = {10000, 10000, 10000};
    vector<int> v2 = {0, 0, 1};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> p1 = {10, 10, 10};
    vector<int> v1 = {10, 10, 10};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 100;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> p1 = {-8509, 9560, 345};
    vector<int> v1 = {1, 2, 3};
    vector<int> p2 = {-5185, -1417, 2846};
    vector<int> v2 = {1, 2, 3};
    int R = 8344;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> p1 = {1774, -4491, 7810};
    vector<int> v1 = {-12, 19, -24};
    vector<int> p2 = {2322, 3793, 9897};
    vector<int> v2 = {-12, 19, -24};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> p1 = {5, 5, 5};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {1, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> p1 = {3, 2, 3};
    vector<int> v1 = {1, 2, 3};
    vector<int> p2 = {1, 2, 3};
    vector<int> v2 = {1, 2, 3};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 0, 0};
    vector<int> p2 = {0, 1, 0};
    vector<int> v2 = {1, 1, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> p1 = {50, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {4, 2, 0};
    vector<int> p2 = {2, 0, 0};
    vector<int> v2 = {0, 2, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {3, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 1, 1};
    vector<int> p2 = {0, 0, 1};
    vector<int> v2 = {0, 1, -1};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 2, 0};
    vector<int> p2 = {2, 0, 0};
    vector<int> v2 = {-5, 2, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {2, 2, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> p1 = {1774, -4491, 7810};
    vector<int> v1 = {-12, 19, -24};
    vector<int> p2 = {2322, 3793, 9897};
    vector<int> v2 = {-12, 19, -24};
    int R = 5000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {10, 0, 2};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> p1 = {1, 1, 1};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {22, 22, 22};
    vector<int> v2 = {1, 1, 1};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> p1 = {10, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> p1 = {31, 87, -51};
    vector<int> v1 = {121, 23, -323};
    vector<int> p2 = {23, -45, -10};
    vector<int> v2 = {28, -13, 7};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> p1 = {-5000, -5000, 0};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {5000, -5000, 0};
    vector<int> v2 = {1, 1, 1};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 10};
    vector<int> v2 = {0, 0, 0};
    int R = 2;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> p1 = {10000, 10000, 10000};
    vector<int> v1 = {-9999, -9999, -9999};
    vector<int> p2 = {-10000, -10000, -10000};
    vector<int> v2 = {9998, 9998, 9998};
    int R = 100;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {0, 0, 10};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> p1 = {1, 1, 1};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {2, 2, 2};
    vector<int> v2 = {1, 1, 1};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> p1 = {-2838, -7940, -2936};
    vector<int> v1 = {1, 1, -2};
    vector<int> p2 = {532, 3850, 9590};
    vector<int> v2 = {1, 0, -3};
    int R = 5410;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {100, 0, 0};
    vector<int> v2 = {100, 0, 0};
    int R = 100;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> p1 = {0, 0, 1};
    vector<int> v1 = {0, 0, 2};
    vector<int> p2 = {0, 0, 5};
    vector<int> v2 = {0, 0, 1};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {1, 1, 1};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> p1 = {10000, 10000, 1000};
    vector<int> v1 = {10000, -10000, 10000};
    vector<int> p2 = {10000, 10000, -1000};
    vector<int> v2 = {10000, -10000, -10000};
    int R = 1999;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 10000};
    vector<int> p2 = {0, 0, 500};
    vector<int> v2 = {0, 0, -10000};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {2, 2, 0};
    vector<int> p2 = {9, 0, 5};
    vector<int> v2 = {0, 2, 0};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> p1 = {1774, 4491, 7810};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {-2322, 5793, 9897};
    vector<int> v2 = {0, 0, 0};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {0, 0, 0};
    vector<int> p2 = {1000, 0, 0};
    vector<int> v2 = {0, 0, 0};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1000, 1000, 1000};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {-1000, -1000, -1000};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {-10000, -10000, -10000};
    vector<int> p2 = {0, 0, 0};
    vector<int> v2 = {10000, 10000, 10000};
    int R = 10000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> p1 = {4336, 46, -2571};
    vector<int> v1 = {5882, 3100, 9715};
    vector<int> p2 = {121, 1734, -5770};
    vector<int> v2 = {5593, 7870, 6705};
    int R = 9755;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {1, 1, 1};
    vector<int> p2 = {0, 0, 100};
    vector<int> v2 = {1, 1, 1};
    int R = 1;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {100, 100, 0};
    vector<int> p2 = {442, 0, 10};
    vector<int> v2 = {-100, 100, 0};
    int R = 10;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> p1 = {10000, 10000, 10000};
    vector<int> v1 = {-10000, -10000, -10000};
    vector<int> p2 = {-10000, -10000, -10000};
    vector<int> v2 = {10000, 10000, 10000};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> p1 = {-579, -553, -631};
    vector<int> v1 = {-782, -729, -833};
    vector<int> p2 = {-784, -774, -588};
    vector<int> v2 = {-605, -962, -701};
    int R = 309;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> p1 = {0, 0, 0};
    vector<int> v1 = {5, 5, 5};
    vector<int> p2 = {4, 4, 0};
    vector<int> v2 = {5, 5, 5};
    int R = 5;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> p1 = {5, 7, 8};
    vector<int> v1 = {4, 1, -7};
    vector<int> p2 = {-4, 5, 7};
    vector<int> v2 = {4, 1, -7};
    int R = 4;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> p1 = {10000, 10000, 1000};
    vector<int> v1 = {10000, -10000, 10000};
    vector<int> p2 = {10000, 10000, -1000};
    vector<int> v2 = {10000, -10000, -10000};
    int R = 2000;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> p1 = {-1, -1, 0};
    vector<int> v1 = {10000, 10000, 0};
    vector<int> p2 = {1, -1, 0};
    vector<int> v2 = {-10000, 10000, 0};
    int R = 0;
    Aircraft* pObj = new Aircraft();
    clock_t start = clock();
    string result = pObj->nearMiss(p1, v1, p2, v2, R);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15604398&rd=10671&pm=7741
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <cstdlib> 
#include <cstring> 
#include <vector> 
#include <string> 
#include <sstream> 
#include <iostream> 
using namespace std; 
#define FORC( V, it ) for( __typeof( (V).begin() ) it = (V).begin(); it != (V).end(); ++it ) 
const int MAXL = 1000; 
const int MAXN = 50; 
char buff[MAXL+1]; 
 
 
vector< int > p1, p2, v1, v2; 
int R; 
 
double calc_dist( vector< double > A, vector< double > B ) 
{ 
    double sum = 0; 
    for( int i = 0; i < ( int )A.size(); ++i )  
        sum += ( A[i] - B[i] ) * ( A[i] - B[i] ); 
    return sum; 
} 
 
double dist( double t ) 
{ 
    vector< double > pp1; 
    for( int i = 0; i < ( int )p1.size(); ++i )  
        pp1.push_back( p1[i] ); 
 
    vector< double > pp2; 
    for( int i = 0; i < ( int )p2.size(); ++i )  
        pp2.push_back( p2[i] ); 
     
    for( int i = 0; i < ( int )pp1.size(); ++i ) { 
        pp1[i] += v1[i] * t; 
        pp2[i] += v2[i] * t; 
    } 
     
    return calc_dist( pp1, pp2 ); 
} 
 
class Aircraft { 
public: 
    string nearMiss( vector <int> _p1, vector <int> _v1, vector <int> _p2, vector <int> _v2, int _R ) { 
        R = _R; 
        v1 = _v1; 
        p1 = _p1; 
        v2 = _v2; 
        p2 = _p2; 
 
        double l = 0, u = 1e9; 
        for( int iter = 1000; iter--; ) { 
            double a = l + ( u - l ) / 3.; 
            double b = l + ( u - l ) / 3. * 2; 
 
            if ( dist( a ) < dist( b ) ) 
                u = b; 
            else 
                l = a; 
        } 
        if ( dist( l ) - 1e-9 < R * R ) 
            return "YES"; 
        return "NO"; 
    } 
}; 
 
 
 
 
 
 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/