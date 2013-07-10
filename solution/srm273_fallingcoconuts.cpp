/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5895
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

class FallingCoconuts {
public:
    vector<string> harvest(vector<int> drops);
};

vector<string> FallingCoconuts::harvest(vector<int> drops) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<int> drops = {8, 9, 10, 11, 12, 8, 12, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOO", "---O---"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> drops = {5, 20, 5, 20, 5, 6, 7};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOO-----------OO"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> drops = {6, 8, 10, 7, 9, 8, 8, 8, 8, 8};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOO", "-OOO--", "--O---"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> drops = {0, 0, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO", "-O-"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> drops = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO", "-OOOOOOOOOO-", "--OOOOOOOO--", "---OOOOOO---", "----OOOO----", "-----OO-----"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> drops = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOO", "--OOOOOOOOOO-", "---OOOOOOOO--", "----OOOOOO---", "-----OOOO----", "------OO-----"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> drops = {0, 0, 0, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO-----------------OOO"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> drops = {18, 7, 7, 13, 15, 0, 14, 12, 13, 15, 0, 3, 14, 0, 19, 14, 15, 5, 15, 14, 15, 5, 13, 9, 11, 11, 20, 2, 20, 9, 13, 1, 2, 11, 13, 2, 10, 18, 5, 3, 19, 11, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOO", "--OOO-O--OOOOOOOOO-OO--", "-----------OO-OOO------"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> drops = {4, 19, 7, 0, 0, 4, 8, 1, 2, 5, 0, 20, 12, 4, 8, 12, 14, 20, 17, 20, 16, 19, 18, 8, 14, 18, 16, 3, 20, 3, 9, 10, 0, 13, 7, 18, 8, 15, 0, 4, 5, 18, 11, 17, 2, 2};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOOO", "-OOOOOOOOOO-O-O-OOOOOO--", "---OO-------------OO----"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> drops = {13, 6, 6, 14, 17, 12, 9, 2, 3, 17, 11, 6, 7, 14, 13, 15, 4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOO-OOOOOOOO", "-----------O-----"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> drops = {19, 1, 1, 7, 5, 20, 5, 10, 12, 5, 6};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OO-OOOO--O-O------OO", "-----O--------------"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> drops = {2, 1, 4, 3, 15, 16, 6};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOO-O--------OO"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> drops = {13, 6, 0, 15, 1, 10, 2, 14, 4, 17, 0, 10, 14, 13, 15, 17, 19, 14, 20, 12, 15, 6, 1, 15, 17, 10, 19, 2, 7, 8, 9, 16, 17, 6, 20, 17, 16, 18, 1, 8, 14, 11, 16, 17};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOO", "--OO----OOO-OOOOOOOOOO-", "----------------OOOO---", "-----------------OO----"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> drops = {17, 5, 14, 14, 0, 1, 3, 8, 12, 4, 16, 13, 8, 6, 16, 2, 15, 18, 15, 6, 9, 10, 10, 16, 17, 4, 12, 9, 14, 3, 3, 14, 5, 6, 19, 16, 15, 18, 15, 9, 20, 10, 11, 11, 7, 9, 20, 18, 10, 4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOO", "--OOOOOOOOOOOOOOOOOOO-", "----O----OOOO-OOO-----", "---------------O------"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> drops = {11};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> drops = {8, 4, 6, 2, 10, 4, 14, 4, 20, 8, 6, 0, 15, 4, 13, 5, 4, 17, 1, 4, 4, 19, 14, 15, 14, 12, 4, 2, 0, 17};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO-OOOOOOOOO", "---OOOOO-------OO-----", "-----OO---------------"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> drops = {2, 12, 14, 19, 10, 9, 7, 6, 2, 17, 6, 11, 10, 13, 4, 5, 10, 11, 19, 4, 19, 6, 11, 4, 11, 15, 8, 19, 0, 12, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOO-OOOO", "-O-OOOO---OOOO-----O-", "-----------OO--------"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> drops = {3, 19, 5, 17, 14, 13, 4, 9, 15, 20, 17, 5, 4, 13, 17, 10, 5, 4, 4, 12, 11, 10, 12, 5, 18, 12, 7, 9, 0, 5, 8, 13, 4, 0, 14, 17, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOO", "-O-OOOO-OOOOOOOO-OO--", "----O----------------"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> drops = {14, 19, 0, 17, 6, 16, 18, 1, 7, 10, 11, 2, 9, 3, 6, 20, 5, 2, 7, 1, 4, 16};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO--OOOOOOO", "-OO-O----------------"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> drops = {7, 11, 17, 17, 19, 4, 14, 13, 16, 4, 12, 12, 18, 5, 18, 5, 18, 19, 0, 20, 20, 6, 17, 6, 17, 1, 12, 3, 16, 17, 10, 0, 7, 19, 10, 6, 19, 19, 17, 20, 20, 9, 11, 7, 19, 4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO-OOOOOOOOOOOOOOOOOOOOO", "-----OOOOOO-OOO--OOOOOOO-", "-------O----------OOOO---", "--------------------O----"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> drops = {18, 4, 14, 10, 9, 15, 11, 10, 0, 16, 1, 0, 15, 11, 14, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO--O----OOOOOOOO-O", "-----------OO---O---"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> drops = {11, 10, 19, 1, 15, 9, 11, 9, 7, 4, 16, 3, 15, 1, 14, 5, 15, 20, 12, 7, 0, 16, 10, 11, 12, 0, 12, 0, 5, 13, 12, 9, 4, 2, 17, 20, 6, 18, 5, 9, 5, 8, 2, 18, 3, 0, 12, 2, 7};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOO", "-OOOOOOOOOOOOOOOO--OO--", "---OO-O-OO--OOO--------"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> drops = {2, 3, 11, 5, 7, 1, 3, 2, 12, 3, 16, 3, 5, 14, 11, 2, 13};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOO--OOOOO-O", "--OOO------------"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> drops = {2, 4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-O"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> drops = {14, 13, 20, 6, 19, 6, 20, 9, 6, 13, 7, 19, 15, 1, 4, 20, 8, 9, 15, 11, 19, 11, 5, 0, 19, 10, 18, 14, 10, 14, 17, 9, 2, 12, 2, 0, 10, 4, 10, 18, 17, 13, 7, 6, 20, 0, 0, 2, 16};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOOO", "-OOO-OOOOOOOOOOOOOOOOO--", "----------OOO----O-O----"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> drops = {20, 18, 8, 1, 19, 17, 11, 13, 18, 15, 11, 5, 20, 20, 8, 13, 19, 10, 4, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OO--OO--OOOOOOOO-OOOOO", "------------------OOO-"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> drops = {7, 18};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O----------O"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> drops = {9, 9, 14, 17, 17, 18, 15, 8, 12, 7, 0, 3, 16, 4, 9, 18, 15, 3};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-OOO--OOOO-O-OOOOOO", "---------O-----O--O-"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> drops = {5, 3, 7, 3, 9, 1, 10, 12, 1, 4, 15, 19, 1, 1, 13, 10, 1, 13, 8, 4, 10, 9, 16, 1, 19, 7, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOO--OOO", "--OO-O--O-OO-----------"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> drops = {11, 12, 17, 17, 5, 11, 8, 12, 20, 16, 1, 17, 15, 0, 17, 15, 13, 12};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OO---O--O-OOOOOOOOOOO", "------------OO---O---"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> drops = {20, 12, 20, 19, 3, 8, 16, 5, 19, 14, 8, 16};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-O--OO--O-O-OOOOOO"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> drops = {9, 0, 7, 19, 19, 5, 15, 5, 8, 15, 10, 8, 18, 7, 2, 12, 1, 14, 18, 4, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO-OOOOOOO-O-OOOOOOOO", "-------OO-------------"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> drops = {16, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-----O"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> drops = {19, 14, 11, 1, 1, 16, 3, 2, 14, 7, 15, 10, 12, 6, 7, 12, 14, 3, 8, 19, 6, 16, 0, 16, 9, 9, 12};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOO-OO", "--O------OO-O-OOO----"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> drops = {20, 6, 18, 13, 2, 10, 5, 12, 7, 20, 3, 2, 6, 9, 3, 19, 4, 12, 6, 5, 9, 6, 12, 6, 6, 18, 6, 14, 6, 10, 8};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO--OOOOO", "---OOOOOOO-O---------", "----OOOO-------------"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> drops = {4, 11, 16, 2, 10, 11, 5, 13, 18, 12, 16, 5};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-OOO---OOOO--OOO", "----------O------"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> drops = {4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> drops = {10, 16, 6, 5, 8, 8, 1, 16, 15, 12, 9, 12, 11, 11, 0, 18, 2, 4, 9, 0, 13, 1, 20, 6, 9, 0, 20, 20, 0, 9, 15, 9, 15, 20, 20, 19, 14, 18, 5, 4, 16, 12};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOOOO", "--OO---O--OOOOO-OOOOOOO--", "-----------OO------------"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> drops = {20, 9, 4, 7, 14, 1, 2, 9, 18, 17, 9, 8, 16, 8, 9, 19, 5, 0, 6, 11, 0, 1, 14, 20, 7, 11, 7, 2, 19, 20, 13, 4, 0, 11, 1, 15, 8, 9, 6, 4, 20, 16, 16, 12, 20, 14};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOOO", "-OOOOOOOOOOOOOOOOOO-OOO-", "---------O--------------"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> drops = {6, 19, 3, 15, 15, 19, 19, 1, 4, 20, 17, 14, 11, 17, 1, 9};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOO-O--O-O--OOOOOOOO", "----------------O----"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> drops = {15, 12, 14, 4, 0, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OO--O-------O-OO"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> drops = {18, 4, 13, 7, 10, 10, 17, 15, 3, 6, 20, 3, 12, 16, 6, 13, 7, 13, 10, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-OOOOOOOOOOOOOOOOO-O", "-------------O-------"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> drops = {13, 2, 5, 0, 5};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-O--OO------O"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> drops = {17, 10, 19, 4, 15, 1, 4, 1, 2, 7, 13, 11, 8, 15, 0, 5, 15, 3, 4, 14, 15};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOO-OO-OOOOO-O", "---OO---------OO----"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> drops = {15, 19, 12, 4, 8, 16, 4, 13, 19, 20, 12, 17, 4, 18, 2, 6, 5, 5, 14, 19, 17, 19, 17};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOO--OOOOOOOOOOO", "---O-----------OOOO-"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> drops = {1, 15, 7, 1, 18, 20, 5, 19, 17, 20, 8, 19, 12, 13, 8, 1, 1, 15, 18, 1, 9, 18, 6, 4, 19, 16, 20, 20, 8, 9, 14, 10, 5, 13, 6, 17, 15, 5, 8, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOOO", "--O--OOOOOO---O-OOOOOOO-", "------------------O-----"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> drops = {16, 11, 16, 15, 16, 9, 15, 12, 5, 8, 4, 19, 10, 15, 0, 18, 18, 1, 0, 14, 18, 16, 15, 4, 4, 18, 13, 16};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO-OOO--OOOOOOOOOOOOO", "-----O--------OOOOOOO-", "-----------------O----"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> drops = {4, 9, 5, 10, 0, 1, 5, 14, 3, 15, 3, 11, 4, 3, 6, 20, 17, 1, 6, 15, 3, 18, 20, 9, 8};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO--OOOOO-OO", "-OOOO-O-O-------------"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> drops = {6, 14, 9, 2, 16, 2, 10, 0, 5, 8, 7, 0, 20, 7, 6, 4, 8, 4, 11, 11, 1, 16, 16, 3, 5, 16, 16, 6, 11, 15, 10, 12, 18, 1, 17, 9, 9, 4, 9, 7, 12, 4, 6, 19, 4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOO", "-OOOOOOOOOOOO--OOO-O-", "---OOOOO-OO----------", "------O--------------"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> drops = {14, 20, 8, 3, 17, 12, 9, 6, 11, 16, 7, 11, 5, 4, 5, 11, 4, 11, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO-OO--O", "-OO----OO---------"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> drops = {0, 10, 18, 12, 8, 20, 1, 13, 10, 7, 10, 12, 12, 16, 15, 12, 9, 3, 5, 6, 14, 1, 6, 17};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOO-OOOOOOOOOOOOOO-O", "------O--O--OOO------"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> drops = {12, 7, 20, 10, 12, 1, 18, 8, 19, 12, 14, 11, 1, 9, 12, 20, 1, 7, 18, 20, 9, 4, 9, 11, 13, 18, 14, 11, 17, 16, 9, 18, 20, 5, 7, 6, 11, 9, 17, 7, 14, 5, 7, 7, 19};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO-OOOOOOOOOOOOOOOOOOO", "-----OOOOOOOOOO-OOOOO--", "------OOOOOOO------O---"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> drops = {14, 4, 12, 5, 12, 2};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-OO------OOO"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> drops = {11, 2, 5, 9, 11, 13, 12, 12, 1, 15, 3, 9, 3, 7, 20, 15, 4, 12, 12, 14, 2, 8, 19, 1, 6, 7, 16, 6, 14, 7, 3, 14, 13, 4};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOO-OO", "--OOOOOOO--OOOOO-----", "-------------OO------"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> drops = {1, 7, 0, 3, 2, 13, 6, 14, 13, 17, 7, 6};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOO-OOOO---OOO--O"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> drops = {3, 6, 10, 18, 7, 17, 12, 10, 8, 15, 9, 18, 7, 8, 8, 13, 8, 10, 1, 5, 10, 16, 2, 13, 18, 13, 12, 4, 13, 19};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOO", "------OOOOOOOO---O--", "-------O------------"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> drops = {11, 14, 5, 3, 18, 19, 18, 7, 1, 7, 8, 5, 5, 6, 5, 17, 9, 19, 10, 2, 4, 9, 14, 13, 0, 9};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO-OOOOOOOO", "----OOO-OOO----------"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> drops = {3, 3, 2, 3, 3, 3, 0, 0, 1, 0, 1, 3, 2, 0, 0, 1, 0, 2, 0, 3, 0, 2, 0, 1, 2, 1, 1, 2, 3, 0, 3, 0, 3, 3, 1, 3, 1, 1, 0, 3};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOO", "-OOOOOOOOOO--", "--OOOOOOOO---", "---OOOOOO----", "-----OOO-----"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> drops = {2, 2, 3, 0, 1, 0, 3, 1, 0, 0, 2, 3, 0, 3, 0, 2, 1, 2, 2, 3, 2, 2, 0, 2, 1, 2, 1, 0, 2, 0, 1, 2, 0, 0, 3, 1, 3, 0, 3, 1, 0, 3, 3, 3, 2, 0, 3, 0, 2};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "-OOOOOOOOOOOO-", "--OOOOOOOOOO--", "----OOOOOOO---", "-----OOOOO----", "-------O------"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> drops = {1, 2, 2, 2, 1, 1, 1, 0, 3, 2, 2, 2, 3, 3, 1, 1, 1, 0, 2, 1, 0, 0, 2, 3, 2, 3, 3, 1, 2, 2, 3};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOO", "-OOOOOOOOO-", "--OOOOOOO--", "----OOO----", "-----O-----"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> drops = {2, 3, 2, 2, 0, 3, 3, 0, 2, 2, 1, 3, 1, 1, 3, 2, 2, 1, 3, 3, 2, 3, 2, 1, 0, 3};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOO", "--OOOOOOO--", "---OOOOO---", "----OOO----"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> drops = {0, 0, 2, 0, 2, 3, 3, 0, 0, 0, 1, 3, 2, 1, 1, 3, 3, 2, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOO", "-OOOOOO-", "--OOOO--", "---OO---"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> drops = {0, 1, 0, 2, 2, 1, 0, 1, 1, 0, 1, 3, 2, 3, 1, 1, 0, 1, 3, 2, 2, 1, 1, 2, 2, 1, 1, 1, 2};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOO", "-OOOOOOOO-", "--OOOOOO--", "---OOOO---", "----O-----"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> drops = {3, 3, 3, 3, 2, 1, 0, 3, 0, 3, 0, 1, 3, 0, 3, 2, 2, 1, 2, 1, 3, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOO", "--OOOOOOO-", "---OOOO---", "----OO----"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> drops = {2, 0, 1, 1, 1, 3, 2, 0, 1, 0, 3, 0, 1, 2, 3, 3, 2, 3, 2, 2, 0, 0, 0, 2, 3, 0, 1, 0, 0, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOO", "--OOOOOOOO-", "---OOOOOO--", "----OOOO---", "-----O-----"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> drops = {1, 0, 3, 3, 1, 0, 3, 2, 3, 3, 0, 3, 2, 2, 3, 0, 3, 3, 0, 2, 3, 0, 2, 1, 3, 0, 3, 0, 1, 1, 2, 1, 0, 0, 1, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO", "-OOOOOOOOOO-", "--OOOOOOO---", "---OOOOO----", "-----OO-----"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> drops = {3, 2, 1, 0, 2, 0, 3, 3, 3, 1, 2, 3, 1, 3, 1, 1, 3, 0, 1, 1, 1, 2, 0, 0, 0, 3, 1, 2, 3, 0, 3, 3, 0, 0, 0, 2, 0, 0, 0, 3, 2, 0, 2, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOO", "-OOOOOOOOOOO-", "---OOOOOOOO--", "----OOOOOO---", "-----OOOO----", "------OO-----"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> drops = {0, 2, 3, 1, 0, 0, 1, 2, 1, 0, 1, 1, 1, 3, 3, 3, 1, 1, 0, 1, 1, 3, 2, 2, 3, 2, 0, 2, 0, 0, 3, 0, 3, 2, 2, 2, 3, 0, 2, 0, 3, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOO", "-OOOOOOOOOOO-", "--OOOOOOOO---", "---OOOOOO----", "----OOOO-----", "------O------"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> drops = {0, 2, 0, 2, 0, 1, 2, 1, 0, 0, 2, 0, 3, 0, 0, 2, 0, 3, 1, 1, 0, 1, 1, 2, 1, 2};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOO", "-OOOOOOOO-", "--OOOOO---", "---OOO----"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> drops = {1, 2, 3, 3, 0, 0, 3, 0, 3, 0, 0, 0, 3, 3, 2, 0, 3, 2, 3, 2, 0, 1, 0, 1, 0, 2, 2, 0, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOO", "--OOOOOOOO-", "---OOOOOO--", "----OOO----", "-----O-----"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> drops = {1, 0, 3, 0, 1, 3, 3, 1, 1, 3, 1, 2, 1, 2, 1, 0, 3, 0, 1, 1, 2, 3, 3, 0, 2, 1, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOO", "-OOOOOOOO-", "--OOOOOO--", "----OOO---"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> drops = {2, 3, 0, 1, 2, 1, 0, 2, 3, 2, 0, 2, 1, 1, 2, 3, 1, 0, 2, 0, 0, 0, 0, 0, 2, 2, 3, 2, 2, 0, 3, 0, 0, 3, 1, 0, 0, 3, 2, 0, 3, 3, 1, 1, 3, 3};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "--OOOOOOOOOOO-", "---OOOOOOOOO--", "----OOOOOO----", "-----OOOO-----", "------OO------"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> drops = {1, 0, 3, 2, 2, 0, 2, 2, 2, 2, 3, 0, 2, 3, 3, 0, 0, 1, 3, 1, 1, 1, 3, 3, 1, 2, 3, 3, 0, 2, 0, 2, 0, 1, 2, 1, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO", "-OOOOOOOOOO-", "--OOOOOOOO--", "----OOOOO---", "-----OOO----"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> drops = {5, 20, 5, 20, 5, 6, 7};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOO-----------OO"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> drops = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 17, 17, 17, 17, 17, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "--OOOOOOOOOOO-", "---OOOOOOOOO--", "----OOOOOOO---", "-----OOOOO----", "------OOO-----", "-------O------"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> drops = {8, 9, 10, 11, 12, 8, 12, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOO", "---O---"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> drops = {1, 12, 13, 14, 12, 12, 12, 12, 14, 5, 19, 0, 12, 2, 4, 12, 4, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 20, 14, 5, 19, 0, 12, 1, 2, 12, 4, 2, 1, 5, 6, 7, 8, 9, 0, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOO--OOOO", "-OOOOOOOOOOOOOOOO-------", "---OOOOO--OO--OO--------"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> drops = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOO", "--OOOO-", "---OO--"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> drops = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOO", "-OOOOOOOOOOO-", "--OOOOOOOOO--", "---OOOOOOO---", "----OOOOO----", "-----OOO-----", "------O------"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> drops = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOO", "-OOOOO-", "--OOO--"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> drops = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "-OOOOOOOOOOO--", "--OOOOOOOOO---", "---OOOOOOO----", "----OOOOO-----", "-----OOO------", "------O-------"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> drops = {6, 8, 10, 7, 9, 8, 8, 8, 8, 8};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOO", "-OOO--", "--O---"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> drops = {0, 0, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOO", "-O-"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> drops = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOO", "-OOOO-", "--OO--"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> drops = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "-OOOOOOOOOOO--", "--OOOOOOOOO---", "---OOOOOOO----", "----OOOOO-----", "-----OOO------", "------O-------"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> drops = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "-OOOOOOOOOOO--", "--OOOOOOOOO---", "---OOOOOOO----", "----OOOOO-----", "-----OOO------", "------O-------"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> drops = {0, 0, 0, 0, 0, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOO", "--OO-"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> drops = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOO", "-OOO--"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> drops = {0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOO", "-OOOOOOOOOOOO-", "--OOOOOOOOOO--", "----OOOOOOO---", "-----OOOOO----", "------OO------"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> drops = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOO", "-OOOOOOOOOO-", "--OOOOOOOO--", "---OOOOOO---", "----OOOO----", "-----OO-----"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> drops = {20, 20, 20, 0, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-----------------OOOOO", "-------------------OOO-", "--------------------O--"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> drops = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOOOOOOOOOOOOOOOOOOO", "-OOOOOOOOO----------------", "--OOOOOOO-----------------", "---OOOOO------------------", "----OOO-------------------"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> drops = {0, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O-------------OOOOOOOOOOOOO", "---------------OOOOOOOOOOO-", "----------------OOOOOOOOO--", "-----------------OOOOOOO---", "------------------OOOOO----", "-------------------OOO-----", "--------------------O------"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> drops = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOO", "-OOOOOO-", "--OOOO--", "---OO---"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> drops = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOO", "-OOOOO-", "--OOO--"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> drops = {0, 20, 20, 19, 20, 20, 0, 0, 0, 19, 1, 18};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOO--------------OOOOOO", "-O-------------------O--"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> drops = {20, 20, 20, 10, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOO----OOO----OOOOOOOOO", "-OOOOOOO-------------OOOOOOO-", "--OOOOO---------------OOOOO--", "----OO-----------------OOO---"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> drops = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 20, 20, 20, 20, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOO---------------OOOO", "-OOOO-----------------O--", "--OO---------------------"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> drops = {1, 1, 20};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OO-----------------O"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> drops = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    FallingCoconuts* pObj = new FallingCoconuts();
    clock_t start = clock();
    vector<string> result = pObj->harvest(drops);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOO", "-OOO-", "--O--"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=8070&pm=5895
********************************************************************************
// I think it is good to submit wrong solutions sometimes to give others challenging opportunities. 
#include <algorithm> 
#include <string> 
#include <vector> 
using namespace std; 
 
#define looooooooooooooooooooooooooooong long long long 
 
typedef vector<string> vs; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// Standard mathematical quantifiers, plus tools to implement them 
// find the first k in [a,b) that satisfies cond, or b if none 
#define FIRST(k,a,b,cond) CLC(LET(k, a); for(; k LS (b); ++k) if(cond) break, k) 
// find the last k in [a,b) that satisfies cond, or a-1 if none 
#define LAST(k,a,b,cond) CLC(LET(k, b); while((a) <= (--k)) if(cond) break, k) 
#define EXISTS(k,a,b,cond) (FIRST(k,a,b,cond) LS (b)) 
#define FOLD0(k,a,b,init,act) CLC(LET(k, a); LET(R##k, init); for(; k LS (b); ++k) {act;}, R##k) 
#define SUMTO(k,a,b,init,x)  FOLD0(k,a,b,init,R##k += (x)) 
 
#line 3 "FallingCoconuts.cc" 
 
int cocoh[20][128]; 
 
class FallingCoconuts { 
  public: 
  vector <string> harvest(vector <int> drops) { 
    // !FDI 
    FOR(k,0,128) FOR(l,0,20) cocoh[l][k] = '-'; 
    FOR(k,0,128) cocoh[0][k] = 'O'; 
    FOR(k,0,Size(drops)) { 
      int x = drops[k] + 25; 
      int y = 19; 
      do { 
        if(cocoh[y-1][x] == '-') y--; 
        else if(cocoh[y-1][x+1] == '-') {y--; x++;} 
        else if(cocoh[y-1][x-1] == '-') {y--; x--;} 
        else break; 
        } 
      while(1); 
      cocoh[y][x] = 'O'; 
      } 
    int m = FIRST(k,0,128, EXISTS(l,1,19, cocoh[l][k] == 'O')); 
    int ma = 1+LAST(k,0,128, EXISTS(l,1,19, cocoh[l][k] == 'O')); 
    int my = 1+LAST(l,0,19, EXISTS(k,0,128, cocoh[l][k] == 'O')); 
    vs res; 
    string z; 
    printf("%d %d %d\n", m,ma,my); 
    FOR(k,1,my) res.push_back(SUMTO(x,m,ma, z, cocoh[k][x])); 
    return res; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/