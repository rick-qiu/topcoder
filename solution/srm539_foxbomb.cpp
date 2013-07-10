/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11320
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

class FoxBomb {
public:
    int getMinimumCost(vector<string> grid);
};

int FoxBomb::getMinimumCost(vector<string> grid) {
    int ret;
    return ret;
}


int test0() {
    vector<string> grid = {"#...", "..##", "#.##"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {".#.#.#.", ".......", ".#.#.#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {"######################################", "######################################", "###.....................##############", "###.###################.###....#...###", "###.###################.###.######.###", "###.###################.###.######.###", "###.###################.###.######.###", "###.###################.###.######.###", "###.###################.###.######.###", "###.........####........###.######.###", "###########.###########.###........###", "###########.###########.##########.###", "###########.###########.##########.###", "###########.###########.##########.###", "###########.###########.##########.###", "##..........##..........##########.###", "#######################............###", "######################################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grid = {".#.", "...", "#.#", "...", ".#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grid = {"."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {"."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {".."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grid = {".", "."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {"#########################.########################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grid = {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", ".", ".", ".", "#", "#", "#", "#", "#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"..", ".#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {"#.", ".."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {"..", "#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {".#", ".."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grid = {".....", ".#.#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grid = {".....", ".#.#.", "..#.."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"..#..", ".#.#.", "....."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grid = {"...", ".#.", "..#", ".#.", "..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"...", ".#.", "#..", ".#.", "..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> grid = {"###.#.#.###", "###.#.#.###", "###.#.#.###", "##.......##", "##.#.#.#.##", "#..#.#.#..#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grid = {"###.#.#.###", "##..#.#..##", "#.#.#.#.#.#", "#.........#", "##.#.#.#.##", "##.#.#.#.##", "##..###..##"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {"########..##########", "#########.......####", "####......##########", "#########...........", "..........##########", "#########..#########", "#######...##########", "#########.......####", "###.......##########", "#########.......####", "#######...##########"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"######.####", "###.#..####", "###...#.###", "##.##...###", "##....##.##", "#.###....##", "#.....###.#", ".####.....#", "......####.", "#####......"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {".#####.....", "....#..###.", "###...#.###", "...##...##.", ".#....##...", "#.###....##", "#.....###.#", ".####.....#", "......####.", "#####......"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {"##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "#########################.########################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grid = {"#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################", "#########################.########################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grid = {"##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "..................................................", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {"...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 417;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grid = {"#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", "#.................................................", "..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", ".................................................#", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 425;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#....", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.#.", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#...", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..##.", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##...", "................................................#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 530;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {".#", "..", ".#", ".."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {"######", "######", "######", "######", "##.###", "#...#.", "..#..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {"..........", "###.#.##.#", "...#...#..", ".#.#.##.#.", ".#..##....", "..#.#..##.", "#.#.#.###.", "..##..##..", ".#.#.#...#", ".....#.#.."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grid = {"..###....#....", "#..#..##...##.", "##...###.##.#.", "#..##.#..#....", "..#...#.#..#.#", ".#..#.#..#.##.", ".#.#...#..#...", "..#..#.#.#..#.", "#...#..#...##.", "####..#.#.#...", "#..#.#...##.#.", "##..#..#.#..#.", "###...#....#.."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {"....#..##....#....", ".##..#....##..#.#.", "#..#..#.##.#.#..#.", "##.##...#....##.#.", "#....#.##.###....#", "..##..#...#...##..", ".#..#...#.#.#...#.", "..#.######...###..", "#.#.....#..##....#", "..##.##...##..##..", ".#...#####...#.#.#", "..#.#.#...#.#..#..", "#.#.....#.#..#..#.", "#.#.###.###.#..#..", "...#...#.....#..#.", ".#...#...#.#..#..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grid = {"#.........#.#.......#.", "..###.#.##....#.#.#.#.", ".#....#....###.###..#.", "##.#.#.##.#..#..#..#..", "....#...#.##..#..#...#", ".##.#.#.#...#..#..##..", "...#..#..##.##..#...#.", ".##..#.#.##..##...#.#.", ".##.##.#...#..#.#..#..", "....#...##..##..##.#.#", ".####.#...#...#..#.#..", "......#.##.##.##.#...#", ".#.#.#.#....#..###.#..", "#...#....##..#....#.#.", "..##..###..#.#.##.#.#.", ".###.#..##.#..#...#...", "..#..#.#...##...##..##", ".##.#..#.#...###.#.#..", "#....#....##.........#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 63;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grid = {".......#...#...#.", ".###.#.###...##..", ".#.##......#....#", ".#....#####.#.#..", ".#.###.......#.#.", ".#...#.##.###..#.", ".#####.#.#....#..", ".......#...##.#.#", "#######.#.#.###.#", "................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {".................#..#..", ".#.#.#.#.###.#.#..#...#", "#.#.#.##.#..#.#..#..#.#", ".........#.#...#..#.#..", ".########..#.#.#.#...#.", ".#......#.##.#.#..#.##.", ".####.#......#.#.#..#..", ".....#.###.#.#.#.#.#..#", ".#.#.#....#.#..#.#.#.#.", "#.##.#.##....#...#.#.#.", ".....#.#####..##...#.#.", ".###.#..#..#.#..####.#.", ".#.#.##.#.##...##....#.", ".#....#.#.#.###...####.", "..#.###.#.....#.##.....", "#.###...#.##.##....###.", "......##...#....#.#...."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {"..........##.#...............", ".####.###....#.#####.##.####.", ".#...#....####.....#...#.....", ".#.##..###.....####.##..####.", ".#..#.##...####........#....#", ".#.##.#..##...#.##.#.#.#.##..", ".#.....#.#..#.#.#.#..###.#.#.", ".#######.#.####.#.#.#......#.", "...........##...#...#.######.", ".#.#.######...##.###..#......", "#.#.##......##......#.#.####.", ".......####..#.##.#.#.#.#....", ".#.####...#.#..#.#..#.#..#.#.", "..#....#.##..#...#.##.#.#.##.", ".#..##......#.##.#.#..#.#...#", ".###.#######.....#.#.#...##..", "...........#.#.###.#.#.##.##.", ".######.##...##....#.#.......", ".#.....##.#.#.#.#.#..#.#####.", ".##.##.....#..#.#.#.#.##....#", "....#.####...#..#.#.#....##..", "#.##......##.#.#.##.#.#.#...#", ".#.#.##.##.#.#.......#..#.##.", "......#.......#.#.##...#....."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {".....##....#.#.............#.......", ".##.#...##.....####.###.##.#.#.###.", "...#..##..#####...#.#..#.#.#..#..#.", "#.#..#.##.....#.#.#..#......#.#.##.", "...#.#....###.#.#.#.#..#.##...#....", "#.#..#.##.#.#.###.#.###.#.####.###.", "..##.#.##.#.......#...............#", "#....##...########.###########.###.", "#.###.#.##....................#....", "..#......#.#############.#.##.####.", "#.#.###.#..#...........#.##........", "..#.#.#..#.#.#.##.##.#.#...#.#.###.", ".##...#.##.#.##.#.#.##..##..#.#..#.", ".#.##.#....#....#.#....#.#.#...#.#.", ".#.....####.###.#.#.####.#...#.#...", ".#.###.#......#.#.#.......##.#..##.", ".#...#.#.####.#.#..########..##.#..", ".####....#..#.#.#.#........#..#.###", ".....####..#..#.#.#.#.####.##.#....", ".###.#...#.##.#.#.#..#......#..###.", "#..#.#.#......#.#.#.#..#.###..#..#.", "..#..#..##.#.#.#..#.####....#.##.#.", ".##.#..#..#.#...#.#.....###.#....#.", "....#.###...#.#....####.#.#.####.#.", ".####.##.##....#.#....#.#.#....#.#.", ".#........#####.##.##.#.#.####.#.#.", ".#.#.####.........#.#.#.#......###.", ".#..#....####.#.#.....#.#.#####....", "..#.#.##.....#.#.#####..#.#.....##.", ".#.##.#.####.#........#.#.####.#.#.", "......#........##.#.#...#......#..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {".................##..#.#.#.#.....#.#.#.#.", "#.##.#.#.#.#.###...#.........#.#.#.......", "..#..##.#.#.#..###.#.#.##.###.##..#.####.", "#.###........#.....###..#.#......#..#..#.", "......#.#.##.#.####...##..#.#######..#.#.", "#.#.##.#.#...#.#....#..#.##.#....#..#..#.", "..##......##.#..###..#...#..#.##..#.#.#..", "##...#####.#.#.#....#.#####...##.#..#.##.", "...##........#.#.###.....#.###...##.#....", ".##...#####.##...#.##.##.....#.##.#.####.", ".#..##.....#..#.#.......#.##.#.#........#", ".##.#.#.##.#.#.#.#######.#.#.#.#.######..", "....#...##.#.................#.#......#.#", "####.#.#...##.##.#.#.#.#######..#####.#..", ".......#.##.#..##.#...#........#......#.#", ".#####.#.#....#....####.###.###.#.#####..", ".#...#.#.#.####.##.#....#..#.....#.....#.", ".##.#..#.#.#.....#.#.##..#...#.#.#.#.#.#.", "..#..#.#...#.##.##.#...##.####.#.#..##.#.", ".#..#..#.#.#.#.#....##.........#.##.#..#.", ".#.###..#..#.#.#.##.#.##########....##.#.", ".#.##.#..#.#...#..#.#.#.........#.##...#.", ".#....#.#..#.#.#.#..#...########.#.#.##..", "..#.##..#.#...##..#.#.#.#..........#.#.#.", "#.#..#.##..#.#...#..###.#.##.####.#..#...", "....##.#..#..#.##..#....#.#.#......#.#.#.", ".###...#.#.#.#.#.#.#.#.#..#.#.##.#.#.###.", "#....##..#.#.#.#.....#.#.#..#..##.##.....", "..###..#.#.#.#.######.#..#.#..#.....####.", "#.#..#...#.#.#.........#.#.#.##.###....#.", "..#.#..###.#..########.#...#.#..#.#.##.#.", ".#...#.#...#.#.......#...#.#.#.#..#.#..#.", ".#.###.#.#.#.#.####.#.###.#..#.#.#..####.", ".#.#.....#.#.#.#..#.#.....#.#..#.#.#.....", ".#.#.##.#..#.#.##.#.#.##.#...#.#.#.#.####", ".#.....#.#.#.#..#.#.##.#..#.#..#.#.#.#...", ".######...##.##.#........#..##.#.#.#.###.", "........#.......#.##.#.#..#......#......."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {".#...........#.#....#.......#.#.#....#.........", "...##.#.#.##.....##.#.#####.......##..#.######.", "##.#.#.#.#...##.#...#.#....#.#.#.#.#.##.#....#.", "...#......##..##.####.#.#.#.#.#..#.#....#.##.#.", ".##..##.#....#........###.#....#.#..####..#..#.", ".#.#.#.#.####..#######....#.##.#..#.....#..#.#.", ".#...........#.#.......##.#.#..#.#..###.####.#.", ".#######.#.#.#..####.###.##..#.#..#.#........#.", "........#.#.##.#.....#......#..#.##..####.#.##.", ".######........#.###.#.##.##.#.#.#..#....#.#...", ".#.....###.#####.#.#.#.#.#.#.#.#.#.#..##.....#.", ".###.#....#......#...#.#.....#.#.#..#.#.#.###..", ".....####.#.#####.##.#.#.##.#..#.##...#..#...#.", "#####...#.#.#........#.#..#..#.#...##.##.#.#.#.", "....###.#.#.#.########..#.#.##.#.#.#.....#.#.#.", ".##.....#.#..#.........#..#....#.#.#######.#.##", ".#.##.#.#.#.##.########.#..#####.#.........#...", ".#..#.###...#..#........#.##....#..###.####..#.", ".#.#......###.#..##.###.#....##.#.##..#....#.#.", ".#..######....#.#.#.#.#..#.##.#.#....#..##.#.#.", ".#.#.....#.###..#.#.#.##..#.#.#.#####.#..#..##.", ".#.#.###.#.#..#.#.#.#....#....#.........#..#...", ".#.#.#.#.#.#.#..#.#.#.###..#.#.#.#.#.#.#.#.#.##", ".#.#...#.#.#.##.#.#.#.#..#.#....#.#.#.#..#...#.", ".#...###.#.#......#.#.##.#..#.#.........#.####.", ".#.##....#.######.#.#....#.#.#.##.#####.#......", ".#.#..####.......#..##.#.#.....#..#...#.#.####.", ".#..#.....######..#...#...#.##..#.#.#.#.#.#....", ".#.#.##.#......#.#..#.####.#.##.#.#.##..#.####.", ".#.#...#..####.#..###...........#.#...#.#.....#", ".#.#.#.#.#...#..#....#.#.#.#.##.#.###.#.#.#.#..", ".#.#.#.#..#.#.#.#.##.#.#.##.##..#...#.#.#.##.#.", ".#.#.#.#.#....#..#.#.#..#.....#..##.#.#.#....#.", ".#.#.#.#.#.##.##...#.#.#.####.#.#.#.#.#..###.#.", ".#.#.#.#.#.#....##.#.#......#.#...#.#.#.#....#.", ".#.#.#.#.#.#####.#.#.########..#.#..#.#.#####..", ".#.###.#.#.........#..........#...#.#.........#", ".#.....#.#.#.####.#.#.####.###.#.#..#.########.", ".#.#.#.#.##.#....#...#....#.......#..#.........", ".##.#.##......##...#.#.##.#.######.#..#.###.##.", "........#.####.#.##....#..#.#......#.#..#..#...", "####.##.#......#.#.####.#.#.##.#.#.#.##.##.#.#.", "....#.#.######.#.#......#.#....##.##.......#.#.", "#.##.........###.#.#.####.#####.....########.#.", ".....#.#.#.#.....#.#............#.#..........#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {"....##.#.#..#..........#...##......##..#.....#.#..", ".##........#..##.#.###.#.#....#.##...#...#.#.#...#", "..##.###.#.#.#....#...#...####....##.#.##..#..#.#.", "##...#..##.#..##.#..#.##.#....#.##...#..#.#.#...#.", "...##..#....#..#.#.#.....####.#.#..##.###.#.#.#.#.", ".##...#..###.#.#.#.#.####...#.#.#.##......#..##...", ".#..###.#....#.#.#..#.....#.#.#.#....#.#.#.#...#.#", "..#.......####.#...#..##.#..#.#..##.##..#...##....", "#.#.##.###.....##.#..#.#.#.#...#.#.#...##.#...#.#.", "..#...##...###...#..#..#.#...#.#.#..#.#....##.#..#", "#..###...##...##.#.##.#...###..#..#...#.##..#.##..", "##...#.##...#.#..#....###.#.#.###.###.#...###...#.", "#.##....#.##..#.####.#....#.#.###....#..##...##.#.", "...######.#.#.#..#...#.###..#..#.###..#..#.#....#.", ".#........#...##.#.##..#...#..#....#.#.#.#.##.###.", "..##.#.###.#.#.#.#...#..#.#.#.#.##.#.#.#.#..##....", "#.#.#.#....#.#...##.#.#.#.....#.#..#...#..#...##.#", "..#...#.#.#...#.#...#.#.#.####..###.##...#.##...##", ".#.#.##.#..#.#..###...#.#.#....#......##.#.#.##..#", "...#.....#...##....#.#..#.#.#.#..####.#..#....##..", ".#.#.####.##...###.#..#.#.##..#.#...#..#.##.#..##.", ".#.#.#......##.#....###.#...#.#.#.#..#.#....#.#...", "##.#.#.#.##..#.#.##......##.#.#.#..#.#..#.#.#.#.##", "...#.#..#...#..#.#.###.##.....#.#.#..#.#.#.#..#...", ".##..#.#..##..#.#.....#...####..#.#.#..#....##..#.", "...#.#..#...#.....###..#.#....#.##..#.#..##...###.", ".#..#..#.##..#####..#.#...#.#.#..#.#..##.#.##.....", "#.#..#.#..#.#....#.#..#.###.#.##.#.#.#...#...#.##.", "....#..#.#..#.##....#..#....#..#.#...#.#.#.#..#.#.", ".##..#.#.#.#...###.#..#..#.#.#.#..##..##.#.###....", "...###...#.#.#....##.#.#..#....##.#.#....#.....#.#", "#.#....###..##.##....#..#.#.###.#.#..##.#..####.#.", "#...###...#...#...#####...#...#....#...#..#.......", ".####.#.#.###..#.#...#..#..##.#.##.###..#..#.##.#.", ".......##.....#..#.#.#.#..#.#.#..#....#...#..#..#.", ".#####...#######.#.#.#..#.#.#..##..##.#.##.##..#..", ".#...#.#.#....#..#..#..##.#..#...#.#..#......#.###", ".#.#..#..#.##.#.#.#...#...##.###.#..#.##.###.#....", ".#.##...#..##.#.#..####.##.#.....#.##...#..#.#.##.", ".#...#.#..#...#..#......#..#.####....##..#.#.##...", "..##..###.#.#.#.###.######.#.....#.#..#.#..#...#.#", "#.#.#..##..#..#..#..#...#...####..##.#...#.###.#..", "#....#...#.#.#.#..#.#.#...#.#...#...#..###.....##.", "..##..##.#.#.#..#...#.####....##.##..#....##.##...", ".##..#.#.#.#.##..###.....#.##.....#.##.##.#....##.", ".#..#....#.#...#....####..#.###.#.#...#...#.##.#..", ".#.#..#.##.#.##.#.#......#.....###.##..##..##...#.", ".#.###.....#.......#.#.#.#.###..#....#...#...#.#..", ".#....#####.#######.#.#.##.#.#.##.#.#.##.###.#..#.", "..#.#........................#....#...........#..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {".#.#.....###.......#...........##...##...........#", ".....###..#..#.###.#.#.#######....#....####.#.##..", ".#.#.#.##.#.#.....##..#.......##.######....#.#...#", "#.##.#..#..#.####...#..#.##.#.#..##....#.##....##.", ".....##...#.....#.##.#.#.#.#..#.#...##...#..###...", ".####.#.##..###.#......#.#...#..#.#.#..#.#.#....#.", ".#....#..#.#.....#.####...#.#..#.###..#..#..#.##.#", ".##.#..#.#.#####..#....#.#..#.#...#..#.##..#......", "...#..##.#......#...##.#..#.#.#.#.##.....#.###.##.", ".#..#.....#####..###.#.#.#..#...#...#.##.#....#...", ".##.##.##.......#..#.#...#.##.##..#.#.#..####..##.", "..#...#..#######.#....###..#..#..#...#..#...##....", ".#.##...#........###.##.#.#.##..#..#..#.#.#..##.#.", ".#..#.##..#.#.##...#.#..#.....##.#.#.#.....#..#.#.", ".#.#....#.#.#...##.#...###.##.#...#..#.####.#..#..", ".#..###.#..#.##..#..##..#.#...#.#..#.#.......#..#.", "...#....##...#..#.#..#.#..#.##..##.#.##.###.#.#.#.", ".#.#.###.###.#.#...#.....##.#..#.#.#...#....#.#.#.", "#..#.#.....#.#.#.#.##.#.#...#.#..#.#.#.#.###..#...", "..#..####.#..#.###.....##.##...#.#.##..#.#..#..#.#", ".##.#.....#.##....#.###...#.#.#......#.#..#...#.#.", "#...#.###.#...#.#..#....#.#...#.#.##...#.##.#.....", "..##.....#.##.##.#...###...##..#.#..####...#.#.##.", "#.#..#.#....#.....#.#...##..#.#...#.....##.....#..", "#.#.#.#..###..####.#..#.#.#...#.#.#.#.#...#####..#", "...#...#.....#......#.#.#...#.#.#.#..#.##.....#.#.", ".#.#.#.#.#.###.#.##.#.#..###.#..#..#...#..##.#..#.", "..##.#.##.#....##.#...#.#.....#.#.#.##..#.#...#.#.", ".#...#....#.#.#....####.#.###...#.....#.#.#.#.#.#.", ".#.##.##.##..#..##......#...###..##.#.#.#.#..##.#.", ".#.....#....#..#..#.#.#.#.##...#...#..#.#.#.#...#.", "..####..####.#...#...#.##..#.#..##..#.##..###.#...", "#....#.##.....##.#.##....#.#.#.#...#....#.....####", "..##.#...#.##..#..#.#.##...#.#.#.#..###.#.##.#....", "#.#...##.#####..#...#.#.###..#..#.#...#.#...##.##.", "..#.#..#...##.#..#.##.#...#.#.#.#.###.#.##.#...##.", "#.#.###.##......##....###.#.#.#.#...#.#..###.##...", "..#......####.#.#.####....#.#.#.##.#...#.....#..#.", ".#.#####.....#..#....#.##.#.#.#..#..#.#.#.###.#.#.", ".#.#....##.#..#...##....##..#..#..#...#..#....#..#", ".#.#.##.#..#.#..#.#.##.#...#..#.#.#.#..#...##.##..", ".#....#.#.##..#..#...#.#.####.#...#.#.#..##.....#.", ".####.#.#.#..##.#..#.#.#.#.##.#.##...#..#...###.#.", ".....#..#.###...#.#..#.#.#....#.#..#.#.##.##...##.", ".###..#.#.....##..#.#.##.#.#.#..#.#....#..#..#.#..", "#..#.#...#####.#.##......#.#.#.###..###.##..#....#", "..#...#.#......#.#.#.#.#..#..#.##..#......#..###.#", ".#.#.#....####.#.#...##.##..##...###.##.#..#.#.#..", ".#.#.#.###...#.#.####.....#....#.....#.##.#..#..#.", ".......#...#...#......#.#.#.#.###.#.#.......###..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 343;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {"...#.#.....#.##..#....#....#........#.#.#.#...#...", ".#.....####.....#..#.#..##..#.###.##........#.#.#.", "#..#.#.#....##.#.#..#..#.#.#....#..#.##.##.#....#.", "..#.#.##.###.#....#.#.##.#.#.##.#.#..#.#.#.###.#..", ".#.......#....#.##..#.#..#..#.#.#..#.....#....#..#", ".#.###.##.##.##....##.#.###.#.#.##.#####.##.#.#.#.", ".#....#....#...##.#...#..#..#.#..#.....#...##.#...", "..###...##.#.#...#..###.##.#..#.#.##.#.##.#...#.#.", "#....###.#.#.#.#.#.#....#...#...#..#.#..#.#.##...#", ".#.##..#...##..#...#.##..#.#..##..#..#.#..#.#..#..", ".#....#..##...#.####...#.#.#.#..#..#.#..#.#.###.#.", ".#.#.#.#..###.#......#.#.#.#..#...#...###.#.....#.", ".#.#.#.##.....#.##.##.#..#.##.##.#..##....#.###.#.", "...#.....##.##.##..#...#.#..#..#.#.###.###.#....#.", ".#######...#......#.##.#..#.##.#.#..#..#....#.#.#.", "...#.....#.#####.#......#.#..#...#.#..#.###.#..#..", "###..####........##.##.##.#.#.#.#....#......#.#..#", "...#.....###.####...#.#...#.#.#..####..#.#.#..#.#.", ".#..#.#.#...#...#.#.....#.#.#..#....#.#..#..#.#.#.", "..#.#.#...#..##...#.##.#.##.#.#####.#.##..#.#.#.#.", ".##.#..#####.#..##.##.#.....#..#....#..#.#..#.#...", ".#...#....#..##.#.....#.#.##..#..###.#.#.####..##.", "..#.#..##.#.#...#.#.###..#.##..#.#.#.#.#.....#...#", "#.#.###...#.#.#..##....#.#...#...#....#..###..##..", "..#....###..##.#...###.#..#.#..###.##.#.#....#...#", ".###.#....#....###......#.#..#.....##..##.##.###..", "..#.#.###..##.#...######..#.####.##..#....#.#...#.", "#.#.....#.#...#.#.......#.#..#.##.#.#.###.#.#.#.#.", "..#####.....###.#.#####.#.#.#.......#.......#.#.#.", ".#.....###.#.....#....#.#.#.#.#.####..#####.#.#...", ".#.###....#..#.##..##...#.#...#.....#.....###..##.", ".#.#..###.##..#...#..##.#..#.#.####.###.##....#...", ".#...#..#....#..##.#....##.#.#....#......#.###..#.", ".#.#..#..####.#.....#.##...#..#.#..###.###...#.##.", "..#..#..##.....#.##.#.#..####...#.#...#...##..##..", "#..#.#.#...##.#..#..#..#...#.##.#.###.#.#...#...#.", "##.#.#...#.#..###..#..#.##.....#......#.#.#.#.#.#.", "#..#.##.###..#...#.#.#....####.#.#####..#.#..#..#.", "..##...#.#..#..#...##..#.#......#.....#.##..#..#..", ".#..##.....###.#.#..#.#...#.####..###.#...#..#.###", "..#.#.##.#..##.#..###..#.##......#..#.#.#..#.#....", "#......##..#...###...#.#.#.#.####.#...##..#..##.#.", "..##.##...#..##....#...#....#.....#.##...#.#...##.", "#..#....##.#..#.###.#.#.#.#.###.#.#.#.##.#..##.#..", ".#..#.##...#.#..#.#..#..#.#......#..#....##..#.#.#", "..#.##.#.#....#....#...##..##.#.##.#.#.##..#.#.#..", ".##....#..###..#.#.###...#...#.#...#.....#...#...#", "...###..#....##.##.....#.#.#...#.##.#.##.#.#..##..", ".#...#.#.###......#####...#.#.##.#...#.#.#.##.##.#", "..##........#.#.#.......#...#......#.....#..#....."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 344;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {"......#.#............#.......#...#..#......#...#..", ".#.#.#...##.##.#####.#.#####.#.#.#.#..####...#.#.#", "#..#.#.#.....#.....##..#...#...#....#....#.##..#..", "..##.#.##.##..#.##...#...#..###.###.#.#.#..#.#.##.", "#...##...#..#.###.##..#.##.#......#..#..#.#..#..#.", "..#.#.#.#..###.......###...#.####.#.#..##..#..#.#.", ".#....#.#.#.#..#####..#..#.#....#.#.#.#...#..##.#.", "#..##.#...#...#.....##..#.#.##.#..#.###.##.#.#..#.", "..##...##..#.#.#.##....#..#.#..#.##.....#......#..", "#...##..#.#..#.#...#.#.##...#.#..#.####.#.#####.#.", "..#...###..#....#.#..#..#.#####.#..#...#..#.....#.", ".#.##....#..###.#..##..##...#.....#..#.#.#.##.#.#.", ".#...#.#..#...#..#...#...##.#.###.#.#..#......#...", "##.#.##.#..##.#.#.##.####...#.#...#.##..#.####..#.", "...#......#.#.#...##......##...##.#..#.#.#....#..#", ".##.#.###...#.#.#...#######.##.#..##.#.....##.##..", ".....#..#.##..#..#.#...........#.#...#.####.#...#.", ".#.#..#.#..#.#.#.#.#.#.#######..##.##..#....#.#.#.", ".#..#.#.#.#..#.#.#...##......###...#..#.#.###..##.", "..###.#....#...#..##..#.####.....##..#........#...", ".#....#.#.#.##.##...#.#.#...##.#...#.#.##.#####.##", ".#.###.#..#..#...#.#.#...#.#..#.###..###..#.....#.", ".#......#.#.#.##.#....#.#....#.....#....#.#.####..", ".######.#.....#...###.#.##.###.#.#..###..#..#....#", "......#.#.####..##..#.#....#...#.#.#...#..#.##.#..", "#####.#..#....#....#...###.#.####....#...##...#..#", "....#..#.#.##..###.##.#....#...#..###.##...##.#.#.", ".##.##.#.#.###......#.##.##.##.###......##..#.#...", ".##..#.#....#.#####.#........#.....#.##.#.#.#..#.#", "...#....##.#.......#..####.#..#####.#...#.#.##.#..", "##.##.#...##.#####.###....#.###.......###....#...#", ".....#.###...#...#.....#.#......##.#.#....###.##..", "#####......###.#.####.##.#.#####....#.####.....#.#", "......#.###....#.....#...#.#...#.###.......##.##..", ".#####.#....###..#.#.#.##...##.....#.##.###.#.#..#", ".#...#...#.#...#.#.#.#.##.#.##.#####...#....#...#.", ".###..##.##..#.#.#.#.#...#....##....##..###.####..", "....#.....#.##..##..#.##..#.#....##...#...#.....#.", "###..#.####.#..#...#....#..#..#.##.##..##..#.##...", "...#.#.#....#.#..##..##.##.#####......####.#..#.#.", ".#...#.#.###...#....#....#....#..#.##.###..#.#..#.", "..###.##.#..#.#..#######..#.#..#.##....#..#..#.#..", ".#.......##.#.#.#...#...#....#.#...#.#.#.#.##...#.", ".#.##.###...#.#...##..#.#####..###.#.#.#.....#.#..", ".#...#..#.#.#.#.#..#.##......#.....#..######.#.###", "..##.##...#.#..#.#.#...#####.#.#.#..#..#...#.#....", ".#.#....#..#.#.#....##.#...#.#..#.##.#.#.###.#.##.", "...###.###.#.#..#.#.##.#.#.#.#.#.....#...#....#...", ".##...#.##.#..#.##.#.....#.#.###.###.####..#.##.#.", "....#........#.......##.#..#.......#......#.....#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 334;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {"...#.#....#.....#.......#........####...........#.", ".#...#.#.#..###...####.#..#.####..##..#.#.###.#.#.", "..#.#..#...#..####...#.#.#.##...#....#...#....#...", "#.#.##..###.#.....#.#..#.#....#..#.##.####.###.##.", "#.#....#....#.###...##...#.#.#..#.#........#....#.", "...####.#.###...#.#..####.##.#.#..#.#.#####..##.#.", ".##...#.......###.#.#........#...#..##....##.#.##.", ".#..#...######.....##.#.##.##..##.#....##..#......", "..##..##.....#.####...#..#.#..#....##.#..#.#.#####", "#...#..#.##.##......#..###.#.#..##...#.#...#.#....", "###..#..#.....#.####..#....#.#.#..##.#..##.#..#.#.", "#.#.#.#.###.#.##....#.#.#.##.#.#.#.#.#.#...##.#..#", "..#...#.....##...##.#.#..#...#.#.#...#...##.#..#..", ".#.#.#.###.#...##.#.#.#.#..#.#.#.#.##..##.#..#..#.", "...#.#.....#.###..#..#..###.##.#.#.#..#.....##.#..", ".###..#####..#...#.#...#.......#.#...#..##.#....#.", ".....#....#.#..#....##.#.#.##.#..######..#.#.##...", ".#.##..##.#.##.#####.#.#.##....#.....#..#.....####", ".##...###.#..#.........#...#####.#.#.#.#.#####....", "....##.#..##.#.#.######.##......#..#.#.#.......##.", "#.##...#.#.#.##...........##.##.##.#....##.#.##.#.", ".#.#.#...#.....###.###.##.#.#.#...#.###...#.#.#.#.", "...#..###..#.#...##...#.#.#....##.....###.#.....#.", "#.#.#.#..###..##...##...#.#.##...##.#...#..##.##..", "..#.#.##....##...#.#..#.#.#.#.##...#.##.#.#...#..#", "#...#...#.#...##.#.#.##.#.#.....#.#.....#.#.#..#.#", "..#.###.#..##.#..#.#.#..#.#.###.#.#.####....####..", ".##...#...#.#.###..##..##.#...#.#.#.#....#.#.....#", "...##..###..#....#..#.#...#.#.#.#.#..#.##.##.####.", "#.#..#.....#.#.#..#.#..#.#.#..#..##.#..#.....#....", "...#..##.##...#.#.#..#.#.#..##.#.#..###..#.##.###.", "#.#.#..#.#..#...#.#.#..#..#......#.#....#.#.......", "..#.#.#..#.#.#.#..#.##..#.#.#.###..#.###....##.##.", "#.....##.#...#..#.#..#.#..#.#....#...#...###..#...", ".####..#..##.#.##..#.#.#.#.#..##..####.#...#.##.##", "....#.###....#.#.#.#.#.#....##...#......##.#....#.", ".#.##..#######...#...#..#.#....#..#.####.#.#.###..", ".#...#..#......#..###.#..#.####..#..#......#....#.", ".###...#..#.#.#.##.....#...#..#.##.#..###.###.#.#.", "#...##.#.#...#....###.#.##...##.#...#....#.#.#..#.", "#.#...#..#.#.#.##..........###..#.#..###.#....#...", "..###...#.#..#...#.#.#.####....#..###....#.##..##.", ".#..##.#...#..#.#..#..#.....###.##....###...##.##.", ".#.#...###...#...#.#.##.#.##.......###...##..#....", ".#...##...#.##.##...#...##.#.#######...#..#.#.####", ".#.#.#..#..#...#..#.#.##.....#.......##.###.#.....", ".##...#..#...##.#..#..##.####.#.###.#.......#.##.#", "...##.#.#.####..#.#..#...#....#...#..#.#####.#....", ".#.#.##.#.#...#.#..#.#.##.#.##.#.#..##.#......##.#", ".#..........#....#.....#..........#......##.#....."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 339;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {"........#........#...#.#......#.............#...#.", "#####.#.#####.##.#.#.....##.#.#.#####.###.#.#.#...", "......#.........#..###.##..#...#......#..##.#..##.", ".####..###.####.#.#...#..#..###..###.#..#...#.#...", "....#.#...#...#.#.#.#.##..#.....#...#.#.#.#.#.#.#.", ".##.###.#...#..#..#.#....###.##.#.#.#.#.#.##..#.#.", "..#......#.##.#..#..##.#..##.#.#..#.#...#...#.#.#.", "##.######.#....#..#...#.#....#...#...#.####.#.#.#.", "............###.#.###.#..##.#..##.#.#...#...##..#.", ".##.#####.##....#.....##.#.#.#.#..#..#.#..##.#.##.", "..##....#..#.#.#.#####.........#.#..#...#.#....#..", "#...#.#...##.#.......##.####.##....#.#.#..####.##.", "#.#.#..###...#.#.###..#.....#.#.###....#.#...#...#", "..#.###....##.#.#...#...###.#.#.....####...#.#.#..", ".##.....###.......#..####.#.#...####....##.#.#..#.", "...#.###..#.####.#.#......#.#.##.....##...#..##.#.", "##..#....#......##.#.###.#..##...#.##..##..#...##.", "..#.#.#.#.#.#.##.....#...#.#...##.#.#.#..#..#.#...", "#.#.#.#.....##...#.##..##..#.##.........###...#.#.", "..#..#.#.#.#.#.##.#...#...#..#..#######..#.###..#.", ".#..#...##.#.#.#..#.##.#.#.#...#.......#.#....#.#.", "..#...#.#....#..#.#.#..#....###..####.##.#.##.#.#.", ".######..#.#..#.#.#.##.#.##....#.#...#...#.#..#..#", "..#.....#...###.#.#..#.#.###.#...#.#.#.##..##..#..", ".#..#.######....#..#...#..#.#.####.#.#.#..#...#..#", "..#..#..#....###.#..#.#.#..........#.#.#.#.#.#.#.#", ".#.#..#...#.#.....#.#.#..#####.#####.#...#...#....", "....#..##..#..##.#....#.##....#.......#.#..##..##.", ".##.##.#.#..#.#..##.##....###.#.######.#..#...#.#.", ".#...#.#..#.#..#.....#.##...#.#..........#####....", "..##.#.##...#.#.#.##...#.##...##.######.#.#....#.#", "#..###..#.#.##...#..#.#....##...#......#....####..", "#.#....#..#....#.#.#..#.##..###.#.#.#.#..####...#.", "..#.###.#..###.#....#.#...#...#.###.#.#.#.....##..", ".#..#.#.#.#...#.#.#.#.###..##.#.....#...#.#.#.#..#", "..#.#...#.##.#...#..##...#..#..#.###.###...#.#..#.", ".#...#.#.....#.#.#.#...#..#.#.#.#.......##.....##.", "..#.#..##.#.#..#.#...#.#.#..#...#.#####..###.#.#..", ".#..##.....##.#..#.##.#..##.#.#.#.#...#.#...#....#", ".##...#####...##..#....#....#.#.#...#.#...#.####..", "...##.#.....##...#..##.####.#..#.##..#.##.#....##.", "#.#.#.#.##.#...##.#..#.....#.#...#..#....#..##..#.", "......#.#.#..###....#.####.#...#.#.##.##..##..#.##", ".#####..#.#.##...##.#.#..#..#.##........#...#.#...", ".#....#.#...#..##.#.#...#..#....########..#....##.", ".#.##.#.#.#..#.#....##.##.#.####........#..####.#.", ".#.#..#..#.#..#..###.#....#....#.###.##.#.#.......", "...#.###.#.##.#.#....#.###.#.#.#....#.#..#..###.#.", "####.##..#......#.####.#.....#.####.#.##.##.#..#..", "........#..#.#.#.........##.#.......#........#...#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 340;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grid = {".#################################################", "..################################################", "#..###############################################", "##..##############################################", "###..#############################################", "####..############################################", "#####..###########################################", "######..##########################################", "#######..#########################################", "########..########################################", "#########..#######################################", "##########..######################################", "###########..#####################################", "############..####################################", "#############..###################################", "##############..##################################", "###############..#################################", "################..################################", "#################..###############################", "##################..##############################", "###################..#############################", "####################..############################", "#####################..###########################", "######################..##########################", "#######################..#########################", "########################..#######################.", "#########################..#####################..", "##########################..###################..#", "###########################..#################..##", "############################..###############..###", "#############################..#############..####", "##############################..###########..#####", "###############################..#########..######", "################################..#######..#######", "#################################..#####..########", "##################################..###..#########", "###################################..#..##########", "####################################...###########", "###################################..#..##########", "##################################..###..#########", "#################################..#####..########", "################################..#######..#######", "###############################..#########..######", "##############################..###########..#####", "#############################..#############..####", "############################..###############..###", "###########################..#################..##", "##########################..###################..#", "#########################..#####################..", "########################..#######################."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"####################..###########################", "#####################..##########################", "######################..#########################", "#######################..########################", "########################..#######################", "#########################..######################", "##########################..#####################", "###########################..####################", "############################..###################", "#############################..##################", "##############################..#################", "###############################..################", "################################..###############", "#################################..##############", "##################################..#############", "###################################..############", "####################################..###########", "#####################################..##########", "######################################..#########", "#######################################..########", "########################################..#######", "#########################################..######", "##########################################..#####", "###########################################..####", "############################################..###", "#############################################..#.", "##############################################...", "#############################################..#.", "############################################..###", "###########################################..####", "##########################################..#####", "#########################################..######", "########################################..#######", "#######################################..########", "######################################..#########", "#####################################..##########", "####################################..###########", "###################################..############", "##################################..#############", "#################################..##############", "################################..###############", "###############################..################", "##############################..#################", "#############################..##################", "############################..###################", "###########################..####################", "##########################..#####################", "#########################..######################", "########################..#######################", "#######################..########################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {".......#..........................................", ".#####.#.########################################.", ".#...#.#.#......................................#.", ".#.#.#.#.#.####################################.#.", ".#.#.#.#.#.#..................................#.#.", ".#.#.#.#.#.#.################################.#.#.", ".#.#.#.#.#.#.#..............................#.#.#.", ".#.#.#.#.#.#.#.############################.#.#.#.", ".#.#.#.#.#.#.#.#..........................#.#.#.#.", ".#.#.#.#.#.#.#.#.########################.#.#.#.#.", ".#.#.#.#.#.#.#.#.#......................#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.####################.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#..................#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.################.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#..............#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.############.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#..........#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.########.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#......#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.####.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#....#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.######.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#........#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.##########.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#............#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.##############.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#................#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.##################.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#....................#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.######################.#.#.#.#.#.", ".#.#.#.#.#.#.#.#........................#.#.#.#.#.", ".#.#.#.#.#.#.#.##########################.#.#.#.#.", ".#.#.#.#.#.#.#............................#.#.#.#.", ".#.#.#.#.#.#.##############################.#.#.#.", ".#.#..#..#.#................................#.#.#.", ".#.#.#.#.#.##################################.#.#.", ".#.#...#.#....................................#.#.", ".#.#####.######################################.#.", ".#..............................................#.", ".################################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {"............................................#.#.#.", ".#########################################.#......", ".#.......................................#..#####.", ".#.#####################################.#.#....#.", ".#.#...................................#.#.#.##.#.", ".#.#.#################################.#.#.#.#..#.", ".#.#.#...............................#.#.#.#..#.#.", ".#.#.#.#############################.#.#.#.#.#..#.", ".#.#.#.#...........................#.#.#.#.#..#.#.", ".#.#.#.#.#########################.#.#.#.#.#.#..#.", ".#.#.#.#.#.......................#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#####################.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#...................#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#################.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#...............#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#############.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#...........#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#########.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.......#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#####.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#...#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.###.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.....#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#######.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.........#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.###########.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.............#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.###############.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.................#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.###################.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.....................#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#######################.#.#.#.#.#.#..#.", ".#.#.#.#.#.........................#.#.#.#.#..#.#.", ".#.#.#.#.###########################.#.#.#.#.#..#.", ".#.#.#.#.............................#.#.#.#..#.#.", ".#.#.#.###############################.#.#.#.#..#.", ".#.#.#.................................#.#.#..#.#.", ".#.#.###################################.#.#.#..#.", ".#.#.....................................#.#..#.#.", ".#.#######################################.####.#.", ".#..............................................#.", ".################################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {".........................................#........", ".#######################################.#.######.", ".#.....................................#.#.#....#.", ".#.###################################.#.#.#.##.#.", ".#.#.................................#.#.#.#.#..#.", ".#.#.###############################.#.#.#.#..#.#.", ".#.#.#.............................#.#.#.#.#.#..#.", ".#.#.#.###########################.#.#.#.#.#..#.#.", ".#.#.#.#.........................#.#.#.#.#.#.#..#.", ".#.#.#.#.#######################.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.....................#.#.#.#.#..#..#..#.", ".#.#.#.#.#.###################.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.................#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.###############.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.............#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.###########.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.........#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#######.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.....#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.###.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#...#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#####.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.......#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#########.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#...........#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#############.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#...............#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#################.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#...................#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#####################.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.......................#.#.#.#.#.#..#.#.", ".#.#.#.#.#########################.#.#.#.#.#.#..#.", ".#.#.#.#...........................#.#.#.#.#..#.#.", ".#.#.#.#############################.#.#.#.#.#..#.", ".#.#.#...............................#.#.#.#..#.#.", ".#.#.#################################.#.#.#.#..#.", ".#.#...................................#.#....#.#.", ".#.#####################################.######.#.", ".#..............................................#.", ".################################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {"..................................................", ".################################################.", ".#..............................................#.", ".#.############################################.#.", ".#.#..........................................#.#.", ".#.#.########################################.#.#.", ".#.#.#........................................#.#.", ".#.#.##########################################.#.", ".#.#............................................#.", ".#.##############################################.", ".#................................................", ".#.######.########################################", ".#.#.....#........................................", ".#.#.####.#######################################.", ".#.#............................................#.", ".#.#.##########################################.#.", ".#.#.#........................................#.#.", ".#.#.#.######################################.#.#.", ".#.#.#.#....................................#.#.#.", ".#.#.#.#.##################################.#.#.#.", ".#.#.#.#.#................................#.#.#.#.", ".#.#.#.#.#.##############################.#.#.#.#.", ".#.#.#.#.#.#............................#.#.#.#.#.", ".#.#.#.#.#.#.##########################.#.#.#.#.#.", ".#.#.#.#.#.#.#........................#.#.#.#.#.#.", ".#.#.#.#.#.#.#.######################.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#....................#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.##################.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#................#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#..............#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.################.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#..................#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.####################.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#......................#.#.#.#.#.#.#.", ".#.#.#.#.#.#.########################.#.#.#.#.#.#.", ".#.#.#.#.#.#..........................#.#.#.#.#.#.", ".#.#.#.#.#.############################.#.#.#.#.#.", ".#.#.#.#.#..............................#.#.#.#.#.", ".#.#.#.#.################################.#.#.#.#.", ".#.#.#.#..................................#.#.#.#.", ".#.#.#.####################################.#.#.#.", ".#.#.#......................................#.#.#.", ".#.#.########################################.#.#.", ".#.#..........................................#.#.", ".#.############################################.#.", ".#..............................................#.", ".################################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {"..................................................", ".################################################.", ".#..............................................#.", ".#.#################.########################.#.#.", ".#.#................#.......................#.#.#.", ".#.#.###########.##.#.######.##.###########.#.#.#.", ".#.#.#.........#.#..#.#.....#..#..........#.#.#.#.", ".#.#..#.######.#..#.#.#.###.#.##.########.#.#.#.#.", ".#.#.#..#....#.#.#..#.#.#.#.#...........#.#.#.#.#.", ".#.#..#.#.##.#.#..#.#.#.#.#.#############.#.#.#.#.", ".#.#.#..#..#.#.#.#..#.#.#.................#.#.#.#.", ".#.#..#.#.#..#.#..#.#.#.###################.#.#.#.", ".#.#.#..#..#.#.#.#..#.#.....................#.#.#.", ".#.#..#.#.#..#.#..#.#.######################..#.#.", ".#.#.#..#..#.#.#.#..#.......................#.#.#.", ".#.#..#.#.#..#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#..#.#.#.#..##.#.#.#.#.#.#.#.#.#.##.#.#.#.", ".#.#..#.#.#..#.#..#.........................#.#.#.", ".#.#.#..#..#.#.#.#.########################.#.#.#.", ".#.#..#.#.#..#.#.#.#......................#.#.#.#.", ".#.#.#..#..#.#.#.#.#.####################.#.#.#.#.", ".#.#..#.#.#..#.#.#.#.#..................#.#.#.#.#.", ".#.#.#..#..#.#.#.#.#.#.#####.##########.#.#.#.#.#.", ".#.#..#.#.#..#.#.#.#.#.#...#.#........#.#.#.#.#.#.", ".#.#.#..#..#.#.#.#.#.#.#.#.#.#.######.#.#.#.#.#.#.", ".#.#..#.#.#..#.#.#.#.#.#.#.#.#.#....#.#.#.#.#.#.#.", ".#.#.#..#..#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.#.", ".#.#..#.#.#..#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.", ".#.#.#..#..#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.", ".#.#..#.#.#..#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.", ".#.#.#..#..#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.", ".#.#..#.#.#..#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.", ".#.#.##.#.####.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.", ".#.#....#......#.#.#.#.#.#.#.#.#.####.#.#.#.#.#.#.", ".#.#####.#######.#.#.#.#.#.#.#.#......#.#.#.#.#.#.", ".#...............#.#.#.#.#.#.#.########.#.#.#.#.#.", "..##############.#.#.#.#.#.#.#..........#.#.#.#.#.", ".#.............#.#.#.#.###.#.############.#.#.#.#.", ".#.###########.#.#.#.#.....#..............#.#.#.#.", ".#.#.........#.#.#.#.######.###############.#.#.#.", ".#.#.##.#.##.#.#.#.#........................#.#.#.", ".#.#.#.#.#.#.#.#.#.#########################..#.#.", ".#.#.#.......#.#.#..........................#.#.#.", ".#.#.#.#.#.#.#.#..#########################.#.#.#.", ".#.#.##.#.#.##.#.#........................#.#.#.#.", ".#.#...........#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.", ".#.#############.##.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#........................................#.#.#.#.", ".##########################################.#.###.", "............................................#....."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grid = {".................#................................", ".###############.#.##############################.", ".#.............#.#.#............................#.", ".#.###########.#..#..########################.#.#.", ".#.#.........#.#.#.#.#.......................#..#.", ".#.#.#######.#.#.#.#.#.#####################..#.#.", ".#.#.#.....#.#.#.#.#.#.#...................#.#..#.", ".#.#.#.###.#.#.#.#.#.#.#.#################.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#...............#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#############.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#...........#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#########.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.......#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#####.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#...#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.###.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.....#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#######.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.........#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.###########.#.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.............#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.###############.#.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.................#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.###################.#..#.", ".#.#.#.#.#.#.#.#.#.#.#.#......................#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#######################..#.", ".#.#.#.#.#.#.#.#.#.#.#........................#.#.", ".#.#.#.#.#.#.#.#.#.#.#.######################.#.#.", ".#.#.#.#...#.#.#.#.#.#.#....................#.#.#.", ".#.#.#.#####.#.#.#.#.#.####################.#.#.#.", ".#.#.#.......#.#.#.#.#......................#.#.#.", ".#.#.#########.#.#.#.########################.#.#.", ".#.#...........#.#............................#.#.", ".#.#############.##############################.#.", ".#..............................................#.", ".################################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grid = {"..................................................", ".################################################.", ".#..............................................#.", ".#.####.##################.#.##################.#.", ".#.#...#..................#..#................#.#.", ".#.#.#.#.################..#.#.###.####.#####.#.#.", ".#.###.#.#..............#.#..#.#.#.#...#....#.#.#.", ".#.....#..#.###########.#..#.#.#.#.#.#..#.#.#.#.#.", ".#######.#..#...........#.#..#.#.#.#.#.#..#.#.#.#.", ".........##..############..#.#.#.#.#.#..#.#.#.#.#.", "#########.#.#.............#..#.#.#.#.#.#..#.#.#.#.", ".............#############.#.#.#.#.#.#..#.#.#.#.#.", ".#####.#####.#.............#.#.#.#.#.#.#..#.#.#.#.", ".#...#.#...#.#.########.##.#.#.#.#.#.#..#.#.#.#.#.", ".#.#.#.#.#.#.#........#.#..#.#.#.#.#.#.#..#.#.#.#.", ".#.#.#.#.###.##########..#.#.#.#.#.#.#.####.#.#.#.", ".#.#.#.#................#..#.#...#.#.#......#.#.#.", ".###.#.#################.###.#####.#.########.#.#.", ".....#.............................#..........#.#.", "#####.#############################.###########.#.", "................................................#.", ".#############################.################.#.", ".#............................#...............#.#.", ".#.##########################.#.#######.#####.#.#.", ".#.#........................#.#.#......#....#.#.#.", ".#.#.######################.#.#.#.##.#...##.#.#.#.", ".#.#.#....................#.#.#.#.#.#.###.#.#.#.#.", ".#.#.#.###############.##.#.#.#.#.#.......#.#.#.#.", ".#.#.#.#..............#...#.#.#.#.#######.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.........#.#.#.#.", ".#.#.#.##.#.#.#.#.#.#.#.###.#.#.###########.#.#.#.", ".#.#.#................#.....#.#.............#.#.#.", ".#.#.#################.######.###############.#.#.", ".#.#..........................................#.#.", ".#.############################################.#.", ".#..............................................#.", ".#.########.#####################################.", ".#.#.......#......................................", ".#.#.#####.#.#####################################", ".#.#.#...#.#.#....................................", ".#.#.#.#.#.#.#.##################################.", ".#.#.#.#.#.#.#.#................................#.", ".#.#.#.#.#.#.#.#.##############################.#.", ".#.#.#.#.#.#.#.#.#............................#.#.", ".#.#.###.#.#.#.#.############################.#.#.", ".#.#.....#.#.#.#..............................#.#.", ".#.#######.#.#.################################.#.", ".#.........#.#..................................#.", ".###########.####################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grid = {"..........#..............#.#.#.#.#.#.#.#.#.#.#.#.#", ".########.#.#############.........................", ".#......#.#.............#.#######################.", ".#.####.#.#.###########.#.#.....................#.", ".#.#..#.#.#.#.........#.#.#.###################.#.", ".#.#.#..#.#.#.#######.#.#.#.#.................#.#.", ".#.#..#.#.#.#.#.....#.#.#.#.#.###############.#.#.", ".#.#.#..#.#.#.#.#.#.#.#.#.#.#.#.............#.#.#.", ".#.#..#.#.#.#.#.##.##.#.#.#.#.#.###########.#.#.#.", ".#.#.#..#.#.#.#.......#.#.#.#.#.#.........#.#.#.#.", ".#.#..#.#.#.#.########..#.#.#.#.#.#######.#.#.#.#.", ".#.#.#..#.#.#.........#.#.#.#.#.#.#.....#.#.#.#.#.", ".#.#..#.#.#.#.#######.#.#.#.#.#.#.#.###.#.#.#.#.#.", ".#.#.#..#.#.#.#.....#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#..#.#.#.#.#.###.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.##.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#....#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.###..#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#...#.#.#.#.#.#.#.#.#...#.#.#.#.#.#.", ".#.#.#.#..#.#.#####.#.#.#.#.#.#.#.#####.#.#.#.#.#.", ".#.#.#..#.#.#.......#.#.#.#.#.#.#.......#.#.#.#.#.", ".#.#.#.#..#.#########.#.#.#.#.#.#########.#.#.#.#.", ".#.#.#..#.#...........#.#.#.#.#...........#.#.#.#.", ".#.#.#.##.#############.#.#.#.#############.#.#.#.", ".#.#.#...#..............#.#.#...............#.#.#.", ".#.#.#.#.#.############.#.#.#################.#.#.", ".#.#.#.#.#.#..........#.#.#...................#.#.", ".#.#.#.#.#.#.###.######.#.################.##.#.#.", ".#.#.#.#.#.#...#........#.................#.#.#.#.", ".#.#.#.#.#.####.########.######.#########.#.#.#.#.", ".#.#.#.#.#.....................#........#.#.#.#.#.", ".#.#.#.#.#####################.#.##.###.#.#.#.#.#.", ".#.#.#.#.......................#...#..#.#.#.#.#.#.", ".#.#.#.########################.##.##.#.#.#.#.#.#.", ".#.#.#................................#.#.#.#.#.#.", ".#.#.##################################.#.#.#.#.#.", ".#.#....................................#.#...#.#.", ".#.######################################.#####.#.", ".#..............................................#.", ".################################################.", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grid = {"..................................................", ".#######.##################################.#####.", ".#......#.................................#.#...#.", ".#.####.#.#############################.#.#.#.#.#.", ".#.#..#.#.#............................##.#.#.#.#.", ".#.#.#..#.#.#####################.###.#...#.#.#.#.", ".#.#..#.#.#.#...................#.#...#.#.#.#.#.#.", ".#.#.#..#.#.#.#################.#..#.#..#.#.#.#.#.", ".#.#..#.#.#.#.#...............#.#.#..##.#.#.#.#.#.", ".#.#.#..#.#.#.#.#######.#####.#.#..#..#.#.#.#.#.#.", ".#.#..#.#.#.#.#.#......#....#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.####.#.##.#.#.#.#.#.#.#.#.#.#.#.", ".#.#..#.#.#.#.#.#.#..#.#..#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.##.#.#.#.#.#.#.#..#.#..#.#.#.#.#.#.#.#.#.#.#.", ".#.#....#.#.#.#.#.#..#.#..#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.###..#.#.#.#.#.##.#.#..#.#.#.#.#.#..#..#.#.#.", ".#.#.#..#.#.#.#.#.#....#..#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#..#.#.#.#.######.#..#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.#.........#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#..#.#.#.###########.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.#.............#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#..#.#.###############.#.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.#.................#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#..#.###################.#.#.#.#.#.#.#.#.#.", ".#.#.#..#.#.....................#.#.#.#.#.#.#.#.#.", ".#.#.#.##.#######################.#.#.#.#.#.#.#.#.", ".#.#.#............................#...#.#.#.#.#.#.", ".#.#.#############################.####.#.#.#.#.#.", ".#.#....................................#.#.#.#.#.", ".#.##.#################################.#.#.#.#.#.", ".#...#................................#.#.#.#.#.#.", ".#.#.#.#############.################.#.#.#.#.#.#.", ".#.#.#.#...........#.#................#.#.#.#.#.#.", ".#.#.#.#.#########.#.#.###############..#.#.#.#.#.", ".#.#.#.#.#.......#.#.#.#..............#.#.#.#.#.#.", ".#.#.#.#.#.#####.#.#.#.#.############.#.#.#.#.#.#.", ".#.#.#.#.#.#...#.#.#.#.#.#..........#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.########.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#......#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#..#.#.#.#.#.#.#.#.", ".#.#.#.#.#.###.#.#.#.#.#.#.###..#.#.#.#.#.#.#.###.", ".#.#.#.#.#.....#.#.#.#.#.#.....#..#.#.#.#.#.#.....", ".#.#.#.#.#######.#.#.#.#.######.###.#.#.#.#.######", ".#.#.#.#.........#.#.#.#............#.#.#.#.......", ".#.#.#..########.#.#.#.##############.#.#.#.#####.", ".#.#.#.#.........#.#.#................#.#.#.....#.", ".###.#.###########.#.##################.#.#######.", ".....#.............#....................#........."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grid = {"........#.........................................", ".######..#.##############.#.######.##############.", ".#....#.#..#............#.##......#.............#.", "..###.#..#.#.##########.#..#.####.#.########.####.", ".#....#.#..#.#........#.#.#..#..#.#........#......", ".#.##.#..#.#.#.##.#.#.#.#..#..#.#..########.######", ".#.#..#.#..#.#.#.#.#.##.#.#..#..#.#...............", ".#..#.#..#.#.#..........#..#..#.#.#.#############.", ".#.#..#.#..#.############.#..#..#.#.#...........#.", ".#..#.#.##.#...............#..#.#.#.#.#########.#.", ".#.#..#..#.#################.##.#.#.#.#.......#.#.", ".#..#..#.#......................#.#.#.#.#####.#.#.", ".#.#..##.#.######.###############.#.#.#.#.....#.#.", ".#..#..#.#.#.....#................#.#.#.######..#.", ".#.#..#..#.#.###.#.##############.#.#.#.......#.#.", ".#..#..#.#.#.#.#.#.#............#.#.#.#.#.#.#.#.#.", ".#.#..#..#.#.#.#.#.#.##########.#.#.#.##.#.##.#.#.", ".#..#..#.#.#.#.#.#.#.#..........#.#.#.........#.#.", ".#.#.#.#.#.#.#.#.#.#.############.#.###########.#.", ".#.#.#.#.#.#.#.#.#.#..............#.............#.", ".#.#.#.#.#.#.#.#.#..##############.############.#.", ".#.#.#.#.#.#.#.#.#.#..........................#.#.", ".#.#.#.#.#.#.#.#.#.#.####################.###.#.#.", ".#.#.#.#.#.#.#.#.#.#.#..................#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.################.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#..............#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.", ".#.#.#.#.#.#...#.#.#.#.#................#.#.#.#.#.", ".#.#.#.#.#.#####.#.#.#.#################..#.#.#.#.", ".#.#...#.#.......#.#.#..................#.#.#.#.#.", ".#.#####.#########.#.#.################.#.#.#.#.#.", ".#.................#.#.#..............#.#.#.#.#.#.", ".###################.#.#########.####.#.#.#.#.#.#.", ".....................#...........#....#.#.#.#.#.#.", ".####################.###########.#####.#.#.#.#.#.", ".#......................................#.#...#.#.", ".#.################.###.#.##############..#####.#.", ".#.#..............#.#.#.##..............#.......#.", ".#.#.############.#.#.#..#.#############.########.", ".#.#.#..........#.#.#.#.#..#......................", ".#.#.#.#.#.#.##.#.#.#.#..#.#.#######.############.", ".#.#.#.##.#.#.#.#.#.#.#.#..#.#.....#.#..........#.", ".#.#.#........#.#.#.#.#..#.#.#.###.#.#.########.#.", ".#.#.##########.#.#.#.#.#..#.#.#.#.#.#.#......#.#.", ".#.#............#.#.#.#..#.#.#...#.#.#.#.##.#.#.#.", ".#.##############.#.#.#.#..#.#####.#.#.#.#.#.##.#.", ".#................#.#.#..#.#.......#.#.#........#.", ".##################.#.#.#..#########.#.##########.", "....................#....#...........#............"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grid = {"..........#..................#...........#........", ".########.#.########.#######.#.###########.#####.#", ".#......#.#.#......#.#.....#.#.................#..", ".#.####.#.#.######.#.#.#####.###################.#", ".#.#....#.#........#.#...........................#", ".#.######.##########.#.#.######.################..", ".#...................#..#......#...............#.#", ".#.##.###############.###.####.#.#############.#..", ".#.#.#....................#..#.#.#...........#.##.", ".#.#.#.################.##.#.#.#.#.##.#.#.##.#..#.", ".#.#.#.#...............#.....#.#.#.#.#.#.#.#.#.#..", ".#.#.#.#.##.##########.#.###.#.#.#.#.........#..#.", ".#.#.#.#..#.#........#.#.#.#.#.#.#.###########.#..", ".#.#.#.#.#..#.######.#.#.#.#.#.#.#..............#.", ".#.#.#.#..#.#.#....#.#.#.#.#.#.#.###############..", ".#.#.#.#.#..#.#.####.#.#.#.#.#.#................#.", ".#.#.#.#..#.#.#......#.#.#.#.#.#.#.#.#.#.#.#.##.#.", ".#.#.#.#.#..#.########.#.#.#.#..#.#.#.#.#.#.#.#.#.", ".#.#.#.#..#.#..........#.#.#.#.#................#.", ".#.#.#.#.#..############.#.#.#.#.##############.#.", ".#.#.#.#..#................#.#.#.#............#.#.", ".#.#.#.###.#################.#.#.#.######.###.#.#.", ".#...#.......................#.#.#.#....#.#.#.#.#.", ".####.######################.#.#.#.#.##.#.#.#.#.#.", "...........................#.#.#.#.#.#..#.#.#.#.#.", ".#########################.#.#.#.#.#..#.#.#.#.#.#.", ".#.......................#.#.#.#.#.#.#..#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.", ".##.#.#.#.#.#.#.#.#.#.##.#.#.#.#.#.#..#.#.#.#.#.#.", ".........................#.#.#.#.#.#.#..#.#.#.#.#.", "#############.##########.#.#.#.#.#.#..#.#.#.#.#.#.", ".............#.........#.#.#.#.#.#.####.#.#...#.#.", ".###########.#.#######.#.#.#.#.#.#......#.#####.#.", ".#.........#.#.#.......#.#.#.#.#.########.......#.", ".#.#######.#.#.#########.#.#.#.#.........########.", ".#.#.......#.#...........#.#.#.#.##.#.##..........", ".#.#########.#############.#.#.#.#.#.#.###########", ".#.........................#.#.#.#................", ".###########################.#.#.#.##############.", ".............................#.#.#.#............#.", ".############################..#.#.#.##########.#.", ".#...........................#.#.#.#.#........#.#.", ".###########.##########.####.#.#.#.#.#.######.#.#.", ".............#.........#...#.#.#.#.#.#......#.#.#.", ".#.##########..#######.###.#.#.#.#.#.########.#.#.", "..#..........#.#...........#.#.#.#.#..........#.#.", ".#.##.#.#.##.#.#############.#.#.#.############.#.", ".#.#.#.#.#.#.#...............#.#.#..............#.", "...........#.#################.#.################.", ".#.#.#.#.#.#...................#.................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grid = {"...........................#......................", ".#####################.#.#.#.#.#.#.#.#.#.#.#.#.##.", ".#....................#.##.#.##.#.#.#.#.#.#.#.#.#.", "..#.#############.#.##.....#....................#.", ".#..#...........#..#...####.#####################.", "..#..######.###.#.#.###...........................", ".#..#.......#.#.#.#...#.##.##############.#.#.#.#.", "..#.#.#######.#.#.###.#..#.#.............#.#.#.##.", ".#..#.#.......#.#.....#.#..#.#.#.#.#.##.#.........", "..#.#.#.##.##.#..####.#..#..#.#.#.#.#.#.#.########", ".#..#.#.#.#.#.#.#...#.#.#..#............#.#.......", "..#.#.#.#.....#.#.#.#.#..#.#.##########.#.#.#####.", ".#..#.#.#######.#.#.#.#.#..#.#..........#.#.#.....", "..#.#.#.........#.#.#.#..#.#..#.########..#.#.####", ".#..#.#.########..#.#.#.#...#.#.#.......#.#.#.#...", "..#.#.#.#.......#.#.#.#..#.#..#.#.#####.#.#.#.###.", ".#..#.#.#.#.###.#.#.#.#.#...#.#.#.#...#.#.#.#.....", "..#.#.#.#.#.#.#.#.#.#.#..#.#..#.#.###.#.#.#..#####", "#.#.#.#.#.#.#...#.#.#.#.#...#.#.#.....#.#.#.#.....", "#.#.#.#.#.#.#####.#.#.#..#.#..#.#######.#.#.#.###.", "..#.#.#.#.#.......#.#..#.#..#.#.........#.#.#.#.#.", "#.#.#.#.##.########.#.#..#.#...########.#.#.#.#.#.", "..#.#.#.............#..#.#..#.#.......#.#.#.#.#.#.", "#.#.#.###############.#..#.#..#.##.##.#.#.#.#.#.#.", "..#.#..................#.#..#.#.#.#.#.#.#.#.#.#.#.", "#.#.####################.#.#..#.#.....#.#.#.#.#.#.", "..#......................#..#.#.#######.#.#.#.#.#.", "#.#.#.#.#.#.#.#.#.#.#.#.#..#..#.........#.#.#.#.#.", "..#.##.#.#.#.#.#.#.#.#.#.#..#.#.########..#.#.#.#.", "#.#......................#.#..#.........#.#.#.#.#.", "..########################..#.###########.#.#.#.#.", ".#.........................#................#.#.#.", ".#.########################.#################.#.#.", ".#............................................#.#.", ".#.############################################.#.", ".#.#............................................#.", ".#.#.##################################.#.#######.", ".#.#.#................................#..#........", ".#.#.#.#####.########################.#.#..######.", ".#.#.#......#.......................#.#..#.#....#.", ".#.#..#####.#.#####################.#.#.#..#.##.#.", ".#..#.#...#.#.#...................#.#.#..#.#.#..#.", ".#.#..#.#.#.#.#.#############.###.#.#.#.#..#..#.#.", ".#..#.#.#.#.#.#.............#.#.#.#.#.#..#.#.#..#.", ".#.#..#.#.#.#.###############.#.#.#.#.#.#..#..#.#.", ".#..#.#.#.#.#.................#...#.#.#..#.#.#..#.", ".#.##.#.###.##################.####.#.#.#..#..#.#.", ".#....#.............................#....#.#.#..#.", ".#####.#############################.#####.#.####.", "...........................................#......"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 203;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grid = {"................#.................................", ".##############.#.###############################.", "..............#.#.#.............................#.", "#########.###.#.#.#.#########.#################.#.", ".........#....#.#.#.#.......#.#...............#.#.", ".#####.##.#####.#.#.#.#####.#.#.#############.#.#.", ".#....#.........#.#.#.#...#.#.#.#...........#.#.#.", ".#.##..#.######.#.#.#.#.#.#.#.#.#.######.##.#.#.#.", ".#.#..#..#....#.#.#.#.###.#.#.#.#.#.....#.#.#.#.#.", ".#.#.#.#.#.#.#..#.#.#.....#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.##.#.#.#######.#.#.#.###.#.#.#.#.#.#.", ".#.#.....#.#....#.#.........#.#.#.....#...#.#.#.#.", ".#.######.#.#####.###########.#.######.####.#.#.#.", ".#............................#.............#.#.#.", ".#############################.##########.#.#.#.#.", ".........................................#..#.#.#.", "#############.##########################..###.#.#.", ".............#.........................#.#....#.#.", ".##.#.######.#.##.####################.#.#.##.#.#.", ".#.#.#.....#.#..#.#..................#.#.#.#..#.#.", ".#.....#.#.#.#.#..#.################.#.#.#..#.#.#.", ".######.##.#.#..#.#.#..............#.#.#.#.#..#.#.", "...........#.#.#..#..#.#############.#.#.#..#.#.#.", "############....#.#.#................#.#.#.#..#.#.", "............#####.#.##################.#.#..#.#.#.", ".##########.......#....................#.#.#..#.#.", ".#..........######.#####################.#..#.#.#.", ".#.####.####.............................#.#..#.#.", ".#.#...#...#.###################.#.#.#.##...#.#.#.", ".#.#.#.#.#.#.#..................#.#.#.#.##.#..#.#.", ".#.#.#.#.#.#.#.################.............#.#.#.", ".#.#.#.#.#.#.#.#...............###########.#..#.#.", ".#.#.#.#.#.#.#.#.###########.#.#.........#..#.#.#.", ".#.#.#.#.#.#.#.#.#.........#.#.#########.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.##.##.#.#...........#..#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.########.##.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#.#.....#.........#.#.#..#.#.#.", ".#.#.#.#.#.#.#.#.#.#.######.########.#.#.#.#..#.#.", ".#.#.#.#.#.#.#.#.#.#...............#.#.#.#.####.#.", ".#.#.#.#.#.#.#.#.#..##############.#.#.#.#......#.", ".#.#.#.#.##..#.#.#.#.............#.#.#.#..######..", ".#.#.#.#...#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#......#.", ".#.#.#.###.#.#.#.#.##.#.#.#.#.##.#.#.#.#.#.###.#..", ".#.#.#.....#.#.#.#...............#.#.#.#.#.#.#..#.", ".#.#.######..#.#.#################.#.#.#.#.#.#.#..", ".#.#.......#.#.#...................#.#.#.#...#..#.", ".#.#######.#.#.#####################.#.#.#####.##.", ".#.........#.#.......................#.........#..", ".###########.########################.##########.#", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> grid = {"####..#################################..#########", "#####..#################################..########", "######..#################################..#######", "#######..#################################..######", ".#######..#################################..#####", "..#######..#################################..###.", "#..#######..#################################..#..", "##..#######..#################################...#", "###..#######..#################################.##", "####..#######..###############################..##", "#####..#######..#############################..###", "######..#######..###########################..####", "#######..#######..#########################..#####", "########..#######..#######################..######", "#########..#######..#####################..#######", "##########..#######..###################..########", "###########..#######..#################..#########", "############..#######..###############..##########", "#############..#######..#############..###########", "##############..#######..###########..############", "###############..#######..#########..#############", "################..#######..#######..##############", "#################..#######..#####..###############", "##################..#######..###..################", "###################..#######..#..#################", "####################..#######...##################", "#####################..#######.###################", "######################..#####..###################", "#######################..###..####################", "########################..#..#####################", "#########################...######################", "##########################.#######################", "##########################..######################", "###########################...###################.", "##########################..#..#################..", "#########################..###..###############..#", "########################..#####..#############..##", "#######################..#######..###########..###", "######################..#########..#########..####", "#####################..###########..#######..#####", "####################..#############..#####..######", "####################.###############..###..#######", "###################...###############..#..########", "##################..#..###############...#########", "#################..###..#############..#..########", "################..#####..###########..###..#######", "###############..#######..#########..#####..######", "##############..#########..#######..#######..#####", "#############..###########..#####..#########..####", "############..#############..###..###########..###"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grid = {".############################################..###", "..##########################################..####", "#..########################################..#####", "##..######################################..######", "###..####################################..#######", "####..##################################..########", "#####..################################..#########", "######..##############################..##########", "#######..############################..###########", "########...#########################..###########.", "#######..#..#######################..###########..", "######..###..#####################..###########..#", "#####..#####..###################..###########..##", "####..#######..#################..###########..###", "###..#########..###############..###########..####", "##..###########..#############..###########..#####", "#..#############..###########..###########..######", "..###############..#########..###########..#######", ".#################..#######..###########..########", "#..################..#####..###########..#########", "##..################..###..###########..##########", "###..################..#..###########..###########", "####..################...#.#########..############", "#####..################.##..#######..#############", "######..##############...##..#####..##############", "#######..############..#..##..###..###############", "########...#########..###..##..#..################", "#######..#..#######..#####..##...#################", "######..###..#####..#######..##.##################", "#####..#####..###..#########....##################", "####..#######..#..###########.#..#################", "###..#########...###########...#..################", "##..#########..############..#..#..###############", "#..#########..############..###..#..##############", "..#########..############..#####..#..#############", ".#########..############..#######..#..############", "#########..############..#########..#..###########", "########..############..###########..#..##########", "#######..############..#############..#..#########", "######..############..###############..#..########", "#####..############..#################..#..#######", "####..############..###################..#..######", "###..############..#####################..#..#####", "##..############..#######################..#..####", "#..############..#########################..#..###", "..############..###########################..#..##", ".############..#############################..#..#", "############..###############################..#..", "###########..#################################..#.", "##########..###################################..#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grid = {"###########################################...####", "############################################.#####", "############################################..####", "#############################################..###", "##############################################..#.", "###############################################...", "################################################.#", "##############################################...#", "##########################################..#..#..", "###########################################...###.", "############################################.#####", "###########################################..#####", "##########################################..######", "#########################################..#######", "########################################..########", "#######################################..#########", "######################################..##########", "#####################################..###########", "####################################..############", "###################################..#############", "##################################..##############", "#################################..###############", "################################..################", "###############################..#################", "##############################..##################", "#############################..###################", "############################..####################", "###########################..#####################", "##########################..######################", "#########################..#######################", "########################..########################", "#######################..#########################", "######################..##########################", "####################...###########################", "###################..#..##########################", ".#################..#.#..#########################", "..###############..#..##..########################", "#..#############..#..##.#..#######################", "##..###########..#..##..##..######################", "###..#########..#..##..####..#####################", "####..#######..#..##..######..####################", "#####..#####..#..#...########..###################", "######..###..#..#..#..########..##################", "#######..#..#..#..###..########..#################", "########...#..#..#####..########..################", "#########.#..#..#######..#####..#..###############", "#########..#...#########..###..###..##############", "##########...#..#########..#..#####..#############", "###########.###..#########...#######..############", "##########...###..##########..#######..###########"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grid = {"####..############...##########..#################", "###..############..#..#######...##################", "##..############..###..#####..#..#################", "#..############..#####..###..###..################", "..############..#######..#..#####..###############", ".############..#########...#######..##############", "..##########..###########.#########..#############", "#..########..############..#########..############", "##..######..##############..#########..###########", ".##..####..################..#########..##########", "..##..##..##################..#########..#########", "#..##..#.####################..#########..########", "##..##..######################..#########..######.", "###..##..######################..#########..####..", "####..##..######################..#########.###..#", "#####..##..######################..#######...#..##", "######..##..######################..#####..##..###", "#######..##..######################..###..##..####", "########..##..######################..#..##..#####", "#########..##..######################..###..######", "##########...#..######################..#..#######", "#########..#..#..######################...########", "########..###..#..######################.#########", "##############..#..#####################..########", "###############..#..#####################..#######", "################..#..#####################..#####.", "#################..#..#####################..###..", "##################..#..#####################..#..#", "###################..#..#####################...##", "####################..#..#####################.###", "#####################..#..####################..##", "######################..#..####################..#", "#######################..#..####################..", "########################..#..####################.", "#########################..#..#################...", "##########################..#..###############..#.", "###########################..#..#############..###", "############################..#..###########..####", "#############################..#..#########..#####", "##############################..#..#######..######", "###############################..#..#####..#######", "################################..#..###..########", "#################################..#..#..#########", "##################################..#...##########", "###################################..#.###########", "####################################....##########", "#####################################.#..#########", "####################################...#..########", "###################################..#..#..#######", "##################################..###..#..######"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grid = {"..############..#...###.#....###..###...#####...##", "#..############...#.##...#.#..###..###.#####..#..#", "##..############.###...#...##..###..#...###..###..", "###..###########..#..#..##..##.#..#...#..#..#.###.", "####..###########...###.###..##..###.###...##..#..", "#####..###########.###...#####..###...#..#####...#", "######..#########...#..#..##...###..#..########.##", "#######..#######..#..#..##...#..#..###..######..##", "########..#####..###..#.#..#..##..#####..####..###", "#########..###..#####..#..###.#..#######..##..####", "##########..#..#######...#####..#########.#..#####", "###########..##########.#####..###########..######", "############..#########..#.#..###########..#######", "#############..#########...#.###########..########", "##############..#######..#.############..#########", ".##############..#####..#...##########..##########", "..##############..###..#.##..########..###########", "#..##############..#..#...##..######..############", "##..##############...#..#..##..####..#############", "###..############..##..###..##..##..##############", "####..##########..##..#####..##.#..###############", "#####..########..##..#######..#...################", "######..######..##..#########..##..###############", "#######..####..##..###########..##..##############", "########..##..##..#############...#..#############", "#########..#.##..###############.###..############", "##########....#.#..############...###..###########", "#########..##..###..##########..#..#..############", "########..####..###..########..###..#..###########", "########.######..###..######..#####..#..##########", "#######...######..###...###..#######..#..#########", "######..#..###..#..#..#..#..#########..#..#######.", "#####..###..#..###..####...###########.##..#####..", ".###..#..##...#####..##..#############...#..###..#", "..#..###..##.#######..#.###############.###..#..##", "#...#####..#..#######..################..###...###", "..########..#..#######..################..###.###.", ".#..#######..#..#######..################..#...#..", "#..#########..#..#######..################...##..#", "##..#########..#..#######..##############..###..##", "###..#########..#..#####.#..############..###..###", "####..#########..#..###..##..##########..###..####", "#####..#########..#..#..####..########..###..#####", "######..#########..#...######..######..###..######", "#######..#########...#..######..#####.###..#######", "########..#######..####..######..###...#..########", "#########..#####..######..######..#..##..#########", "##########..###..########..####.#..###..##########", "###########..#..##########..##...#..#..###########", "############...############....#..#...############"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 214;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grid = {"#..###....#..############..#..###..###############", "##..#..#.#..##############...###..################", "###...##...################.###..#################", "##..##..#.#################..#..##################", "#..#...##..#################...###################", "..#..#..##..#################.####################", ".#..###..##..###############..####################", "#..#.###...#..#############..#####################", "..##..####..#..###########..######################", "#..##..####.##..#########..#######################", "..#..#..##...##..#######..#######################.", ".#..###....#..##..#####..#######################..", "...###..#.###..##..###..#######################..#", "#.###..#...###..##..#..#######################..##", "...#..#..#..#.#...#...#######################..###", ".##..#..###...##.#..#..#####################..###.", "..#.#..######..##..###..###################..###..", "#..#..########.#..#####..#################..###..#", "##..###########..#######..###############..###..##", "###..#########..#.#######..#############..###..###", "####..#######..##..#######..###########..###..####", "#####..#####..#.##..#####.#..#########..###..#####", "######..#.#..##..##..###...#..#######..###..######", "#######...#.####..##..#..#..#..#####..###..#######", "########.#...####...#...###..#..###..###..########", "########...#..####.###.#####..#..#..#.#..#########", "#######..####..###..#..######..#...##...#########.", "######..######..###...########..#.####.#########..", "#####..########..###.##########..#####..#######..#", "####..##########..##..##########..###..#######..##", "###..############...#..##########..#..#######..###", "##..###############..#..##########...#######..####", "#..#################..#..###########..#####..#####", "..###################..#..###########..###..######", ".#####################..#..###########..#..#######", "#######################..#..###########...########", "########################..#..#########..#..#######", "#########################..#..#######..###..#####.", "##########################..#..#####..#####..###..", "###########################..#..####.#######..#..#", "############################..#..##...########..##", "#############################..#..#.#..######..###", "##############################..#..###..####..####", "###############################..#..###..##..#####", "################################..#..###.#..######", "#################################..#..###..#######", "##################################..#..#..########", "###################################..#...#########", "####################################...#..########", "######################################..#..#######"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 177;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grid = {".###..########################...#################", "..###..######################..#..################", "#..###..####################..###..###############", "##..###..##################..#####..#############.", "###..###..################..####..#..###########..", "####..###..##############..####..#..#.#########..#", "#####..#.#..############..####..#..##..######...##", "######...##..##########..####..#..####..####..#.#.", "#######.####..########..####..#..######...#..#....", "######...####..######..####..#..######..#...#..##.", "#####..#..####..####..####..#..######..###.#..##..", "####..###..####..##..####..#..######..###..##.#..#", "###..#####..####....####..#..######..###..#..#..##", "##..#######..####.#####..#..######..###..###...###", "#..#########..##..#..#..#..######..###..###..#####", "..###########....###...#..#..###..###..###..######", ".#############.#..###.#..###..#..###..###..#######", "##############..#..#....#####...##...#.#..########", "..#############..#..#.#..###..###..##..#.#########", "#..#############.###.###..#..###..#...##..########", ".#..###########...#...###..####..###.#..#..#######", "..#..#########..#...#..###..##..###...#..#..######", "#..#..#######..#..#..#..#.#....###..#..#..#..#####", "##..#..#####..#..###.###..#####.#..###..#..#..####", "###..#..###..#..###...#..#....#...###.#..#..#..###", "####..#..#..#..###..##..#..#.#..####..##..#..#..##", "#####..#...#..###..##..#..###..#..#..####..#..#..#", "######..#.#..###..##..#..###..###...######..#..#..", "#######..#..###..##..###..#..###..#..######..#..#.", "########..####..##..#####...###..###..######..#...", "#########..##..##..#.###..#..#..#####..######...##", "##########..##.#..#...##.#..#..#######..####..#...", "###########...#..#..#...#..#..#########..##..###.#", "##########..#...#..#..#...#..###########..#.#####.", "##########.####..##..#..##..#############..#####..", "#########...#..#..#.#..##.#..#############..###..#", "########..#..#..#..#..##..##..#############..#..##", "#######..###..#..#...##..#..#..##########..#...###", ".#####..#####...#..###..#..###..########..####..##", "..###..#######.#..###..#..#####..######..######..#", "#..#..#######...#..#..#..#######..####..########..", "##...#######..#..#...#..#########..##..##########.", "#..########..###..#.#..########..#....##########..", "..########..#####..#..#######...###.#..########..#", ".########..#######...#######..#..##..#..######..##", "########..#.#######.#######..###..##..#..####..#.#", "#######..##..#####...#####..#####..#.###..##..#...", "######..####..###..#..###..#######...####..#.####.", "#####..######..#..###..#..##########..#..##...#...", "####..########...#####...############...##..#...#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 278;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grid = {"####...#..#..###############################..####", "###..#..#...###############################..#####", "##..#..###.##############################...######", "#..#..###...############################..#..#####", "..###..#..#..##########################..###..####", ".#####...###..########################..#####..###", "#####..#..###..######################..#######..##", "####..#.#..###..####################..#########..#", "###..#...#..###..##################..###########..", "##..#..#.##..###..################..#############.", "#..#..###..#..###..##############..###############", "..#..###..###..###.#############..################", ".#..###..#####..#...###########..#################", "..#..#..#######..##..#########..##################", "#..#...#########..##..#######..###################", "##..#.###########..##..#####..####################", "###...############..##..###..#####################", "####.##############..##.##..######################", "####..##############..##...#######################", "#####..##############.#..#..######################", "######..##############..###..#####################", "#######..############..#####..####################", "########..##########..#####.#..###################", "#########..########..#####..##.###################", "##########...#####..#.###..##...##################", "#########..#..###..##..#..#...#..################.", "########..###..#..####...#..##.#.###############..", "#######..#####...######.#..###....#############..#", "######..#######.#######...###..##..###########..##", "#####..#######...#####..####..####..#########..###", "####..#######..#..###..####..######..#######..####", "###..#######..#.#..#..####..########..#####..#####", "##..#######..#...#..#..##..##########..###..######", "#..#######..#..#..#..#..#.##########.#..#..#######", "#.#######..#..###..#..#..#########...###..########", "...#####..#..#####..#..#..#######..#..#..#########", ".#..###..#..#######..#..#..#####..####..##########", "###..#..#..#########..#..######..####..###########", "####.#.#..###########..#...###..####..############", "###...#..##############..#..#..##.#..#############", "##..#...##############..###...##....##############", "#..###.##############..#####.#...##..#############", "..###...############..######...#..##..############", ".###..#..##########..######..####..##..###########", "..#..###..########..######..######..##..##########", ".#..#####..######..######..########..##..#########", "#..#######..####..######..##########..##.#########", "..#########..##..######..############..#..########", ".###########.#..######..##############..#..#######", "#############..######..################..#..######"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 186;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grid = {"##############..######..##..##..##########....####", "###############..####..##..##..#..#######..##..###", "################...#..##..##..###..#####..##.#..##", "###############..#...##..#..#..###..###..##..##..#", "##############..#.#.##..###..#..###..#..##..####..", ".############..##...#..#####..#..###...##..#..###.", "...#########..####.#..#######..#..#..###..#.#..#..", ".#..#######..####...#..#######..#...##...#...#...#", "..#..#####..####..#..#..#####..#.#.#...#..##..#.##", "#..#..###..####..#.#..#..###..##..#..#..#..##....#", ".#..#..#..####..#..##..#..#..####...###..#..##.#..", "..####..#####..#..#..#..#...######.#####..#.#...#.", "#...###..#.#..###..#..#..#.#######...####..#..#..#", "#.#..###.....#####..#..#.#..#####..#..##..#..###.#", ".###..#..#.#..#####..#....#..###..###..#.#..###...", "..###...##..#..#####...##..#..#..#####..#..###..#.", "#..#..#...#..#..###..#####..#...#####..##.###..#..", ".#..#####..#..#..#..#####.#..#.#####..##...#..##.#", "..#..##..#..#..##..#####..##..#####..##..#..###...", "#..#..##.##..#..#.#####..####..###..#...###..#..#.", "##..#..#..##..#..#####..######..#..#..#..###..####", "###..#..#...#..#..###..######.#...#..###.####..###", "##..###..##..#..#..#..######..###.#.###...####..##", "#..#####..##..#..#...#..###..###...###..#..####..#", "..####..#...#..#..#.###..#..###..#..#..#.#..####..", ".####..#..#..#..#.#..###...###..#.#..#....#.#####.", "..##..#..###..#....#..###.###..#...#..##.#...###..", "#....#..#####..#.#..#..#..##..#..#..#..##..#..#..#", "..#.#..#######..###..#...##..#..###..#..#.###..#.#", ".#..#.#########..###..#.##..#..###..###..###..#...", "#..#...#########..###.#..#.#..###..#####..#..#..#.", "#.#..#..#########..#####..#..###..#######..##..###", "..#.###..#########..#####..####..#########.#..#.##", ".#...###..#########..#####..#...###########..#...#", "..##..#.#..#########..#####...#..#########..#..#..", "#..##...##..#########..#####.###..#######..#..#.#.", "##..#.#...#..#########..####..###..#####..##.#....", "#.#..###.#.#..#########..####..###..###..##...##.#", "...#..###..##..#########..####....#..#..##..###...", ".#..#..#..####..#######.#..##..#.#..#..##..##...#.", "..#..#...######..#####..##..#.#..#.##.##..#...#..#", "#..#..#.########..###..####..#..####...#.###.###..", "##..#.#..########..#..####.#...#..#..#..###..####.", "###..###..########...####..#.#..#...###..#..######", "####...##..######..#..##..###.#..#.#####...#######", "###..#..##..####..#.#.#..###...#..#######.########", "##..###..##..#.#.##..#..###..#..#..#####...#######", "#..#####..##...#..##...###..###..#..###..#..######", "..#######..#.#..#.#..#..#..#####..#..#..###..#####", ".#########....#.....###...#######..#...#####..####"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 342;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grid = {"######..##...#####..###...##..#..######..###..####", "#####..##..#..#####..#..#..##..#..####..###..#####", "####..##..#.#..#####...###...#..#..#...###..######", "###..##..##..#..#####.#####.###..#...#.#...#######", "##..##..####..#..###..####...###..#.###..#..######", "#..##..######..#..#..#..#..#..###....#..###..#####", "..##..########..#...#.#...#.#..#..#.#..#.#.#..###.", ".#...########..###.#...#.#..##...#.#..#....##..#..", "..#.########..####..##.....#..#.#..#.#..#.#..#...#", "#..#######...######..#.###...###..#..#.#...#..#.##", ".#..#####..#..###..#..##..##..#..#..###..#..#....#", "..#..###..###..#..#..##..##..#..#..###..###...##..", "#..#..#..#.#.#...#..#...##..#..#..##.#.##########.", "##..#...#....###...#..#.#..#..#..##..#..###...####", "###..#.#..#.######..#..#..#..#..##..###..#..#..###", "####.#...#..#######..#...#..#..##..###.#...###..##", "###...#.#..#########..#.#..#..##..###..###..###..#", "##..#..#..###########..#..#..#...###..#####..###.#", "#..###...#############...#..#..#..#..#######..#...", "..#.#.##..#############.#..#..#.#...#######..#..#.", ".#....###..#############..#..##..##..#####..#..###", "..##.#####..###########..#..####..##..###..#..##..", "#..#..###.#..#########..#..####..####..#..#..#...#", ".#..#..#..##..#######..#..###...######..##..#..#.#", "..#..#...###.#######..#..#.#..#..###..#.#..#..#...", "#..#..##..#...#####..###.....###..#..###..#..#..#.", "##..#..##...#..###..###..##.#####...###..#..#..###", ".##..#...#.###..#..#.#..###..######..#..###..#####", "..##..##..###..#..#...#..###..####..#..#####..####", "#..##..##..#..##.#..#..#..###..##..#..####..#...##", "##...#..##..###..#.#.#..#..#.#..#.#..####..#..#..#", "###.#.#..##..#..####..#..#...##..#..####..#..###..", "###....#..##.#.######..#..##..##...####..#..#####.", "####.#..#....#..###...###..##..##.####..#..#####..", "###..##..#.#..#..#..#..#.#..##.#..###..#..#####..#", "##..###.#...#..#...#..#..##..###.#.#..#..#####..##", "#..###.#..#..#####.#.#..####..#..#...###.####..###", "..###..#.#.#...##...#..######...#.##..#...##..####", ".###..#....#.#..#.#...######..###..##...#.#..#####", "..#..#..##..###..####..####..#..##...#.###..######", "#...#..####..###..#..#..###.#..#...#..###..#######", "##.#..######..###..#..#..#...#..#.#.#..#..########", "##...########..###..#...#..#..#..##..#...#########", "#..###########..###..#.#..###..#...#..#.##########", "..#############..###..#..#####..##..#...##########", ".###############..###..#####..#.###..#.###########", "#################..###..###..#...###....##########", "##################..###..#..#..#..#.#.#..#########", "###################..###...#..###...#..#..########", "####################..#..#...######...###..#######"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 345;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grid = {"#..#...#..#.....##..##############################", ".#...#..#..#.##....###############################", "..#.###..#..####.#..##############################", "#....#.#..#..##...#..#############################", "..##....#.##....#..#..############################", ".#.##.##...#.#.###..#..###########################", "#...#..#.#..#...###..#..##########################", "..#..#..###...#..#.#..#..#########################", ".###..#...###..#...#.###..########################", "..###.#.#..###..#.#...###..#######################", "#..#..#..#..###..#..#..#.#..######################", ".##..#.#..#..###..#..#...##..#####################", ".#..#...#..#..###..#..##..##..####################", "...#..#..#..#...##..#..#.#..#..###################", "#.#..###..#.#.#..##..#..#..###..##################", "....######...###..##..#...#####..#################", ".##..####..#..###..##..##.######..################", "..##..##..###..###...#..#..###..#..###############", "#..##.#..#####.#..##..####..#..#.#.###############", "##..###.#######..####...#.#...#..#..##############", "###..#...#####..#######...##.#..###..############.", "####...#..###..#####...#.####..#####..##########..", "###..#..#..#..#####..##..#.#..#######..########..#", "##..#.#..##..#####..##..#....#########..######..##", "#..#...#....#####..##..#..#.#########.#..####..###", "..#..#..#.#..###..#...#..#...#######...#..#...####", ".#..#.#..#.#..#..#..##..#..#..#####..#..#...#..##.", "#..#..##....#...#..###.#..###..###..###..##..#.#..", "..###..##.#..#.#..###...##.###..#..#####..##..#..#", ".#####....##..#..###..#..#..#.#...#######...#...##", "#####..#.#...#..###..###..#....#.#########.#.##..#", "####..#..#.##..###..#####..#.#.#..#########..###..", "###..#..###...###..#######.##...#..#######..#####.", "#####..###..#..#..#########...#..#..#####..#####..", "###...###..#..#..#..######..####..#..###..######.#", "##..#..#..#..#..###...###..#..#.#..#..#..#.####...", "#..###...#..#..###..#..#..#..#...#.##...##..##..#.", "..#####.#..#..#.#..###...#..#..#....##.####....#.#", ".#####...##..#....#####.#..#..#..##.#..###..#.#..#", ".####..#..#.##.#.#####..##..##..####..###..#..#.##", "..###.###..#..#######..#..#..#.####..###..#..#..##", "#..#...###..#..#####..###..#..####..###..##.#..###", "##..##..###.##..###..#####..#...#..#.#..##...#..##", "###..##..#...##..#..#######...#...##..###..#..#..#", "####..##..##..##...#######..##.#.####..#..#.#..#..", "#####..##.###.#..#.######..##.....####...##..#..#.", "######..#..###..#...####..##..#.#..##..#####...#..", "#######..#..#..#..#..##..#...#...#.#..#######.#..#", "########..##..##.###.#..##.##..#..#..#######....#.", "#########....#....###..#.....####...#######..##..."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 311;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grid = {"#.##.#", "#.#...", "#.##.#", "......", "#.##.#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
    vector<string> grid = {".#.", "...", "#.#", "...", ".#."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grid = {"##################################################", "######################################........####", "########...............................######.####", "########.#############################.....#######", "########.#########.....................###.#######", "#################..###############################", "#################.################################", "#################..###############################", "##################..##############################", "###################..#############################", "####################..############################", "#####################..###########################", "######################..##########################", "#######################..#########################", "########################..########################", "#########################..#######################", "##########################..######################", "###########################..#####################", "############################..####################", "#############################..###################", "##############################..##################", "###############################..#################", "################################.#################", "###.###########################...################", "###.############################.#################", "###.####.#######################.#################", "###....#.#######################..################", "######...########################.################", "####...##########################.################", "####.#.............................###############", "####.############################.################", "####.############################.################", "####.############################.################", "####.#############################################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grid = {"#....", ".##.#", ".....", ".##.#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grid = {"............................"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grid = {"#.##.#", "......", "#.##.#", "...###", "#.####"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grid = {"#.#"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grid = {"#######", "#..####", "#.#####", "#..####", "#.#####", "#.#.#.#", "#.....#", "#######"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grid = {"##..#", "##.##", "#...#", "#.#.#", "..#.."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grid = {"#############........####.########################", "####################.####.########################", "####################.####...........##############", "#######......#######.####.######.#################", "############.#######.####.######.#################", "############.#######.####.######.#################", "############.#######.####.######.#################", "############.#######.####.######.#################", "############.####..........#####.............#####", "############.#######.###########.###########.#####", "############.#######.###########.###########.#####", "############.........###########.###########.#####", "###############################..###########.#####", "###############################.############.#####", "#########################.......############.#####", "###############################.############.#####", "#############........####.#####.############.#####", "####################.####.#####.############.#####", "####################.####...........##############", "#######......#######.####.######.#################", "############.#######.####.######.#################", "############.#######.####.######.#################", "############.#######.####.######.######....###.###", "############.#######.####.######.#########.....###", "############.####..........#####.#############.###", "############.#######.###########.#############.###", "############.#######.###########...............###", "############.........###########.#################", "###############################..#################", "###############################.##################", "#########################.......##################", "#########################.#####..#################", "############.#######.####.######.#################", "############.####..........#####.#################", "############.#######.###########.#################", "############.#######.###########.#################", "############.........###########.#################", "###############################..#################", "###############################.##################", "#########################........#################", "############.#######.####.######.#################", "############.####..........#####.#################", "############.#######.###########.#################", "############.#######.###########.#################", "############.........###########.#################", "###############################..#################", "###############################.##################", "#########################........#################", "############.#######.####.######.#################", "############...............#####.#################"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grid = {".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".#...#...#...#...#...#...#...#...#...#...#...#...#", "...#...#...#...#...#...#...#...#...#...#...#...#..", "#################################################.", "...#...#...#...#...#...#...#...#...#...#...#...#..", ".#...#...#...#...#...#...#...#...#...#...#...#...#", ".#################################################", ".................................................."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 393;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grid = {"###.#", ".#..#", "...#.", "##...", "...##", ".#...", "####."};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grid = {"..................................................", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.###", "..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..###", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.####"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
    clock_t end = clock();
    delete pObj;
    int expected = 400;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> grid = {"#####", ".....", "#.#.#", "..###"};
    FoxBomb* pObj = new FoxBomb();
    clock_t start = clock();
    int result = pObj->getMinimumCost(grid);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22775138&rd=14731&pm=11320
********************************************************************************
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}
 
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <cstring>
 
#define FOR(I,A,B)  for(int I = (A); I < (B); ++I)
#define REP(I,N)  FOR(I,0,N)
#define ALL(A)    (A).begin(), (A).end()
 
using namespace std;
 
// }}}
 
vector< pair<int,int> > loc;
int idx[55][55];
vector<string> grid;
int m,n;
bool bomb[55][55];
int cover[55][55];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
 
class FoxBomb
{
public:
  int getMinimumCost(vector <string> _grid)
  {
    grid = _grid;
    m = grid.size();  n = grid[0].size();
    memset(idx,-1,sizeof(idx));
 
    loc.clear();
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++) if (grid[i][j] == '.' && loc.empty()) {
        memset(bomb,false,sizeof(bomb));
        loc.push_back(make_pair(i,j));
        bomb[i][j] = true;
 
        queue< pair<int,int> > q;
        q.push(make_pair(i,j));
        while (!q.empty()) {
          int ux = q.front().first,uy = q.front().second;
    q.pop();
    for (int dir = 0; dir < 4; dir++) {
      int vx = ux + dx[dir],vy = uy + dy[dir];
      if (vx < 0 || vx >= m || vy < 0 || vy >= n || grid[vx][vy] == '#' || bomb[vx][vy]) continue;
      bomb[vx][vy] = true;
      loc.push_back(make_pair(vx,vy));
      q.push(make_pair(vx,vy));
    }
        }
      }
 
    for (int i = 0; i < loc.size(); i++) idx[loc[i].first][loc[i].second] = i;
 
    memset(cover,0,sizeof(cover));
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++) if (grid[i][j] == '.') update(i,j,1);
 
    for (int i = loc.size() - 1; i >= 0; i--) {
      int ux = loc[i].first,uy = loc[i].second;
      bomb[ux][uy] = false;
      update(ux,uy,-1);
      if (!allCover()) {
        bomb[ux][uy] = true;
        update(ux,uy,1);
      }
    }
    int ret = 0;
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++) ret += bomb[i][j];
    return ret;
  }
 
  bool allCover() {
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++) if (grid[i][j] == '.' && !cover[i][j]) return false;
    return true;
  }
 
  void update(int x,int y,int d) {
    int z = x - 1;
    while (z >= 0 && grid[z][y] == '.') {
      cover[z][y] += d;  z--;
    }
    z = x + 1;
    while (z < m && grid[z][y] == '.') {
      cover[z][y] += d;  z++;
    }
    z = y - 1;
    while (z >= 0 && grid[x][z] == '.') {
      cover[x][z] += d;  z--;
    }
    z = y + 1;
    while (z < n && grid[x][z] == '.') {
      cover[x][z] += d;  z++;
    }
    cover[x][y] += d;
  }
};
 
 
// Edited by VimCoder 0.3.2
// http://www.dogcows.com/vimcoder

********************************************************************************
*******************************************************************************/