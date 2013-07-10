/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12275
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

class ValueHistogram {
public:
    vector<string> build(vector<int> values);
};

vector<string> ValueHistogram::build(vector<int> values) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<int> values = {2, 3, 5, 5, 5, 2, 0, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X....", "..X..X....", "X.XX.X..X."};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> values = {9, 9, 9, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", ".........X", ".........X", ".........X"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> values = {6, 4, 0, 0, 3, 9, 8, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.......X.", "X..XX.X.XX"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> values = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> values = {6, 2, 3, 3, 3, 7, 8, 1, 0, 9, 2, 2, 4, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "...X......", "..XX......", "..XX......", "XXXXX.XXXX"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> values = {7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X.."};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> values = {6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X..."};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> values = {0, 4, 0, 6, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X...X.X.X."};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> values = {2, 7, 7, 3, 1, 2, 7, 0};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X..", "..X....X..", "XXXX...X.."};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> values = {7, 5, 6, 4, 2, 3, 9, 4, 5, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....XXX...", "..XXXXXX.X"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> values = {4, 4, 3, 6, 0, 1, 5, 5, 6, 5, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X....", "....XXX...", "XXXXXXX..."};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> values = {7, 6, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......XX.."};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> values = {4, 4};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....X.....", "....X....."};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> values = {8, 4, 7, 5, 5, 8, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X..X.", "...XXX.XX."};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> values = {8, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "........X.", "........X."};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> values = {3, 8, 8, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "........X.", "...X..X.X."};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> values = {7, 0, 1, 7, 5, 3, 8, 7, 8, 7, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X..", ".......X..", "...X...XX.", "XX.X.X.XX."};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> values = {6, 4, 1, 6, 5, 7, 4, 0, 4, 6, 3, 9, 4, 2, 4, 4, 1, 3, 2, 4, 1, 4};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....X.....", "....X.....", "....X.....", "....X.....", "....X.....", ".X..X.X...", ".XXXX.X...", "XXXXXXXX.X"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> values = {6, 2, 2, 4, 2, 2, 2, 9, 2, 2, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.X.X..X"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> values = {0, 6, 9, 4, 5, 5, 5, 7, 0, 4, 2, 3, 0, 6, 2, 1, 9, 6, 1, 2, 8, 7, 6, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "X.X..XX...", "XXX.XXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> values = {1, 1, 2, 9, 2, 4, 5, 2, 7, 2, 6, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", ".XX.......", ".XX.......", ".XX.XXXX.X"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> values = {0, 5, 4, 8, 9, 2, 3, 6, 7, 2, 2, 1, 6, 8, 3, 6, 9, 3, 1, 8, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".XXX..X.X.", ".XXX..X.XX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> values = {2, 6, 7, 9, 9, 3, 5, 7, 9, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", "..X....X.X", "..XX.XXX.X"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> values = {2, 2, 6, 2, 1, 2, 2, 7, 7, 2, 2, 6, 2, 2, 5, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X...XX..", ".XX..XXX.."};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> values = {2, 4, 7, 7, 3, 0, 8, 0, 7, 6, 1, 1, 2, 4, 2, 6, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X....X..", "XXX.X.XX..", "XXXXX.XXX."};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> values = {9, 0, 4, 9, 1, 9, 8, 5, 4, 3, 3, 1, 6, 4, 3, 1, 1, 3, 4, 5, 9, 4, 2, 1, 3, 6, 6, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X.XX.....", ".X.XX.X..X", ".X.XX.X..X", ".X.XXXX..X", "XXXXXXX.XX"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> values = {8, 9, 9, 0, 4, 1, 3, 7, 3, 9, 1, 4, 4, 4, 4, 4, 6, 9, 9, 0, 4, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....X.....", "....X.....", "....X....X", "....X....X", "....X....X", "XX.XX..X.X", "XX.XX.XXXX"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> values = {7, 9, 8, 0, 8, 8, 5, 1, 8, 8, 3, 8, 1, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "........X.", "........X.", "........X.", "........X.", ".X.....XX.", "XX.X.X.XXX"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> values = {2, 4, 4, 1, 4, 2, 4, 9, 5, 3, 2, 5, 7, 4, 4, 4, 5, 2, 0, 4, 3, 8, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....X.....", "....X.....", "....X.....", "....X.....", "..X.X.....", "..X.XX....", ".XXXXX....", "XXXXXX.XXX"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> values = {2, 3, 6, 3, 6, 6, 8, 1, 9, 7, 4, 3, 6, 4};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "...X..X...", "...XX.X...", ".XXXX.XXXX"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> values = {2, 9, 6, 5, 6, 9, 6, 6, 6, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X...", "......X...", "......X...", "......X..X", "..X..XX..X"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> values = {8, 2, 1, 9, 8, 3, 8, 6, 1, 3, 5, 0, 3, 1, 1, 2, 8, 6, 6, 0};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X......X.", ".X.X..X.X.", "XXXX..X.X.", "XXXX.XX.XX"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> values = {1, 9, 2, 1, 3, 1, 1, 7, 9, 2, 6, 8, 4, 2, 8, 2, 2, 1, 3, 9, 8, 0, 3, 8, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".XX.....X.", ".XX.....X.", ".XXX....XX", ".XXX....XX", "XXXXX.XXXX"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> values = {1, 0, 6, 4, 1, 5, 1, 3, 7, 1, 4, 1, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X........", ".X........", ".X........", ".X..X..X..", "XX.XXXXX.."};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> values = {1, 9, 2, 3, 2, 2, 0, 2, 2, 2, 2, 3, 7, 4, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..XX......", "XXXXX..X.X"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> values = {2, 6, 0, 4, 6, 7, 1, 8, 2, 6, 9, 4, 8, 8, 9, 2, 6, 1, 6, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X...", ".XX...X.X.", ".XX.X.X.XX", "XXX.X.XXXX"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> values = {9, 8, 1, 7, 9, 1, 6, 8, 7, 6, 7, 3, 3, 7, 9, 3, 8, 6, 7, 3, 8, 5, 2, 0, 8, 7, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X..", ".......X..", ".......XX.", "...X...XX.", "...X..XXXX", ".X.X..XXXX", "XXXX.XXXXX"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> values = {2, 3, 4, 5, 3, 8, 8, 3, 3, 1, 6, 5, 2, 5, 9, 5, 2, 2, 5, 3, 6, 3, 7, 3, 8, 3, 3, 0, 5, 7, 0, 4, 3, 5, 2, 1, 9, 5, 3, 3, 7, 5, 6, 2, 7, 5, 0, 0};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "...X......", "...X......", "...X.X....", "...X.X....", "...X.X....", "...X.X....", "..XX.X....", "..XX.X....", "X.XX.X.X..", "X.XX.XXXX.", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> values = {0, 3, 8, 8, 3, 5, 1, 1, 8, 5, 0, 8, 6, 7, 9, 8, 2, 0, 2, 3, 5, 0, 6, 0, 5, 2, 8, 1, 5, 3, 4, 7, 9, 5, 5, 1, 5, 7, 7, 6, 9, 1, 5, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X....", ".....X....", ".....X....", ".....X..X.", "XX.X.X..X.", "XX.X.X.XX.", "XXXX.XXXXX", "XXXX.XXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> values = {4, 3, 6, 6, 6, 3, 0, 0, 3, 6, 9, 9, 0, 1, 9, 2, 3, 7, 6, 2, 4, 8, 8, 4, 7, 4, 8, 2, 3, 4, 3, 6, 0, 5, 7, 8, 6, 1, 9, 2, 1, 1, 0, 9, 8, 4, 9, 2, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "...XX.X..X", "XXXXX.X.XX", "XXXXX.X.XX", "XXXXX.XXXX", "XXXXX.XXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> values = {0, 2, 0, 7, 2, 0, 7, 6, 6, 6, 2, 5, 6, 2, 5, 7, 4, 3, 9, 1, 8, 9, 2, 4, 0, 2, 5, 5, 1, 9, 3, 0, 4, 4, 0, 0, 3, 7, 3, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X.X.......", "X.X.......", "X.XXXXXX..", "X.XXXXXX.X", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> values = {0, 6, 1, 7, 5, 7, 4, 1, 8, 0, 9, 4, 7, 0, 5, 7, 3, 3, 2, 0, 8, 7, 0, 3, 9, 8, 6, 8, 3, 5, 8, 6, 7, 0, 2, 4, 2, 3, 0, 9, 2, 3, 8, 0, 0, 7, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X......X..", "X......X..", "X..X...XX.", "X..X...XX.", "X.XX...XX.", "X.XXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> values = {0, 2, 4, 2, 8, 0, 0, 0, 2, 2, 5, 0, 0, 6, 2, 9, 0, 8, 6, 8, 5, 6, 0, 2, 9, 2, 5, 2, 0, 0, 9, 8, 5, 2, 1, 0, 6, 0, 6, 8, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X.........", "X.........", "X.X.......", "X.X.......", "X.X.......", "X.X...X...", "X.X...X.X.", "X.X..XX.X.", "X.X..XX.XX", "X.X..XX.XX", "XXX.XXX.XX"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> values = {3, 7, 1, 8, 3, 7, 1, 8, 0, 2, 3, 1, 3, 8, 8, 3, 7, 4, 3, 5, 1, 3, 1, 1, 3, 8, 1, 9, 0, 9, 3, 1, 9, 1, 3, 7, 5, 2, 4, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "...X......", ".X.X......", ".X.X......", ".X.X......", ".X.X......", ".X.X....X.", ".X.X...XX.", ".XXX...XXX", "XXXXXX.XXX", "XXXXXX.XXX"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> values = {5, 8, 7, 3, 1, 2, 8, 5, 5, 2, 7, 0, 5, 1, 2, 8, 2, 0, 9, 0, 8, 6, 3, 4, 1, 2, 9, 7, 1, 1, 4, 4, 9, 5, 3, 3, 0, 0, 2, 6, 8, 6, 3, 6, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.....X.", "XXXX.X..X.", "XXXX.XX.X.", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> values = {6, 5, 4, 2, 2, 8, 4, 4, 0, 8, 3, 6, 9, 7, 0, 6, 3, 4, 9, 7, 9, 3, 2, 6, 8, 7, 0, 1, 1, 6, 7, 6, 5, 7, 3, 9, 1, 3, 0, 8, 6, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "...X..X...", "...X..XX..", "X..XX.XXXX", "XXXXX.XXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> values = {9, 4, 5, 0, 5, 4, 6, 4, 3, 6, 2, 3, 4, 4, 4, 7, 5, 1, 4, 4, 4, 2, 1, 0, 3, 7, 0, 5, 7, 7, 7, 5, 6, 8, 8, 1, 3, 4, 4, 4, 4, 5, 5, 4, 8, 6, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....X.....", "....X.....", "....X.....", "....X.....", "....X.....", "....X.....", "....X.....", "....XX....", "....XX....", "....XX.X..", "...XXXXX..", "XXXXXXXXX.", "XXXXXXXXX.", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> values = {8, 4, 9, 8, 1, 6, 7, 3, 4, 8, 6, 8, 6, 9, 8, 8, 8, 6, 0, 2, 8, 8, 4, 2, 8, 4, 0, 7, 5, 6, 0, 8, 8, 3, 2, 8, 7, 9, 8, 4};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "....X.X.X.", "....X.X.X.", "X.X.X.XXXX", "X.XXX.XXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> values = {4, 2, 2, 5, 3, 0, 8, 7, 6, 0, 0, 6, 5, 8, 0, 5, 8, 6, 4, 8, 9, 2, 9, 6, 8, 9, 8, 0, 2, 1, 7, 9, 4, 2, 6, 5, 4, 5, 6, 6, 6, 3, 8, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X.X.", "..X...X.X.", "X.X..XX.X.", "X.X.XXX.XX", "X.X.XXX.XX", "X.XXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> values = {9, 5, 9, 7, 8, 1, 5, 7, 6, 6, 5, 8, 5, 1, 0, 3, 6, 8, 6, 4, 3, 8, 5, 3, 2, 1, 8, 0, 6, 2, 4, 7, 2, 6, 3, 0, 8, 3, 0, 6, 7, 1, 5, 4};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", ".....XX.X.", "...X.XX.X.", "XX.X.XXXX.", "XXXXXXXXX.", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> values = {6, 1, 5, 0, 1, 0, 3, 3, 5, 5, 6, 5, 9, 8, 6, 3, 1, 9, 6, 6, 8, 4, 1, 6, 4, 6, 8, 7, 6, 0, 6, 8, 3, 6, 0, 3, 8, 3, 5, 6, 0, 9, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X...", "......X...", "......X...", "......X...", "...X..X...", "X..X.XX.X.", "XX.X.XX.X.", "XX.X.XX.XX", "XX.XXXXXXX", "XX.XXXXXXX"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> values = {6, 5, 0, 8, 2, 2, 6, 3, 4, 3, 0, 8, 3, 2, 9, 2, 8, 5, 4, 1, 1, 5, 1, 0, 0, 4, 6, 7, 1, 0, 7, 9, 5, 0, 0, 9, 5, 4, 1, 3, 4, 3, 4, 3, 8, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X..XX.....", "XX.XXX....", "XXXXXXX.X.", "XXXXXXX.XX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> values = {7, 6, 8, 4, 1, 8, 1, 4, 6, 8, 0, 2, 0, 1, 5, 9, 2, 8, 8, 6, 8, 1, 6, 3, 8, 8, 9, 8, 0, 3, 4, 8, 6, 5, 7, 8, 5, 9, 6, 0, 8, 8, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "........X.", "......X.X.", "......X.X.", "XX....X.X.", "XX..XXX.XX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> values = {4, 4, 8, 0, 7, 1, 0, 0, 7, 2, 8, 8, 0, 8, 1, 0, 3, 6, 0, 9, 6, 6, 4, 0, 3, 4, 4, 7, 1, 6, 0, 5, 4, 5, 7, 0, 4, 2, 9, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X.........", "X...X.....", "X...X.....", "X...X.....", "X...X.XXX.", "XXX.X.XXX.", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> values = {6, 6, 3, 3, 5, 8, 1, 1, 1, 4, 4, 1, 3, 1, 7, 9, 5, 4, 8, 2, 8, 0, 8, 0, 8, 7, 0, 0, 7, 4, 6, 1, 0, 5, 1, 6, 1, 4, 6, 6, 1, 6, 5, 9, 6, 1, 5, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X........", ".X........", ".X....X...", ".X....X...", ".X....X...", "XX..XXX.X.", "XX..XXX.X.", "XX.XXXXXXX", "XX.XXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> values = {3, 4, 2, 3, 8, 8, 1, 1, 0, 5, 9, 0, 4, 8, 1, 4, 1, 1, 5, 9, 6, 9, 3, 9, 6, 0, 0, 9, 0, 0, 1, 2, 9, 0, 9, 6, 7, 0, 7, 0, 6, 1, 0, 3, 4, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X.........", "XX........", "XX.......X", "XX.......X", "XX.......X", "XX.XX.X..X", "XX.XX.X.XX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> values = {9, 5, 9, 9, 5, 5, 4, 5, 4, 3, 1, 0, 0, 9, 2, 0, 9, 0, 9, 4, 8, 6, 9, 3, 5, 9, 4, 4, 6, 9, 5, 8, 5, 3, 2, 1, 3, 5, 6, 3, 8, 9, 2, 9, 8, 6, 3, 9, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", ".........X", ".........X", ".........X", ".....X...X", ".....X...X", "...X.X...X", "...XXX...X", "X..XXXX.XX", "X.XXXXX.XX", "XXXXXXX.XX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> values = {2, 6, 3, 7, 2, 0, 1, 3, 3, 0, 0, 9, 0, 6, 3, 2, 1, 4, 0, 2, 0, 9, 8, 2, 8, 8, 7, 0, 1, 2, 9, 2, 8, 1, 2, 8, 0, 1, 9, 2, 2, 4, 7, 2, 8, 8, 8, 7, 2, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "X.X.....X.", "X.X.....X.", "X.X.....X.", "XXX.....X.", "XXXX...XXX", "XXXX...XXX", "XXXXX.XXXX", "XXXXX.XXXX"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> values = {9, 6, 5, 3, 0, 5, 3, 5, 0, 3, 2, 5, 6, 3, 4, 5, 5, 5, 1, 3, 9, 5, 6, 3, 5, 2, 7, 5, 2, 1, 4, 2, 5, 5, 8, 1, 3, 1, 6, 7, 5, 6, 3, 7, 6, 3, 9, 6, 8, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X....", ".....X....", ".....X....", ".....X....", "...X.X....", "...X.X....", "...X.XX...", "...X.XX...", "..XX.XX...", ".XXX.XX...", ".XXX.XXX.X", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> values = {1, 0, 7, 8, 5, 4, 9, 9, 2, 2, 5, 5, 2, 4, 4, 8, 6, 2, 6, 2, 7, 8, 7, 1, 9, 7, 2, 7, 8, 6, 2, 2, 4, 6, 8, 2, 2, 8, 2, 5, 3, 3, 7, 0, 1, 5, 5, 6, 9, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X..XXXX.", "..X..XXXX.", "..X.XXXXXX", ".XX.XXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> values = {7, 8, 5, 0, 9, 7, 6, 0, 2, 7, 7, 7, 7, 1, 2, 7, 3, 7, 1, 2, 3, 2, 5, 0, 7, 0, 7, 5, 8, 2, 8, 3, 3, 3, 7, 3, 7, 7, 2, 0, 8, 6, 0, 5, 3, 8, 6, 6, 2, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", "..XX...X..", "X.XX...X..", "X.XX...XX.", "X.XX.XXXX.", "X.XX.XXXX.", "XXXX.XXXX.", "XXXX.XXXXX"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> values = {3, 7, 2, 3, 2, 5, 4, 3, 9, 2, 6, 5, 8, 8, 9, 6, 2, 6, 7, 0, 5, 4, 2, 4, 6, 2, 5, 2, 8, 0, 6, 4, 2, 6, 2, 6, 2, 5, 2, 8, 0, 2, 4, 1, 6, 4, 1, 6, 2, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "..X.......", "..X.......", "..X.......", "..X.......", "..X.......", "..X...X...", "..X...X...", "..X...X...", "..X.X.X...", "..X.XXX...", "..X.XXX.X.", "X.XXXXX.X.", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> values = {6, 1, 4, 2, 9, 5, 6, 8, 9, 3, 2, 6, 4, 7, 0, 7, 5, 7, 6, 4, 8, 0, 6, 8, 8, 8, 8, 8, 9, 4, 4, 0, 9, 1, 6, 2, 6, 9, 3, 5, 6, 4, 6, 8, 4, 2, 1, 9, 9, 6};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X...", "......X.X.", "....X.X.XX", "....X.X.XX", "....X.X.XX", "..X.X.X.XX", "XXX.XXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> values = {0, 1, 6, 6, 4, 4, 3, 8, 6, 4, 8, 1, 5, 0, 6, 2, 1, 6, 6, 6, 2, 0, 6, 9, 6, 0, 7, 4, 0, 4, 8, 1, 5, 7, 6, 6, 9, 1, 7, 1, 6, 7, 3, 6, 6, 4, 6, 5, 4, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X...", "......X...", "......X...", "......X...", "......X...", "......X...", "......X...", "....X.X...", ".X..X.X...", "XX..X.X...", "XX..X.XX..", "XX..XXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> values = {1, 7, 9, 3, 5, 5, 0, 3, 7, 5, 5, 6, 7, 8, 7, 1, 5, 6, 1, 3, 2, 4, 7, 1, 7, 6, 5, 6, 4, 7, 7, 9, 7, 7, 7, 7, 0, 6, 2, 9, 8, 2, 4, 7, 7, 2, 4, 7, 5, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".....X.X..", ".....X.X..", ".....XXX..", ".XX.XXXX..", ".XXXXXXX.X", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> values = {5, 0, 4, 6, 1, 3, 2, 6, 4, 5, 9, 5, 2, 8, 5, 4, 4, 9, 2, 4, 8, 4, 8, 0, 9, 9, 8, 0, 6, 9, 7, 6, 5, 6, 8, 4, 0, 6, 4, 7, 2, 3, 4, 6, 4, 5, 8, 4, 4, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "....X.....", "....X.....", "....X.....", "....X.....", "....X.....", "....X.X...", "....XXX.X.", "..X.XXX.XX", "X.X.XXX.XX", "X.X.XXX.XX", "X.XXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> values = {8, 1, 5, 8, 4, 4, 5, 6, 5, 3, 7, 7, 2, 4, 8, 8, 6, 5, 6, 3, 7, 6, 8, 2, 2, 6, 6, 4, 3, 2, 6, 7, 2, 3, 6, 8, 1, 2, 6, 9, 4, 1, 3, 7, 8, 8, 3, 9, 6, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "......X...", "......X...", "......X.X.", "......X.X.", "..XX..X.X.", "..XXX.XXX.", "..XXXXXXX.", ".XXXXXXXXX", ".XXXXXXXXX", ".XXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> values = {6, 0, 3, 8, 9, 9, 9, 9, 0, 9, 3, 9, 0, 9, 9, 9, 9, 9, 0, 9, 8, 2, 9, 9, 5, 5, 9, 7, 9, 3, 1, 3, 0, 9, 6, 9, 2, 9, 9, 9, 9, 9, 9, 9, 9, 1, 2, 9, 9, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", "X........X", "X.XX.....X", "X.XX.....X", "XXXX.XX.XX", "XXXX.XXXXX"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> values = {3, 9, 9, 9, 9, 9, 2, 9, 5, 9, 9, 9, 9, 9, 9, 3, 0, 9, 9, 0, 9, 8, 6, 9, 4, 1, 2, 5, 4, 9, 9, 9, 9, 9, 9, 0, 0, 2, 6, 9, 0, 9, 2, 3, 0, 5, 4, 8, 6, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", "X........X", "X........X", "X.X......X", "X.XXXXX..X", "X.XXXXX.XX", "XXXXXXX.XX"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> values = {4, 4, 1, 1, 3, 1, 1, 1, 1, 1, 2, 1, 1, 5, 6, 8, 1, 3, 3, 0, 1, 1, 1, 1, 2, 1, 0, 1, 5, 3, 1, 1, 8, 1, 0, 2, 1, 0, 2, 1, 9, 2, 1, 6, 1, 1, 2, 1, 8, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".XX.......", ".XX.......", "XXXX......", "XXXX....X.", "XXXXXXX.X.", "XXXXXXX.XX"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> values = {1, 7, 7, 7, 5, 7, 7, 7, 9, 3, 7, 7, 7, 9, 7, 7, 7, 1, 7, 7, 4, 7, 5, 7, 9, 5, 0, 7, 0, 7, 7, 7, 4, 7, 4, 7, 7, 0, 6, 4, 7, 0, 0, 7, 7, 7, 7, 7, 7, 7};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", ".......X..", "X......X..", "X...X..X..", "X...XX.X.X", "XX..XX.X.X", "XX.XXXXX.X"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> values = {8, 1, 1, 1, 7, 2, 8, 2, 1, 7, 1, 1, 1, 1, 1, 7, 1, 1, 1, 3, 6, 1, 1, 1, 1, 5, 3, 7, 1, 1, 7, 0, 7, 1, 1, 1, 1, 4, 4, 4, 1, 6, 0, 1, 1, 1, 1, 1, 5, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X.....X..", ".X.....X..", ".X.....X..", ".X..X..X..", "XXXXXXXXX.", "XXXXXXXXX."};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> values = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X....", ".....X...."};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> values = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X......", "...X...X..", "...X...X.."};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> values = {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> values = {6, 2, 3, 3, 3, 7, 8, 1, 0, 9, 2, 2, 4, 3};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "...X......", "..XX......", "..XX......", "XXXXX.XXXX"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> values = {6, 4, 0, 0, 3, 9, 8, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.......X.", "X..XX.X.XX"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> values = {2, 3, 5, 5, 5, 2, 0, 8};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".....X....", "..X..X....", "X.XX.X..X."};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> values = {2, 3, 0, 0, 5};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X.XX.X...."};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> values = {5, 1, 4, 2, 5, 4, 2, 5, 1, 1, 4, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".XX.XX....", ".XX.XX....", ".XX.XX...."};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> values = {9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> values = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "XXXXXXXXXX"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> values = {9, 0, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", ".........X", "X........X"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> values = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".X........", ".XX.......", ".XX.......", ".XX......."};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> values = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ValueHistogram* pObj = new ValueHistogram();
    clock_t start = clock();
    vector<string> result = pObj->build(values);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", "X.........", "X.........", "X.........", "X.........", "X.........", "X.........", "X.........", "X.........", "X.........", "X.........", "X........."};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22855556&rd=15187&pm=12275
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
 
class ValueHistogram {
public:
  vector <string> build(vector <int>);
};
 
vector <string> ValueHistogram::build(vector <int> values) {
  vector<int> frec(10, 0); int mayor = 0;
  for(int i = 0; i < (int)values.size(); i++) frec[values[i]]++;
  for(int i = 0; i < 10; i++) mayor = max(mayor,frec[i]);
  vector<string> res; mayor++;
  for(int i = 0; i < mayor; i++) res.push_back("..........");
  for(int i = 0; i < 10; i++)
    for(int j = 0; j < frec[i]; j++)
      res[mayor - 1 - j][i] = 'X';
  return res;
}

********************************************************************************
*******************************************************************************/