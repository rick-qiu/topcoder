/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3102
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

class FolderSize {
public:
    vector<int> calculateWaste(vector<string> files, int folderCount, int clusterSize);
};

vector<int> FolderSize::calculateWaste(vector<string> files, int folderCount, int clusterSize) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> files = {"0 55", "0 47", "1 86"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 14, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> files = {"0 123", "2 456", "4 789", "6 012", "8 345"};
    int folderCount = 10;
    int clusterSize = 98;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {73, 0, 34, 0, 93, 0, 86, 0, 47, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> files = {};
    int folderCount = 5;
    int clusterSize = 100;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> files = {"0 93842", "1 493784", "2 43212", "3 99327", "4 456209", "5 947243", "6 59348", "7 58237", "8 5834", "9 492384", "0 58342", "3 538432", "6 1432", "9 453983", "2 4321", "4 583729", "6 6974", "8 9864", "4 43211", "8 38437"};
    int folderCount = 10;
    int clusterSize = 22485;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27696, 886, 19922, 14306, 18616, 19612, 44671, 9218, 35805, 20488};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> files = {"0 393827", "0 439232", "0 482732", "1 937828", "1 482373", "1 472363"};
    int folderCount = 2;
    int clusterSize = 1024;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1073, 1836};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> files = {"0 94382", "0 834324", "00 0834", "01 48343", "49 534211", "37 54327"};
    int folderCount = 50;
    int clusterSize = 7634;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17076, 5095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> files = {"0 0", "0 0", "0 0", "1 0", "2 0", "3 0"};
    int folderCount = 4;
    int clusterSize = 1;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> files = {"0 50", "0 47", "1 86"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 14, 0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> files = {"09 00", "08 50"};
    int folderCount = 10;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> files = {"0 2"};
    int folderCount = 1;
    int clusterSize = 2;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> files = {"0 93842", "1 493784", "2 43212", "3 99327", "4 456209", "5 947243", "6 59348", "7 58237", "8 5834", "9 492384", "0 58342", "3 538432", "6 1432", "9 453983", "2 4321", "4 583729", "6 6974", "8 9864", "4 43211", "8 38437"};
    int folderCount = 10;
    int clusterSize = 22485;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27696, 886, 19922, 14306, 18616, 19612, 44671, 9218, 35805, 20488};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> files = {"0 100"};
    int folderCount = 1;
    int clusterSize = 100;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> files = {"0 50"};
    int folderCount = 1;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> files = {"0 10"};
    int folderCount = 1;
    int clusterSize = 10;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> files = {"0 55", "0 0", "1 86"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 14, 0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> files = {"0 50"};
    int folderCount = 2;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> files = {"0 10"};
    int folderCount = 2;
    int clusterSize = 5;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> files = {"0 1000"};
    int folderCount = 1;
    int clusterSize = 100;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> files = {"0 0", "0 47", "1 86"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 14, 0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> files = {"0 0"};
    int folderCount = 1;
    int clusterSize = 5;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> files = {"0 0"};
    int folderCount = 1;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> files = {"0 0"};
    int folderCount = 1;
    int clusterSize = 100;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> files = {"0 1"};
    int folderCount = 1;
    int clusterSize = 1;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> files = {"0 0"};
    int folderCount = 1;
    int clusterSize = 20;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> files = {"0 100"};
    int folderCount = 1;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> files = {"0 50", "0 50", "1 50"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> files = {"1 50", "2 50"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> files = {"0 20"};
    int folderCount = 1;
    int clusterSize = 20;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> files = {"0 120", "2 90", "4 780", "6 012", "8 345"};
    int folderCount = 10;
    int clusterSize = 10;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 8, 0, 5, 0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> files = {"0 0"};
    int folderCount = 1;
    int clusterSize = 2;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> files = {"0 55", "0 47", "1 50"};
    int folderCount = 3;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 0, 0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> files = {"0 123", "2 456", "4 789", "6 012", "8 345"};
    int folderCount = 10;
    int clusterSize = 98;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {73, 0, 34, 0, 93, 0, 86, 0, 47, 0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> files = {"0 1", "0 1"};
    int folderCount = 1;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> files = {"0 50", "0 50", "0 40"};
    int folderCount = 3;
    int clusterSize = 10;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> files = {"0 3"};
    int folderCount = 1;
    int clusterSize = 3;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> files = {"0 5"};
    int folderCount = 1;
    int clusterSize = 5;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> files = {"0 2"};
    int folderCount = 1;
    int clusterSize = 1;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> files = {"0 0"};
    int folderCount = 2;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> files = {"49 55"};
    int folderCount = 50;
    int clusterSize = 50;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> files = {"0 40"};
    int folderCount = 1;
    int clusterSize = 40;
    FolderSize* pObj = new FolderSize();
    clock_t start = clock();
    vector<int> result = pObj->calculateWaste(files, folderCount, clusterSize);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=5864&pm=3102
********************************************************************************
/*
 * ALL HOPE ABANDON, YE WHO ENTER HERE
 */
 
 
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <set>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <iostream>
#include <math.h>
#include <stdio.h>
 
using namespace std;
 
#define fi(a, b) for(int i=((int)(a)); i < ((int)(b)); i++)
#define fj(a, b) for(int j=((int)(a)); j < ((int)(b)); j++)
#define fk(a, b) for(int k=((int)(a)); k < ((int)(b)); k++)
#define fl(a, b) for(int l=((int)(a)); l < ((int)(b)); l++)
#define fdi(a, b) for(int i=((int)(a)); i > ((int)(b)); i--)
#define fdj(a, b) for(int j=((int)(a)); j > ((int)(b)); j--)
#define fdk(a, b) for(int k=((int)(a)); k > ((int)(b)); k--)
#define fdl(a, b) for(int l=((int)(a)); l > ((int)(b)); l--)
#define ri(b) for(int i=0; i < ((int)(b)); i++)
#define rj(b) for(int j=0; j < ((int)(b)); j++)
#define rk(b) for(int k=0; k < ((int)(b)); k++)
#define rl(b) for(int l=0; l < ((int)(b)); l++)
 
#define itadj for(int adx=-1; adx<=1; adx++) for(int ady=-1; ady<=1; ady++)
#define chkadj(i, j, n, m) ((i)>=0&&(j)>=0&&(i)<n&&(j)<m)
#define fe(v,it) for(__typeof(v.begin()) it=v.begin(); it != v.end(); it++)
 
#define ll  long long
#define i64 long long
#define lint long long
#define i32 int
typedef string str;
typedef double dbl;
 
#define bz(a) memset(a,0,sizeof(a))
#define sq(x) ((x)*(x))
 
#define vi  vector< int >
#define vvi vector< vector< int > >
#define vs  vector< string >
#define vvs vector< vector< string > >
#define vd  vector< dbl >
#define vvd vector< vector< dbl > >
#define vl  vector< ll >
 
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)>(b)?(b):(a))
#define ABS(a)   MAX((a),-(a))
 
#define vp(v,a)  (v).push_back(a)
#define vpob(v) (v).pop_back()
#define vpof(v) (v).pop_front()
 
#define va(v) (v).begin(), (v).end()
#define vf(v,a) find(va(v),(a))
#define ve(v,a) (vf(v,a)!=(v).end())
#define vins(v,a) do { if (!ve(v,a)) vpb(v, a); } while(0)
#define vind(v,a) (ve(v,a)?(vf(v,a)-v.begin()):-1)
#define vdel(v,a) v.erase(remove(va(v),a),v.end())
 
#define sz size()
 
#define mp(x, y) make_pair(x, y)
#define mt(x, y, z) mp(mp(x,y),z)
 
#define pfst(p) (p).first
#define pscd(p) (p).second
 
#define tfst(t) (t).first.first
#define tscd(t) (t).first.second
#define tthd(t) (t).second
 
typedef pair<int, int> pii;
typedef pair<str, str> pss;
 
typedef pair< pii, int > tii;
 
#define dbg_vint(v) do { copy(va(v),ostream_iterator<int>(cout,"\t")); cout << endl; } while(0)
#define dbg_vstr(v) do { copy(va(v),ostream_iterator<str>(cout,"\n")); cout << endl; } while(0)
#define dbg_vdbl(v) do { copy(va(v),ostream_iterator<dbl>(cout,"\t")); cout << endl; } while(0)
 
#define pq priority_queue
 
class FolderSize {
public:
  vector <int> FolderSize::calculateWaste(vector <string>, int, int);
};
 
vector <int> FolderSize::calculateWaste(vector <string> files, int folderCount, int clusterSize) {
  vi ret(folderCount,0);
  
  ri(files.sz)
  {
    istringstream st(files[i]);
    int f,s;
    st>>f>>s;
    
    int w;
    w=s-(s/clusterSize)*clusterSize;
    if (w!=0) w=clusterSize-w;
    
    ret[f]+=w;
  }  
  
  return ret;
}
 
#if 1
double test0() {
  string t0[] = {"0 55", "0 47", "1 86"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  int p1 = 3;
  int p2 = 50;
  FolderSize * obj = new FolderSize();
  clock_t start = clock();
  vector <int> my_answer = obj->calculateWaste(p0, p1, p2);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t3[] = { 48,  14,  0 };
  vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p3.size() > 0) {
    cout <<p3[0];
    for (int i=1; i<p3.size(); i++)
      cout <<", " <<p3[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p3) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test1() {
  string t0[] = {"0 123", "2 456", "4 789", "6 012", "8 345"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  int p1 = 10;
  int p2 = 98;
  FolderSize * obj = new FolderSize();
  clock_t start = clock();
  vector <int> my_answer = obj->calculateWaste(p0, p1, p2);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t3[] = { 73,  0,  34,  0,  93,  0,  86,  0,  47,  0 };
  vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p3.size() > 0) {
    cout <<p3[0];
    for (int i=1; i<p3.size(); i++)
      cout <<", " <<p3[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p3) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test2() {
  string t0[] = {};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  int p1 = 5;
  int p2 = 100;
  FolderSize * obj = new FolderSize();
  clock_t start = clock();
  vector <int> my_answer = obj->calculateWaste(p0, p1, p2);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t3[] = { 0,  0,  0,  0,  0 };
  vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p3.size() > 0) {
    cout <<p3[0];
    for (int i=1; i<p3.size(); i++)
      cout <<", " <<p3[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p3) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
double test3() {
  string t0[] = {"0 93842", "1 493784", "2 43212", "3 99327", "4 456209",
"5 947243", "6 59348", "7 58237", "8 5834", "9 492384",
"0 58342", "3 538432", "6 1432", "9 453983", "2 4321",
"4 583729", "6 6974", "8 9864", "4 43211", "8 38437"};
  vector <string> p0(t0, t0+sizeof(t0)/sizeof(string));
  int p1 = 10;
  int p2 = 22485;
  FolderSize * obj = new FolderSize();
  clock_t start = clock();
  vector <int> my_answer = obj->calculateWaste(p0, p1, p2);
  clock_t end = clock();
  delete obj;
  cout <<"Time: " <<(double)(end-start)/CLOCKS_PER_SEC <<" seconds" <<endl;
  int t3[] = { 27696,  886,  19922,  14306,  18616,  19612,  44671,  9218,  35805,  20488 };
  vector <int> p3(t3, t3+sizeof(t3)/sizeof(int));
  cout <<"Desired answer: " <<endl;
  cout <<"\t{ ";
  if (p3.size() > 0) {
    cout <<p3[0];
    for (int i=1; i<p3.size(); i++)
      cout <<", " <<p3[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  cout <<endl <<"Your answer: " <<endl;
  cout <<"\t{ ";
  if (my_answer.size() > 0) {
    cout <<my_answer[0];
    for (int i=1; i<my_answer.size(); i++)
      cout <<", " <<my_answer[i];
    cout <<" }" <<endl;
  }
  else
    cout <<"}" <<endl;
  if (my_answer != p3) {
    cout <<"DOESN'T MATCH!!!!" <<endl <<endl;
    return -1;
  }
  else {
    cout <<"Match :-)" <<endl <<endl;
    return (double)(end-start)/CLOCKS_PER_SEC;  //I want to eventually turn this into a time of some kind.
  }
}
 
#endif
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/