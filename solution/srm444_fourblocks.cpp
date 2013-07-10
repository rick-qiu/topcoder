/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10487
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

class FourBlocks {
public:
    int maxScore(vector<string> grid);
};

int FourBlocks::maxScore(vector<string> grid) {
    int ret;
    return ret;
}


int test0() {
    vector<string> grid = {".....1..1..", "..1.....1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {"...1.", ".....", ".1..1", ".....", "1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grid = {"...1.", ".1...", "..1.1", "1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
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
    vector<string> grid = {".....1...", ".....1...", "111111111", ".....1...", ".....1..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grid = {"........", "........", "..1111..", "..1111..", "........", "........"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grid = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {"............1............", ".........................", "............1............", ".........................", ".........................", "............1............", ".........................", ".........................", ".........................", "............1............"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grid = {"......................", "......................", "......................", "....11111111111111....", ".........11111111111..", ".................1111.", "......................", "......................", "............1.........", ".............1........"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 700;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grid = {"........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grid = {".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grid = {"......................", "......................"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grid = {".1.........11.........", "..1.1......11........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"..", ".."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {"..............", "...1..........", "..............", "....1.........", ".......1......", "..1...........", "..............", "....1......1..", ".............."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 414;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> grid = {".1......1..", ".1.........", "...1.......", "...........", "....1.1....", "...........", "........1..", "..........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 292;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {".......................", ".........1..........1.1", "....1..................", ".1....1................", "1......................", ".......................", "......................1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 521;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grid = {".............1.", "...............", "...............", "...............", "11........11...", "......1..1.....", "...............", "...............", "...............", "......1........"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 522;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grid = {"...........", "...........", "1......1...", "...........", "...........", "...11......"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 222;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"..............", "..1.1.1.......", ".........1...1", ".......1......", ".............."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grid = {".1........1.......1.....", "..1..............1...1..", "......1.1..1....1.......", ".....................1..", "........................", "......11.......1........", "..1..........11.........", "...........1............"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 648;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"....1.....", "..........", "....1..1..", "..........", "....1.....", "....1.1...", "1.....1...", ".....1.1.1", "1........1", "......1.11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grid = {"............1.", "..............", "..1.....1.....", ".......1.....1", "1.............", "...1.....1....", "...1.....1.1..", "..............", "..........1...", "1...1...1....."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grid = {".1.............1...", "......1....1.....1.", ".......1...........", ".....1...1.........", "...1.1...1.......1.", "..1................", "......1....1.......", "....1..1..........1", "...1.1..........1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 507;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {"1.........", "11...1....", "1.....1...", "1........1", ".....1.1..", "...1....11", "..........", ".1.1...1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"....11....11..1.", ".....1...1..1..1", "1..11..1...1....", "11.1...1.....1..", ".11.........1...", "....1.........1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {".......11...", "11.........1", "....1.......", ".......1..1.", "..........1.", "..1...1.....", "...11.1...11", "1.1........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {"......1.....1", "1......1....1", "...1.....11..", "......1.....1", "...1.........", "......1.1...1", ".............", "..1.11...1...", ".1....1....1.", "...1........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 358;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grid = {"1.....1.......1........11", "....1....1.....1.....1...", "...1..1......1.......11..", "....1.1......11....1.1..1", "1.......1..............1.", ".1...1......1............", "...................1.....", "...1....1...1.1........1.", "...11..1.........1......."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 609;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grid = {"...1...111..1.......", ".1..1..11..1..1.111.", "1.11...1..1..111..1.", "11.11.1..11..1.111.1", "11..1...111........1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grid = {".11.1..1.11..1.1111..", "1.1.1....111........1", "1.1..11...111.......1", ".11....1.....11111.1.", "..1..11..11.1...1..1.", "1.1.1.1.1111.....1.1.", ".11.1..1..1.1....1.1.", ".....11...11111.1.1..", ".11....11...11.1....1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 309;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grid = {"...1.1...11.11.", ".111111.1...11.", "..1..1.1.1111..", "...1..1..11....", ".1..11......1..", "...1...1.......", "1..111.11.1....", "11..1..1111..1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 204;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {"111...1.1..1", "11.......111", "........11..", ".1.1111.1.1.", "....1..111..", "....1..1111.", "111.11....1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {".....11.....1.1.....1..", "..1.1.1.1..1.1.1.1....1", "1.1....11...1.1.11111.1", ".111111.......1..1...1.", "....1......1111.111....", "1..111.1111.1.1..1.111."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 222;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {"..11.1.1.1.1...1", "1.1111..1..1...1", "111.11...111..11", ".111.1.11.11.11.", ".11.1111..1.1111", "1..1.11..11111..", "1111.1111.111..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {".1111.1.1.11111111.1.1..", "11111111.11111111111.1..", "11..11...1.11..1..11..11", ".1...111.11..111...1111.", "11.1...1.1111111..1..111", "111111.11111...1..11.1.1", "1..111.11..11.1...11...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grid = {"1..11.1.1..1.11", "...1...111.1111", "1.11...1..11111", "11..11.11.11111", ".1.1111111.1111", "..1111..11....1", "...111..1111.11", ".111..11.1..1.1", "111111111111..1", "..111111111.1.1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {".1.111.1111111..1111", "11.1.....1..1.1....1", "111..111.11111111.11", "...1.1...1.1111..11.", "11.111.11111.11..111", "1111..1111..1..1.1.1", "11.111.11111.111..11", "11111.111.1111.1.111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grid = {"1.11.111..111.11.1.", "1.1..1.111.1.111..1", "..11..1.11111..1111", "111..11.11..1.1111.", "111...1..1..111..11", "11.11111...1.1111..", "11.111111.11.1.1..1", ".111.11.11.11.11.11", "..1111.1..1...1111.", "1.1..1.1..1.11.1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grid = {"11..111.11", "1.11...111", "11.1111111", "111..1.1..", "111..11111", "1111111111", "111111...1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grid = {"11111.111111.11.111.", "1111111.111111111111", "11111111111.1111...1", ".1111.1111.1.1111.1.", "1111.1.1111111111.1.", "11111.1.1.11.1.11.11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {".1.11111...1111.1.1", "11111.1..11.1111111", "11.1111.1111.111...", "1.1111111111.11.111", "1111.1.111.1111.11.", "11.1111.111.111111.", "111.11111111..11111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {".1111.111.11111.111111", "111111111111111111.111", "111.11.111.11111.11111", "11111..11111111.111.11", "11111111111111111.1111", "11111..111111111.1.111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {"11.11111111", "1111111..11", "111.1..1111", "11.1111.111", "11.11111111", "111...1111.", "111111.111.", "111111.11.1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {"11111111111", "11111111111", "1.111111111", ".1111111111", "11111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {"11111111111111111111111", "111.11111111.111.111111", "11111111111111111111111", "1111111111111111.1.1111", "1111.111111111111111111", ".1111111111111111111111", "11111111111111111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {"11111111.111111111111", "111.11111111111111111", "111111111111111111111", "111111111111111111111", "111111.11111111111111", "1111.1111111111111111", "11.111111111111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {"1111111111111111111111", "11111111111111111.1111", "1111111111111111111111", "1111111.11111111.11111", "1111.1111111..11111111", "1111111111111111111111", "1111111111111111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 154;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {"1111.1111.111111", "1111111111111111", "11.11111.1.11111", "111111.1111.1111", "11.111111111.111", "1111111111111111", "1111111111111.11", "11111111.1111111", "1111111.11111.1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {"11111111111111111", "11111111111111111", "11111111111111111", "11111111111111111", "1111111111111111."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {"1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111.11111111111111111111", "1111111111111111111111111", "1111111111111111111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grid = {"111111111111", "111111111111", "1111111.1111", "111111111111", "111111111111", "111111111111", "111111111111", "111111111111", ".11111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111", "111111111111111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {"1111111111111", "1111111111111", "1111111111111", "1111111111.11", "1111111111111", "1111111111111", "1111111111111", "1111111111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {"1..1", "....", "...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {"....", "....", "1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {"1..", "...", "...", "1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {"..1", "...", "...", "..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grid = {"....11..1", "....1....", "1..11....", "111111111", "1..111..1", "1...1...1", "1...1...1", "1..111..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grid = {"....11..11....11..11....", "....1....1....1....1....", "1..11....11..11....11..1", "111111111111111111111111", "1..111..111..111..111..1", "1...1...111...1...11...1", "1...1...111...1...11...1", "1..111..111..111..111..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 432;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grid = {".........................", ".........................", "..111111111111111111111..", "..1..1...1....1....1..1..", "..1..1...1....1....1..1..", "..1..1...1....1....1..1..", "..1..1...1....1....1..1..", "..111111111111111111111..", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 778;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grid = {".........................", ".........................", "..111111111111111111111..", "..1...................1..", "..1...................1..", "..1..111111111111111..1..", "..1..1.............1..1..", "..1..1.............1..1..", "..1..1..1...11.11..1..1..", "..1..1....1.1.1....1..1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 742;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grid = {".1...1.1", ".11....1", ".111..11", ".111.1..", ".11..1.1", ".111..1.", "..1.....", ".11..1.1", ".11..111", ".11..111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grid = {"111......11......11......", "111......11..11..11......", "111..11..11..11..11..11..", "111..11..11..11..11..11..", "111..11..11..11..11..11..", ".....11......11..11..11..", ".....11......11......11..", "..111111111111111111111..", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grid = {"1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1111111111111111111111111", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 463;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grid = {"1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> grid = {"11.1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grid = {"1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1.11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grid = {"1..1..1..1..1..1..1..1..1", "1........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grid = {"11.1..1..1..1..1..1..1..1", "1........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 814;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grid = {"1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", "........................1", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grid = {"................1..1..", "...1...1...1...1...1..", "...1...1...1...1...1..", "...1...1...1...11..1..", "...1...1...1...11111..", "...1...1...1...1......", "...1...1...1...1......", "...1...1...1...1......", "...1...1...1...1......", "...1...1...1...1......"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 592;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grid = {"....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1....", "....1...1...1...1...1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 730;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grid = {"...1...1...1...1...1...1.", "...1...1...1...1...1...1.", "1111111111111111111111111", "...1...1...1...1...1...1.", "...1...1...1...1...1...1.", "...1...1...1...1...1...1.", "1111111111111111111111111", "...1...1...1...1...1...1.", "...1...1...1...1...1...1.", "...1...1...1...1...1...1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 466;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grid = {"1........................", ".1.......................", "..11.....................", "....11...................", "......111.....11.........", ".........111....111......", "...................11....", ".....................11..", ".......................1.", "........................1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 838;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grid = {".........................", "........1..............1.", ".........................", ".........................", ".....1.....1........1....", ".........................", ".........................", "..1...........1..1.......", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grid = {".....1...................", ".....1...................", ".....1...................", ".....1...................", "1111111111111111111111111", ".....1.....1.....1.....1.", ".....1.....1.....1.......", "..1..1..1..1..1..1..1..1.", ".....1.....1.....1.......", ".....1.....1.....1.....1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 706;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grid = {"1..111..111..111..111..11", "....1....1....1....1....1", "....1....1....1....1....1", "....1....1....1....1....1", "....1....1....1....1....1", "1..111..111..111..111..11", "1111111111111111111111111", "1..111..111..111..111..11", "....1....1....1....1.....", "....1....1....1....1....."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> grid = {"....1....1....1....1.....", "....1....1....1....1.....", "....1....1....1....1.....", "....1....1....1....1.....", "....111111....111111.....", "11111....111111....111111", "....1....1....1....1.....", "....1....1....1....1.....", "....1....1....1....1.....", "....1....1....1....1....."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 730;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grid = {"1...11...11...11...11...1", "....1....1....1....1....1", "....1....1....1....1....1", "1111111111111111111111111", "1...11...11...11...11...1", "....1....1....1....1....1", "....1....1....1....1....1", "1...11...11...11...11...1", "....1....1....1....1....1", "....1....1....1....1....1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grid = {"1..11..11..11..11..11..1.", "........................1", ".........................", "1..11..11..11..11..11..1.", "........................1", ".........................", "1..11..11..11..11..11..1.", ".........................", "........................1", ".1....1..1....1..1....1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grid = {"..1......1..........1.1.1", ".............11.......1..", "..1.....1..1.......1.....", ".....1......1...1..1.....", "1...................1..1.", ".......11.11.............", "...1..................1..", ".....1..1..1...1........1", "1...............11.......", "....1.1.1.11..........1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 730;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grid = {"....1.....1.1..........1.", ".......1.....1......11..1", "................1........", "..........1......1.......", "..1...11.................", ".......1..........1..1...", ".1..1..1....11...........", ".......1..11............1", "1.1..1.......1..11.......", "...1....................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grid = {".........................", ".1.....1.................", "....1.............1....1.", "1............1...........", "..............1.......1.1", "...1...1.1.............1.", "...1...................1.", "....1.........1.........1", "..........1....1.........", "1.........1...........1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 802;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grid = {"..................1......", "........1................", ".........................", "..............1..........", ".1.......................", ".........11..............", "..1...........1.....1..1.", ".........1...............", ".......................1.", ".....1.......1..........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 862;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grid = {"..1........1...1..1..1.11", "......1.............11..1", ".1.1..11.11.........1....", ".1...11.....1....1.1.1.1.", "1.......11....1.1..1.....", "...1.1..1....1.1.........", "..1.11...1......1......1.", "...1......11.....1.......", ".11.1...11....1.11..1....", "1.....1.1.........1..1..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 610;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grid = {"1......1.........1....1.1", "...1.....................", ".....................1...", ".........1......1....1..1", ".............11..........", "..1..............1.......", ".........1.1.1.......1.1.", "................1....1...", ".............11.........1", "..1...1.......1.1.1......"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grid = {"......1............1.....", ".1....1..................", ".11....1..1....1.......1.", ".........1..........1....", ".1.......1.1......1......", "......111..........1..1..", "...1........1....1...11..", "1......1..1..............", "11....11.......1...1...1.", "....1.....11..........1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 718;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grid = {"........1...1..........1.", ".............1...........", ".....................1.1.", ".....1.....1.......1...1.", ".........1........1.11...", "....1.1......1...........", "111..1.1.1.1...1...1.....", ".1.....1.11....1......1..", "...........1...1.....1..1", "................11..1.1.1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grid = {".....................1..1", "1......1.................", ".........................", "....................1...1", ".........................", "......1....1............1", ".1.................11....", "..........1.1...11.......", "1..........1...........1.", "...............1........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 838;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> grid = {"......1...1..............", "..1.1...............1....", ".1.........1.............", ".........1.1.1...1.1.....", "1.1.......1.......1.11..1", "1.1................1.....", "1..1.1.1.1...1.........1.", "..1.....11..............1", ".1.........1.............", "................1......1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 682;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> grid = {"..............1.........1", "......1.............1....", ".....................1...", ".........................", "....1.1......1.......1..1", "...................1.....", "..1....................1.", ".............11..........", ".................1.1....1", "...................1....."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 838;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> grid = {"1....................11..", "..1.1.1.1.......111......", "1.....1.1................", "...1...............1.....", "...............1......1..", "1............1...........", ".11..1.......1......1....", "....1.1....1........1....", "..1............1...1.....", "1..11................1..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 730;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> grid = {"1...........1............", "..........11.1...1.....1.", ".......................1.", "..1.1...1..11...1........", "................1....1...", "..1.1....................", ".1............1..........", "....1....................", "1.............1..........", ".......1.........1......."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> grid = {"11.1.11...........1...1..", "................11.1..1..", "........11.1..1......1...", ".........1....1.11...1111", ".11.1.......1........1...", "......11.1.....1.1...1...", ".111..1..........1.1.11..", "..1..1.....1.11.1....1...", "11..1.1.....1..1.....1...", "......1...1....11....11.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 598;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> grid = {".11.1..1.", "1...1....", "....11...", "..1.1.11.", "111111111", ".11.1.1..", "...11....", "....1...1", ".1..1.11."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> grid = {"11.11.1.1", "1........", "....1....", "......1..", ".........", ".........", "11.1..1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 183;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> grid = {"1..1................1..1.", "...1.......1.11....1....1", "...1.1....1....1...1....1", "1..1......1....1....1.11.", ".111...........1.........", "....1....1.....1......11.", ".....1.....111.1111..1..1", ".....1....1...1....1.....", "....1......1..1....1.1...", ".1.1......1....1..1.....1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 658;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> grid = {"1..11..1111111111..11.1.1", "....111.1111111..1..111..", "....1.1111......1.1111.1.", "111111..111.11...1....11.", "1...11.11..1..1.....111.1", ".1...11.11.11111..1.1.1.1", "..1..1..1......1.1..1.111", ".111..1.11.1..1.11111111.", ".1...1....1111.11..1...11", "1111.111111...1.1111....1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> grid = {"...............1.....1..1", "...1......1......11..1...", "1..1...1.....1......1.11.", ".....1......1......1.....", "......1..1.....1.1...1...", "....1..1.......1........1", "..............1...1....11", ".......11...1.....1......", ".1.1.......1......1.1..1.", "1................1.1....."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> grid = {"11.....1...1............1", ".....1....1.......1....1.", "1.1.........1.11..1.11...", ".1......1...1..1..1..1..1", "1......1..111.1..1....1..", "..1.1....1........11...1.", "...1.1...1..........1....", "....1.1.1...........1...1", ".....111...11............", "...........1..1....1....."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 622;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> grid = {"111..1111.1..1.1......1..", "........1.1..1.....1.....", "........1.1..1..1........", "111111111....1.1......1..", ".....1...1...1.1.........", "11...1...11..1....1......", "..1..1....1..1........1..", "..1..1...11..1..1........", "..1..1....1111.......1...", "..1..1....1......1.....1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> grid = {"1...", "....", "...1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> grid = {"11111111111111111", "1...11..11..11111", "....1...11..111..", "..111..11...1....", "11111..11..11...1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> grid = {".....1..1..", "..1.....1.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> grid = {"1...11....", "....1.....", "..111..111", "..111..111", "..11111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> grid = {"...1.", ".1...", "..1.1", "1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> grid = {"1...1...1...1...1...1...1", ".........................", ".........................", "11..1111111111111111.1111", "1..1..1..................", "...1......1..............", "...1...1..1..........1...", "1..1..1...1..............", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 778;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> grid = {"1..1....1..1............1", "....1...1..1...........1.", "....11..1..1...1.1....1..", "111111111..1.....1...1...", ".....1.....1........1....", ".....1.....1.......1.....", "111111111111......1......", "..........1.1.1....1.....", "..........1...1.1...1....", "..111111111....1.....1..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 658;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> grid = {"1...1...111...1....1", "....1....1....1....1", "....1....1....1...11", "111111111111..111111", "....11...11...11...1", "....1....1.........1", "1...1..............1", "111111..1.1...1..111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> grid = {"11111", "11..1", "1....", "1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> grid = {"1...", "....", "..11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> grid = {"1...1...................1", "....1..1........1........", "..111.....1.......1......", "..1......................", "..1.....1.1..............", "...1......1..1...1....1..", "...11.....1..1........1..", "....1.....1..111...1111..", "..........1....1.........", "1.........11...1........1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 766;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> grid = {"1...", "....", "...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> grid = {"11..11", "1....1", "1....1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> grid = {"1..1", "....", "...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> grid = {".........................", ".........................", "...........1.............", ".........................", "..............1..........", ".........................", ".....................1...", ".........................", ".....1...................", "........1................"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 934;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> grid = {"..1................1.....", ".....1......1....1....1.1", ".........1....1..1.....1.", ".....1....1........1.....", "....1.11...1......1...1..", "..1.......1.1.....11..11.", "...1............1...1....", ".........1........1..1...", "1..1.1.11...11...........", "1........1.1.1........111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 658;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> grid = {"...1.", "..1..", ".1..1", ".....", "1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> grid = {"............1..", "......1..1...1.", ".1.1.11...11...", "........1......", "..1.1.1........", "1111...1......1", "1......1.......", "..............1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> grid = {"1111111....1...", "11..11.1...1...", "1....11111111.1", "1....1..11.1.1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> grid = {"1...1...11.........", "....1....1.........", "...111...1.........", "1111111111.........", "1..11..111.........", "...11...11.........", "...11...11.........", "..1111..11........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> grid = {"1...", "....", "..11", "1111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> grid = {"1.............11....11..1", "......11..1...1...11...1.", ".........1.11..1.........", ".11....1.11.1.111....1.1.", "1...1..11.....11.1.11..11", "1...1111.....1.1.....111.", "..111..1.....1......1...1", ".11..1.............1..1..", ".11.....1.......1........", ".....1111....1...11.11..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 574;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> grid = {"..1111", ".....1", "1....1", "1....1", "1....1", "111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> grid = {"11..1", "1....", "1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> grid = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> grid = {".........................", ".....1..........1........", ".........................", ".....................1...", "............1............", ".........................", "...1..............1......", "......................1..", "....................1....", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 922;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> grid = {".1..1...........1...1.1..", "1....1............1...1..", "1....1...1...1....1......", "111111.......1.1.1....1..", "..1.1....1.1.......1.....", "...1.1..........1......1.", ".....1....1.......1......", ".......1.......1.........", "...1........1.........1..", "..........1.....1......1."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> grid = {"1..111..", "....1...", "....1...", "111111.."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> grid = {"1...1", ".....", "..1.1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> grid = {".........................", "......1..................", "............1.......1....", ".........................", "....1.....1..............", ".................1.......", ".....1...................", "....................1....", "....................1....", ".....1...1...1..........."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> grid = {"...1...111...11...1....", ".11.11...1...1..1......", "....1........1.........", "1....1....1......111111", ".11.11...1...1..1......", "...1...111...11...1....", ".......................", ".......................", "...1...111...11...1...."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 543;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> grid = {".1..1..1..", "1....1..1.", ".....1....", ".1111.1.1.", "..1....1..", "..1....1..", ".111..111.", "....11....", "....11....", "1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 232;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> grid = {"1.....", "......", "......"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> grid = {"111..11....11..1..111", "11....1....1...1...11", "11....11..11...1...11", "1111111111111..1..111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> grid = {"..........1..............", ".........................", "..........1..............", ".........................", "..........1..............", ".........................", "..........1..............", ".........................", "..........1..............", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 970;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> grid = {"1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1", ".........................", ".........................", "1..1..1..1..1..1..1..1..1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 826;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> grid = {"1....", ".....", "...11", "1..11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> grid = {".....1...................", "......1...1......1.......", "..1..................1...", "1......1.....1....1......", "...1.........1.......11..", ".....1....1....1....1....", "....1........111.........", ".1.....11.........11.....", "..........1........11....", "......................111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 754;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> grid = {"1..11..1........", "................", "........1..11..1", "1111111111111111", "........1..11..1", "................", "1..11..1........", "1111111111111111", "1..111..11111111", "1..111..11111111"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 376;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> grid = {"11..1", "....1", "..1..", "1....", "1..11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> grid = {"1...1...111..1..11", "....1....1...1...1", "..11111..1..111..1", "11.....111..111..1", "..11111..111111111", "....1....1..111..1", "1...1...11..111..1", "1111111111...1...1", ".........11..1..11"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 354;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> grid = {"1...1...1", "....1....", "..11111..", "111111111", "..11111..", "....1....", "1...1...1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> grid = {"1.........11111....1..1..", "....1111........11...1...", ".1.......1........1..11..", "....11.......111111......", ".......1...1......1...1..", ".1..1..1..11..1...1111...", ".........1.1...1.1.1.....", "....11..1..1....1....1...", "...1......111....1.....1.", "1..1.....11.....1....1..."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 586;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> grid = {".........................", ".........................", ".........................", "........................."};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 388;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> grid = {"1...11..1...1", "....1...1....", "....1...1....", "11111...11111", "1111111111111", "11111...1..11", "....1...1...1", "....1...1...1", "1...1..11...1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> grid = {"1..1..111111111111", "...1...11...1...11", "...1...1....1....1", "..111..1...111...1"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 168;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> grid = {"11..11", "1....1", "......", "......"};
    FourBlocks* pObj = new FourBlocks();
    clock_t start = clock();
    int result = pObj->maxScore(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7446789&rd=13898&pm=10487
********************************************************************************
#include<iostream> 
#include<ctime> 
#include<cstring> 
#include<algorithm> 
#include<sstream> 
#include<string> 
#include<vector> 
#include<cmath> 
#include<cstdio> 
#include<cstdlib> 
#include<fstream> 
#include<cassert> 
#include<numeric> 
#include<set> 
#include<map> 
#include<queue> 
#include<list> 
#include<deque> 
 
using namespace std; 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
 
#define all(x) (x).begin(),(x).end() 
#define CLEAR(x,with) memset(x,with,sizeof(x)) 
 
int cache[26][1<<10]; 
 
struct FourBlocks  
{ 
  vector<string> grid; 
  vector<int> column; 
  int go(int x, int occupied) 
  { 
    if(x == column.size()) return (occupied == 0 ? 0 : -987654321); 
    if(occupied & column[x]) return -987654321; 
 
    int& ret = cache[x][occupied]; 
    if(ret != -1) return ret; 
 
    ret = 0; 
    for(int fours = 0; fours < (1<<(grid.size()-1)); ++fours) 
    { 
      if(fours & (fours*2)) continue; 
      if(column[x] & (fours | (fours*2))) continue; 
      if(occupied & (fours | (fours*2))) continue; 
      int M = __builtin_popcount(fours); 
      int cand = M * 14 + grid.size() - __builtin_popcount(occupied) + go(x+1, fours | (fours*2)); 
      ret = max(ret, cand); 
    } 
    return ret; 
  } 
  int maxScore(vector <string> grid)  
  { 
    this->grid = grid; 
     
    column.resize(grid[0].size()); 
    for(int y = 0; y < grid.size(); ++y) 
      for(int x = 0; x < grid[0].size(); ++x) 
        if(grid[y][x] == '1') 
          column[x] += (1<<y); 
    CLEAR(cache,-1); 
    return go(0, 0); 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.11 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/