/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6086
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

class StringReplacements {
public:
    vector<int> substringCounter(string letter, int left, int right, int nSeconds);
};

vector<int> StringReplacements::substringCounter(string letter, int left, int right, int nSeconds) {
    vector<int> ret;
    return ret;
}


int test0() {
    string letter = "a";
    int left = 2;
    int right = 6;
    int nSeconds = 2;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string letter = "a";
    int left = 0;
    int right = 2;
    int nSeconds = 1;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string letter = "c";
    int left = 1;
    int right = 4;
    int nSeconds = 2;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string letter = "b";
    int left = 4;
    int right = 12;
    int nSeconds = 3;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 3};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string letter = "b";
    int left = 5;
    int right = 214;
    int nSeconds = 10;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 84, 41};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string letter = "a";
    int left = 0;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993464, 858993456, 429496728};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string letter = "b";
    int left = 0;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993462, 858993457, 429496729};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string letter = "c";
    int left = 0;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993463, 858993456, 429496729};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string letter = "b";
    int left = 23746;
    int right = 2147413647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858955959, 858955962, 429477981};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string letter = "c";
    int left = 2147483647;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string letter = "b";
    int left = 2873475;
    int right = 1854960284;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {740834722, 740834725, 370417363};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string letter = "a";
    int left = 4837;
    int right = 475957;
    int nSeconds = 18;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {188449, 188448, 94224};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string letter = "c";
    int left = 0;
    int right = 0;
    int nSeconds = 0;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string letter = "c";
    int left = 0;
    int right = 0;
    int nSeconds = 1;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string letter = "c";
    int left = 1;
    int right = 5;
    int nSeconds = 2;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string letter = "a";
    int left = 1;
    int right = 3;
    int nSeconds = 3;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string letter = "c";
    int left = 36;
    int right = 53;
    int nSeconds = 4;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 7, 3};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string letter = "b";
    int left = 48;
    int right = 130;
    int nSeconds = 5;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 32, 16};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string letter = "b";
    int left = 8;
    int right = 276;
    int nSeconds = 6;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {109, 108, 52};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string letter = "c";
    int left = 6;
    int right = 226;
    int nSeconds = 7;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90, 87, 44};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string letter = "a";
    int left = 1482;
    int right = 1595;
    int nSeconds = 8;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {49, 45, 20};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string letter = "c";
    int left = 2135;
    int right = 8055;
    int nSeconds = 9;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2369, 2368, 1184};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string letter = "b";
    int left = 10763;
    int right = 24259;
    int nSeconds = 10;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5400, 5398, 2699};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string letter = "a";
    int left = 6974;
    int right = 90230;
    int nSeconds = 11;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33301, 33305, 16651};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string letter = "b";
    int left = 29441;
    int right = 325620;
    int nSeconds = 12;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {118473, 118472, 59235};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string letter = "b";
    int left = 1080828;
    int right = 1113256;
    int nSeconds = 13;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12973, 12973, 6483};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string letter = "c";
    int left = 1416817;
    int right = 4388432;
    int nSeconds = 14;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1188643, 1188649, 594324};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string letter = "a";
    int left = 1999861;
    int right = 4338840;
    int nSeconds = 15;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {935590, 935595, 467795};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string letter = "b";
    int left = 1360319;
    int right = 1627794;
    int nSeconds = 16;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {106992, 106988, 53496};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string letter = "a";
    int left = 94311529;
    int right = 124010998;
    int nSeconds = 17;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11879790, 11879788, 5939892};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string letter = "c";
    int left = 57402281;
    int right = 73371725;
    int nSeconds = 18;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6387777, 6387779, 3193889};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string letter = "c";
    int left = 27556768;
    int right = 81706870;
    int nSeconds = 19;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {21660046, 21660038, 10830019};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string letter = "a";
    int left = 424844632;
    int right = 1903448849;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {591441687, 591441687, 295720844};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string letter = "c";
    int left = 0;
    int right = 0;
    int nSeconds = 0;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string letter = "c";
    int left = 1;
    int right = 2;
    int nSeconds = 1;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string letter = "b";
    int left = 2;
    int right = 8;
    int nSeconds = 2;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 2};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string letter = "a";
    int left = 5;
    int right = 26;
    int nSeconds = 3;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 9, 3};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string letter = "a";
    int left = 15;
    int right = 80;
    int nSeconds = 4;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 25, 13};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string letter = "c";
    int left = 209;
    int right = 242;
    int nSeconds = 5;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 13, 7};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string letter = "b";
    int left = 470;
    int right = 728;
    int nSeconds = 6;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {104, 103, 52};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string letter = "c";
    int left = 844;
    int right = 2186;
    int nSeconds = 7;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {537, 537, 269};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string letter = "a";
    int left = 2169;
    int right = 6560;
    int nSeconds = 8;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1758, 1756, 878};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string letter = "c";
    int left = 9160;
    int right = 19682;
    int nSeconds = 9;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4207, 4211, 2105};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string letter = "a";
    int left = 3933;
    int right = 59048;
    int nSeconds = 10;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22043, 22047, 11026};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string letter = "b";
    int left = 147748;
    int right = 177146;
    int nSeconds = 11;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11759, 11760, 5880};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string letter = "b";
    int left = 371367;
    int right = 531440;
    int nSeconds = 12;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64028, 64031, 32015};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string letter = "b";
    int left = 4292;
    int right = 1594322;
    int nSeconds = 13;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {636014, 636012, 318005};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string letter = "c";
    int left = 3569373;
    int right = 4782968;
    int nSeconds = 14;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {485440, 485437, 242719};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string letter = "a";
    int left = 3362151;
    int right = 14348906;
    int nSeconds = 15;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4394704, 4394702, 2197350};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string letter = "c";
    int left = 10692663;
    int right = 43046720;
    int nSeconds = 16;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12941621, 12941626, 6470811};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string letter = "b";
    int left = 19140890;
    int right = 129140162;
    int nSeconds = 17;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43999710, 43999708, 21999855};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string letter = "a";
    int left = 142851957;
    int right = 387420488;
    int nSeconds = 18;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97827411, 97827415, 48913706};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string letter = "c";
    int left = 904748755;
    int right = 1162261466;
    int nSeconds = 19;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {103005085, 103005085, 51502542};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string letter = "c";
    int left = 352644964;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {717935481, 717935469, 358967734};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string letter = "b";
    int left = 0;
    int right = 0;
    int nSeconds = 0;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string letter = "c";
    int left = 0;
    int right = 2;
    int nSeconds = 1;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string letter = "b";
    int left = 0;
    int right = 8;
    int nSeconds = 2;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 3, 2};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string letter = "c";
    int left = 0;
    int right = 26;
    int nSeconds = 3;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 10, 5};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string letter = "c";
    int left = 0;
    int right = 80;
    int nSeconds = 4;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 32, 17};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string letter = "b";
    int left = 0;
    int right = 242;
    int nSeconds = 5;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 97, 48};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string letter = "a";
    int left = 0;
    int right = 728;
    int nSeconds = 6;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {291, 292, 146};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string letter = "b";
    int left = 0;
    int right = 2186;
    int nSeconds = 7;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {874, 875, 438};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string letter = "b";
    int left = 0;
    int right = 6560;
    int nSeconds = 8;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2624, 2625, 1312};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string letter = "a";
    int left = 0;
    int right = 19682;
    int nSeconds = 9;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7873, 7873, 3937};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string letter = "c";
    int left = 0;
    int right = 59048;
    int nSeconds = 10;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {23620, 23620, 11809};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string letter = "b";
    int left = 0;
    int right = 177146;
    int nSeconds = 11;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70858, 70859, 35430};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string letter = "b";
    int left = 0;
    int right = 531440;
    int nSeconds = 12;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {212576, 212577, 106288};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string letter = "a";
    int left = 0;
    int right = 1594322;
    int nSeconds = 13;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {637729, 637729, 318865};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string letter = "b";
    int left = 0;
    int right = 4782968;
    int nSeconds = 14;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1913188, 1913187, 956594};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string letter = "c";
    int left = 0;
    int right = 14348906;
    int nSeconds = 15;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5739564, 5739562, 2869781};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string letter = "a";
    int left = 0;
    int right = 43046720;
    int nSeconds = 16;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17218689, 17218688, 8609344};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string letter = "c";
    int left = 0;
    int right = 129140162;
    int nSeconds = 17;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51656064, 51656066, 25828033};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string letter = "b";
    int left = 0;
    int right = 387420488;
    int nSeconds = 18;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {154968196, 154968195, 77484098};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string letter = "c";
    int left = 0;
    int right = 1162261466;
    int nSeconds = 19;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {464904588, 464904586, 232452293};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string letter = "c";
    int left = 0;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993463, 858993456, 429496729};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string letter = "a";
    int left = 66;
    int right = 14348867;
    int nSeconds = 15;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5739518, 5739523, 2869761};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string letter = "a";
    int left = 52;
    int right = 43046716;
    int nSeconds = 16;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17218664, 17218666, 8609335};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string letter = "a";
    int left = 6;
    int right = 129140142;
    int nSeconds = 17;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51656054, 51656055, 25828028};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string letter = "c";
    int left = 0;
    int right = 387420450;
    int nSeconds = 18;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {154968180, 154968182, 77484089};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string letter = "b";
    int left = 14;
    int right = 1162261367;
    int nSeconds = 19;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {464904542, 464904542, 232452270};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string letter = "a";
    int left = 25;
    int right = 2147483622;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993442, 858993438, 429496718};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string letter = "a";
    int left = 10;
    int right = 2147483646;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993461, 858993451, 429496725};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string letter = "a";
    int left = 0;
    int right = 2140000000;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {856000009, 855999995, 427999997};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string letter = "b";
    int left = 4;
    int right = 12;
    int nSeconds = 3;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 3};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string letter = "c";
    int left = 777;
    int right = 243178941;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97271266, 97271266, 48635633};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string letter = "c";
    int left = 10;
    int right = 2000000000;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {799999996, 799999999, 399999996};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string letter = "a";
    int left = 0;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993464, 858993456, 429496728};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string letter = "a";
    int left = 0;
    int right = 2123456789;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {849382719, 849382714, 424691357};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string letter = "b";
    int left = 0;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993462, 858993457, 429496729};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string letter = "a";
    int left = 0;
    int right = 62125646;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24850259, 24850260, 12425128};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string letter = "a";
    int left = 0;
    int right = 2147483646;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993464, 858993456, 429496727};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string letter = "b";
    int left = 4;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993459, 858993456, 429496729};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string letter = "a";
    int left = 0;
    int right = 2147483645;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993463, 858993456, 429496727};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string letter = "a";
    int left = 0;
    int right = 2100000000;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {840000005, 839999999, 419999997};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string letter = "a";
    int left = 12;
    int right = 2147483646;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993459, 858993451, 429496725};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string letter = "a";
    int left = 0;
    int right = 2000000000;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {800000002, 800000002, 399999997};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string letter = "a";
    int left = 1;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993463, 858993456, 429496728};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string letter = "b";
    int left = 111;
    int right = 2000000000;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {799999955, 799999958, 399999977};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string letter = "b";
    int left = 666;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993195, 858993192, 429496595};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string letter = "c";
    int left = 1;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858993463, 858993455, 429496729};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string letter = "a";
    int left = 21474834;
    int right = 2147483471;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {850403459, 850403453, 425201726};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string letter = "b";
    int left = 15000;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {858987462, 858987457, 429493729};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string letter = "a";
    int left = 0;
    int right = 0;
    int nSeconds = 0;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string letter = "b";
    int left = 54568;
    int right = 54568;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0, 0};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string letter = "c";
    int left = 1;
    int right = 400;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {161, 158, 81};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string letter = "c";
    int left = 74735;
    int right = 345345345;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {138108249, 138108243, 69054119};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string letter = "a";
    int left = 2147483647;
    int right = 2147483647;
    int nSeconds = 20;
    StringReplacements* pObj = new StringReplacements();
    clock_t start = clock();
    vector<int> result = pObj->substringCounter(letter, left, right, nSeconds);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 1};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=9817&pm=6086
