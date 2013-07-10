/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8027
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

class AzimuthMonitoring {
public:
    int getAzimuth(vector<string> instructions);
};

int AzimuthMonitoring::getAzimuth(vector<string> instructions) {
    int ret;
    return ret;
}


int test0() {
    vector<string> instructions = {"RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> instructions = {"LEFT", "LEFT", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 5", "RIGHT 10", "LEFT 15", "RIGHT 20", "LEFT 25", "RIGHT 30", "LEFT 35", "RIGHT 40"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> instructions = {"RIGHT 59", "RIGHT", "RIGHT", "HALT", "LEFT", "LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> instructions = {"TURN AROUND", "HALT", "LEFT 5", "HALT", "LEFT 5", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> instructions = {"LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> instructions = {"TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> instructions = {"LEFT 1"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> instructions = {"LEFT 179"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> instructions = {"RIGHT 1"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> instructions = {"RIGHT 179"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 179;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> instructions = {"HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> instructions = {"LEFT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> instructions = {"LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> instructions = {"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> instructions = {"RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> instructions = {"LEFT 57", "RIGHT 57"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> instructions = {"LEFT 58", "RIGHT 57"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> instructions = {"LEFT 90", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> instructions = {"RIGHT 90", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> instructions = {"HALT", "TURN AROUND", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> instructions = {"LEFT 63", "LEFT 91", "LEFT 42", "LEFT 132", "LEFT 145", "LEFT 49", "LEFT 103"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> instructions = {"TURN AROUND", "LEFT 90"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> instructions = {"TURN AROUND", "RIGHT 128"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> instructions = {"LEFT 3", "LEFT 14", "LEFT 15", "TURN AROUND", "RIGHT 3", "RIGHT 14", "RIGHT 15"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> instructions = {"LEFT 1", "TURN AROUND", "LEFT 2", "TURN AROUND", "LEFT 3", "TURN AROUND", "LEFT 4", "TURN AROUND", "LEFT 5", "TURN AROUND", "LEFT 6", "TURN AROUND", "LEFT 7", "HALT", "TURN AROUND", "LEFT 8", "TURN AROUND", "LEFT 9", "TURN AROUND", "LEFT 10", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 332;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "TURN AROUND", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> instructions = {"LEFT 61", "RIGHT 77", "RIGHT 88", "RIGHT 8", "HALT", "LEFT 101"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> instructions = {"LEFT", "LEFT", "LEFT", "LEFT", "HALT", "LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> instructions = {"LEFT", "LEFT", "RIGHT 129", "LEFT", "RIGHT 138", "LEFT", "RIGHT 26", "RIGHT 108", "RIGHT 41", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> instructions = {"LEFT 29", "LEFT 25", "RIGHT", "LEFT 155", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "LEFT 72", "RIGHT", "HALT", "RIGHT", "RIGHT", "LEFT 73"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "HALT", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 90", "RIGHT", "TURN AROUND", "RIGHT 90", "LEFT", "LEFT 90", "RIGHT", "TURN AROUND", "RIGHT 90", "LEFT", "LEFT 90", "RIGHT", "TURN AROUND", "RIGHT 90", "LEFT", "LEFT 90", "RIGHT", "TURN AROUND", "RIGHT 90", "LEFT", "LEFT 90", "RIGHT", "TURN AROUND", "RIGHT 90", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> instructions = {"LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1", "LEFT 1", "RIGHT 1", "RIGHT 1", "LEFT 1"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4", "LEFT 177", "RIGHT 4"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 355;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> instructions = {"RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "HALT", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 359;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> instructions = {"RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "HALT", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1", "RIGHT 19", "RIGHT 1"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "RIGHT", "LEFT", "RIGHT", "LEFT", "LEFT", "RIGHT", "RIGHT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "RIGHT", "RIGHT", "LEFT", "LEFT", "RIGHT", "LEFT", "LEFT", "LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> instructions = {"HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "LEFT", "LEFT", "LEFT", "RIGHT", "RIGHT", "RIGHT", "LEFT", "LEFT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "RIGHT", "RIGHT", "LEFT", "RIGHT", "LEFT", "RIGHT", "HALT", "LEFT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "LEFT", "LEFT", "LEFT", "LEFT", "RIGHT", "LEFT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 43", "LEFT 10", "LEFT 155", "LEFT 87", "RIGHT 62", "RIGHT 94", "LEFT 16", "RIGHT 13", "RIGHT 173", "HALT", "LEFT 69", "LEFT 90", "LEFT 177", "RIGHT 157", "LEFT 74", "LEFT 106", "LEFT 133", "LEFT 142", "LEFT 156", "RIGHT 62", "RIGHT 84", "RIGHT 165", "RIGHT 76", "RIGHT 19", "HALT", "RIGHT 80", "RIGHT 158", "LEFT 21", "RIGHT 24", "RIGHT 44", "LEFT 163", "HALT", "RIGHT 21", "RIGHT 10", "RIGHT 160", "RIGHT 36", "LEFT 18", "RIGHT 142", "LEFT 13", "RIGHT 157", "LEFT 159", "LEFT 171", "RIGHT 97", "LEFT 29", "LEFT 127", "LEFT 117", "LEFT 6", "RIGHT 72", "RIGHT 21", "LEFT 9"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "RIGHT 3", "RIGHT 113", "TURN AROUND", "TURN AROUND", "RIGHT 26", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "RIGHT 9", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "RIGHT 15", "TURN AROUND", "HALT", "TURN AROUND", "RIGHT 3", "HALT", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "RIGHT 154", "TURN AROUND", "RIGHT 69", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "RIGHT 11", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "RIGHT 178", "TURN AROUND", "TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> instructions = {"RIGHT 10", "TURN AROUND", "LEFT 13", "LEFT 102", "LEFT", "LEFT 73", "RIGHT", "TURN AROUND", "TURN AROUND", "RIGHT", "LEFT 4", "LEFT 79", "HALT", "TURN AROUND", "LEFT 10", "LEFT", "LEFT 115", "HALT", "LEFT 150", "HALT", "HALT", "RIGHT", "RIGHT 159", "RIGHT", "LEFT", "RIGHT 5", "LEFT", "RIGHT 131", "TURN AROUND", "LEFT", "RIGHT", "TURN AROUND", "LEFT 66", "RIGHT 163", "RIGHT 176", "RIGHT", "LEFT 144", "RIGHT", "TURN AROUND", "TURN AROUND", "LEFT 18", "TURN AROUND", "TURN AROUND", "LEFT 87", "LEFT", "LEFT 11", "LEFT 67", "RIGHT", "LEFT 38", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT 156", "TURN AROUND", "RIGHT 29", "RIGHT 89", "RIGHT 83", "LEFT 128", "TURN AROUND", "RIGHT", "RIGHT", "LEFT", "RIGHT", "HALT", "RIGHT", "HALT", "RIGHT", "LEFT 98", "RIGHT 73", "RIGHT 121", "LEFT 138", "RIGHT 76", "LEFT", "HALT", "TURN AROUND", "RIGHT 92", "RIGHT 87", "TURN AROUND", "LEFT 100", "HALT", "TURN AROUND", "LEFT 4", "LEFT", "RIGHT 48", "HALT", "RIGHT 78", "LEFT", "RIGHT 131", "HALT", "RIGHT", "LEFT", "LEFT", "HALT", "LEFT 57", "RIGHT", "RIGHT 38", "RIGHT 167", "LEFT", "LEFT 28", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> instructions = {"HALT", "RIGHT 116", "LEFT", "RIGHT", "RIGHT", "TURN AROUND", "RIGHT", "LEFT 71", "RIGHT", "TURN AROUND", "HALT", "TURN AROUND", "LEFT 160", "RIGHT", "RIGHT", "TURN AROUND", "RIGHT 111", "TURN AROUND", "LEFT 134", "LEFT 60", "TURN AROUND", "TURN AROUND", "LEFT", "TURN AROUND", "LEFT 177", "LEFT", "LEFT 74", "LEFT 153", "HALT", "LEFT 148", "LEFT", "RIGHT", "TURN AROUND", "TURN AROUND", "RIGHT 167", "LEFT 53", "RIGHT", "RIGHT 167", "RIGHT", "RIGHT 89", "LEFT 175", "LEFT", "RIGHT 114", "LEFT 38", "RIGHT", "RIGHT", "RIGHT", "RIGHT 91", "TURN AROUND", "RIGHT 145"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 179", "HALT", "RIGHT", "LEFT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "LEFT 58", "RIGHT 41", "LEFT", "LEFT", "LEFT 124", "TURN AROUND", "RIGHT", "TURN AROUND", "RIGHT 102", "RIGHT 25", "RIGHT 105", "TURN AROUND", "LEFT 88", "RIGHT 127", "TURN AROUND", "TURN AROUND", "RIGHT 128", "RIGHT", "RIGHT 68", "RIGHT", "TURN AROUND", "RIGHT", "TURN AROUND", "TURN AROUND", "RIGHT 163", "RIGHT", "LEFT 173", "TURN AROUND", "LEFT 40", "RIGHT", "RIGHT", "TURN AROUND", "LEFT", "RIGHT", "TURN AROUND", "LEFT", "RIGHT 50", "TURN AROUND", "LEFT 129", "RIGHT", "TURN AROUND", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> instructions = {"LEFT 173", "TURN AROUND", "RIGHT", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "TURN AROUND", "LEFT 173", "LEFT 173", "RIGHT", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "TURN AROUND", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "RIGHT", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "TURN AROUND", "LEFT 173", "LEFT 173"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 321;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> instructions = {"LEFT 179", "LEFT 175", "LEFT 170", "LEFT 171", "LEFT 178", "LEFT 178", "LEFT 179", "LEFT 174", "LEFT 171", "LEFT 172", "LEFT 177", "LEFT 170", "LEFT 176", "LEFT 170", "LEFT 175", "LEFT 178", "LEFT 172", "LEFT 171", "LEFT 177", "LEFT 178", "LEFT 176", "LEFT 179", "LEFT 175", "LEFT 178", "LEFT 173", "LEFT 175", "LEFT 171", "LEFT 171", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 173", "LEFT 170", "LEFT 175", "LEFT 177", "LEFT 177", "LEFT 176", "LEFT 170", "LEFT 171", "LEFT 172", "LEFT 170", "LEFT 171", "LEFT 178", "LEFT 179", "LEFT 178", "LEFT 173", "LEFT 171", "LEFT 178", "LEFT 175", "LEFT 175"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 283;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> instructions = {"RIGHT 50", "HALT", "RIGHT 50"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> instructions = {"LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 90"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"RIGHT 179", "RIGHT 179", "RIGHT 2"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> instructions = {"RIGHT 59", "RIGHT", "RIGHT", "HALT", "LEFT", "LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> instructions = {"LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> instructions = {"RIGHT 10", "LEFT 20"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 350;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> instructions = {"RIGHT 179", "RIGHT 179", "RIGHT 179", "RIGHT 179", "RIGHT 179", "RIGHT 179", "RIGHT 179", "RIGHT 179"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 352;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 179"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> instructions = {"RIGHT 100", "RIGHT 100", "RIGHT 100", "RIGHT 100", "RIGHT 100", "RIGHT 100", "RIGHT 100"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 340;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> instructions = {"RIGHT 179", "RIGHT 179", "RIGHT 179", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"LEFT 132"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 228;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> instructions = {"LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179", "LEFT 179"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> instructions = {"RIGHT 10", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
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
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "HALT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> instructions = {"LEFT 1", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 179;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> instructions = {"RIGHT 100", "RIGHT 100", "RIGHT 100", "RIGHT 100"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> instructions = {"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> instructions = {"RIGHT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "HALT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> instructions = {"RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> instructions = {"LEFT", "LEFT", "LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> instructions = {"RIGHT 179", "RIGHT 179", "TURN AROUND"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> instructions = {"TURN AROUND", "TURN AROUND", "RIGHT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> instructions = {"LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT", "LEFT"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> instructions = {"RIGHT 100", "RIGHT 100", "RIGHT 100", "RIGHT 60"};
    AzimuthMonitoring* pObj = new AzimuthMonitoring();
    clock_t start = clock();
    int result = pObj->getAzimuth(instructions);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22674711&rd=10772&pm=8027
********************************************************************************
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
 
class AzimuthMonitoring {
public:
  int getAzimuth(vector <string>);
};
 
int AzimuthMonitoring::getAzimuth(vector <string> a) {
  int degree=0;
  
  for(int i = 0; i < a.size(); i++) {
    if(a[i][0]=='H') break;
    else if(a[i][0]=='T') degree+=180;
        
    else if(a[i].size()==4||a[i].size()==5) {
      if(a[i][0]=='L')
        degree-=90;
      else
        degree+=90;
    }
    
    else {
      istringstream in(a[i]);
      
      string s;
      int c;
      in >> s >> c;
      if(s[0]=='L') 
        degree-=c;
      else
        degree+=c;
    }
  }
  while(degree<0)
    degree+=360;
  return degree%360;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/