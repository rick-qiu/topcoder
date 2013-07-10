/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7601
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

class DiceGames {
public:
    long countFormations(vector<int> sides);
};

long DiceGames::countFormations(vector<int> sides) {
    long ret;
    return ret;
}


int test0() {
    vector<int> sides = {4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> sides = {2, 2};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> sides = {4, 4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> sides = {3, 4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> sides = {4, 5, 6};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> sides = {6, 5, 4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> sides = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 916312070471295267;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> sides = {32, 31, 30, 1, 2, 3, 4, 5, 29, 28, 27, 26, 25, 24, 6, 7, 8, 9, 10, 23, 22, 21, 20, 19, 18, 11, 12, 13, 14, 17, 16, 15};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 55534064877048198;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> sides = {31, 4, 15, 9, 26, 5, 3, 5, 8, 9, 7, 9, 32, 3, 8, 4, 6, 24, 6, 3, 7, 5, 10, 5, 8, 20, 9, 7, 4, 9, 4, 4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 5340998296357;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> sides = {27, 18, 28, 18, 28, 4, 5, 9};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 6505450;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> sides = {21, 26, 27, 6, 25, 25, 26, 4, 3, 29, 31, 14, 2, 21, 26, 3, 11, 24, 31, 5, 5, 11, 31, 9, 9, 16, 20, 13, 4, 20, 17, 15};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 40751200482175153;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> sides = {10, 25, 18, 28, 28, 11, 4, 9, 18, 9, 7, 9, 27, 31, 1, 9, 24, 32, 7, 3, 4, 14, 13, 25, 29, 22, 31, 18, 24, 17, 5, 22};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 56241707454859975;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> sides = {11, 23, 21, 3, 31, 5, 1, 15, 20, 22, 23, 25, 31, 27, 13, 28, 2, 17, 16, 13, 14, 8, 14, 21, 3, 10, 11, 9, 6, 21, 30, 23};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 25058975389115621;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> sides = {2, 20, 17, 7, 24, 8, 30, 18, 19, 10, 12, 28, 13, 25, 6, 26, 11, 32, 2, 10, 16, 25, 15, 15, 18, 13, 11, 24, 17, 12, 11, 5};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 23880236226918650;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> sides = {16, 24, 11, 26, 2, 32, 4, 3, 20, 1, 30, 30, 10, 19, 11, 23, 27, 28, 16, 15, 23, 25, 15, 21, 3, 22, 30, 8, 21, 32, 10, 16};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 83960541529664380;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> sides = {2, 11, 15, 18, 5, 30, 7, 8, 20, 21, 32, 16, 27, 9, 31, 8, 32, 7, 20, 13, 29, 7, 20, 25, 24, 9, 32, 7, 31, 15, 14, 6};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 118352445101142250;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> sides = {2, 7, 12, 10, 24, 31, 2, 4, 3, 28, 29, 11, 13, 10, 13, 13, 13, 18, 21, 12, 24, 1, 3, 16, 29, 12, 29, 27, 4, 25, 7, 7};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 4290229977279313;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> sides = {20, 28, 14, 9, 16, 32, 17, 16, 6, 27, 31, 1, 19, 13, 25, 25, 11, 18, 1, 11, 19, 29, 17, 15, 2, 21, 11, 25, 27, 32, 26, 21};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 68984484038903530;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> sides = {13, 8, 23, 16, 23, 26, 9, 29, 28, 2, 18, 9, 11, 29, 13, 28, 24, 17, 4, 23, 19, 9, 4, 10, 9, 1, 29, 16, 11, 30, 13, 3};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 14596617661458100;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> sides = {26, 19, 8, 31, 17, 14, 32, 20, 30, 6, 24, 30, 18, 17, 21, 3, 5, 4, 14, 5, 22, 9, 19, 28, 28, 26, 28, 11, 17, 7, 14, 26};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 174124851683269891;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> sides = {24, 14, 1, 22, 14, 17, 14, 2, 24, 19, 24, 23, 1, 16, 2, 23, 22, 31, 11, 4, 22, 26, 3, 27, 27, 12, 22, 5, 27, 32, 32, 29};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 32709129622677603;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> sides = {32, 30, 24, 11, 19, 14, 29, 10, 18, 20, 29, 16, 30, 26, 8, 14, 22, 14, 31, 1, 24, 25, 9, 30, 21, 13, 4, 31, 31, 1, 15, 12};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 116476145183960405;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> sides = {17, 19, 15, 19, 19, 28, 18, 4, 3, 6, 5, 18, 2, 14, 14, 19, 2, 13, 23, 16, 30, 13, 16, 5, 20, 29, 3, 10, 26, 19, 18, 27};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 5971454593209424;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> sides = {10, 22, 14, 21, 15, 5, 3, 28, 28, 2, 30, 26, 26, 9, 19, 5, 30, 4, 8, 4, 8, 30, 10, 28, 19, 6, 16, 20, 22, 3, 19, 9};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 15815400588156614;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> sides = {6, 11, 16, 32, 6, 9, 28, 15, 5, 18, 1, 11, 11, 18, 7, 11, 16, 21, 28, 6, 24, 16, 4, 31, 29, 19, 28, 17, 28, 15, 28, 13};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 44123209168172692;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> sides = {32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 55534064877048198;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> sides = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 916312070471295267;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> sides = {32, 31, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 916312070471295266;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> sides = {6, 5, 4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 48;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> sides = {23, 12, 32, 22, 32, 23, 1, 1, 2, 30, 30, 31, 31, 29, 29, 29, 29, 29, 29, 29, 30, 24, 25, 27, 27, 27, 23, 23, 1, 2};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 10379574199019698;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> sides = {10, 1, 10};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> sides = {4, 3};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> sides = {5, 5, 4, 3, 2, 1, 1, 1, 1, 1};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> sides = {4};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> sides = {10, 1};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> sides = {5, 1};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> sides = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 16796;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> sides = {31, 14, 19, 8, 1, 32, 12, 31, 32, 1, 1, 1, 5, 11, 9, 10, 20, 22, 30, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 9, 1};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 78763054287067;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> sides = {32, 32};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 528;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> sides = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 14544636039226909;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> sides = {29, 31, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 916312070471294677;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> sides = {32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 14, 15, 15, 16, 16, 16, 17, 25};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 85343292199085256;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> sides = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 55534064877048198;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> sides = {4, 2};
    DiceGames* pObj = new DiceGames();
    clock_t start = clock();
    long result = pObj->countFormations(sides);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=10673&pm=7601
********************************************************************************
#include<algorithm>  
#include<sstream> 
#include<string>  
#include<vector>  
using namespace std;  
   
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it)  
#define pb push_back  
#define all(x) (x).begin(),(x).end()  
#define CLEAR(x,with) memset(x,with,sizeof(x))  
#define sz size()  
typedef long long ll; 
ll cache[40][40]; 
struct DiceGames  
{ 
  vector<int> S; 
  ll go(int die, int smallest) 
  { 
    if(die == S.sz) return 1; 
    ll& ret = cache[die][smallest]; if(ret != -1) return ret; 
    ret = 0; 
    for(int roll = smallest; roll <= S[die]; ++roll) 
      ret += go(die+1, roll); 
    return ret; 
  } 
  long long countFormations(vector <int> sides)  
  { 
    S = sides; 
    sort(all(S)); 
    CLEAR(cache,-1); 
    return go(0, 1); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/