********************************************************************************
#line 2 "StringReplacements.cpp" 
// #includes 
#include <algorithm> 
#include <numeric> 
  
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
  
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cassert> 
  
#include <cmath> 
#include <complex> 
using namespace std; 
 
#define FOR(i,a,b) for(int i = (a); i < (b); ++i) 
#define REP(i,n) FOR(i,0,n) 
#define FORE(it,x) for(typeof(x.begin()) it=x.begin();it!=x.end();++it) 
#define pb push_back 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
#define sz size() 
 
typedef pair<int,int> pi; typedef vector<int> vi; typedef vector<string> vs;  
typedef long long ll; 
 
ll pp[21]; 
 
const char* spawn[3] = { "acb", "baa", "bcb" }; 
 
vi cache[3][21]; 
 
vi memoized(char ch, int sec) 
{ 
  vi& ret = cache[ch-'a'][sec]; 
  if(ret.sz) return ret; 
  ret = vi(3,0); 
  if(sec == 0) 
    ret[ch-'a']++; 
  else 
  { 
     REP(i,3) 
    { 
      vi q = memoized(spawn[ch-'a'][i], sec-1); 
      REP(j,3) ret[j] += q[j]; 
    } 
  } 
  return ret; 
} 
 
vi go(char ch, ll left, ll right, int sec) 
{ 
  if(pp[sec] <= left || right < 0) return vi(3,0); 
  if(sec == 0) 
  { 
    vi ret(3,0); 
    ret[ch-'a']++; 
    return ret; 
  } 
  if(left <= 0 && pp[sec]-1 <= right) return memoized(ch, sec); 
  vi ret(3, 0); 
  const char* p = spawn[ch-'a']; 
  ll size = pp[sec-1]; 
  REP(i,3) 
  { 
    vi q = go(p[i], left - size*i, right - size*i, sec-1); 
    REP(j,3) ret[j] += q[j]; 
  }   
  return ret; 
} 
 
struct StringReplacements 
{  
  vector <int> substringCounter(string letter, int left, int right, int nSeconds)  
  {  
    REP(i,3) REP(j,21) cache[i][j].clear(); 
    pp[0] = 1; 
    FOR(i,1,21) pp[i] = pp[i-1]*3; 
    return go(letter[0], left, right, nSeconds);     
  }  
 
};  
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/