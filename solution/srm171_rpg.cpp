/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1944
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

class RPG {
public:
    vector<int> dieRolls(vector<string> dice);
};

vector<int> RPG::dieRolls(vector<string> dice) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> dice = {"3d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 18, 10};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dice = {"3d4", "1d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 18, 11};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dice = {"6d5", "10d10", "10d20"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 330, 178};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dice = {"1d2", "2d2", "4d2", "6d2", "8d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 42, 31};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dice = {"5d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 10, 7};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dice = {"1d6", "2d8"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 22, 12};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dice = {"3d10", "3d16", "3d2", "9d16", "5d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23, 238, 130};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dice = {"3d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dice = {"1d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 3};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dice = {"5d6", "7d20", "5d14", "5d12", "3d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 318, 171};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dice = {"3d18", "7d8", "9d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 164, 91};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dice = {"1d6", "5d16", "7d14", "3d20"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 244, 130};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dice = {"5d4", "7d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 34, 23};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dice = {"5d14", "1d12", "9d10", "9d4", "7d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31, 222, 126};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dice = {"3d6", "3d16", "5d14"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 136, 73};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dice = {"7d6", "9d16", "7d10", "3d12", "7d10"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33, 362, 197};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dice = {"6d19", "6d11", "8d3"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 204, 112};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dice = {"10d7"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 70, 40};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dice = {"8d19"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 152, 80};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dice = {"4d11", "6d13"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 122, 66};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dice = {"8d13"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 104, 56};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dice = {"2d15", "10d3", "4d17", "4d19"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 204, 112};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dice = {"2d3", "4d5", "2d15", "4d9"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 92, 52};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dice = {"9d9", "2d11", "10d5", "6d3"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 171, 99};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dice = {"8d11", "6d3", "6d7", "6d9"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 202, 114};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dice = {"9d18", "9d4", "5d14", "5d16"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 348, 188};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dice = {"3d8", "9d10", "1d16", "1d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 132, 73};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dice = {"7d6", "1d16"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 58, 33};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dice = {"1d8", "3d4", "2d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 32, 19};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dice = {"3d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 18, 10};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dice = {"3d4", "1d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 18, 11};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dice = {"1d2", "2d2", "4d2", "6d2", "8d2"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21, 42, 31};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dice = {"6d5", "10d10", "10d20"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 330, 178};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dice = {"10d20"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 200, 105};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dice = {"1d6"};
    RPG* pObj = new RPG();
    clock_t start = clock();
    vector<int> result = pObj->dieRolls(dice);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 6, 3};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=260913&rd=4660&pm=1944
********************************************************************************
#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
#include<map>
#include<sstream>
#include<set>
#define VV vector< vector<int> >
#define S string
using namespace std;
class RPG {
  public:
  vector <int> dieRolls(vector <string> dice) {
    int maxi=0,mini=0;
    for(int i=0;i<dice.size();i++)
    {
      stringstream s(dice[i]);
      int a,b;
      char x;
      s>>a>>x>>b;
      maxi+=a*b;
      mini+=a;
    }
    vector<int> result(3);
    result[0]=mini;
    result[1]=maxi;
    result[2]=(mini+maxi)/2;
    return result;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/