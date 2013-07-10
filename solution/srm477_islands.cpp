/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10874
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

class Islands {
public:
    int beachLength(vector<string> kingdom);
};

int Islands::beachLength(vector<string> kingdom) {
    int ret;
    return ret;
}


int test0() {
    vector<string> kingdom = {"##...##", "#.#.#..", "#..####", "..###..", "#.##..#", ".....#.", "##.....", "..#.###", "##.###.", ".##...."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> kingdom = {".#...#.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {"..#.##", ".##.#.", "#.#..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> kingdom = {"#...#.....", "##..#...#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> kingdom = {"....#.", ".#....", "..#..#", "####.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> kingdom = {"###.#", ".###.", ".###.", "#....", "##.##", ".####"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> kingdom = {".#", "..", "#.", "##", "##", "..", "#.", "##", "#.", ".#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> kingdom = {"#.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> kingdom = {"#.", "#.", "..", "##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> kingdom = {"...", "##.", "###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {"..#######..######....##..#.#..", "....#######..##.#...#.####....", "#..#....##.#..#.....#....#.#..", "..#.###...##.#####..######.#.#", ".#..#..##.##..#####..#.#.##.#.", "#.#.#.###.#...#..##.#####..###", "###.#.......#####..###.###.##.", "#.#####.##.####.#.#######..###", "...##.##.##.#..#..#..#.###..#.", "..##.#..##.#....#####.###.....", ".##.#.######.........##.#..##.", ".....##.######.#####..###...#.", "###.#...#..##.#.###.#####.#.##", ".##..####.#..#.####.#.##.###..", ".####.#....#....###.###.#..###", "###.#.####...##....###.#....#.", "....##.......#...###.#.##.#.#.", "##...####..#.##.####..##..##..", "#.###.#.###..###..#.#.#......#", ".###.#####....###.####.#.#####", "#....#..##.#...#.#..#..##..#.#", "#...####.##....###....#...#..#", "#..........#.#...###.##..#.##.", ".##.######.......##########...", "..##.#.#..#......###...##.##.#", ".#.#####......##.##..#.#..#.#.", ".#.#....#.####........#.......", "#####....#...#.##..#.....#.#.#", "###..######..##.###...##..#.##", "..###.#.#.######..#..##.###..#", ".#..##.##.####..#.##...#..#.#.", ".#..##..###..#....#.###...#..#", "###.#.##...###.....#.#.###.###", "...#..###....#.###...#..#.###.", "#.###.#..##..###.#...###..#..#", "...#.####......##....###...#.#", ".#####.###.#...###....#####..#", ".....#####...#..##...##...#..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1601;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> kingdom = {"##.#.###.###..###", "...#..##......##.", "#..##.#.#..##....", "###.#.##.###...#.", "...#....#..##...#", "#.##.##..##.##.#.", "#.###.####.#..#.#", "#..####.#....####"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 184;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> kingdom = {"#.##", "#.##", "..#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> kingdom = {"##..##.#.#....#######..##.#.#.##.#.#...#...", "..#.#....#..#....#.#.#..#..#....##.#...###.", "..#...###.######.#.######.#####..##...##.#.", "#...#...##..###.#.#.##.......#.#...####.###", ".###.###....##..###.#..##.####.#.#.####....", "...#...##.##.#######..######..#...##..##..#", "#.#.#.#.#..####...#.###.####...###.#.#.....", ".##.####...##..#..##...###...#..##...##.###", "..#...#.#.#.#####.....#..#.#####.####...###", "##.###....#.#.##..####.#....##.###.##.####.", ".#.....#.###.#.##.##.#.#.###.##..#...######", "...#####.##.#...#.#.##..##...#.##.#..###.##", "#..####..#.#....#####.########.##....#.###.", ".......####.....#..#..##.#.#.#..#######.###", ".....#.##.......##...###.#...###...##...#.#", ".#.##...####.#..#.##.##.#..#..#####..######", ".#####..#.####.####.##.####...#....###.####", "#####.########.###.#####.##....#..###.#..##", "......##...######..##...#.#.####..#..####.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1164;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> kingdom = {"#.##.#..##.#.....#...#..#....#", "#..#...#.#.##.######.#.#..##..", "..#.#..#..##...##.##.##.#..#..", ".###..#.#.##.#...###.##..#...#", "..#......##.#########.##.###..", ".##.#####........##.######..#.", "##.....#..##.##..#.#.#........", ".####..###.##.####..#.#...##..", ".#..##...#.....#.###.#.###....", "#.##...#....###.....###.##..#.", "##...#..####.##.###.####.#.##.", "####..###....#......###......#", "#......##.##..##...#..#.#..###", "##..#...#....#.....#.#.###.###", "###.##..##.##.##...#...#.##...", ".#....###..#..#..#.###.##.....", ".##..##...##.#....#.###...##..", "#.#########.#.#.###.##...###.#", "#...##..#...##..#.#.#..#..#...", "#.#.#.##.......#.........####.", "......##......#...###.#.#...#.", ".##.#....#...#.#.#.##....###..", "....#.#....#....##.##...#.##.#", "#..##.#####.#...#..###.#..#.##", "..#.#..#.#.....####.###.#.#.#.", ".#....###.....#..#...#.#.#.###", "###.####...#..#...###.#..####.", "..##...#...#.####..##.#..#.#.#", ".##..##.#.#........#.#.....#.#", "#.###...##.##.##.#####..#.##.#", "#.#..####..##.#..#.#.#..#..###", "#...#.###.##.##.###.##.###.##.", "..###.#...####.#..#..##..#.###", "#.#...###....#..#...#..#..##.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1491;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> kingdom = {"#.##..##.#.##..#....#.....##..####.#.##...#####.#", "....##...###.#.#.#.#...#.##..#..##.#...###..#.#..", "#..####.##.####..#..####.#.##..#.###..#.#.#.#...#", "##..#.##..#.##.#.##...#..#.##..#....#....###.#..#", "..###.#.##.#####.#.#...#.####....##.##...##.##...", "..##.#####..#.#...##...#..#.#.#..###....#.#......", "#...#####.#.#...##.#.....##.##.#.##....##..#...##", "#.####.#.###..####..#.#.###.##..###..#.#.#.#.###.", "..###..#.#####.#...###.##..#..##.#....#.#..#.#...", "#####.##.###.#..#...#..#..####.##.#..#..#...#...#", "###..##.###..##..#..#.#.#.#.##..######.#.#.######", "###....####.####.####...#.#..#.#.....####.#...#..", "##.##.#..#..#.#####.#.......#####.##...#...#.#...", "##..#..#...#.####.###...#....#...#..#..#...#..#..", "##..#...##..##....#.#.####...##.##..###..#.#.#..#", "..##..#.#.#.#.#######..#......#...#..#..#..###.##", "....######...##.#.#..###..##.##.#.#...#.####..###", "##.#.#...#..#....###.#...######....#...##.###.#.#", "..#.######..#.#.##..#.##..#.###..#.....#.##....##", "#.#...#..###.#..#.#####....###.#...######..#.####", ".####..###.##.#...##.###...##.###.#...#.#...#.###", ".###.#.#...#######.#.###..######.#.##...##......#", "##....#...###..###...######..##..######.#####.#..", "#####..#...#...#########....#..#..#.##.###...#...", ".##..######.#.###..####.#.##....#.......#.#####.#", "#.##..#.#.#.#.....###.###....##...#####.##.....#.", "##.#.....#.##..#.###..###.#.#.#...#.####...#.#.#.", "#####.#.#.....#..#.#####...#.##.#..######.##..###", "#...#...####.#...#...##...##.#.#.....##......#.##", "#...########..#.####..#...#.....###..#..###.####.", "#######.###......#.##.#.####.##....#..#.#....##.#", "..##.......##.....##..#...#.##.#.#.#...#.####.##.", ".#.###.##...#.#.###..###..###.#.#########.#.#....", "#####..#.##.#......###.....##..#####....#...#.##.", ".##.#.###.#.....##.####.#.##.......#..####.##.#..", "#..#.....#.#.###...#..##.###.#.#.#..####.###...#.", "##....##........##.....####.#....##.##..###.##.#.", "#####..##....#.#.#..#.#..##.#.##.#.####...#####.#", "#.##.....###.##.###.##.#.#.##.###...#...###.##...", ".###.#..#.#####....###.#...#..#####....#...###.##", "..##.###..##.#.#.#..#..####.##.#...#.###.....##..", ".#.#######.##.#...#.##..#...##.#.....#..#####...#", "####.#.#..#####.....###.##.#.....#..########.##..", "...#.###.#.##.##.###...#..#...###....###.#.......", ".#.######....###.#.##...###...####...#.#..#.##.##", "...###..#.#.##.#.###.....#.#.###.#.#####......###", "#..##.###.#.#...####..##.####.#...#..######.#.###", ".#..####...###..#...##.###.###.###...##.##...#.#.", "##..##..###....##.#.###...##.###.....#..####.##.#", "......#..#.#.###..#..#..###..##.#...#.##.......#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 3559;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> kingdom = {"#.#.#.#..#.", "#######..##", "###.#.####.", ".#.####...#", "####.#.####", "#....###.#.", ".#.##...#..", ".#.######..", "######.#.#.", "#..###.#..#", "..##..#.#.#", "###..#.....", ".#..#....#.", "#..#..####.", "##.#.##.#..", ".##.####.##", "..##.#.###.", "###..#.##..", "##.###.#...", "..#.#..##.#", "##..#.#.##.", "######.##.#", "##...#..###", "...#####..#", ".###......#", "...#...##.#", "#..#.#.....", "..####.#...", "#...#..#.#.", "#..#.###..#", "...##.#.#.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 487;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> kingdom = {"....##..###.##..#.#..#.#...#.#..########..#...##", "#.##..##.##..#.#..##.###.##.#.#..###.#.####..#.#", "#.....##.....#.###.##.##...#..#.#..#..........#.", "...##.#.#.###.#.#.#####.#.######.#......########", "#..####.......##...#.###.##.###....#.#.##.#....#", "..#.###....#.###...#####..#.##...#....#.#..#....", "##..##.##.#.#....##.##.##.#.#.###.##..#..#...#..", ".##.#....##.##.#.#.####.#.##..##.#.#.#.#..##.###", "#.....#..#..#.##.#######.##.####....####...####.", "#..#.#.#.##......#.#..#######..###..####..#...##", ".#####..##.###.#.#..##......##...##....#.####...", ".##..###.....##..##..#.#.##.#..##...##.....#####", "..####.#############........###....#.#..###.###.", ".##..##.#.#..##.####....#...######..#....#.##.##", "#...#..###.#.#.#.#.######..#.#...####.#..#...##.", ".#.#.#.###......#.#.....#.....##.##....#..#.##.#", "...#...#..####.#.........#.#.##..###.##.##..#.#.", ".#.#....###....#.###.#...#.#.#.##.#.#...###....#", ".##....###.#.....##.#.###.#.##.###.....###.####.", "#.#.######..#.###.##..##.##..#..#.#.#.#..####.#.", "#.##.######.##...#.###.######.#.###..###..##.###", ".###..##..####..#.#...##.##.##.####..#####..#.##", "##.#..#.......#####...#.....#.#.####.....##.#.#.", "..#.....##..#.###.#.##..#....#......#..###..##..", "#.#######.###.#.###.#...#..###.#...#..#..##...##", "..##..#.#.#.#.....##..####.#..####...#.#...#.#.#", "#..##.#..##.#..#.#.###....##...###.#...##.#.....", "#.##....########.##.......#.......##.#####.###.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1965;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> kingdom = {"####.", "###.#", "#..##", ".###.", "....#", "..##.", "####.", "##.#.", "#####", "....#", ".#..#", "#.#.#", ".##..", ".##.#", "###.#", "##..#", "..###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> kingdom = {"...#...#.#..#..#.", "#.#.#.##.....#.#.", "#.##.#######..###", "...##..###.#.####", "#...#.#.....#.#..", ".#.#.#.......#..#", ".###.#.#####.....", "...#.###..#.##.#.", "##.#.###.#....###", "######..#.....#..", "#.....###.####.#.", "..#..##.##.##..##", ".##.#....#...##.#", "#.##.#.#.###.####", "#.##.####..###...", "...##...#.#..##..", "...#..#....##.##.", "###.#..###.#.###."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 444;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> kingdom = {".#...#", "..#.##", "###..#", ".....#", "#.#...", "#.####", ".##..#", "#.#..#", ".#.#.#", "###..#", "###.#.", "#.###.", ".....#", "##...#", "#.##.#", "#.#..#", ".#....", ".#...#", "#...##", "..#.##", "..###.", ".##...", "####.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> kingdom = {"#.#.###.#...#...", "....#.....##..##", "###.#...##..#.#.", ".#.#.####.######", "##.###....#.####", "#..#...######.#.", ".#.##.#####....#", "###.#.##.#.##.##", "..##..#.##.#....", ".#.#.###.#.##...", "#..#.###...###.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 241;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> kingdom = {"#...#...#.####.####.", "..#####.###.##.##.#.", "#.....#.##...##.###.", ".#.#..##..###..#.#.#", "##..........#..###..", "....##..####.#.##...", "#..##.###..#.#.###..", "..##.#####.####.#.##", "...#####...#.##.#..#", "#...###.#.#.########", "#.#.#.###..#.#.##..#", ".####.#..#...##...##", ".#.#.####.#...###...", "##.#...#.###.##...##", ".###.#..###..###..##", "##.##.##.#..#.......", "##..####.#.#.##.#..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 461;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> kingdom = {"####..#.##.###..##..#", "#.###.#.#..##.....#.#", "#.##.#..###.#.###..##", "#.#.#..#.##...#...#..", ".#...##.#.#...#...###", "#......##.##.#.#.####", ".#########.......#.#.", "..##.###...#.#...##..", ".#..#..##...#.#.#.##.", "###...###...##.#.#..#", ".####.#....##...#####", "#.#...##..##..#..####", ".###.##.##..#.#..#..#", "#..#..#.....##.#.#..#", ".###...##.##.#.#.#.#.", ".###....#.###.......#", "#.###.###..#..###.###", "...#.##.#..###.##.#.#", "..#.##.....#.#.#####.", "#.#...##.###......##.", "....##.##....#...#..#", "..####..##.#..####.##", "###.##.#.#..##..#####", "###.#...##....#.#.#..", "..#.#..###.#.###...##", "...#..#..##..#..#...#", ".#.#.#.#...##....##.#", "#.##.#..#.###.......#", "..#....##.#...#..##.#", ".###.#.###...##.#.###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 915;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> kingdom = {"##.###..#..##.####...#.#", "#.###...#.###....#....##", ".###..#.#...#.##..#####.", ".##.....#.#.##..........", "#######.###..##..#######", ".#...#.##.######.#.##.##", "####...##..#.#.#..#.....", ".###...###..####.#.#.#..", ".......#.##....#####.#.#", "###....####.#..#..#....#", "#...###..#..##..#..#....", "#.###.###.#.#..##.####..", "...##.#.#.##.####.###.#.", "####.#.#...#.#.#.....###", "#.###.###.#.#.........##", ".#####.#....#.##.###.#.#", "#######...#.#..##...##.#", "###.##.#...#..###..###..", ".##.##.##..##.#.#.#.#...", "....##.########.###..#.#", "#..#.#...####.#.##.##...", ".#####...#....#...#..#..", "...#...####..##....###..", ".#.#..##..###..#..###.#.", "..#.#....#....##.####..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 816;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> kingdom = {"###.##..###.#..##..#...#.#.#", "..#...............#.##..##..", "####.#..###.##.#.#...####.#.", "#.####.#...#.#.#.##...#.##.#", "..#.#..##.#..#....###....###", ".####..##...#.####.#..##.##.", ".#.#.###.####..##..#.###....", "#...#.###...#####.#..#...###", "##.#..##..#.....###.#..#####", "##.#.#.##.####.##..##.###..#", "#....##.##....##.#.##.....##", "#..###..##..##.###.#..#.##..", "..###..######...###.###....#", "##.##.#.##..#.###.#.########", "#....####..#.#...#..########", ".###..#.##.#...##.###.##.##.", ".###...##.##.###.##.#....#..", "..#.###.####....##..####.##.", "#.##..#.#..#.#....#..#######", ".#..#######.#....##.....####", ".###..##..#.##.##..#.####.##", ".#.##.#.####.####.####.#....", "#.###...#.###...#.##.#.#.#..", ".....###...######..#...#..##", "#.##.#.#.########........#..", ".#.#.###.#.##########.##..#.", "###.#..#.#....###...#..#.##.", "..#...#.##....#...#.#..#..#.", "#..##..#..#.#....#...#...##.", ".#.###.##.#.##..##.#..#..##.", "#.##.###...###.#.#.###..####", "#..#..##.#.#.#.#.######.#.##", ".....##..##..#.##..#.#..###.", ".###.##...#...##....###.##.#", "#.#....#....##.#.##.##....#.", "....#...#.#..###...#..###...", ".##..##.......##.##.##.###.#", ".#..####....####....#.....##", "..#######.#......#####...#.#", "###.#######.##..##.###.#.###", "##..##.##..#.#.#.#...######.", ".####.##...##...#.###.####.#", "######.##.#...####..#.#.....", "####...#....#....##..#...#.#", "#.##.#..#....###.#..##.##..#", ".#..##.###.#.#.##.#####.#.#.", "..#.....##...#.###..##...#..", "..#..##.#...##....###..####.", ".#.####..###...#.#.#.#######", "..##.###.###.##.....##.#...."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2051;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> kingdom = {"####...#####....#####.####", "#.....#.#..#.##..#..#..##.", "...###.##.####....####.##.", "....###..#.#.##...#..#.#.#", "##.#.....#...#...##..#.#.#", ".#.....#.###...#.##.#...#.", "#....####.#...##.#...#..#.", "...#####.##.####..#..###..", "#.#.#.##.#...###.##....#..", "#.#####.##.#####.#..#.##..", "#.##.##.#..#..#.#.#..#.#.#", "##.#...#..#..######..####.", "####...#.....####.###.#...", ".#####...#....#...#.##..#.", "#.#.##........###..#..#.#.", "...#...####.#.#.###..###.#", "#...#.##..###..#.##.....##", ".#..##..###.#.##.###..#...", "##.##...#....##.##.###..##", ".#..####..#.#..#..#.##.##.", "...#.##.###...######..#...", "##..###...#.#.#.##.##....#", "###.#...###...######.###..", ".#.##.#.....#..#####..#...", "..##..#..##.#......#..####", ".##..#.##..###..###.#.##.#", "#....##.#.#.#.######.#.#.#", "..#####.##.###.##...#..##.", "##......##.##..#..##.#.#..", "#.#...#.####.##...##..#..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1123;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> kingdom = {"...###..##.....#.######...#.....#", ".######.##...##.#.##.#....#.#####", ".#....##..#...#.#.##..##..###....", ".#..##.##...#...##..#.##.#..#..##", "##.##.#...##.##.###.##.##..##.##.", "#.##.#.######.##.####...#..##..#.", "....#..##.#.##.#.#####....####.##", "##.######.#.####.###.##...##.#.#.", "#.#.##....#...#.###..#####.......", ".#.#...##.##.#..##..###.#.#..##..", "###.#.#.#..#######.#..###.#....##", "..#.#.#.#######..######..#.#####.", ".##....#.......##.#.###.####.##..", "#..##..#..##.#..#...#.#..###.####", "..#..#..#.##.##....#.#.##.#......", "..#.##....#.##.######.######.#..#", "####.##.#.#..##.#...#.#.##.#....#", ".#.#.##..#.##.....##.#.#.#.#....#", "...#..##.##....#...#...###.....#.", ".....#........#.######...#####...", ".....#.######...#.............#.#", ".....####.....####..##.###.#.###.", ".####..##.##.#..#......#.......##", "....#.##.#......###.......#..##..", ".###...#.#.##...####..##.#..#.#..", "..###..#.#....#..#####..#..#..#.#", "#....###.#...###.####.##..###...#", "#.#.#..#.#.###.#...#..#####..#..#", "##..##.#..#.#.###.####.##....#..#", "#.....#.#.###.###....###...##.###", "#..####.##.#.#..##....#..##.#....", "#.##..#.#..#.####...##...#..#..#.", "..#..###....###.#####...##.#.#..#", "##.#.#.###..#...##.#.#..#.#####.#", "##....##..#.#.#..#...######.###..", "..#..##.#####..#.#.#..#.##.#.#...", "#...####..##.####..#.#...#.##..##", "#...#..#.#..#.#.###.##...#.##..##", "#.##..#.##...#.###.##..#####.#.##", "#.#....#.###......#.#.##..#####.#", ".#...#.....##..####.##..###...#..", "#...##.##..##.#.##..#####.###...#", "..#..##.####.#.#..##...###.#..#.#", "#..#.####..#.#..##.##########....", "#...#...#...#.##.#####...##.##..#", "....#.#.#...#.##..#.#..#.#.###.##", "#..#.##.#.##..#...#.#...##....#.#", "#..#####....#.#.#..#######.#..###", "###.##.##.####.#.##..#.###.#....#", "#...##..#.##.##.#.##..#...#.#.##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2421;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> kingdom = {"..##......##......#.#.##..###", "....#####..##....##.#.#.##.##", "...##...#.#.#.#######..###...", "#..#.#####..#.##..#.##.#...##", ".####....#...#..#..#####...##", "#.#..#.###..##.#.#.##.#..#..#", "......##.#####.#..##..#..#.#.", "#..####...#....##.##..######.", ".#.#.##.#...#.#...#.###.#...#", ".#..#.##.##.##.##.####..#.###", "##....####.##.######...#####.", "#..####..###...#.##..#.#.....", "##.##.#..#.###.##....##...##.", "#..##..####..##...######....#", "....###..#..#....##.##...##.#", "..###.#..#.#####..#...###..##", ".####..#..##..#.#...##.###..#", "##..#..#.#..##.####.##..####.", "#.##.#....#.##..###.#....###.", ".#.#....##...#..###....##..##", "##.#..#...#..###..##.#...#.##", "#.##.#...##...#..#.#.....###.", ".#...#####.#..#.#.##....#####", ".#....##.##.##....#..#.....##", ".....#.#####.######.#######..", "...#..#....#.#####......#....", ".#..##.########..###.#####.#.", "..#..##.##..##.##.#.#....#..#", ".#....#..#####..#.....#...###", ".#...###.#.###..##..###.#..#.", "..#.###.###.###..#..###.#####", "####.#.##...##.#..###.##..###", "##.....####.#.#..##.##..#.###", "##.###....####.##.#.#.##.####", "###.#..##.##..#.#.###...#..##", "##..##.#..#.##..##...#.###.##", "##.#.#...##.##.#.#..####.#..#", "......#.#####.......##.#.####"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1579;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> kingdom = {".....###.#...###.####.##", ".##....####....#.##.#.#.", "..#..#..##.####.###..#.#", "#.###.#.#....#..#####.##", "##.##.#....##.#.###.....", ".##.##..##.#..#.##.##.#.", ".#.#.###.##..######.##..", "##..#.#.#.#...#..##.##..", "#.###.##...#...##.###...", "###...##.##.###.#.##..##", ".#.#.#.#...######..###..", "#.#.#..##..##...##..#..#", "#.#.....#...###.##..#..#", "..#.##..##....#####.####", ".#..#...#...###.####..##", "#....#.#########.###....", "#.#.#########....###.#..", "###.#..##.####.##.#...##", ".#..###....#.##.##.###..", "##..##....##.#..#..#.##.", ".#.####.#...#..#.#.#...#", "...#..###.#..#.##...#.##", "#.#.#.##......#...######", "##.#####..##..##.#.#..##", "...#.#.#.###....###.....", "#.###..#...#.#.##.######", ".#.#########......##.##.", "#..#..#.#.#..###...#..##", "#.#..#.#.##..####.#..#.#", "###.#..##..##.#..#.#...#", ".#####..#.#.#..###.#...#", "..#..##..#..#.#.#.......", "..###..##.#...##.###....", "#...#....##.#####.######", "##.#.####.##.#...###.###", "#.#..#.##.####..###.##.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1242;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> kingdom = {"..#.##.###.....#.", ".#....#.###..#...", "##....##..#.#..#.", "#..#..#..##.###.#", "#..###.#...#.#...", "##...#.#.##.##.#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> kingdom = {"...##.#..##..##.###", "#.#..##.####.###...", ".#.######.......#..", ".....#......#.#....", "#####.#.....#..##..", ".#.#.#.#...##..###.", "####..##..##.####.#", "...###...##..#.#.#.", "#.##..##..###..#...", "....#..##....##...#", "...###...##.######.", "##.....###.##...#.#", ".....##.##.#.#.#.#.", ".#.##...#.#####...#", ".#.###.##.......#..", "#...#..##.#####.#..", "..##...#.##..#####.", ".##.###......##..#.", "..##.##..#....#..##", ".....#..#..##.#.#.#", ".##.....##.###.#..#", ".######.#......##..", ".#.#.#.#.#####..#..", "##.###.....####...#", ".###...###..#...#.#", ".####.....####..##.", "..#.#..#.##.#.#.##.", ".#....#.##..####.##", "###.#.#....#..##.#.", "##.#.......##..####", "..#..#.##.###.#...#", "##.#########.#..#..", "....###...#.#..##..", "......#..#.#..#.##.", "##.##...#.#...#.###", "#..#..####.##.....#", "#.##....##.......#.", "#.####.#...###.#.##", "#.#..###..#.#.#....", "#....##..##..#.#..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1094;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> kingdom = {"#...#..#.#.###.#.#.#..###.#", "..#...##.####..#..##...#.#.", "###..####.####.#####.##..##", "..#.#.#.#.##.#.....##.#.###", ".#######....####..##.....#.", ".#..##..#.#..##.#.#..##.#.#", ".##..#.#....#......#....##.", "#.##.#..###.#..#.####.#..#.", "...##.##....####....#.###..", ".#.##.#.#....###..#..#...#.", "###..#....###..###...#.####", "....###.####.##...#.#.#.##.", "...#.#.#.##.#.#.##.######.#", "#....####.##.##.#.#.##.##..", "..###..#..#..#.#...#.#...##", "##....#..###.###....##...##", "##.#.#.#.######..#####.#.#.", ".#....##.##..#.###.#.##.###", ".#.#...#.#..###....##..##.#", ".#.#..#####..####.#.####..#", "##.###.#.#..########.#....#", "#...###..####..##.###.#.##.", ".#...#.###.##.#..##.#..#...", "...#..###....#.#.#...#.....", "..########.##.##.#..#...###", "...#.#.##..#####.#######..#", "#####.#..####..#.#.#.#.#...", ".########......##.##..##.##", ".##.#.....#.##........#..##", "#...#.####.....###.###.#...", "####......#.#..###.###.....", ".##.#.###..#.#.#.#.##....#.", "#.#.##.....####...#.....##.", "###......##.####.#.##...##.", ".#.####.#..#..#.##...#..#.#", ".#.#####.#.##...####.###.#.", ".##..##.#...#..#..##.#...#.", ".##.#.##.###...##.#####.###", "####.###.##...##.#.....#.#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1579;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> kingdom = {".......###.", "..##.##.###", ".#.###.#..#", "#...#..###.", "##.##...#.#", "#.###...##.", "##....#...#", "...#.##..##", "#.##.#....#", "#.#...####.", ".####.##.#.", "..##.#....#", ".....###...", "#.#..#.##.#", ".#..#..####", "#..##...#..", "#.#.#.##.##", "....#..###.", ".#.#...#...", ".#..##...#.", ".#..##..##.", "#.##.......", ".....##..##", "###..##....", "#.##.#..###", "....#.#.#..", "......#####", "#####......", ".###..##.##", "...###.#.#.", "...######.#", "#.....#####", "...#..#.#..", "...#.##..##", "###.##.####", "##.#.##....", "....#.#.#..", "#...#..###.", "...#.##..#.", "#.#..#..###", "..##..#####", "#.#.###....", "####...#.##", "#..#######.", "#..##...#.#", "...#...##..", "##..#..#.#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 736;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> kingdom = {"..#..##...##.....##.#...###...##.", "#####.#.#..##....##..#..###.#.##.", ".#.........####.#..#.###.#..##..#", "#.##..#.#.###.....##..##..######.", "##.....##.#.#..#.####.#..#.#....#", "...######..####..#.###.#.##.#####", "#..#..##.#.#..#######.#####..##.#", "#..#....#.#..##.#####.#..#...###.", "....###..#..#.#.#..#######...#.##", ".....#....####..###..#.#.##.###..", "#.###..####....#.###...##.#.#..##", "..##.####....##.###.#.#.#.#......", "##..####.#...#.....##.#....#..##.", "##..#.#..#.#...###...####.#...###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 644;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> kingdom = {"#..#..#..##..#..#", "##.###.#..#....##", ".#..#..#.########", "#..#.##..#.#..#.#", "##...####.#..#..#", "###.##.#..#..####", ".#.....###..#..#.", ".#.###..##....#.#", ".#...###...###.#.", "#.#..#.###...#...", ".#...#..#.#....#.", "..#...##..##.#.##", ".#.#..#....######", "..#.#########...#", ".#..###.#.#.##.##", "#.#######..######", "##.#...##.#.....#", ".......##....##..", "..#.#.##.#......#", "####....###..###.", "###.###..#####.#.", "#...#...##..##...", "##.#.#....#.#.#..", ".##.#####....#.##", "##.....#..#######", ".#...###.....#..#", "##..#..##..#..#..", "##...#.#.#.#.###.", ".###.#.#.#..###..", "...###.#..#.#....", "#..#........#.###", "##....#.##.##...#", ".#.###....##...##", ".#..##.#..#.#....", "#..#.##.#.#....##", "..#..#.#.#...###.", "##...##.#..####..", "...####..##.###..", ".###..##..####.##", ".####...####.#..#", "..####..##.######"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1004;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> kingdom = {"####", "....", "...#", "..##", "###.", "....", "#..#", "....", ".#..", ".###", "#.#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> kingdom = {".##.#..###.##..###.#..##..##", "..##.#..#..###...#........##", ".#.#.###.#.#.#########.###.#", "##...#..#####..##..###..#.#.", "##..#####..#.##..#.#..##.###", "#.#..#.###.#..###.......####", "..#...##.......#.##.####....", "#....#..####.#.##.....#..#..", "..##.#.#..#....##...##.#.###", "#.###.###.#.#..##########...", "###.#..#.###.###.####....###", "..#######.#...#.###.#..#.#.#", "####...##....##..#....#.#..#", "#.##...#..#.#....#..#..##..#", ".######....##.#.##.#.#....##", "#..##...#.#..##.....##..#...", "#..###.#.....#####........#.", "...###.#.#....##..##...#..##", "..#..####.##.#....##..#...#.", "#.####.......#....###..#..#.", "...##...##..#.##..#.#....#..", ".#...##.#..##.#...#.#.....##", "#...##.##...##..##...#..#.##", "..#.####...####....####.####", "....##.#.###.#........####..", "...#####...#####.####.#..#..", ".#.#.###....####.###.##.#...", "###..##..#.#.#######..##.#.#", ".#..##.....##.#..###.#.#.##.", "##....###..#.#...#..##.###.#", "..####...#..##.##.#..###.##.", "###.###.##.....#.......#..#.", ".##..#..##.#.##.#.#..##...##", ".#.#....######.##.....#...##", "..####..##...##.#...####..##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1383;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> kingdom = {".###", ".##.", "#.##", "...#", "##.#", "#..#", ".#.#", ".#..", "....", ".#.#", "####", "####", ".##.", "###.", "#.#.", ".#.#", "#.##", "#.##", ".###", "##.#", "####", "...#", ".#.#", ".##.", "####", "#.#.", ".###", "#..#", "..##", "#.##", "..#.", ".#.#", ".###", "....", "#...", "#..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> kingdom = {".####..##....###.#..#...###.##.#.#.##..", "##..#.#..##...###..##...#..#.#.#..#....", "..#..#..##..#####..#.####.#..#...###.##", "##.#.#.###...##.#..##...#...#....##....", "...##...##.##.##...###.#.#####.....#..#", "...##..###.#..#.##...#..#.......#..#.#.", "###..#.#..###.######.#.####.##.#.##.##.", "...#...#.#..###...####..#.#######.###..", ".....#.###...#.#..#.#..#..##..#.....#.#", "#..#..##.##...#.##.###.##.##....#...#..", "...#.##.###...#.........#.......##.##..", ".#.....##..####.#..##.##.##.#.##..#####", ".###...#####.##...#...#.#....#.###.#..#", "#.#....#.###.##.....#.#.####....#...#..", "##......###.....#..##.#.##..##.#..##.#.", "#..#.###...####.#..###.##.#.##..#####.#", "..###.###.#.#.........####....####.##.#", ".##..#........#......##.#####.##.###...", "#..#.#.#...####..#...##.#..##.#.###.###", ".###....#....###..###.###.#..####.#.#.#", "##......##..##.##.#.#.##.######.#.###..", "##..##.##.#.##.##..##.##.#.#.#.#.....##", "##.##.#...###..###...#.#.#.##..###...#.", "#...##....###.###..###..#...####.#.#.##", ".#.####..##..#####...#..#.#.#...#..##.#", "...#...#..#.##.#.##..#.####.#.##.#.####", ".....#..#...####..##....#.#....#..##.##", "...#.###...##...#..##.##..##....###.#.#", "#.#.....#.##....#...#......#..########.", "....#.#.#...##..##....#.#.#..#.....#.#.", "..##....##.####.#.##..##.##..#....##.#.", "#####........#.####.####....#.##.#..##.", ".###..##.####.#.##.#....##..#.##.#..#..", "..#.####.####..#....#.#.#....####...#.#", "##..#...#.#.##..#####..#...##.#..##.###", "#.##.#..#.###...####.#.##..##...#.###.#", "#.##.......#...####.##.#.##.#.####.####", "...###.#...######..##.#..#.#.###.##.##.", ".#.#.#..#.#...#.....##..#...##.##...#.#", "#.#.#.##.#.#.#..#..#.###......##.#.....", "#...####.........####..##.###...#.#..#.", "#....#.......#....#.#..#..#####..#....#", "##..####..#.#........#.##.......#.#....", "......#..#..###.##..#...#.#.##......##.", "#....#.###.....#.#.#####.#..#..#...##..", "#....##..#.#.##...##..#.#...#.##....#..", ".####....###.####.....###.##..#....##..", ".#.#.#.##....##...#..#.#.#...#...#.#.##", "#####.##.#..#....####..##..#....#.#.#.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2771;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> kingdom = {"#..####...#..##.#.###.#.#........#......#..#.#..#.", "#####...##.#..####.#.#.###.####.#.###..#####..##.#", "#..#.###.#.#..##.##..##..#.#.#.#.......##..#...#.#", "##.#####..##..##.#.#.#.###...##.#..##.#.#..##.##..", "#.###.#.#..#.#####..##...##.#.#....#..##...#......", ".##.#..#..#..####.#####..#.##...#..#.#.#.#.####..#", "####..###..#......#.#..###..#....###.##.###..###.#", "#.#.##..#.##...#...##..##..#.###..##..#.#....#..##", "..#.##..##.##..#.#.#...#.#.#...##.#.##.#.#.###....", ".##..#..#.#.#..#......#.....##..#..#.##.#.....##.#", "#...#..#..####.##.####..#..##.#.###.######..#..#.#", "####..#..###.#.##.####..#.#####..##..##..##.#.#..#", ".....#...##...##..#..#...#..####...#.###..###...#.", "##....#..#.....#.##....###..#.##..###..##...#.#.#.", "##....##.#...#.#.##.#.....######...###...#.#.#....", "..###.#...#..###.#.#..#..####...#.#..#.....#.##...", "#...#...###..###.#........#..#.###.#.#.#.#...#.#.#", "#.#.#.##.##.##.#..#..###.#.#.#...######..###.##.#.", "###.#.##.####.#.##...###.#..#.#..##.#.....#.##...#", "....###....#.##...#....#.###...##.#.#.#.#########.", "####...##.##..#.##...#..#.##..##.##..###..#.#..#.#", "####.#..####..#####.#...#.##.#....#..##.####..#.##", ".#.#..#.#.###.#....##.#..##..###.##.#.##.####..#.#", "....#####..#.####.#..#.##.###....##.#.#..##..###.#", "#..#...#.#.####....#...###.##..#.....#.#####.#...."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1829;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> kingdom = {".##....#...##..##.##.##.####..", "#..###.#...#.....#.#.#####.#..", "..###..##.##.#..#.#.#.#.######", "#####....####.#.########..###.", "..#########.......#.###..#####", "..#######.##...####..####.#.#.", ".#....#...####.##..#..##..####", "#.#.#.#.##.#####....#..#.###..", "..#.#..#.##..#.#...#.##......#", "..#.##..#.###.#.##.#.###..####", "..#.####.#......###..####.#.#.", "##.#.#.#...#..#.####..###...##", "#.##..#####.#.####.....###.###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 529;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> kingdom = {"#.###..###...#..#.#..#....#..###..#", "..#.#..#.###.###.....###.##..##.##.", "#.#...#..#.#.#.#.##..#####.###....#", ".#..#..##..#.#.#.#.##....##.###..##", "#.#..#.#..##.######.#......#..#####", "..#.####..###.##..#.###.#.###..####", ".#..#.#.##.#...########.####...##..", "###.#.#.#.##.##..####....#....###.#", "....##.#.###.##.##.#..###.###.....#", ".###...#..#....##.##....#..##....#.", "..#.##.#..##.#...#..###.....#...##.", ".##..##..#.#.####..###....##......#", "..###.##.##.##...#.#.....####.#.#..", ".#...##.##....#....#.##.#..###.###.", "..#..###..##..#.#.#..##.#..##..#..#", ".#.#..#.#....#.##.#.#...#...#.##..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 804;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> kingdom = {"#.##.#.####.#", "####..#...#..", "##....##.####", "#.#...##.###.", "..###..##....", "#.###...#####", "..#.....#.#.#", "###.##..#.##.", "##.....##.#..", "..#.###..#...", ".#...#...###.", "##...#.####.#", "#.........###", "#..#.#..#.###", "######.##.#.#", "...#.#..##.#.", "...#.###.##.#", "...#.#..#....", "########.####", "..#..##.##..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 363;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> kingdom = {"...##.##...##.###.#.#.##.##", "#.#......##...###...#####..", "#.#.##..###..#.#....#.##..#", "....####..###..#..#..#.##.#", "#.###....#####.###..#..#..#", ".#..####.#.##..##.##...#...", "#..###.#.########...#....#.", "###...###..#..#...###.#####", "#.##..#..###...##.#.##....#", "##.##..##.##..#.##.#.####..", "######.##.......#.##.##.##.", "..###.##....###.#.###.#.##.", "#.#..#######.#.#...#.......", "##.###...##..#........###.#", "..#..##.##..#..###.#.#.#..#", ".....#..#..#.###.#..#....##", "#.....###.##...##.#...###..", ".#.#..#.#.####...#.####.#..", ".#...##########.....#.#####", "##..##..#...#.#....##.#.#..", ".#..##...##.#..#...##.#..#.", "..##.###.###..#.#.#.##.#..#", ".#......###...##.##...#.###", ".#####.##.#...#..#.###....#", "##.#...#..#####..#....#.###", "..#.##.#..####.##.##.##.##.", "###.#.##.##...###..##...##.", "#.#..#.#####.##.##.##...##.", "..#..##.#.###.#..####.#.##.", "..##.#.###.#...#...##...#.#", ".#.#.#####...###....#.##.##", "###.#..#...##.##...#.#...##", "#####.#..........##....#.#.", "#..#......#.#..#.#.####.#..", ".#...#..#...##....###.#.#.#", "##......##.###..#.#.##.#..#", "##.####...#####.#####..##..", "###.######...#.#.#.##....##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1492;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> kingdom = {".###.###", "..#....#", "....###.", "..#.###.", "##...###", "#..###..", "##.#..#.", ".#...###", "....##..", ".#.#.#..", "##......", "#.#..#.#", ".##..#.#", "..##..#.", "#.#..#..", "#.##.#.#", ".#..###.", ".##.#.#.", "#.#..###", ".#.####.", "####.##.", ".##.##.#", ".#.###..", "....##.#", "....#.##", "#...###.", "#....#..", ".####.##", "#..###..", ".#..#...", "....#.#.", "...#...#", "..#.#..#", "#.#.###.", "#######.", ".#...###", ".#.##.##", ".####.##", "#.#....#", "#.#####."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> kingdom = {"#.##.#.##..#..##..#..#.##...", "##.#..###.....#..#....#..###", ".#..##.#..#..###...#.###.###", "##..##.######.#...#.#.#.#...", "..#.#..###.##.#.###.#...#..#", "####..##.###..#..#..###.##.#", "##.#..#.#####.#..#.#....#.##", "####.##..##...#.....#.#.#...", "#.#.###.###.#.#####.####.##.", ".###.###....#.###....#.##.##", "##...####.##.#..#..#.##...##", ".#.#..#.###..#.#####.#...#.#", "###..#.#.##.#...###...###.#.", "##.###...#####.#...#.####..#", "##.#####...##....#...#..##..", ".#.#.####...##.####....##...", ".#.....#.#.#.#..#.##.#....##", "######.######.##..#.#..#.#.#", ".....#..#####.##.####....###", "####.....####...###..###.#..", "#.###..#.####.#...#.....####", "#.#.#.##.#.#########...#....", "#....##.###.###..###.##.#.##", "##.#..####.....###.....#####", ".#.#...##...####.#..#..##.#.", "##.#.####.#.#...#..###..##.#", ".#..#.#......#..#.######...#", "#...#.#.#.##########.#.####.", "####...#.#..####....#.#.#..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1167;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> kingdom = {"...#..####.##...#....#..#.###..###.##.##..##.#..", "#..#.#..###..##.##..##.#.##...##..#.###......#.#", "...##...#..#.#.#########.#.#########.##..#####.#", ".#....##..#.##.###...###..###.##.#.##...###.#.#.", "#..###..##..#.#..#..#####.#..#######.#.##...##..", ".#...#.##..##.###..#.######.##.###.##.#..#..####", ".##.###..#.##..#.##.#.#...#..####..#.##.......#.", "##.###..#.##.#..##.#......#..#########..###..#.#", ".##.#######.#..#.#..##.#.##.#.##..##...#.#.#.##.", "#....#....#.#..####.....#.##.#.##.#.###.#..#####", "###.####...####..##.###.#.#..##...##.##...##..##", "##.#.#.#.#......#...#.....##.#.#..#####.###.....", "##..###.##..#..#..##.#.####.##..##.##.######...#", ".#.#..####.##..###..#.#..#..#...#..#..#.##.#.#..", ".#.#.#.#.####.#.####.##..##.###...##..###.######", ".#.####..#.####...#..#..#...##......#.##...###..", "#..##.##..##..#.##..#.###.#..####.##.......##...", "#.#..##.#.##..#####.#...####...##....#.###..##..", "####..#..##.#.##.#.#..#.###....#.#..####...#.##.", "#..###.....#..#####..##...###.##.##.#.#.#.#.###.", "..###..#.#.#.##.#####..#.##..#....#.#..#.####.#.", "#.........#.........#####.#..##.#.#..#....###.#.", ".#...#...#..#..#.#.##....###.####.##..##...#.##.", ".##..#..#..#.#.#..#.#..######..#####.#.###.####.", "###..####.....###....##.#.######...#..#..#.#.##.", "#..####..##.#..#.#...###..#..#.#....#.....##.#.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1820;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> kingdom = {"#.#.#.#####...#.#...##.#.", "##...###.###.#...#...#.##", "##...#.###....##..#...#..", "#......#...#.##.#..###.#.", ".#.##.##.....#.#....##.#.", "#..#.#......##.###..####.", ".###.##..#.#..#.#....#.##", "#..#.#####.#.....#.##....", "###.####...#..#.#.#.#....", "#.#..###.##.#.##.#......#", "##.#####..##.##...#...#.#", "#...###.##..#....##.#.###", ".#..##..####.#..###.#..##", "#....#..#####.#...###..##", "#..######.#..#.##.##.###.", "##.####.##...###...##.##.", "..####.#..#.#.##.#.###..#", "##...##.#.#.#.#..#######.", "#......#.#.....#....#####", ".##.#.####.#..#..#.##.##.", ".###...#.###.##..#####...", ".....##.###..#.####...###", ".#..####.##.##.#..#..#...", "#.....#.##.......#.......", "##..#..#.#.#..#...####.#.", "..##....##.#.###.####...#", "####..#......###....#####", "###..###...##.##.#.##.#..", ".#...####..##.##.#.##.#..", "...####....#.......##....", "..###.#####..#.##..#.....", "....##...#.#.#.####..####", "##.##.###...#..##...###.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1126;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> kingdom = {".#..###.#.#..#.##.#.####.######.", "#.#....###..######.#.#..##.#..#.", ".#.####.#..#....#.#..#...##.#..#", "#...#.##.#.###.#####.#..#....##.", "##...#.#.#...#.#...#.##.#..####.", "###.####.##.#.##..##.....#.#.###", "#.....##.###..#.#..###....###..#", "#.#.####.######.#...#####..##.##", "#.##...####.#..#...#...####..##.", "###.####......#...#..##..#####..", ".#.#.######.#.#..#.....##..####."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> kingdom = {"##...######", "##..###.#.#", "..#..###..#", "##.##.##...", "..#.#..#...", "#...##..##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> kingdom = {".#..##.....##.#....#.#...###..", "....##......##.##......####.#.", "###.#####.##....#..##.....#.##", "....####.##.##..#.##..#.######", "...#...#...#.##.##.####.#...##", "####.##...####.###.....#.#.##.", "###..#.##..#..#.#.#.#.#.#..###", "#####..##..######.#.##.##...#.", "##.#..###....##...######...#.#", ".##..##.#...##.##...#.###.##.#", "..#..######..#..#.######...#.#", "#.#..#..####.##.##..#.###.#...", ".##...##.#..##.#....#.##.#..##", ".#.#.#...#.....#..#..##.#.#.#.", "#.###....#.#.#.#.####..###....", "....#...#...###...#.#....#....", "....#.......##...###.#.##.####", "..###.#.#.###.....#..#..###.##", "###..##...##.#....##.##...###.", ".#####...###..####..##.#..#..#", "....##.#.#....###..###.####.#.", "##..##....#####........#......", "........###..##.####...#..#...", "..###..####.....#.##..#..#..##", ".###.#.#..#.#####.###.#..##..#", "###.#...###.##.##..###...##.#.", "####.......#.#####....##.###.#", ".#..#.....#.#..###..#...##.#..", "##.#..#.#.##..#..###...#####..", "######.###..#.##.#..###.#...#.", "#.#.###.#.###...#.##.#..###...", ".#...#.##...#.....#.##....##.#", "###.##.######..#.....#.###.#.#", "##...##.##.#..#..#.....#.##...", "#####....#######.#......#....#", "###..####.#.####...##....##.##", "..##.###..##.....##...#.##...#", "#..#....#....#....#####...#..#", "#.##..#.###.####.#.######...#.", "..#.#.##...#...#.###..####..##", ".###..#.##..##..##.....#.#.##.", ".####.#.#.###.......#.........", ".######...##...###.###.#.#...#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1812;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> kingdom = {"...##.#.###.#.###..##.#..#.#.###.###......#.##...", "#.#.#.##.#.#...##....#.....#.####.#..##..###..#..", "#..#.##..#...#.#.###...##.#.##.#.#.#.#...........", "..........##..##..##.#.#...#.....###.#..#.##....#", "#..####..#.###.##.#...##.##.##....#.#..#..##.##..", "##.#.##....###.#.#..#.#.##...#######..##.#..#.#.#", "#####..#......####.####.####...#####.##..#.#..#.#", ".....################...#####...#..##.##...#..#.#", "##.#......#.#...###.##.#.##.......###.##.#.##.#.#", "#.##.#...##.#...#.#..##.##....#....#.......#..###", "##..#.##..#.###.##.#.##..#..#..#.#.##..#####.#.#.", "...##.....###.####.#..#.#####.###..##.#..#...##.#", ".##.#.##....#...#..#...#..###..#..#..#..###.#..#.", "#####.###.#######..#.####.#..#..#....##...####..#", ".#...#.....##....##.#...##...#..#....#####....##.", ".#.##.#.##..#...#..#..##.##..##.#.#....#####.#.#.", ".#.#........#...#..#....###..####..##..##.##.#.#.", "##.####..#..######.#.###.####.##.####..##########", "#..######....#....##.#.##..#.######..#.####..#..#", "#.....####..#.#....#.#.#...###.#.##...##.##.###..", "##....######.#.#########...##..#.#.#.####.....#.#", ".##..#.#.#.##.#.#..###....###.#...#.####..###..#.", "##..#####.###......##......#.##..##...######...##", ".##.###.###....#.##.###...##..#.#.#.....###.####.", "#.##.........######..##....#.##.#.#.##.###..#.#.#", ".#.###..###.##.#...#..#..##..#.##.#..#.#.###.....", "...#.###.##.##...#.##.#..#...#..#.#...##...####.#", "..####..#..##.#...#..###..##.#..##.###.##.##.#.##", "...#..#.#.#.#.####...#####.#..#.#...#.##.##.#..##", "#.#.#.#..##.#.##.##.#.#.###.####.#.####.#...##..#", "#..#...#.##..##..#..####..#..######...##..#.##..#", "#...#.#.#.....####.....###..###..#.#..#.#####.#.#", "##...##...##..#.##.#.#.###.....#.#..#..##..##...#", "##.##..#.##.#.##..#...###.######..#.#....#....###", "..###.#.####.#..##.####..##.#..#.#....###.##..#.#", ".###.##.#.##..#....#..#.#..#.#....#.##.###.##.##.", ".##.##.#..###.#.###.####..#..###..#####.#..#.##..", "#.....#.##.#.##.####.#.##..##...#......#.##.#..##", "#..##.###..#.#.#.##.....##.#####.##.#.####..###..", "#.#.#.#....#####...#....#..##.##..#.#..##.#.....#", "..##...##.###.#....###.####.##.#..#..#...###..###", "...##.##.###.###.###.......#.####..###.##..###..#", "#....#.#..#.#.##.####.#.#.......##.......####..#.", "#...#.#.#...#..#..#.##....###..##.#.#####.###...."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 3199;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> kingdom = {"..#...###.###...#...#..##.#...#..#", "####..#.....##.#.....#.##...######", "###......##.#####.###.###..###..#.", "#...#.######...#...##..##..##....#", "#.#.###.###..####..#.###.#.#..####", "#..#.######.....###.####.#.##...##", "##..#.#.##..##...#..#.######....#.", ".##.....#..#.##.##.#.....#####..#.", "####.#.##.##.###..##..#######..#..", "...#.##....#..###.#.#.#.##.#.....#", "#.....#####...#..#..#.#.#...######", "##.######.########.....##.##.##..#", "#.##.##..##...#.##.#..##..####.###", ".###..##..#.#.....####..#.####..##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 671;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> kingdom = {"#..#", ".#..", ".##.", "...#", "..#.", "###.", ".#..", "....", "####", "..#.", "#.##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> kingdom = {".######.#.####.###.#..##..#..#..#", ".##.#.##..####...##...###.##..#..", "#....#...###...##.##.#..#..#.....", "#.#.#...####..##.#..#.#...#.#...#", ".....#.#..#.#....##.#.###.#.#....", "#####.##.###.##.#.##.#.#...####.#", "..###.###.#.###.#..##.....##.#...", "#..###..##..##.#..#.#....#...#..#", "######.#..#...#.#.##..###..#..###", "......#.#......##.#....#.###..#..", "#....#......#.#.#.##..##..###.#.#", "...#####..#####.#...###...###..##", "....##.#.##.#...##.##.#...#.#...#", "..###......##.#..###..###...#.##.", ".##.##.##.###.##......#.#.##..#..", "....###..##...#.#.#....#....#####", "..#.....#.##.....#########....##.", ".###..##..##.#.#..#.###.###.#..#.", ".####..#......#..#.#.#.#.#..##.##", "..#.#..#####...#..##.####.##..###", "..##.#..###.#....##.##...##.#.###", ".###..#...#..#...#..#...#.#.#..##", ".##...###..#.##....##..#.....#.##", "#.##....###.#.####..####.##.#....", "#....###.#..#.#.#..#####.#...#..#", "#..#..########.##..#.#.#..#.#.#..", "##.....#.#.########.#..####.###..", ".#.#.#.##...#.#.#.##........#.#.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1327;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> kingdom = {"##..#.#.#..#....#.###.#.#.#..", "##.....#.#.#..######..#....#.", ".##...#.#.##..##...###.##..#.", "..##..####...#.....###.##..##", ".#...#...#.##..#..###.#..##..", "#...#.#..###....####.....##.#", "..##.##.#.#.##.###..#...##..#", "#..######.#####.##########.#.", ".....#.#.##......#.#.......##", ".####...###..#..#.##.##....#.", "........###...###...###.#...#", ".#...#.#...#.####.....###.#..", "#.#.#..###...#..#.#.#...#..##", "#.......#.##...####..#.#..##.", "####..#.#.#..#......###.##...", "##..##.#..#.##....#..#...#..#", "...#.#.#.#####..##....#######", "#.#.#####....####.###.#.##.##", ".#.####.###..####.#....#.###.", "#..##.####.#.##...###.#.##..#", "##..#......#.##..########.###", "##.##.##.##....##...#.#####.#", ".##.#....#####...#.....##.#..", ".#.#....#..#.#..###...##.###.", ".#.#######.#.....##..###..##.", "#..##.#...#..#..##..##.##.###", ".#.#..#.###..#...###.##..#..#", "...#..####.#.#.#.##.#####..#.", ".......######...#####.#.#....", "#####...#...#...#.#.#..##....", "###.#......###.#.##.###.##.##", ".#...##......#..##...##.###..", ".#..#..##..#..#####..#.####.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1331;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> kingdom = {".", "#", "#", "#", ".", "#", "#", "#", ".", "#", ".", ".", "#", "#", "#", "#", "#", ".", "#", ".", "#", ".", "#", "#", "#", ".", ".", "#", ".", "#", "#", ".", ".", ".", ".", ".", "#", ".", ".", "#", ".", ".", ".", ".", "#", ".", "#", ".", ".", "#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> kingdom = {".....##.###..####.#..#......######.#..#", "###...#.##.#..##..####.#.#.......#.#..#", "..####.##.#.##...#..#.######..#..##.##.", ".#.##....####..#..###.#.#.#..#.##..#.##", "......#..#....#####...###...#.#..#..#..", "#.#.#.###.##.###....##......##.####....", "###.##.#######..#....#.#..###.###..#.#.", "##.##....#.#.##..#....#.##....#..##.##.", ".#..##.....#..#####....####....#.#....#", "..####.##.......#.###...#.#..###.....#.", "#.####.##..###.#..#.#####.##.####...###", ".....#....###.#.##.##....#.##.#######.#", ".##.###...#.#.##.......#.######.##.####", "..#..###.#.#....##.##..#.#.###.##.#####", ".#..##..##.###.#.#..##..##.###..#.##...", "####..#.#...##.....#..#.###..#...###.#.", "##.######...##....###.#.##.##.....##.##", "....#..#....###..#...#..#.##....####.#.", "##.#.####.....####.###...#..##...##.#.#", "..#######..#.....#..#...#..#...#..#..##", "##.#.#.#..##..###.##...##...#.#..###...", ".#.##....#.######....#.#.#...####..#..#", "###....##.##.#.#.#.#######........#..##", "###.####.#####.#######.....###.#.#.#...", "...#######.###.....#...#.##..#.###.#..#", ".##.....#.#.##...#.#.##..#.#..#.#..#...", ".##..##..#.#..#..#...#..#....##..#...##", "#.##.#.#..............#####.#.#....##..", "#.##.#.##..#....#..##.###.##.##.#...#..", "###....#...####..##.##..#.#.##..#....#.", "#..##.#...#.#..#....#..#.##.###...###..", "...###.#.###.#.......##.###.##.#...#.##", "####...###..#.#.#.#.#####..##.##.##.##.", "...####..#..#...##......#.#..#.#....#.#", "..###..##..####.#..#.#.####.......#.###", "##.##...#...#.#.#.##.#..#.##...##.###..", "##.....#.#.#..#..####...##.#..##.#..#.#", "#....###.#..###.##.#..##.##..#....##.##", ".##.##.###..#######...######...##...#..", "#...#...#.####.#.#..##..####.#.##..#..#", "#.#.##.##.##.#..##...##.#.##.##.....##.", "#..#.#......#.#..#.###.##..#..###.#.##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2397;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> kingdom = {"##..#.###.#.###.......#..##", "#.#....#.##.###...#.#..###.", "...#.#..#..#####...###..##.", "#.#...#...#...#.##.#.#.##..", ".#..#.###.#####.#.##..###..", "#.###..####.####.##...###.#", ".#...##.....##..##...#.#.#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> kingdom = {".###...#.#.###.#...##.#.#..###.####..##.#...", ".##...###.##..#..#..#......#..#....###.....#", "###.#..#..#..#.##....##.##..###..#.#.#..#.##", "##.#...#..###..#.#.##.##.#.##..#...##..##..#", "#.#....#.###...#..#.#.#..#.######...##..#.#.", "..###.###.######.#.###.##.####.#..#...###.#.", ".##..#.##.#..#.#.#.#..####...##..#.###..#...", "..#.#.#...#...####..###.##..#.#...###...#..#", "#.##..#.#.#.#.####........#.######...#.#..##", "#####...#....####.##.####.##.#....##...#....", "##########.######...###..#..#.#.#..#....###.", ".#..##.#.....#...#.#..#..###.###..#.#.#.###.", "#####....##.##....#.#.#.....####.##..###....", ".#..#.#.#.#....#####.####.##..####.##.#....#", "....#####..#.##..#.####.#...###...##.#.#..##", ".###.#...#..#..#.###...#.#....###..#.#####.#", ".#.#..##...##..##.#.#.#..#.#.....#.#.####.##", "##........##.#.####..#.....##.....#.##...###", "#.#....#.###..#.#..#.#...#.####.#...####.#..", "####....#...#..##...#######.#.##.##...###...", "##.##.##..#...###...##...#..#..#..#.####....", "#...##.######..####.##...#..####..#####..#..", ".##..#..###.#....##....#.#.........##......#", "..##..#.##......#.###.#.#....#.######..#####", "#..###...#.####.#.#.###.....#..#.###..####..", "#..###.###..##..###.....#..#.#.#.#..##.##..#", ".###..####.#.#####..#..#...#....#....###..##", ".###.#...#.#.##..#...###.#.##..#....#.#..###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1782;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> kingdom = {"..#", "..#", "#..", "#.#", "###", "#..", "...", "#..", "###", "#.#", ".#.", "###", "...", "###", "...", "#.#", "...", ".#.", "#.#", "###", "...", "##.", "..#", "..#", ".#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> kingdom = {"..###.#..#.#.", ".#.#......###", "....####....#", "....#####...#", "####...#.####", ".#..#...####.", ".......####..", "..#.#.#.#####", ".###...###...", "##.#######...", "#..#.##...#.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 174;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> kingdom = {"#..#######.##..#..#.##...###..#.#", "#..#.###..#.#####.#.##...#....#..", "..#.#.........##.#.#...#.#.##..##", "###.#.#....##...##...####.####.##", "#.#......###........###..###.####", "#....####.###.#########.#.#......", ".#.#####.##.####..##.####.####..#", "..####...#.#.#.####..##....###.#.", ".#.##.#.###.#.####.....##.#.####.", "##..##.###..#.###...#.#.....#...#", "###..##.######.#.####.##.....##.#", ".######.##....##.##...#.##.###...", "#..##.####.#.##.....##.###.###.##", "#.###..##..##.#.#.#.#.#..#......#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 630;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> kingdom = {"###..####..#.#..###.###...#..###..#..#.", "#.#.#.####.....###....#...#.######....#", "#...#..#.#.#...#...####.#.###..#...#...", "##.....##..####.###.##...#.##.####.#.##", "....###..#..#.##.######...#.....####.#.", ".####...#.#.#...#######..#...#####.####", "#.#......###...###.#.####..###..###....", "#.#.#.##...#....#..##.##..###.#.####.##", "......#.###..##..#########.#.##.#..#.#.", "...#.##.###......##.#...#.###.######..#", "..........###.####.######.....##..####.", "..##....##.#.#..#.####.#.#.##...###.###", "#.##..###.#..##.#.......##......#.#....", ".#...#...##......#.#..#......##.#.#..#.", "#....####.###..#.##.#.#.............#.#", ".#.#..##..#.##.#.####.##.#####.###.##.#", "#..#####....###.#.#.###.....##...###...", "..#.#..#####..##...#.#.#...######..#...", "#..###.##..###..#.#.###......##.#..##..", "#.#..#.#....#.......####..#.#.#.##.....", "..#..##.##.#.####.####..#..#..##.#.##.#", "..###....##..#..#.#.#..#.##...###.#...#", "..#.###..##.##...##..###..##.#.####.###", "#...####.##.###...###..#...##..#.#.#.#.", "####...##....##.#.#.###.#.....###.###..", "#.#.##...##..#.######.##......#.###...#", "##......##.#.#.###.##.##..####..##..#..", "......#.#.##.#.####.....##.#...#.#...#.", "#..###.######.##....##..#.###...#.....#", "#######....##..#...####.#.#.##..##.##..", "....###.#..##..#....#..##.#.##.##...##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1723;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> kingdom = {".##....#..", "#.####.###", "....##.#.#", "##.#.###..", "....##.#..", "..##..#...", "#.#.#.##..", ".####.#.##", "..#..##..#", "##.#.#.###", "..#######.", "#####..#.#", "####......", "...##..##.", ".#...#.#.#", "#.#..###.#", "##.#....##", "###...#..#", ".#..#.#.#.", "#.#..#.#..", "####.##.#.", "..##.###.#", ".#####.##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> kingdom = {"..##....##...##.##..##.#...#", ".#..##......##.######.......", "##..##..#..#.##.#.#.###.####", "#..#.####.##..##.##.#....##.", "#.#.##..#..###..##.##..##.#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> kingdom = {"#.#..###.#..##..####.", "#..#.#...#...#..##.##", "##.#......#....##.##.", "#..#.##...#.##.##..#.", "#..####...##.#..###.#", "##.#..##.####.##.#..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> kingdom = {".###.....", "#..#...#.", ".##..#..#", "#.....##.", "#.#...###", ".......#.", "###.#....", "##..##.#.", "#.####..#", "#..##.#.#", "##.#..##.", "#....#.##", "#.#..##..", "#####.#.#", "####...#.", "..#.#..#.", "##..#####", "##.#..###", "#...#.#..", "#..##.##.", ".###.##..", "##.#.##..", "..#..##..", "###..#.#.", "##.#####.", ".##..#...", ".#.#.##.#", "........#", ".###....#", ".##.#.###", "..##.#.##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> kingdom = {"#.", ".#", ".#", ".#", ".#", ".#", "##", "##", "#.", "##", "..", "..", ".#", "..", "#.", "##", "##", "##", "..", "#.", "..", "..", "#.", "..", "##", "..", "##", "..", "#.", "##", ".#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> kingdom = {"##.###..##.##..#.#..#..####.##..##....#", "..##.###.#.#.###.....##..#...###.##...#", "#.###..#####..#.##...###....###...##.#.", "#..#.####.#...###.....#..#....###..###.", "..#..##...#.#..#....#.#.#.##.#.####.##.", "##.#....######.#####..#..##.#.##..##..#", ".#...#..#....#.#.####...##.#....#.###.#", ".#####....###..#...#...###.#...#..###..", "##.#...#.#.......#.##.#.####.####..#.##", "##.#.##.........#........#..#....#.#.##", "..###.####.##...##.#.#..##....#..#.###.", ".#...##....#...#.####..##..#..#.#...###", "###.#.##....####.###.#.##...###..#.#.#.", ".#...#..#.##..#.##.#.#..#.####.######.#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 767;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> kingdom = {".##....##.#.#....##...#...#", "#.###.#.#.#.#...#..###..###", ".##..#..###..#.#..##..###..", "#.###.#....##...##.#...#..#", "##..#.#.####.....##..####..", "#.#...#.####.#..#...#.....#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 231;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> kingdom = {"#..#....#######.######.......#", "...##....#...#.#...##....##...", "###.#.##...####.#........#...#", "..#..##..###..#.#.##.#..##.#..", "..#####.####...##.###..#.....#", ".##.#.#..#.#####.#..#..#...###", "##...#....#..###....#.##.#.###", "#...##.#..##........#..#...#..", ".##..##..#.#..#.....#.###.##..", ".##.#.....#.........##.#..##.#", "...#....##.#.##.##..##...#.#.#", ".#####.....###......##.####.#.", "#.##.######.#######.#..######."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 508;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> kingdom = {"###", "##.", "##.", "##.", "#..", "...", "..#", "...", "..#", "..#", "...", "#.#", "#..", "..#", ".#.", "###", "###", "##.", "#..", "...", ".##", "..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> kingdom = {".#........##......#.###..#...######", "##.##.#.#..#.##.#......##.##....###", "#.###....##..#....#####.##.#.##...#", "#.#.#.###.....##.#...#..##.#.##.###", ".##.##..##...#......##.....##...###", "..#...######..###.###..##.#..##.###", ".#..#.##.##..###.#...#..###..##..##", "#.#..##..###.###.#.#....#####...##.", ".##..#####.#..#.#...#.#.....#......", ".###...##..###.#.#...##.#.#...##..#", "#...#.#.#....#####.#...##.###.#..##", "......#.#.......##......##.....#.#.", "#...#...#.##..##.##..#.#..##.###..#", "...#..#..####...#.....####.....###.", "##..#....##.#.##.#.#...#.#...##.###"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 743;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> kingdom = {"#.#.##.", ".#.....", "#...##.", ".#.##.#", ".####.#", "###...#", "##.#.#.", "####..#", "#.####.", "####...", "#.#####", "#...###", ".##..#.", "#..#.#.", "##.#..#", ".######", ".##.###", "#..###.", "##.#.#.", "###....", "....#..", "..##.#.", "###.#..", "##..#.#", "..#.##.", "#..#..#", "##.###."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 247;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> kingdom = {".##.#..#", "..#..##.", "..##..#.", ".#.###..", "#....#.#", "..##..##", "##.#....", "###...##", ".##.##..", "##.##..#", ".###..#.", "..##.#..", "###...#.", ".#####..", "#.####.#", "..#..#.#", "#.##.#..", "#..##..#", "..#.####", "...##...", "..#.#..#", "##...###", "...##.##", "..###..#", "#..#.#.#", "##.##...", "#.#.##..", "#..#....", "..#..##.", "#.#.#..#", "#.#...#.", "##..####", "#.#.#..#", "##.....#", "..#..###", ".#.#..#.", ".##.##.#", "##..#.#.", ".##.###.", "..#..###", "##...###", "##.....#", "##.##..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> kingdom = {".##...#.##.#...#.#.###..##.#.....#.######..#", "..#.#.###.#####..##..##.#.#.#.#..#...#...###", "#..#.#####......#####..#..#...#...###.##..##", "#..#.##...#...#...#.#.#.######.#.####.##..##", "#..##.#..#..#####....####.###....##.#.#..##.", ".##.#.###..####....#....###.#.#####......#.#", "..#...##.#..##.....###.##..#.#..#.#....#..#.", ".####.#.....#.###..#...##.###.#.........####", "#######.......##.......##..#.##.#.####.##..#", "..##...##.#.###.#.#....##.#.###...#..#...###", ".##.##.#.#...#.##.#######..#.#.#.#.#####....", "####....#....##.##.#...##.##...##..#.#..#.##", "#.##...#..#.#....#..##.#####.#..#.###..##.##", ".......#.###...###..#.##..##.###.#.###..#.#.", "###.####.##.....#.#....###..#...#..##.###..#", ".##.###..#...#.#...####..#.###..#..#..##.#.#", ".#..###....#....#..#.##.#.#.##.#...##.###.##", ".##.....##.#..##.#..#.#.#...##.##.###.##...#", ".##.#.....#..#..####.###..####...##...#..#.#", "###.#..#..#..#.###..#.#..##.##.###.#.#...#..", ".....##.....#...####..#..##.#.#####..##..#..", ".#.##..##...#..#.#.#.#.###.#.##...###..#..#.", ".#.#.##.###.#..#.##..##...#.##.#.#.###..###.", "###.#...##.###.###..#.#...#.....##.#.##.##.#", "###.#..####...#####...#...#.#...##.###..#.##", ".#.#....####....#....##.#####..##....##.####", "###..###...#.###...#..##.##.#.##.......#.##.", "...#.....##.##....#...#.......##...###.##..#", "..#.#.#..#.###......#####..#...##...####..#.", "....####..##.###.##.#......###....##..#...#.", "#.#...#..######..#####........#.#.###.#.###.", "...#.###..##.#..#..#..##.##..#..##...#.#..#.", "..#...#.##....##.#.##.##..##.#..#.#.#.......", "..##...####.####.....####.#####.###...###...", "#....###..##..##..#.#.###.#.#####....####.#.", ".####...###.####...##....##.##.##.###.##.#.#", "###....#..#.###.....#..#..####.#####..#.#.#.", "#..#.#####.#.#..##.#..#.##..#####.##.####.#.", "#.###...####.####.###....##.####.#.#..###..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2461;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> kingdom = {"..#.#####.######.#.##....###.#.###..#", "##..#..#..#.#.#...#####..##....######", "...####.#######..#####.##.#...#....##", ".###....#.#.#######.#..##..###.#.##..", ".#....#..#.#.#...##....##.#.###.#....", "#.#..######.#.#.#.#..##.#.#..#.....#.", "##########.##.#..###.#.#.#.....###.##", "##.##....#..#...##..#..#....#..##..#.", ".##..#..#######...#.#.##.#.#.#..#..##", ".#.##..#..##..#...#....#..###.#.#....", "##...##.#.#...###..#.....##...#.##.#.", "##..#..###..#....#..#.###.#....#.##..", "#.###..##.#...#.#....#...#........#.#", "###.####.##.####......#.##.....###.##", "##..#...###..#..#.#..##...###..#..#.#", ".##.#.....#..#.##.#.#########.#.#..##", "##.#.#.####........########..###.###.", "#..##..####..#.....#...##.#..##.##..#", "..#.#..##.####.#.###.#.#####.###....#", "#..##..#..##..#.#..###.....#..#..##.#", ".##.#....#.#.#...#..#.#..######.###.#", ".##..##.###..##.#.####.....#.#...##..", ".#..#######.####.##..#..##..#.##.#..#", ".#.#####.###....#.##.#..###.#..#..#..", "##..#.....##......#.#####..##.###.#.#", "##........######...##.#.##....##.##.#", ".###.##.##...#.#...##...#.#####...##.", "#####.###....##..#..#...#...##...#..#", ".#..####....#....###.####...####.#..#", "..##..#..#..#.#.###.....##.#.....####", "####..####..##.###..#.#.##.##....#..#", ".##..#.#..#.#...#.#.#.#.##....###.#..", "#..#...#..##.#.#.##.......#...###.#.#", "##.##.####..#...###.#.##.#.#...#...##", "..##...#.##...####.#......##....#..##", "....##..#.###..#####..#...####..#..#.", "..#..#####.#.#.######.##...#.#.#.#.#.", "##....#..#.###..#.##..##.#..#.#.#.##.", "######.####..#.#..#####..##......#.##", "######.###...##.##.###.###..##.#..#..", "#....####.###..#.#.#....#.###..##.###", ".#....##..#...#..###..#.#.##.#..##...", "..#.#.#.#.#.......#.###..#.#......##.", ".###..#..#..#.#.###.#####..#.#..#.###", "..#...#.##.#.##.#.####.#.#..#.####..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2400;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> kingdom = {"...##..#...#.#.", "##..##....#.###", "...#..#####...#", "####...#.##....", "###..#..#.#..#.", ".##.#..#.#.###.", "#.#..##....#.#.", "#...##.###.#..#", "#.#...#.....##.", ".###.##.#.#.#..", "...##..######.#", "#..#.####.##.##", "####.##..######", "..#.....#...###", "###...####..#.#", "##....##....#..", "##...#..##.##.#", ".#.##..........", ".##..#.#####.#.", ".###.###.###.#.", "#.#..###..##.#.", ".#..#...#...##.", "#..##.#..##.#.#", "#.##..##..#..#.", "##...#...#...##", "..#.##.#.#.###.", ".###..#.##....#", "##.#.##...#...#", "#.#.##.##....##", "....##.#...#.#.", ".##.#...#.###..", "..##...#.#.#.#.", "#.....#...#...#", "..#...######..#", "....##.#..#...#", "##.#...#..#.###", ".#.###.#.##.##.", "..#.##.#..####.", "..#....#....###", "...###..####.#.", ".#.....#.#.##.#", "#...#.##..#...#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 920;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> kingdom = {"##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", "..................................................", "##################################################", ".................................................."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 4851;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> kingdom = {"#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#", "#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#.", ".#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#..#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 4884;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> kingdom = {".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.", ".##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.#", "#.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##.##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 4884;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> kingdom = {"."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> kingdom = {"#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {".."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {".#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> kingdom = {"#."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> kingdom = {"##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {".", "."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {".", "#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> kingdom = {"#", "."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> kingdom = {"#", "#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {"##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################", "##################################################"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {"....#.", ".#....", "..#..#", "####.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> kingdom = {"..#.##", ".##.#.", "#.#..."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> kingdom = {"#", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> kingdom = {"##", "##"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
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
    vector<string> kingdom = {"#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#......##...#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#.......#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#......##...#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..#.#..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#.......#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#.......###...#..###..#....#..####.##.", "#...#..###..#....#..###...#..###..#....#.......##.", "#...#..###..#....#..###...#..###..#....#..####.##.", "#...#.......#....#..###...#..###..#....#.......##."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2311;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> kingdom = {"....####..", ".#.#.#.#.#", "##..##..##", "....##.#.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> kingdom = {"..", "#.", ".."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> kingdom = {"...", "...", "#.."};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> kingdom = {"####", "####"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> kingdom = {"..", "..", ".#"};
    Islands* pObj = new Islands();
    clock_t start = clock();
    int result = pObj->beachLength(kingdom);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=14157&pm=10874
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
 
class Islands {
public:
  int beachLength(vector <string>);
};
 
int Islands::beachLength(vector <string> s) {
  int n = s.size(), m = s[0].length(), i, j, ans = 0, p;
  for (i=0;i<n;i++)
    for (j=0;j<m;j++) {
      if (j < m-1) ans += s[i][j] != s[i][j+1];
      if (i < n-1) ans += s[i][j] != s[i+1][j];
      if (i & 1) p = j+1;
      else p = j-1;
      if (i < n-1 && p >= 0 && p < m) ans += s[i][j] != s[i+1][p];
    }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/