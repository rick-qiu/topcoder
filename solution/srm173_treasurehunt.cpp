/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1958
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

class TreasureHunt {
public:
    vector<int> findTreasure(vector<string> island, vector<string> instructions);
};

vector<int> TreasureHunt::findTreasure(vector<string> island, vector<string> instructions) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> island = {"..OOOO..", ".OOOO...", "OOXOOOOO", "OOOOOOO.", ".OOOO...", "..OOO..."};
    vector<string> instructions = {"W 3", "S 1", "E 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> island = {".......", ".OOOOO.", ".OOOOO.", ".OOXOO.", ".OOOOO.", ".OOOOO.", "......."};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> island = {"OOOOOOOOOOO.", "OX..........", "OOOOOOOOOOO."};
    vector<string> instructions = {"W 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> island = {"....OO.", "..OOXOO", "OOOO...", ".OOOOOO", "...OOOO", ".OOOOO.", "..OOO.."};
    vector<string> instructions = {"N 1", "E 1", "N 4"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> island = {"X"};
    vector<string> instructions = {"N 1", "E 1", "S 1", "W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> island = {".................O..", "..OO.......OOOOO.O..", "..OOO..OOO.OOOOOOOO.", "..OOOOOOOOOOOOOOOOO.", "..OOOOOOOOOOOOOOOOO.", "...OOOOOOOOOOOOOOOO.", "OO.OOOOOOOXOOOOOO...", ".OOOOOOO..OOOOOOOO..", "OOOOOOOOO..OOOOOOOO.", "OOOOOOOOO..OOOOOOO..", ".OOOOOOOOO..........", "OOOOOOOOOOOOOOOOOO..", "..OOOOOOOOOOOOOOO...", "OOOOOOOOOOOOOOOOO...", ".OOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOO..", "..OOOOOOOOOOOOOOOOO.", "OOOOO.OOOOOO..OOO...", "O..OO.OOOO.....OOO..", "O......O.OO......OO."};
    vector<string> instructions = {"N 2", "E 3", "N 4", "E 2", "S 1", "W 2", "E 9", "E 2", "N 3", "W 5", "N 1", "W 6", "N 6", "S 1", "S 1", "E 7"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 6};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> island = {"OXO."};
    vector<string> instructions = {"W 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> island = {".XOO"};
    vector<string> instructions = {"W 3"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> island = {"X.OO", "O..O", "OOOO"};
    vector<string> instructions = {"W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> island = {"O.O.O.X.O.O", "O.O.O.O.O.O", "O.O.O.O.O.O", "O.O.O.O.O.O", "OOOOOOOOOOO"};
    vector<string> instructions = {"E 2", "E 2", "E 2", "E 2", "E 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 4};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> island = {"OOOOOOO.OOOOOO.O", "...O.O..O....OOO", ".OOO.OXOOO.O.O..", ".O.........O.O.O", ".O.OOO.OOOOO.OOO", ".O.O.O.O.O.....O", ".OOO.OOO.OOOOO.."};
    vector<string> instructions = {"N 1", "E 1", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> island = {".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.X", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", "OO.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"};
    vector<string> instructions = {"E 1", "N 1", "S 1", "W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 49};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> island = {".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.X", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", "OO.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"};
    vector<string> instructions = {"N 1", "E 1", "S 1", "W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 49};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> island = {"OOOOOXOOOO"};
    vector<string> instructions = {"E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> island = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................X...............................", "..................O...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    vector<string> instructions = {"S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 23};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> island = {".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......O.........................O................", ".......OOOOOOOOOOOXOOOOOOOOOOOOOOO................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................O...............................", "..................OOOOOOOOOOOOOOOOO...............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    vector<string> instructions = {"W 9", "W 7", "N 6", "N 6"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 22};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> island = {"OOXOOOO"};
    vector<string> instructions = {"W 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> island = {"...........O............................", "..........OOOO..........................", "..........OOO.....O....O................", "...........OO....OOOOO.OO...............", ".........OOO...OOOOOOO.OOOO....O........", ".........OOOO...OOOOOO.OOOOOOOOO........", "...........O..OOOOOOOOOOOOOOOOOOO.......", "..........OOOOOOOOOOOOOOOOOOOOOO........", ".......OOOOOOOOOOOOOOOOOOOO.O..O........", "........OOOOOOOOOOOOOOOOOO..............", "......OOO.OOOOOOOOXOOOOOOOOO............", "...........OOOOOOOOOOOOOOOOO.OO.........", "...........OOOOOOOOOOOOOOOOOOOOO........", "............OOOOOOOOOOOOOOOOOOOO........", "...........OOOOOOOOOOOOOOOOOOOOOO.......", "............OOOOOOOOOOOOOOOOOOOOO.......", ".............OOOOOOOOOOOOOOOOOOO........", "...........OOOOOOOOOOOOOOOOOOOOO........", "..........OOOOOOOOOOOOOOOOOOOOO.........", "..........OOOOOOOOOOOOOOOOOOOOO.........", "..........OOOOOOOOOOOOOOOOOOOOOOO.......", "...........OOOOOOOOOOOOOOOOOOOOO........", "............OOOOOOOOOOOOO.O.OOO.........", ".............OOOOOOOOOOOO...OOOO........", ".............OOOOOOOOOO...OOO.O.........", "..............OOOOOOO.....O...OOO.......", ".............OOOO.........OO..O.O.......", "...............O...........O....O......."};
    vector<string> instructions = {"N 4", "E 2", "S 1", "W 3", "N 2", "W 1", "E 1", "N 3", "S 2", "W 1", "N 3", "W 1", "S 4"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 16};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> island = {"...", "OOX"};
    vector<string> instructions = {"E 1", "N 1", "S 1", "E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> island = {"OOX"};
    vector<string> instructions = {"E 1", "N 1", "S 1", "E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> island = {"..O.OOOOO", "..OOO...O", "..O.....O", "O.O.....X", "OOO......"};
    vector<string> instructions = {"S 1", "E 2", "N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> island = {".O.O.O.O.O.O.O.O.O.O.O.O.X.O.O.O.O.O.O.O.O.O.O.O..", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", ".O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", "OO.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O.O", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"};
    vector<string> instructions = {"S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "N 1", "S 1", "E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 49};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> island = {"OO", "X.", "OO"};
    vector<string> instructions = {"W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> island = {"OXO", "O.O"};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> island = {"OO", ".X", "OO"};
    vector<string> instructions = {"E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> island = {"O.O", "OXO"};
    vector<string> instructions = {"S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> island = {"OOOOO", "OXOOO", "OOOOO", ".O.O."};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> island = {"XOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"};
    vector<string> instructions = {"W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9", "W 9", "E 9"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> island = {"OOOOO", "OOX.O", "OOO.O"};
    vector<string> instructions = {"N 1", "W 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> island = {"OX"};
    vector<string> instructions = {"E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> island = {"O", "O", "X"};
    vector<string> instructions = {"N 1", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> island = {"OOOOX", "O....", "OOOOO"};
    vector<string> instructions = {"N 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> island = {"OOO", "OXO", "OOO"};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> island = {".......", ".OOOOO.", ".OOOOO.", ".OOXOO.", ".OOOOO.", ".OOOOO.", "......."};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> island = {"OOOOO", "OOOOO", "OOXOO", "OOOOO", "OOOOO"};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> island = {"OOO", "OOO", "OOX"};
    vector<string> instructions = {"E 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> island = {"O", "X", "O"};
    vector<string> instructions = {"N 1", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> island = {".OOO", "OOOO", "OOXO", "OOOO"};
    vector<string> instructions = {"E 1", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> island = {"OX"};
    vector<string> instructions = {"W 1", "E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> island = {".OOO", "OX.O", "...."};
    vector<string> instructions = {"W 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> island = {"OX"};
    vector<string> instructions = {"E 9"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> island = {".X.", "OOO", ".O."};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> island = {".....", ".XOO.", ".OOO.", ".OOO.", "....."};
    vector<string> instructions = {"S 1", "E 1", "N 1", "W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> island = {".OO", "OOX", "OOO"};
    vector<string> instructions = {"E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> island = {".O.", "OOO", "OXO"};
    vector<string> instructions = {"S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> island = {"O.X", "OOO"};
    vector<string> instructions = {"E 2"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> island = {".O.", "OOX", ".O."};
    vector<string> instructions = {"E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> island = {"OO.", "OXO", ".OO"};
    vector<string> instructions = {"E 1", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> island = {".OOO", "OOXO", "OOOO"};
    vector<string> instructions = {"E 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 0};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> island = {"X.O", "OOO"};
    vector<string> instructions = {"E 2", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> island = {"OXO", "OOO", "OOO"};
    vector<string> instructions = {"S 1", "N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> island = {".OO", "OOO", "OXO"};
    vector<string> instructions = {"S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> island = {"..", "XO"};
    vector<string> instructions = {"E 1", "W 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> island = {"OXO", "OOO", ".O.", ".O."};
    vector<string> instructions = {"N 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> island = {"..OOOOOOOOOOOOOO", "..OOOOOOOOOOOOOO", "..OOOOOOOOOOOOOO", "..OOOOOOOOOOOOOO", "..OOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOO", "OOOOOOOOOOOOOOOO", "OOOOOOOOOOOOXOOO"};
    vector<string> instructions = {"W 1", "E 1", "S 1"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 11};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> island = {"..........", "......O...", "...O.OO...", "...OOOO...", "...OXOO...", "...OOOO...", "...O.O....", ".........."};
    vector<string> instructions = {"S 4"};
    TreasureHunt* pObj = new TreasureHunt();
    clock_t start = clock();
    vector<int> result = pObj->findTreasure(island, instructions);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 5};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4670&pm=1958
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class TreasureHunt { 
public: 
vector <int> findTreasure(vector <string> a, vector <string> b) { 
  int i, j, k, x, y, z, n, tx, ty, best = 1000000000, cx, cy; 
  vector <int> ret; 
  string s; 
  for( i = 0; i < a.size(); i++ ) a[i] = "." + a[i] + "."; 
  for( i = 0; i < a[0].size(); i++ ) s += '.'; 
  a.insert(a.begin(), s); 
  a.insert(a.end(), s); 
  for( y = 0; y < a.size(); y++ ) 
  for( x = 0; x < a[y].size(); x++ ) 
    if( a[y][x] == 'X' ) {ty = y; tx = x;} 
  for( y = 0; y < a.size(); y++ ) 
  for( x = 0; x < a[y].size(); x++ ) if( a[y][x] != '.' ) 
    if( a[y][x-1] == '.' || a[y][x+1] == '.' || 
      a[y-1][x] == '.' || a[y+1][x] == '.' ) { 
      cx = x; cy = y; 
      for( i = 0; i < b.size(); i++ ) { 
        int dx=0, dy=0; 
        if( b[i][0] == 'W' ) dx = -1; 
        if( b[i][0] == 'E' ) dx = 1; 
        if( b[i][0] == 'N' ) dy = -1; 
        if( b[i][0] == 'S' ) dy = 1; 
        for( j = atoi(b[i].c_str()+2); j > 0; j-- ) { 
          cy += dy; cx += dx; 
          if( a[cy][cx] == '.' ) goto fail; 
        } 
      } 
      z = (cx-tx)*(cx-tx)+(cy-ty)*(cy-ty); 
      if( z < best ) { 
        best = z; 
        ret = VI(2); 
        ret[0] = cx-1; 
        ret[1] = cy-1; 
      } 
fail:    ; 
    } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/