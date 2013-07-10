/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2916
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

class Medici {
public:
    int winner(vector<int> fame, vector<int> fortune, vector<int> secrets);
};

int Medici::winner(vector<int> fame, vector<int> fortune, vector<int> secrets) {
    int ret;
    return ret;
}


int test0() {
    vector<int> fame = {20, 30, 50};
    vector<int> fortune = {60, 80, 40};
    vector<int> secrets = {40, 30, 50};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> fame = {0, 100, 100, 100};
    vector<int> fortune = {100, 0, 100, 50};
    vector<int> secrets = {50, 50, 50, 100};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> fame = {1, 0};
    vector<int> fortune = {1, 99};
    vector<int> secrets = {1, 99};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> fame = {39, 42, 57};
    vector<int> fortune = {42, 39, 57};
    vector<int> secrets = {57, 39, 42};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> fame = {3, 98, 0, 71, 81, 85, 99, 58, 93, 79, 100, 98, 73, 83, 52, 100, 37, 93, 39, 27};
    vector<int> fortune = {96, 34, 45, 20, 72, 71, 7, 18, 47, 35, 54, 51, 52, 21, 49, 20, 44, 72, 90, 93};
    vector<int> secrets = {15, 72, 50, 84, 41, 49, 35, 71, 20, 29, 73, 18, 35, 61, 70, 34, 59, 68, 90, 18};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> fame = {68, 75};
    vector<int> fortune = {25, 59};
    vector<int> secrets = {67, 37};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {0, 74};
    vector<int> fortune = {51, 3};
    vector<int> secrets = {88, 68};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> fame = {83, 61, 52};
    vector<int> fortune = {74, 80, 84};
    vector<int> secrets = {40, 8, 73};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {10, 85, 31};
    vector<int> fortune = {21, 37, 26};
    vector<int> secrets = {75, 50, 58};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> fame = {95, 16, 88, 83};
    vector<int> fortune = {72, 35, 68, 7};
    vector<int> secrets = {38, 35, 56, 77};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {22, 77, 37, 53};
    vector<int> fortune = {40, 2, 30, 75};
    vector<int> secrets = {50, 33, 70, 52};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {91, 31, 9, 47, 70};
    vector<int> fortune = {34, 23, 41, 59, 3};
    vector<int> secrets = {54, 97, 0, 32, 39};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> fame = {86, 98, 87, 60, 77};
    vector<int> fortune = {46, 8, 17, 32, 0};
    vector<int> secrets = {96, 93, 95, 97, 55};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {76, 6, 53, 34, 41, 55};
    vector<int> fortune = {71, 84, 64, 84, 79, 62};
    vector<int> secrets = {76, 81, 46, 16, 58, 7};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> fame = {67, 56, 45, 0, 45, 48};
    vector<int> fortune = {31, 51, 48, 77, 28, 17};
    vector<int> secrets = {85, 99, 90, 43, 43, 64};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> fame = {34, 73, 0, 80, 23, 95, 4};
    vector<int> fortune = {100, 12, 80, 1, 63, 91, 1};
    vector<int> secrets = {19, 32, 18, 96, 21, 100, 64};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> fame = {16, 66, 50, 51, 46, 67, 52};
    vector<int> fortune = {87, 7, 8, 26, 43, 31, 87};
    vector<int> secrets = {29, 15, 50, 96, 3, 92, 69};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> fame = {2, 21, 62, 18, 100, 71, 40, 58};
    vector<int> fortune = {81, 9, 58, 73, 93, 55, 61, 71};
    vector<int> secrets = {40, 57, 94, 63, 66, 29, 95, 100};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> fame = {17, 32, 10, 86, 25, 11, 51, 23};
    vector<int> fortune = {35, 24, 53, 74, 28, 15, 70, 63};
    vector<int> secrets = {47, 25, 12, 4, 41, 51, 0, 50};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> fame = {62, 12, 100, 51, 27, 15, 50, 23, 64};
    vector<int> fortune = {52, 46, 18, 8, 6, 7, 14, 66, 0};
    vector<int> secrets = {23, 30, 47, 49, 42, 17, 0, 73, 15};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> fame = {69, 42, 24, 35, 26, 99, 16, 93, 79};
    vector<int> fortune = {50, 31, 93, 90, 29, 5, 70, 87, 57};
    vector<int> secrets = {37, 50, 35, 2, 30, 52, 95, 70, 78};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> fame = {66, 39, 40, 63, 91, 54, 7, 21, 57, 53};
    vector<int> fortune = {93, 25, 15, 34, 3, 13, 38, 22, 32, 81};
    vector<int> secrets = {4, 23, 55, 62, 59, 46, 72, 16, 14, 43};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> fame = {72, 23, 50, 60, 76, 21, 79, 59, 22, 5};
    vector<int> fortune = {18, 63, 56, 40, 48, 18, 73, 3, 74, 94};
    vector<int> secrets = {99, 77, 34, 44, 69, 22, 47, 42, 29, 86};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {76, 71, 2, 57, 48, 52, 33, 41, 39, 0, 63};
    vector<int> fortune = {44, 85, 42, 97, 14, 20, 15, 77, 89, 16, 65};
    vector<int> secrets = {93, 78, 23, 74, 71, 34, 26, 57, 89, 6, 12};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> fame = {68, 14, 47, 38, 83, 4, 65, 76, 41, 37, 10};
    vector<int> fortune = {16, 51, 52, 97, 43, 72, 20, 62, 3, 53, 70};
    vector<int> secrets = {37, 55, 81, 96, 12, 5, 82, 86, 43, 60, 20};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> fame = {29, 35, 20, 94, 99, 91, 92, 53, 53, 21, 73, 47};
    vector<int> fortune = {71, 84, 68, 17, 61, 17, 3, 24, 46, 100, 97, 55};
    vector<int> secrets = {18, 15, 4, 10, 50, 26, 81, 33, 20, 43, 38, 1};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> fame = {39, 95, 65, 90, 4, 91, 46, 55, 97, 15, 69, 97};
    vector<int> fortune = {15, 59, 49, 5, 3, 43, 89, 97, 61, 11, 0, 15};
    vector<int> secrets = {23, 52, 64, 81, 23, 95, 32, 29, 75, 97, 53, 1};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {96, 18, 13, 42, 96, 78, 54, 32, 73, 40, 5, 25, 16};
    vector<int> fortune = {45, 59, 35, 18, 80, 93, 40, 82, 7, 43, 84, 72, 65};
    vector<int> secrets = {12, 54, 16, 31, 16, 60, 76, 94, 19, 36, 98, 42, 96};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> fame = {17, 49, 33, 52, 84, 98, 74, 67, 75, 12, 28, 96, 26};
    vector<int> fortune = {100, 15, 46, 8, 55, 67, 57, 94, 0, 55, 76, 19, 11};
    vector<int> secrets = {26, 81, 52, 67, 28, 94, 21, 58, 11, 97, 38, 82, 9};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> fame = {62, 63, 74, 37, 62, 55, 29, 11, 64, 89, 9, 41, 36, 2};
    vector<int> fortune = {82, 80, 87, 94, 72, 12, 17, 57, 94, 86, 55, 32, 7, 68};
    vector<int> secrets = {11, 23, 18, 81, 81, 85, 42, 34, 17, 23, 6, 41, 47, 81};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> fame = {22, 93, 64, 2, 40, 21, 42, 67, 51, 8, 8, 52, 18, 11};
    vector<int> fortune = {3, 19, 24, 55, 95, 87, 3, 38, 56, 78, 100, 85, 39, 40};
    vector<int> secrets = {86, 82, 27, 37, 70, 34, 72, 37, 22, 86, 99, 19, 5, 44};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {72, 82, 74, 78, 15, 16, 99, 42, 59, 62, 28, 42, 58, 82, 20};
    vector<int> fortune = {15, 37, 45, 96, 95, 64, 5, 77, 68, 4, 48, 8, 68, 34, 90};
    vector<int> secrets = {23, 55, 70, 72, 55, 1, 76, 40, 61, 15, 41, 51, 55, 81, 63};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> fame = {5, 52, 59, 84, 62, 21, 95, 14, 52, 4, 89, 50, 80, 93, 86};
    vector<int> fortune = {19, 54, 13, 39, 40, 84, 13, 22, 64, 22, 79, 81, 40, 46, 16};
    vector<int> secrets = {15, 39, 16, 20, 25, 47, 64, 12, 53, 31, 16, 54, 3, 85, 6};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> fame = {3, 33, 22, 31, 23, 39, 52, 2, 79, 20, 59, 76, 78, 13, 78, 68};
    vector<int> fortune = {44, 43, 61, 67, 56, 93, 67, 73, 12, 15, 81, 84, 12, 91, 48, 87};
    vector<int> secrets = {39, 61, 37, 13, 81, 54, 86, 44, 0, 49, 79, 83, 88, 12, 89, 31};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> fame = {20, 93, 54, 31, 49, 36, 40, 84, 18, 57, 94, 83, 0, 72, 45, 40};
    vector<int> fortune = {33, 79, 35, 25, 59, 66, 38, 92, 18, 95, 34, 3, 22, 97, 26, 37};
    vector<int> secrets = {49, 39, 55, 79, 31, 65, 46, 9, 64, 51, 33, 16, 69, 15, 66, 52};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> fame = {37, 89, 42, 5, 72, 5, 55, 56, 60, 66, 14, 18, 69, 17, 5, 87, 62};
    vector<int> fortune = {50, 5, 67, 74, 97, 86, 51, 23, 69, 93, 6, 0, 65, 38, 100, 42, 38};
    vector<int> secrets = {41, 8, 85, 28, 83, 56, 55, 4, 95, 87, 17, 96, 63, 23, 40, 47, 62};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> fame = {57, 22, 53, 48, 100, 45, 2, 13, 73, 51, 85, 2, 7, 10, 99, 1, 40};
    vector<int> fortune = {60, 26, 55, 32, 85, 17, 73, 36, 2, 88, 40, 98, 70, 3, 42, 65, 49};
    vector<int> secrets = {80, 9, 53, 10, 15, 36, 31, 5, 44, 9, 27, 41, 74, 27, 15, 22, 60};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> fame = {92, 77, 51, 41, 23, 76, 83, 73, 1, 59, 12, 59, 85, 21, 29, 92, 44, 66};
    vector<int> fortune = {13, 16, 69, 17, 68, 14, 42, 34, 62, 25, 39, 33, 50, 14, 34, 0, 67, 28};
    vector<int> secrets = {87, 34, 32, 72, 66, 69, 10, 62, 41, 72, 48, 41, 72, 21, 68, 53, 83, 40};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> fame = {65, 98, 70, 62, 36, 30, 75, 89, 94, 86, 99, 7, 81, 57, 72, 18, 66, 80};
    vector<int> fortune = {70, 46, 10, 36, 91, 95, 29, 17, 26, 26, 42, 41, 36, 54, 88, 75, 21, 54};
    vector<int> secrets = {5, 58, 15, 2, 12, 86, 58, 13, 18, 66, 96, 5, 91, 35, 57, 28, 15, 78};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> fame = {82, 41, 88, 66, 46, 35, 12, 11, 17, 63, 49, 88, 81, 40, 53, 81, 39, 77, 46};
    vector<int> fortune = {79, 44, 74, 55, 19, 36, 54, 71, 7, 85, 63, 60, 64, 92, 9, 10, 31, 92, 97};
    vector<int> secrets = {49, 80, 17, 38, 67, 37, 16, 43, 90, 98, 0, 78, 5, 33, 86, 48, 6, 89, 22};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> fame = {40, 33, 9, 69, 27, 9, 4, 25, 36, 59, 29, 94, 25, 21, 52, 27, 77, 80, 9};
    vector<int> fortune = {27, 1, 70, 92, 29, 41, 85, 10, 55, 80, 51, 66, 38, 23, 84, 40, 35, 65, 91};
    vector<int> secrets = {0, 20, 12, 99, 43, 14, 98, 29, 40, 58, 71, 77, 30, 17, 28, 27, 8, 59, 1};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> fame = {9, 71, 53, 9, 76, 100, 56, 29, 60, 46, 16, 50, 38, 45, 95, 33, 53, 42, 46, 77};
    vector<int> fortune = {60, 19, 86, 11, 61, 40, 96, 87, 40, 64, 81, 55, 97, 5, 17, 8, 42, 54, 0, 68};
    vector<int> secrets = {2, 10, 56, 86, 71, 32, 7, 62, 83, 30, 26, 56, 74, 92, 25, 8, 32, 95, 3, 94};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> fame = {22, 71, 20, 32, 51, 96, 47, 36, 83, 99, 24, 67, 50, 70, 50, 10, 96, 7, 52, 26};
    vector<int> fortune = {91, 11, 82, 32, 7, 94, 24, 49, 0, 94, 58, 48, 28, 95, 40, 10, 79, 95, 63, 26};
    vector<int> secrets = {21, 15, 26, 35, 66, 50, 8, 45, 30, 28, 65, 36, 47, 89, 96, 5, 7, 14, 86, 63};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> fame = {10, 10, 10, 10};
    vector<int> fortune = {5, 1, 3, 4};
    vector<int> secrets = {10, 10, 10, 10};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {20, 30, 50};
    vector<int> fortune = {60, 80, 40};
    vector<int> secrets = {40, 30, 50};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {1, 2};
    vector<int> fortune = {1, 2};
    vector<int> secrets = {1, 2};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> fame = {50, 50};
    vector<int> fortune = {50, 50};
    vector<int> secrets = {50, 50};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> fame = {84, 3, 37};
    vector<int> fortune = {96, 51, 75};
    vector<int> secrets = {42, 92, 21};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> fame = {4, 3};
    vector<int> fortune = {5, 3};
    vector<int> secrets = {1, 2};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> fame = {30, 40};
    vector<int> fortune = {30, 40};
    vector<int> secrets = {30, 40};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {100, 100, 100, 100, 100};
    vector<int> fortune = {10, 20, 60, 40, 50};
    vector<int> secrets = {100, 100, 100, 100, 100};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
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
    vector<int> fame = {1, 1};
    vector<int> fortune = {2, 3};
    vector<int> secrets = {3, 4};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> fame = {10, 11};
    vector<int> fortune = {9, 9};
    vector<int> secrets = {9, 9};
    Medici* pObj = new Medici();
    clock_t start = clock();
    int result = pObj->winner(fame, fortune, secrets);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8362133&rd=5850&pm=2916
********************************************************************************
#ifdef __GNUC__ 
#define int64 long long 
#else /* MSVC, say */ 
#define int64 __int64 
#pragma warning( disable : 4786 ) 
#endif 
#line 114 "Medici.cpp" 
#include <string> 
#include <vector> 
#include <iostream>  
#include <sstream>  
#include <algorithm> 
#include <numeric> 
#include <functional>  
#include <map>  
#include <set>  
#include <cassert> 
#include <list>  
#include <deque>  
#include <iomanip>  
#include <cstring>  
#include <cmath>  
#include <cstdio>  
#include <cctype> 
 
using namespace std; 
 
typedef vector <int> VI; 
typedef vector <string> VS; 
typedef vector <VI> VVI; 
 
VS toks(string inp,string delim) 
{ 
  char *ch = strdup(inp.c_str()); 
  char *ptr = strtok(ch,delim.c_str()); 
  VS ret; 
  while (ptr != NULL){ 
    ret.push_back(ptr); 
    ptr = strtok(NULL,delim.c_str()); 
    } 
  free(ch); 
  return ret; 
} 
 
VI toksint(string inp,string delim) 
{ 
  VS temp = toks(inp,delim); 
  VI ret; 
  for(int i=0;i<temp.size();i++) 
    ret.push_back(atoi(temp[i].c_str())); 
  return ret; 
} 
 
VVI toksvvi(vector <string> inp,string delim) 
{ 
  VVI ret; 
  for(int i=0;i<inp.size();i++) 
    ret.push_back(toksint(inp[i],delim)); 
  return ret; 
} 
 
int vmin(VI inp) 
{ 
  int mini=inp[0]; 
  for(int i=1;i<inp.size();i++) 
    mini=mini<inp[i]?mini:inp[i]; 
  return mini; 
} 
 
int vmax(VI inp) 
{ 
  int maxi=inp[0]; 
  for(int i=1;i<inp.size();i++) 
    maxi=maxi>inp[i]?maxi:inp[i]; 
  return maxi; 
} 
 
class Medici { 
  public: 
  int winner(vector <int> fa, vector <int> fo, vector <int> s) { 
     
    int i,j; 
 
    int max=-1,pos=-1,d=0; 
    for(i=0;i<fa.size();i++) 
    { 
      int min=9999; 
      if (fa[i]<min) 
        min=fa[i]; 
      if (fo[i]<min) 
        min=fo[i]; 
      if (s[i]<min) 
        min=s[i]; 
 
      if (min>max) 
      { 
        max=min; 
        pos=i; 
        d=0; 
      }else if(min==max) 
      { 
        d=1; 
      } 
 
    } 
 
    if (d) 
      return -1; 
    else 
      return pos; 
  } 
   
  
}; 
 
     
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/