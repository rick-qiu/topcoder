/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11178
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

class AmoebaDivTwo {
public:
    int count(vector<string> table, int K);
};

int AmoebaDivTwo::count(vector<string> table, int K) {
    int ret;
    return ret;
}


int test0() {
    vector<string> table = {"MA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> table = {"AAA", "AMA", "AAA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> table = {"AA", "AA", "AA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> table = {"MMM", "MMM", "MMM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> table = {"A"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"AMAMAMAMAAAAAAAAAAMMMMMMMMMMMMAAAAAAA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> table = {"A"};
    int K = 50;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> table = {"M"};
    int K = 49;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> table = {"AAMMM", "AAAAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"MAAA", "AAAM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> table = {"AAM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"AAAAA", "AAAAA", "AAAAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> table = {"AAA", "AAA", "AAM", "AAA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> table = {"AAAM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> table = {"AA"};
    int K = 11;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> table = {"A", "A", "A", "A"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"AAA", "AAA", "AAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> table = {"AAAA", "AMMA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> table = {"AMMAAAA", "AAMAMAA", "AAMAMAA", "MMAMAAM", "AMAAMMA", "AAAMAAM", "AMAAAAM", "AMMAAMA"};
    int K = 7;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"AA", "AA", "AM", "AA", "MA", "MM", "AM", "AA", "MA", "AA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> table = {"AAAAMMAA", "AMAAAMAA", "MMAAAMMM", "AAAAMAAM", "AAAMAAMM", "AAAMAMMM", "AAAAAAAM", "AAAMMAAM"};
    int K = 5;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> table = {"AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAM", "MAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> table = {"AAAAAAAA", "AAAAAAAA", "AAAAMAAA", "AAAMAAAA", "AAAAAAAA", "AAAAMAMA", "AAAAAAAA"};
    int K = 4;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> table = {"AM", "MM", "MM", "MM", "MM", "MM", "AM", "AM", "MM", "MM", "AA", "MA", "MA", "MM", "AM", "AM", "MM", "AA", "MA", "MA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> table = {"AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA"};
    int K = 41;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> table = {"AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AA", "AM", "AA", "AA", "AA"};
    int K = 11;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> table = {"AMAAAA", "AAAAAA", "AMAAAA", "AAMAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAAAA", "AAAMAA", "AAAAAA", "AAAAAM", "AAAMAM", "AAAAAA", "AAAAAA", "AAAAAA"};
    int K = 13;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> table = {"AAMMAA", "AAAAAM", "AAAAAA", "MAAAAM", "AAAAAA", "AAMAAA", "AAAAMA", "AMAAMA", "AAMAAA", "AAMAAA", "MMAAAM", "MAAAAM", "AAAAAA", "AMAMAA", "AAMAAA", "AAAMAA", "AAAAMA", "AMAAAA"};
    int K = 11;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> table = {"AMAAAAA", "MAAMMAA", "MMAMAAA", "AAAAAAA", "AMAAAAA", "AMMMAAA", "AAMMAAM", "AMAAAAA", "AAAMAAM", "MAMAAAA", "AMAAAMA", "AAAAMAM", "MMAAMAA", "MAMAMAA", "MMMMMAA", "AAAAAMM", "AMMAAAM", "AAAAMAM", "MAAAAAA", "AAAAAAA", "AAAMAAA", "AAAMAAM", "AMAAAMA", "AMAAMAM", "AAAMAAA", "MAAAMAM", "MAAMAAM", "AAAMAAA", "MAAAMAM", "MAMAMAA", "AAAAMAA"};
    int K = 7;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> table = {"AAAAMAAAAAAAMAAMMAMMAAMMAAMAAAAMMAAMMAMMMAMAAAMAA", "AMAAMAAAAMAMAAAMMMMMAAAMAAAAAMAMMMMAMMAAMAMAAAAAA", "AAMMMAAAAAMAAAMMAMAMMAAAAAMMAAAAAAAMMMMMMMMAAMAAA", "AMAAAAMAAMAMAAMAMMAAAAAAAAAAMAAMAAAAAMAMAAMAAAMMA", "AMMAAMAMAMAMMAAAAAMAMAAMAAMAAMAAMMAMMMAAMAAMMMMAM", "AMMMAAAAAMAMAAMAMMMMMMAAAAAAMAAAAMMMAAAAMMMAAAAAM", "AAAAAAAAAAMAAAAAMMAAAMMMAMAMMMAAAAAMAMAMAAAAAAMAA", "AAMAAAMAAAAAMAAMMMAAMAAMAAAMMAMAAAAAAAAMAMMAAMAAA", "AAAAMMAAAMAMAAMMAAMMMAMAAMAMAAAAAAMAAAAAAAMAAAMAM", "MAAMAAAMAMMAAMAMAAMAMAAAAAAAAMAAMMAMAAMAMAAMAMAAA", "AAAAMAAMMAAAMAMAAAAAAMAAAMAAAAMAAAAAAMAMMAAAAAMAM", "AAMMMAAMMMAMMAMAAAAAMMMMMMAMAMMAAAAMAAAAAAAMAAAMM", "AAAMAAMMAAMAAMMAAAAAMMAMAAAAAMMMAMMAAAMAAAAAAAAAM", "AMMAAAMAMAAMAAAAAMAAAAAAAMAAMMAMMMAMAAAAAMAAMAMAA", "MMMMAAAMAAMMAAAAMAAAMAAMMAMMMAMMMAMAMMAAAMAAAAMMA", "AMAAMMAAMAAAMMAMMMMAMAMAAAAAAMMMMAAAMMAAAAMAMMAAM", "AAAMMAAMAAAMAAAAAMMAAAAMAAAMMMMMMMMAAMAMMAAAAAMMA", "AMAMMAAAAAMMMAAAMAMAMAAAMMMAMAAAMMMAAMAAAAMAAAAAM", "AMAAAAAAAMAAAMAMAAAAAAAMMAAAMAAAAMAAAAAAAAAAAAMAA", "AMMAMAMAAMMAAAMAMAMAAMAMMAMAAAAAMAAMMMMAMAAAMAAMM", "MMMMAAAAMMMAAAAAMAMAMAAAAAMAMAAAMMAAAAAAAMAAAMMMM", "AAAAAAAAAAAAMMMAAMMAAMAAAAAAMAAAMAAMAAAMAAMAAAAMA", "AAAAMMAAMAMAAAAAMAAAMAAMAAAAAAAAMAMAAMAAAAAMMAAAM", "MAAMAAMAAAAMAAAAMAAAAAAAAAAMAMAAAAAAAMAMAAAAAMAAA", "MAAAAAAMAMAAAAAAAAAAAAAMAAAAMAAAMAMAAAAAAAAAAMAAA", "AMMMAAMAAAAAAMMAMAAMAMAAMMAMAAAAAMAMAAAAMAMAAAMMA", "AMAAMMMAAAAAMAAAAAAAMAAAMAAAMAAAAAAAMAAAAAAAAAAAA", "AMAAMAAMAMMAAAAAMAAMAMAAAAAAMAAAAAMAMAAAAAMAMAAMA", "AAAAAMMMAAAAMAMMAMMAAMAAAMMMMAMMAMMMAMMAMAAMAAAAM", "AMMAAMAAAAMAMAAAAAMAAAAAAAMAAAAMAAAAMAAAAAAMAMMAA", "MAAMMAMMAMAAMMMAAAAAAMAAAAAMAMAMAAAAAAAMMMAAAMMAA", "AAAAMAMMMMAAAMAAAAMAAMMAAAAAMMMMMAAMAMAAAMAAAMAAM", "AAMMAAAMAMMMAAAMMAAMAAAAMMAAAAAAAMAAAMAAAAAAMAAAM", "AAAMAMAMAMAAAAAMAAAAAMAAAAMMAAAAAAAAMAMAMMAAAAAAA"};
    int K = 4;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> table = {"AAAMAMAAAAMAMMMAMAAAAMAAAMAAAMAMMMA", "AAAAAAMAMAAMAAAAAAAAAMAMAMMAMAMMMAM", "AAAAAAAAAAMAAMAAAAAMAAAMAMAAMAMAMAA", "AAMMAMMAAMAMAMMAAAAMAAMMMMAAMMAMMMM", "AAAAAMAAAAAMAMAAAAMAAAAMAMAMAAAAAMM", "MMAMMMMAAAMAAMMAMAMAAAAAAAAAAAMAMAA", "AMMAMMAMAAMAMAAMAMAMAMMMMMMAMAMAMAA", "AAAAAAAAAMAAAAAAAMAMAAMAAMMMMAMMAMM", "AAAAMMAAAMAAMAAAAAAAMAAMMAMAAMMAMAA", "AAMMAAAAAAMAMMAAAAAMMMAAAMMMAMMAAAM", "AMMMAMAAMMAMAAAAAAAAAAAAAMAAAMAMAAA", "AMAAMAAAAMMAAAAAMMAAAMAMAMAAAAMAAAM", "MMAMMMAAAMAAMAMAAAAAAAMAAAAAAAAAMAA", "MAAMMMAMMMAMAMAAAAAMMMMAAAAMAAAMAAA", "AAAMAMAAAAAAAAAAAAAAAMAAMAAAAAAMMMM", "AAAMMAAAAAAAMMAAMMMAMAAAAMAAAAAAAMA", "AMMMAAAAAAAAAAAAAMAAAAAMAMMMAMAMMAM", "AMMAAAAAAMAAMMMMAAAMMAAAAAAAAMAMMAA", "MAAAAAMMAAMAAAMAMAAMMAMMAAAAAMMAMAM", "MAAAAAAAMAAAAAAAMMMAAAAAAAAAMAAMAAA", "MAAMAAMMAAAAMAMAMAAAAAMAAMMAMAAAMAA", "AAAAAAAAAAMAMAAAMMAMMMAAAAAAAAMAMAM", "AAMAAAAMMMAAAMMAMAAMMAMAAMMAMAMMAAA", "AAAAAAMMMAMAAAMAAAMMAAAAAAAAMAAMAAA", "AAAAAAAAAAAMAMMAMAMMAAMMMMAAAAAAAAM", "AMAAAAAMAAAAAMMAAAMAAAAAAAAMMAAAAAA", "AAMAAMMMAMAAAMAMAAAAAAAAAAMAAMAAAAM", "AMAAAMMAAAMMMMMMAMAAAAAMAAAMAMAMAAA", "AAAAAMAAAAMMAMAAMMAMAMAAAMAAMAAMAAM", "MAAAAAMMAAAAMAAAAAAMAAAMAAAAMMMAAMM", "AAAMAMAMAAAMAAAMAMAAAAAMMAMAAMMAMAA", "AMAAAMAAMMAAAMAMMAAAMAMAAAAAMAAMMAA", "MMAAAMAAMAAAAAMMMMAAMAMAMAAAAAAAAMA", "AAMAAMAAAMAAMAMMAAMAAAAAAAAMMMAAAAM", "MAAAMAAMMAAAAAAAMMAMAAAMAMMAAAAAAAA", "MAMMAAMMAAAMAAMMAAMMAMAAAAAMMMMAMAM", "AAAAAMMAAAAAMAMAMMAMAAMAAAMMMAMAMAA", "AAAMMAAMAMAMAAAMMMAAAAAAAAAAAMMAMAM", "AMAAMAAAAMAMAMMMAMAMAAMMAAAMAMAMAAM", "AMAAAAAAMAAMMAAAMMAAMMAMMAAAAAMMMMA", "AAMMAMMAMAAAMAAMAAAMAAAAAMMAAAAAAMA", "MAAMAAMAMMMAAMAAAMAAAMMAAAAAAAAAMAA", "MAMAAAAAMAMMMAMMAAAMMAAMAAAAMMAAAAA", "MAMAAAAAAAMMMMAAAMAMMMAAAAAAAMAAMAM"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 868;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> table = {"AAAMAAAMAAAAAAMAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAMAAAAAAAAAAAAAAAAAMAAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAMAAAAAAAAAAAAAAAAMAA", "AAAAAAAAAAAAAAAAAAMMAAMAAAAAAAAA", "AAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAM", "AAAAAAAAMAAMAAAAAAAAAAAMAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "MAMAAAAAAAAAAAAAAAAAAMAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAA", "AMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAMAAAAAAAAMAAAAAAAAAAAA", "AAAAAMAAAAAAMAAAAAAAAAAAAAAMAAAA", "AAMMAAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AMAAAAAAAMAAAAAAAAAAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAMMAAAAAAAAAAAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAMAAAMAAAMAMAAAAAMAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAA"};
    int K = 16;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> table = {"AAAAMAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAMAA", "AAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAAAAAAA", "AAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "MAAAAAAAAAAAAAMMAAA", "AAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AMAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAMAAAAAAAAAAAAAAA", "AAAAAAAAAAAAMAAAAAA", "AAAAAAAAAAAAAAAMAAA", "AAAAMAAAAAAAAAAAAAA", "AAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAMAAAAAAAAAAAAAAAA", "AAMMAAAAAAAAAAAAAAA", "AAAAAAMAAAAAAAAAAAA"};
    int K = 5;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1133;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> table = {"MAMAMMMMMAAAMMMMMMMMMAMAMMAMMMAAMMMAMMMA", "MMMMAMMAMMAMMAMMAMAAMAAMMMMMAMMMAMMAAAMM", "MMMMMMMMAMAAMAMAAAMMMMMMMAMAAMMMAMMAAMMA", "MAMMMAAMMAAAMMAMMMAMAMMMAAMAAMMMMAMMAAMM", "MMAAAAMAAMMAMMAMAMMAAAMMMAAMMMMMMMAMAMMM", "MAMAAMMAMMMMMMMMMMAAMMMMMMMMMAAMMAMMMMMM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 23;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2176;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> table = {"AAMAAAAAAAAMAAAAAAAAMAAAAAAAAAAA", "AAAAAAAAMAAAAAAAMAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAMMAAAAAAAAMAAAA", "AAMAAAAAAMAAAAAAAAAAAAMAMAAAAAAA", "AAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAA", "AAAAAAAAAAAAAAAAAAMAMAAAAAAAAAAA", "AMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AMAAMAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAA", "AAAAAAAAAAMAAAMAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAAAAAAMAAAAAAAAAAAAA", "AAAAAAAAAMAAAAAMAAAAAAAAAAAAAAAA", "AAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAMAAAAAAAAAAAAAAAAAAMAAA", "AMAAAAAAAAMAAAAAMAAMAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAMAAAAAAAMAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAM", "AAAAAAAAAAAAAAAMMAAAAMAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAMAAAAAMMAAAAAAAAA", "AAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAMAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAA", "MAAAAAAAAAAAAAAAAAMAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAM", "AAAAAAAMAAAAAAAAAAAAAAAMAAAAAAAA", "AAAAAAAAAAAAAAAAMAAAAAAAAAMAMAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AMAAAAAAAAAAAAAAAAAAAAAAMAAAAAMA", "AAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM", "MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAMAAAMAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 24;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 287;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> table = {"AAAAMMAAAAAAAAAAAAAAA", "MAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAA", "AMAAAAAMAAAAAAMAAAMAA", "AAAAAAAAAAMAAAAMAAAMA", "AAAMAAMAMAAAAAAAAMAAA", "AMMAAAAAAAAAAAAMAAAAA", "AAMAAAAMAAAMAAAAAAAAA", "AAAAMAAAAAAAAAAMAAAAA", "AAAAMAAAAAAAAMAAAAAAM", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAMAMAMAM", "AAAAAMAAAAAAAAMAAAAMA", "AAAMAAAAAAAMAAAAAAAAA", "AAMAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAAAMAA", "AAAAAAAAAAAMAAAAAAAAA", "MAAAAAAAAAAAAAAMAAAMA", "AAMAMAAAMAAAMMAAAMAMA", "AAAAAAAAAAAAMMAAAAAAA", "AAAAAAAAAAAAAAAAAAAMA", "AMMAAAAAAAAAAAAAAAAAA", "AMAAAAAAAAAAAAAAAAMAA"};
    int K = 10;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> table = {"AAAAAMMAAMAAAAAAAAAAAAMAAA", "AMMMAMAAMMMAAAAAMAAAAAMAAM", "AAAAAAAMMAAAAMAAMAMAMAAMAA", "AMAMAAAAAMAMMMAAMMAAAAAAAA", "AAAAAAMMMAAMAAAAAMMAAAAAMA", "AAAAMAMAAAAAAAMAMAAAAAAAMA", "AAAAMAAAMAAAAAAAAAAAAAMMMM", "AMAAAMAAAMAMMAAAAMAAAAAMAA", "AAAAMAAMAAAMAAMAAAAAAAAMAA", "AAAAAMAMAAMAMAAAMAAMAAAAAA", "AMAAAMAAAAAAAAAMAMAAMAAAMM", "AAAAMAAAAAAMAMAMMAAAAAMAMM", "MAMAAMAMAAAAAAAAAAAAAAAAAM", "AAMAMAMAAAAAAAAMAAAAAAMAAA", "AAAAMAAMAAAAMAAAAAAAAMMAMA"};
    int K = 15;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> table = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "M", "M", "M", "M", "A", "A", "A", "A", "M", "M", "M", "M", "A", "A", "M", "A", "M", "A", "A", "A", "A", "A", "A", "A", "A", "M", "A"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> table = {"AM", "AM", "AM", "AA", "AA", "AM", "MM", "AA", "AA", "AM", "AA", "MA", "AA", "MA", "AA", "MA", "AM", "MM", "AM", "AA", "MA", "MM", "AA", "AA", "AA", "AA", "AM", "AA", "MA", "AA", "AM", "AA", "AA", "MA", "AA", "MA", "AM", "AM", "AA", "MA", "AA", "MA", "AA", "MA", "MM", "MA", "MM", "MA", "MA", "AM"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> table = {"MMA", "AAA", "MAA", "AMA", "MAM", "AAA", "AAM", "MAM", "AAM", "MAA", "AAM", "AAA", "AAA", "AAA", "AAA", "AAA", "AAM", "AMA", "AMM", "AAM", "AAA", "AAM", "AAA", "AMM", "MMA", "AMA", "AAA", "MAA", "AAA", "MAM", "AMM", "AAA", "MAM", "AAM", "AMM", "AAA", "AMM", "MAM", "AMA", "AMA", "MAA", "MAA", "MAA", "AMM", "AMA", "AAM", "AAA", "AAA", "AAM"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> table = {"AAAM", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AMAA", "AAAA", "AAAA", "MAAA", "AAAA", "AMAA", "AAMA", "AAMA", "AAAA", "AAAA", "MAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AMAA", "AAAA", "AAAA", "AMAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAM", "MAAA", "AAAA", "AAAA", "AAAA", "AAAA", "AAAM", "AAAA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> table = {"AMAAA", "MAAAA", "AAAAM", "AAAAA", "AAAAA", "AAMAA", "AMAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAMA", "AAAMA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AMAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAA", "AAAAM", "AAAAA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> table = {"MMMAAM", "MMMMMA", "AMMMAA", "AMMMMA", "MMMMMM", "AMAMMM", "MMMMMA", "AAAMAA", "MMAAMM", "AMAMAM", "AAAAAA", "AMMMMM", "MMMMAM", "MMAAMM", "MMMAMA", "MMMMMM", "MAMAMA", "MAAAMA", "MAMMMM", "AAMMMA", "MMMMMM", "MMAMMM", "AMAMMM", "MAMAAM", "AMMMMA", "MMMAAM", "AMMMAA", "AAMAMM", "AMMAMM", "AMMAAM", "MMMAMM", "AMAAMA", "MAMMMA", "MMMMAA", "AMMMAM", "MMAMMM", "MMAAMM", "MMAMMM", "MMMAMM", "MAAMMM", "AMAMMA", "AMMAMM", "MAMMMM", "MMMMMM", "AAAMMA", "AAMAMM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> table = {"AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA", "AAAAAAA"};
    int K = 14;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> table = {"AAAAAAAM", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAM", "AAAAAAAA", "AAAAAAAA", "AAAMAAAM", "MAAAAAAA", "AAAMAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AMAAAMAA", "AAMAAAAA", "AAAAMAAA", "AAMAAAAA", "AAAAAAAA", "AAAAAAAA", "AMAAAAAA", "AAAMAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAMAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAM", "AAAAAAAA", "AAAMAAAA", "AAAAAAMA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAA", "AAAAAAAM", "AAAAAAAA"};
    int K = 15;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> table = {"AAAAAAAAA", "AAAAAAAAA", "AAAMAMAMA", "AAAMAAMAA", "AAAAAAAAA", "AAAAAAAMA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAMMAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AMAAAAAMA", "AAAAAAAAM", "AMAAAAAAA", "AAAAAAAAA", "AAAAAAMAM", "AAAAAAAMA", "MAAAAAAAA", "AAAAAAAAA", "AAAAAAAAM", "AAAAAAAMA", "AMAAAAAMA", "AAAAAAAAA", "MAMAAMAAA", "AAAAMAAAA", "AAAMMAAAA", "AAMAAAAAA", "AAAMAAMAA", "AMAAMMAAA", "MAMAAAAAA", "AAAAAAAAA", "AAAAAAAMA", "AAAAAAAAA", "AAAAAAAAA", "MAAMAAAAA", "AMAAAAAAA", "AAMAAAAAM", "AAAAAAAAA", "AAAAAMAMM"};
    int K = 8;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> table = {"MAAAAMAAAA", "AAMAAMMAMA", "AAMAAAMMAA", "AMMAAAAAAA", "MAMAAMMMMA", "AAAAMAAAMM", "MAAAAAAAAM", "AMAAAAAMAA", "MAAMAMAAMM", "AAAAAMAMMA", "AAAAAAAMAA", "MAAMAAAAAA", "MMMAAAAAAA", "AAAAAAAAAA", "AMAAMAAAMA", "AAMAAMMAAM", "AAAAMAAMAA", "MAMAAMAMAA", "MAAMAAAAAM", "AAAAAAAAAA", "AAAMAMAMAA", "AAMAAAAAAA", "AAAAMAMAAA", "AAAAAAAAAA", "AAAAMAMAMA", "AAAAAAAAAA", "MAMAAMMAAA", "MMAMMAAMAA", "AAMAAAMAMA", "AMAMAAAAAA", "MAMAAAAMAA", "AAAMAAMAMA", "AAAMAAAAAA", "AAAMAAAAAM", "MAAAAAAAAM", "AAAAAAAAAA", "AAAAAAMMMA", "AAAMAMMMAA", "AAAAAAAMMA", "MAMAAAAAAA", "MAAMMAAMMA", "AAAAAAAAAA", "AAAMAAAAAA", "MAMAAAAAAM", "AAAMAAAAMA", "AAAMAAAAAM"};
    int K = 13;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> table = {"AAAAMAAAAAAMAMAAAAAAAAAAAMAMMAMAAMMMAAMAAAAAMAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> table = {"MMMAMAAAMMMMAAMMMAAMAAMMMAMMMMMAMAAAMAAAMAMAAA", "MMAMMAMAMMAAMAAAAAAMMAMMAAAAAAMMAAMAAMMAAAAAMA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> table = {"AMMMMAMMMAAAAAAAAMAAMAMAAAMMMMAMMAMMMAAAAAMA", "MAAAMAAMAAAMMMMAAAAMAAAMAAMMMAAMMAAMAAAMAMMA", "AMMAMMMMAAMMAAMAAAAAAMMMAMAAAAAAMAAAAAAMAAAM"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> table = {"AAAAAAMAAAMAAAAAAAAAAAAAAAAAAAAAAMMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAMMAAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAMAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAA"};
    int K = 5;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> table = {"MMAMMAAMMAMAMMAAMMMAMAAMMMMMMAAAMMMMMMMMAMMAMAMMMM", "AMMAMMAMAAAMMMMMMMMMAMMMMAMAMMMAMMMAMMAAMMAMMMMMMA", "AMMMMAMMMMMAAMMMMMMMMAMMMMMMMAMAMAAMMMAMMMMMAMAAAA", "AMMMAAAAMMMAMAMAAMAMMAAMMMMMMMAMMMAMMMAMMAMMMMMMMM", "AMMMAMAMMMMMAAMAMMAMMAMMMMAMMMAMMAAMAAAAMMMAMAMAMM", "AMAMMAMAAMMAMMMAMAAAMMAMMAMMAMMMMAMMMAMAAMAAMMMAAM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 12;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> table = {"AAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAMAAAAAMAAAAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAMA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAMAAAMAAAAM", "AAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAMAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAAAAAAAAAAAAMAAAMAMAAAAAAAAAAAAAAA"};
    int K = 13;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> table = {"AMAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAA", "AAMAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAMAAAAAA", "AAAAAAAAAAAAAAAAAAAAMAAAAAMAAMAMAAAAAAAAAAAAAAMMAA", "AAAAAAAAMAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAMAAAAAAMAMAAAAAAAAAAAAAAAAAAAMAMMAAMAM", "AAAAMAAAAAAAAAAAAMAAAAAMAAAAAAAMAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAAAAAMAAAAAMAAAMAAAAMAAAAAAAAAAAAAA", "AAAMAAAAAMAAAAAAMAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 36;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> table = {"MMMMAAAAAAAAAAAAMMAMAAAMMAAAAAAAAMMAAMAAAAA", "AAAAAAMAAMAMAMAAAMAAAAAAAAAAAAAMAAAAMMAAAAA", "MMAAAMAMMMAAMAAAMMAAAMAAAAAMMAMAAMMAAAAAMAA", "AMAAAAAAMAMMMMAAAMAMAAAMAAAAMAMMAAAAMAAAAAM", "AMMAAAAAAAAMAMAMAAAAAAAAAMMAAAAAAMAAAAAMAMA", "AAAAAAAMMAMMAAAMAAAAAAAAAAAMMMAAAAMAAAAAMAA", "AAAAAAMMAAAAMAAAAAAAAMAMMAAAAAMAAAAMAAAMAAA", "MMAAAAMAAAAAMAAAAAAAAAAAAAAMAAMAMAMAAMAAAAA", "AMAMAAAMAAAAAMAMAMAAAMAMAAMAAAAAAAAAMMMAAMA", "AAAAAMAAAAAAAAAAAMMMMMAAAAAAMAMAAAAAMAMAMMM"};
    int K = 6;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 97;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> table = {"MAAMMMAMMMAAAMAAMMMMAAMMMAMAAAAAAMAMMAAAAAAAAAMMMM", "AMAAAAMAAMAAAAMMMMAAAAMMAAAAAMAAMAAAMAAMMMAAAMAAMM", "MAMAMAMMMAAMMMAAMAAAAAAAAMAMMMAAMMAMAMAAAMMAMAAMAM", "AAMAAAMAAAAMAAAAMMAAAAAMAAMAAAAMMAAMAAAAAMAAAMAAAA", "MAMAAMMAAMMAMAAMMAMAAMAAAAAAAAMAAMAAAAMAMAMMAMMAAA", "MMAMAMMAAAMAAAMAMAAAAMAAAAMAMMAMMAAMAMAMAAMAAAMAMA", "MAMAAMAMMAAMAAAAMAMAAAMAAMAAAAAAAMAAAMMAAAAAAAMMMA", "AAMAAMAAAAAAAMAAAAMAAAAAMMAAAMAAAAMAAAAMAMAMAMMAMM", "AAAAMAAAMAAMAMAAMMAAMAAAAAMMAAMAAAMAAAAAMAAAMMMAAM", "AAAMMAAAAAAMAMAAAAMMAMAMAAAMMAAAAAAAAAMMAAAAAAAAMA", "AAMMAAMMAMAMMAMAAMMAMMAAAAAAAMMMAAAAAAMMAAAAMAMMAM", "AAMAAMMAAAAMAAAAMAAAAMMAAAMAAMMAAAMAMMAAMAAMMAAMAM", "MAAAAMAAAMAMAMAAAAMAMAMMMAAMAAMAAMMAAMAAAMMMAAMMAA", "AMMAMAAAAMAAAAMAAAMAMAAMAAAMMAAAAMAAMAMAAMMMAMAAAA", "AAAAAAMMAMMMMAMAAAAAAMMAAAAMAMMMMAAAMAMAAAAMAMMAMM", "AAMAAMMMMMMAAAAAMAAAMAAAAMAAMAAAAMMAAAAAMMAAAAAMAA", "MMMAAAAMMAMMAAMAMAMAMAAAMAAMAMMAMAAAMMMAMMMMAAAMMM", "MMAMAAMAMAAMAAMMAAAAMMAMMMMAMAAMAMAAAMAAAAAMAMMMMA", "AAAAAAMAAAMMMAAAAAAAMAMMMAAAMMAAMAMMAAMAAAMMMAAAAA", "MMAAAMAAAAMMMAMAMAMAAMAAAMMAAMMAAMAAAAAMAAAAAMMMMA", "AMMMMMMMAMAAAAMAAMAAAAMMAAAAMAAAMMAAAAMAMAAAAMAAAA", "MMAAAAMMMAAAAMMAAMAMMAMAAAAMMMMMMMAAMAAAMAAAMMMAMA", "MAAAMAAMAAAAAAMAMAMMMAAAMAAMMAAMAMMMAAAAAAMAMAMAAM", "AMMMMAAAMAMMAAAAAAAAAAAMMAAAAMAMAAAMAMAAAAAAAAAAAA", "AAAAAAAMAMAAAAAAAAAAAMAAAAAMAAAMAAMMAMAAAAAMAAAMAA", "MMAMAAAMAAAMAAAMAMAAAAAMAAAAMAAMAAAAAAMAAMAAMMAAAA", "AAAAMAAAAAMAMAAAMAMAAAMMMAAAAAAAAAAAMMAAAMAAAAAAAM", "MAMAAAAAAAMMAAAAMAMMMAAAAAAMMAAAAMMAAAMAAAAMAAAAAA", "AMAMAMMAAAAMAAAAMAMAAAAAMAMAMMAAAAMAMAMMAAAMAAMAAA", "MMAAMAAAAAAAMMMAAAMMAMAAAAMAAAAAAAAMMAAAAMAMAAAAMM", "MAAMAAAAMAAAAMAMAMAAMAAAAMAAMAAMMAAAMAMAAAMAMMAMAA", "AAMMMMMMAAAAAAAAAAAMMMMMAAAMAAAAAMMMAAMAMMAMMMAAMM", "AMAAMAAAMAAAAAAAAMAAAMAMAAAAMMAAAAAAAMMAMAAAAAMMAM", "AAMAMMMAAMMAAAMAMAAMMMAAAAAAAAMMMAAAMAAAAMAMMAAMAM", "AMAAAMAAAAAMAMMAMMAAAAAMAMAAAAMAAMAMAAMAAAAAMAMAMA", "AAMMAAAMAAAAAAMAAAAAMAAMAMMAAMAMAMAAAAMMAMMMMMAMAA", "MMMMAAAMMAAAAAAAMAMAAAAMAMAMAAMAAAAAAAMAMAMMMAAMAM", "AAAMMAMAAAAMAAMAAMAMAAMAAMAAMAMAAMMAAAMMAAMAAMAAAA", "AMAAAAAMMAAMAAAAMMAAMAAAAAMAAAAAAAAAAAMAAAMAAMAMAM", "AAMAAAAAAMAAAAAMMAMMMMAAAAAAMAMMAMMMAMAAAAAAAMMMAA", "AAAAMAAMAMAMAAMMAMAAAMAMAAAAAAMAAAAMMAAAAAAMAAAAMA", "MAAAAAMAAAAMMAAAAMMMAAAAAAAMAMAMAAAMAMAAAAMMMAMAAA", "MAMAAAAAAAAAAAMAMMAAMAAMAAAAMMMAAAMMMAAAAAAMAAMAMM", "MAAAAAAMAAMAAAAAMAAAAMMAMAAAAAAMAMMMMAAAMMAAAAAAMA", "AAAMMAAAAAAAAMAAMMMMAAAAAAAAAMMAAAAAMAAAMAAMMMAAMM", "AAAMAMAMAAAMAAMMAAAAAAMAMMAMMMAAAAMAAMAAMAAAMMMAAA", "MAAMAMMAAAAAMAMAAAAMMMAAMAAAMMAAAMAAAMMAAAAAMAAAAA", "MMAAAAAAAMMAAAAAMMAMAMAAMMAMAAMMAMMAMMAAAAAAMMMMAA", "AMMAMAMMMAMAMAMAAAAMAAAAAMMAMAMAAAAAMAMAAAAMMAMAAA", "MAAAMAAMAAAMAMAAMAAMAMAAAMMMAAMMAAAAMMMAAAAAAAAMAA"};
    int K = 50;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"MAMAAAMAAAAMMAAMMMAMAAMMAAMMAMAMAMMAMMAAMAMAAAAAMA", "MAMMMAMMAMAMMAMAAMMAAAAAMAMMAAAMAAAMMMAMAAMAAMAMAM", "AAMMAAAAMMAAAAAAAAAAAAAMAAAAAAAAMAAMAAAAMAAAAAAAAA", "MAMMMMMMAAMAMAAAAMAAAAMMAAAAAAMAAAAAAAMAMAMMAAMAAA", "AMAAAMAAAAAAAAAAAAAMMAAAMAAMMAAAMAAAMAAAMAMAAMAAAA", "AAMAMAAAAAMAMAAMAAMMAMMMMMMAAMAAMAAMMAMAAAAAAAMMAM", "AAAAMAAMMAMMAAAAMAMAMAAAAAMAAMAAMAAMAAAAMAMAAAMMMA", "MAMAMMMAAMAAAAAAAAAAAAAAAMMAAMAMAMAAAMAMAAAMAAMMAA", "MAMMAAAAAMAAMAAAAAMMAAAAMAMMAMAAAAAAMMAAMMAAAAAAAA", "MMAMAMAMAAAAMAMAAAMAAAAAMAAAAAAAMAAMAMAMMAAAMAMAMA", "AMAMAAAMMAAAAMAAAAAAMAAMAAMMAMMMMAAAAMMAAMAAAAAAAA", "MAAMAMAAMMMMAAAAAAAAMAAAAMAMAAMAAAAAAAAMAAAMMAAMAA", "MMAAAMAAMMAAMAAAMAAAMMAMAMMAMAAAAAAAMAAAMAAAAAAAAA", "MAMAMAMMMAMAMAAAAAAAAMMAAAAAAAAAMAMMAMAMAAAMMAAAMA", "MMAMAAMAAAMMAAMAAMAMAAAAMAAMAAAMAMAAAAAAAAAMMMMAAA", "AAAAAMAAMAMAAAAAMAAMAAMMMAAAMMMAAAMMAAAAAMMAAAAAAA", "MAMAAMAMAMMAMAAAMMAAMMAMAMAAMAMMAMAAAAAMAAMMAMAMAA", "AMAMAAMAMAAMMAMAAAAAAAAAAMMAAAAAMMAAAMMAMMAAAMMMAA", "AMMAAAAMMAAAAAAAMMAMAAAAMAAAAAAMAMMAAAAAAAMAMAMMAA", "AMMAAMMAAAMMAAAAAAAMMMMAMAAAAAAAAAMAAAMAAAAAAAAMMA", "AMAMMAAAAAMMAAMMAAAAAAMMAAAMAAMAAMAMMAMAMMAAAAMMAA", "MAAAAAAMAAAAMAMAAMMMAAAAMAAAAMAAAAAAAAMAAAAAAAAAMA", "MAAAMMAMMAMAMMMMAAAMAAAAAMAAAAAAAAMMAMAMMMAMAMAAAA", "AAAAMMMAAMAAAMMMAMAAAAAMAAMAAAAAMMAMAAMAMAAAMAMMAA", "AAAAAMAAAAMAAMAMAAAAMAMAAMAAMAAMAAAAMMMAMAMMAAAMAM", "AAAMMAAMMMAAAAAAMMMMAAAMAAAMAMAMAAMAMAMAAAMMAMAMAA", "AMMAAAAAMAMAAAAMAAAAAAMMAAMAAAMMAMMAMAAMAAAMMMMAMA", "MAAAAMMMMMAAAAAMMAAAAAAAMAAMAAAAAAAAAMMAMMMMAAAMAM", "MMMMAMMMMAAAMAAAMAAAMAAAAAMAAAAAAAAMMAAAAMAAAAAAAA", "AAAAMAAMAMMAAAMAMAMMAMAAMAAMMAMAMAMAAAMMAMMMMAAMMA", "AMAAAAMMAMMMAMAMAAAMAAAAAMAMMMMAAMAAAAAAAAMMMAAAMA", "MAAAMAAAMMAAAAMMAMMMMAMMAAAAAMAAAMMAAAMAAAAAMMAAAA", "MAAAAMAMMAAAAAAAMMAAAMAAAMAMAAMAAAAAAMAAMAMMAAMMAA", "AAAAMAAMAMAAMAAAAAAMMMMAAAMAAAMAAAAMMMMAAMAAMMMAAA", "MMMMAAAAAAAAAMMAAAMAAMAAAAAAMAAMMMAAAMAAAAAAAAAAMM", "AAAMMMAAAAAMAAMMAAAAMMAAMAAAAAAAMMMAMMMAAAMMMAAAMA", "AAMAAMAMMMAAAAMAAAMAMMAAAAAMMAAAMAAAAAAAAAMAAAMAAA", "MMAAAMAAMAAAAAAMAMMAMAAAMAAMAAAAAAMAAAAAAAAAAAAAAA", "AAAMMAMMAMMMAAAMAAMAAAMAAAAAMAMAAAMMAAAMMAAMMAAMAM", "AAAAMMAAAAAMMMAAAAMAMMAAAMAMAAMAAAAAMMAAMAAAAAMAAA", "MAAAMAAAMMMAMAMAAAAAMAMMAAMAAAMAAMAAAAMAMAAAAAAMAA", "MMMMMMAMAAMMMAAAAAAAMMAAAMAAAMAAAAMAAMMAMAMAAAMAMA", "AMAAMAAAAMAAAAAAAMMAMAAMAMMMAMMAAAMMAMMAMAAAAAAMMM", "AAAMAMAMAAMAAAAMAAAAMAAAAMAMAAAAAAAAMAMMMAMAMAAMAM", "AAMAAAAAAMAMMAAMAAAAMMMAAAMAMAAAAMMMAAAMMAMMMAAAAA", "AMAAMMMMAAMMMMAAAAMAAAAAAAAMMAMAAAMAAMAAAAAMAAAMAA", "AAAAAAAAAMAMAAAMAAAMAAMAMAMAMAAMAMMMAAAMAAAAMAMMAM", "MAAAAMAAMAAAMAMAAAAMAMAAAAMAAAAMAAAMMMAMMAMMAAAAAM", "AMMAAAMAAAAMAMAAAMAAAAMMMAMMMAAAMAMAMMMAAAMAAAAAAA"};
    int K = 31;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"AMMMMAAAAAMAAAAAMAMAMAMAMMAAAAAAAAAMAMMAMMMAAAAMAA", "AAMAAAAMAAAMAAAAAAAAAMAAAAMAMAAAAMAAMMMAMMAAAMAMAA", "AAAAMAAMMMAAAAAAAAAAMAAAAMMAMAMAAMAAAMAAAAMAAMAMMA", "AAMAAAAAAAAMMAAAAAMAAAAMAAAAAAAAMMAAAMAAMAAMAAMAMA", "AAAAMMAAAMMAMMAAAMAAAMAAAAAMAAAAMMMMAMAMAAAMMMAMAA", "AMAAAAAAAAAMMAAMAMMAMAMAMAAAMAAAAAAMAAMAMMAMAMMMMA", "MMAAAMAAAAMAAAAAMAAMAAAMAAMMAAAAAAAAMAMAAAMAAAAAMA", "AMAAMAMAMAMAMAAAAAAMAAAAMMAAAAMMMAAMMAMAAAMAAMAAMA", "MMMAMAAAAAAAMAAAAAAAAAAAAAMAAAAMAAMAAAMMAAMAAAMAMA", "AMMAAAAAMMMAMAAAAMAAMMAAAMAAAMAMMAMAAAAAAAMMMAAAAA", "MAMAAAAMAAAMAMAAMMAMAMAAAAMAAAAMAMAAAAAMAAMAAMAAMM", "AMAAAAMAMAMMAMAAMAAAAMAMAMAMAMAAMMAMAAAMAAAAMAAMMA", "AAAMAAMAAAAAMAAAMMAAMMAAAAMAMMMAMMMAMAAMAMMAMAAMAA", "MAAMAMMAMAMMAAMAAMAMAMAAAAAAMMAAAMMAMMMAAMAAAAAAAM", "AAAMAMAAAMAAAMMAAAAAAAAAMAAAAMMAAAAMMAMAAMAAAMMAAA", "AAAAMMAAAMAAMAAAMAMAAMAMAMMMMAAAAAMAMMAMAAAAAMAMAA", "AMAAAAMAAMMMAAAAAAMAAAMMMMMMAMMAAAMAAAAMMMMAMAAAAA", "MAAMAMAAMAMAMAMAAMMAAMMMAAMAAMAMAAAMAAAAAAAMAAAAAA", "AMAAAAMMAMAMAAMAMAMAMMAMMMMMAMAMAAMAMAMMAAAAAAMAMA", "AAAAAAMMAAAMAMAMAMAAAAAAAMAAAAMAAAAAAAAAMAAMAMMAAM", "AAMAAAAAMMMMAAMMAMMAAAMAMAAAAMMAAAMMMAAAMAAAAAAMAA", "AMAAAAMAAAAMAMAMAAMAMAMAAMAAAMAAAAMMMAMMMAAMMMAAAM", "AAAMMMAAMMAAAAAAAAAAAAMMAAAAAAMMAMAMMAAMAAAMMAAMMM", "MMAAAAAMMMAAAAAAAMMMAAAMMMMAAAMMAAAAMMAAAAMAAMAAAA", "AAAAMMAMAAAAMAAAAAAAAAAAAAMAMAAAMAAAAMAMMAMAAAAMAA", "AMAAMAMMAAMAAAAAMAAMAMMAAAAAAAAAMMAAAMAAAMMMMAMAAA", "AAAMMAAAMMMAAAAAAAMAAMMAMAMAMMAAMMMMMAMMAAMAAMAAAA", "MMMAAAMMAAMAMMAMAAAAAAAAAMAAMAAAMAAAAAMMAMAAMAAAAA", "MAAAMMMMMAMAMMMMMAAMMAAAAAAMMMAAAMAAAMAAAMMAAAMAMA", "AAAMMMMMAMMAMAMAMAAAMAMMAMMAMAAMAAMMAAAAAAAAAAAMAM", "AAAAMMAAMAAMAAAMAAAAMMAAMAMAMAMAAMMAMAAAAAMMMAAAAA", "MAAMAAAAMAAAAAMAAAMAMAMAMAAAAAAMAMMAAAAAAAAMMMMAAM", "AAAMAAMAMMAMAAAMAAAMAAAMAAMMAAAMAAAAMMAMAMAMAMAMMA", "AMAMAAAAMAAAMAAMAAAAAAAAMMAAMAAMAAMAAAAAMAAAAAMMAM", "AMAAMAAMAAMMMAAMAMMAAAMMMAAAMMAAAMMAAAAAMMAAAMMMAM", "MAMAAAAMMMMMAMAMMAMMAMMAMAMAAMAAMMAAAAMAMAMAAMMAAM", "AMMAAAMMAAAAAMAMAAMAMMAMAAMAAMAAAMMAAMMAMAAAMAAMMA", "AMAAMAMMAAMAAMAMAMMAAAMMAAMMMAAAAAMMAMAAAAAMAMAMAA", "AAAAAAAAAMAMAAMAAMAMAAMMAAMAAAAMMMMAAMMMMMMAAMAAMM", "AAMAAAAMMMAAAAAAAMAAAMAAMMAAMAAMAMAMAAAMMAAAMAAAAM", "AAAAAAAMAAAMAAAMAAMAAAMAMAAAAAMMMAAAAMAMMAMMMMAAAA", "AMAAMAMAAAAAMAAAMAAAMAAMAMAMMAAAAMAMAMAAMAAAAMAMAA", "MAAAAAAAAMMAMMMMAMMAAAAAMAAAAAAAAAAMAMAAAAAMAMAAAA", "AAMMAAMAAMAMMAAAMAAMAMMAMAAMAAAAAAMAAAAMMAAAMMAAMM", "AAMAAMAAMAAAAAMMAAMAAMMAAAAAAMMAMMAMAAAMAAAMAAAAAM", "AMMAAMAAAAMAMMAMAAAAAAMMAAMMAAAMAAAAMMAAMAAAAMAAAA", "MAMMAMAAAAMMAAAAMAAMAAAMAAAAMAAAAAMMAMAAAAMAMAMAAM", "MAMAAAAMAAMAMMMMAMAMAAAMAAAMMAAAMAMAAAAAAMMAAAMMMM", "AMAAMMMAAMAMAAAAAMMMAAMAAMMAMAMMAMAAMMAAAMAMMMAMMA", "AAAAMAAAAMAMAAAAMAAAAMAAAMAMAMAMAAMAAMAAMAAAMMAAMA"};
    int K = 29;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAMAAAAAAMAAAAAAAAMAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAMAAAAAMAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAMAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAMAAAAAA", "AMAAAAMAAAMAAAAAAAAMAAAAAAAAAAMAAAAAAMAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAA", "AAAAAAAAAMAAAAAAAAAAAAMAAAAAAAAAAAAMAAAMAAAAAAAAA", "AAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAA", "AAAAAMAAAAAAMAAAAMAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAMAAAAAAAAAAMAAAAAAAAAAAAAAAAAAMAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAMMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAMAAMAAA", "AAAAAAAAAAAAAAMAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAMAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAMAMAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAMAMA", "MAAAAMAAAAAAAAAAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAMAAAAMAAMAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAMAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AAAMMAAAAAAAAAAAAAAAAMAAAAAAAMAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAMAAAAAAAAAAAMAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAMAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAA", "AAAAAAAAAAAAAAAAAAAAMAAAMAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAMAMAAMAAAAAAAAAAAA", "AAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAMAAAMAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAMAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAAAMAAAAAMAMMAAAAAAAAAAAAMAAMAAA", "AAAAAAAAAAAAAAAAAAAMAMAAAAAAAAAAAAAAAMAAAAAAAAAAA", "AAAAAAAAAAAAAAAAMMAAAAAMAAAAAAAAAAAAAMAAAAAAAAAAA"};
    int K = 21;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1167;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> table = {"AAAAAAAAAAAAAAAMAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAMAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAM", "AAAAAMAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAMAAAAAAAAA", "AAAAMAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAMAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAAMAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAMAAAAAAAAAAAAAAAAAAMAAAAAAAAMAAAAAAAAAAAAAA", "AAAAAMAAAAAMAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAMAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAMA", "AAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAMAAAAAMAAAMAA", "AAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMMAMAA", "MAAAAMAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAMAAAAAMAAMAAAAAAAMAAMAAAMAAAAAAA", "AAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAA", "AAAAMMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAA", "AAAAAAAMAMAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAMAAAAAAA", "AAAMAAAAAMAAAAAMAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAA", "AAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAMAAA", "AAAAAAAAAAAAAAAAAAAAAAMAAAAAAAMAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAMAAAMAAAAAAMAAAAAAAAAAAAAAAA", "AAAAAMAAAAAMAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAMAA", "AAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAMAAAAAAAAAAAMMAAAAAAAAAAAAMAAMAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMMAAAAAAAA", "AAAAAAAAAAAAAMAAAAAMAAAAMAAAAAAAAAAAAAAAAAAAAAMAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAAMAMAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAMAAAAAAAAAAAMAAAAA", "AAAAAAAMAAAAAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAA", "MAAAAAAAMAAAAAAAAAAAAAAAAAAAAMAAAAAAAAMAAAMAAAAAA", "AAMAAAAAMAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAMAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "MAAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAMAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAMAMAAAAAAAAMAAMAAA"};
    int K = 26;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 526;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> table = {"MMAMAMMMMMMMMMMMMMAMMMAMAMMAMAMAMMAMMAAAMAAMMAMAAM", "MMMMAMMMMMMMMMMMMMMMMAAMMMAAMMMMMMMAAMMMAMMMAMAMAM", "AMMMAMMAMMMMAMMMMMMAMAMAMMAAAMAAMAAMMMMMAAMAAAMMMA", "MMAAMAMAAMMMMAMMMMMAMAMAMMAAMAMAMAMAMMAAMAAMMAMMMA", "AMMMMMMMMAMMMAMAMMMMMAMMAAMAMAAMMAMMMMMMMAMAMAAMMM", "AAMMAMMMMMMMAMAMMAAAMMMMMAMMMAAMMAMMMMAMMMAAMMMAMA", "MMMAMAMMMMMMMAAMAMMMAAAMMMMAMAMMMMMMMMAMMMMAMMMMMA", "AMMAMMMMMMAMMMMMMMMAMMMMMAMMMAAMAMMMMMMMAMMMMMMAMA", "MMMMMMMMAMMAMMAMMAMMAMAMMMMAAMMAAMMMMMAMMMMMMAMMAA", "AMMMAMMMMAAAMMMMAMMAMMMAMMAAAMAAMAMAAMMMMAAMMMAMMM", "MMMMMAMAMMMMMAAAMMAMMAAMMAMAAAAAMMMMMMMMMAMAAMAAAM", "MMAAMMAAMMMMAAMAMAMAMAMAAMAAMMAMMMMMMAMMAMMMMAAMMM", "AMMMMAMMMMMAMMMAMMAAMMMAMMMMAMMMMAAMMMAAAMMAMAMAMM", "MMMMMAAAMMMMMMMMAMMMMMMMMAMAAMAAMAMAMMMAMMMMMMMMAM", "AAMAAAMMAMAMMMAMMMMMAAAAMAAMAAMAMAMMMMMMAMMMAMMMMM", "MMMMMAMMMMAAMAMMMMMAMMMMMMMMMMMAAMMMMMMAMMMMAMMMAM", "AMAAMMMMMAAAAMMMMMMAAMMMAAAMMAMMMAAAAMMAMAMMMMMAMM", "AMAMAAMAMMMAAAMMAAMAMMMAAMMAMMAAMMAAMAMMAMMMMMMMMM", "MMMMAAMAAMAMMMAMMAMMMAMAMMAMMMMAMMAAMAAMAMMMMMMMAM", "MAAAMAMMAAMAMMMMMAMMAAAMMAMMAAMAAAAMAAAAMAMMAAAAMM", "MAAAAAAMMAAAAMAMAAMAMMAAMAMAAAMMMAAMAMMAAMMMMMMMMA", "MAMMMMMMMMAMMAMMMMMMMMMAMMMMMMAMMAAAMAMAAMMAMMMMMA", "MMMMAMAAMMMMMMAAAMMMAAMMAAMMMMMAMMMMMAAAMAMMMMAMMM", "MMMAMAMMMMMMMMMAMMMMMMAMMMMMAMAMMMMMMMMMMMMAMMMMAA", "MAAMAAAMMMMMAMAAMMAAAAMMAAMAMMMMAMMMAMMAAAMAMMAMMM", "AAAMAMMAAAAMAMMMAMMMMMMMMAAMAMMMAMMAMAMAMMAAAMAMAM", "AMAMMMMMMMAMAAMMMMAAMAMMMMAAMAMMAAAAAMMAMAMMAAMMMA", "MAMMAMMAMAMMMAAMMMAMMMMAAMMMMMMAMMAAAAMMAMAMMAMMMM", "MAMMMMMMMMMMAAMMMMMMAMMMAMAAAMMMMMMAAMMAMAMMMMMMAA", "MAMMMAMMMAMMAMAMMMMAMMMMAMMMAMMMAMMAMMMAAMAAMMMAAM", "MAMAMAMMAAAMMMMMMAAMMAMAMMMMAMAMMMMMMAMAMMAMMMMMMA", "MMAMMMAMAMAAMMAMAAMMMMAAMMMMAMAAAMMMMMAMAMMMAMAAMM", "AAMMMMMAMMMMMMMMMMMMAMAMAAMMAMMMMMAMMMMAAAMAMMMAAM", "AMMMMMMAMAAMMAMAMAMMAMMMMMAMAMMMMMMAMMAMMMMMMMAMMM", "MMMMMMMMAMAAMMMMMMMAMAAMAMMAMMMMMMMMMMAMMMAAAMMMAA", "AMMAAAMMMAAMMMAMMAMMMMAMAAMMMAMMMMMMMMAMMAAMMMAMAA", "MMAMMMAMAMMAMMAMMMAAAMMMMMMAMMAAMMMMMMMMMAAMMAMAAM", "MMMAAAMMMAMMAAAMMAMMMMAMMMMAMMAAMMMMMMMMAMMMMAAMAM", "MMMMMAMMMMAAAMAMMAMMAMAMAMAMMMMAMMMAMMMMMAAMMMAMMM", "MMMMAAAAMMAAMMAMMMAMMAMMMAMMAMMMMMMMMMAMAMMMMAMMMA", "AMAMAMMAMMAMMMMAMAAAMMAAAMMAAAMMMAAAAMAMMAAMMMMAAA", "MAMAMMMAAAMAMMAAMMMMMMMAMAMMMMAAMAMAAAAAMAMAAAMMMM", "MMMMAAAMAMMAMMMMMAAMAMAAMAMAMAAMMMMMMMAMMMAAMMAMMA", "MAAMMAAMAMMMAAMMMMMAMAAMMAMMAMMMMMAAMMAMAMMMMMMAAM", "MAMMAAMAMMAMMMMAMMMMAMMAMAMAAAMMMMAMMAMMAMAMAAAMMM", "MAMMAMMMAAAAAAAMMAAAAMMMAAMAMMMAMMMMMAMMMMMAAMAMAM", "AAMAMMMMMMMAMMMAMAMMMAAMMMMAMMMMMAMMMAMMMMAAAMAMAA", "MAAAMMMMMMMAAMMMAAAMAMMAMMMAMMAAAMAMMMMAMMMAMAMAMM", "MMMMMMMAAMAMAMMAMAMAMAMMMAAMAMAMAMAMMMMMMMAAMMMMMM", "AMAAAMMAAAMMMMMAAMMAMMMMMAMMMAMMMMAAMAMMMAAMMMAMMA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 869;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 43;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAMMAMAAAAMMAAAAAAAAAAAAAMAAAMAAAAAAAAAAAAAAA", "MAAMAAAAAAAAAAAAAAAAAAAAAAMAAAAAMAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAMMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAMA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAMAAAMAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAMAMAA", "AAAAAAAAAAAAAAAAAMAAAAMAAAAAAAAAAAAAAAAAAAAAMAAAAA", "AAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAMAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAA", "AAMAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AMMAAAAAAAAAAAAAAAAAMAAAAAAAMAAAAAAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAAAAAAAAA", "AAAAAAAAAAMAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAMAAAAA", "AAMAAAAAAAAAAAAAMAAAAMAAAAMAAAAAAAAAAAAAAAAAAAAAAA", "AMAAAMAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAA", "AAAAAAAAAAAAAAAMAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAMAAAAAAAMAAMAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAMAAAAAAMAAAAAAMAAAAAAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAMMAAAAAAAAAAAAAMA", "AAAAAAAAAAAMAAAAAAAAAAAAAMAAAAAAAAAAAMMAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAMMAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAMAAAAAAAAMAAAAAAAAAAAAMMAMAAAMAAAAAAAAAAAAAAAAA", "AMAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AMAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAMMAAAAAAAAAAAAAAAAAAAAAAA", "AMAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAA", "AAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAA", "AAAAAAMAAAAAAAAAAAAAAAAAMAAAAAAAAAAMAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAMAAAAMAAAAAAMAAAAAAAAAAAAAAAAAAA", "AAAAAMAMAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAMAAAAAAAAMAAAAAMAAAAAAAAMAAAAAAAAAAAMAAAAAA", "AAAAAAMAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAA"};
    int K = 12;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2182;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> table = {"AAAAMAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAMAAAAAAAAAAAAA", "AMAAAAAAAMAAAAAAAAAAAAAAAAAAAMMMAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAMAAAAMAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAA", "AMMAMAMAAAAAAAAAAAAAAAAMAAAAAMAAAAAAAAAAAAAAAMAAM", "AAAAAAAMAAAAAAAAAAMAAAAAAAAAAMMAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAMAAAAAMAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAAAMAA", "AAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAMAAAAAAAAAMAAAAAA", "MAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAMAAAAAAAAAAAAAAAA", "AAAAAAMAMAAAAAAAAAMAAAAAAAAAAAAAAAAMAAAMAAAAMAAAA", "AAAAAAAAAAMMAAAAMAAAAAAAAAAAAAAAAAMAAAAMAAAAAAAMA", "AAAAAAMAAAAMAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAMAAAAAA", "AAAAAAAAAAAAAMAAAMAMAAAAAMAMAAAAAAAAAAAAAAAAMAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAMAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAAAAMAAAMAAAAAAMAAAAAMAAMAAAAAAAMAMAAA", "AAAAAAAAAAAAAAAMMAAAAAAAAAMAAAMAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAMAAAAAMAAAAAAAA", "AAAMAAAAAAAAAAAAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAA", "AAAAAMAAAAAMAAAAMMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AMAAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAMAAAAAAAAAMAAAAAAAAAAAAAAAAMAAAAAMAAAA", "AAMAAAAMAAAAAMAAAAAMAAAAAAAAAAAAAAAAAAAAMAAAAAAAA", "AAAAAMAMAMMAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAMA", "AMAMAAAAAAMAAMAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAAAAAA", "AAAAMAAAAAAAMMAAAAAAAAAMAAAAAAMAAAAAMAAAMAAMAAAAA", "AAAAAMAAAMAAMMAAAAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAMAAAAMMAAMAMAAAAAAAMAAAAAAAMAAAAAA", "AAAAAAAAAAAAAMAAAAAAAMAMAAAAAAMAMAAAAAAAAAAAAAAAA", "AAAAAMAAAAAAAMAAAMAAAAAAMAAAAAAAAAAAMAAAMAAMAAAAA", "AAAAAAAAAMAAAAAMMAAAAMAAAAAAAAAAAAMAAAAAAAAAAAMAA", "AAAMAAAAAAAAAAAAAAMAAAAAAAAAAMAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAMAAAMMAAAAAMAAAAM", "AAAAAAAAAAAAAAAAMMAAAAAMMAAAAAAAAAAAMMAAAAAAMAAAA", "AAAAAAAAAAMMAAAAAAAAAAAAAAAAAMAAMAAAAAAMAAAAMAAAA", "AAAAAAMAAMAAAAAMAAMAMMMAMAAAAMAAAAAAMAAAAAAMAMAAA", "AAAAAAAAAAMAAAAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAAAAAA", "AAAAAMAAAAAAAAAAMAMAAAMAMAAAAAAAAAAAAAMAAAAAAAAAA", "AAMAAAAAMAAAAAAAAAAAAAAAAAAAMAAAAAAAMAAAAAAAAAAAA", "MAAAAAAAAAAAAAAAAAMAAAAAAMAMAAMAAMMMAAAMMMAAMAAAM", "AAAAMAAAAAMAAAMAAAMAAAAAMAAAMAAAAAAAAAAAAMAAAAAAA", "MAMAMAAAAAAAAAAAAAAAAAAMAAAAAAAAAAAAAAAAAAMMAAAAM", "AAAAAAAAAAAMAAAAAAAAMMMMAMAAAAMAAAAAAAAAAMAAAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAMAAAAAAAMAAAAAAAAAAAAA", "AAAAAAAAAMAAAAAAAAAAMAAAMAMAAAAAMAAAAAAMAAAAAAAMA", "AAAAAMAAAMAAAMAAAAAAAAAAMAAAAAMAAAAAAAMAAAAAAAAMA", "AAMAAAAAAAAAAMAAMAAAAAAMAAAAAAAAAAAAMMAAAAAAAAAAA"};
    int K = 29;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> table = {"MAAMAAAAMAAAMAAAAMAAAAAAAAMAAAAMAAAAAAAAAAAAAAAMM", "AAAAAMAMAAAAMAAAAAMAAAAAAAAAAAAAAAAMAAAAMAAAAMAMA", "MAAAAAMAMAAAAAAAAAAAMAAMAAAAAAAAAAAMAAMAAMMAAMAMA", "AAMAMAAAAAMMAMAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAMMMA", "AAAAAAAAAMAMAAMAAAAMAAAMMAAAAAAMAAAAMMMMAMAAAAAAM", "AMAAAAAAAMAAAAAAMAAAAAAAAAAAMAAAMAAAAAAMAAAAMAMAM", "AAAMMAAAAAAMAMAAAAAAAAAAAAAAMAAAMAAAAAAAAMAAAAAAM", "AAAAAAAAMMMAAMAMAAAAMAAMAAAAAAAMAAMAAMAAAAAAAAAAA", "AAAAAAMAMAAAAMAMAAMMMAMAAAMAAAAMAMAMMAAAAAAAAMAAA", "AAAAAAAAAMAAAMMAAMAMAAAAAMMAAAAMAMAMAAAAAAMMAAAMM", "MAMMAAMMAMMAAAAAAMAMAMMAMAMMAMAMAAAAMAMMMAAMMAMAA", "MAMAAMAAAMMAAAAAAAMMAAAAAAAAAMAAAAMAAAAMAAMAAMAMM", "AAAAAMAAAAAAAAAAAMAAAAMAAMAAAAAAAAAMAAAAAMAMAMAAA", "AMAAAMMAAAAAAAAAAAAAMAAAAAAMAAAAAMMAAAAAAMAMAAAAM", "AAAMMMMAAAMAAAAAAAAAMAAAAAAAAAAAAAAAAMAAAMAAAAMAA", "AAMAMAAAAAMAAAMMMAAMAMAAAAAAAMAMMAAAMAAAAAAMAAMMM", "AAAAAAMAAAAAAAAAAAAAAMAAAAMAAMAMAAAMAAAAAAAAAMAAA", "AMMAAAAAAMAAAMMAMAAAAAMAMAAAAMAAAMAAMAMAAAAAMAAAA", "AMMAAAAAMAMAMMAAAAAMAAAAAMMAMMAAAAAAMAAAMAAMAAAMA", "MAAAMMAAMAMAAMMMAMAMAAAMMAAAAAAAMAAAMMAAAMMAAAAAA", "AAAAAMAMMMAMAAAAAAAMMAAAAAMMAMAAAMAMAAAAAAAAMMMAM", "MMMAMAAAAAMMAAAAAMAMMAAAAAAAAMAMMAAAAMAMMAAAAAAMA", "AAMAAAAMAAAAAAMAAAAAMAAMAAAAAAAAMAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAMAAAAAMAAAMAAAMAMAAAAAAAMAAAAAAA", "AAAAAAAMAAAAAAMAAMMMAAMAMAMAAAAAAMMAAMAAAAAAMAMAA", "MMAAMAAMAMAAAAAAMMMAAAAAAMMAAAAAAMAMAAAMAAAAAMAAA", "MAAAMMAAAAMAMAAAMAAAAMAAMMAMAAAAAAMAAAAMAAAAMAAAA", "AMAAAAMMMAAMAAAAAAMMAAMAAAMAAAAAAAAAAAAMAAAAAAMAA", "AAAMAAAAAAAAMAAAAMMAAAAAMAAMAMAAMAMAAAAAMMAMMAMMA", "AMAAAAAAAAAAMAMAAMMAAAAAMAAAAAAAAAAAAAAAMMAAAAAAA", "AAAMMAAAAAAMMMAMMMMAAAAAAAAAAMAMAAMMAMAAAMMAAAAAM", "MAAAAMAAAMAAAAAAAAMAAMAAAAMAMMAAAAMMAAAAMAAAMMAAA", "AAAAAAMAAMAAMAAAAAAAAMAAAAAAMAAMMAMMAAAAAAAAAMAAA", "MMAAAAAAAAMMMAMMAAAAAAAAAAAAAAAAAMMAAAAAMAAAAMMAA", "AAAAAAAMAMAAMAMAAAAAAAMAAAAAAAAAAAAAAMMAAMAAAAAAA", "AAAAAAAAAAAAMMAAAMAAAAAAAAAMAAMAAMMAAAAAAAAAAAAAM", "MAAAAMAAAAAMAAAAAAAMMAAMAAMAAMAAAAMAMAAAAAMAAAAAA", "AAMAAAAMAAAAAAAAAAAAMAMAAMAAMMAAAAMAMAAAMAMAAAAAM", "AAMAMMAMAAAMAAAMAAAAAAAAAMAMMAMAAAAMAAMAAAAAAAMAA", "AAAMMAMMAAAMAAAAMAAMAAAAAMAAMMAAAMAAMAAMAAAAAMAMA", "AAAAAMMAMAAMAAMAAAMAMAAAAAMAAAAAAAAAAMAAAMAAMAAAA", "AAAMMAAAAAAAAAAAMMMAAAAAAAMAAAMMAAMAAAAMMAAAAAAAM", "AAAAAAAMAAAAAAMAMAAAAAAAAAAAAAAAAAAAMAAAAAMMAMAAA", "AAAAAMMAAAAMAMAAMAMAAMAAAAAMAMAAAAAAAAAAAAAAAAAAM", "MMMAAAAMAMAAAMMMMAMAMMMMAAAAMAAMAAAAMMAAAAAAAMAMA", "AAAAAAMAMAAAAAAAAAAAAAMAMAAAAAAAMAAAAAAAAAAAAAMAA", "AAAMAAAMAAAAAAAAMMMAAAAAAAAAAAAMAAMMAAMAAMAAAAAAA", "AAAAAMMAAMAAMAAMMAAAAMAAMMAAAAAMMMAMAAAAMAAAAAAAA", "AMMAAMAAAAAAAAMAAAMAMAAAAAAAAAMMAAAMMMAAMAAAMAAAA"};
    int K = 14;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 50;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2500;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 4900;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> table = {"AAM", "MAM", "AAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> table = {"AAA", "AAM", "AAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> table = {"AAM", "MAM", "AAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> table = {"AAA", "AAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> table = {"AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAA", "AAAAAMAAAAA"};
    int K = 5;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> table = {"AAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> table = {"A"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> table = {"AAAAAAAA", "AAMAAAAA", "AAAAMAMM"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> table = {"AA", "AA", "AA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> table = {"MA", "AA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> table = {"AAMMAAAMA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> table = {"AAA", "AAM", "AAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> table = {"AAAA"};
    int K = 3;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
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
    vector<string> table = {"AAA", "AMA", "AAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> table = {"AAAMAAAMAA", "AAAMAAAMAA", "AAAMAAAMAA", "MMMAMMMAMM", "AAAMAAAMAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> table = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int K = 1;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> table = {"AAA", "MMM", "MMM"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> table = {"AAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> table = {"AAMAA"};
    int K = 2;
    AmoebaDivTwo* pObj = new AmoebaDivTwo();
    clock_t start = clock();
    int result = pObj->count(table, K);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22909233&rd=14422&pm=11178
********************************************************************************
#include <iostream> 
#include <vector> 
#include <string> 
#include <cstdlib> 
#include <cstdio> 
#include <algorithm> 
#include <map> 
#include <set> 
using namespace std; 
 
int isok(int x,int y,int r,int c,int k,vector<string> table) { 
    int ans = 0, tc = 0; 
    // r 
    for (int i = y; i < c && tc < k; ++i) { 
        if ( table[x][i] == 'A' ) tc++; 
        else break; 
    } 
    if ( tc == k ) ans++; 
    tc = 0; 
    for (int i = x; i < r && tc < k; ++i) { 
        if ( table[i][y] == 'A' ) tc++; 
        else break; 
    } 
    if ( tc == k ) ans++; 
    return ans; 
} 
 
class AmoebaDivTwo { 
    public : 
    int count(vector <string> table, int K) { 
        int ans = 0; 
        int r = table.size(); int c = table[0].size(); 
        if ( K == 1 ) { 
          for (int i = 0; i < r; ++i) 
            for (int j = 0; j < c; ++j) if ( table[i][j] == 'A' ) ans++; 
          return ans; 
        } 
        for (int i = 0; i < r; ++i) { 
            for (int j = 0; j < c; ++j) if ( table[i][j] == 'A' ) { 
                ans += isok(i,j,r,c,K,table); 
            } 
        } 
        return ans; 
    } 
};

********************************************************************************
*******************************************************************************/