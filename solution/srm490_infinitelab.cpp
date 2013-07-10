/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11231
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

class InfiniteLab {
public:
    long getDistance(vector<string> map, long r1, int c1, long r2, int c2);
};

long InfiniteLab::getDistance(vector<string> map, long r1, int c1, long r2, int c2) {
    long ret;
    return ret;
}


int test0() {
    vector<string> map = {"#...##", ".##...", "..#.##", "#.#.##"};
    long r1 = 1;
    int c1 = 0;
    long r2 = 5;
    int c2 = 3;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> map = {"##.#.", ".#T#T", "...#.", "##.#."};
    long r1 = 7;
    int c1 = 4;
    long r2 = 1;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> map = {"..######.#", ".###T###.T", "..T#.##T##", ".######..#"};
    long r1 = 1;
    int c1 = 0;
    long r2 = 6;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> map = {"..#..", ".#.#.", "....."};
    long r1 = -29;
    int c1 = 2;
    long r2 = 19;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 54;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> map = {".#.#.", "..#..", ".....", ".....", "..#.."};
    long r1 = -999;
    int c1 = 3;
    long r2 = 100;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> map = {"#.#.#.#.##", "#.#.#.#...", "#.#.#..##.", "#.#..#..#.", "#..#..#.#.", "#...#.#.#.", "#.#.#.#.#.", "#.#.#.#.#.", "#.#.#.#.#.", "#.#.#.#.#."};
    long r1 = 999999999999999;
    int c1 = 1;
    long r2 = 9;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000066;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> map = {"#.#.#.#.##", "#.#.#.#...", "#.#.#..##.", "#.#..#..#.", "#..#..#.#.", "#...#.#.#.", "#.#.#.#.#.", "#.#.#.#.#.", "#.#.#.#.#.", "#.#.#.#.#."};
    long r1 = 4999;
    int c1 = 1;
    long r2 = 9;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 5066;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> map = {"..#.#.#.##", "#.#.#.#...", "..#.#..##.", ".##..#..#.", "...#..#.#.", "#...#.#.#.", "..#.#.#.#.", ".##.#.#.#.", "..#.#.#.#.", "#.#.#.#.#."};
    long r1 = 999999999999999;
    int c1 = 1;
    long r2 = 9;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1400000000000076;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> map = {"....................", "###################.", "....................", ".###################"};
    long r1 = -999999999999997;
    int c1 = 0;
    long r2 = 999999999999998;
    int c2 = 19;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20999999999999938;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> map = {"##.#########.####.#", "##.#########......#", "##.##############.#", "##.##############.#", "##..............#.#", "###############.#.#", "##..............#.#", "##.##############.#", "##..............#.#", "###############.#.#", "##..............#.#", "##.##############.#", "##..............#.#", "###############.#.#", "######..........#.#", "######.##########.#", "##................#", "##.###.##########.#", "##.###.......####.#", "##.#########.####.#"};
    long r1 = 1;
    int c1 = 2;
    long r2 = 18;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 55;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> map = {"##.#########.####.#", "##.#########......#", "##.##############.#", "##.##############.#", "##..............#.#", "###############.#.#", "##..............#.#", "##.##############.#", "##..............#.#", "###############.#.#", "##..............#.#", "##.##############.#", "##..............#.#", "###############.#.#", "######..........#.#", "######.##########.#", "##................#", "##.###.##########.#", "##.###.......####.#", "##.#########.####.#"};
    long r1 = 401;
    int c1 = 2;
    long r2 = 100000018;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 99999655;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> map = {".###.#.##.#.#.##.#.#", ".T##.#.##.#.#.T#.#.#", ".###.#.##...#.##...#", "...#.#.##.#.#.##.###", "##.#.#.##.#.#.##.#.#", "T#.#.#T##.#.#.##.#.#", ".#.#.####.#.#.####.#", ".#.#.######.#.####.#", ".#.#...##...#.####.#", ".#.###.##.###.####.#", ".#.#.#.##.#...##...#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.######.#", ".#...#T##.#.###T##.#", ".###.#.##.#.###..#.#", ".###.#.##.#.####.#.#", ".###.#.##.#.####.#.#"};
    long r1 = 15;
    int c1 = 9;
    long r2 = 7;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> map = {".###.#.##.#.#.##.#.#", ".T##.#.##.#.#.T#.#.#", ".###.#.##...#.##...#", "...#.#.##.#.#.##.###", "##.#.#.##.#.#.##.#.#", "T#.#.#T##.#.#.##.#.#", ".#.#.####.#.#.####.#", ".#.#.######.#.####.#", ".#.#...##...#.####.#", ".#.###.##.###.####.#", ".#.#.#.##.#...##...#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.######.#", ".#...#T##.#.###T##.#", ".###.#.##.#.###..#.#", ".###.#.##.#.####.#.#", ".###.#.##.#.####.#.#"};
    long r1 = 33;
    int c1 = 9;
    long r2 = 7;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> map = {".###.#.##.#.#.##.#.#", ".T##.#.##.#.#.T#.#.#", ".###.#.##...#.##...#", "...#.#.##.#.#.##.###", "##.#.#.##.#.#.##.#.#", "T#.#.#T##.#.#.##.#.#", ".#.#.####.#.#.####.#", ".#.#.######.#.####.#", ".#.#...##...#.####.#", ".#.###.##.###.####.#", ".#.#.#.##.#...##...#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.######.#", ".#...#T##.#.###T##.#", ".###.#.##.#.###..#.#", ".###.#.##.#.####.#.#", ".###.#.##.#.####.#.#"};
    long r1 = 15;
    int c1 = 9;
    long r2 = 25;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 91;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> map = {".###.#.##.#.#.##.#.#", ".T##.#.##.#.#.T#.#.#", ".###.#.##...#.##...#", "...#.#.##.#.#.##.###", "##.#.#.##.#.#.##.#.#", "T#.#.#T##.#.#.##.#.#", ".#.#.####.#.#.####.#", ".#.#.######.#.####.#", ".#.#...##...#.####.#", ".#.###.##.###.####.#", ".#.#.#.##.#...##...#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.######.#", ".#...#T##.#.###T##.#", ".###.#.##.#.###..#.#", ".###.#.##.#.####.#.#", ".###.#.##.#.####.#.#"};
    long r1 = 18015;
    int c1 = 9;
    long r2 = 7;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20360;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> map = {".###.#.##.#.#.##.#.#", ".T##.#.##.#.#.T#.#.#", ".###.#.##...#.##...#", "...#.#.##.#.#.##.###", "##.#.#.##.#.#.##.#.#", "T#.#.#T##.#.#.##.#.#", ".#.#.####.#.#.####.#", ".#.#.######.#.####.#", ".#.#...##...#.####.#", ".#.###.##.###.####.#", ".#.#.#.##.#...##...#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.######.#", ".#...#T##.#.###T##.#", ".###.#.##.#.###..#.#", ".###.#.##.#.####.#.#", ".###.#.##.#.####.#.#"};
    long r1 = 15;
    int c1 = 9;
    long r2 = 36007;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 40739;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> map = {".###.#.##.#.#.##.#.#", ".T##.#.##.#.#.T#.#.#", ".###.#.##...#.##...#", "...#.#.##.#.#.##.###", "##.#.#.##.#.#.##.#.#", "T#.#.#T##.#.#.##.#.#", ".#.#.####.#.#.####.#", ".#.#.######.#.####.#", ".#.#...##...#.####.#", ".#.###.##.###.####.#", ".#.#.#.##.#...##...#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.####.#.#", ".#.#.#.##.#.######.#", ".#...#T##.#.###T##.#", ".###.#.##.#.###..#.#", ".###.#.##.#.####.#.#", ".###.#.##.#.####.#.#"};
    long r1 = -179999999985;
    int c1 = 9;
    long r2 = 18000000000007;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20536666666739;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> map = {"#..T##T..#"};
    long r1 = 0;
    int c1 = 1;
    long r2 = 10000;
    int c2 = 8;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 10005;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> map = {".###.#####.#...###.", ".T#T.###...#.###...", ".###.###.###...#.##", "...#.###.#####.#...", "##.#.T#T.###...###.", "...#.###.###.###...", ".###...#.###.#...##", "...###.#.T#T.#.####", "##.#...#.###.#.....", "...#.###...#.#####.", ".###...###.#.T#T...", "...###.#...#.###.##", "##.#...#.###...#.##", "...#.###...###.#.##", ".###...###.#...#.##", ".T####.#...#.###.T#", ".###...#.###...#.##", ".###.###...###.#..."};
    long r1 = 3;
    int c1 = 0;
    long r2 = 9;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> map = {".###.#####.#...###.", ".T#T.###...#.###...", ".###.###.###...#.##", "...#.###.#####.#...", "##.#.T#T.###...###.", "...#.###.###.###...", ".###...#.###.#...##", "...###.#.T#T.#.####", "##.#...#.###.#.....", "...#.###...#.#####.", ".###...###.#.T#T...", "...###.#...#.###.##", "##.#...#.###...#.##", "...#.###...###.#.##", ".###...###.#...#.##", ".T####.#...#.###.T#", ".###...#.###...#.##", ".###.###...###.#..."};
    long r1 = -90000000000000;
    int c1 = 0;
    long r2 = 90000000000000;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 300000000000000;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> map = {".###.#####.#...###.", ".T#T.###...#.###...", ".###.###.###...#.##", "...#.###.#####.#...", "##.#.T#T.###...###.", "...#.###.###.###...", ".###...#.###.#...##", "...###.#.T#T.#.####", "##.#...#.###.#.....", "...#.###...#.#####.", ".###...###.#.T#T...", "...###.#...#.###.##", "##.#...#.###...#.##", "...#.###...###.#.##", ".###...###.#...#.##", ".T####.#...#.###.T#", ".###...#.###...#.##", ".###.###...###.#..."};
    long r1 = 9;
    int c1 = 2;
    long r2 = 0;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 26;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> map = {".###.#####.#...###.", ".T#T.###...#.###...", ".###.###.###...#.##", "...#.###.#####.#...", "##.#.T#T.###...###.", "...#.###.###.###...", ".###...#.###.#...##", "...###.#.T#T.#.####", "##.#...#.###.#.....", "...#.###...#.#####.", ".###...###.#.T#T...", "...###.#...#.###.##", "##.#...#.###...#.##", "...#.###...###.#.##", ".###...###.#...#.##", ".T####.#...#.###.T#", ".###...#.###...#.##", ".###.###...###.#..."};
    long r1 = 10;
    int c1 = 0;
    long r2 = 0;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> map = {".#.#.#.#.#.#.#.#.#", "...#.#.#.#.#.#.#.#", ".###.#.#.#.#.#.#.#", ".#...#.#.#.#.#...#", ".#.###.#.#.#.#####", ".#.#...#.#.#.##...", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#.#...#", ".#.#.###.#.#.#T#T#", ".#.#.#...#.#.#.###", ".#.#.#.###.#.#T#T#", ".#.#.#.#...#.#T##T", ".#.#.#.#.###.###..", ".#.#.#.#.#...#...#", ".#.#.#.#.#.####T#T", ".#.#.#.#.#.#.#T##T", ".#.#.#.#.#.#.#T#T#", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#...#.#", ".#.#.#.#.#.#.#.#.#"};
    long r1 = 5;
    int c1 = 16;
    long r2 = 5;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 265;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> map = {".#.#.#.#.#.#.#.#.#", "...#.#.#.#.#.#.#.#", ".###.#.#.#.#.#.#.#", ".#...#.#.#.#.#...#", ".#.###.#.#.#.#####", ".#.#...#.#.#.##...", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#.#...#", ".#.#.###.#.#.#T#T#", ".#.#.#...#.#.#.###", ".#.#.#.###.#.#T#T#", ".#.#.#.#...#.#T##T", ".#.#.#.#.###.###..", ".#.#.#.#.#...#...#", ".#.#.#.#.#.####T#T", ".#.#.#.#.#.#.#T##T", ".#.#.#.#.#.#.#T#T#", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#...#.#", ".#.#.#.#.#.#.#.#.#"};
    long r1 = 10;
    int c1 = 0;
    long r2 = 999999999999905;
    int c2 = 16;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000160;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> map = {".#.#.#.#.#.#.#.#.#", "...#.#.#.#.#.#.#.#", ".###.#.#.#.#.#.#.#", ".#...#.#.#.#.#...#", ".#.###.#.#.#.#####", ".#.#...#.#.#.##...", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#.#...#", ".#.#.###.#.#.#T#T#", ".#.#.#...#.#.#.###", ".#.#.#.###.#.#T#T#", ".#.#.#.#...#.#T##T", ".#.#.#.#.###.###..", ".#.#.#.#.#...#...#", ".#.#.#.#.#.####T#T", ".#.#.#.#.#.#.#T##T", ".#.#.#.#.#.#.#T#T#", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#...#.#", ".#.#.#.#.#.#.#.#.#"};
    long r1 = -100000000000000;
    int c1 = 0;
    long r2 = 10000000000005;
    int c2 = 17;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 110000000000271;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> map = {".#.#.#.#.#.#.#.#.#", "...#.#.#.#.#.#.#.#", ".###.#.#.#.#.#.#.#", ".#...#.#.#.#.#...#", ".#.###.#.#.#.#####", ".#.#...#.#.#.##...", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#.#...#", ".#.#.###.#.#.#T#T#", ".#.#.#...#.#.#.###", ".#.#.#.###.#.#T#T#", ".#.#.#.#...#.#T##T", ".#.#.#.#.###.###..", ".#.#.#.#.#...#...#", ".#.#.#.#.#.####T#T", ".#.#.#.#.#.#.#T##T", ".#.#.#.#.#.#.#T#T#", ".#.#.#.#.#.#.###.#", ".#.#.#.#.#.#...#.#", ".#.#.#.#.#.#.#.#.#"};
    long r1 = 19;
    int c1 = 0;
    long r2 = 1000000000000000;
    int c2 = 16;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000209;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> map = {"T###.###.###.###T###", "...#...#...#...#...#", ".#.###.###.###.###.#", "...#...#...#...#...#", "T###T###.###.###.###", "...#...#...#...#...#", "##.#.#.###.###.###.#", "...#...#...#...#...#", ".###T###T###.###.###", "...#...#...#...#...#", "##.###.#.#.###.###.#", "...#...#...#...#...#", ".###.###T###T###.###", "...#...#...#...#...#", "##.###.###.#.#.###.#", "...#...#...#...#...#", ".###.###.###T###T###", "...#...#...#...#...#", "##.###.###.###.#.#.#", "...#...#...#...#...#"};
    long r1 = -1000000000000000;
    int c1 = 0;
    long r2 = 1000000000000000;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 2500000000000000;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> map = {"T###.###.###.###T###", "...#...#...#...#...#", ".#.###.###.###.###.#", "...#...#...#...#...#", "T###T###.###.###.###", "...#...#...#...#...#", "##.#.#.###.###.###.#", "...#...#...#...#...#", ".###T###T###.###.###", "...#...#...#...#...#", "##.###.#.#.###.###.#", "...#...#...#...#...#", ".###.###T###T###.###", "...#...#...#...#...#", "##.###.###.#.#.###.#", "...#...#...#...#...#", ".###.###.###T###T###", "...#...#...#...#...#", "##.###.###.###.#.#.#", "...#...#...#...#...#"};
    long r1 = -1000000000000000;
    int c1 = 0;
    long r2 = 1000000000000000;
    int c2 = 8;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 2500000000000005;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> map = {"T###.###.###.###T###", "...#...#...#...#...#", ".#.###.###.###.###.#", "...#...#...#...#...#", "T###T###.###.###.###", "...#...#...#...#...#", "##.#.#.###.###.###.#", "...#...#...#...#...#", ".###T###T###.###.###", "...#...#...#...#...#", "##.###.#.#.###.###.#", "...#...#...#...#...#", ".###.###T###T###.###", "...#...#...#...#...#", "##.###.###.#.#.###.#", "...#...#...#...#...#", ".###.###.###T###T###", "...#...#...#...#...#", "##.###.###.###.#.#.#", "...#...#...#...#...#"};
    long r1 = -1000000000000000;
    int c1 = 0;
    long r2 = 1000000000000000;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 2500000000000008;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> map = {"....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...................."};
    long r1 = -1000000000000000;
    int c1 = 0;
    long r2 = 1000000000000000;
    int c2 = 19;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000000000019;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> map = {"....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...................."};
    long r1 = -1000000000000000;
    int c1 = 0;
    long r2 = -1000000000000000;
    int c2 = 19;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> map = {"....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...................."};
    long r1 = 1000000000000000;
    int c1 = 0;
    long r2 = 1000000000000000;
    int c2 = 19;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> map = {"TT.", "...", "T.T"};
    long r1 = 2;
    int c1 = 0;
    long r2 = -26;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> map = {".#..", "....", ".###", "T..T"};
    long r1 = 1;
    int c1 = 3;
    long r2 = 35;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 37;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> map = {"..###", ".....", "TT###", "TT###", "....."};
    long r1 = 2;
    int c1 = 0;
    long r2 = -16;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> map = {"...T.T.............."};
    long r1 = 13397834057;
    int c1 = 19;
    long r2 = 68196735724;
    int c2 = 6;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 54798901680;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> map = {".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    long r1 = 325022564820;
    int c1 = 0;
    long r2 = 1684482383057;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1359459818237;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> map = {".....##.......T.T...", "...................."};
    long r1 = 6095110755;
    int c1 = 14;
    long r2 = 48357678000;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 42262567255;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> map = {"..", "TT", "..", "..", "..", "..", "TT", "TT", "..", "..", "..", "TT", "TT", "..", "..", "..", "..", "TT", "..", ".."};
    long r1 = 5;
    int c1 = 1;
    long r2 = -969360340698;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 969360340704;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> map = {"....................", "#######.....T.T....#", "............#.#.##.."};
    long r1 = 2;
    int c1 = 11;
    long r2 = 2;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> map = {"...", ".##", ".##", ".#.", ".#.", ".#.", "T#T", ".#.", "T.T", "T#T", "T#T", "...", "T#T", ".##", "...", ".##", ".##", "...", ".##", ".##"};
    long r1 = -359956144098;
    int c1 = 0;
    long r2 = -1792904998765;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1432948854667;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> map = {"..#.#", "T.#T#", "TT..#", "..#..", "..#.#"};
    long r1 = -657;
    int c1 = 0;
    long r2 = 3;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 662;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> map = {".....", "...#.", "#TT##", "##.##", ".T.T."};
    long r1 = 65709214710;
    int c1 = 2;
    long r2 = 517926539320;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 452217324611;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> map = {"....#..#..", "..#T#.T...", "..#T#T##.#", "#...####.#", "#.#T..T#.#"};
    long r1 = -1563;
    int c1 = 1;
    long r2 = -1977;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 415;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> map = {".T..#T....", "#.###.T.#T", "T...#T....", "#.###..##.", ".TT.#...#."};
    long r1 = -193474666857;
    int c1 = 9;
    long r2 = 2;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 193474666862;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> map = {"#.......#......", "...#.#.##T###T.", "######.#TT....#", "####T......T.##", "####.#....#.#.#"};
    long r1 = -566;
    int c1 = 7;
    long r2 = -3537;
    int c2 = 5;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 2973;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> map = {"T.######T#.##..", "T.######.#.##T.", ".T...........T.", ".......T.T..#..", "..............."};
    long r1 = 3;
    int c1 = 0;
    long r2 = -614868865523;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 614868865529;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> map = {".###..######...#....", ".###..###..........#", ".####...T.T....#...#", ".####T#......T......", ".###..###T.....#T#.."};
    long r1 = -3209;
    int c1 = 10;
    long r2 = 0;
    int c2 = 17;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 3212;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> map = {"....................", "#..#.##.#..#.####.#.", "#.T#.##.#..#.####.#T", "...............#....", ".....T.....#T####..."};
    long r1 = 3198513895626;
    int c1 = 1;
    long r2 = 3;
    int c2 = 19;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 3198513895625;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> map = {"T..T.", ".##TT", "T.#.T", ".T.T.", ".....", ".....", ".T.T.", "T...T", ".T..T", "T.#T#"};
    long r1 = -2502;
    int c1 = 2;
    long r2 = 4953;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 7457;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> map = {"T.##T", "TT##.", ".TT##", "..###", "#.###", "T...T", "#####", "T##T#", ".....", "..##."};
    long r1 = -3951849850155;
    int c1 = 3;
    long r2 = -818949783632;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> map = {"...T...T..", "..T......T", ".###.##..#", "####.##.TT", "##.#.##T.T", "##.#####..", ".......##.", ".......##.", "....T..##T", ".###.###.#"};
    long r1 = 0;
    int c1 = 0;
    long r2 = 6;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> map = {"#####.####", ".T....###T", "#####.####", "##.T..T...", "####.T..T.", "##.##.##..", "##.#####..", "#.........", "#.....##..", "##.##.###."};
    long r1 = 66505458211;
    int c1 = 9;
    long r2 = 8733409761727;
    int c2 = 5;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 12133666024929;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> map = {"#...###...###.#", "T..T##.........", "T...T.....##...", "#....##..####.#", "#..T........#T#", "#..#.####T...T.", "...........#...", "#....###..###.#", "##..###..T###T#", "#.TT###...#####"};
    long r1 = 14955;
    int c1 = 2;
    long r2 = 4;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 14957;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> map = {"#............#.", "##.##..T.T..##.", "....#..##......", "####...##....#.", "...#.T.###.T...", "##............#", "##T#.T.####.###", "##.##.....#.###", "##.##.....#.###", "..............."};
    long r1 = -2463873100131;
    int c1 = 6;
    long r2 = 10742216183405;
    int c2 = 13;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 13206089283540;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> map = {"##...T..T...#...###.", "##.T##.#.##.##T.###.", ".......#.##.##.####.", ".........##.#..####.", "##...#.#.........##.", "##...#.#....T..####T", "##....T..##.#..####T", "#...........#..####.", "###..###.##.#...###.", "###..###.##.#T..###T"};
    long r1 = -15023;
    int c1 = 9;
    long r2 = 6161;
    int c2 = 14;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 21189;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> map = {"..##.T...........##T", "..##..##...###.#.##.", "..##..##...###.#.##.", ".##.................", ".###..##T.T###.#.##.", ".###..##T#####T#.###", "......##.#.....#.###", ".###..#..........##.", "..##......####.####.", "..##..##.#####T####T"};
    long r1 = 1;
    int c1 = 9;
    long r2 = -13113259560557;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 13113259560567;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> map = {".....", ".###.", "T###T", "...#.", ".###.", "####.", "#.##.", ".....", ".....", "TT##.", "TT##.", "TT#..", "TT#..", "T.#.T", "T.#T."};
    long r1 = 7;
    int c1 = 4;
    long r2 = 2;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> map = {"T##T#", ".....", "###.#", "###.#", "##..#", "###.#", "#T#T#", ".T#.T", "#.###", ".....", "#T#T#", "#T#T#", "#T#T#", ".T#T#", "...TT"};
    long r1 = 12;
    int c1 = 3;
    long r2 = -7344624012695;
    int c2 = 3;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 8323907214401;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> map = {"TT....###.", "#.#...####", "#T#.T#####", "...T..T...", "#.#..#####", "T.T..####.", ".T....T...", "...T.T....", "###T.T####", "#.......##", "T...T.....", "..........", "#.#T.T####", "......##..", "#T#T..####"};
    long r1 = 1093;
    int c1 = 1;
    long r2 = 6;
    int c2 = 5;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1090;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> map = {"...#.#.#.#", "T.T#.#.#..", "..T#....T.", ".........#", "#.T..T.###", "T.T###.###", "...###.###", ".#.##.....", "...###....", ".#T###T###", ".#.#######", ".T..T.####", "T#.#T#####", "...#.###.#", ".........."};
    long r1 = 4689169436627;
    int c1 = 4;
    long r2 = 8;
    int c2 = 7;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 4689169436623;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> map = {"..T####.T##.#.#", "...####..#.....", "...#####.......", "#.T.####T...#.#", "#...####......#", "....####.......", "#.TT.........#.", "....##.........", "T......#......T", "#.T.##.....T...", ".#TT##.####..#.", ".#.............", "...###......#.#", "...###..T##.#T#", ".T..T....##.#.#"};
    long r1 = 12;
    int c1 = 1;
    long r2 = 30877;
    int c2 = 8;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 30867;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> map = {".......#.####..", "...T######.T...", "......#########", "..#######.#####", ".......##.T.T..", ".#T#.##.#T#####", ".#.#.........##", "...#..#.#.#....", "...#T.#.#T###.#", "......#...##...", "......#.......#", "....#.#..####.#", ".T....T..####..", "#.#.#.##.####.#", "T......T.####.."};
    long r1 = -30412910822633;
    int c1 = 0;
    long r2 = -23680350280553;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 7630235281025;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> map = {"...T.T....#####.#...", "#.#...T.........#..T", "T.....T..#.####.#...", "#.##.....#.####.#...", "####.#...#.####.....", ".........#.####.....", "####.##.T..#####.T#.", "###.T#.......T....##", "#.#..##.#TT#####..##", "#.#...#.#..#####..##", "#T#..T.##..#####..##", "#.#.T.......###.T.##", "#............##...##", "#.#.......#####.#.##", "#.#.#.....#####.#..."};
    long r1 = 6;
    int c1 = 10;
    long r2 = -20920;
    int c2 = 17;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20929;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> map = {".T.....T........#...", "#T...##..T........##", "#....##.....###.#..#", "#...........###.#..#", ".......TT...........", "#.T#.......T....##.#", "....T....T..###.....", "##.#.##.....###.##.#", "...............#....", "....................", "####.##.#T..#####.T#", "#.#..##.....#####..#", ".....##.........T..T", "............##......", "#.#..##...#.###.#..#"};
    long r1 = 10;
    int c1 = 9;
    long r2 = 20476572802062;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20476572802055;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> map = {"...##", "...##", "T.T##", "T.T.#", ".TT..", "T.T..", "....#", "....#", "....#", "#...#", "#TT.#", ".....", "#...#", "T...T", "TT.##", ".....", "T.T##", ".....", "T.T##", "...TT"};
    long r1 = 15;
    int c1 = 4;
    long r2 = 5411;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 5399;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> map = {".####", "T...T", "...##", ".#.##", ".#..#", ".#..#", ".####", ".####", "..#..", ".####", ".....", "T...T", ".####", ".....", ".####", ".####", ".....", "....#", ".####", ".TT.."};
    long r1 = 17678573154041;
    int c1 = 1;
    long r2 = -12183533145221;
    int c2 = 3;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 29862106299266;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> map = {"##.##TT..#", "..T......T", "##.##....#", "T..T......", "....T...T.", "..........", "....TT....", "T.....T...", "##.......#", "#####..#.#", "#####T.#T#", "#####....#", "##.##T..T#", "##.##....#", "##.##....#", "..........", "##.##....#", "##.##T..T#", "##.##.#..#", "##T##...T#"};
    long r1 = -10741;
    int c1 = 2;
    long r2 = 7;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 10751;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> map = {"##T####T##", "##TT###.##", "##..###.##", "##TT##..##", ".T...T....", "..........", "###T##T...", "#.T.T.....", "###.......", "###.##.#..", "##TT#..#..", "...T...T..", "..........", "##.##T##T.", "##.##.##..", "..........", "##T##.##T#", "##.#######", "##########", "..T#####T."};
    long r1 = 8;
    int c1 = 5;
    long r2 = 11;
    int c2 = 5;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> map = {"..T.T..#.###...", "#.##T###T######", "T......T.##....", "T...T.#........", "###..##..####.#", "###..##..####.#", "###..##..####.#", "....T##...T....", "T.........T....", ".T...T.........", "#.#..##..####.#", ".T......T..##.#", "..#.####.######", "....###........", "..........#####", ".T.#####T######", "...#####.......", "...####........", "...............", "#..###......###"};
    long r1 = -48512;
    int c1 = 3;
    long r2 = 42844;
    int c2 = 7;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 91360;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> map = {"##.T.....#.T#..", "######.###..#..", "######T###..#T.", "#...........##.", "....#..........", "#T#T###.#.#..#.", "...........TT#.", "#.#.###.#.#..#.", "#.#.###T#T##.#.", "..T.###....T...", "#T#.###.###T.#.", ".....T...T.....", "###.###T#.#T.#.", "##..###.#.#..#.", ".....##........", "...####....T..T", "##.####..T#.#.T", "##.#........#..", "##.......T..#T.", "##.###...#..#.."};
    long r1 = -41090589858257;
    int c1 = 14;
    long r2 = 18;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 41090589858277;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> map = {"...#.#..#.T.....T..#", "..T..............T..", "...#.............###", "...#.........T..T###", ".#.####.............", "....##..............", ".#.####...###.#..###", "T#.####..T######.###", "##.####.TT######.###", "..........###.#..##.", "##.####...###.#.####", "....................", "...####...##........", "........#.###.......", "####.#..........####", "..##.#T#..T........#", "........#####...#...", "T..#.#.#..T......###", "...#.#.######...####", ".T.#........T...####"};
    long r1 = 2;
    int c1 = 7;
    long r2 = 25016;
    int c2 = 7;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 27516;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> map = {"###.##...T.......#T.", "###.#T..........##T.", "###.###......T.T...#", "###.T.........T###.#", "###.####.#T.....T..#", "##...........#####.#", "##..####.##.########", ".#..####...........#", ".#..####.##..#######", ".#..####.#..........", "T#.####..###T###.###", ".#.####...........##", ".#.###..T##..###.##T", ".#.###...##..###.##.", ".........##..###.#..", "T####...T......#.#..", ".#####...##.####.#..", "..........#.####.#..", "######...##.####.#..", "....##.#.#.........."};
    long r1 = -75872218589797;
    int c1 = 7;
    long r2 = -31161541614335;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 44710676975465;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> map = {".......T######.#..T.", "####.##T#####.T##.#.", "####.##.#####T.##.#T", "####T##.#####T.##.#.", ".T....#T####........", "####.##.#####.TT#.#.", "###..##.#####T..#T#.", "....T......##.T.....", "#.#T.##T#####...#.#.", "#.#.T##.#####..T#.#.", "#.#.T##.#####...#.#T", "#.T.............#T#.", "#T#..#########..#T#.", "#T#..#########..###T", "#.#.##########TT###.", "..T....T.#####......", "#T#.##########..###T", "#.#.###....T.....T..", "#.........T....T.##.", "###T###.######..#T#."};
    long r1 = -15721051679798;
    int c1 = 14;
    long r2 = -13906830010385;
    int c2 = 15;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1814221669414;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> map = {"...######T.T####....", "##T#######.T####..#.", "##.########.T###T.#.", "#....###T.....##..T.", "#.....#####.T...T.#.", "##.########T.#..T..#", "###.####T...T#######", "..#.#####T....###T..", ".....T.....#.T......", ".##.###....###.T.T..", ".##.##...T.######T.#", ".##..#...T.T######.#", "......#T##..####.T..", "...T.##..##.#####..T", "##T......T...#######", "##.........T..#T####", "##T.#..#..##.##T####", ".#.##....T......###T", ".#T#..T.#..#.##.###.", "....T......####.T..."};
    long r1 = 14;
    int c1 = 11;
    long r2 = 7;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> map = {"##T#.#.####.##...T..", "##T###.#######T...#.", "T..#.#####..T######.", ".###T###.##.######.T", "####.###.##.T.T..###", "###T..#..T#.#..#####", "###.#.##T.#.#..###T#", "T##.#.##....#T.##...", ".##....##.T.T.#.....", ".T.##T###.......##.#", "....#.##T........#T.", ".##.####....T###T...", "T##.###..T...#######", ".##.##T#.###.####..T", "T#####T...##.....###", "######T#....T.#.###.", "##T###.#..#.###....T", "...#...T..#.###T##..", ".T......T##.#######.", "##.#.....##.##T...T."};
    long r1 = -16063384044341;
    int c1 = 18;
    long r2 = -10288009629146;
    int c2 = 7;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 8374292902032;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> map = {".T#####.###.#T###...", "#######.###T#T#####.", "..T..##T###.#.###.##", "T######.#####......T", ".#....T.####.....T.#", "..T.....##.##.####.T", "...T..#.##T#....##.#", "...T....T#.##......#", "..T.#T#.##.#.####...", "T...#T..##..........", "....#..###.#.##.#T.T", "#.T.#.T###.#.##.#..#", "##.T#..##T...##.####", ".......#..T..T....##", ".#####.#..T.###.T...", "######.#..TT###...##", "########..T....T..#.", ".#######....T###.T#.", ".######..T#..###.T#.", "...###.T...T.###..#."};
    long r1 = 215764966567;
    int c1 = 2;
    long r2 = 0;
    int c2 = 11;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 269706208213;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> map = {"....................", "##.###....TT......##", "....................", "##########.#########", ".#######............", "...T.....T.....#.##.", ".#############T#T###", "T#############.#T###", ".#############.#.###", ".#############.#.###", "....######.###......", "T#########.###.#T###", "T...T...............", ".#.###.T...T.......#", ".#.#######.###.#####", ".#.#######.###.#####", "...............#####", ".#T#######T###.#####", ".....#####.#...T...T", "T....#####T##......."};
    long r1 = -4616173844444;
    int c1 = 2;
    long r2 = 11;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 6001025997798;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> map = {".T#####.#....#T##...", "........#....#.#....", ".#####...T...##..T..", "..........#..##.....", "###.....#.##.#......", ".T.##...####.#..T...", "###.....#.T..T#.##.#", ".####...##.#........", "..###T#.##..T##.##..", "##.####.##.........#", "##.#######....####.#", "T....#####T...####..", "##.########.#.####..", "##.####....T..####T.", "....####......#####.", "....#######.##....#.", "........###.##.####.", "..#.####.....#.####.", ".##..............##.", ".##T###.##...#.##.#T"};
    long r1 = 18917435425415;
    int c1 = 15;
    long r2 = -3614413639445;
    int c2 = 19;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 24785033971356;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> map = {".......#####.......#", "..#.####............", "..#...#####.......#.", ".....##....T#.#...T.", ".....######....##.#.", "#.......#.T.....T...", "..##.###.#######.##.", "####..##...T.T##.##.", ".....T##.###..T#.##.", "..##..#...T.T.##....", "####.T.#T#.#.######.", "####..##...#.######.", "...#..##......T..T..", "......##..######....", ".....#.#..###.#####.", "##............######", "..###..#.........##.", "#..T....####T#######", ".#...T........###..T", "..#.#.#.####...#####"};
    long r1 = 12;
    int c1 = 13;
    long r2 = 5;
    int c2 = 12;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> map = {"######.#######...TT#", "T#####.##.T..##.....", ".T####..T..#.##.###.", "T.##T....#.#..#####.", "T.###.T..#.#..#####.", "T.###.#..#.##.####T.", "T.###.#.T####.#####.", "..#####T.....T.#....", ".....TT...........##", ".######.....T....T..", "########.###T.###T##", ".###.T.....#T.###.##", ".#T#########.T.##.#.", "...###T......###..T.", ".#.###..T..T.####.#.", ".#####.T#T##........", ".#####..#...T.###T##", ".T.###..#.#...#..T..", "######T.#.#####T####", "#####.......###.TT##"};
    long r1 = 19;
    int c1 = 10;
    long r2 = 16;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> map = {"##....T.....T..#####", "....................", "###.###.###..#######", "###.###.###..#######", "..#.###.##..........", "###.###.###..#######", "###.###.###TT#######", "###...............##", "###.#######..#######", "###.#######T.##T##.#", "###T#######..##T##.#", "###.#######..##.##.#", "###.#######.T##.##T#", "###.###.###.###.##.#", ".T..###.###T........", "#######.###.###T##T#", "..............#.##..", "#######.###.###.##.#", "..........#.#.......", "#######.###..#######"};
    long r1 = 7;
    int c1 = 7;
    long r2 = -13498014955918;
    int c2 = 3;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 13498014955931;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> map = {"##...#####.######.##", "T.T..#.###.##.##....", "##...#.###.##.#....#", ".T.........##.##.T..", ".......T.....T##....", "##.#..#.......##..##", "........T###..###..T", "##.#.T##..........T.", "T####.######.....T..", ".########..#..TT....", ".########..#........", ".#.#......T#.#..#.#T", ".#..............#.#.", ".#.##.###..####.#.#.", "#..##.####T##.#.#.#T", "#..##......##.#.#.##", "#.#...............##", "#.##..#.....T....T##", "#.##.#####.##.###.##", ".....#####.######..."};
    long r1 = 19674328265763;
    int c1 = 4;
    long r2 = 19115939968644;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 558388297128;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> map = {"T###.##.T...........", "####......####.#.###", "####T.T##..###.#####", "####....#..###...#..", "####........#....#..", "########...###......", "####.###.#.##...T.T#", "###.....T#......#T.#", ".....##########.#.#.", "#.#.............#.##", "#....####.........##", "..#.#######.....#...", "#.####.####.###....#", "#.##....###..###...#", ".#####..............", "#...##.##....###.###", "##########.#.###.###", "###.###.##.#.#.....#", "#.....#..#######.###", "..#...T..###.T......"};
    long r1 = 3;
    int c1 = 15;
    long r2 = 11;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> map = {"#...#T.###T#.#..####", "#...#.T###.#....T.##", "#..T##....T#....####", ".T..##.#.....##T.#..", "#.####.###.#T....T.#", "#T####.###.#.##.T...", "T......#....###.T#.#", ".#...T.#####.....T.#", ".#.##T##########T..#", ".#.##.##.....###T.T#", "##.##.#T##.T.......#", "##......T....T..#..#", ".####.T.....###.#.T.", "...T....###.T##.#...", ".####.T###...##.##T.", "T###.....##.T#..###.", ".#..#T..T.#..#..###.", ".#..T....T.#.#..###.", "##...T...#T#.#..###.", "#T..#.##.#.#.#....T."};
    long r1 = 14012146243723;
    int c1 = 11;
    long r2 = 659531468207;
    int c2 = 14;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 14687876253071;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> map = {"T.T.......#####..##.", "#.########.####TT##.", "T.########..T.......", "#T########T####..###", "##########.####..#.#", "##########T####T.#.#", ".#####.###.####..#.#", "...T.......####..T..", "........##.####.....", ".##.##.###.#######.#", ".........#.#######..", "..#.##.###.#######..", ".T......##.#######.T", "..#.##.###..........", "..#.##.#########.#..", ".................##.", "..#.##.########..##.", "#............##..##.", "#.#..............##.", "#.#.##.########..##."};
    long r1 = -19357240715711;
    int c1 = 0;
    long r2 = -380451387232;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 22772147194178;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> map = {"##...#..#T##......#T", "##.T.#..##....T.####", "....T...##.T....###.", "........##.########.", ".#.###..##..........", ".#.###.#.##.######..", "............######..", ".......#.##.........", "##...#.......#######", ".......#.##..#######", ".#...###.##......###", ".#........##.####.##", ".....###.###.####.#.", ".##..#.#.....###....", "###..#.#.##.......#.", "##.....#.#####....#.", "###T##.#T.#####...#.", "###..#....#####...#.", "##......#.#####.#.#.", "..........#####.#.#."};
    long r1 = -8905978007257;
    int c1 = 1;
    long r2 = 5529642087314;
    int c2 = 14;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 15879182104034;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> map = {".##..T.T........#.##", ".#...#.....##..##.##", ".....####..##..##...", ".....####..##.####..", ".####.#.##.##.###...", ".####.#.##.##.......", "#####...##.#########", "####....##.......###", "#...........########", "#.T............T.###", "#.......#.T.####T..#", "#..###.##...T..T..##", "...###.##.....###.##", "...T...##.#T#.###.##", "..####.####.#.###..#", "..#.##......#.###..#", "....#####.....###...", "........##.##....#.#", ".##.######...#..#..#", ".##..###........#..."};
    long r1 = -14174579713480;
    int c1 = 6;
    long r2 = 2;
    int c2 = 3;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 15592037684838;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> map = {"...#..T..####.####T.", "...T....##..T..#####", "..##.#.###..........", "..#.##.###.....##..#", ".##.##.......#.##..#", ".##......T..T#..#..#", "........##......#...", ".##.#....T.T##..#..#", ".##.#.#..#####..#..#", "......#..#####..###.", ".#......#######.####", "###T#######T......##", "....###..T...####.T.", "#.#.##.####.#####.##", "..#.#..#.##.#####.##", "...##..#T##T#####.#.", "...#.....##.###.....", "...#.T...#####T...#.", "..##.....####.#####.", ".T##....T####.#####."};
    long r1 = 7073050128727;
    int c1 = 6;
    long r2 = 16;
    int c2 = 17;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 9194965167326;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> map = {"#########.#..####.#.", "#########.#..####.#.", "#####...........#.#.", "#########.#T.####T#.", "......T............T", "............#####.#.", "#########.#T#####.#T", "#######.............", "#########.#.#####.#.", "#########.#.#####T#T", ".......##.#..##.....", ".....##.............", "...........#.####...", "....................", "......###.##........", "#########.##.######.", "#########.##.######.", "#########.##.######.", "#########T##.####T#.", "#########.##.####.#."};
    long r1 = 14450120243754;
    int c1 = 12;
    long r2 = -15976097284596;
    int c2 = 6;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 30426217528353;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> map = {".######...###.##.##.", "....##.#......##.#..", "##..##.#..#.......#.", ".#.....#.####.##.#.#", ".#..##.#.###........", "........########.#..", "..T.##.#########T#.#", "#...##.#####.....#.#", "....##.##.....####.#", "..####.###.##.#....#", ".......###.##.####.#", "......#.............", "T.##.....#T######..#", "..###.T.##.####...T.", "..###...#...........", "........##.##.###...", "..###..............#", "...####.##.##.##....", "....###.#........##.", "T#....#.#.....##.##T"};
    long r1 = -16479796358068;
    int c1 = 8;
    long r2 = -14743200607519;
    int c2 = 8;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 2083914900663;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> map = {"....##.#............", "#.......#.##..#####.", ".####.#T.....T######", "..###.###.....####..", ".########.....####..", "...###.##...#.......", "##.##.T##T.######..#", "...##...........#...", ".#.##..#....#......#", ".#.#...###...####.##", ".#.....###.#####..##", ".......##...####....", ".#.#######.##.......", "##.......##.####.#.#", ".#.####...TT##.#.#..", "##.T.##.###.#.T..###", "##.##.####..##.#####", "##..#.####T.##T#####", "##T.#.####.#.#.T###.", "##T....##..#....###T"};
    long r1 = 8;
    int c1 = 6;
    long r2 = 18188407206027;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 25463770088438;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> map = {"##...TT.####.###...#", ".....##.########....", "###...T.######...T.#", "####.......#####.#.#", "##....###########..#", "##.#.######.#......#", ".#....T####.##....T.", ".#.####...#.........", "....##..#...##..T.T.", "#.T.....###T##..####", ".####...............", "........#.#.##..#...", "##.##..T#.#.##.T.###", "........#.#####..##.", "......#.#.#####..##.", "#..##.#.#.#####..###", "#..##........###.#.#", "#.#####.####.###.#.#", "..#####.####.#..T..T", "#.##.##.####.###...#"};
    long r1 = -16312092135930;
    int c1 = 18;
    long r2 = -12941460116547;
    int c2 = 1;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 4213290024238;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> map = {"..........######.##.", "...###.#########.#..", "...###.#########.#..", "...##...............", "...###.#########....", ".T.#############T...", "......######........", "...#############....", "#..............#....", "################....", "################.TT.", "####................", "....................", "######.#########.#..", "######T#########.#T.", "#.####.#########T#.T", "#.####.#########.###", ".......#########....", "...###.#############", "..T..T.######......."};
    long r1 = -15115439984437;
    int c1 = 15;
    long r2 = 3;
    int c2 = 0;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20405843978995;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> map = {".#.....#T###..#T....", ".....###.###........", ".##.......#.........", "..#..##...##..###...", "....................", "#.....#...#####.###.", ".##...##.####.......", ".##.........###.###.", ".#......##.####..##.", ".T...##T##.####..#..", ".....##.##..........", "##......###....#.###", "..............#..##.", "###.##..###.#.#..###", "###.##..........####", "....##.####..##.##..", "###.##.##....##.####", ".##.##.#####.##.#.##", ".##.####.###.##.....", ".##..###.###..###.##"};
    long r1 = 19206250751413;
    int c1 = 11;
    long r2 = -8850996261772;
    int c2 = 15;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 28057247013203;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> map = {"##..##.##.....#.#.##", "...######..##.###...", "T#..###...T##.###.##", ".#..###.#.###.###.##", "........#.#.#.####..", "##.#....#.#......###", "#.##....#.#...#....#", "#.............##.#.#", "#.##.#.##.##..##.#.#", ".......#####..##.#.#", "#.######.###.T#...T#", ".#######..#...###..#", ".#######.......##.##", "..##...#..T..T..#.##", ".....###..###.......", "..####..T..T....#...", ".......#...#...##...", ".##.##.##T##....#.#T", ".##....##....##.####", "T..T...##..#.##.#..."};
    long r1 = 10;
    int c1 = 12;
    long r2 = 5;
    int c2 = 12;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> map = {"...#..#........##.#.", "T##......T####.#####", ".###.T##T#####.#####", "..##.......#.#.#####", "#.##..##.###.#.#####", "..###.##.....#.#....", "..#........#.####.#.", "#.......#.........#.", "#.######.....T..T.#.", "#.#####T#.####.##T#.", "#######...##.#.####.", "...####......#.#....", "#............#.....#", "#......##......#####", "#........#.........#", "......#.##.##.#####.", "##.####.#..#...#####", ".#......#.....######", ".######....######.##", ".#........####......"};
    long r1 = 5;
    int c1 = 17;
    long r2 = -1284658936027;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 1541590723255;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> map = {"########..#####.#...", "########..#####.#.TT", "########..#####.#..#", "#.######..#####.#..#", ".............##.#..#", "#............##.#..#", "....####..###.......", ".........######.#...", "#.#############.#..#", "#.#############.#.##", "....................", "#.#############.###.", "#.#######.#########.", ".....####.####......", "........#.######....", "########..#########.", "....................", "########..#######...", "########..#####.#...", "..........#####.#..."};
    long r1 = 18644386181893;
    int c1 = 1;
    long r2 = 12435114645201;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 7451125844062;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> map = {"..T..####.#.####T#..", "###.....#.#.####.#.#", "####..........##.#.#", ".###.####...........", "####.##.##........##", "......#..#....##.##.", "###............#.###", "......#........#.###", "####.......#.#.#..#.", ".....T....#.T..#..#.", "...#....####...#....", "........#......#..#.", "#..#.#..####..##..#.", "#..#....###.......#.", "##..#.....##..##.##.", "###.#...#.###.##.###", ".##.#.......###.....", "....#.#.#.....##.#..", "#####.....##########", "####.####.######.###"};
    long r1 = -11907433497437;
    int c1 = 17;
    long r2 = 11;
    int c2 = 10;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 15479663546689;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> map = {"...##########.##....", "...#...#####....##..", "#..###...###.#######", "......######.#####.#", "#.###########.####.#", "##########.....###.#", "#..##.......#..###.#", "....#.#.###....#....", "T.........#T.###....", "#............###..##", "......#.#.#...##..#.", "..#.##.......####.#.", "#######.#.######...#", "........#...........", "...##.#..........#..", "......##.......#....", ".......#.#..#..#..##", "..#.#.##.#..#..#..##", "..#.######..#.##..##", "....#########.##..#."};
    long r1 = 2;
    int c1 = 8;
    long r2 = 17;
    int c2 = 3;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> map = {"##.T#T#####..####.#.", "#..#.........####T#T", "#..##.####.#.#..#.#.", "#..##.####.#.#..###.", "#.T##.T....###..####", "......####.###..##..", "###....#######..###.", "..T...#.T#####...#..", "####.##..#####......", ".###.....######.....", "..##.##.########..#.", "####.#.....####....#", "...................#", "#####.........#.....", "###.....##........#.", "###.#.####.##.##.##.", "....#.####.#........", "###.#.####.##.....#.", "###.#.##.......#.##.", ".......####...#####."};
    long r1 = 12;
    int c1 = 17;
    long r2 = 18277017598007;
    int c2 = 4;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20104719357806;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> map = {"#.#T..T...", "...T#..T.."};
    long r1 = 4047;
    int c1 = 6;
    long r2 = -1;
    int c2 = 9;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 4051;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> map = {"T#T#.#.#.#.#.#.#.#.#", "#..#.#.#.#.#.#.#.#.#", "..#..#.#.#.#.#.#.#.#", ".#..#..#.#.#.#.#.#.#", ".#.#..#..#.#.#.#.#.#", ".#.#.#..#..#.#.#.#.#", ".#.#.#.#..#..#.#.#.#", ".#.#.#.#.#..#..#.#.#", ".#.#.#.#.#.#..#..#.#", ".#.#.#.#.#.#.#..#..#", ".#.#.#.#.#.#.#.#..#.", ".#.#.#.#.#.#.#.#.#..", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#"};
    long r1 = 19;
    int c1 = 0;
    long r2 = 19;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 363;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> map = {"T#T#.#.#.#.#.#.#.#.#", ".###.#.#.#.#.#.#.#.#", ".#T#T#.#.#.#.#.#.#.#", ".#.###.#.#.#.#.#.#.#", ".#.#T#T#.#.#.#.#.#.#", ".#.#.###.#.#.#.#.#.#", ".#.#.#T#T#.#.#.#.#.#", ".#.#.#.###.#.#.#.#.#", ".#.#.#.#T#T#.#.#.#.#", ".#.#.#.#.###.#.#.#.#", ".#.#.#.#.#T#T#.#.#.#", ".#.#.#.#.#.###.#.#.#", ".#.#.#.#.#.#T#T#.#.#", ".#.#.#.#.#.#.###.#.#", ".#.#.#.#.#.#.#T#T#.#", ".#.#.#.#.#.#.#.###.#", ".#.#.#.#.#.#.#.#T#T#", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#.#.#", "##.#.#.#.#.#.#.#.#.#"};
    long r1 = 17;
    int c1 = 0;
    long r2 = 20000000000018;
    int c2 = 18;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 20000000000332;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> map = {".#.", "##.", "..."};
    long r1 = 0;
    int c1 = 0;
    long r2 = 2;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> map = {".#.#.#.#.#.#.#.#.#..", ".#.#.#.#.#.#.#.#.#.#", ".#.#.#.#.#.#.#.#...#", ".#.#.#.#.#.#.#.###.#", ".#.#.#.#.#.#.#...#.#", ".#.#.#.#.#.#.###.#.#", ".#.#.#.#.#.#...#.#.#", ".#.#.#.#.#.###.#.#.#", ".#.#.#.#.#...#.#.#.#", ".#.#.#.#.###.#.#.#.#", ".#.#.#.#...#.#.#.#.#", ".#.#.#.###.#.#.#.#.#", ".#.#.#...#.#.#.#.#.#", ".#.#.###.#.#.#.#.#.#", ".#.#...#.#.#.#.#.#.#", ".#.###.#.#.#.#.#.#.#", ".#...#.#.#.#.#.#.#.#", ".###.#.#.#.#.#.#.#.#", "...#.#.#.#.#.#.#.#.#", "##.#.#.#.#.#.#.#.#.#"};
    long r1 = 0;
    int c1 = 0;
    long r2 = 0;
    int c2 = 2;
    InfiniteLab* pObj = new InfiniteLab();
    clock_t start = clock();
    long result = pObj->getDistance(map, r1, c1, r2, c2);
    clock_t end = clock();
    delete pObj;
    long expected = 358;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=14243&pm=11231
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;i--) 
#define rep(i,n) FOR(i,1,(n)) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define C(a) memset((a),0,sizeof(a)) 
#define ll long long 
#define mp make_pair 
#define pii pair<int,int> 
#define x first 
#define y second 
#define pll pair<ll,ll> 
#define INFLL 1000000000000000000LL 
 
char mas[22][22]; 
int n,m; 
int ds[1002][22],dh[22],dl[22],sm[22][22]; 
ll mt[22][22],res[22][22],tmp[22][22],o[22][22]; 
inline void mul(ll a[][22],ll b[][22]) 
{ 
  rept(i,m) 
  { 
    rept(j,m) 
    { 
      ll t=INFLL; 
      rept(z,m) 
      { 
        t=min(t,a[i][z]+b[z][j]); 
      } 
      tmp[i][j]=t; 
    } 
  } 
  rept(i,m) rept(j,m) a[i][j]=tmp[i][j]; 
} 
inline int norm(ll r) 
{ 
  r%=n; 
  if (r<0) r+=n; 
  return (int)r; 
} 
const int di[]={0,1,0,-1}; 
const int dj[]={1,0,-1,0}; 
queue<pii> q; 
void bfs(int bi,int bj) 
{ 
  memset(ds,63,sizeof(ds)); 
  if (mas[norm(bi)][bj]=='#') return; 
  ds[bi+500][bj]=0; 
  while (!q.empty()) q.pop(); 
  q.push(mp(bi,bj)); 
  while (!q.empty()) 
  { 
    int ci=q.front().x; 
    int cj=q.front().y; 
    int cd=ds[ci+500][cj]; 
    q.pop(); 
    rept(l,4) 
    { 
      int ni=ci+di[l]; 
      int nj=cj+dj[l]; 
      if (nj<0 || nj>=m) continue; 
      if (abs(ni)>n*(m+3)) continue; 
      if (mas[norm(ni)][nj]=='#') continue; 
      if (cd+1<ds[ni+500][nj]) 
      { 
        ds[ni+500][nj]=cd+1; 
        q.push(mp(ni,nj)); 
      } 
    } 
    if (mas[norm(ci)][cj]=='T') 
    { 
      rept(j,m) 
      { 
        if (j!=cj && mas[norm(ci)][j]=='T') 
        { 
          if (cd+1<ds[ci+500][j]) 
          { 
            ds[ci+500][j]=cd+1; 
            q.push(mp(ci,j)); 
          } 
          break; 
        } 
      } 
    } 
  } 
} 
class InfiniteLab  
  { 
    public: 
       long long getDistance( vector <string> ma, long long r1, int c1, long long r2, int c2 ) 
    { 
      if (r1<r2) 
      { 
        swap(r1,r2); 
        swap(c1,c2); 
      } 
      n=L(ma); m=L(ma[0]); 
      rept(i,n) rept(j,m) mas[i][j]=ma[i][j]; 
      ll d=r1-norm(r1); 
      r1-=d; r2-=d; 
      bfs((int)r1,c1); 
      if (-r2<=n*(m+2)) 
      { 
        int o=ds[(int)r2+500][c2]; 
        if (o>=INF) return -1; else 
        return o; 
      } 
      ll prev=r2+1; 
      while (prev%n!=0) ++prev; 
      rept(j,m) dh[j]=ds[500][j]; 
      bfs(norm(r2),c2); 
      rept(j,m) dl[j]=ds[n+500][j]; 
      rept(j,m) 
      { 
        bfs(0,j); 
        rept(z,m) sm[j][z]=ds[500-n][z]; 
      } 
      prev/=n; 
      rept(i,m) 
      { 
        rept(j,m) 
        { 
          if (sm[i][j]<INF) mt[i][j]=sm[i][j]; else 
          mt[i][j]=INFLL; 
          if (i==j) res[i][j]=0; else 
          res[i][j]=INFLL; 
        } 
      } 
      ll st=prev; 
      while (st) 
      { 
        if (st%2) mul(res,mt); 
        mul(mt,mt); 
        st/=2; 
      } 
      ll ans=INFLL; 
      rept(i,m) 
      { 
        rept(j,m) 
        { 
          ll t=res[i][j]; 
          if (dh[i]<INF) t+=dh[i]; else 
          continue; 
          if (dl[j]<INF) t+=dl[j]; else 
          continue; 
          ans=min(ans,t); 
        } 
      } 
      if (ans==INFLL) ans=-1; 
      return ans; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.16 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/