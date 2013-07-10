/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9871
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

class FloorIndicator {
public:
    double averageFloor(int N, vector<string> indicator);
};

double FloorIndicator::averageFloor(int N, vector<string> indicator) {
    double ret;
    return ret;
}


int test0() {
    int N = 1;
    vector<string> indicator = {"###", "#.#", "#.#", "#.#", "###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    vector<string> indicator = {"###.###", "#.#.#.#", "#.#.#.#", "#.#.#.#", "###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 44.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 1;
    vector<string> indicator = {"...", "...", "...", "...", "..."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 1;
    vector<string> indicator = {"###", "..#", "..#", "..#", "..#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 1;
    vector<string> indicator = {"###", "#.#", "#.#", "..#", "###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.666666666666667;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 1;
    vector<string> indicator = {"###", ".#.", "...", "...", "..."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 1;
    vector<string> indicator = {"###", "#.#", "###", "#.#", "###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    vector<string> indicator = {"###.###", "#.#.#.#", "#.#.###", "#.#...#", "###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 48.5;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 2;
    vector<string> indicator = {".......", ".......", ".......", ".......", "......."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 49.5;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 1;
    vector<string> indicator = {"...", ".#.", "...", "...", "..."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 1;
    vector<string> indicator = {"###", "..#", "..#", "..#", "..#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 1;
    vector<string> indicator = {"###", "...", "#.#", "...", "..#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.714285714285714;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 9;
    vector<string> indicator = {"...................................", "...................................", "...................................", "...................................", "..................................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 1;
    vector<string> indicator = {"###", "###", "###", "###", "###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 2;
    vector<string> indicator = {"###....", "#.#....", "###....", "#.#....", "#.#...#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 84.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 3;
    vector<string> indicator = {"...........", "...........", "...........", ".........#.", "..........."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 1;
    vector<string> indicator = {"###", "#.#", "###", "#.#", "###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 1;
    vector<string> indicator = {".##", "..#", ".##", "..#", ".#."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 6.666666666666667;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 1;
    vector<string> indicator = {"...", "...", "...", "...", "..."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 1;
    vector<string> indicator = {".#.", ".#.", "#.#", "#.#", "..."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 2;
    vector<string> indicator = {".......", ".......", ".....#.", ".......", "..#...#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 50.285714285714285;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 2;
    vector<string> indicator = {"..#...#", "#.....#", "..#..#.", ".......", "..#..##"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 58.83333333333333;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 2;
    vector<string> indicator = {".#.....", "#.#....", ".#..##.", "#......", ".##...#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 85.28571428571429;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 2;
    vector<string> indicator = {"###.##.", "#...#.#", ".##...#", "#.#...#", "##..###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 75.66666666666667;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 2;
    vector<string> indicator = {"###.###", "#.#.#.#", "###.###", "#.#.#.#", "###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 88.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 2;
    vector<string> indicator = {"###.###", "#.#.#.#", "###.###", "###.#.#", "###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 3;
    vector<string> indicator = {"...........", "...........", "....#...#..", "#.#........", "..........."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 517.5416666666667;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 3;
    vector<string> indicator = {"...........", "...........", "...........", "...........", "..........."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 499.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 3;
    vector<string> indicator = {"...........", "...........", "...........", ".........#.", "..........."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 3;
    vector<string> indicator = {"###.###.###", "#.....#...#", "###..#..###", "....#.#.#.#", "###...#.#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 788.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 4;
    vector<string> indicator = {"....###...#..##", "....#...#...#..", "###..#..##...#.", "#.....#...#.#.#", "#.......##..#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 6110.333333333333;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 4;
    vector<string> indicator = {".##.#.#.###..##", "#.#.#.#.#...#..", "###..##.#.#.#.#", "#.#.#.#.#.#...#", ".##.###.###.##."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8852.266666666666;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 4;
    vector<string> indicator = {"............#..", "#...........#..", "#.#..#...##....", "#.#.#.........#", "..#.#.......#.#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5258.4571428571435;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 5;
    vector<string> indicator = {"...................", "...................", "...................", "...................", "..................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 49999.5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 5;
    vector<string> indicator = {"#.#.###.##..###..##", "..#.#.#.#...#.#.#..", "###..#..##..###..##", "#.....#...#.#.#...#", "###.###.###.###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 59287.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 5;
    vector<string> indicator = {"........#.....#...#", "#...#.#............", "........#....#.....", "..............#.#..", ".#..##..#...#.....#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 62204.09523809524;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 6;
    vector<string> indicator = {".#..##..##....#.#.#.#..", "#.#..##.#...#..........", "###.#.#...#.#.#.##..#.#", "#.......#.#.#.....#.#.#", "###......#...#..#...#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 6;
    vector<string> indicator = {"###.###.###.###.###.###", "..#.#.#.#.#.#.#.#.#.#..", ".##.###.###.###.##..###", "#.#.#.#.#.#.#.#.#.#.#.#", "##..###.###.###.#.#.#.#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 888887.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 6;
    vector<string> indicator = {"......#..#.............", "................#...#..", "..............#.......#", "......................#", ".....................#."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 500508.93333333335;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 7;
    vector<string> indicator = {".#...#....#.#...#.#.....##.", "....#...#...#.#.#.#.#.#....", "#.#.##.......##...#.##..##.", "#.......#.#.#.......#.#...#", "#....#...#..#....#..###...."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4755319.533333333;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 7;
    vector<string> indicator = {"##..##..###..#...##.#....##", "..#...#.#.#.#.....#.#.#.#.#", "#.#...#.##.......##..##.###", "#...#...#.#...#...#.#...#.#", "#...###...#.#.#.##...##.#.#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 3753021.3333333335;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 7;
    vector<string> indicator = {"###.###.###.#.#.###.###.###", "#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#....##.###.###.#.#.###", "#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".##.###..##.###.###.###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4488848.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 8;
    vector<string> indicator = {"...............................", ".................#.............", "...............................", "...............................", "..............................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 8;
    vector<string> indicator = {"###.###.###.###.###.###.###.###", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "###.###.###.###.###.###.###.###", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "###.###.###.###.###.###.###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.8888888E7;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 8;
    vector<string> indicator = {"...............................", "......#.#...#...#.......#...#..", "....#...#.....#..........#.....", "#.....................#.#...#..", "##...#....#......#....#..#....#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.499281911111111E7;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 8;
    vector<string> indicator = {".##.###.##..#.#...#...#..#..##.", "..#.#...#.#...#...#.#...#...#..", "#.#.###...#...#.#.#.##..##...#.", "..#.#.#.#.#.#.......#...#.#...#", "#...#.#.##...##.##..#.#.##....#"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.7438510333333336E7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 9;
    vector<string> indicator = {"........#...#.....#......#...#.....", "...................................", ".#....#..#...#..........#........#.", "........#.......#...........#......", ".........................##........"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.79478350047619E8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 9;
    vector<string> indicator = {".........#..............##.........", "........#.......#...........#.#.#..", "##......#.............#.#.#...#.#.#", "............#...............#......", "................................#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.796297789333333E8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 9;
    vector<string> indicator = {"....#...###.#....##..#........#.#..", "#.......#...#......................", ".#..#........#..#....##..##.#...#..", "....#...#.#.......#...#...#.#.#...#", ".#...#....#..#..#...#...#...#.#.#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 7.454252051666666E8;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 9;
    vector<string> indicator = {"#.......###..#..#...#.#.#.#...#.#.#", "....#.#...#...#...#.#...#.#...#....", "##..#.#.##......##..#....#..#.....#", "....#.......#.............#...#.#.#", "#.#.###..#..#.....#.....#....#...##"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.958915713333334E8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 9;
    vector<string> indicator = {"#.#.##..###.##....#.....#...##...##", "#.#.#.....#.#.#.......#.......#...#", "###..##.#.........#.##...#..##.....", "..#...........#.#.............#.#..", "#.#..#....#...#..#.......#...##.#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 9.250124866666666E8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 9;
    vector<string> indicator = {"#.#.###..#...##.###.#.....#.#.#.#.#", "....#...#...#.#.......#...#..##.#.#", "###.###..#..##....#.###.#.#.#.....#", "#...#.#.#.#.#.#.....#.#.#.#.#.#...#", "#.#.....###..##.###.#....##...#.#.."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 9;
    vector<string> indicator = {"....###.#...###.##..###..##.###.###", "....#...#.#.....#.#.#.#.#.#.#...#..", "..#.###.###.......#..##...#...#.###", "#.#.#.#.#.#...#...#.#.#.#...#.#....", "##..##..###..#..##...#..###.###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.452484536666667E8;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 9;
    vector<string> indicator = {"###.###.#.#.###.##..#.#.#.#.#....#.", "#.#.#.#.....#.#...#.#.#.#.#.#.#.#.#", "###.###.##..###.##...#..###.#.#..##", "#.#.#...#.#.#.#.#...#.#.#.#.#.#...#", "##..#.#.###.##..#.#.##..##..###..##"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.878588485E8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 9;
    vector<string> indicator = {".##..#..#.#.##..###.##....#.###.###", "..#.....#.......#.#.#.#.#.#...#.#.#", "###.#.#.###.###.###.###.#.#.##..###", "#.#.#.#.#.#.#.#.#.#.#.#.#...#.#.#.#", "###..##.###.###.###..##.##...##.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.544551546666666E8;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 9;
    vector<string> indicator = {"##..###..##..##.###.#.#.###.##..###", "#.#.#.#...#.#.#.#.#.#.#.#.#.#.#...#", "###.###.#.#.###.###.###.###..##.###", "#.#.#.#.....#.#.#.#.#.#.#.#.#.#...#", "###.#.#.###..##.###.#.#..##.###.##."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.852888866666666E8;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 9;
    vector<string> indicator = {"###.###.###.###.###.###.###.###.###", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "###.###.###.###.###.###.###.###.###", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "###.###.###.###.###.###.###.###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 8.88888888E8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 2;
    vector<string> indicator = {".......", ".......", ".......", ".......", "......."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 49.5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 2;
    vector<string> indicator = {"###.###", "#.#.#.#", "#.#.###", "#.#...#", "###.###"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 48.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 9;
    vector<string> indicator = {"....#..............................", "...................................", "...................................", "...................................", "..................................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.038888883888889E8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 1;
    vector<string> indicator = {"...", ".#.", "...", "...", "..."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 9;
    vector<string> indicator = {"...................................", "...................................", "...................................", "...................................", "..................................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 9;
    vector<string> indicator = {"...................................", "...................................", "..#...#...#...#...#...#...#...#...#", "...................................", "..................................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.999999995E8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 9;
    vector<string> indicator = {"....###.###.###....................", "....#.#...#.................#......", "....#.#.###.........###............", "....#.#...#.............#..........", "....###.###.....###................"};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 4.972195530714286E8;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 9;
    vector<string> indicator = {".#.................................", "...................................", "...................................", "...................................", "..................................."};
    FloorIndicator* pObj = new FloorIndicator();
    clock_t start = clock();
    double result = pObj->averageFloor(N, indicator);
    clock_t end = clock();
    delete pObj;
    double expected = 5.499999995E8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22723679&rd=13512&pm=9871
********************************************************************************
#line 5 "FloorIndicator.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
 
class FloorIndicator 
{ 
  public: 
  double averageFloor(int n, vector <string> indicator) 
  { 
    string std[]={ 
"###...#.###.###.#.#.###.###.###.###.###", 
"#.#...#...#...#.#.#.#...#.....#.#.#.#.#", 
"#.#...#.###.###.###.###.###...#.###.###", 
"#.#...#.#.....#...#...#.#.#...#.#.#...#", 
"###...#.###.###...#.###.###...#.###.###"}; 
    int i,j,x,y,s1,s2,tot,num; 
    double ans=0; 
    REP(i,n){ 
      s2=i*4;tot=0;num=0; 
      REP(j,10){ 
        s1=j*4; 
        int flag=1; 
        FOR (x,0,4) 
          FOR(y,0,2) 
            flag&=!(std[x][y+s1]=='.' && indicator[x][y+s2]=='#'); 
        if (flag){ 
          tot++; 
          num+=j; 
        } 
      } 
      if (num==0) 
        return -1; 
      ans=ans*10+double(num)/tot; 
    } 
    return ans; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/