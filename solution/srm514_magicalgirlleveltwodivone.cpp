/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11482
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

class MagicalGirlLevelTwoDivOne {
public:
    int theCount(vector<string> palette, int n, int m);
};

int MagicalGirlLevelTwoDivOne::theCount(vector<string> palette, int n, int m) {
    int ret;
    return ret;
}


int test0() {
    vector<string> palette = {"12", "2."};
    int n = 2;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> palette = {"21", "1."};
    int n = 2;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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
    vector<string> palette = {"...", "...", "..."};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1953125;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> palette = {"..58..", "..47.."};
    int n = 2;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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
    vector<string> palette = {"...1.2.3", "4.5.6...", "...7.8.9", "1.2.3..."};
    int n = 4;
    int m = 4;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 886073030;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> palette = {"....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 240076532;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> palette = {"."};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> palette = {"3"};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> palette = {"11", "99"};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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
    vector<string> palette = {"11", "99"};
    int n = 2;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> palette = {"12", "89"};
    int n = 2;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> palette = {".................................................."};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 876125953;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> palette = {".................................................."};
    int n = 1;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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
    vector<string> palette = {"...", "...", "..."};
    int n = 3;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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
    vector<string> palette = {".....", ".....", "....."};
    int n = 3;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 538377334;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> palette = {"123", "...", "..."};
    int n = 2;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 8000;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> palette = {"...85", "...49", "...17", "45621", "85269"};
    int n = 3;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 800000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> palette = {"...85", "...49", "...17", "45621", "54213"};
    int n = 3;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> palette = {".................................................."};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 876125953;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> palette = {".............7......7...7399.5.....1......5.5....."};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 697814725;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> palette = {"..9.1.11..5...131.3.7...9................557.5..7."};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 836844666;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> palette = {"..59.511379.3.79.77.9117.5.33393..995.1.9..9.33..5"};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 697238927;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> palette = {"75117751773511593595191359537355317557195137937739"};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................7..............................", "..................................................", "..................................9...............", "..................................................", "..................................................", "..................................................", ".............................................4....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................................4...........", ".................................6................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............9.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........4........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 836780540;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "1.............................................3...", "..................................................", "..................................................", ".............................................5....", "..................................................", "..................................................", "..................................................", "6.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 34922383;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "......4...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................3.....................", "..................................................", "..................................................", "..................................................", "......................3...........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 536730499;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................................4...........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........4.........................................", "..................................................", ".....9............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 151481691;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................................1.......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............5....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 128761152;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................5.............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........................................6......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 590129754;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", ".....................4............................", "..................................................", "....3.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................................5............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 536730499;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> palette = {"..................................................", "........4.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................3...........2.......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................1................", ".........................................4........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................................8.....", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 892758960;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................8............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 659183384;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................9.........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............3..................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................9............................", "..................................................", "........................4.........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 458987283;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................3..........................", "................8.................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................................5........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 583328361;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................3.......................", "..................................................", "..................................................", ".................................4................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 590129754;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................................1.......", "..................................................", "................................2.................", "......................................1...........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "2.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 277144960;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> palette = {"....................................5.............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....4.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................8.", "..................................................", "..............3...................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 277144960;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................3....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......4...........................................", "....2.............................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 226619320;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................8...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................................7..........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 590129754;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................................2.............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 659183384;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................8............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................................8............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................3.........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....4.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 750711028;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> palette = {".......................8..........................", "................................2.................", "..................................................", "..............................9...................", "..................................................", "....6.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................................5.......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................1.", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................8...................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 316732289;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................7..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 4324755;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> palette = {"..................................................", "....................8.............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....2............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "1.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..4...............................................", ".........5........................................", "..................................................", ".............8....................................", "........................6.8.......................", "..................................................", "...........5......................................", "..................................................", ".....5...............3............................", "..................................................", "..................................................", "..................................................", ".........................3........................", "...........................9......................"};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 558141362;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> palette = {"..8...............................................", "2..............2..................................", "......6...........................................", "..................................................", ".......................................1..........", "..................................................", "..................................................", "..................................................", "..................................................", "........................................6.....2...", "..................................................", ".......................9..........................", "..................................................", "..................................................", "............1.....................................", ".................................................8", "..............1...................................", "...........................4.....................3", "..................................................", "..................................................", "............8.....................................", "6.................................................", "..................................................", "..................................................", ".................................7................", "................................9.................", "..................................................", ".......................................3..........", "..8...............................................", "...........7..................................8...", ".........................................2........", "....................................3.............", "..................................................", "........7.........................................", "......2..........1................................", "...................................9.............8", "..................................................", "..........9.......................................", "..................................................", ".....................3............................", "........................6.........................", "......................................4...........", ".........4........................................", "..................................................", "..................................................", "......................................4...........", ".......6..........................................", "..................................................", "....................4.............................", "..........................2......................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 966783225;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> palette = {"................................8.................", ".....9........................1...................", "....4..............3.....8..6........8............", "..................................................", "..........32.............1.........3.1.......11...", "......6.....2.3...............7...................", "......4...........................................", "...4....................4..6......................", "..2...........2....................8..............", "..............4.........4............4......6..6..", "....9...................1.........................", "...................1........23....................", ".....................2.......................4.8..", ".......4..............5.................5.........", "..5................2..............................", "..............5..............6.2..................", ".....1.........7...........................9....6.", "....6................................6..34....7...", "...4......................................4..8....", "...........................................5......", "....................3......2.............4........", "................3................2......1.........", "..................................................", ".........6..5...............5...................3.", "..........................7.3...................3.", "...................2..............................", "7.............................9...5...........6...", ".8........................................7.......", ".3................1.................2..6..........", "......94..7.......................................", ".8..198....6......................................", "..................................................", "...........6......................................", ".............9..........6..........5..........1...", "...................2...............5..............", ".4......................3.......8.......5.........", "..3..............5..............................4.", "..................................................", "7......................8..........................", "........6..........57....8...............8........", ".....................................8...4..1..4..", "..................................................", ".....................6............................", "....................1.................7...........", "..................................................", "........6....................6....................", "..................................................", ".......................................4.8.....8..", "...........................8...............2......", "......3................7.........................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 353298596;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> palette = {".....6...6...21..9..49...6............3.6..2.64...", "2...................2.88.2..8.4...................", "7........2.864.2..2......24..8.6....2.8..6....4...", "......8....5.........3..............2.......33..6.", "...7...8.....3...4.........68....55....8....1....4", "...........3..43..5.......7..........7.7...6.....3", "..........3.7.4.2..29....68.............18...6...2", "...........7.....71.....6.........8..7.8....25....", ".9.4.2.6...54.4.8.3.....4..........4..7.....8...51", ".3.........17.......7.....9...5..7.7.....79.17....", ".9.....7...718.......77.......2..61.........5..5..", ".3.2.........2.2......88...1....6....3...744..19..", ".......9.........18.......6.....6......6..6.......", "...73.43....3.3...........8..8..........3.........", ".......42..8.....284...........6........9.271..6..", ".......1.3..466.....9...81.5.......7.3..19.6......", "1.....267.......2......2.64.7..2.8..8.5.18.....2..", "9.5.....3....8..3.5...........1...4.......3.63....", "......4.3..1...........42..61....8..............3.", "5.5..........175...1......9.......77....11........", "..............9.4........2..........2....1.8....3.", ".....................1.8....24........2........9..", ".......7.......2....7......7......7............7..", "5.1.........7....5....3.57.3.23......1.......9..8.", ".....7.................7.............684..........", "7...4....7....4.......6..9...........35.........9.", "...........8...2....5...8.....98.......6........5.", "95...73...1..8....961..4...........9.9.....8...9..", "........9......4.2..6........1.....4....6......2.1", "....5.......7.....8.7....77.....3.....6...1..9....", "6......9..6.1.3...78.3.2..........3.....2.....6.52", ".14......2........48.....6...6....2..56...4.4.1..6", ".6...8.....2.4...38.5....4...6..827..58..........8", "..3......................3.7..5.....61...........4", ".4...7.............6....5..4.2...13.3.86..8..7....", "13.....7...9......9..9......971..48.31...3.......3", "........5...5..................21......6.....4.87.", ".......3.....6...........7........2.............1.", ".............8.8.8........46.......48...2........1", "....3..5.9............5...5.2.....55.......7.3....", ".....6..1649....4114...........3...62..8.1........", "..22........................2...6....1.......8....", ".........4.........2....9.....5...9.2.........2..4", ".......1.2.......9....3...............26..........", "...3..1.2.................3.2..6..5....8..........", ".....1.........97.5..9.8.37.........33...3....15..", "1.74....52.......6....9....2..7....26.7.....22.6.4", ".....1.....75.........7..935...9.....9..9....1....", ".........9..68..2.35.9........8...................", ".3..5.............83....7..34..........5153......."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 633755491;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> palette = {".182363...33667...181.683...721..4.6129.13.2..7.54", "924998...2...5589.945..734.214788.9232...8.594.692", "...7.129...87.376577..553727..6.7.7.......1......1", "47.8..5.7985..9...3.8..8561..121349.5.9983...653..", "..63228.344.2724..346..3.2239.4481..475..6.126.1.4", "875442.17.2..2.8..376...626.99..7...4.13.5...44591", ".87.736.7472773.4.3..875318.5..271.9.11..2.59169.4", "...5..4..7618..8.44.27216.6.89..8.2882.7.1..6..465", ".673971874163.5.3.343..3939...52..3...5...9...9...", "....949.17116....49..38..2.437.9.914...17.6332..5.", "3.4.9...9.9....8.438....1856..75....1..27..654..36", "9..558.812966798..38586.7.9..474..3.549...89...2..", "669..9.11...9379....8235.7.9.126113383.92..7..4.7.", "..3..89.19..9...1.716..29..3.341..1..175615836..37", ".26...239284418289..2.47...1...8..84.35.888.....74", "....88.1..41..8467....56.2..9....846851.8...48.9.9", "1.7.9..9.2.4957145.85.593.67.47..11983..747.1.4134", "..274.2.2.4969.6..2.6.898.6.43...3......6.492824.7", "981.39.418.219..1..6929.7..61.58.533345.....1.72.8", "15.73..6..376.949451..89767.5717.1.2.8975..9.83..1", ".7.23..876936692...........2..1.88.216923786.2....", "..893..618946.3.5414.883..3874564.18.8...263.8.23.", "..5....1..281..5859..83..9..5..6173.459.68.3.16..5", "499..4..1..7...857...57.5.19.96....8337.8.747.17..", "4........8.243.4...8....4.43..28.36.41.824..64.3..", "2.1.866.7..3.484255.431.42.5.5271..48.798..6..2593", "..91..8.9..4.5..41.6.255.36.1.589..9.57.125..9....", "85...42.6.658.4424.54..14.6229.76..8668.6.45..2...", "3....3.49.9.351..87676.51716.8.871139.725.13.53...", ".321187....7435878.3194978.47.91.5123...11...4....", ".3.....29.5..256..961..41..8.61..892.6747....65.38", "9827.692521.23..5618.84.1218....613..452922.34..36", "4475...3..6.591.673.66.5178.93.4....6.5.64.3.96..7", "8.72......6.9.16.31...9.965.3347.67..9392.181.5.7.", ".2.7.2.57844.9.6.9...6..86.316.2...2....6623242..6", "..3.44..7343.8..8579....8....9219..4...789..446739", ".25..521.87..75...58.61.3..13.5....16.5.1.7.79....", "6.4..4.88.6.6.688.67.3..4.4.63..8988684..123..8.6.", "3..13.363.18..5.9...1..1.59.14.....974.4.63.9...56", "1.41.6569155....36.....3..3...7941..9.7.5.671.....", "5.6636.87..5.638.23..96.7.5.1...2...54..978.529472", "5..1..58767..3523...326.5672..926.7..2.2.....634.6", "6419..475.2.7.79.71184.3..457786191.21.9.6.351..75", "..94.21.154356745.9967....13..45..3....1..3..65377", "8485.645.2.4.122..7.2.8364.3.42.4.228...86.72227..", ".3.4...373819884...94976..811..9546.4.51..348.89..", "3417.1217.545.51897.98515..3.8585..52.1..6519..332", "29.7...487414..2..6.8.6....84.6.85.28229.1.9...84.", "3653.9981...339.72.4527....4..7.353..85676..19...2", ".58.7.1.775.8.563.......3.98.5114114.251....7.78.."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 334808402;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> palette = {"7...8.2.941327.52...53..23445291.987.27......5.8.6", "6.7..792.7..55.7186929.7.9..27.737.512...371.5..4.", "1.6.45.2..32..6.9.2..4874.3....2498.3.2756...13849", "886.7.311.82.4917116444.15....2.84.359368.8.1.7314", ".464.9..27.46899.4.1..2....865.4.2114....864778..9", "32.1..87.3..17...3....536.255.9.9.65.31.5495876.39", "5.2.28..1.1228.6...8.2.888.7..548.8...78..28.64..8", "784.1.3.8..6.8.63.4..2421..8.6...67....85.685.98.6", ".21.84.3.87.3..22382161.64.7.87.92426..676...627.6", "35.1..79575.255.71311.6.3..515.325...95.9127193373", ".5258164.6..25834.78712.276..691652.86..1.8.27.61.", ".9337..68..311335...2399....2.41717734.3.3.3.93.4.", "9..7..7.273.258.5847.4696772.5.625299.2.3643..7..9", "86.43.795688..55791..6867.319662...557766886...9.2", "48867926...2249.46.52.8.35..692228776..94882.14...", "......6.....9761..51..59.....9.2556729.51.1.87...5", "..828.8.7.5224.249.8.2.4...718.44.2663...8286.615.", ".46.76.4269..812..265.2..456.63..8127486..6474...4", "...44285.41256.4274.3..286658476.44..18.349.4887.8", "...7.15...73.3.3.1...965....53996373.5717....933.9", "3...652472.183878..495456524.8.1.7.36.7.13..8...76", "67..95126767.5..54.9.73..5.6..89391.54...55131.4.1", "12.98.1.491.83813.2.32..49386.9..7.1.88378......63", "6.225579964626....7.22.4..5....82....1.62.86.59352", "...25..68.2.845.64.324825582.12..2.3.4.5664.15.827", "54.5..65759.13...1.3.4....45195273...7793675634.55", "588.48431.3.6442.1529..822..9.96..8..9127..682..7.", "786....6687...18.8.49...747466.46......8.24.16.86.", "3678.....676..48832872.444654454748883261438..6.88", ".54.59...3.16.9..5..5121....757.4..139137.27.75.5.", "5..56128327...452256..6......21.252....8.925834256", "6.357594.92.9995...763...17681.97.3.766..3.1.97..9", "9.23..964.5.236..4...8..6..8.33.892.76.5.66767128.", "64.4..99.22882537.36.286.9.17.46829.5.38.2829.9..4", "4.481..68942.6..6..166...986854284..8.87.4227..881", ".8352...73..11...19.32356..1....1985.9.1.81.89.13.", "5486.4891..48..443.69448.4.35472....235.5...8..75.", "34.8.6.44.784.92.662.8.65674....44729...9.4.78..22", "...64.4...5.322283.....8.8..6.9272.641281..466..62", "9.89179117938957.7..336.9.7.797.2.1....1...313559.", "95238.8276.5.1.5.6.4954925.6585.65.32.145..78..258", "67.979..452313..1...67.59.92412.7.59.8..4.1715.249", "9..7.7766..8.38...255.43.73247.2.747.8..1.45..926.", "46..1....646.4.137748824333752....73..9..6.47.9...", "44683186..4886.3.223648...4.2.26.8.5442..2261..267", "58.16989..9.75..45...6.323......15.9255..67.83.533", ".2864.4....6..2..3367264.8.17896...8.39.32628.2914", "38..1.3442.284.6948.5.8..2.6623..2..3662..4..2.4.8", "18..86..46.2.4442586...82..5..5494.6.3867.9...8..8", "33.3.3..9.31.3757.1.338.7.3...1961.1..5.9169113.77"};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 193560694;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> palette = {"23863384626786778426272271242227443542824928734826", "97696181315767654755916561891311218981577323674177", "15647436183142163216196816167675685876181364345874", "18448449323646224134124244459438264627947422228712", "66873692972263323833266996723788295878194641347877", "35589678959516547497759836723379323454193578141475", "44645966766228396674624677421422287786366284574858", "46599739492811197747285355912564317753296855131343", "88784658162256623476825862343264742698746498821654", "15881964817362572221354431668953449524297764316663", "83625742842782118668432611822227483722262182754246", "33258327311127894779556323411739698783937569816175", "35283672961546947812352216727271623896769364563698", "54644663527868642136562622433876626225385224628176", "48895232156823969675462754369924435472916869161291", "57321632911318561611911614369193327494337932527677", "86443186946886936474628631883486681786588624594814", "22753977698439939389423533352542139959894859711981", "48342876564672263816685486523248948414762434281858", "35449522835328116281554899268535487746297122596447", "83483568826166196888636495682661421188862784738248", "91832947793149258339396741479791496723171329856733", "35283252383186523834918672589657425854123328789616", "32244623765448642558546862837452862627349664468396", "86271692174485585699462356361124291658998841541879", "37927238511978967495759258329955369852397794785631", "86461348962828932234246871223286683766922828972816", "66173735458237555543443919932768551315478295391163", "68166614528274469414281246381644944836124216621816", "91661724855566196641376891622951265964237922978661", "27689948446126512262274613286865843322622386138682", "31838321793187674539172187291797616329955947212137", "71223836569148141454578436961853463454161748381632", "38442621121424488132782466297832462643969268886776", "48637612316825367693266936981122639472718885987217", "19729674917392783417319298743771165436913972985471", "68487126726286938216866291847222283562946688354256", "82197915212693197789847111352722139939238433739387", "62946256946272425698247466527628766256168894869878", "93645364815726738245578835822713847328873128554223", "63441524226964556422692237244629663964426164156228", "13638165715323616531916565817991818725939727232337", "31681214183326321634192458121651869652125368787618", "94662225569248882316762286415892622881143628646372", "84691494594823323277448936321324875472572641183833", "59945898731318589631119876349733121878331974545219", "42825926748442352418844251687262429964182244594872", "86335139456237713587863777576166551711874213511127", "48566632148498885238627464525688544892348618267238", "91427148299324592867396673822393281366677142938281"};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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
    vector<string> palette = {"844.4........", ".8..3.8.8...5", ".......8.....", "42...23....51", "98.2...4.....", "....54....72.", "83.....6.6.1.", "4266.........", ".4.95...63...", "7......411.77", "6.934...62...", ".8....26.562.", ".5....2...385", ".5.9.96....7.", "....2.3...2..", "....7....5...", "1.....9.9..5.", "8...48.8.....", "144...48...2."};
    int n = 7;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 526882235;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> palette = {"8...4........", "..1....4...95", ".............", "............8", ".........3...", ".6...........", "....363.28...", "4..3.........", "...5........9", "...5.2.......", "1......9..9..", ".........5..8", ".8...........", "..........5.1", "24...4..1.2..", "8...8.......1", "2..3.........", "..2..28.77...", "5........7..."};
    int n = 7;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 582597728;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> palette = {"4.68811.1..84", "..83..4285.8.", "6.26..35.2.2.", "2.273.26..52.", "..7...42.3.3.", ".374..2.7.196", "18.1669.13..5", "41.6259.5.584", "92416.4.2.823", ".1827295..728", "8...3..8.636.", "5738488.83.16", "2.583.4.1655.", "18..28.6.9.5.", "8..8.591329.2", ".44.63.629429", "8..2927.52962", "..63332834143", ".3346.4....38"};
    int n = 7;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 266129460;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> palette = {"3.28......7.687...8..5.6173.821.....5...93..75.8.8", "44.34.6953.4..2...132...8.8..34.5.8..99..6.......9", "....3.3..4..84.9124..14...5..897.659.6685.8...7.62", ".2....8.7...1.4..5......686.396....6......398....5", "...6.39.44..4.1558....24.91......4..54..5.6..75.6.", ".2..8..37...35642....45...8....6.1.82...4..38..39.", ".7...7.8..3..85...2..5.6..72...9.....2.4....513...", "2.59.2.3...21528.5.1487....57.6..9.24.7.......4...", "7.6811...4.1...1.6445..6.1.24.536.9..62.392.1..4.6", "2...6..5.164138.....6...4..7..8...8261.92..366.3..", ".5...53...1384733.629....35.66.9....5...9.2..1..86", "24.98.........8.83.7.69386.395.231.2.........6..77", "5..41...6.17........5.249..286.3.6....68....55.62.", "...926.9..62...4....2.51...99.2.79.4.9974..54..5.3", "....9.3..6..8..3...21..239..86.982.53..6........4.", ".8...4..97..5.64.9..82.34.2..3.....8651..6378...33", "5.26.5...2..4..7.84...6.....8...82....6.5.6.93..8.", "...9..4..5..7...25.38...6...794...4..9..46.....791", ".968.19.285...7.1662914.....867.6.391.26.....9.6..", "..1.84.9..48....87...21...4.....3.2.8..9.23..8..19", "7..255..243....7.24..948.1...83...1.7...7..25.5.86", "..1.2....1.4...2.97...........8..7.8......1.4.89.1", "9.8.3.1..4..24.5...6....1..8..1...5.1..45..87516..", "4......97......66...6........766....2.9..4...8..95", "1.4857......8.7..8.6.1..53..8..528....6235......82", "467..46..74...8..95..25766.9.1..5.8.2.736...6..9..", "..4.1...4...2.....42.7.4.712647.....92.6.5.459..4.", ".....8..7724..8623....1....1716...4.631....984...5", "792..31......6.7.....1.8..98.....653.2..7.24355.8.", "84372241.36...6...51.....2....8......5..4.11.2.755", "..8...5.8.3.6..5.24..9..77...295.8..98.8...65...6.", "...3.....382...8.75.....8....9.2..4....7..77..2..7", "..84....42....3.3...394.....6.5.647.52.457.25....2", "88......1..4...84..1.......3..8.93...7..6..9..895.", "114.15..6...6.9.182.....3.3....78..9...2.962..9...", "48.3...9.3.49.2...........43.....1.44...483...2533", ".1..555.68.....97.8.9....5.2..1.2...7.8.7....3..64", "..5.8.......71.4...5.8...4.3...8.5.2...32....287.5", "........2..9..3.92.8.968...8.6.9..1.78.453.......6", "483.............8...6.134687.1.23.88......55.2..7.", ".7...9..6...2..11.6.1.....7..4...4..126.7.2..79426", "4....8....4295...3..8.5.6.4..38.....8...88.3.2.3..", ".5867..688.72..718.8.5....58..........28.7..17..66", ".4....417...796...13.21..44..........3.7..7..825..", "...2..9...354..95.6...8.5........8.3.........1362.", "...948...5.....6.....6.5....9...11..65..82.748...9", ".3..55.2........9.28152.35......86....26...2..38..", "..57...1..445..2......91.8.....69.6....36.1.....37", ".......8.....4..7...5.6.331...51.69.....5....7.6..", "..11826.7.2..9.8675....7.28.91...38.27....75.....7"};
    int n = 2;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 10940317;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> palette = {"...5.......3.........9....2............1.....3.9..", "........524..................2.4..8.....8.........", ".......................76.........444..6...2..9...", "..............6.......6...........5...............", ".....8..9....8......6..........6..6.6.4...........", ".......4..9.27..........6....28.5........34....8..", ".6..84..................5.........7.....8.....6...", "...4................2...6...............2.....4...", "8.............3.......................8.........6.", "....4......7......3...4......3.....61.....9.......", "..4...2....6......6...8.............64.......6....", "4.....2.2..4...44..........2.....6......7.4.4.....", "....2.5...................6..1.4........2......7..", "..28.6...4.8.............8.6.....8........24.8..8.", "..2..9.......7..4........2...........9......2.....", "...5........5.......93...5........7.....4....32...", "......6....2.......4........8.............2.9.....", "..4..................8...8....8........4..........", "7....................5..5.......6.....91.......3..", "......................2..8......4...684......2....", "......6.6....................................2....", "................18.....4......3...............8.1.", ".........6..8......8.........22...27......44.....6", "..............3...2..2......18.1.6.............26.", "........4..................5...2..9......6.3......", ".6....8.....666.........8................8.6......", "..86..2.........4......3.4..........8......4...44.", "...3.....5.....................6.1........9.27...4", "......2.7.........2...2..4.4...6.........4..9.....", ".........2......6.............4..............2....", "............9.....52.....9........1....56........6", "..6.............6................................8", ".....9.4.8..6....4................................", ".6...6...........8..........2...2...7....2.9.74...", "6.........................1.42.........64.......4.", "......6424.............7..6.3..........2.......4.7", "..............2......9....4.8..8.7..............7.", "......2.......4.6..................9...4......4...", "......2....2....4...........5..1..6..1.....6....4.", ".........9..78....9..9...........9.........5...1..", "62.8.88.3...6...............................5.....", "..2............8..67...............2.....9........", ".....451.....4...89...6.......9......6............", "2..6...472...268....6..........2....8.2....8.88.6.", ".........4...9........71.....28..........7........", ".6..62......3...9.1....4.....5......1.............", ".....6..........................4.....4....6......", ".......4..9..1..6...6.5...6......66...............", ".6......4........27..............................4", "8..4.........24.......8....2.2..4...8....8...22..."};
    int n = 3;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 393995880;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> palette = {"632...3.244.2471.52..74.......4...3791..4.4.33.", "6....5........8...6..23...81...4918...4..4...5.", "......3..287.6....3.2.94.8.25.41.61.....65..9..", "815...73.82.57....4....52.55.4...1.....8...128.", ".42.28....2.696...46428982.36.4469.6...8.22.62.", "..4.1...443..25..3....487..5.218.23.57...4..5..", "...49..5.441.8........22195.66..22.573..8.829.3", "2..3.1..89.6...1.121..7...8.......6...452.3.45.", "...69.3...81...452..6........865329..27265..34.", ".3..28.148.......928411.281..8.717269.6........", ".8...83.684.6.88554..4...8.76..2.924.....64.6.1", ".42.55...492......6...8.7553..3.229575..3.66.33", ".9.6..3....34871..64296..3.946.74...59.4..86...", "......2.2....9....4...33.3..2.26956..985...9.16", "6........2.1.8.65..4.3...2.....7.4..32.2635....", "..3362.5..4...42.3...7.342..4.4......164233.2.3", "8.4...37.444...6976.8.8.62.92.........2.2.2....", "..6.1...6658..55312.5288.1........31.3..7...3.3", "...4.917.2...4....86........2....659.9..47.6.15", "...161.....893.5..29.6.9..6...2.3..72587....81.", "8.3...5438....161..86..6.69.54815..4...6..5.56.", "....2...2..13582.928...3.695..2.....9968...5..3", ".......322..83..594.8.2...732.4.2.......8..9.8.", "9..8..77..7....3...2.2421.3...9....91..2..4.1..", ".74.1...8.65...5..8..128.37.6.4.4.1.1..4.9..157", "4.5.23.....8.92.21.1..5....96346.....3.1.......", "63.49.3..6....16783.....5.9..68.7.......8..498.", "6.7.261.48.5.9.8.......38...8.659.....26.9...6.", "68.964.3..424.8..92.86..4.....2.4.62.146....4..", "7..2..39287..87..9.2.4.8..3168....9..3.61422..9", "85.87.3.2.4....1532...8..11..4..2.7.3..8.3..739", ".453.32.49...5252.6.8..54.8.6...9541..6.....2..", ".9929...5.477...74764.5.7...1221.6.6.6.8..32.25", "...3.4..6..1..46.5..4..7843..8....249.2......43", "846..259...4.9..7...88..62......87.81.8...21.23", "1...5377.69..6.5...2.26.7.7.425.4637.5....2419.", ".52...5......8..1..........1..8.6........92..5.", "6....529..4....9.56.4455..8.8944...9....861.6..", ".75874.....3.2.2367..5.63...36.1.6..581229.29.1", "83.1.8.18........3...7..64....43....9.28..3....", "2.41..1.484..9663.6.....22.5.6..214...22.4....."};
    int n = 6;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 752554878;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> palette = {"3.31....5..9.5...3.9...33..", "9.....7751..77.3.9.17.....1", ".1...37...75..993533...197.", "...1..........3..1..3......", ".53..9....7..55..71.....711", "..51...75...........7....3.", ".5.5.3.7.7.93.39..3.....3.1", "573........53..1..9.7....37", ".7...7.353..33....91..9.1..", "9......31.5......77.35.9.3.", "....3...5.7...........3..7.", ".....7......5.5319..31...3.", "5..9............91...9.9.9.", "3..5......3..1..3.7...1....", "3...1.9.9.1359.9799..7..39.", ".1.73.9.7395.......13.9....", "35.1..7...11......5..1.....", "1..7.9.5.9.75......1.1339..", "...571..3.5539......33...9.", ".........9..7....5.3..7.5.1", "..........3...73.7....97.9.", "....5.33.5........5.99....9", "..13.1..5....9....9....1...", "....9......7.5.......9.....", ".....3...........79..5..1.7", "...7...53......3.3..7.1....", ".....99.9..9..3.1..5.9..1.9", "3....1..1....53....35599...", "...9..5..7.3.3...73.9.3...9", "...9....9.9......35.9.....1", "......5.3......7....9...55.", "....5...13........15..1.9..", "....3....5.59.9..71.1.515..", "753....5.7...119..9..9.....", "..5917..15....7......5.....", "5...............9...9..7.7.", ".7....95.9...9.......3..115", "..9.......1.93.3.75.593...5", ".1..9.....33..997...3.7..55", "...7...9755.7.335..9.......", ".....977..5..1...77.9......", "....75.51.35..3.....3...7..", "..11.....5.....7.1..1...5..", "......3....5.77....759.....", "..9.....7751...3..9........", "...517..59...1711.35.33..7."};
    int n = 9;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 611652511;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> palette = {"..7......19...9.3..5......7.....7..", ".......9.......5.7....5.97.....1...", ".7.7.1......7.7........73.......3.3", "....5......1..1..5.....7..9..1..9.7", "....9....1.3....7..3.....5......3..", "..7..........9......1....3.........", "......5......3......51....3........", ".5..7..71..7..9.79.....51.7.1....3.", ".7.....333....7..3..9...3.3......99", "...7..7.7.3.13...1..9.............1", "1..3..................3.335.7911..7", "...3..1..3..3.3.....3..3...........", ".........57..73.....7.59..151..9...", ".3...9751.....13.....7.............", ".5....71.......7..3..533.51...97...", ".....9.......1.33.....7.1...9.3..3.", "...1.71.5.55....1......5........91.", "........1.5........3..1....9..1..7.", "....3.............9571...3.........", "....5.5..37............7.5....7....", "..3............5.513.5...5.59.....5", "...1.7...93...1....9135..1......9..", "..1...........5..3..........5....75", "..7.7.3...............1........3...", ".1...5..1...19..37.19..........9...", "..3.1.1.1......3...................", ".3.........9..1..........5....3....", ".9..9.1.9..1......77...7...........", ".1..9........5......3........7..7.5", ".3..1.3..13....7..3......7.........", "........7....9.5......7.3.315......", ".5.7.......9..9........5.......33..", ".7....39......9.......37.......5...", "..3.977.51.......931.5....9..9....3", "..7...7..1..........5.7.7.9...5...5"};
    int n = 1;
    int m = 7;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 48935924;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> palette = {"68.1..4744.2.1..81.4.841.24564.843728568", "85..274..1296.25.98.83218...27..8.616..5", ".9982.1...2.9.4.9.6.83964.9.48.....8.288", ".3.87...6365.4795.6.219..15...27.6577941", "95522...84.3.64..7883198....4.3334.2.924", "..3.3.879.797.53635.7.31..85.97.91..491.", "89.35662..8..53842..65173284.3..1172..81", "92354.7.941.574.787..69.66.23.9..98.183.", "..49.63.61.2.3..722572.314.8473....87.4.", "..9.46...2.15.4466...957.288125919..2...", "2.8958.7.6.22.12.1..28.77..52.8...7...4.", "858941..4..72.6.2.89.9...129.387.167614.", "6..682.6.2..3..292684.36..7.428.582676..", "..7..57.2.63.2399..165.63..525617.1.796.", "7558825746.1...819887334.6..84311828172.", "7375....939.35.3437.59.11549.39.17..69.1", "83.936242.2.77.8828..9.9.62.4...5...2..1", "1..9681892387126.8925.3.6..2125.914234..", "5.21.232....85185.831...1...8196...6586.", "..7346225.55192.489.55358.627.59...62.3.", ".467.48786646.9425.88.4..4.14648.59.4768", "89..6.....6747....2.6..92.272183.5296...", ".5988.36..8956.25..4..32861642.19.667.82", "41.6..7.61..741.718.6912.791.76.3693....", "77122.154835.68.9.2.531.86....93.268.786", "1.3.5.257..35...49..1.9.15.193197.5.2.99", "...9.88.2.2..3.2884.....52.48..71152.221", "1..3243.14325.84..3.547..8...63..5..9..8", ".84.52..6356..123.839.87145..5.44.1236.7", "3.558.2....9..468.7..97786.496.797...8.4", "664.9...42....92..266....46..468.596.94.", "4..52..1274985638961.34783..2..1638.4..3", "813.....4..9184276...7...83.46.9.24.9..2", ".75.79..8..554.91..7.134.59.49813.1...43", "...4.8.724..36..71469.364.5.2437.422.34.", "53..392515.59.7541.91399..6.759...93...7", "..5..8.4..813.948.23....126.814...5..62.", "..5122..98.87.869..4.4136..6147.1324.294", "782.58964..8...6.64.5261.2.86912.1.21469", "179348.....5952846981.91.4.6543973.8..36"};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 649810184;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> palette = {"21671.7..1.7.2.72..9.....9..3...6.......6.89.6....", "...2.1.33.2....7.4.211.9...2.371.28...7.3..8.57..8", "1..7..5...7...1..67.7173..1.3.......11..5...33.1..", ".84.3......9.4.22..9925.2...1.964..9.49....95.3...", "...4...193448...51.6644..9.82.....62.8....6..64.5.", ".1..49.151.9.99..3.7..5..7.781.....1..3155.7.55.9.", "818.311.632.1.96.7........61.5..21..95.4...3..9.8.", "..12....1.7.....181...13..98..5...9.3...7.3.98.1..", ".2..6............6...2..3...4.6852.9.2...6.7..6632", "771151.5....7.8.93.77...7..57741...3..2..1.9..29.5", "4.65...1.1..3...4..9....21879...612..6..81..16....", ".8.6..5..622....7..41.559.8...7.5...7.7.1.86...1.8", ".6.....1........3..1....9....5.3..7....77..9.1..9.", "..233.3....5..1...27.8..2...1634..8..4.....31...2.", "95..6.....242.21.786.845..46..4..3..428.1.......7.", ".19..1...3.3.33..5.1.1555.9.4..5.373.77.7...6..51.", "8.6.3.7.87....9...8.9..4..657518.1...53....1751.65", ".2.4.....85..61.1.52....3...587..6.65...7.....135.", "7..1..4..875.82414338....8.1626.76....4.1.7....6.6", "7.7...673955..4..95..9...155.36...9..5.......7.391", "...7.691..6..8..2........729.2.7..6..8376.653.3.4.", "9..6.31........976.471..34...9.7.8..197.3.42..17..", "..9..7.3....3..5.6..33.....7..975..31.5....73....2", ".4...6..2.819...6..5.6....85.8..422..6.44..3...2..", "71...6295.2...69.3...427...28...352..2.....6..25.9", "9.5.6..9.559413.13....39.33..1173.......3..7615999", ".18....48......2636.57..2.853...6....534.....9..87", "3.5.3........419..........1.72.19.....7......6...4", "1899....1.3...4.....466612536...5811...85.....4.1.", "9......51..7...3739...855.1.11.7.73..........3...1", "6.4.........7...8...7.....8..8.3.7......49...2.12.", "..82.137..8..33...4213...8.6.....24...5...4.9..1..", ".69.75579....33.3.......38.3..5..........69.9.....", "..4.5.......3.3..8......8.....72..6.3...2.85.....6", "9948.281.7.6.66..52.8....5..84.5.9.2.6..95..2..991", ".37.6..13...2.553..54....7.727.3.9....91..3...173.", "2.....5..9.15....36......5...1.2.389...827.3937..7", "129.9..1...6.........47..2.4..11.....4.....6...9.6", ".87.4..67...8...38..288.9.11.2.6.....62.561.6444..", ".17.97.....117....31..6.359......9..7.4.79...9...1", ".12........5..........3.21...89.85.5..7..1891....5", "3.62..755...7....2463317728..5...4.8...5.6..1.311.", ".6..3..5.....39.9.55335..8.5.7......37.1....5.5.5.", "...5...242.7...8.....6...267.63...2.98.82.25....44", ".34.8..77.864..39...88...9.6.68.5..2..6..762..2..5", ".5..4....7.3.3.7.7736.....3.43.9.1.1237.1513..5...", ".....9...74.59..2..1...4436.5.76456.......4..3322.", ".6.63..5...41..15.7....33.7..87...16.695...65.3..8", "5.5.4...34......3..1.864.....6.....528...6.38..8..", ".7.3.5.9..35532757...1.9....31.3.9.17......5..2..1"};
    int n = 10;
    int m = 8;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 32426851;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> palette = {".3.....17...1..9511953..373.3...91757....113517.5.", "13.1.733..7395311..5.5195.77.3.931...77..19....17.", ".555..555.999..5.9.5.917.35173.31.75711.....5119.5", "...7553.7.911.15...179.9.5977...997173.3973115.1.1", ".9.7.5..17..373.91155...515.575.1.97131.555.11.1.9", "7559.1933913.1177115..351.5.9777.3..7137...3...3.3", "1.57..9...9915...17979955911759.7...7.7.777755.975", "...13.9.355.71913733..7.7.5179.1.95.377919..9.5599", "5191.3579..7.3735..1.73.9.91.1..7.9.9115.9.377.7.9", "..3173..177.1.3.1.37.353..17...19...5519397..9133.", "3739.9571..3...9.997957.15379.3715..5.93...71..15.", "7.1517..9.1773779.1...135.799179.59..93..771....3.", "1.131..7.571717.59.971.1....13131.73..177.53.....5", "3..9.7595..195151795.93...3559.73973.9.5939559..3.", "5..77..737.5.3..9.53.155.1..17.3..17151...5593.3..", "9..59979...1931..7....919.73.1....1.351957.79..5..", "..795..1.575..5.595131.353...71.9.31.1.1.1...17599", ".9..3.7.5..35.55537.5175..511.7537.7.11.3....15933", ".5.35..1..7.79.557.597311717.171.9.5.3.11.973.5.1.", "5.575.5..179.9.3.3.7.3.1911.7.5..37.39.3.15.1.39.3", ".7.5..711393.31.775.3...715.3.5933133.9..355355715", "33.9.53375.7..5597.97..31....1.57.97....79177...13", ".3.7..1.31.79..39.53.1.937.335.771.37.....39117.5.", "3.917939.7.1.13.9.5.33.39...5.9.77.5799.1.55.3...7", "3.95.79..3..15.75.7351.57...5..5.3...73159.9919.17", "....1395193..755.93.5.73..91.33.51.791.5.19595.55.", "1.57..79.9.737.9....95.35331.9...1..95.1..1..9.9.7", "77.375.5..1919737..57....377.9..53..9..39.1.1.7919", ".193.5.7.1.319..15.39.7395.93.755..71.3.7.159.53.5", ".5353.953..5.5.19.5.95.5.1...7159.313371.3....59.1", "1..957513.59.7..7795..715.715.135...9..7391.139..7", "13.5..511..5..5733.53...317939..1...5.79.5.9.197.5", "77999...73..3579.3.5955..95..7131..9..7177..11.1..", ".57..5.11.1519173...119..97...97397919..939.955197", "..17139.17.9....7.95.3...391..155..937..9.175..913", "9...73.5....5.11.175..55.7.199915..95519.53.913139", "..57.3.7735.993173991.5......179177..77.91371..955", "51.13..5..97793.97379.3.53955.35..5.935.3371757.57", "7737..37511.533.71.77.....9777.159.13313...93153.5", ".5.7..31...17157.7..7713.1..73911159.35937...1..57", "9.3.995.193.197..1.371..39753793..9..9.51..19.9113", ".1...335.31995571..715311757573.53.5793.9..37.5.91", ".93.7935..3.3.91.7..3..131.9.7..35.3....5..37..5..", ".953.55155.95.33.373931.17..537.3155.31.3.3.5953.9", "...5751.1.13.9.59.175.1..1..77.97..5117555.7.1.797", "99..75..1.77...7....355.5175753..9.953959..5..11.5", "5...3.137.735915.7....79.5.55.71913.37.7531.9...33", ".593577..5137.31.913.71.59.1979.151.95....9.9791.3", "7.9..7.15.5...95..73....9...15..71351331.93579.73.", "3..59..391.97.93.5179...3.1917..3.55..7...9391.53."};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 119035739;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> palette = {"..3....951..1..7..1..95.3.5....7....17.31.7..3...1", "7.3.....37..1..59....3..5..99...9..5.75.1..7.5..9.", "537.3.9.5.9.3...5...31.7..9535..7.7...37.3........", "..7....7..3...937.9.5.3919...3..5...37..93...5...9", "91599........511.179.9.13137731..55..1.3351.3.7..1", ".9.3..9.9.........31....9..1.11..3.7117...55.31..7", "..179.3..57..9.............7.7..9..1...19..9..1..7", ".3..9..35157...9.5....1..7.7..75.1...575.97...993.", "5...11...9..5.1.....9...1.9....5....37..593.35..7.", "...19.77...71..9..3.19...3.55...9.7..33.9..39..7..", "...39......935.5.1...953..........75.5....1.7.....", "..5..5.973.3115.53.1..5..315.1.7....9597.5...3...7", ".9.73....193...1..3173..1.5735...5.1..95.51.....1.", ".17.......51.5..1.5...773...1..75..57..1.17.133...", "..5....13.17..7593.5....3.5..5.1.........3179...75", "51.1..3.....3.3.311..3..991.975.5.191.5.1......7..", "..7...19..73.957..39.7.17...75.3.93.......17799..5", "199....5579..99.5..7..5...11..9.9....17..5179.793.", ".......5...1....75.9..9....13...3......3..759....9", "..51.......57....573......19..77931.19...9.353....", ".9.19.......1137.9.79.79...1......9.1..9.5..5..395", "9.9.3...7.............7......9.57.73.39..5351.7...", "3999..39.1..7.79...1.799..7..9..9179.........3.15.", ".9.5.539.55.99..9173.....7.35..93159.93.15.59...77", ".1...7..75.....17....5.53....55.5.........71..53.5", "37...55.99.5..97......1...5.....9..331..55.1...9..", ".199.9.9...9..9....3.1.7.1...773...7....75.1......", "15..71331..9.35191..9..919.1...7..51........5.173.", ".57......1....917....93.95.1.....5.79.1.7..973..7.", "3...............7..359..7.1..9.1..1.1.37.5.3.1..1.", "....3..3.931....3...797..79.19.5..15..51.1.....9..", ".15...9..5..153.93..71.9..53.1953.97.....7..739.7.", "31...31911...359.....3......1.3.1.....77.....5.3.1", "5.5.535...97..9...3........1.7.7......19..3.....3.", "...........3.9.9..77.9.9...9..7351....37.9..3393.7", "9.....1..3.....13.1..9.75.5.......97.99..93..5..73", "...7.7999.5.....133...119.5913.5...71.99.7.1.....3", "15.13.9..91..7197...77.755.....53.319....751....53", "...99.5.9..355..7.5.33..1.....55.1.9..3...1.......", ".......9..5155.7..9........99...9.7.53......9.75..", ".195..5.....5.919..1.7..75.....5531..379.....93..7", ".....7.999....3.5...379.7.35..395.39971..359...9..", "55.5379933...35...399.5.3.7.3.15....5.5.1..1...9..", ".91..35...7.......17.1.515379..9.5.5.1.7.3....3.1.", ".7......7.5.5..5...5.79...1..1957..739.5.1331...31", "..5..9.31.....9.....9..53579...3.1..9.93...1.7.9..", ".5.......3.3.97.....7....9.....77....3.1..17....7.", "..75...7.5....3.5557.............53..1.39.31731195", ".5....97..7..1.5131.1.3.11..7....33931.9..33..9.97", ".3.....9..135.75....93.7.7335...1...1.5...7..3..17"};
    int n = 1;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 510971290;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> palette = {".8..1..23......4............9....4.......6741..6.8", ".8..9..6.....4.6........7........4..7....4......9.", ".........6.....21.3................8.21..694.8....", "..2..1.3.12.2........1.5..4.........4.......45...1", "9.96...47.74....5.9....2.............2.........4.6", ".....2......1.....18...8.......69..6......3.......", ".49....6.........41.5.9.32.292.8..........1.38.8.6", "...7....4....1.9.58....34........7...72...6...61..", "....9......6..52......5....8........9...7..4...8.8", ".6..52..3.72.4.2.......452..3.7.7....2.2.81.18....", ".....47..............41...1...5..4.........25...3.", "..8.4..1..8.......4......3..6.6....7...3..2.6....1", "3.1..2.8......7..4.4........3...7.........7.3.76..", ".4..5..23.12...4.85.74....94.....6..98.6..14......", ".2......96.....8..5.5.9..2.........8.....4...21.92", ".....3..8.87..2.....8..14.....29...96..721.9....25", "3...56......7..6..9.3.5..6........32...254.8..7.7.", "....3.9......85....234.6..5....6545.....3........2", "...2..3432.2.....414...6.89.5.12.4.2..3.......1...", "4....16127..61..6.6.2.....2..9.....5...9.18.89..21", "....56.2........1.3.....78.2765.....9.1...........", ".47........2.................4.......6............", ".6...6.....8......16.2...........2..5....2........", ".......1.5.3....4...4....7..6..5........8..9..49..", ".....2......161..61.5...7..8...25..6..........7...", ".......4.....4.....45........6.89.....9.5.1....2..", ".4...69.5..45...3....4.6.698.834....1..8....9....6", "87...54...8......52.........8.8....5.3..8.2.23.38.", "5692.........6...........85..6..5.7...........3252", "......3.3698..9...5...3..89.9..8.......4.8.6....9.", "7.........7......2..........5...3...9..85.........", "...7...7....2....9......6..1..4.6..3....21..8...2.", "..9....6.61..2.8..5...5.....1..8.6..725.1..25..6..", "72.......498...49.......................5....4....", ".8......5.1.....16..7......2.414..........38..7..2", "..8.61.......767.5..81....6.4.......2...4......9..", ".....6.8...6.8.416..76.....8....38.......69.58..5.", "...2..5......4.....6....5........2..5.......14....", ".........2.........4.....4..9.921......8.4......5.", "..6...8....98...4.......27.....9.3...5..2..94...4.", "7...985.3.9...7....4.........8........5..2.8..7..6", "7.72...89....6........7.......94.4...214.....6..7.", ".67...1.....7......4..7...5........454..5...7.98.2", ".7.36......3............6.45.1..8.4..1....4.6...8.", "..3.1...5....49...18...8....761...........94...23.", ".69..........6.69..6...4.....6.49.9.3.9.........5.", "..1......63....8.8..5..2..1..2...4......9.12......", "8.6.........69...56.8......1.............189...7..", ".298....3....2.6...4...2.8....1......87..2..72....", "983.7.1.5.1.....9......4...6.4.4.47......8..9...7."};
    int n = 4;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 90995231;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> palette = {".6.62......82.4.42.4....6.8.8.5...6....47.2.67.8..", "...8.61...87.8..54.6.5....54..658..4.8.6...6.2...8", "..3.3.......9......14..59.4.5..41.78.7.5....9...99", "..42.3..2..........8..2......61.8.8..6.......5....", "........88....229..6....28.44....8.6.28.4..8......", "4..9.42...28......91....1......2.....1..6...784.5.", ".2....268..4..8....89.4.....4....889.8...6...1...2", "....8....6....461.4..722..7...61.6265.4..52..2....", "...3.4..37.....6.1..8..31.4.5....5.4.3......14...5", "...6.......228....4...8221..48....6.8.....484.6.6.", ".3..62..6..36.....6.4........6.......6....24....2.", "...9..8..946.3....5......2..5....53.61..8...34..7.", "3.........5..4..8...38..8584..5.484.2...3..243..4.", ".5...87...4..4667266.9...63..24....2....23....7..4", "8..7....33.6.......38.........42.3..4.9.2.99...3.1", ".48....8.8.4...94...3..849..6.......8.....6.278...", "........4.43.42.18......26.....32.4..6.82.8......6", ".8773..5.9...7....1....7..21...45.......2..5....9.", "72..216......4....4.1.......4...2........82.2.82.6", "4...2.3.66......5.......849.2...8...34.849......6.", ".8....4......5.8...7.......773..9.3..3..6.5738..3.", "...2.3.4.4...6..4.64.864...82.1.22..464.34.6..8..2", "8366...44.....6..4.6..6...9........6...26..8.....8", "....7..5334..5...1........61.9..93.....72.9..4..3.", "7.8..9...2.4.8.......66.......1....5.6...6.6.9.2.6", "..64...6......4..48..5...21.2....6..14..272.4.38..", ".....82.7984..5..3...2..3.45..24..56..75489.......", "..6..5....1..28.2648.2.2..2.84.4..2..68.9.6....8..", "........4.6..8..3..86....29...61........4.842.....", "......6..5.83.5...5..6.1..253..6..7.....24..9.8..3", "3..6....4.3..6...844....81.46.94.44...86.6...3.2..", "2...8.......628.526.4.68...8..6.66.....6..68.2.8.2", "4.7....9.58.......33..95.64..5.2..3.....445......3", "..2.2.......4..9....1..6492.........64....8.8...4.", "..8....46...482.9..24...6.7....7........6.8.4..682", "..1........6...8...........7....5.9...5.42..5.45.3", "...2.54822...6.......44.6......82.45.6........2...", ".9...8.4268.2.2.....8.688..686.9..4.58.88.6....88.", "8..1.4.....439..2.75..9........2....8....2..562...", "..68618.263....524.4.6..4..644.42.8...881.62..4..6", "8.....388.4.6...7.488....4.6.4.....4...44..82..4..", "...3....7...7.9..11...1....99.2.....433.8..3......", "..2...4..4..6.8....6...4.5..44...2...468.....3.28.", ".7..84.....34..6...4..8..47.46.......4.8..........", "48..3...7......8...54.....873.8....44...4...58....", "36..6......6..8.42..96...........6254..8..4..3....", ".38.68.4.........2....2.........882....2496.2438..", "..1.....5......8..3...........68997.4...86.7.....5", "...6..8......2....6.1.2.2...62..88.9.4.6.....322..", "6...8.7.8....6....4..92...766..5.4.......16......."};
    int n = 3;
    int m = 5;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 583081024;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> palette = {".2.8.......6....9.......7...........36.......47...", ".......3..............8.8...........41..25........", ".........34........1.........5....4......7......25", ".9.........9....8..3........2........94........5..", ".8...2..........3.......7..63...7.................", "........8.....21.3............4.......6.....6.....", "..2..........7...7.......7....6...................", "..............1................8..................", "........................9...7...5.......5.........", "65....................4.........4......9..6.......", "29...................................96...........", ".............5................2...6..7...3.....1..", ".........8..1....2....1......6..........5.9.......", ".....5.............7.7..........2...8..5...5......", "2...6....9..........6...85.3.......5.....7........", "1................45....4...........8..............", ".....2..9...9.52.................4.2....3.7.......", "..2............................9.............7...3", "....4...............6................5.3.......9..", "..........8.......81.......5......8....7..........", "..............................3................69.", "...........1...1..6......9.9.....7.....7..2...87..", ".9...3.......1............8.....2.................", "..........92.....27..2...8..........3....6........", "...6.............4.............4..3...5......2....", "...3......2....7...72.2.......6.....8.....6.......", "......8...2....3.....9...............9..8...2.....", "...........1...........................5..........", "......7....8......9.7............4...........6.2.8", ".1...........1.......9....2......1................", "...........1........8..................9.....3....", "........................5...............14........", ".......6..........7....2....9..6................1.", "...............3...1...9........8..3...........5..", "..............4.....21.........................16.", "..............6.....6..5.............5.....9.....1", ".............................2....................", "4.4.....6..3...........7...1..6...................", "69...............32.......8.......6.....4....96...", ".......2...4.......................21..2.......2..", "......5.....9..6....3........6...................4", "69..........6..........7..4.41........6.....2..1.5", ".............9..............6....98.....47..6.....", ".1..8...2..............94.....8....1....2.....29..", "...25.......1........4......................5.....", ".9...............9.5...5.......1.......98..3......", "4..............3.1..............27........6...2...", "3....23.......9.....................9.9...........", ".....8....72.2.......6.2...6.8........3........2..", "....4.............8......7....8..................."};
    int n = 8;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 753861884;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> palette = {".1.9.....91...37..9.79.3..95935.193....5195171.1.7", "7.3.75...9.35.9.357....3.3.95.9955.17..3.399.3.359", "1.7...91....3.9915......1........7.1....3797.1.99.", "1.5.9179.1.999.553.993.559.9715399...393919311..3.", "9.1573.....17.1..1.519157.93..555733.31.39.3.315.9", "3..371553..15..1...3.1535..33.9..5...1...1..19.95.", ".593.3.1959.7.1.3.55..335.15539...173.......3..9..", "7.39.3.11.5735.3..93751.7..111..11....7..91.111.11", "7..51..95..53.531955.51..9.79....7.59915.5..5.9...", "..19.9.3.1..75..1...59.53..13..15..7157.3..3...117", ".13...7...1.77337....5.3.....59.1.7....7.3....751.", "571.1...5.9.19...........31..97.5...7.777...595551", "..93...1.5..757.99.9.3.193.1.77..9151..9..99...9.9", "93..11.7..7.797.559..597.53.7.3..1..3.7793...5.31.", "..5..1115.9.7.1.9.95.73539.7.1..33..1771.55755.7..", "9.9.53..1959.359.9.9..9.......5.97..9.9.313.....53", ".1.1.111....1.159715..9..9.5735591757.5...73.91.7.", "..99..5..55..17.377..7.5..3.1..17.........3.351.7.", "..1.3931.539.5....35...717..7.53..31157..7799..73.", "9.9..3.9.533.3..1...1....37.5...71.51..5.777..571.", "...3...3.73...1.597.3517...9.135..7.937.5.99.5.75.", "111..71779..5.5593.7.355.99.5...135.17.5555.779.7.", "77..1..73.1..17....9..9399.91....53711...7.97.935.", ".1.9...39...19.59...593...7515..3.93......931.55..", "553..997.13331.73.......31...57.3..59.1..91..91.59", "7.5.3599.93..17...353.73.7..1..111.755135.1.19.5..", "7957..9..7.5...9..31131...3.5531..11.....7.995911.", ".9..1.93.7..9.7.75.1.533.7..55....7..79...151.951.", ".17..155979.7.373111..3575..3.599.5.5.91.9.....3..", "197.57.1..95..75...97.9373..99.1.7371.33.33......5", "3359.1.71..97.9..155.19177..7.117.1..5.1.991..939.", "15.5179.9..7...3..57.37.19957179.1...3.95.37..7..1", ".....19.....157537537...7.19.7.9..79.9.95.....5..1", "1...7.399.79.73.7397..5.3.9913..7..51..5...3..3...", "7.95331351.5..5..915.3..951..1....1511...97571..11", "71.33511753..19..7.9.9.....1799.55...37.1..753.353", ".9..91...75.137..9..17.3955.93..5.539131.577.3..17", ".1.91531........1.77....9.......19113371753...5.55", "..557.3.9..9...1.1.35....1...7.577..77..9.1..5.77.", "9....3..5.7.9.5.797311.7..77.9.37.1.9..17.3.57.5.9", "71519.391.5.59.7..59.9.7795..7.1..539..13.599.7.79", ".9.95959.....3.3.5.5..95....511.1...1.75...33.7...", ".17.9.5779777.1.7..993..9....9.313.13.3.3..57..97.", "1..9913.799.5.953.99.79.571.39135351.53...1..1.73.", "7..3.1995..5.93.9.5791..39.39....351.75..9..775..3", ".357.3.7.3...531.3333..719.1.5333579.557.9.59...91", "739.31.199...97.195.95..7.51.9.775571.777.9997.993", ".5953.5.7.......3331.313999517.95959.157...7955531", "..37....3.55.97....3.77..9...313.9.3.577.51..97.33", "..51..5...3.7393.1131.311.3.3..9...91.93...7.7..77"};
    int n = 9;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 448028130;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..9...............................................", "..................................................", "..................................................", "........................................5.........", "...........................................9......", ".....................................3............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................9.................", "..................................................", "..................................................", "...1..............................................", ".................................................9", "..........................................9.......", "..........................................3.......", "..................................................", "..................................................", ".....................9............................", "..................................................", "...............7..................................", ".......................................5..........", "............................................1.....", "..................................................", "..................................................", "..........................9.......................", "..................................................", "..................................................", ".9....................................1...........", "................................................5.", "..................................................", ".......................1..........7...............", "..................................................", "..............................................1...", ".....................................9............", "..................................................", "..................................................", ".....9............................................"};
    int n = 1;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 681522211;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................3...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................................3........", "..................................................", "..................................................", "..................................................", "..................................................", "................................................2.", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 4;
    int m = 6;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 526265998;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............................3..................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 8;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 340314243;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> palette = {"...........4......................................", ".........6...............................4........", "..................................7...............", "..................................................", ".............................................3.28.", "............................3...............9.....", ".........8....7...................................", "....8....................6........................", "........................9.........................", "............8...................................48", ".................................4..........8.....", ".4................................................", "..............................9...3.5.............", ".............1....................................", "................................................2.", "..................................................", ".................8................................", "..................................................", "...............................1..................", ".......2...............................8..........", "..............................5...................", "...............3..................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....6........3...................................", ".................6........5.......................", ".................................7................", "..................................................", "..................................................", ".......................3..........................", "..............................9...............9...", "5....................3.......95...................", ".1................................................", "...........89.....................1...............", ".................................................6", "..................................................", "............3.....................................", ".................................6................", "4.................................5...............", ".....................................6............", "....................................3........3....", ".........9........................................", "...........................8......................", "..................................................", "..................................................", ".......4................................6.........", "...................................3..............", "..5.........4....................................."};
    int n = 10;
    int m = 4;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 624211767;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> palette = {"22....9.9.", ".9.73....6", "..55.....1", ".351......", "......22..", "..9..8.2..", "..7.7..62.", ".4..8.....", "..6...5674", "...3...2.2", "......55.."};
    int n = 8;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 668201734;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> palette = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "..........................8..............", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "..............................3..........", ".........................................", ".........................................", "....................................1....", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".......................................4.", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".............................8...........", ".........................................", "............................9............", ".........................................", ".........................................", ".........................................", "........................................."};
    int n = 10;
    int m = 6;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 807852651;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> palette = {".................................................", ".3...............................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "...............................7............4....", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "........6........................................", ".................................................", "..............5..................................", ".................................................", ".................................................", ".......4.........................................", ".................................................", ".................................................", ".................................................", ".................................................", "................................8................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".......4.........................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................2..............................."};
    int n = 6;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 511201547;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> palette = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "........."};
    int n = 9;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 581218622;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> palette = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "........."};
    int n = 7;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 5352350;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> palette = {".........", ".........", ".........", ".........", ".........", ".........", ".........", ".........", "........."};
    int n = 1;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 91039580;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 6;
    int m = 8;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 5041443;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 658357297;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 525673734;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 1;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 763071514;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 3;
    int m = 5;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 469433775;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 763071514;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 2;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 776353924;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 7;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 145575927;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 8;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 792082940;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> palette = {".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", "............................."};
    int n = 9;
    int m = 5;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 348402153;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> palette = {"...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "..................."};
    int n = 9;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 625449299;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> palette = {"...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "..................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 832874982;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> palette = {"...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..........................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 508282148;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> palette = {"..................................................", "..................................................", ".................................................."};
    int n = 2;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 500909848;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> palette = {".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "........................................."};
    int n = 5;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 782178876;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> palette = {".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "................................................."};
    int n = 2;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 477447407;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 1;
    int m = 3;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 344796823;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
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

int test94() {
    vector<string> palette = {".................4...7..6.......8............6...8", "2.................................................", "...................2.....1............9...........", "...........5.3..............................8.....", "..........23..1..................4.3..........1...", ".9....6.....5...........234...8............6......", "................3....8.3..........4.........2.....", "...4.......9...............6........9....3........", "..9...........9..................4...............1", "..6................................9.7............", "....4........8..............7.....................", "...................8.........2.............7......", "........................2............2............", ".......4.4..............................3......2..", "..5.9..............4..............................", ".........7.....................3..................", ".........................2.....6....5.............", "........3....8.....9.........9..........23....7...", "..34.....3.......3..........6....6...........1....", "........4..................................5......", "........................................4.....26..", "......7..6........1..........8...5...............2", "3.5.............9......8..........................", "............4............7.......7..2...........3.", "..............1...........7.9.....................", "...................1.................4............", "...........8...2..............4...8...........1...", ".................8.................2......72......", ".494..............6..........3.........9..........", "..............................................5...", "65..................21.......................6....", "....2....2.............................4..........", ".......................8.............2............", ".........4..............6.........................", "8..................................5....4....7....", ".7..............................3.4..6..6.........", ".................4........5................5......", "...................1..9...........................", "...............1.......8.........................1", "...................57......5......................", ".....2..........269.................28............", "832...........8.1....................4.........4..", "........9.........1..9.........................4..", ".......6..9.........1.............................", "...................6.............................8", ".....7...1......6............5....................", "..9....................................8.....2....", "................1............72.........2......8..", "..............................2............2......", "......3...........................3....3.........."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> palette = {".4...........9...8.............2...........3......", "2......1...................38.2...................", "..................2..........................2....", "...3.....................................7.....61.", "..................................................", "............................6..2.....6............", "..9...........3.........................18........", "..........4.......................................", "...3.......................6......................", ".........................................29.......", "....7...6..1......................................", "....2.............6..................5............", "8.....................2.........6.................", "............8................6...4...............2", ".............................................3....", "..9........................................6......", "......23..........6.......4......6................", "86.......4................................3..6....", "..................2....1..........................", "4................38.......2.....1.................", "8.............4...................................", "..............................47.......5..........", "............6.......7.......................6.....", "............7................2...................6", "9........1........................................", "..............4............7.........9............", "..................4..........8.8..................", "....................6.....4.........2......9......", "..3......9.......................3...........1...1", "8...6...............8.............................", ".........3....6......................8............", "..4....6..........................................", ".............4................7.......6...........", "...................................1.......2.....5", ".....2............8..............4................", "............9.....4..........6.....23.............", "............5...2...................6......5......", "...............3..............4...................", ".........................................6........", ".........1.................................1......", "...4...........8..1............3..................", ".....................8..........1.................", ".........5....7..4................................", "...........3...........................6..........", ".......................................2..........", "....4..........6........82..........4.............", "6............................58.......2.....1.....", "...........................3......................", "..................................................", "....2......................65....................."};
    int n = 9;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> palette = {"....7.........1..........8........................", "......................1.....8...3.....2...........", ".....5..........5....15...9....5..................", "...........................6......................", ".......................6..........................", "..................5...........................9..4", "..2...............................................", "....3..................1............2.....1.......", "........27..4.....8..1.1....6..1....8.............", "....................8............7.....5.......6..", "..................2............7....9.............", "..6............2...6......2........2..............", "...............................7..................", "......1.........3.................................", "9.......9..36.....................................", ".............9.............5..4..5................", "2...7.........9............6......9.8....9........", "4...2.......................................6.....", "............................8.....................", "..............8....8.........6..6..2....11........", "...........1................7.....................", ".............................4.................9..", "...2....3........................2................", "..1......................4........3..1..........1.", "8.................................................", "......................1...........8...2.........6.", ".3.............1...8.............................6", ".7...........4....................................", "........9............9....8..1....................", "..........6.......5.......7.....2.................", "....9..4...........8.........4.......4............", ".8............9..........6.5....5..8.....81.......", ".1...............8................................", "4.3........................2..65....82............", "...8....................4...........7.8...3.......", ".....2......6.......1.............2...........4...", "......2......4....7.5......1......................", "4...4..3......................................7.1.", ".............2.....4.......6.......6......2.......", "....................8.....6.......................", "....5...23.......6...............................1", "...........7.................5......4........5....", ".......9...5......................8...........1...", "...........3....88.......6........................", "..................................................", "...............8......2...7.........79............", "........................................9......6..", ".....8.....25....1........45.4....................", ".5...6.8..........49..............................", ".......................3...............3.........5"};
    int n = 8;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> palette = {".................................................."};
    int n = 1;
    int m = 9;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 876125953;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> palette = {".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    int n = 10;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> palette = {".2.69.", "....2.", "......", "16..9.", "......", "..3...", "2.....", "6.....", ".....8", "..4..8", "....6.", "..86..", "5..71.", "..36.4", ".3718.", "..1...", "65....", "8.2.8.", "4.....", "....4.", "....32", ".4....", "....8.", ".7.3..", "...4..", "....74", ".....6", "......", "......", "6.....", "322133", "......", ".7.9..", ".....8", ".76.5.", "..44..", "......", "...8..", "......", "...9..", "4.5.8.", "......", "......", "..4...", "....6.", "...438", "5.....", "6.....", "7.....", "......"};
    int n = 9;
    int m = 5;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> palette = {"..............6....9....6...6..", "..5......5...13................", ".6....3...6..87................", "...6....21.3......8.1.....9....", "1............6...6.............", "...3..................4........", "..7............................", "........7.....................1", ".........1........6......4..8..", "......3.9..............3...8...", ".........3..8..............647.", "..1.............7..9......5....", "..........53.4.......1.....6...", "..4..7.........................", "...............................", "...4....5...881.2......2......3", "..........9..6.42.4..62...6..5.", "..1............7..1............", "............................8..", ".......8......6214...9.....2...", "..7..............8......1......", "...9..62..6..........3..47...7.", "6........6.....2....4..8...8...", "5.......595.4....7.5...........", ".82..6.6..9.....62.........2...", ".3.......7.....................", "......3...6.....7.......53.....", "............1..4.............7.", "..........3...........5....41..", "..8.............8..............", "..5.6...7......................", ".2....4..........5.............", ".............8........44..2..9.", "8............1.1......5..5...12", "............6.............7...6", "..............4.7....7.........", "...41...1.3..................3.", "...785................4........", "..............4.9....1.6.4...44", "..6...2...........5.9.........3", "............62.2...............", ".........96...................4", "..4......964......678.8........", "..............2................"};
    int n = 8;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> palette = {"...", "...", "..."};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 1953125;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........6........................................", "..................................................", "..........................8.......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............5.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............2....................................", "..................................................", "......1...........................................", "..................................................", "..............................................5...", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 872842416;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 10;
    int m = 10;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 658357297;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> palette = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................5.......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int n = 1;
    int m = 1;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 752614307;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> palette = {"...", "...", "2.3"};
    int n = 2;
    int m = 2;
    MagicalGirlLevelTwoDivOne* pObj = new MagicalGirlLevelTwoDivOne();
    clock_t start = clock();
    int result = pObj->theCount(palette, n, m);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22692969&rd=14539&pm=11482
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <deque> 
#include <queue> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <functional> 
#include <utility> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define REP(i,n) for((i)=0;(i)<(int)(n);(i)++) 
 
typedef long long ll; 
#define MOD 1000000007ll 
 
ll odd[20][20],even[20][20]; 
ll a[20][(1<<10)]; 
ll dp[20][(1<<10)]; 
 
class MagicalGirlLevelTwoDivOne{ 
  public: 
 
  int theCount(vector <string> palette, int X, int Y){ 
    int H=palette.size(),W=palette[0].length(),mask,mask2,i,j; 
     
    REP(i,X) REP(j,Y) odd[i][j] = even[i][j] = 1; 
    REP(i,H) REP(j,W){ 
      if(palette[i][j] != '.'){ 
        int n = palette[i][j] - '0'; 
        if(n%2 == 0) odd[i%X][j%Y] = 0; else even[i%X][j%Y] = 0; 
      } else { 
        odd[i%X][j%Y] = odd[i%X][j%Y] * 5 % MOD; 
        even[i%X][j%Y] = even[i%X][j%Y] * 4 % MOD; 
      } 
    } 
     
    REP(j,Y) REP(mask,(1<<X)){ 
      int tmp = __builtin_popcount(mask); 
      if(tmp%2 == 0) continue; 
      a[j][mask] = 1; 
      REP(i,X) if(mask&(1<<i)){ 
        a[j][mask] = a[j][mask] * odd[i][j] % MOD; 
      } else { 
        a[j][mask] = a[j][mask] * even[i][j] % MOD; 
      } 
    } 
     
    dp[0][0] = 1; 
    REP(i,Y) REP(mask,(1<<X)) REP(mask2,(1<<X)) dp[i+1][mask^mask2] = (dp[i+1][mask^mask2] + dp[i][mask] * a[i][mask2]) % MOD; 
     
    ll ans = dp[Y][(1<<X)-1]; 
    return (int)ans; 
  } 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/