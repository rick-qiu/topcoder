/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8261
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

class JollyJumpers {
public:
    int maxScore(vector<string> layout);
};

int JollyJumpers::maxScore(vector<string> layout) {
    int ret;
    return ret;
}


int test0() {
    vector<string> layout = {"....", ".#..", "..#.", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {"....", "....", "....", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {".#..", ".#..", "..#.", "...#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> layout = {"####", "####", "####", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {"#...", ".##.", "...#", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> layout = {"#...", ".##.", "...#", ".##."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> layout = {".###", "####", "####", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> layout = {"##..", "##..", "###.", "###."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> layout = {"####", "####", "####", "#.##"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> layout = {"####", "##.#", "####", "#.##"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> layout = {".###", "##.#", "##.#", "#.##"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> layout = {"####", "#...", "#...", "#..."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> layout = {"####", "#...", "#...", "#..#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {".###", "#...", "#...", "#.#."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> layout = {"##.#", "....", "....", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {"###.", "....", "....", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> layout = {"#..#", "....", "....", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {"##.#", "..#.", ".#..", "#..#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {".##.", "#..#", "#..#", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> layout = {".##.", "#..#", "#..#", ".##."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> layout = {"##.#", ".#.#", "..##", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> layout = {"##.#", "##..", "####", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> layout = {"####", "####", "#..#", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> layout = {"####", "####", "##.#", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> layout = {"####", "####", "###.", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> layout = {"#.#.", "#...", "....", ".#.#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {"#...", "...#", "....", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> layout = {"#.#.", "....", ".#.#", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> layout = {"#...", "...#", "#...", "...#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> layout = {"#.##", ".#.#", ".#..", "#..#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> layout = {"#.##", "##.#", ".#.#", "#..."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> layout = {"#...", "#.##", "####", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> layout = {"##.#", "#.##", "..##", "..#."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> layout = {"#..#", ".#.#", "#.#.", ".#.."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> layout = {"...#", "#.##", ".###", ".###"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> layout = {".###", "#.#.", "####", "#..."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> layout = {"#.#.", ".#.#", "#.#.", ".#.#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> layout = {"#..#", ".#.#", "#.#.", ".#.#"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> layout = {"#.##", "##.#", "####", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> layout = {"####", "####", "####", "###."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> layout = {"#..#", ".##.", ".#.#", "##.."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> layout = {"###.", "####", "##.#", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> layout = {"#...", "##..", "#...", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> layout = {"...#", "....", "..##", "#..."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> layout = {"##.#", "####", "#.##", "####"};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> layout = {"##..", "....", "....", "...."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
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
    vector<string> layout = {"##..", "##..", "##..", "##.."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> layout = {"#.#.", ".#.#", "#..#", "##.."};
    JollyJumpers* pObj = new JollyJumpers();
    clock_t start = clock();
    int result = pObj->maxScore(layout);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22700109&rd=10796&pm=8261
********************************************************************************
#include <iomanip> 
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 
#include <set> 
#include <map> 
#include <list> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <algorithm> 
using namespace std; 
 
#define RSZ(a)  (sizeof(a)/sizeof(a[0])) 
#define SIZE(a)  ((int)a.size()) 
 
typedef vector <string> VS; 
 
bool visited[(1<<16)]; 
int got[(1<<16)]; 
 
struct Pos{ 
  Pos(const VS& vs):s(0),sco(0){ 
    for(int i=0;i<4;++i) 
      for(int j=0;j<4;++j){ 
        if( '#' == vs[i][j] ) 
          s |= 1<<( i*4 + j ); 
      } 
  } 
  bool isSharp(int r,int c)const{ 
    return (1<<(r*4+c)) & s; 
  } 
  void set(int r,int c){ 
    s|=1<<(r*4+c); 
  } 
  void reset(int r,int c){ 
    s&=~(1<<(r*4+c)); 
  } 
  int sco; 
  int s; 
}; 
 
class JollyJumpers 
{ 
public: 
  int maxScore(vector <string> layout) 
  { 
    Pos start(layout); 
    queue<Pos> bfs; 
    bfs.push(start); 
    for(int i=0;i<RSZ(got);++i) 
      got[i] = - 1000; 
    got[start.s] = 0; 
    int ans = 0; 
    while(bfs.size()) 
    { 
      const Pos now = bfs.front(); 
      bfs.pop(); 
      for(int i=0;i<4;++i)   
      { 
        for(int j=0;j<4;++j){ 
          if(now.isSharp(i,j)) 
          { 
            if( j<3 && !now.isSharp(i,j+1) ) 
            { 
              Pos nx(now); 
              nx.reset(i,j); 
              nx.set(i,j+1); 
              --nx.sco; 
              if( got[nx.s] < nx.sco ) 
              { 
                got[nx.s] = nx.sco; 
                bfs.push(nx); 
              } 
            } 
            if( j>0 && !now.isSharp(i,j-1) ) 
            { 
              Pos nx(now); 
              nx.reset(i,j); 
              nx.set(i,j-1); 
              --nx.sco; 
              if( got[nx.s] < nx.sco ) 
              { 
                got[nx.s] = nx.sco; 
                bfs.push(nx); 
              } 
            } 
            if( i<=1 && !now.isSharp(i+2,j) && now.isSharp(i+1,j)) 
            { 
              Pos nx(now); 
              nx.reset(i,j); 
              nx.reset(i+1,j); 
              nx.set(i+2,j); 
              nx.sco+=2; 
              if( nx.sco > ans ) 
                ans = nx.sco; 
              if( got[nx.s] < nx.sco ) 
              { 
                got[nx.s] = nx.sco; 
                bfs.push(nx); 
              } 
            } 
            if( i>=2 && !now.isSharp(i-2,j) && now.isSharp(i-1,j)) 
            { 
              Pos nx(now); 
              nx.reset(i,j); 
              nx.reset(i-1,j); 
              nx.set(i-2,j); 
              nx.sco+=2; 
              if( nx.sco > ans ) 
                ans = nx.sco; 
              if( got[nx.s] < nx.sco ) 
              { 
                got[nx.s] = nx.sco; 
                bfs.push(nx); 
              } 
            } 
          } 
        } 
      } 
    } 
    return ans; 
  } 
};

********************************************************************************
*******************************************************************************/