/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1751
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

class BrickByBrick {
public:
    int timeToClear(vector<string> map);
};

int BrickByBrick::timeToClear(vector<string> map) {
    int ret;
    return ret;
}


int test0() {
    vector<string> map = {".B", "BB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> map = {".BB", "BBB", "BBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> map = {".BB", "BBB", "BB."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> map = {"......B", "###.###", "B.....B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> map = {".B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
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
    vector<string> map = {".#B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> map = {".BBB", "BB##", "BB#B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> map = {"....##", "..##.#", "B..B#B", ".B.##.", "B##...", "B.BBB#"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> map = {".B#.BBB.BBB", "#.B..#.B#B#", "B.#B.B.B#BB", "###BBB.#..#", ".BB..BB.#B#", "B.B#.B#B.B."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> map = {".B.#.", ".B.BB", ".#.#.", ".#B#.", "....#", "B#.BB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> map = {".#BB...", "B.#BBB#", ".B.B..#", "BB.B.B.", "...B.#B", ".BB.B..", "B.B#BBB", "..B..BB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 470;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> map = {"..BBB...", ".#BB..#.", "B.#B.B..", "B.B.....", "##.B.B#.", "#BB.#.B.", "B..B.BB.", "#..BB..B", ".B....#."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> map = {".BB..BBB.B...", "B.B...B..BB..", "#B...B#B.....", "B#B.B##...##B", "BB.B#.B##B.B#", "B.B#.BBB.BB#B", "B#BBB##.#B#B.", "B#BB.BBB#BB.#"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 3912;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> map = {".............", ".##.....##.#.", ".##...#......", "....#.#......", "..##...#.....", "#........##..", "....#........", ".........#.#B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> map = {"..B.#.B......B.", "...B.BBB.#B...#", "...BB..B.#BB..#", ".#B.#B..#....#B", "#...#...B.B.B#.", "B#B.#.B..#BB.##", "..B..#...#B#B#B", "B#.#....#..B#..", "B#B.#B.B.#B...#", "B.....#B##.#...", "B.#...B.BBBB##.", "..B..##.#B..BBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> map = {"....B..", "..B.#.#", ".#.B...", "..B.B.B", "#...B..", "B#.#B..", "..#BB.B", "BBBB..B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> map = {".B.....", ".......", "......#"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> map = {".......", "B......", "......#"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> map = {"...B", "....", "....", "#..."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> map = {"...#....B", ".BBBB.B..", "....##B##", "B..B..BBB", "...B...#.", ".B.BB..#.", ".......##", "..B##...B", "B....B..."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 1431;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> map = {"....#....", "B.#B#..B#", ".B.......", "#.#......", ".....#BB.", ".#...B.B.", "...B.....", "......#B.", "..#.B...."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> map = {"....B...#.....", "B.......BB.#..", ".BB..#.B...#.#", "#..#....#....#", ".#.#.#.B...###", "#...B#..B.....", "#.B...#.....#.", "B....B...#....", "..B........#..", "..B.........B."};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> map = {".BBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB", "B##############", "BBBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB", "B##############", "BBBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB", "B##############", "BBBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 31753;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> map = {".BBBBBBBBBBBBBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 391;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> map = {".", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B", "B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 392;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> map = {".BBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> map = {".BBBBBBB#BBBBBB", "B#BB#BBB#BBBBBB", "BBBBBBBBBBBBB##", "BBBBBBBBBBBBBB#", "BBBBBBBBBBB#BBB", "BBBBBBBBB#BBBBB", "B#B#BBBBBBBBBBB", "B##BBBBBBBB#BBB", "BB#BBB#B###BBBB", "##B#BBB#BBBBBBB", "BBB#BB#BBB#BBBB", "B#BBBBBBBBBBBBB", "B#BBB#BBB#BB#BB", "BB##BBBB##BBBBB", "BB#BBBBBBBBBBBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 11341;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> map = {".BBBB##BBB#BBBB", "BBB#BB##BB#B##B", "BB####BBBBBBB#B", "BBBBBB#BBB#BB#B", "BBBBBBBB#BBB##B", "BBBBBBB#BB#B##B", "BBBBBBBBB#BB#BB", "BBB##BB#B###BB#", "##BBBBBBBBBB#BB", "BBBB#B#B#B###BB", "BBB#B#BBBB#BBB#", "#BB#BBBBB#BBBB#", "BBBB#BB#B#BB#BB", "BB###BBB#B#BBBB", "#BBBBB#BB#BB#BB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> map = {".BBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBB#B", "B###########B#B", "B#BBBBBBBBB#B#B", "B#B#######B#B#B", "B#B#BBBBB#B#B#B", "B#B#B###B#B#B#B", "B#B#B#BBB#B#B#B", "B#B#B#####B#B#B", "B#B#BBBBBBB#B#B", "B#B#########B#B", "B#BBBBBBBBBBB#B", "B#############B", "BBBBBBBBBBBBBBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 31765;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> map = {".B", "BB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> map = {"......B", "###.###", "B.....B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> map = {".BBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB", "B##############", "BBBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB", "B##############", "BBBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB", "B##############", "BBBBBBBBBBBBBBB", "##############B", "BBBBBBBBBBBBBBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 31753;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> map = {".BB", "BBB", "BBB"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> map = {".BB..BBB.B...", "B.B...B..BB..", "#B...B#B.....", "B#B.B##...##B", "BB.B#.B..B.B#", "B.B#.BBB.BB#B", "B#BBB##.#B#B.", "B.BB.BBB#BB.#"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> map = {".BBBBBBBBB", "..BBB##BBB", ".#BBBB###B", "##BBBB...B"};
    BrickByBrick* pObj = new BrickByBrick();
    clock_t start = clock();
    int result = pObj->timeToClear(map);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7290949&rd=4555&pm=1751
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <ext/algorithm> 
#include <ext/numeric> 
using namespace std; 
using namespace __gnu_cxx; 
class BrickByBrick 
{ 
public: 
  int timeToClear(vector <string> map); 
// {{{ 
   
 
// }}} 
}; 
 
class state 
{ 
public: 
  state() {} 
  state(int x, int y, int velx, int vely) : _pos_x(x), _pos_y(y), _velx(velx), _vely(vely) { } 
  bool operator== (const state &oth) { 
    return(_pos_x == oth._pos_x && _pos_y == oth._pos_y && _velx == oth._velx && _vely == oth._vely); 
  } 
private: 
  int _pos_x, _pos_y, _velx, _vely; 
}; 
 
struct brick 
{ 
  brick(int p_x, int p_y, bool b) : x(p_x), y(p_y), isbrick(b) {} 
  int x, y; 
  bool isbrick; 
}; 
 
int BrickByBrick::timeToClear(vector <string> map) 
{ 
  int vel_x=1, vel_y=1; 
  int pos_x=1, pos_y=0; 
  int num_bricks = 0; 
  int time = 0; 
  vector<brick> blocks; 
  vector<state> old_states; 
   
  for(int i=0; i<map.size(); i++) 
  for(int j=0; j<map[i].size(); j++) 
  { 
    if(map[i][j] == 'B') { 
      num_bricks++; 
      blocks.push_back( brick(j*2, i*2, true) ); 
    } else if(map[i][j] == '#') { 
      blocks.push_back( brick(j*2, i*2, false) ); 
    } 
  } 
   
  int field_width = map[0].size() * 2, field_height = map.size() * 2; 
  while(1) 
  { 
    state now(pos_x, pos_y, vel_x, vel_y); 
     
    for(int i=0; i<old_states.size(); i++) 
      if(old_states[i] == now) return -1; 
     
    old_states.push_back( now ); 
     
    for(int i=0; i<blocks.size(); i++) 
    { 
      if(pos_x >= blocks[i].x && pos_x <= blocks[i].x + 2 && pos_y >= blocks[i].y && pos_y <= blocks[i].y + 2) 
      { 
        if(pos_x == blocks[i].x) 
          vel_x = -1; 
        else if(pos_x == blocks[i].x + 2) 
          vel_x = 1; 
        else if(pos_y == blocks[i].y) 
          vel_y = -1; 
        else 
          vel_y = 1; 
         
        if(blocks[i].isbrick) { 
          blocks[i] = blocks[blocks.size()-1]; 
          blocks.pop_back(); 
          num_bricks--; 
          old_states.clear(); 
          if(num_bricks == 0) 
            return time; 
        } 
      } 
    } 
     
    if(pos_x <= 0) 
      vel_x = 1; 
    if(pos_y <= 0) 
      vel_y = 1; 
    if(pos_x >= field_width) 
      vel_x = -1; 
    if(pos_y >= field_height) 
      vel_y = -1; 
     
 
    pos_x += vel_x; 
    pos_y += vel_y; 
     
    time++; 
  } 
   
  return -1; 
} 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/