/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2327
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

class TeamBuilding {
public:
    int fewestPaths(vector<string> paths);
};

int TeamBuilding::fewestPaths(vector<string> paths) {
    int ret;
    return ret;
}


int test0() {
    vector<string> paths = {"010", "100", "000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> paths = {"0110", "0001", "0101", "1000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> paths = {"00101", "00010", "00010", "10000", "00000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> paths = {"001000000", "000000010", "000001000", "000010010", "000000000", "000000010", "000000000", "100000001", "010000100"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"01000000", "00100000", "10000010", "00001000", "00000100", "00010000", "00000001", "00000100"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> paths = {"0000000010000", "0000000000000", "0000000000000", "0000000000000", "1000001001000", "0000000000001", "0001000000000", "1000000000000", "0000000000000", "0000000000000", "0000000010000", "0000000001000", "0000010000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> paths = {"000010000000000000", "001001000000000010", "000100000001000000", "000000100000100000", "000000100000000000", "000000000000010000", "000000000000000000", "000000000000100000", "000010000000000100", "000000000011001000", "001000000000000000", "110000000000000000", "000000000000000110", "000001010100000000", "010000000000000000", "010010000000000000", "000010000100000000", "000000000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> paths = {"0000000000000000000", "0000000000000000000", "0000000000000000100", "0000000000000000000", "0000001000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000100000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000", "0000000000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> paths = {"0000000000", "0000000000", "1000000000", "0000000000", "0000000000", "1100000100", "0000000000", "0000000000", "0000011001", "0000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> paths = {"0001000010000000000", "0000000010000000000", "0000010101000000000", "0000000010000000000", "0000000000000010000", "0000000000000000000", "0010000000000000000", "0000010000000010000", "0000000000000000000", "0001001000000000000", "0000001000000000010", "0000000000000000000", "0000000010000000000", "0000000000000001010", "1000010000000000000", "1000000000000000000", "0000100000000000000", "0000000000000000000", "0000000100000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> paths = {"00000000000", "00010101000", "00010000011", "00000100000", "00010000000", "00000000001", "10100000001", "10001100001", "10001011000", "00000000000", "00011100010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> paths = {"010000", "000110", "000101", "000000", "000000", "000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> paths = {"0000000000010011000", "1000000000000000001", "0000000000000010000", "0100001000010000000", "0000000000000011100", "0000010000001101100", "0000000011100000000", "0010100000110011000", "0000010110010000000", "0000000000000010100", "0110001010100101000", "1001011000010100000", "1101000010010000100", "0000000000100100010", "0001010001101000000", "1000000000000000000", "1101001000000100010", "0100000100000100010", "1100000001001000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"0001100010100", "0001011000001", "0101000001000", "1000000101001", "1000000000000", "0000000001000", "1010001000100", "0001000000000", "0000001000100", "0001001001000", "0100000000000", "0000000000000", "0100100000001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> paths = {"001000000000", "000000011001", "000000000000", "000000000000", "000000000010", "000000100110", "000000100000", "000000000011", "000000000000", "000000000000", "000000000000", "000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> paths = {"1100000000000", "0001000000100", "0000000000001", "0010000000000", "0100010000000", "0000001100001", "0001000000001", "0000000000000", "0001101000010", "0000000000010", "0001000000000", "0000000000000", "0000000000011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> paths = {"0000010000101000010", "1010000000000000000", "1010010100000000000", "1001000110000000010", "0001000001000100001", "0000011000011010100", "0000000100010000100", "1000000011000000000", "0000000000101001010", "0100110000000000000", "0100000000000010000", "0010010000010011000", "0100000000010000000", "0000000000000010000", "0010000000000000000", "0000100001010000001", "0000010000010000010", "0000010000000000000", "0100010100000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> paths = {"00000000100101000", "00000000000000000", "01000000000000000", "00010000000000000", "00100000000000010", "00001000000000000", "00000000000000000", "00000000000000000", "00000100000000001", "11000000000000000", "00001000000000000", "00000000000000000", "00000000000000000", "10000000000000000", "00000000000110010", "00000000000000000", "00000000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> paths = {"1000000", "0000001", "0001010", "0000000", "0000000", "0000000", "0000001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"000000010000100000", "000000000000000100", "000000001000000000", "000000000000000101", "000000000000000000", "000000000010001000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000001000001000001", "000000000000000000", "000000000000000000", "000000000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> paths = {"000000000000000000", "000000000010100000", "000000000001000000", "010000000000100000", "000000000000000000", "000001000000000000", "000000000000000001", "000000000010000000", "000100000110000000", "001000000001000000", "001000100000000000", "100000000100000000", "000100100000000000", "000010000000000000", "000000000000000100", "000000000000000000", "000000000001000000", "000000010000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> paths = {"00000000001000000", "10000000000000000", "01001100000000000", "00000000000100000", "00000001000000001", "00000001100000001", "00000000000100100", "00111100000000010", "00100000000000000", "00000010000000000", "10001100000000000", "00100000000011000", "00100000000000000", "00000000000000001", "00000000000000001", "00000000000010000", "10001000001000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> paths = {"00010100000000", "00000000000001", "00000000010000", "00000000000000", "00001000000010", "00000000000000", "00100000000000", "10100000000000", "00010000000000", "00000000000000", "00100010100000", "00000000000101", "00001000110100", "00000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"0100", "0000", "0010", "0010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> paths = {"10000", "00100", "00001", "00011", "00000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> paths = {"000100", "000000", "000000", "000000", "000000", "000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> paths = {"000000001000", "000000000000", "000000000000", "000000000000", "000000001000", "000000010000", "000000000000", "000000000000", "000000000000", "000000010000", "000000100000", "000000001010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000", "000010000000000000", "000000000000000100", "000000000000000000", "000000000000000000", "000000010000001010", "000000000000000000", "000000000000010000", "000000000000000000", "000000000000000000", "000000000000000000", "000000000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> paths = {"000000000010100000", "000000010000000000", "000000011000000001", "010000000010000000", "000000000000000000", "000001000100001001", "101000010100000000", "000000001000010000", "000000000011100000", "100000100101001000", "000000000000100010", "010000001000000000", "000000001000100000", "100000000010000000", "000011001100001000", "000000000000001000", "000000000000000000", "000000000000000100"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> paths = {"0000000000001100000", "1000000010001000000", "0000000000000000100", "0000000000000010000", "0010001000000000000", "1000000000000010001", "1000010000000000000", "0000000101000000000", "1000000000000000000", "0000000000000000000", "0000000000000000100", "0000000010001000000", "0000000000000000000", "0000000000000000000", "0000100000000000000", "0000000001000000000", "0000000001000000000", "0000000000000000000", "0000000000010000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> paths = {"0000", "0001", "0000", "0000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> paths = {"00000", "00010", "10000", "00000", "00000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"00000", "01001", "10000", "00000", "00000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> paths = {"00000000000000000000", "00000000000000000000", "00000000000000000000", "00001100000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00001000000000000000", "00000000000000000000", "00000000000000000000", "01000000000000100000", "00000000000000000000", "00000000000000000000", "00010000000000010000", "00000000000000000000", "00000000000100000000", "00000000001001000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> paths = {"11110010000000000000", "11010110010001100011", "00100111111000100100", "00100011100001000010", "00100001000011100110", "01001110100100000100", "00100001010001100111", "01100000001011100000", "00100000000010101000", "00010001110000100000", "00010111001000100110", "10110010000000110101", "11101100010000000010", "00100111101100010000", "00110100100101100000", "10010100010010000010", "11110110100010101100", "00110101001000010011", "00010011010001000010", "00000111100100010010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> paths = {"11111101111111111111", "11100011111111111111", "11111011011111111101", "11111111111111011111", "11011010111111110111", "11111011111111111111", "11011111111111111111", "11011111111111011111", "11111011111111111111", "11101111111010111100", "11111011111111101111", "11011011111111011110", "11101110101111111111", "11111111100111110111", "11111111111111101111", "10010111111111111111", "11111011001101111111", "11111111101011111011", "10001111111111101111", "11111011111110111111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> paths = {"11111101111011101101", "11100011111111101111", "11111001111111111111", "11011111010111111111", "01111101111110001111", "11110111001110111011", "01111101111111111001", "11111111111110111110", "01111000111011010110", "11110110000101111101", "11111110101111111111", "11111111111101111100", "10110111111111010001", "11100111111111001111", "11111101110101111111", "11111111101101111111", "11111111101111111011", "11011110111100111111", "00011111110111111111", "11101111110111111111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"11010100101101010101", "10100111110000111101", "01100100010111010111", "11010100110011101010", "11111101011010000100", "00100010111011111010", "10011000010100101111", "00010111100100111100", "11111101101001110111", "00111111101010000110", "01010110011011100111", "00110110000111000111", "10001001000101110101", "10011100111100010011", "10101111011000011011", "01101101111011010110", "11110000000011011111", "10011111100110101111", "11010101111110111110", "11100000010011111101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> paths = {"10111101110100111100", "00101011000111100110", "11001111111010011010", "11110110111101001010", "10100100100100111110", "00100110100110111111", "11110111011010111111", "10101110000011111011", "11101111011001100101", "01001000101001111101", "01110010010010101101", "11111110101111001110", "01111111111011101011", "11110110001100111101", "01010110111110110111", "11111110100010111100", "11101111100111111101", "01101000110110111010", "01000110101011111100", "10010111100111111011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> paths = {"11110101100011110111", "11111111011111010111", "10011110100111011110", "11111111011101111101", "01111101100111111111", "10110111111111100011", "11111111100110111111", "01111111011111111001", "11110111111111011101", "11110111110111011111", "10101101111111111111", "11111111111101110111", "10000111111111110111", "11111101101111011110", "11111100111111111111", "11101111111011110011", "11111111111111111111", "11101111111101111110", "11110110111111111011", "11011111111110110111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> paths = {"11111111111111100111", "11111111111111100111", "11111011111111110010", "11110111111111111110", "11110111111111101111", "11111011010111111111", "11101111111111111111", "11111111111110010111", "11111111111111111111", "11110110111111111111", "11110111111011111111", "11111111111101101011", "01111111111111111111", "11111011101110111111", "11111111101111111111", "10110111111111001101", "11101111111111110110", "11111111111101111111", "11111101110101110101", "11111110111111101011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> paths = {"00010000010000010001", "00100011000000000000", "00000100000100000000", "00010001001000010001", "00101000000000010000", "00001000010001001000", "01000000010100000000", "01100001000000000110", "00000000110001000100", "00100010001100000100", "00101010001000001001", "00011110111100000011", "00000000000000100001", "01010000011000000000", "10000000000000100000", "10000000000001001001", "00011000000110100000", "11010101100000000100", "10000110100000011100", "00100010001000101000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> paths = {"10000101010100000000", "00000000000000000000", "00010000000000011000", "00001000000000000000", "00000001000010000100", "00000000000100000000", "01000000100000011000", "00010110000000000010", "10100000000000000000", "01001001000000010100", "00100000000000001000", "00000000000000000000", "00000010100010011111", "10000000000010000000", "10000000100000000000", "00100101100000000100", "00001000001000000101", "00000000000000001000", "00000100001100000101", "00110000001000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> paths = {"10000011100011100111", "01001000101010110101", "01100010100000011011", "11000010000110100010", "01000001100010110111", "00000000100001101110", "01110111011110101100", "00011001001000010001", "11110111001010000110", "10001100101000101111", "01011111011101011011", "01000011010001100000", "10010111001001101011", "00000100000100110110", "10100111011010111001", "01010110111010110010", "11001011111100111001", "10001000001011110000", "00100010100001001000", "10010010111011011000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"10000000101110010001", "00100001000000100001", "00100000001000100000", "11100101100011000010", "11000100000010000000", "10001000010000001000", "00001100100100000010", "00000001000000001100", "10010000010000100000", "00000001010000001000", "00010000100010000000", "00000010000110010101", "00000000100000000010", "00000010000001000010", "00000000100000010000", "00000000000000000101", "00001000000000001000", "00100010010011000100", "01010100100110100000", "01001010001000101001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> paths = {"00110000101010000000", "11001000100110001100", "01000010010110010000", "00000000010100101101", "10000000000000011010", "10001101101010001000", "01110111000011011101", "01100001100101011000", "00000110000110001100", "00000000010000100011", "00011110100010011000", "10101001010000000111", "10000101100010001001", "00000110010001011000", "11001001000000100010", "00101100010011000000", "00000001010001010100", "01001000000010101000", "10100111011000110110", "00010001100000000001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> paths = {"10101111111110011010", "11111111111100111111", "10001111101000011101", "11111111111011111111", "10101111111110101110", "01101110111011101111", "10010101111111110111", "01111010101111101111", "11111111011111111101", "11110111101111011110", "10110111011101111111", "11110111111110111111", "11011110111111101111", "11111111001001111101", "11101111111110110111", "11110001011111111110", "01111111111111111111", "11110111111101110111", "11110011111111111111", "01111111110110011110"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> paths = {"01110100000000000111", "00001000000000000000", "00000000011010100011", "00000000001000000000", "00110001000000001000", "00010000000000000000", "00010000000110000000", "10000100000000000000", "00000110000000000000", "00001000000001110111", "01001100001111000000", "00000000000000000010", "11001000110000000000", "00001010000000011010", "00010010010000001000", "00000000000001000011", "10000000000000000000", "01000000000000000000", "00100000000100000001", "00000000101000100001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
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
    vector<string> paths = {"00000000000110000000", "10000000000000000000", "00000000000000010000", "00100000100100010000", "00000000010010000000", "00100100000000000000", "10000101100011100000", "00000101000000000011", "00000000000000000000", "00010001000010000000", "00000010000000000000", "00000000000000010001", "00000010000000000000", "10000001010000000000", "00000000000000100000", "00000001000100001011", "10000000001000100000", "10000010000000000000", "00010000000000001100", "00000000000100000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> paths = {"00000000000100000000", "00100000100001001000", "00000000001000000000", "00000001001000000010", "00010011001000000001", "00100100000000000010", "00010010000000001100", "00001000000000001011", "01100110100100000111", "00010111000010001100", "00000000000000000100", "00000110011000100000", "00000001001000000100", "01000100000100000000", "00000000010100010001", "00100010000100000001", "00010000001010010000", "00000001000000010001", "10000010000000101000", "01000000100000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> paths = {"01100000000000000001", "00010010001010010000", "00000110000000001000", "01000100000001000000", "00100000000100000001", "00000000000000010000", "00100000100000000000", "01000000001100000000", "00000000101000000110", "00000000000000001000", "00001011010001100000", "10001000000000000000", "10101110000000000001", "00010101010000010111", "00100000000000000100", "00001001000100100001", "00001001010000000100", "00001000000000100001", "10100100001000000000", "10000010000000000010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> paths = {"00000100000000000001", "00000000000000000000", "00000000000000000000", "00100000110100000000", "00000100000000000000", "00000000000000000000", "00000000000000100000", "00000000000000000100", "00000000000000000000", "00100000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000100000000000", "00000000000000000000", "00000000000000000000", "00000000000000000000", "00000000000000001000", "00000000000101000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> paths = {"11101111111110011111", "01101101110110101111", "11100111111111011101", "00110111110111001100", "10111101000111101111", "11100111111111110111", "11111111111111111111", "11111011110100110101", "01111111111111101111", "11111100111100110111", "10101110001111001111", "01111010011001000111", "11111110110101111100", "11111001111011111101", "11110110110111001101", "11110101111111111101", "11111101101111101111", "11111111101011111111", "11010010100111110110", "10111001111111101111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> paths = {"00000000000000000100", "01010000100000000000", "10001000000000001000", "00000001000000000010", "00000100001000000100", "01000000110100001000", "00100100000000001100", "00000000001000000000", "00000010000010000100", "00000001000001000000", "10010100100000100000", "00010000010000000001", "10001000000000100000", "00000000010000000000", "00000000000000000010", "00000010000100000010", "00000000000000000000", "01000000100000001000", "00000100000100010000", "00000000001000000010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> paths = {"11101111001010001001", "01111111100111111111", "10111100110111100100", "01100111101000111001", "11111001001111100111", "11101111011011110001", "11111000101111011111", "00011011101011110101", "10110001100011001100", "01111110001111111100", "11100110001110010100", "10101001011100101110", "10110001010111110010", "10001011110111001010", "11010101101101111111", "10010101001110111100", "11110111110001111110", "11111100001000100111", "10111100110111110011", "01111101000100111100"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> paths = {"10011011011011111111", "11000111100111101011", "01110001111001101000", "01110110001111011111", "10110110000111001110", "01001001011111011100", "01001010110110111110", "10011011100100111101", "00110101110011011011", "11111111010111111110", "01001111011010101001", "00001110111110111101", "10101110010101101110", "01101110111000110001", "10111011010000101110", "01111010111101110001", "10011001001001101010", "11111111011111110111", "10111111101011010000", "01000111011011111001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> paths = {"11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111101", "11111111101111111111", "11110111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111", "11111111111111111111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> paths = {"00010011000000010100", "10000000111011101101", "00001010000001100010", "01101010100000000000", "11000000010011000110", "00000010001111110101", "01000000000010000000", "00101001100000000000", "00100100000000000001", "10000000100001100001", "00000000010001001010", "00000010000111001011", "00000000010101001001", "00000000000000100000", "01001000000000000000", "00011010111010001000", "00110101010000010010", "01001000111001010111", "10100110010000011000", "00011101000101011101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> paths = {"00001000000011100001", "00100100010110000101", "11001000111110100000", "01100100010100011101", "01001000010101100001", "10000010000000100000", "00110011010100000100", "01000100001001000010", "01000000110000000110", "11101000010010101001", "10011011000011000110", "00011010000000010000", "10000101000000010111", "00010001001100101001", "01000010000000100000", "01000000000010101001", "00000000000100111000", "00000000000001000010", "10100010000001000011", "01101000110010000001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> paths = {"11010100000100111101", "00111010000010000000", "01001000010000000100", "01100001000110000000", "00000100010011110010", "10000010000011001000", "00000010000000100000", "01101101100001010110", "00100010000000000101", "00000101011000001000", "01000000101110010011", "10001111101001001010", "00001100010000111001", "00010001100010010110", "00010010100010010000", "00001100011100001010", "00000100000000001000", "10001000110100000010", "10001000011001100011", "00000000100010000101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> paths = {"11110101110111010110", "00101010100011000110", "01111111001101000111", "11111101111111001100", "11101011111111111101", "10110111011111110110", "01100101001110001110", "10011101011111111011", "00001111001111001011", "00110000011100011111", "10101100110111111111", "10111110111111101000", "01111111111001011001", "11111100100010011100", "10101111110000111110", "10101110101101101111", "11111111110110001000", "11101111111110111111", "11110101111111111110", "11110100100001100001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> paths = {"00100111000011110010", "00110101000001000010", "11100110000011000000", "00100011100100000101", "01111000011011001000", "00101011010010011011", "11110010000011000000", "11000100011001010001", "11110010000100001000", "10000100000101110100", "11001000100000100000", "00110110001100000101", "10000110001100010010", "00101001001001100010", "01101010100001011110", "01001000100110100110", "01001111000000110001", "01001000010011000000", "11000010010010111111", "00101001001011110110"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> paths = {"11111101101010111111", "11111101011110011111", "10100110110110011111", "11001110111111111101", "10111111001011010001", "10111110010001111001", "10010011011011110100", "10111001011100100111", "11010111010111111111", "01111100110001101111", "01101111100111011110", "11110111011010111111", "11110010111110111111", "11101111111110011100", "11111111011111101101", "01010010110010110111", "11111110100111011111", "10110110110011101111", "10011111110111101000", "11111111011110111101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> paths = {"11101111110111011111", "01111111111111111111", "11111111011111110111", "11111111111111111110", "11011011111100111001", "01111101111111110111", "11111111111111111111", "11111011110111110111", "10111111111110111111", "11010111111111111011", "01111110111111111101", "11111111101101111111", "01111111110111111111", "11111111111111111010", "10011110111011111111", "11111110111011111111", "01101110111111111101", "11111111111111110111", "10111111101011111111", "11111011111111111111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> paths = {"01011111110010101100", "00111000101100010000", "11011111110011110111", "01100010111110111111", "00110111011011010100", "11111000100111101011", "10011011010011100011", "11001111111111111001", "01011111111011000111", "01111011111001111111", "01111111001101001001", "01101010111101010100", "01011001111101000001", "00101111110011111110", "10111000011111110101", "01001011111110111101", "01100101010111110111", "10110111011000111110", "10010110011110010101", "11011010111011100101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> paths = {"10100010101001000100", "01111000001000010101", "10001111001111000000", "01001010011100011011", "00111101100110010110", "00101010011000001111", "00010010100100101000", "00001000001110000000", "10110001100000100011", "01110000110101010000", "00000000101100110111", "00100101011111110100", "00010100000110100101", "00001100100110010000", "01010001000001100001", "01110001101100100110", "10000000001001100001", "00010000100100000000", "00010110111000100000", "00011100010000100001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> paths = {"11001110111101111111", "01110111110111110011", "10101011001111111110", "11011111011111111011", "01101111111111111111", "11111111111001110111", "00111111101101011111", "10111110111110111011", "11111111011111111111", "10111110111111111111", "11101101111011111111", "11011111011111011111", "11111111110010111010", "10110110110110111111", "11110111011111111110", "01101001011111111111", "11111111111111011111", "10011110111101101111", "01110111111111111101", "11111110111111101111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> paths = {"00101100010001000110", "01100000011010100010", "10000000010001000100", "01100010010000101010", "10100010111110100011", "00000111011100000000", "01110001010100000000", "00001100111000000000", "00101000000000000110", "01001011110111001001", "00010000110000001001", "01110000100100000001", "00010000011001110110", "10001100100000110010", "01010110000000000010", "00100000100010011001", "00010011010100100100", "00100101000001110010", "11010100111111101111", "00000101110010110011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> paths = {"00010100011110011011", "00100110010011000010", "01100010101000001000", "00111000010101001000", "11111001000000001101", "11111111101100001011", "01000000010111001111", "01001101111010011011", "01100110000101011011", "00001011010000100110", "00010001101010100001", "01001010001100001010", "01101100101011100000", "10100000011110000011", "00101110000001001101", "00001100010110100111", "11011111001011001010", "10110010001001001111", "00100010010011100010", "10101001001000111011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> paths = {"11111111101111111111", "11111111111011110011", "10111111111110111011", "11011111111111001111", "11111111111110111011", "11101011111011111101", "11111111111111111110", "10111111101101111111", "01111111111111101111", "11111111111001011011", "01111111111111111111", "11111111101111111111", "11111100111111111111", "11111111111111111100", "11111111111111111111", "01111111111111111111", "11001110111111101111", "10101101111101111011", "11111111111111111111", "11111111110111101111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> paths = {"10111111011111111111", "11011111111111111011", "01111111111001111011", "11101110011111111111", "10111111111111111111", "10111111111101011111", "11101111111011011111", "11111111111011111110", "01111111111111111011", "11101101101111111111", "10111111111111001111", "11111101101111111111", "11110111111111111111", "11111111111111111111", "10111011111111111111", "11111111111111111111", "11111111111111111111", "11111111111110111111", "11111111111111111010", "11101111111111111011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> paths = {"00010000001000000001", "00001000010000000001", "00000000000000000000", "01000000000100000000", "00000000000000000000", "00001000000000000000", "00001000100000000000", "01000000000010000011", "00001000001000001000", "00000100000000100000", "00000000010000000000", "10000001000000000000", "00000000000000010000", "00000000000000000000", "10010100000000100000", "00010000001000000000", "00000000000000000110", "00000100000000000010", "10000100000010001001", "00000001000010000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> paths = {"00010100001110000011", "00100110001111000000", "00101000101110001010", "00000001111100101000", "01110001000110101000", "10001000010100001101", "01000111001000110101", "01110000011000000010", "11111011100001100010", "11000000000011100001", "00011011000110000000", "01101100101011101000", "01100110000110100001", "10111001010001011000", "01010100000100100100", "00101111111101111101", "11100000111101001001", "10110101100001100010", "11000010001010000101", "00100011110110010010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> paths = {"11111111111111111111", "10101111111111111111", "11111111111111111111", "10111110111111110110", "11111111111111111111", "11111111101111111110", "11011111111111111111", "01111111111110111111", "11111111111111111111", "11111111111111111111", "11011110111111111111", "11101111111111111011", "11111111001111111011", "11011111111111011110", "11111111111111111111", "11111111111111111111", "11111111100111111111", "11111111111101101111", "11111111111111111111", "11111111111111111011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> paths = {"11010111110111111110", "01111111111111111011", "11111101110101111110", "10111100101111111111", "11010100110111111010", "10101111111111111110", "10111111100011111111", "11111001010111111111", "10111111111010110111", "10100101111111111111", "11011100110110011111", "10111111001111111111", "11111111011111111011", "11111111111110101101", "10101101111101010111", "11111101101111111111", "11011111111111110111", "11111101111111101111", "11110110001011111111", "11111011111111011111"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> paths = {"10111111010111100110", "01111111111111111111", "11011111011010001011", "01111111111011111001", "01001011111110001001", "11111111101111111111", "11101011110010111011", "11111010001011011101", "01101101101111110111", "10011111101110010011", "01101011111011111101", "11011111011110101110", "01001111111101111111", "11111010111101011111", "11110111111010111111", "11011010011101111111", "11101111101111110011", "11000011111110011110", "11111011111010111101", "01101101101011111101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> paths = {"00000100000100010000", "01000100000000000000", "01000000000100000000", "00000000000000000000", "00000000000000010000", "00000100000000000000", "00000000100100000000", "01000000000000010000", "00000000000010000000", "00000100000000001000", "00100100000000000000", "00100000000000100000", "10100001010000000000", "11101000100000010000", "00000010000001000110", "00101000000000000001", "00000000100000000100", "10000100000000000100", "00000100000010010000", "01000000010000001000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> paths = {"10011111111111111110", "10111111110011101111", "01111101111111111111", "11111111111011111111", "11101101011111011101", "00111101110111111011", "01100101011101101101", "11100111111011011011", "10110111111111111110", "10110110110100101111", "11111111111001010101", "11001111011111110101", "01101111111101111111", "01110111100111110110", "11101111110111110010", "00001111110101001001", "11111100111111100001", "11101111111111111110", "01100111111011011110", "01111111111110011011"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> paths = {"00000100100010110100", "01000010000001100011", "10110000010010100000", "01100100000001100001", "01110010011100000000", "11010010101100000010", "00100010101010001000", "00010001001000010111", "00101010000001001001", "00000000010100010010", "00000101100100010000", "00011110000011000100", "00100000000001010011", "11100010011011100010", "00001110100000011000", "00000000000000100000", "01010010100000000010", "01010110100000000010", "10000000100101000110", "10111011011000101001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> paths = {"01000000000000000000", "00100000000010000010", "00010000010000010000", "01001000010000000000", "00011001000000001000", "00000000101011100010", "01000000001000010000", "01001000000000001000", "00000011110000100000", "10100100001000010100", "01001000100000000000", "01000010000000000000", "00000000000000001000", "00110100000000000001", "00100010100100100010", "01000010000010000001", "00100001010000000011", "00000000000010000000", "00000110000000001000", "00101000000000000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> paths = {"00110111001011100010", "01101111100010101111", "01111111001111111101", "11111010111111100010", "01110101011111100111", "00110111101111011110", "10011111011011010100", "11110001111101011111", "11001110111101101111", "01111011010011011001", "11110001011111101111", "01011101111010011111", "10001111010111111111", "11011011111111100100", "10011100101111111010", "10110111101111111001", "10001110100111100111", "10111101100011100110", "11100010101111011111", "10011110111110000001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> paths = {"10110011111111100011", "11101101001110111111", "01111100100011010111", "01100101000010010011", "11011011101010111100", "01011001111010101110", "01111110000110100101", "10111100111111111111", "10111101110110101101", "00111101100101111000", "11110010000111110111", "11010011010110011100", "11110100011111110101", "00011100101111011011", "01011011010000100101", "01011001010110001101", "10010111111110101011", "11101011001111001110", "11000100001110111100", "11110001101111110000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> paths = {"01011000110111110011", "01111111011111110000", "11101101111000010100", "00111010110101011111", "10100011000001100101", "10111001010010010101", "01001010000100100011", "01111000100101000110", "00110101001001101100", "01111011110101000010", "10011010101100110000", "00010001011000001010", "10001010110101010111", "11011011000110010111", "10001000111101000110", "10100001011000111000", "11010011010001011101", "01111110011010011011", "00011111100110011010", "10000111100010110101"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> paths = {"1100", "0000", "0001", "0001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> paths = {"001000000", "000000010", "000001000", "000010010", "000000000", "000000010", "000000000", "100000001", "010000100"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> paths = {"0100", "0100", "0011", "0000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> paths = {"110", "001", "001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> paths = {"01000", "10100", "00010", "00001", "00010"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> paths = {"01000000000000000000", "00100000000000000000", "00010001000000000000", "00001000000000000000", "00000100000000000000", "00000010000000000000", "00000100000000000000", "00100000000000000000", "00000000111000000000", "00000000000100000000", "00000000000010000000", "00000000000001000000", "00000000000000000000", "00000000000000000000", "00000000000100000000", "00000000000000000000", "00000000000000100010", "00000000000000001000", "00000000000000001000", "00000000000000000001"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> paths = {"001000", "001000", "000000", "000000", "000000", "000110"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> paths = {"01010001", "00100000", "10000000", "00001000", "00000100", "00000010", "00001000", "00001000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> paths = {"011000", "000000", "000000", "000001", "000001", "000000"};
    TeamBuilding* pObj = new TeamBuilding();
    clock_t start = clock();
    int result = pObj->fewestPaths(paths);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=4740&pm=2327
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define FOREACH(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();++i)
#define ALL(x) (x).begin(),(x).end()
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
 
char buf1[1000];
 
string i2s(int x) {
  sprintf(buf1,"%d",x);
  return buf1;
}
 
int n;
bool tab[32][32];
 
int bits(int x) {
  return x==0 ? 0 : (x&1)+bits(x>>1);
}
 
struct TeamBuilding {
  // MAIN
  int fewestPaths(vector <string> paths) {
    n = size(paths);
    REP(i,n) REP(j,n) tab[i][j] = paths[i][j]=='1';
    REP(c,n) REP(a,n) REP(b,n) tab[a][b] = tab[a][b] || tab[a][c] && tab[c][b];
    vector<int> from, to;
    REP(i,n) if(!tab[i][i]) {
      int a = 1<<i, b=1<<i;
      REP(j,n) {
        if(tab[j][i]) a |= 1<<j;
        if(tab[i][j]) b |= 1<<j;
      }
      from.push_back(b);
      to.push_back(a);
    }
    int bestbits1 = n;
    REP(s,1<<n) {
      int a = bits(s);
      if(a < bestbits1) {
        FOREACH(it, from) if((s&(*it)) ==0) goto xxx;
        bestbits1 = a;
xxx:;
      }
    }
    int bestbits2 = n;
    REP(s,1<<n) {
      int a = bits(s);
      if(a < bestbits2) {
        FOREACH(it, to) if((s&(*it)) ==0) goto yyy;
        bestbits2 = a;
yyy:;
      }
    }
    return max(bestbits1,bestbits2);
  }
  
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/